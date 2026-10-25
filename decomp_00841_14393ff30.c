// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14393ff30 FUN_14393ff30 body=383 status=ok
// SIG undefined FUN_14393ff30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14393ff30(longlong *param_1,int param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_488 [32];
  int local_468 [2];
  undefined8 local_460;
  longlong *local_458;
  undefined1 local_450 [8];
  undefined8 local_448;
  undefined1 local_438 [1024];
  ulonglong local_38;
  
  local_448 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  local_458 = param_1;
  uVar2 = (**(code **)(*param_1 + 0x20))();
  uVar5 = 0;
  local_460 = uVar2;
  do {
    if ((ulonglong)(param_3[1] - *param_3 >> 3) <= uVar5) {
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x28))(param_1,uVar2);
      return;
    }
    uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
    (**(code **)(*param_1 + 0x10))(param_1,local_450,4);
    (**(code **)(*param_1 + 0x10))(param_1,local_468,4);
    for (iVar4 = local_468[0]; 0x3ff < iVar4; iVar4 = iVar4 + -0x400) {
      cVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_438,0x400);
      if (cVar1 == '\0') goto LAB_14394003e;
    }
    if (0 < iVar4) {
      (**(code **)(*param_1 + 0x10))(param_1,local_438,iVar4);
    }
LAB_14394003e:
    if (param_2 == 0) {
      *(undefined8 *)(*param_3 + uVar5 * 8) = uVar3;
    }
    else {
      *(undefined8 *)(*param_3 + -8 + ((param_3[1] - *param_3 >> 3) - uVar5) * 8) = uVar3;
    }
    uVar5 = (ulonglong)((int)uVar5 + 1);
  } while( true );
}



// FUNCTION 1439400c0 FUN_1439400c0 body=2826 status=ok
// SIG undefined FUN_1439400c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439400c0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_248 [32];
  longlong *local_228;
  longlong *local_220;
  longlong *local_218;
  undefined8 *local_210;
  undefined8 *puStack_208;
  undefined8 *local_200;
  undefined1 local_1f8;
  longlong local_1f0;
  undefined1 local_1e8 [8];
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [4];
  int iStack_1bc;
  undefined *local_1b8 [3];
  undefined **local_1a0 [13];
  undefined8 local_138;
  undefined4 local_130;
  basic_ios<char,std::char_traits<char>_> local_120 [104];
  undefined8 local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  ulonglong local_50;
  
  local_1c8 = 0xfffffffffffffffe;
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  puVar16 = (undefined8 *)0x0;
  local_220 = (longlong *)((ulonglong)local_220 & 0xffffffff00000000);
  local_1d8 = *(undefined8 *)(param_1 + 8);
  local_1e0 = param_1;
  FUN_1437125f0();
  local_1d0 = 1;
  uVar8 = UEngine::SeamlessTravelHandlerForWorld(*(longlong *)(param_1 + 8) + 0x30);
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::begin(param_2,&local_218);
  while (plVar9 = (longlong *)FKey::GetFName(param_2,&local_220), local_218 != (longlong *)*plVar9)
  {
    FUN_1439285c0(uVar8,&local_1f0,local_218 + 4);
    plVar9 = (longlong *)FKey::GetFName(uVar8,local_1e8);
    if ((local_1f0 != *plVar9) &&
       ((*(int *)(local_1f0 + 0x120) != (int)local_218[0x28] ||
        (*(int *)(local_1f0 + 0x124) != *(int *)((longlong)local_218 + 0x144))))) {
      local_1b8[0] = &DAT_145af0c78;
      local_1b8[2] = &DAT_145af0c80;
      std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                (local_120);
      local_220 = (longlong *)CONCAT44(local_220._4_4_,1);
      std::basic_iostream<char,std::char_traits<char>_>::
      basic_iostream<char,std::char_traits<char>_>
                ((basic_iostream<char,std::char_traits<char>_> *)local_1b8,
                 (basic_streambuf<char,std::char_traits<char>_> *)local_1a0);
      *(undefined ***)((longlong)local_1b8 + (longlong)*(int *)(local_1b8[0] + 4)) =
           std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((longlong)&iStack_1bc + (longlong)*(int *)(local_1b8[0] + 4)) =
           *(int *)(local_1b8[0] + 4) + -0x98;
      std::basic_streambuf<char,std::char_traits<char>_>::
      basic_streambuf<char,std::char_traits<char>_>
                ((basic_streambuf<char,std::char_traits<char>_> *)local_1a0);
      local_1a0[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                     vftable;
      local_138 = 0;
      local_130 = 0;
      uVar8 = FUN_143927860(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xd8));
      uVar10 = std::operator<<<std::char_traits<char>_>
                         (local_1b8 + 2,"X and/or y subsampling factors of \"");
      uVar10 = std::operator<<<std::char_traits<char>_>(uVar10,local_1f0 + 0x1c);
      uVar10 = std::operator<<<std::char_traits<char>_>(uVar10,"\" channel of input file \"");
      uVar8 = std::operator<<<std::char_traits<char>_>(uVar10,uVar8);
      std::operator<<<std::char_traits<char>_>
                (uVar8,"\" are not compatible with the frame buffer\'s subsampling factors.");
      FUN_143e175c0(&local_b8,local_1b8);
      local_b8 = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(&local_b8,(ThrowInfo *)&DAT_1461db4d8);
    }
    if (*(char *)((longlong)local_218 + 0x19) == '\0') {
      plVar9 = (longlong *)local_218[2];
      if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar9 + 0x19);
        local_218 = plVar9;
        plVar9 = (longlong *)*plVar9;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar9 + 0x19);
          local_218 = plVar9;
          plVar9 = (longlong *)*plVar9;
        }
      }
      else {
        cVar2 = *(char *)(local_218[1] + 0x19);
        plVar7 = (longlong *)local_218[1];
        plVar9 = local_218;
        while ((local_218 = plVar7, cVar2 == '\0' && (plVar9 == (longlong *)local_218[2]))) {
          cVar2 = *(char *)(local_218[1] + 0x19);
          plVar7 = (longlong *)local_218[1];
          plVar9 = local_218;
        }
      }
    }
  }
  local_210 = (undefined8 *)0x0;
  puStack_208 = (undefined8 *)0x0;
  local_200 = (undefined8 *)0x0;
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::begin(uVar8,&local_228);
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::begin(param_2,&local_220);
  plVar9 = (longlong *)FKey::GetFName(param_2,&local_218);
  puVar17 = puStack_208;
  puVar19 = local_210;
  if (local_220 != (longlong *)*plVar9) {
    do {
      plVar9 = (longlong *)FKey::GetFName(uVar8,&local_1f0);
      if (local_228 != (longlong *)*plVar9) {
        do {
          pbVar11 = (byte *)((longlong)local_228 + 0x1c);
          lVar18 = 0x20 - (longlong)pbVar11;
          do {
            bVar3 = *pbVar11;
            uVar13 = (uint)pbVar11[(longlong)local_220 + lVar18];
            if (bVar3 != uVar13) break;
            pbVar11 = pbVar11 + 1;
          } while (uVar13 != 0);
          if (-1 < (int)(bVar3 - uVar13)) break;
          uStack_94 = *(undefined4 *)((longlong)local_228 + 0x124);
          local_98 = (undefined4)local_228[0x24];
          local_b8 = (undefined **)
                     CONCAT44(*(undefined4 *)((longlong)local_228 + 0x11c),
                              *(undefined4 *)((longlong)local_228 + 0x11c));
          lStack_b0 = 0;
          local_a8 = 0;
          lStack_a0 = 0;
          uStack_90 = CONCAT22(uStack_90._2_2_,0x100);
          local_88 = 0;
          if ((&local_b8 < puVar17) && (puVar19 <= &local_b8)) {
            lVar18 = (longlong)&local_b8 - (longlong)puVar19;
            if ((puVar17 == puVar16) &&
               (lVar4 = (longlong)puVar16 - (longlong)puVar17 >> 0x3f,
               ((longlong)puVar16 - (longlong)puVar17) / 0x38 + lVar4 == lVar4)) {
              lVar4 = ((longlong)puVar17 - (longlong)puVar19) / 0x38;
              if (lVar4 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
                std::_Xlength_error("vector<T> too long");
              }
              uVar1 = lVar4 + 1;
              uVar15 = ((longlong)puVar16 - (longlong)puVar19) / 0x38;
              uVar14 = (uVar15 >> 1) + uVar15;
              if (0x492492492492492 - (uVar15 >> 1) < uVar15) {
                uVar14 = 0;
              }
              if (uVar14 < uVar1) {
                uVar14 = uVar1;
              }
              FUN_14393f330(&local_210,uVar14);
              puVar17 = puStack_208;
              puVar19 = local_210;
              puVar16 = local_200;
            }
            puVar12 = puVar19 + (lVar18 / 0x38) * 7;
            if (puVar17 != (undefined8 *)0x0) {
              uVar10 = puVar12[1];
              *puVar17 = *puVar12;
              puVar17[1] = uVar10;
              uVar10 = puVar12[3];
              puVar17[2] = puVar12[2];
              puVar17[3] = uVar10;
              uVar20 = *(undefined4 *)((longlong)puVar12 + 0x24);
              uVar21 = *(undefined4 *)(puVar12 + 5);
              uVar5 = *(undefined4 *)((longlong)puVar12 + 0x2c);
              *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(puVar12 + 4);
              *(undefined4 *)((longlong)puVar17 + 0x24) = uVar20;
              *(undefined4 *)(puVar17 + 5) = uVar21;
              *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar5;
              uVar20 = (undefined4)puVar12[6];
              uVar21 = (undefined4)((ulonglong)puVar12[6] >> 0x20);
LAB_143940623:
              puVar17[6] = CONCAT44(uVar21,uVar20);
            }
          }
          else {
            if ((puVar17 == puVar16) &&
               (lVar18 = (longlong)puVar16 - (longlong)puVar17 >> 0x3f,
               ((longlong)puVar16 - (longlong)puVar17) / 0x38 + lVar18 == lVar18)) {
              lVar18 = ((longlong)puVar17 - (longlong)puVar19) / 0x38;
              if (lVar18 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
                std::_Xlength_error("vector<T> too long");
              }
              uVar1 = lVar18 + 1;
              uVar15 = ((longlong)puVar16 - (longlong)puVar19) / 0x38;
              uVar14 = (uVar15 >> 1) + uVar15;
              if (0x492492492492492 - (uVar15 >> 1) < uVar15) {
                uVar14 = 0;
              }
              if (uVar14 < uVar1) {
                uVar14 = uVar1;
              }
              FUN_14393f330(&local_210,uVar14);
              puVar17 = puStack_208;
              puVar19 = local_210;
              puVar16 = local_200;
            }
            if (puVar17 != (undefined8 *)0x0) {
              *puVar17 = local_b8;
              puVar17[1] = lStack_b0;
              puVar17[2] = local_a8;
              puVar17[3] = lStack_a0;
              *(undefined4 *)(puVar17 + 4) = local_98;
              *(undefined4 *)((longlong)puVar17 + 0x24) = uStack_94;
              *(undefined4 *)(puVar17 + 5) = uStack_90;
              *(undefined4 *)((longlong)puVar17 + 0x2c) = uStack_8c;
              uVar20 = (undefined4)local_88;
              uVar21 = (undefined4)((ulonglong)local_88 >> 0x20);
              goto LAB_143940623;
            }
          }
          puVar17 = puVar17 + 7;
          if (*(char *)((longlong)local_228 + 0x19) == '\0') {
            plVar9 = (longlong *)local_228[2];
            if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
              cVar2 = *(char *)(*plVar9 + 0x19);
              local_228 = plVar9;
              plVar9 = (longlong *)*plVar9;
              while (cVar2 == '\0') {
                cVar2 = *(char *)(*plVar9 + 0x19);
                local_228 = plVar9;
                plVar9 = (longlong *)*plVar9;
              }
            }
            else {
              cVar2 = *(char *)(local_228[1] + 0x19);
              plVar7 = (longlong *)local_228[1];
              plVar9 = local_228;
              while ((local_228 = plVar7, cVar2 == '\0' && (plVar9 == (longlong *)local_228[2]))) {
                cVar2 = *(char *)(local_228[1] + 0x19);
                plVar7 = (longlong *)local_228[1];
                plVar9 = local_228;
              }
            }
          }
          puStack_208 = puVar17;
          puVar12 = (undefined8 *)FKey::GetFName(uVar8,&local_1f0);
        } while (local_228 != (longlong *)*puVar12);
      }
      bVar6 = false;
      puVar12 = (undefined8 *)FKey::GetFName(uVar8,local_1e8);
      if (local_228 == (longlong *)*puVar12) {
LAB_1439406ed:
        bVar6 = true;
      }
      else {
        pbVar11 = (byte *)((longlong)local_228 + 0x1c);
        lVar18 = 0x20 - (longlong)pbVar11;
        do {
          bVar3 = *pbVar11;
          uVar13 = (uint)pbVar11[(longlong)local_220 + lVar18];
          if (bVar3 != uVar13) break;
          pbVar11 = pbVar11 + 1;
        } while (uVar13 != 0);
        if (0 < (int)(bVar3 - uVar13)) goto LAB_1439406ed;
      }
      if (bVar6) {
        uVar20 = (undefined4)local_220[0x24];
      }
      else {
        uVar20 = *(undefined4 *)((longlong)local_228 + 0x11c);
      }
      local_88 = local_220[0x29];
      uStack_94 = *(undefined4 *)((longlong)local_220 + 0x144);
      local_98 = (undefined4)local_220[0x28];
      lStack_a0 = local_220[0x27];
      local_a8 = local_220[0x26];
      lStack_b0 = local_220[0x25];
      local_b8 = (undefined **)CONCAT44(uVar20,(int)local_220[0x24]);
      uStack_90._0_2_ = (ushort)bVar6;
      if ((&local_b8 < puVar17) && (puVar19 <= &local_b8)) {
        lVar18 = (longlong)&local_b8 - (longlong)puVar19;
        if ((puVar17 == puVar16) &&
           (lVar4 = (longlong)puVar16 - (longlong)puVar17 >> 0x3f,
           ((longlong)puVar16 - (longlong)puVar17) / 0x38 + lVar4 == lVar4)) {
          lVar4 = ((longlong)puVar17 - (longlong)puVar19) / 0x38;
          if (lVar4 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("vector<T> too long");
          }
          uVar1 = lVar4 + 1;
          uVar14 = ((longlong)puVar16 - (longlong)puVar19) / 0x38;
          uVar15 = (uVar14 >> 1) + uVar14;
          if (0x492492492492492 - (uVar14 >> 1) < uVar14) {
            uVar15 = 0;
          }
          if (uVar15 < uVar1) {
            uVar15 = uVar1;
          }
          FUN_14393f330(&local_210,uVar15);
          puVar17 = puStack_208;
          puVar19 = local_210;
          puVar16 = local_200;
        }
        puVar12 = puVar19 + (lVar18 / 0x38) * 7;
        if (puVar17 != (undefined8 *)0x0) {
          uVar10 = puVar12[1];
          *puVar17 = *puVar12;
          puVar17[1] = uVar10;
          uVar10 = puVar12[3];
          puVar17[2] = puVar12[2];
          puVar17[3] = uVar10;
          uVar20 = *(undefined4 *)((longlong)puVar12 + 0x24);
          uVar21 = *(undefined4 *)(puVar12 + 5);
          uVar5 = *(undefined4 *)((longlong)puVar12 + 0x2c);
          *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(puVar12 + 4);
          *(undefined4 *)((longlong)puVar17 + 0x24) = uVar20;
          *(undefined4 *)(puVar17 + 5) = uVar21;
          *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar5;
          uVar20 = (undefined4)puVar12[6];
          uVar21 = (undefined4)((ulonglong)puVar12[6] >> 0x20);
LAB_14394099b:
          puVar17[6] = CONCAT44(uVar21,uVar20);
        }
      }
      else {
        if ((puVar17 == puVar16) &&
           (lVar18 = (longlong)puVar16 - (longlong)puVar17 >> 0x3f,
           ((longlong)puVar16 - (longlong)puVar17) / 0x38 + lVar18 == lVar18)) {
          lVar18 = ((longlong)puVar17 - (longlong)puVar19) / 0x38;
          if (lVar18 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("vector<T> too long");
          }
          uVar1 = lVar18 + 1;
          uVar14 = ((longlong)puVar16 - (longlong)puVar19) / 0x38;
          uVar15 = (uVar14 >> 1) + uVar14;
          if (0x492492492492492 - (uVar14 >> 1) < uVar14) {
            uVar15 = 0;
          }
          if (uVar15 < uVar1) {
            uVar15 = uVar1;
          }
          FUN_14393f330(&local_210,uVar15);
          puVar17 = puStack_208;
          puVar19 = local_210;
          puVar16 = local_200;
        }
        if (puVar17 != (undefined8 *)0x0) {
          *puVar17 = local_b8;
          puVar17[1] = lStack_b0;
          puVar17[2] = local_a8;
          puVar17[3] = lStack_a0;
          *(undefined4 *)(puVar17 + 4) = local_98;
          *(undefined4 *)((longlong)puVar17 + 0x24) = uStack_94;
          *(undefined4 *)(puVar17 + 5) = uStack_90;
          *(undefined4 *)((longlong)puVar17 + 0x2c) = uStack_8c;
          uVar20 = (undefined4)local_88;
          uVar21 = (undefined4)((ulonglong)local_88 >> 0x20);
          goto LAB_14394099b;
        }
      }
      puVar17 = puVar17 + 7;
      puStack_208 = puVar17;
      puVar12 = (undefined8 *)FKey::GetFName(uVar8,local_1c0);
      if (((local_228 != (longlong *)*puVar12) && (!bVar6)) &&
         (*(char *)((longlong)local_228 + 0x19) == '\0')) {
        plVar9 = (longlong *)local_228[2];
        if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar9 + 0x19);
          local_228 = plVar9;
          plVar9 = (longlong *)*plVar9;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar9 + 0x19);
            local_228 = plVar9;
            plVar9 = (longlong *)*plVar9;
          }
        }
        else {
          cVar2 = *(char *)(local_228[1] + 0x19);
          plVar7 = (longlong *)local_228[1];
          plVar9 = local_228;
          while ((local_228 = plVar7, cVar2 == '\0' && (plVar9 == (longlong *)local_228[2]))) {
            cVar2 = *(char *)(local_228[1] + 0x19);
            plVar7 = (longlong *)local_228[1];
            plVar9 = local_228;
          }
        }
      }
      if (*(char *)((longlong)local_220 + 0x19) == '\0') {
        plVar9 = (longlong *)local_220[2];
        if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar9 + 0x19);
          local_220 = plVar9;
          plVar9 = (longlong *)*plVar9;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar9 + 0x19);
            local_220 = plVar9;
            plVar9 = (longlong *)*plVar9;
          }
        }
        else {
          cVar2 = *(char *)(local_220[1] + 0x19);
          plVar7 = (longlong *)local_220[1];
          plVar9 = local_220;
          while ((local_220 = plVar7, cVar2 == '\0' && (plVar9 == (longlong *)local_220[2]))) {
            cVar2 = *(char *)(local_220[1] + 0x19);
            plVar7 = (longlong *)local_220[1];
            plVar9 = local_220;
          }
        }
      }
      puVar12 = (undefined8 *)FKey::GetFName(param_2,&local_218);
      param_1 = local_1e0;
    } while (local_220 != (longlong *)*puVar12);
  }
  lVar18 = *(longlong *)(param_1 + 8) + 0x48;
  if (lVar18 != param_2) {
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::clear(lVar18);
    FUN_143930f70(lVar18,param_2,local_1f8);
  }
  FUN_14393f060(*(longlong *)(param_1 + 8) + 0xc0,&local_210);
  if (puVar19 != (undefined8 *)0x0) {
    uVar1 = ((longlong)puVar16 - (longlong)puVar19) / 0x38;
    if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    puVar16 = puVar19;
    if (0xfff < uVar1 * 0x38) {
      if (((ulonglong)puVar19 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      puVar16 = (undefined8 *)puVar19[-1];
      if (puVar19 <= puVar16) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if ((ulonglong)((longlong)puVar19 - (longlong)puVar16) < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < (ulonglong)((longlong)puVar19 - (longlong)puVar16)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(puVar16);
  }
  FUN_143925920(&local_1d8);
  return;
}



// FUNCTION 143940be0 FUN_143940be0 body=106 status=ok
// SIG undefined FUN_143940be0(void)

void FUN_143940be0(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_1;
  if (0xfff < param_2 * 0x18) {
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



// FUNCTION 143940c50 FUN_143940c50 body=265 status=ok
// SIG undefined FUN_143940c50(void)

void FUN_143940c50(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 local_res8;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    if (*param_1 != 0) {
      std::
      _Destroy_range1<std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>,std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64>
                (*param_1,param_1[1],param_1,local_res8);
      uVar1 = *param_1;
      uVar2 = (longlong)(param_1[2] - uVar1) / 0x18;
      if (0xaaaaaaaaaaaaaaa < uVar2) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar3 = uVar1;
      if (0xfff < uVar2 * 0x18) {
        if ((uVar1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        uVar3 = *(ulonglong *)(uVar1 - 8);
        if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        if (uVar1 - uVar3 < 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        if (0x27 < uVar1 - uVar3) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar3);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  } while( true );
}



// FUNCTION 143940d60 _Destroy_range1<std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>,std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64> body=196 status=ok
// SIG undefined _Destroy_range1<std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>,std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64>(void)

void std::
     _Destroy_range1<std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>,std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64>
               (ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    uVar1 = *param_1;
    if (uVar1 != 0) {
      uVar2 = (longlong)(param_1[2] - uVar1) >> 3;
      if (0x1fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar3 = uVar1;
      if (0xfff < uVar2 * 8) {
        if ((uVar1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        uVar3 = *(ulonglong *)(uVar1 - 8);
        if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        if (uVar1 - uVar3 < 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        if (0x27 < uVar1 - uVar3) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar3);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  } while( true );
}



// FUNCTION 143940e30 FUN_143940e30 body=326 status=ok
// SIG undefined FUN_143940e30(void)

undefined8 * FUN_143940e30(undefined8 *param_1,undefined1 param_2,int param_3)

{
  int *piVar1;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  uVar3 = 0xfffffffffffffffe;
  FUN_14394c2d0();
  *param_1 = Imf::TiledInputFile::Data::vftable;
  local_res20 = 0;
  FUN_143929ab0(param_1 + 6,0x40,0x40,0x3f800000,&local_res20,CONCAT44(uVar2,0x3f800000),0,3,uVar3);
  *(undefined4 *)(param_1 + 8) = 0x20;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar3 = FUN_14186c270(param_1 + 0xb);
  param_1[0xb] = uVar3;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_1439483a0(param_1 + 0x13,0,0,0,0,0);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = param_2;
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



// FUNCTION 143940f80 FUN_143940f80 body=154 status=ok
// SIG undefined FUN_143940f80(void)

undefined8 *
FUN_143940f80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = Imf::TiledInputFile::vftable;
  lVar1 = operator_new(0x128);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_143940e30(lVar1,0,param_5);
  }
  param_1[1] = lVar2;
  *(undefined8 *)(lVar2 + 0xe8) = param_3;
  FUN_143929f70(param_1[1] + 0x30,param_2);
  *(undefined4 *)(param_1[1] + 0x50) = param_4;
  FUN_1439419e0(param_1);
  return param_1;
}



// FUNCTION 143941020 FUN_143941020 body=938 status=ok
// SIG undefined FUN_143941020(void)

/* WARNING: Removing unreachable block (ram,0x00014394117f) */

void FUN_143941020(undefined8 *param_1)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  
  *param_1 = Imf::TiledInputFile::Data::vftable;
  FMemory::operator_delete(param_1[0x11]);
  FMemory::operator_delete(param_1[0x12]);
  if ((*(char *)(param_1 + 0x1e) != '\0') &&
     (puVar2 = (undefined8 *)param_1[0x1d], puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  uVar6 = 0;
  if ((longlong)(param_1[0x22] - param_1[0x21]) >> 3 != 0) {
    do {
      lVar3 = *(longlong *)(param_1[0x21] + uVar6 * 8);
      if (lVar3 != 0) {
        puVar2 = *(undefined8 **)(lVar3 + 0x18);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        FUN_14394c500(lVar3 + 0x58);
        if (0xf < *(ulonglong *)(lVar3 + 0x50)) {
          uVar4 = *(ulonglong *)(lVar3 + 0x38);
          uVar5 = uVar4;
          if (0xfff < *(ulonglong *)(lVar3 + 0x50) + 1) {
            if ((uVar4 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            uVar5 = *(ulonglong *)(uVar4 - 8);
            if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            if (uVar4 - uVar5 < 8) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            if (0x27 < uVar4 - uVar5) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(uVar5);
        }
        *(undefined8 *)(lVar3 + 0x50) = 0xf;
        *(undefined8 *)(lVar3 + 0x48) = 0;
        *(undefined1 *)(lVar3 + 0x38) = 0;
        FMemory::operator_delete(lVar3);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)((longlong)(param_1[0x22] - param_1[0x21]) >> 3));
  }
  uVar6 = param_1[0x21];
  if (uVar6 != 0) {
    uVar4 = (longlong)(param_1[0x23] - uVar6) >> 3;
    if (0x1fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar5 = uVar6;
    if (0xfff < uVar4 * 8) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar5 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar5 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar5) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar5);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  uVar6 = param_1[0x1a];
  if (uVar6 != 0) {
    uVar4 = (longlong)(param_1[0x1c] - uVar6) / 0x38;
    if (0x492492492492492 < uVar4) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar5 = uVar6;
    if (0xfff < uVar4 * 0x38) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar5 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar5 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar5) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar5);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  puVar1 = param_1 + 0x15;
  if (*puVar1 != 0) {
    FUN_143940c50(*puVar1,param_1[0x16],puVar1,local_res8[0]);
    uVar6 = *puVar1;
    uVar4 = (longlong)(param_1[0x17] - uVar6) / 0x18;
    if (0xaaaaaaaaaaaaaaa < uVar4) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar5 = uVar6;
    if (0xfff < uVar4 * 0x18) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar5 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar5 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar5) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar5);
    *puVar1 = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::erase(param_1 + 0xb,local_res8,*(undefined8 *)param_1[0xb],(undefined8 *)param_1[0xb]);
  FMemory::operator_delete(param_1[0xb]);
  FUN_143929ce0(param_1 + 6);
  FUN_14394c300(param_1);
  return;
}



// FUNCTION 1439413e0 FUN_1439413e0 body=98 status=ok
// SIG undefined FUN_1439413e0(void)

void FUN_1439413e0(longlong param_1)

{
  longlong *plVar1;
  undefined1 local_res8;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_143940c50(*(longlong *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),plVar1,local_res8);
    FUN_143940be0(*plVar1,(*(longlong *)(param_1 + 0x20) - *plVar1) / 0x18);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 143941450 FUN_143941450 body=182 status=ok
// SIG undefined FUN_143941450(void)

void FUN_143941450(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = Imf::TiledInputFile::vftable;
  cVar2 = (**(code **)(**(longlong **)(param_1[1] + 0xe8) + 8))();
  if ((cVar2 == '\0') &&
     (uVar3 = 0, *(longlong *)(param_1[1] + 0x110) - *(longlong *)(param_1[1] + 0x108) >> 3 != 0)) {
    do {
      FMemory::operator_delete
                (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1[1] + 0x108) + uVar3 * 8) + 8));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)
                     (*(longlong *)(param_1[1] + 0x110) - *(longlong *)(param_1[1] + 0x108) >> 3));
  }
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,uVar4);
  }
  return;
}



// FUNCTION 143941510 FUN_143941510 body=47 status=ok
// SIG undefined FUN_143941510(void)

undefined8 FUN_143941510(undefined8 param_1,uint param_2)

{
  FUN_143941020();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143941540 FUN_143941540 body=86 status=ok
// SIG undefined FUN_143941540(void)

undefined8 * FUN_143941540(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::_anon_54555B6A::TileBufferTask::vftable;
  FUN_14394c610(param_1[3] + 0x58);
  FUN_14394b9a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1439415a0 FUN_1439415a0 body=47 status=ok
// SIG undefined FUN_1439415a0(void)

undefined8 FUN_1439415a0(undefined8 param_1,uint param_2)

{
  FUN_143941450();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1439415d0 FUN_1439415d0 body=26 status=ok
// SIG undefined FUN_1439415d0(void)

undefined8 FUN_1439415d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1439415f0();
  return param_2;
}



// FUNCTION 1439415f0 FUN_1439415f0 body=85 status=ok
// SIG undefined FUN_1439415f0(void)

undefined8 FUN_1439415f0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_143947df0(param_2,lVar1 + 0x40,*(undefined4 *)(lVar1 + 0x6c),*(undefined4 *)(lVar1 + 0x70),
                *(undefined4 *)(lVar1 + 0x74),*(undefined4 *)(lVar1 + 0x78),param_3,param_4);
  return param_2;
}



// FUNCTION 143941650 FUN_143941650 body=35 status=ok
// SIG undefined FUN_143941650(void)

undefined8 FUN_143941650(undefined8 param_1,undefined8 param_2)

{
  FUN_143941680();
  return param_2;
}



// FUNCTION 143941680 FUN_143941680 body=272 status=ok
// SIG undefined FUN_143941680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143941680(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong lVar1;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  int local_1c8;
  int local_1c0;
  int local_1b8;
  int local_1b0;
  longlong local_1a8;
  undefined8 local_198;
  undefined **local_88 [12];
  ulonglong local_28;
  
  local_198 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  lVar1 = *(longlong *)(param_1 + 8);
  local_1a8 = param_1;
  if ((param_5 < *(int *)(lVar1 + 0x7c)) && (-1 < param_5)) {
    if (((param_6 < *(int *)(lVar1 + 0x80)) &&
        (((-1 < param_6 && (param_3 < *(int *)(*(longlong *)(lVar1 + 0x88) + (longlong)param_5 * 4))
          ) && (-1 < param_3)))) &&
       ((param_4 < *(int *)(*(longlong *)(lVar1 + 0x90) + (longlong)param_6 * 4) && (-1 < param_4)))
       ) {
      local_1b0 = param_6;
      local_1b8 = param_5;
      local_1d0 = *(undefined4 *)(lVar1 + 0x78);
      local_1d8 = *(undefined4 *)(lVar1 + 0x74);
      local_1c8 = param_3;
      local_1c0 = param_4;
      FUN_143947e80(param_2,lVar1 + 0x40,*(undefined4 *)(lVar1 + 0x6c),*(undefined4 *)(lVar1 + 0x70)
                   );
      return param_2;
    }
  }
  FUN_143e179e0(local_88,"Arguments not in valid range.");
  local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 1439417a0 FUN_1439417a0 body=567 status=ok
// SIG undefined FUN_1439417a0(void)

void FUN_1439417a0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 local_res10;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x10);
  FUN_143947e80(&local_38,lVar3 + 0x40,*(undefined4 *)(lVar3 + 0x6c),*(undefined4 *)(lVar3 + 0x70),
                *(undefined4 *)(lVar3 + 0x74),*(undefined4 *)(lVar3 + 0x78),
                *(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(lVar1 + 0x28),
                *(undefined4 *)(lVar1 + 0x2c),*(undefined4 *)(lVar1 + 0x30),0xfffffffffffffffe);
  iVar5 = iStack_30 - local_38;
  iVar6 = iVar5 + 1;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((*(longlong **)(lVar1 + 0x18) == (longlong *)0x0) ||
     (*(int *)(*(longlong *)(param_1 + 0x10) + 0xf8) * ((iStack_2c - iStack_34) + 1) * iVar6 <=
      *(int *)(lVar1 + 0x10))) {
    *(undefined4 *)(lVar1 + 0x20) = 1;
    **(undefined8 **)(param_1 + 0x18) = (*(undefined8 **)(param_1 + 0x18))[1];
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x10))();
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x20) = uVar2;
    local_28 = local_38;
    iStack_24 = iStack_34;
    iStack_20 = iStack_30;
    iStack_1c = iStack_2c;
    lVar1 = *(longlong *)(param_1 + 0x18);
    uVar2 = (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x30))
                      (*(longlong **)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 8),
                       *(undefined4 *)(lVar1 + 0x10),&local_28,lVar1);
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10) = uVar2;
  }
  local_res10 = **(undefined8 **)(param_1 + 0x18);
  iVar8 = iStack_34;
  for (iVar9 = iStack_34; iVar9 <= iStack_2c; iVar9 = iVar9 + 1) {
    uVar4 = 0;
    while( true ) {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if ((ulonglong)((*(longlong *)(lVar1 + 0xd8) - *(longlong *)(lVar1 + 0xd0)) / 0x38) <= uVar4)
      break;
      puVar7 = (undefined4 *)(uVar4 * 0x38 + *(longlong *)(lVar1 + 0xd0));
      if (*(char *)((longlong)puVar7 + 0x21) == '\0') {
        lVar1 = *(longlong *)(puVar7 + 4);
        lVar3 = (longlong)(iVar9 - puVar7[0xd] * iVar8) * *(longlong *)(puVar7 + 6) +
                (local_38 - puVar7[0xc] * local_38) * lVar1 + *(longlong *)(puVar7 + 2);
        FUN_14393d910(&local_res10,lVar3,iVar5 * lVar1 + lVar3,lVar1,*(undefined1 *)(puVar7 + 8),
                      *(undefined8 *)(puVar7 + 10),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x20),*puVar7,puVar7[1]);
      }
      else {
        FUN_14393e5b0(&local_res10,puVar7[1],(longlong)iVar6);
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      iVar8 = iStack_34;
    }
  }
  return;
}



// FUNCTION 1439419e0 FUN_1439419e0 body=1147 status=ok
// SIG undefined FUN_1439419e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439419e0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined1 local_c8;
  undefined1 local_c0 [16];
  ulonglong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined **local_88 [12];
  ulonglong local_28;
  
  local_90 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if ((*(uint *)(*(longlong *)(param_1 + 8) + 0x50) >> 9 & 1) == 0) {
    FUN_143e179e0(local_88,"Expected a tiled file but the file is not tiled.");
    local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
  }
  FUN_14392e600(*(longlong *)(param_1 + 8) + 0x30,1);
  puVar9 = (undefined4 *)FUN_14392f650(*(longlong *)(param_1 + 8) + 0x30);
  lVar3 = *(longlong *)(param_1 + 8);
  uVar8 = puVar9[1];
  uVar5 = puVar9[2];
  uVar6 = puVar9[3];
  *(undefined4 *)(lVar3 + 0x40) = *puVar9;
  *(undefined4 *)(lVar3 + 0x44) = uVar8;
  *(undefined4 *)(lVar3 + 0x48) = uVar5;
  *(undefined4 *)(lVar3 + 0x4c) = uVar6;
  puVar9 = (undefined4 *)UEngine::SeamlessTravelHandlerForWorld(*(longlong *)(param_1 + 8) + 0x30);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x68) = *puVar9;
  puVar9 = (undefined4 *)UEngine::SeamlessTravelHandlerForWorld(*(longlong *)(param_1 + 8) + 0x30);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x6c) = *puVar9;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x70) = puVar9[2];
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x74) = puVar9[1];
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x78) = puVar9[3];
  lVar3 = *(longlong *)(param_1 + 8);
  local_d8 = lVar3 + 0x80;
  local_e0 = lVar3 + 0x7c;
  local_e8 = lVar3 + 0x90;
  local_f0 = lVar3 + 0x88;
  local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(lVar3 + 0x78));
  FUN_143948040(lVar3 + 0x40,*(undefined4 *)(lVar3 + 0x6c),*(undefined4 *)(lVar3 + 0x70),
                *(undefined4 *)(lVar3 + 0x74));
  uVar10 = FUN_143947970(*(longlong *)(param_1 + 8) + 0x30);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xf8) = uVar10;
  lVar3 = *(longlong *)(param_1 + 8);
  *(ulonglong *)(lVar3 + 0x100) = (ulonglong)*(uint *)(lVar3 + 0x40) * *(longlong *)(lVar3 + 0xf8);
  lVar3 = *(longlong *)(param_1 + 8);
  *(ulonglong *)(lVar3 + 0x120) = (ulonglong)*(uint *)(lVar3 + 0x44) * *(longlong *)(lVar3 + 0x100);
  puVar14 = (undefined8 *)0x0;
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x110) -
      *(longlong *)(*(longlong *)(param_1 + 8) + 0x108) >> 3 != 0) {
    do {
      puVar11 = (undefined8 *)operator_new(0x68);
      puVar12 = (undefined8 *)0x0;
      local_98 = puVar11;
      if (puVar11 != (undefined8 *)0x0) {
        lVar3 = *(longlong *)(param_1 + 8);
        puVar9 = (undefined4 *)UEngine::SeamlessTravelHandlerForWorld(lVar3 + 0x30);
        uVar10 = FUN_1439380d0(*puVar9,*(undefined8 *)(lVar3 + 0x100),*(undefined4 *)(lVar3 + 0x44),
                               lVar3 + 0x30);
        *puVar11 = 0;
        *(undefined4 *)(puVar11 + 2) = 0;
        puVar11[3] = uVar10;
        uVar8 = FUN_14393e0d0(uVar10);
        *(undefined4 *)(puVar11 + 4) = uVar8;
        *(undefined8 *)((longlong)puVar11 + 0x24) = 0xffffffffffffffff;
        *(undefined8 *)((longlong)puVar11 + 0x2c) = 0xffffffffffffffff;
        *(undefined1 *)((longlong)puVar11 + 0x34) = 0;
        puVar11[10] = 0xf;
        puVar11[9] = 0;
        *(undefined1 *)(puVar11 + 7) = 0;
        FUN_14394c360(puVar11 + 0xb,1);
        puVar12 = puVar11;
      }
      *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x108) + (longlong)puVar14 * 8) =
           puVar12;
      cVar7 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0xe8) + 8))();
      if (cVar7 == '\0') {
        uVar10 = operator_new(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x120));
        *(undefined8 *)
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x108) + (longlong)puVar14 * 8) +
         8) = uVar10;
      }
      puVar14 = (undefined8 *)((longlong)puVar14 + 1);
    } while (puVar14 < (undefined8 *)
                       (*(longlong *)(*(longlong *)(param_1 + 8) + 0x110) -
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x108) >> 3));
  }
  lVar3 = *(longlong *)(param_1 + 8);
  local_f0 = *(undefined8 *)(lVar3 + 0x90);
  local_f8 = *(undefined8 *)(lVar3 + 0x88);
  puVar9 = (undefined4 *)
           FUN_1439483a0(local_c0,*(undefined4 *)(lVar3 + 0x48),*(undefined4 *)(lVar3 + 0x7c),
                         *(undefined4 *)(lVar3 + 0x80));
  lVar3 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar3 + 0x98) = *puVar9;
  *(undefined4 *)(lVar3 + 0x9c) = puVar9[1];
  *(undefined4 *)(lVar3 + 0xa0) = puVar9[2];
  plVar1 = (longlong *)(puVar9 + 4);
  plVar2 = (longlong *)(lVar3 + 0xa8);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FUN_143940c50(*plVar2,*(undefined8 *)(lVar3 + 0xb0),plVar2,local_c8);
      FUN_143940be0(*plVar2,(*(longlong *)(lVar3 + 0xb8) - *plVar2) / 0x18);
      *plVar2 = 0;
      *(undefined8 *)(lVar3 + 0xb0) = 0;
      *(undefined8 *)(lVar3 + 0xb8) = 0;
    }
    *plVar2 = *plVar1;
    *(undefined8 *)(lVar3 + 0xb0) = *(undefined8 *)(puVar9 + 6);
    *(undefined8 *)(lVar3 + 0xb8) = *(undefined8 *)(puVar9 + 8);
    *plVar1 = 0;
    *(undefined8 *)(puVar9 + 6) = 0;
    *(undefined8 *)(puVar9 + 8) = 0;
  }
  if (local_b0 != 0) {
    FUN_143940c50(local_b0,local_a8,&local_b0,local_c8);
    uVar4 = (longlong)(local_a0 - local_b0) / 0x18;
    if (0xaaaaaaaaaaaaaaa < uVar4) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar13 = local_b0;
    if (0xfff < uVar4 * 0x18) {
      if ((local_b0 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar13 = *(ulonglong *)(local_b0 - 8);
      if (local_b0 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (local_b0 - uVar13 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < local_b0 - uVar13) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar13);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  FUN_143949270(lVar3 + 0x98,*(undefined8 *)(lVar3 + 0xe8),lVar3 + 0xc0);
  uVar10 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0xe8) + 0x20))();
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 200) = uVar10;
  return;
}



// FUNCTION 143941e70 FUN_143941e70 body=52 status=ok
// SIG undefined FUN_143941e70(void)

void FUN_143941e70(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_143947fa0(*(undefined4 *)(lVar1 + 0x6c),*(undefined4 *)(lVar1 + 0x70),param_2,
                *(undefined4 *)(lVar1 + 0x4c));
  return;
}



// FUNCTION 143941eb0 FUN_143941eb0 body=248 status=ok
// SIG undefined FUN_143941eb0(void)

undefined8 *
FUN_143941eb0(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4,undefined4 param_5,
             undefined4 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)
            (*(longlong *)(param_2 + 0x108) +
            ((ulonglong)(longlong)param_3 %
            (ulonglong)(*(longlong *)(param_2 + 0x110) - *(longlong *)(param_2 + 0x108) >> 3)) * 8);
  FUN_14394c790(puVar1 + 0xb);
  *(undefined4 *)((longlong)puVar1 + 0x24) = param_4;
  *(undefined4 *)(puVar1 + 5) = param_5;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = param_6;
  *(undefined4 *)(puVar1 + 6) = param_7;
  *puVar1 = 0;
  FUN_143942130(param_2,param_4,param_5,param_6,param_7,puVar1 + 1,puVar1 + 2);
  puVar2 = (undefined8 *)operator_new(0x20);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(puVar2,param_1);
    *puVar2 = Imf::_anon_54555B6A::TileBufferTask::vftable;
    puVar2[2] = param_2;
    puVar2[3] = puVar1;
  }
  return puVar2;
}



// FUNCTION 143941fb0 FUN_143941fb0 body=372 status=ok
// SIG undefined FUN_143941fb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143941fb0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  if ((-1 < param_2) && (param_2 < *(int *)(*(longlong *)(param_1 + 8) + 0x7c))) {
    return *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x88) + (longlong)param_2 * 4)
    ;
  }
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
  uVar1 = FUN_143927860(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xe8));
  uVar2 = std::operator<<<std::char_traits<char>_>
                    (local_178 + 2,"Error calling numXTiles() on image file \"");
  uVar1 = std::operator<<<std::char_traits<char>_>(uVar2,uVar1);
  std::operator<<<std::char_traits<char>_>(uVar1,"\" (Argument is not in valid range).");
  FUN_143e175c0(local_78,local_178);
  local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 143942130 FUN_143942130 body=1092 status=ok
// SIG undefined FUN_143942130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143942130(longlong param_1,int param_2,int param_3,int param_4,int param_5,
                  undefined8 *param_6,int *param_7)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  undefined8 uVar6;
  undefined1 auStack_208 [32];
  int local_1e8;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  undefined8 local_1c0;
  undefined *local_1b8 [3];
  undefined **local_1a0 [13];
  undefined8 local_138;
  undefined4 local_130;
  code *local_120;
  undefined **local_b8 [13];
  ulonglong local_50;
  
  local_1c0 = 0xfffffffffffffffe;
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_1d8 = 0;
  local_1e8 = param_5;
  local_1c4 = param_2;
  plVar3 = (longlong *)FUN_1439486c0(param_1 + 0x98);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    local_1b8[0] = &DAT_145af0c78;
    local_1b8[2] = &DAT_145af0c80;
    local_120 = _vftable__exref;
    local_1d8 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_1b8,
               (basic_streambuf<char,std::char_traits<char>_> *)local_1a0);
    *(undefined ***)((longlong)local_1b8 + (longlong)*(int *)(local_1b8[0] + 4)) =
         std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)local_1b8 + (longlong)*(int *)(local_1b8[0] + 4) + -4) =
         *(int *)(local_1b8[0] + 4) + -0x98;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)local_1a0);
    local_1a0[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_138 = 0;
    local_130 = 0;
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(local_1b8 + 2,"Tile (");
    pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,local_1c4);
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(pbVar5,&DAT_145b036e8);
    pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_3);
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(pbVar5,&DAT_145b036e8);
    pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_4);
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             std::operator<<<std::char_traits<char>_>(pbVar5,&DAT_145b036e8);
    pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_5);
    std::operator<<<std::char_traits<char>_>(pbVar5,") is missing.");
    FUN_143e175c0(local_b8,local_1b8);
    local_b8[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_b8,(ThrowInfo *)&DAT_1461db5c8);
  }
  if (*(longlong *)(param_1 + 200) != lVar1) {
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x28))(*(longlong **)(param_1 + 0xe8),lVar1);
  }
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))(*(longlong **)(param_1 + 0xe8),&local_1c8,4)
  ;
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))(*(longlong **)(param_1 + 0xe8),&local_1cc,4)
  ;
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))(*(longlong **)(param_1 + 0xe8),&local_1d0,4)
  ;
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))(*(longlong **)(param_1 + 0xe8),&local_1d8,4)
  ;
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))(*(longlong **)(param_1 + 0xe8),&local_1d4,4)
  ;
  *param_7 = local_1d4;
  if (local_1c8 != local_1c4) {
    FUN_143e179e0(local_b8,"Unexpected tile x coordinate.");
    local_b8[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_b8,(ThrowInfo *)&DAT_1461db5c8);
  }
  if (local_1cc != param_3) {
    FUN_143e179e0(local_b8,"Unexpected tile y coordinate.");
    local_b8[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_b8,(ThrowInfo *)&DAT_1461db5c8);
  }
  if (local_1d0 != param_4) {
    FUN_143e179e0(local_b8,"Unexpected tile x level number coordinate.");
    local_b8[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_b8,(ThrowInfo *)&DAT_1461db5c8);
  }
  if (local_1d8 != param_5) {
    FUN_143e179e0(local_b8,"Unexpected tile y level number coordinate.");
    local_b8[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_b8,(ThrowInfo *)&DAT_1461db5c8);
  }
  if (*(int *)(param_1 + 0x120) < local_1d4) {
    FUN_143e179e0(local_b8,"Unexpected tile block length.");
    local_b8[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_b8,(ThrowInfo *)&DAT_1461db5c8);
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 8))();
  plVar3 = *(longlong **)(param_1 + 0xe8);
  if (cVar2 == '\0') {
    (**(code **)(*plVar3 + 0x10))(plVar3,*param_6,*param_7);
  }
  else {
    uVar6 = (**(code **)(*plVar3 + 0x18))(plVar3,*param_7);
    *param_6 = uVar6;
  }
  *(longlong *)(param_1 + 200) = (longlong)*param_7 + 0x14 + lVar1;
  return;
}



// FUNCTION 143942580 FUN_143942580 body=34 status=ok
// SIG undefined FUN_143942580(void)

void FUN_143942580(void)

{
  FUN_1439425b0();
  return;
}



// FUNCTION 1439425b0 FUN_1439425b0 body=1076 status=ok
// SIG undefined FUN_1439425b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439425b0(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_3f8 [32];
  int local_3d8;
  int local_3d0;
  int local_3c8;
  int local_3b8;
  int local_3b4;
  int local_3b0;
  int local_3ac;
  undefined1 local_3a8 [8];
  longlong local_3a0;
  longlong local_398;
  undefined8 local_390;
  undefined1 local_388;
  undefined8 local_380;
  int iStack_36c;
  undefined *local_368 [3];
  undefined **local_350 [13];
  undefined8 local_2e8;
  undefined4 local_2e0;
  code *local_2d0;
  undefined **local_168 [12];
  undefined **local_108 [12];
  undefined **local_a8 [13];
  ulonglong local_40;
  
  local_380 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  uVar12 = 0;
  local_3b8 = 0;
  local_390 = *(undefined8 *)(param_1 + 8);
  local_388 = 0;
  local_3b0 = param_2;
  local_3ac = param_3;
  local_3a0 = param_1;
  local_398 = param_1;
  FUN_1437125f0();
  local_388 = 1;
  lVar1 = *(longlong *)(param_1 + 8);
  lVar8 = *(longlong *)(lVar1 + 0xd8) - *(longlong *)(lVar1 + 0xd0);
  lVar2 = lVar8 >> 0x3f;
  if (lVar8 / 0x38 + lVar2 == lVar2) {
    FUN_143e179e0(local_108,"No frame buffer specified as pixel data destination.");
    local_108[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_108,(ThrowInfo *)&DAT_1461db4d8);
  }
  if (param_3 < local_3b0) {
    local_3ac = local_3b0;
    local_3b0 = param_3;
  }
  iVar7 = param_5;
  if (param_5 < param_4) {
    iVar7 = param_4;
    param_4 = param_5;
  }
  iVar10 = iVar7 + 1;
  local_3b8 = 1;
  if (*(int *)(lVar1 + 0x68) == 1) {
    iVar10 = param_4 + -1;
    local_3b8 = -1;
    param_4 = iVar7;
  }
  local_3b4 = iVar10;
  FUN_14394b830(local_3a8);
  uVar15 = uVar12;
  iVar7 = local_3ac;
  for (; iVar11 = local_3b0, param_4 != iVar10; param_4 = param_4 + local_3b8) {
    for (; iVar11 <= iVar7; iVar11 = iVar11 + 1) {
      lVar1 = *(longlong *)(local_3a0 + 8);
      if (((((*(int *)(lVar1 + 0x7c) <= param_6) || (param_6 < 0)) ||
           (*(int *)(lVar1 + 0x80) <= param_7)) ||
          ((param_7 < 0 || (*(int *)(*(longlong *)(lVar1 + 0x88) + (longlong)param_6 * 4) <= iVar11)
           ))) || ((iVar11 < 0 ||
                   ((*(int *)(*(longlong *)(lVar1 + 0x90) + (longlong)param_7 * 4) <= param_4 ||
                    (bVar3 = true, param_4 < 0)))))) {
        bVar3 = false;
      }
      if (!bVar3) {
        local_368[0] = &DAT_145af0c78;
        local_368[2] = &DAT_145af0c80;
        local_2d0 = _vftable__exref;
        local_3b8 = 1;
        std::basic_iostream<char,std::char_traits<char>_>::
        basic_iostream<char,std::char_traits<char>_>
                  ((basic_iostream<char,std::char_traits<char>_> *)local_368,
                   (basic_streambuf<char,std::char_traits<char>_> *)local_350);
        *(undefined ***)((longlong)local_368 + (longlong)*(int *)(local_368[0] + 4)) =
             std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((longlong)&iStack_36c + (longlong)*(int *)(local_368[0] + 4)) =
             *(int *)(local_368[0] + 4) + -0x98;
        std::basic_streambuf<char,std::char_traits<char>_>::
        basic_streambuf<char,std::char_traits<char>_>
                  ((basic_streambuf<char,std::char_traits<char>_> *)local_350);
        local_350[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                       vftable;
        local_2e8 = 0;
        local_2e0 = 0;
        pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
                 std::operator<<<std::char_traits<char>_>(local_368 + 2,"Tile (");
        pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,iVar11);
        pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
                 std::operator<<<std::char_traits<char>_>(pbVar5,&DAT_145b036e8);
        pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_4);
        pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
                 std::operator<<<std::char_traits<char>_>(pbVar5,&DAT_145b036e8);
        pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_6);
        pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
                 std::operator<<<std::char_traits<char>_>(pbVar5,&DAT_145b0a66c);
        pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_7);
        std::operator<<<std::char_traits<char>_>(pbVar5,") is not a valid tile.");
        FUN_143e175c0(local_168,local_368);
        local_168[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
        _guard_xfg_dispatch_icall_nop(local_168,(ThrowInfo *)&DAT_1461db4d8);
      }
      local_3c8 = param_7;
      local_3d0 = param_6;
      local_3d8 = param_4;
      uVar6 = FUN_143941eb0(local_3a8,lVar1,uVar15,iVar11);
      FUN_14394bb10(uVar6);
      uVar15 = (ulonglong)((int)uVar15 + 1);
      iVar7 = local_3ac;
    }
    iVar10 = local_3b4;
  }
  FUN_14394b9b0(local_3a8);
  plVar9 = (longlong *)(*(longlong *)(local_3a0 + 8) + 0x108);
  uVar14 = uVar12;
  uVar15 = uVar12;
  if (*(longlong *)(*(longlong *)(local_3a0 + 8) + 0x110) - *plVar9 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(uVar12 + *plVar9);
      if ((*(char *)(lVar1 + 0x34) != '\0') && (uVar15 == 0)) {
        uVar15 = lVar1 + 0x38;
      }
      *(undefined1 *)(lVar1 + 0x34) = 0;
      uVar13 = (int)uVar14 + 1;
      uVar12 = uVar12 + 8;
      plVar9 = (longlong *)(*(longlong *)(local_3a0 + 8) + 0x108);
      uVar14 = (ulonglong)uVar13;
    } while ((ulonglong)(longlong)(int)uVar13 <
             (ulonglong)(*(longlong *)(*(longlong *)(local_3a0 + 8) + 0x110) - *plVar9 >> 3));
    if (uVar15 != 0) {
      FUN_143e17810(local_a8,uVar15);
      local_a8[0] = Iex::IoExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_a8,(ThrowInfo *)&DAT_1461db6b8);
    }
  }
  FUN_143925920(&local_390);
  return;
}



// FUNCTION 1439429f0 FUN_1439429f0 body=3674 status=ok
// SIG undefined FUN_1439429f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439429f0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_248 [32];
  longlong *local_228;
  longlong *local_220;
  undefined8 *local_218;
  undefined8 *puStack_210;
  undefined8 *local_208;
  longlong *local_200;
  undefined1 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined1 local_1e0 [8];
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [4];
  int iStack_1bc;
  undefined *local_1b8 [3];
  undefined **local_1a0 [13];
  undefined8 local_138;
  undefined4 local_130;
  basic_ios<char,std::char_traits<char>_> local_120 [104];
  undefined8 local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong local_50;
  
  local_1c8 = 0xfffffffffffffffe;
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  puVar16 = (undefined8 *)0x0;
  local_220 = (longlong *)((ulonglong)local_220 & 0xffffffff00000000);
  local_1d8 = *(undefined8 *)(param_1 + 8);
  local_1e8 = param_1;
  FUN_1437125f0();
  local_1d0 = 1;
  uVar8 = UEngine::SeamlessTravelHandlerForWorld(*(longlong *)(param_1 + 8) + 0x30);
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::begin(param_2,&local_200);
  while (plVar9 = (longlong *)FKey::GetFName(param_2,&local_220), local_200 != (longlong *)*plVar9)
  {
    FUN_1439285c0(uVar8,&local_1f0,local_200 + 4);
    plVar9 = (longlong *)FKey::GetFName(uVar8,local_1e0);
    if ((local_1f0 != *plVar9) &&
       ((*(int *)(local_1f0 + 0x120) != (int)local_200[0x28] ||
        (*(int *)(local_1f0 + 0x124) != *(int *)((longlong)local_200 + 0x144))))) {
      local_1b8[0] = &DAT_145af0c78;
      local_1b8[2] = &DAT_145af0c80;
      std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                (local_120);
      local_220 = (longlong *)CONCAT44(local_220._4_4_,1);
      std::basic_iostream<char,std::char_traits<char>_>::
      basic_iostream<char,std::char_traits<char>_>
                ((basic_iostream<char,std::char_traits<char>_> *)local_1b8,
                 (basic_streambuf<char,std::char_traits<char>_> *)local_1a0);
      *(undefined ***)((longlong)local_1b8 + (longlong)*(int *)(local_1b8[0] + 4)) =
           std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((longlong)&iStack_1bc + (longlong)*(int *)(local_1b8[0] + 4)) =
           *(int *)(local_1b8[0] + 4) + -0x98;
      std::basic_streambuf<char,std::char_traits<char>_>::
      basic_streambuf<char,std::char_traits<char>_>
                ((basic_streambuf<char,std::char_traits<char>_> *)local_1a0);
      local_1a0[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                     vftable;
      local_138 = 0;
      local_130 = 0;
      uVar8 = FUN_143927860(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xe8));
      uVar10 = std::operator<<<std::char_traits<char>_>
                         (local_1b8 + 2,"X and/or y subsampling factors of \"");
      uVar10 = std::operator<<<std::char_traits<char>_>(uVar10,local_1f0 + 0x1c);
      uVar10 = std::operator<<<std::char_traits<char>_>(uVar10,"\" channel of input file \"");
      uVar8 = std::operator<<<std::char_traits<char>_>(uVar10,uVar8);
      std::operator<<<std::char_traits<char>_>
                (uVar8,"\" are not compatible with the frame buffer\'s subsampling factors.");
      FUN_143e175c0(&local_b8,local_1b8);
      local_b8 = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(&local_b8,(ThrowInfo *)&DAT_1461db4d8);
    }
    if (*(char *)((longlong)local_200 + 0x19) == '\0') {
      plVar9 = (longlong *)local_200[2];
      if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar9 + 0x19);
        local_200 = plVar9;
        plVar9 = (longlong *)*plVar9;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar9 + 0x19);
          local_200 = plVar9;
          plVar9 = (longlong *)*plVar9;
        }
      }
      else {
        cVar2 = *(char *)(local_200[1] + 0x19);
        plVar7 = (longlong *)local_200[1];
        plVar9 = local_200;
        while ((local_200 = plVar7, cVar2 == '\0' && (plVar9 == (longlong *)local_200[2]))) {
          cVar2 = *(char *)(local_200[1] + 0x19);
          plVar7 = (longlong *)local_200[1];
          plVar9 = local_200;
        }
      }
    }
  }
  local_218 = (undefined8 *)0x0;
  puStack_210 = (undefined8 *)0x0;
  local_208 = (undefined8 *)0x0;
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::begin(uVar8,&local_228);
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::begin(param_2,&local_220);
  plVar9 = (longlong *)FKey::GetFName(param_2,&local_200);
  puVar17 = puStack_210;
  puVar19 = local_218;
  if (local_220 != (longlong *)*plVar9) {
    do {
      plVar9 = (longlong *)FKey::GetFName(uVar8,&local_1f0);
      if (local_228 != (longlong *)*plVar9) {
        do {
          pbVar11 = (byte *)((longlong)local_228 + 0x1c);
          lVar18 = 0x20 - (longlong)pbVar11;
          do {
            bVar3 = *pbVar11;
            uVar13 = (uint)pbVar11[(longlong)local_220 + lVar18];
            if (bVar3 != uVar13) break;
            pbVar11 = pbVar11 + 1;
          } while (uVar13 != 0);
          if (-1 < (int)(bVar3 - uVar13)) break;
          local_b8 = (undefined **)
                     CONCAT44(*(undefined4 *)((longlong)local_228 + 0x11c),
                              *(undefined4 *)((longlong)local_228 + 0x11c));
          lStack_b0 = 0;
          local_a8 = 0;
          lStack_a0 = 0;
          local_98 = CONCAT22(local_98._2_2_,0x100);
          uStack_90 = 0;
          local_88 = 0;
          if ((&local_b8 < puVar17) && (puVar19 <= &local_b8)) {
            lVar18 = (longlong)&local_b8 - (longlong)puVar19;
            if ((puVar17 == puVar16) &&
               (lVar4 = (longlong)puVar16 - (longlong)puVar17 >> 0x3f,
               ((longlong)puVar16 - (longlong)puVar17) / 0x38 + lVar4 == lVar4)) {
              lVar4 = ((longlong)puVar17 - (longlong)puVar19) / 0x38;
              if (lVar4 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
                std::_Xlength_error("vector<T> too long");
              }
              uVar1 = lVar4 + 1;
              uVar15 = ((longlong)puVar16 - (longlong)puVar19) / 0x38;
              uVar14 = (uVar15 >> 1) + uVar15;
              if (0x492492492492492 - (uVar15 >> 1) < uVar15) {
                uVar14 = 0;
              }
              if (uVar14 < uVar1) {
                uVar14 = uVar1;
              }
              FUN_14393f330(&local_218,uVar14);
              puVar17 = puStack_210;
              puVar19 = local_218;
              puVar16 = local_208;
            }
            puVar12 = puVar19 + (lVar18 / 0x38) * 7;
            if (puVar17 != (undefined8 *)0x0) {
              uVar10 = puVar12[1];
              *puVar17 = *puVar12;
              puVar17[1] = uVar10;
              uVar10 = puVar12[3];
              puVar17[2] = puVar12[2];
              puVar17[3] = uVar10;
              uVar20 = *(undefined4 *)((longlong)puVar12 + 0x24);
              uVar21 = *(undefined4 *)(puVar12 + 5);
              uVar5 = *(undefined4 *)((longlong)puVar12 + 0x2c);
              *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(puVar12 + 4);
              *(undefined4 *)((longlong)puVar17 + 0x24) = uVar20;
              *(undefined4 *)(puVar17 + 5) = uVar21;
              *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar5;
              puVar17[6] = puVar12[6];
            }
          }
          else {
            if ((puVar17 == puVar16) &&
               (lVar18 = (longlong)puVar16 - (longlong)puVar17 >> 0x3f,
               ((longlong)puVar16 - (longlong)puVar17) / 0x38 + lVar18 == lVar18)) {
              lVar18 = ((longlong)puVar17 - (longlong)puVar19) / 0x38;
              if (lVar18 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
                std::_Xlength_error("vector<T> too long");
              }
              uVar1 = lVar18 + 1;
              uVar15 = ((longlong)puVar16 - (longlong)puVar19) / 0x38;
              uVar14 = (uVar15 >> 1) + uVar15;
              if (0x492492492492492 - (uVar15 >> 1) < uVar15) {
                uVar14 = 0;
              }
              if (uVar14 < uVar1) {
                uVar14 = uVar1;
              }
              FUN_14393f330(&local_218,uVar14);
              puVar17 = puStack_210;
              puVar19 = local_218;
              puVar16 = local_208;
            }
            if (puVar17 != (undefined8 *)0x0) {
              *puVar17 = local_b8;
              puVar17[1] = lStack_b0;
              puVar17[2] = local_a8;
              puVar17[3] = lStack_a0;
              *(undefined4 *)(puVar17 + 4) = local_98;
              *(undefined4 *)((longlong)puVar17 + 0x24) = uStack_94;
              *(undefined4 *)(puVar17 + 5) = (undefined4)uStack_90;
              *(undefined4 *)((longlong)puVar17 + 0x2c) = uStack_90._4_4_;
              puVar17[6] = local_88;
            }
          }
          puVar17 = puVar17 + 7;
          if (*(char *)((longlong)local_228 + 0x19) == '\0') {
            plVar9 = (longlong *)local_228[2];
            if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
              cVar2 = *(char *)(*plVar9 + 0x19);
              local_228 = plVar9;
              plVar9 = (longlong *)*plVar9;
              while (cVar2 == '\0') {
                cVar2 = *(char *)(*plVar9 + 0x19);
                local_228 = plVar9;
                plVar9 = (longlong *)*plVar9;
              }
            }
            else {
              cVar2 = *(char *)(local_228[1] + 0x19);
              plVar7 = (longlong *)local_228[1];
              plVar9 = local_228;
              while ((local_228 = plVar7, cVar2 == '\0' && (plVar9 == (longlong *)local_228[2]))) {
                cVar2 = *(char *)(local_228[1] + 0x19);
                plVar7 = (longlong *)local_228[1];
                plVar9 = local_228;
              }
            }
          }
          puStack_210 = puVar17;
          puVar12 = (undefined8 *)FKey::GetFName(uVar8,&local_1f0);
        } while (local_228 != (longlong *)*puVar12);
      }
      bVar6 = false;
      puVar12 = (undefined8 *)FKey::GetFName(uVar8,local_1e0);
      if (local_228 == (longlong *)*puVar12) {
LAB_14394302b:
        bVar6 = true;
      }
      else {
        pbVar11 = (byte *)((longlong)local_228 + 0x1c);
        lVar18 = 0x20 - (longlong)pbVar11;
        do {
          bVar3 = *pbVar11;
          uVar13 = (uint)pbVar11[(longlong)local_220 + lVar18];
          if (bVar3 != uVar13) break;
          pbVar11 = pbVar11 + 1;
        } while (uVar13 != 0);
        if (0 < (int)(bVar3 - uVar13)) goto LAB_14394302b;
      }
      if (bVar6) {
        uVar20 = (undefined4)local_220[0x24];
      }
      else {
        uVar20 = *(undefined4 *)((longlong)local_228 + 0x11c);
      }
      uStack_90 = local_220[0x29];
      lStack_a0 = local_220[0x27];
      local_a8 = local_220[0x26];
      lStack_b0 = local_220[0x25];
      local_b8 = (undefined **)CONCAT44(uVar20,(int)local_220[0x24]);
      local_98._0_2_ = (ushort)bVar6;
      local_88 = (ulonglong)
                 CONCAT14(*(char *)((longlong)local_220 + 0x151) != '\0',
                          (uint)((char)local_220[0x2a] != '\0'));
      if ((&local_b8 < puVar17) && (puVar19 <= &local_b8)) {
        lVar18 = (longlong)&local_b8 - (longlong)puVar19;
        if ((puVar17 == puVar16) &&
           (lVar4 = (longlong)puVar16 - (longlong)puVar17 >> 0x3f,
           ((longlong)puVar16 - (longlong)puVar17) / 0x38 + lVar4 == lVar4)) {
          lVar4 = ((longlong)puVar17 - (longlong)puVar19) / 0x38;
          if (lVar4 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("vector<T> too long");
          }
          uVar1 = lVar4 + 1;
          uVar14 = ((longlong)puVar16 - (longlong)puVar19) / 0x38;
          uVar15 = (uVar14 >> 1) + uVar14;
          if (0x492492492492492 - (uVar14 >> 1) < uVar14) {
            uVar15 = 0;
          }
          if (uVar15 < uVar1) {
            uVar15 = uVar1;
          }
          FUN_14393f330(&local_218,uVar15);
          puVar17 = puStack_210;
          puVar19 = local_218;
          puVar16 = local_208;
        }
        puVar12 = puVar19 + (lVar18 / 0x38) * 7;
        if (puVar17 != (undefined8 *)0x0) {
          uVar10 = puVar12[1];
          *puVar17 = *puVar12;
          puVar17[1] = uVar10;
          uVar10 = puVar12[3];
          puVar17[2] = puVar12[2];
          puVar17[3] = uVar10;
          uVar20 = *(undefined4 *)((longlong)puVar12 + 0x24);
          uVar21 = *(undefined4 *)(puVar12 + 5);
          uVar5 = *(undefined4 *)((longlong)puVar12 + 0x2c);
          *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(puVar12 + 4);
          *(undefined4 *)((longlong)puVar17 + 0x24) = uVar20;
          *(undefined4 *)(puVar17 + 5) = uVar21;
          *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar5;
          uVar20 = (undefined4)puVar12[6];
          uVar21 = (undefined4)((ulonglong)puVar12[6] >> 0x20);
LAB_1439432e7:
          puVar17[6] = CONCAT44(uVar21,uVar20);
        }
      }
      else {
        if ((puVar17 == puVar16) &&
           (lVar18 = (longlong)puVar16 - (longlong)puVar17 >> 0x3f,
           ((longlong)puVar16 - (longlong)puVar17) / 0x38 + lVar18 == lVar18)) {
          lVar18 = ((longlong)puVar17 - (longlong)puVar19) / 0x38;
          if (lVar18 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("vector<T> too long");
          }
          uVar1 = lVar18 + 1;
          uVar14 = ((longlong)puVar16 - (longlong)puVar19) / 0x38;
          uVar15 = (uVar14 >> 1) + uVar14;
          if (0x492492492492492 - (uVar14 >> 1) < uVar14) {
            uVar15 = 0;
          }
          if (uVar15 < uVar1) {
            uVar15 = uVar1;
          }
          FUN_14393f330(&local_218,uVar15);
          puVar17 = puStack_210;
          puVar19 = local_218;
          puVar16 = local_208;
        }
        if (puVar17 != (undefined8 *)0x0) {
          *puVar17 = local_b8;
          puVar17[1] = lStack_b0;
          puVar17[2] = local_a8;
          puVar17[3] = lStack_a0;
          *(undefined4 *)(puVar17 + 4) = local_98;
          *(undefined4 *)((longlong)puVar17 + 0x24) = uStack_94;
          *(undefined4 *)(puVar17 + 5) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)puVar17 + 0x2c) = uStack_90._4_4_;
          uVar20 = (undefined4)local_88;
          uVar21 = (undefined4)(local_88 >> 0x20);
          goto LAB_1439432e7;
        }
      }
      puVar17 = puVar17 + 7;
      puStack_210 = puVar17;
      puVar12 = (undefined8 *)FKey::GetFName(uVar8,local_1c0);
      if (((local_228 != (longlong *)*puVar12) && (!bVar6)) &&
         (*(char *)((longlong)local_228 + 0x19) == '\0')) {
        plVar9 = (longlong *)local_228[2];
        if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar9 + 0x19);
          local_228 = plVar9;
          plVar9 = (longlong *)*plVar9;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar9 + 0x19);
            local_228 = plVar9;
            plVar9 = (longlong *)*plVar9;
          }
        }
        else {
          cVar2 = *(char *)(local_228[1] + 0x19);
          plVar7 = (longlong *)local_228[1];
          plVar9 = local_228;
          while ((local_228 = plVar7, cVar2 == '\0' && (plVar9 == (longlong *)local_228[2]))) {
            cVar2 = *(char *)(local_228[1] + 0x19);
            plVar7 = (longlong *)local_228[1];
            plVar9 = local_228;
          }
        }
      }
      if (*(char *)((longlong)local_220 + 0x19) == '\0') {
        plVar9 = (longlong *)local_220[2];
        if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar9 + 0x19);
          local_220 = plVar9;
          plVar9 = (longlong *)*plVar9;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar9 + 0x19);
            local_220 = plVar9;
            plVar9 = (longlong *)*plVar9;
          }
        }
        else {
          cVar2 = *(char *)(local_220[1] + 0x19);
          plVar7 = (longlong *)local_220[1];
          plVar9 = local_220;
          while ((local_220 = plVar7, cVar2 == '\0' && (plVar9 == (longlong *)local_220[2]))) {
            cVar2 = *(char *)(local_220[1] + 0x19);
            plVar7 = (longlong *)local_220[1];
            plVar9 = local_220;
          }
        }
      }
      puVar12 = (undefined8 *)FKey::GetFName(param_2,&local_200);
      param_1 = local_1e8;
    } while (local_220 != (longlong *)*puVar12);
  }
  puVar12 = (undefined8 *)FKey::GetFName(uVar8,&local_1e8);
  if (local_228 != (longlong *)*puVar12) {
    do {
      local_b8 = (undefined **)
                 CONCAT44(*(undefined4 *)((longlong)local_228 + 0x11c),
                          *(undefined4 *)((longlong)local_228 + 0x11c));
      lStack_b0 = 0;
      local_a8 = 0;
      lStack_a0 = 0;
      local_98 = CONCAT22(local_98._2_2_,0x100);
      uStack_90 = 0;
      local_88 = 0;
      if ((&local_b8 < puVar17) && (puVar19 <= &local_b8)) {
        lVar18 = (longlong)&local_b8 - (longlong)puVar19;
        if ((puVar17 == puVar16) &&
           (lVar4 = (longlong)puVar16 - (longlong)puVar17 >> 0x3f,
           ((longlong)puVar16 - (longlong)puVar17) / 0x38 + lVar4 == lVar4)) {
          lVar4 = ((longlong)puVar17 - (longlong)puVar19) / 0x38;
          if (lVar4 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("vector<T> too long");
          }
          uVar1 = lVar4 + 1;
          uVar15 = ((longlong)puVar16 - (longlong)puVar19) / 0x38;
          uVar14 = (uVar15 >> 1) + uVar15;
          if (0x492492492492492 - (uVar15 >> 1) < uVar15) {
            uVar14 = 0;
          }
          if (uVar14 < uVar1) {
            uVar14 = uVar1;
          }
          FUN_14393f330(&local_218,uVar14);
          puVar17 = puStack_210;
          puVar19 = local_218;
          puVar16 = local_208;
        }
        puVar12 = puVar19 + (lVar18 / 0x38) * 7;
        if (puVar17 != (undefined8 *)0x0) {
          uVar10 = puVar12[1];
          *puVar17 = *puVar12;
          puVar17[1] = uVar10;
          uVar10 = puVar12[3];
          puVar17[2] = puVar12[2];
          puVar17[3] = uVar10;
          uVar20 = *(undefined4 *)((longlong)puVar12 + 0x24);
          uVar21 = *(undefined4 *)(puVar12 + 5);
          uVar5 = *(undefined4 *)((longlong)puVar12 + 0x2c);
          *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(puVar12 + 4);
          *(undefined4 *)((longlong)puVar17 + 0x24) = uVar20;
          *(undefined4 *)(puVar17 + 5) = uVar21;
          *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar5;
          uVar20 = (undefined4)puVar12[6];
          uVar21 = (undefined4)((ulonglong)puVar12[6] >> 0x20);
LAB_14394369d:
          puVar17[6] = CONCAT44(uVar21,uVar20);
        }
      }
      else {
        if ((puVar17 == puVar16) &&
           (lVar18 = (longlong)puVar16 - (longlong)puVar17 >> 0x3f,
           ((longlong)puVar16 - (longlong)puVar17) / 0x38 + lVar18 == lVar18)) {
          lVar18 = ((longlong)puVar17 - (longlong)puVar19) / 0x38;
          if (lVar18 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("vector<T> too long");
          }
          uVar1 = lVar18 + 1;
          uVar15 = ((longlong)puVar16 - (longlong)puVar19) / 0x38;
          uVar14 = (uVar15 >> 1) + uVar15;
          if (0x492492492492492 - (uVar15 >> 1) < uVar15) {
            uVar14 = 0;
          }
          if (uVar14 < uVar1) {
            uVar14 = uVar1;
          }
          FUN_14393f330(&local_218,uVar14);
          puVar17 = puStack_210;
          puVar19 = local_218;
          puVar16 = local_208;
        }
        if (puVar17 != (undefined8 *)0x0) {
          *puVar17 = local_b8;
          puVar17[1] = lStack_b0;
          puVar17[2] = local_a8;
          puVar17[3] = lStack_a0;
          *(undefined4 *)(puVar17 + 4) = local_98;
          *(undefined4 *)((longlong)puVar17 + 0x24) = uStack_94;
          *(undefined4 *)(puVar17 + 5) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)puVar17 + 0x2c) = uStack_90._4_4_;
          uVar20 = (undefined4)local_88;
          uVar21 = (undefined4)(local_88 >> 0x20);
          goto LAB_14394369d;
        }
      }
      puVar17 = puVar17 + 7;
      if (*(char *)((longlong)local_228 + 0x19) == '\0') {
        plVar9 = (longlong *)local_228[2];
        if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar9 + 0x19);
          local_228 = plVar9;
          plVar9 = (longlong *)*plVar9;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar9 + 0x19);
            local_228 = plVar9;
            plVar9 = (longlong *)*plVar9;
          }
        }
        else {
          cVar2 = *(char *)(local_228[1] + 0x19);
          plVar7 = (longlong *)local_228[1];
          plVar9 = local_228;
          while ((local_228 = plVar7, cVar2 == '\0' && (plVar9 == (longlong *)local_228[2]))) {
            cVar2 = *(char *)(local_228[1] + 0x19);
            plVar7 = (longlong *)local_228[1];
            plVar9 = local_228;
          }
        }
      }
      puStack_210 = puVar17;
      puVar12 = (undefined8 *)FKey::GetFName(uVar8,&local_1e8);
    } while (local_228 != (longlong *)*puVar12);
  }
  lVar18 = *(longlong *)(param_1 + 8) + 0x58;
  if (lVar18 != param_2) {
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::clear(lVar18);
    FUN_143930f70(lVar18,param_2,local_1f8);
  }
  FUN_14393f060(*(longlong *)(param_1 + 8) + 0xd0,&local_218);
  if (puVar19 != (undefined8 *)0x0) {
    uVar1 = ((longlong)puVar16 - (longlong)puVar19) / 0x38;
    if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    puVar16 = puVar19;
    if (0xfff < uVar1 * 0x38) {
      if (((ulonglong)puVar19 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      puVar16 = (undefined8 *)puVar19[-1];
      if (puVar19 <= puVar16) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if ((ulonglong)((longlong)puVar19 - (longlong)puVar16) < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < (ulonglong)((longlong)puVar19 - (longlong)puVar16)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(puVar16);
  }
  FUN_143925920(&local_1d8);
  return;
}



// FUNCTION 143943860 FUN_143943860 body=8 status=ok
// SIG undefined FUN_143943860(void)

undefined4 FUN_143943860(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x44);
}



// FUNCTION 143943870 FUN_143943870 body=113 status=ok
// SIG undefined FUN_143943870(void)

undefined8 * FUN_143943870(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  FBinaryArchiveFormatter::FBinaryArchiveFormatter();
  *param_1 = Imf::RleCompressor::vftable;
  *(int *)(param_1 + 2) = (int)param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = operator_new(param_3);
  param_1[3] = uVar1;
  uVar2 = FUN_143937df0(param_3,3);
  uVar1 = operator_new(uVar2 >> 1);
  param_1[4] = uVar1;
  return param_1;
}



// FUNCTION 1439438f0 FUN_1439438f0 body=78 status=ok
// SIG undefined FUN_1439438f0(void)

undefined8 * FUN_1439438f0(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::RleCompressor::vftable;
  FMemory::operator_delete(param_1[3]);
  FMemory::operator_delete(param_1[4]);
  FUN_143937ec0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143943940 FUN_143943940 body=203 status=ok
// SIG undefined FUN_143943940(void)

undefined8
FUN_143943940(longlong param_1,undefined1 *param_2,int param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  
  if (param_3 == 0) {
    *param_5 = *(undefined8 *)(param_1 + 0x20);
    return 0;
  }
  puVar4 = *(undefined1 **)(param_1 + 0x18);
  puVar1 = param_2 + param_3;
  puVar8 = puVar4 + (param_3 + 1) / 2;
  for (; param_2 < puVar1; param_2 = param_2 + 2) {
    *puVar4 = *param_2;
    puVar4 = puVar4 + 1;
    if (puVar1 <= param_2 + 1) break;
    *puVar8 = param_2[1];
    puVar8 = puVar8 + 1;
  }
  pcVar5 = *(char **)(param_1 + 0x18);
  pcVar2 = pcVar5 + param_3;
  cVar6 = *pcVar5;
  while (pcVar5 = pcVar5 + 1, pcVar5 < pcVar2) {
    cVar3 = *pcVar5;
    *pcVar5 = (cVar3 - cVar6) + -0x80;
    cVar6 = cVar3;
  }
  *param_5 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = FUN_143943a10(param_3,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return uVar7;
}



// FUNCTION 143943a10 FUN_143943a10 body=251 status=ok
// SIG undefined FUN_143943a10(void)

ulonglong FUN_143943a10(int param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar5 = param_2 + param_1;
  pcVar3 = param_2;
  pcVar4 = param_3;
joined_r0x000143943a28:
  do {
    if (pcVar5 <= pcVar3) {
      return (longlong)pcVar4 - (longlong)param_3 & 0xffffffff;
    }
    param_2 = param_2 + 1;
    if (param_2 < pcVar5) {
      do {
        if ((*pcVar3 != *param_2) || (0x7e < (longlong)(param_2 + (-1 - (longlong)pcVar3)))) break;
        param_2 = param_2 + 1;
      } while (param_2 < pcVar5);
    }
    if (2 < (longlong)param_2 - (longlong)pcVar3) {
      *pcVar4 = ((char)param_2 - (char)pcVar3) + -1;
      pcVar4[1] = *pcVar3;
      pcVar4 = pcVar4 + 2;
      pcVar3 = param_2;
      goto joined_r0x000143943a28;
    }
    if (param_2 < pcVar5) {
      pcVar1 = param_2;
      while ((((pcVar2 = pcVar1 + 1, pcVar5 <= pcVar2 || (*param_2 != *pcVar2)) ||
              (pcVar5 <= pcVar1 + 2)) || (*pcVar2 != pcVar1[2]))) {
        if ((0x7e < (longlong)(pcVar2 + (-1 - (longlong)pcVar3))) ||
           (param_2 = param_2 + 1, pcVar1 = pcVar2, pcVar5 <= param_2)) break;
      }
    }
    *pcVar4 = (char)pcVar3 - (char)param_2;
    for (; pcVar4 = pcVar4 + 1, pcVar3 < param_2; pcVar3 = pcVar3 + 1) {
      *pcVar4 = *pcVar3;
    }
  } while( true );
}



// FUNCTION 143943b10 FUN_143943b10 body=157 status=ok
// SIG undefined FUN_143943b10(void)

ulonglong FUN_143943b10(int param_1,int param_2,char *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = param_4;
  while( true ) {
    while( true ) {
      if (param_1 < 1) {
        return (longlong)pcVar4 - (longlong)param_4 & 0xffffffff;
      }
      cVar1 = *param_3;
      if (-1 < cVar1) break;
      iVar2 = (int)cVar1;
      iVar3 = -iVar2;
      param_1 = param_1 + iVar2 + -1;
      param_2 = param_2 + iVar2;
      if (param_2 < 0) {
        return 0;
      }
      for (; param_3 = param_3 + 1, 0 < iVar3; iVar3 = iVar3 + -1) {
        *pcVar4 = *param_3;
        pcVar4 = pcVar4 + 1;
      }
    }
    iVar3 = (int)cVar1;
    param_1 = param_1 + -2;
    param_2 = param_2 + (-1 - iVar3);
    if (param_2 < 0) break;
    if (-1 < cVar1) {
      do {
        *pcVar4 = param_3[1];
        pcVar4 = pcVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    param_3 = param_3 + 2;
  }
  return 0;
}



// FUNCTION 143943bb0 FUN_143943bb0 body=283 status=ok
// SIG undefined FUN_143943bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143943bb0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_3 == 0) {
    *param_5 = *(undefined8 *)(param_1 + 0x20);
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_143943b10(param_3,*(undefined4 *)(param_1 + 0x10),param_2,
                          *(undefined8 *)(param_1 + 0x18));
    if (iVar6 == 0) {
      FUN_143e179e0(local_78,"Data decoding (rle) failed.");
      local_78[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db5c8);
    }
    pcVar2 = *(char **)(param_1 + 0x18);
    pcVar5 = pcVar2;
    while (pcVar4 = pcVar5 + 1, pcVar4 < pcVar2 + iVar6) {
      *pcVar4 = *pcVar4 + *pcVar5 + -0x80;
      pcVar5 = pcVar4;
    }
    puVar3 = *(undefined1 **)(param_1 + 0x18);
    puVar7 = *(undefined1 **)(param_1 + 0x20);
    puVar8 = puVar3 + (iVar6 + 1) / 2;
    puVar9 = puVar7 + iVar6;
    for (; puVar7 < puVar9; puVar7 = puVar7 + 2) {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      *puVar7 = uVar1;
      if (puVar9 <= puVar7 + 1) break;
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar7[1] = uVar1;
    }
    *param_5 = *(undefined8 *)(param_1 + 0x20);
  }
  return iVar6;
}



// FUNCTION 143943cd0 FUN_143943cd0 body=111 status=ok
// SIG undefined FUN_143943cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143943cd0(ulonglong param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_1 <= -param_2 - 1U) {
    return param_1 + param_2;
  }
  FUN_143e179e0(local_78,"Integer addition overflow.");
  local_78[0] = Iex::OverflowExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db8a8);
}



// FUNCTION 143943d40 FUN_143943d40 body=297 status=ok
// SIG undefined FUN_143943d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_143943d40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined **local_88 [12];
  ulonglong local_28;
  
  local_90 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_98 = param_1;
  FBinaryArchiveFormatter::FBinaryArchiveFormatter();
  *param_1 = Imf::ZipCompressor::vftable;
  *(int *)(param_1 + 2) = (int)param_3;
  *(int *)((longlong)param_1 + 0x14) = (int)param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar1 = FUN_143937df0(param_3,param_4);
  dVar5 = (double)lVar1;
  if (lVar1 < 0) {
    dVar5 = dVar5 + 1.8446744073709552e+19;
  }
  dVar5 = _guard_xfg_dispatch_icall_nop(dVar5 * 0.01);
  lVar2 = 0;
  if ((9.223372036854776e+18 <= dVar5) &&
     (dVar5 = dVar5 - 9.223372036854776e+18, dVar5 < 9.223372036854776e+18)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = FUN_143943cd0(lVar1,(longlong)dVar5 + lVar2);
  if (0xffffffffffffff9b < uVar3) {
    FUN_143e179e0(local_88,"Integer addition overflow.");
    local_88[0] = Iex::OverflowExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db8a8);
  }
  uVar4 = operator_new(lVar1);
  param_1[3] = uVar4;
  uVar4 = operator_new(uVar3 + 100);
  param_1[4] = uVar4;
  return param_1;
}



// FUNCTION 143943e70 FUN_143943e70 body=78 status=ok
// SIG undefined FUN_143943e70(void)

undefined8 * FUN_143943e70(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::ZipCompressor::vftable;
  FMemory::operator_delete(param_1[3]);
  FMemory::operator_delete(param_1[4]);
  FUN_143937ec0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143943ec0 FUN_143943ec0 body=342 status=ok
// SIG undefined FUN_143943ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143943ec0(longlong param_1,undefined1 *param_2,int param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  double dVar9;
  undefined1 auStack_a8 [32];
  int local_88 [4];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (param_3 == 0) {
    *param_5 = *(undefined8 *)(param_1 + 0x20);
    local_88[0] = 0;
  }
  else {
    puVar3 = *(undefined1 **)(param_1 + 0x18);
    puVar1 = param_2 + param_3;
    puVar7 = puVar3 + (param_3 + 1) / 2;
    for (; param_2 < puVar1; param_2 = param_2 + 2) {
      *puVar3 = *param_2;
      puVar3 = puVar3 + 1;
      if (puVar1 <= param_2 + 1) break;
      *puVar7 = param_2[1];
      puVar7 = puVar7 + 1;
    }
    pcVar4 = *(char **)(param_1 + 0x18);
    pcVar8 = pcVar4 + param_3;
    cVar5 = *pcVar4;
    while (pcVar4 = pcVar4 + 1, pcVar4 < pcVar8) {
      cVar2 = *pcVar4;
      *pcVar4 = (cVar2 - cVar5) + -0x80;
      cVar5 = cVar2;
    }
    dVar9 = _guard_xfg_dispatch_icall_nop((double)param_3 * 1.01);
    local_88[0] = (int)dVar9 + 100;
    iVar6 = compress(*(undefined8 *)(param_1 + 0x20),local_88,*(undefined8 *)(param_1 + 0x18),
                     param_3);
    if (iVar6 != 0) {
      FUN_143e179e0(local_78,"Data compression (zlib) failed.");
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db928);
    }
    *param_5 = *(undefined8 *)(param_1 + 0x20);
  }
  return local_88[0];
}



// FUNCTION 143944020 FUN_143944020 body=320 status=ok
// SIG undefined FUN_143944020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143944020(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_a8 [32];
  uint local_88 [4];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (param_3 == 0) {
    *param_5 = *(undefined8 *)(param_1 + 0x20);
    local_88[0] = 0;
  }
  else {
    local_88[0] = *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x10);
    iVar4 = uncompress(*(undefined8 *)(param_1 + 0x18),local_88,param_2,param_3);
    if (iVar4 != 0) {
      FUN_143e179e0(local_78,"Data decompression (zlib) failed.");
      local_78[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db5c8);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    for (pcVar6 = (char *)(lVar2 + 1); pcVar6 < (char *)(lVar2 + (ulonglong)local_88[0]);
        pcVar6 = pcVar6 + 1) {
      *pcVar6 = *pcVar6 + pcVar6[-1] + -0x80;
    }
    puVar5 = *(undefined1 **)(param_1 + 0x20);
    puVar3 = *(undefined1 **)(param_1 + 0x18);
    puVar7 = puVar3 + (local_88[0] + 1 >> 1);
    puVar8 = puVar5 + local_88[0];
    for (; puVar5 < puVar8; puVar5 = puVar5 + 2) {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      *puVar5 = uVar1;
      if (puVar8 <= puVar5 + 1) break;
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar5[1] = uVar1;
    }
    *param_5 = *(undefined8 *)(param_1 + 0x20);
  }
  return local_88[0];
}



// FUNCTION 143944170 FUN_143944170 body=604 status=ok
// SIG undefined FUN_143944170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_143944170(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined **local_a8 [12];
  ulonglong local_48;
  
  local_b8 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b0 = param_1;
  FBinaryArchiveFormatter::FBinaryArchiveFormatter();
  *param_1 = Imf::PizCompressor::vftable;
  *(int *)(param_1 + 2) = (int)param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  *(int *)(param_1 + 3) = (int)param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar8 = UEngine::SeamlessTravelHandlerForWorld(param_2);
  param_1[7] = uVar8;
  param_1[8] = 0;
  uVar9 = FUN_143937df0(param_3,param_4);
  uVar10 = FUN_143937df0(param_3,param_4);
  if (0xfffffffffffedfff < uVar10) {
    FUN_143e179e0(local_a8,"Integer addition overflow.");
    local_a8[0] = Iex::OverflowExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_a8,(ThrowInfo *)&DAT_1461db8a8);
  }
  if (uVar9 >> 1 < 0x8000000000000000) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar9 >> 1;
    uVar8 = SUB168(ZEXT816(2) * auVar2,0);
    if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    uVar8 = operator_new(uVar8);
    param_1[4] = uVar8;
    uVar8 = operator_new(uVar10 + 0x12000);
    param_1[5] = uVar8;
    uVar8 = UEngine::SeamlessTravelHandlerForWorld(param_1[1]);
    bVar4 = true;
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::begin(uVar8,&local_c8);
    plVar11 = (longlong *)FKey::GetFName(uVar8,local_c0);
    bVar5 = true;
    if (local_c8 != (longlong *)*plVar11) {
      do {
        *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
        bVar4 = bVar5;
        if (*(int *)((longlong)local_c8 + 0x11c) != 1) {
          bVar4 = false;
        }
        if (*(char *)((longlong)local_c8 + 0x19) == '\0') {
          plVar11 = (longlong *)local_c8[2];
          if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar11 + 0x19);
            local_c8 = plVar11;
            plVar11 = (longlong *)*plVar11;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar11 + 0x19);
              local_c8 = plVar11;
              plVar11 = (longlong *)*plVar11;
            }
          }
          else {
            cVar1 = *(char *)(local_c8[1] + 0x19);
            plVar6 = (longlong *)local_c8[1];
            plVar11 = local_c8;
            while ((local_c8 = plVar6, cVar1 == '\0' && (plVar11 == (longlong *)local_c8[2]))) {
              cVar1 = *(char *)(local_c8[1] + 0x19);
              plVar6 = (longlong *)local_c8[1];
              plVar11 = local_c8;
            }
          }
        }
        puVar12 = (undefined8 *)FKey::GetFName(uVar8,local_c0);
        bVar5 = bVar4;
      } while (local_c8 != (longlong *)*puVar12);
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)*(int *)(param_1 + 6);
    uVar8 = SUB168(ZEXT816(0x20) * auVar3,0);
    if (SUB168(ZEXT816(0x20) * auVar3,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    uVar8 = operator_new(uVar8);
    param_1[8] = uVar8;
    puVar13 = (undefined4 *)UEngine::SeamlessTravelHandlerForWorld(param_2);
    *(undefined4 *)(param_1 + 9) = *puVar13;
    *(undefined4 *)((longlong)param_1 + 0x4c) = puVar13[2];
    *(undefined4 *)(param_1 + 10) = puVar13[3];
    if ((bVar4) && (iVar7 = FUN_14393e510(1), iVar7 == 2)) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    return param_1;
  }
  FUN_143e179e0(local_a8,"Integer multiplication overflow.");
  local_a8[0] = Iex::OverflowExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_a8,(ThrowInfo *)&DAT_1461db8a8);
}



// FUNCTION 1439443d0 FUN_1439443d0 body=87 status=ok
// SIG undefined FUN_1439443d0(void)

undefined8 * FUN_1439443d0(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::PizCompressor::vftable;
  FMemory::operator_delete(param_1[4]);
  FMemory::operator_delete(param_1[5]);
  FMemory::operator_delete(param_1[8]);
  FUN_143937ec0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143944430 FUN_143944430 body=1546 status=ok
// SIG undefined FUN_143944430(void)

int FUN_143944430(longlong param_1,undefined2 *param_2,int param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  size_t _Size;
  ushort uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  byte *_Dst;
  undefined2 *_Dst_00;
  byte bVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte *pbVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  ushort uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  ushort *puVar25;
  ulonglong uVar26;
  uint local_res18;
  undefined2 *puVar27;
  longlong *local_60;
  longlong local_58;
  byte *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_3 == 0) {
    *param_5 = *(undefined8 *)(param_1 + 0x28);
    iVar19 = 0;
  }
  else {
    uVar3 = *param_4;
    iVar19 = param_4[1];
    uVar23 = param_4[3];
    if (*(int *)(param_1 + 0x50) < (int)param_4[3]) {
      uVar23 = *(uint *)(param_1 + 0x50);
    }
    uVar17 = (ulonglong)uVar23;
    iVar12 = param_4[2];
    if (*(int *)(param_1 + 0x4c) < (int)param_4[2]) {
      iVar12 = *(int *)(param_1 + 0x4c);
    }
    local_58 = *(longlong *)(param_1 + 0x20);
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::begin(*(undefined8 *)(param_1 + 0x38),&local_60);
    plVar9 = (longlong *)FKey::GetFName(*(undefined8 *)(param_1 + 0x38));
    lVar24 = 0;
    if (local_60 != (longlong *)*plVar9) {
      do {
        plVar9 = (longlong *)(*(longlong *)(param_1 + 0x40) + lVar24);
        *plVar9 = local_58;
        plVar9[1] = local_58;
        uVar6 = FUN_14393e3f0((int)local_60[0x24],uVar3,iVar12);
        *(undefined4 *)(plVar9 + 2) = uVar6;
        uVar6 = FUN_14393e3f0(*(undefined4 *)((longlong)local_60 + 0x124),iVar19,uVar23);
        *(undefined4 *)((longlong)plVar9 + 0x14) = uVar6;
        *(undefined4 *)(plVar9 + 3) = *(undefined4 *)((longlong)local_60 + 0x124);
        iVar7 = FUN_14393e510(*(undefined4 *)((longlong)local_60 + 0x11c));
        iVar8 = FUN_14393e510(1);
        *(int *)((longlong)plVar9 + 0x1c) = iVar7 / iVar8;
        local_58 = local_58 +
                   (longlong)((iVar7 / iVar8) * *(int *)((longlong)plVar9 + 0x14) * (int)plVar9[2])
                   * 2;
        if (*(char *)((longlong)local_60 + 0x19) == '\0') {
          plVar9 = (longlong *)local_60[2];
          if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar9 + 0x19);
            local_60 = plVar9;
            plVar9 = (longlong *)*plVar9;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar9 + 0x19);
              local_60 = plVar9;
              plVar9 = (longlong *)*plVar9;
            }
          }
          else {
            cVar1 = *(char *)(local_60[1] + 0x19);
            plVar5 = (longlong *)local_60[1];
            plVar9 = local_60;
            while ((local_60 = plVar5, cVar1 == '\0' && (plVar9 == (longlong *)local_60[2]))) {
              cVar1 = *(char *)(local_60[1] + 0x19);
              plVar5 = (longlong *)local_60[1];
              plVar9 = local_60;
            }
          }
        }
        lVar24 = lVar24 + 0x20;
        puVar10 = (undefined8 *)FKey::GetFName(*(undefined8 *)(param_1 + 0x38));
        uVar23 = (uint)uVar17;
      } while (local_60 != (longlong *)*puVar10);
    }
    if (*(int *)(param_1 + 0x14) == 1) {
      if (iVar19 <= (int)uVar23) {
        do {
          uVar21 = 0;
          uVar22 = 0;
          if (0 < *(int *)(param_1 + 0x30)) {
            do {
              lVar24 = *(longlong *)(param_1 + 0x40) + uVar21;
              iVar12 = *(int *)(lVar24 + 0x18);
              if (iVar19 < 0) {
                if (iVar12 < 0) {
                  iVar7 = (-1 - iVar12) - iVar19;
                }
                else {
                  iVar7 = (iVar12 - iVar19) + -1;
                }
                iVar7 = -(iVar7 / iVar12);
              }
              else {
                iVar7 = iVar19 / iVar12;
              }
              if (iVar19 == iVar7 * iVar12) {
                for (iVar12 = *(int *)(lVar24 + 0x1c) * *(int *)(lVar24 + 0x10); 0 < iVar12;
                    iVar12 = iVar12 + -1) {
                  uVar2 = *param_2;
                  param_2 = param_2 + 1;
                  **(undefined2 **)(lVar24 + 8) = uVar2;
                  *(longlong *)(lVar24 + 8) = *(longlong *)(lVar24 + 8) + 2;
                }
              }
              uVar23 = (int)uVar22 + 1;
              uVar21 = uVar21 + 0x20;
              uVar22 = (ulonglong)uVar23;
            } while ((int)uVar23 < *(int *)(param_1 + 0x30));
            uVar23 = (uint)uVar17;
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 <= (int)uVar23);
      }
    }
    else if (iVar19 <= (int)uVar23) {
      do {
        uVar22 = 0;
        uVar21 = uVar22;
        if (0 < *(int *)(param_1 + 0x30)) {
          do {
            lVar24 = *(longlong *)(param_1 + 0x40) + uVar21;
            iVar12 = *(int *)(lVar24 + 0x18);
            if (iVar19 < 0) {
              if (iVar12 < 0) {
                iVar7 = (-1 - iVar12) - iVar19;
              }
              else {
                iVar7 = (iVar12 - iVar19) + -1;
              }
              iVar7 = -(iVar7 / iVar12);
            }
            else {
              iVar7 = iVar19 / iVar12;
            }
            if (iVar19 == iVar7 * iVar12) {
              lVar18 = (longlong)(*(int *)(lVar24 + 0x1c) * *(int *)(lVar24 + 0x10));
              _Size = lVar18 * 2;
              _guard_xfg_dispatch_icall_nop(*(void **)(lVar24 + 8),param_2,_Size);
              param_2 = param_2 + lVar18;
              *(longlong *)(lVar24 + 8) = *(longlong *)(lVar24 + 8) + _Size;
            }
            uVar23 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar23;
            uVar21 = uVar21 + 0x20;
          } while ((int)uVar23 < *(int *)(param_1 + 0x30));
          uVar23 = (uint)uVar17;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 <= (int)uVar23);
    }
    uVar17 = 0;
    _Dst = (byte *)operator_new(0x2000);
    local_50 = _Dst;
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x2000);
    lVar18 = local_58;
    lVar24 = *(longlong *)(param_1 + 0x20);
    lVar13 = 0x80;
    pbVar15 = _Dst;
    do {
      pbVar15[0] = 0;
      pbVar15[1] = 0;
      pbVar15[2] = 0;
      pbVar15[3] = 0;
      pbVar15[4] = 0;
      pbVar15[5] = 0;
      pbVar15[6] = 0;
      pbVar15[7] = 0;
      pbVar15[8] = 0;
      pbVar15[9] = 0;
      pbVar15[10] = 0;
      pbVar15[0xb] = 0;
      pbVar15[0xc] = 0;
      pbVar15[0xd] = 0;
      pbVar15[0xe] = 0;
      pbVar15[0xf] = 0;
      pbVar15[0x10] = 0;
      pbVar15[0x11] = 0;
      pbVar15[0x12] = 0;
      pbVar15[0x13] = 0;
      pbVar15[0x14] = 0;
      pbVar15[0x15] = 0;
      pbVar15[0x16] = 0;
      pbVar15[0x17] = 0;
      pbVar15[0x18] = 0;
      pbVar15[0x19] = 0;
      pbVar15[0x1a] = 0;
      pbVar15[0x1b] = 0;
      pbVar15[0x1c] = 0;
      pbVar15[0x1d] = 0;
      pbVar15[0x1e] = 0;
      pbVar15[0x1f] = 0;
      pbVar15[0x20] = 0;
      pbVar15[0x21] = 0;
      pbVar15[0x22] = 0;
      pbVar15[0x23] = 0;
      pbVar15[0x24] = 0;
      pbVar15[0x25] = 0;
      pbVar15[0x26] = 0;
      pbVar15[0x27] = 0;
      pbVar15[0x28] = 0;
      pbVar15[0x29] = 0;
      pbVar15[0x2a] = 0;
      pbVar15[0x2b] = 0;
      pbVar15[0x2c] = 0;
      pbVar15[0x2d] = 0;
      pbVar15[0x2e] = 0;
      pbVar15[0x2f] = 0;
      pbVar15[0x30] = 0;
      pbVar15[0x31] = 0;
      pbVar15[0x32] = 0;
      pbVar15[0x33] = 0;
      pbVar15[0x34] = 0;
      pbVar15[0x35] = 0;
      pbVar15[0x36] = 0;
      pbVar15[0x37] = 0;
      pbVar15[0x38] = 0;
      pbVar15[0x39] = 0;
      pbVar15[0x3a] = 0;
      pbVar15[0x3b] = 0;
      pbVar15[0x3c] = 0;
      pbVar15[0x3d] = 0;
      pbVar15[0x3e] = 0;
      pbVar15[0x3f] = 0;
      lVar13 = lVar13 + -1;
      pbVar15 = pbVar15 + 0x40;
    } while (lVar13 != 0);
    iVar19 = (int)(local_58 - lVar24 >> 1);
    uVar21 = uVar17;
    if (0 < iVar19) {
      do {
        uVar20 = *(ushort *)(lVar24 + uVar21 * 2);
        uVar4 = uVar20 >> 3;
        _Dst[uVar4] = _Dst[uVar4] | (byte)(1 << (uVar20 & 7));
        uVar21 = uVar21 + 1;
      } while ((longlong)uVar21 < (longlong)iVar19);
    }
    *_Dst = *_Dst & 0xfe;
    uVar21 = 0x1fff;
    uVar20 = 0;
    pbVar15 = _Dst;
    do {
      iVar19 = (int)uVar17;
      if (*pbVar15 != 0) {
        if (iVar19 < (int)uVar21) {
          uVar21 = uVar17 & 0xffff;
        }
        if ((int)(uint)uVar20 < iVar19) {
          uVar20 = (ushort)uVar17;
        }
      }
      uVar17 = (ulonglong)(iVar19 + 1U);
      pbVar15 = pbVar15 + 1;
    } while ((int)(iVar19 + 1U) < 0x2000);
    _Dst_00 = (undefined2 *)operator_new(0x20000);
    puVar27 = _Dst_00;
    _guard_xfg_dispatch_icall_nop(_Dst_00,0,0x20000);
    uVar14 = 0;
    bVar11 = 1;
    puVar16 = _Dst_00;
    uVar17 = uVar14;
    uVar22 = uVar14;
    uVar26 = uVar14;
    do {
      if (((int)uVar17 == 0) || ((_Dst[(longlong)uVar22 >> 3] & bVar11) != 0)) {
        *puVar16 = (short)uVar26;
        uVar26 = (ulonglong)((int)uVar26 + 1);
      }
      else {
        *puVar16 = 0;
      }
      uVar23 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar23;
      uVar22 = uVar22 + 1;
      bVar11 = bVar11 << 1 | (char)bVar11 < '\0';
      puVar16 = puVar16 + 1;
    } while ((int)uVar23 < 0x10000);
    lVar24 = *(longlong *)(param_1 + 0x20);
    iVar19 = (int)(lVar18 - lVar24 >> 1);
    uVar17 = uVar14;
    if (0 < iVar19) {
      do {
        *(undefined2 *)(lVar24 + uVar17 * 2) = _Dst_00[*(ushort *)(lVar24 + uVar17 * 2)];
        uVar17 = uVar17 + 1;
      } while ((longlong)uVar17 < (longlong)iVar19);
    }
    puVar25 = *(ushort **)(param_1 + 0x28);
    *puVar25 = (ushort)uVar21;
    puVar25[1] = uVar20;
    puVar25 = puVar25 + 2;
    if (((ushort)uVar21 <= uVar20) && (iVar19 = ((uint)uVar20 - (int)uVar21) + 1, iVar19 != 0)) {
      lVar24 = uVar21 - (longlong)puVar25;
      do {
        *(byte *)puVar25 = (_Dst + lVar24)[(longlong)puVar25];
        puVar25 = (ushort *)((longlong)puVar25 + 1);
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    local_res18 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      local_60 = (longlong *)0x0;
      do {
        iVar12 = 0;
        plVar9 = (longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)local_60);
        iVar19 = *(int *)((longlong)plVar9 + 0x1c);
        uVar23 = (uint)uVar14;
        if (0 < iVar19) {
          do {
            FUN_14394b350(*plVar9 + (longlong)iVar12 * 2,(int)plVar9[2],iVar19,
                          *(undefined4 *)((longlong)plVar9 + 0x14),(int)plVar9[2] * iVar19,
                          (short)uVar26 + -1,puVar27);
            iVar12 = iVar12 + 1;
            iVar19 = *(int *)((longlong)plVar9 + 0x1c);
            uVar23 = local_res18;
          } while (iVar12 < iVar19);
        }
        local_res18 = uVar23 + 1;
        uVar14 = (ulonglong)local_res18;
        local_60 = local_60 + 4;
      } while ((int)local_res18 < *(int *)(param_1 + 0x30));
    }
    puVar25[0] = 0;
    puVar25[1] = 0;
    iVar19 = FUN_143949fa0(*(longlong *)(param_1 + 0x20),
                           local_58 - *(longlong *)(param_1 + 0x20) >> 1,puVar25 + 2);
    *(int *)puVar25 = iVar19;
    *param_5 = *(undefined8 *)(param_1 + 0x28);
    iVar19 = ((int)(puVar25 + 2) - *(int *)(param_1 + 0x28)) + iVar19;
    FMemory::operator_delete(_Dst_00);
    FMemory::operator_delete(_Dst);
  }
  return iVar19;
}



// FUNCTION 143944a40 FUN_143944a40 body=123 status=ok
// SIG undefined FUN_143944a40(void)

void FUN_143944a40(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4,
                  undefined8 param_5)

{
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = (**(code **)(*param_1 + 8))();
  local_10 = *(undefined4 *)((longlong)param_1 + 0x4c);
  local_c = param_4 + -1 + local_c;
  local_18 = (undefined4)param_1[9];
  local_14 = param_4;
  FUN_143944430(param_1,param_2,param_3,&local_18,param_5);
  return;
}



// FUNCTION 143944ac0 FUN_143944ac0 body=60 status=ok
// SIG undefined FUN_143944ac0(void)

void FUN_143944ac0(void)

{
  FUN_143944430();
  return;
}



// FUNCTION 143944b00 FUN_143944b00 body=147 status=ok
// SIG undefined FUN_143944b00(void)

uint FUN_143944b00(longlong param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  iVar1 = 0;
  lVar4 = 0;
  puVar2 = param_2;
  do {
    if ((iVar1 == 0) || ((*(byte *)((lVar4 >> 3) + param_1) & (byte)(1 << ((byte)iVar1 & 7))) != 0))
    {
      iVar3 = iVar3 + 1;
      *puVar2 = (short)iVar1;
      puVar2 = puVar2 + 1;
    }
    iVar1 = iVar1 + 1;
    lVar4 = lVar4 + 1;
  } while (iVar1 < 0x10000);
  if (iVar3 < 0x10000) {
    puVar2 = param_2 + iVar3;
    for (lVar4 = (longlong)(0x10000 - iVar3); lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  return iVar3 - 1U & 0xffff;
}



// FUNCTION 143944ba0 FUN_143944ba0 body=1494 status=ok
// SIG undefined FUN_143944ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143944ba0(longlong param_1,ushort *param_2,int param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  char cVar1;
  ushort uVar2;
  size_t _Size;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ushort *_Dst;
  void *_Dst_00;
  int iVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ushort *_Dst_01;
  int iVar15;
  undefined1 auStack_118 [32];
  int local_f8;
  ushort local_f0;
  int local_e8;
  undefined4 local_e4;
  longlong *local_e0;
  int local_d8;
  ulonglong local_d0;
  ushort *local_c8;
  void *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined **local_a8 [12];
  ulonglong local_48;
  
  local_b0 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_b8 = param_5;
  if (param_3 == 0) {
    *param_5 = *(undefined8 *)(param_1 + 0x28);
    iVar15 = 0;
  }
  else {
    uVar4 = *param_4;
    iVar15 = param_4[1];
    local_d8 = param_4[3];
    if (*(int *)(param_1 + 0x50) < (int)param_4[3]) {
      local_d8 = *(int *)(param_1 + 0x50);
    }
    local_e8 = param_4[2];
    if (*(int *)(param_1 + 0x4c) < (int)param_4[2]) {
      local_e8 = *(int *)(param_1 + 0x4c);
    }
    uVar13 = *(ulonglong *)(param_1 + 0x20);
    local_e4 = uVar4;
    local_d0 = uVar13;
    local_c8 = param_2;
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::begin(*(undefined8 *)(param_1 + 0x38),&local_e0);
    plVar7 = (longlong *)FKey::GetFName(*(undefined8 *)(param_1 + 0x38));
    iVar9 = local_e8;
    uVar10 = local_d0;
    if (local_e0 != (longlong *)*plVar7) {
      lVar14 = 0;
      do {
        puVar11 = (ulonglong *)(*(longlong *)(param_1 + 0x40) + lVar14);
        *puVar11 = uVar13;
        puVar11[1] = uVar13;
        uVar4 = FUN_14393e3f0((int)local_e0[0x24],uVar4,iVar9);
        *(undefined4 *)(puVar11 + 2) = uVar4;
        uVar4 = FUN_14393e3f0(*(undefined4 *)((longlong)local_e0 + 0x124),iVar15,local_d8);
        *(undefined4 *)((longlong)puVar11 + 0x14) = uVar4;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)local_e0 + 0x124);
        iVar5 = FUN_14393e510(*(undefined4 *)((longlong)local_e0 + 0x11c));
        iVar6 = FUN_14393e510(1);
        *(int *)((longlong)puVar11 + 0x1c) = iVar5 / iVar6;
        uVar13 = uVar13 + (longlong)
                          ((iVar5 / iVar6) * *(int *)((longlong)puVar11 + 0x14) * (int)puVar11[2]) *
                          2;
        if (*(char *)((longlong)local_e0 + 0x19) == '\0') {
          plVar7 = (longlong *)local_e0[2];
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar7 + 0x19);
            local_e0 = plVar7;
            plVar7 = (longlong *)*plVar7;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar7 + 0x19);
              local_e0 = plVar7;
              plVar7 = (longlong *)*plVar7;
            }
          }
          else {
            cVar1 = *(char *)(local_e0[1] + 0x19);
            plVar3 = (longlong *)local_e0[1];
            plVar7 = local_e0;
            while ((local_e0 = plVar3, cVar1 == '\0' && (plVar7 == (longlong *)local_e0[2]))) {
              cVar1 = *(char *)(local_e0[1] + 0x19);
              plVar3 = (longlong *)local_e0[1];
              plVar7 = local_e0;
            }
          }
        }
        lVar14 = lVar14 + 0x20;
        puVar8 = (undefined8 *)FKey::GetFName(*(undefined8 *)(param_1 + 0x38));
        param_2 = local_c8;
        uVar4 = local_e4;
        uVar10 = uVar13;
      } while (local_e0 != (longlong *)*puVar8);
    }
    local_d0 = uVar10;
    _Dst = (ushort *)operator_new(0x2000);
    local_c8 = _Dst;
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x2000);
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x2000);
    uVar2 = *param_2;
    local_e4._0_2_ = param_2[1];
    param_2 = param_2 + 2;
    if (0x1fff < (ushort)local_e4) {
      FUN_143e179e0(local_a8,"Error in header for PIZ-compressed data (invalid bitmap size).");
      local_a8[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_a8,(ThrowInfo *)&DAT_1461db5c8);
    }
    if (uVar2 <= (ushort)local_e4) {
      iVar9 = ((uint)(ushort)local_e4 - (uint)uVar2) + 1;
      if (iVar9 != 0) {
        lVar14 = (ulonglong)uVar2 - (longlong)param_2;
        do {
          *(char *)((longlong)_Dst + lVar14 + (longlong)param_2) = (char)*param_2;
          param_2 = (ushort *)((longlong)param_2 + 1);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    _Dst_00 = (void *)operator_new(0x20000);
    local_c0 = _Dst_00;
    _guard_xfg_dispatch_icall_nop(_Dst_00,0,0x20000);
    local_e4._0_2_ = FUN_143944b00(_Dst,_Dst_00);
    local_e8 = *(int *)param_2;
    FUN_14394a9c0();
    uVar2 = (ushort)local_e4;
    local_e8 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar14 = 0;
      do {
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x40) + lVar14);
        iVar5 = 0;
        iVar9 = *(int *)((longlong)plVar7 + 0x1c);
        if (0 < iVar9) {
          do {
            local_f8 = (int)plVar7[2] * iVar9;
            local_f0 = uVar2;
            FUN_14394af70(*plVar7 + (longlong)iVar5 * 2,(int)plVar7[2],iVar9,
                          *(undefined4 *)((longlong)plVar7 + 0x14));
            iVar5 = iVar5 + 1;
            iVar9 = *(int *)((longlong)plVar7 + 0x1c);
          } while (iVar5 < iVar9);
        }
        local_e8 = local_e8 + 1;
        lVar14 = lVar14 + 0x20;
        _Dst = local_c8;
        uVar13 = local_d0;
      } while (local_e8 < *(int *)(param_1 + 0x30));
    }
    lVar14 = *(longlong *)(param_1 + 0x20);
    uVar10 = 0;
    iVar9 = (int)((longlong)(uVar13 - lVar14) >> 1);
    if (0 < iVar9) {
      do {
        *(undefined2 *)(lVar14 + uVar10 * 2) =
             *(undefined2 *)((longlong)_Dst_00 + (ulonglong)*(ushort *)(lVar14 + uVar10 * 2) * 2);
        uVar10 = uVar10 + 1;
      } while ((longlong)uVar10 < (longlong)iVar9);
    }
    _Dst_01 = *(ushort **)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x14) == 1) {
      for (; iVar15 <= local_d8; iVar15 = iVar15 + 1) {
        iVar9 = 0;
        if (0 < *(int *)(param_1 + 0x30)) {
          lVar14 = 0;
          do {
            lVar12 = *(longlong *)(param_1 + 0x40) + lVar14;
            iVar5 = *(int *)(lVar12 + 0x18);
            if (iVar15 < 0) {
              if (iVar5 < 0) {
                iVar6 = (-1 - iVar5) - iVar15;
              }
              else {
                iVar6 = (iVar5 - iVar15) + -1;
              }
              uVar10 = (ulonglong)(uint)(iVar6 % iVar5);
              iVar6 = -(iVar6 / iVar5);
            }
            else {
              iVar6 = iVar15 / iVar5;
              uVar10 = (longlong)iVar15 % (longlong)iVar5 & 0xffffffff;
            }
            if (iVar15 == iVar6 * iVar5) {
              for (iVar5 = *(int *)(lVar12 + 0x1c) * *(int *)(lVar12 + 0x10); 0 < iVar5;
                  iVar5 = iVar5 + -1) {
                local_e4._0_2_ = **(ushort **)(lVar12 + 8);
                uVar10 = (ulonglong)((ushort)local_e4 >> 8);
                *_Dst_01 = (ushort)local_e4;
                _Dst_01 = _Dst_01 + 1;
                *(longlong *)(lVar12 + 8) = *(longlong *)(lVar12 + 8) + 2;
              }
            }
            iVar9 = iVar9 + 1;
            lVar14 = lVar14 + 0x20;
          } while (iVar9 < *(int *)(param_1 + 0x30));
        }
      }
    }
    else {
      iVar9 = local_d8;
      if (iVar15 <= local_d8) {
        do {
          local_e8 = 0;
          if (0 < *(int *)(param_1 + 0x30)) {
            local_d0 = 0;
            do {
              lVar14 = *(longlong *)(param_1 + 0x40) + local_d0;
              iVar9 = *(int *)(lVar14 + 0x18);
              if (iVar15 < 0) {
                if (iVar9 < 0) {
                  iVar5 = (-1 - iVar9) - iVar15;
                }
                else {
                  iVar5 = (iVar9 - iVar15) + -1;
                }
                iVar5 = -(iVar5 / iVar9);
              }
              else {
                iVar5 = iVar15 / iVar9;
              }
              if (iVar15 == iVar5 * iVar9) {
                lVar12 = (longlong)(*(int *)(lVar14 + 0x1c) * *(int *)(lVar14 + 0x10));
                _Size = lVar12 * 2;
                _guard_xfg_dispatch_icall_nop(_Dst_01,*(void **)(lVar14 + 8),_Size);
                _Dst_01 = _Dst_01 + lVar12;
                *(longlong *)(lVar14 + 8) = *(longlong *)(lVar14 + 8) + _Size;
              }
              local_e8 = local_e8 + 1;
              uVar10 = local_d0 + 0x20;
              iVar9 = local_d8;
              local_d0 = uVar10;
            } while (local_e8 < *(int *)(param_1 + 0x30));
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 <= iVar9);
      }
    }
    *local_b8 = *(undefined8 *)(param_1 + 0x28);
    iVar15 = (int)_Dst_01 - *(int *)(param_1 + 0x28);
    FMemory::operator_delete(_Dst_00,uVar10);
    FMemory::operator_delete(_Dst);
  }
  return iVar15;
}



// FUNCTION 143945180 FUN_143945180 body=123 status=ok
// SIG undefined FUN_143945180(void)

void FUN_143945180(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4,
                  undefined8 param_5)

{
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = (**(code **)(*param_1 + 8))();
  local_10 = *(undefined4 *)((longlong)param_1 + 0x4c);
  local_c = param_4 + -1 + local_c;
  local_18 = (undefined4)param_1[9];
  local_14 = param_4;
  FUN_143944ba0(param_1,param_2,param_3,&local_18,param_5);
  return;
}



// FUNCTION 143945200 FUN_143945200 body=60 status=ok
// SIG undefined FUN_143945200(void)

void FUN_143945200(void)

{
  FUN_143944ba0();
  return;
}



// FUNCTION 143945240 FUN_143945240 body=339 status=ok
// SIG undefined FUN_143945240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_143945240(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined **local_98 [12];
  ulonglong local_38;
  
  local_a0 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8 = param_1;
  FBinaryArchiveFormatter::FBinaryArchiveFormatter();
  *param_1 = Imf::Pxr24Compressor::vftable;
  *(int *)(param_1 + 2) = (int)param_3;
  *(int *)((longlong)param_1 + 0x14) = (int)param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = UEngine::SeamlessTravelHandlerForWorld(param_2);
  param_1[5] = uVar1;
  lVar2 = FUN_143937df0(param_3,param_4);
  dVar6 = (double)lVar2;
  if (lVar2 < 0) {
    dVar6 = dVar6 + 1.8446744073709552e+19;
  }
  dVar6 = _guard_xfg_dispatch_icall_nop(dVar6 * 0.01);
  lVar5 = 0;
  if ((9.223372036854776e+18 <= dVar6) &&
     (dVar6 = dVar6 - 9.223372036854776e+18, dVar6 < 9.223372036854776e+18)) {
    lVar5 = -0x8000000000000000;
  }
  uVar3 = FUN_143943cd0(lVar2,(longlong)dVar6 + lVar5);
  if (0xffffffffffffff9b < uVar3) {
    FUN_143e179e0(local_98,"Integer addition overflow.");
    local_98[0] = Iex::OverflowExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_98,(ThrowInfo *)&DAT_1461db8a8);
  }
  uVar1 = operator_new(lVar2);
  param_1[3] = uVar1;
  uVar1 = operator_new(uVar3 + 100);
  param_1[4] = uVar1;
  puVar4 = (undefined4 *)UEngine::SeamlessTravelHandlerForWorld(param_2);
  *(undefined4 *)(param_1 + 6) = *puVar4;
  *(undefined4 *)((longlong)param_1 + 0x34) = puVar4[2];
  *(undefined4 *)(param_1 + 7) = puVar4[3];
  return param_1;
}



// FUNCTION 1439453a0 FUN_1439453a0 body=78 status=ok
// SIG undefined FUN_1439453a0(void)

undefined8 * FUN_1439453a0(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::Pxr24Compressor::vftable;
  FMemory::operator_delete(param_1[3]);
  FMemory::operator_delete(param_1[4]);
  FUN_143937ec0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1439453f0 FUN_1439453f0 body=1105 status=ok
// SIG undefined FUN_1439453f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1439453f0(longlong param_1,ushort *param_2,int param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  int iVar20;
  double dVar21;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  int local_d0;
  int local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0 [2];
  undefined1 local_b8 [8];
  undefined8 *local_b0;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_b0 = param_5;
  if (param_3 == 0) {
    *param_5 = *(undefined8 *)(param_1 + 0x20);
    local_d0 = 0;
  }
  else {
    puVar13 = *(undefined1 **)(param_1 + 0x18);
    uVar3 = *param_4;
    piVar10 = param_4 + 2;
    if (*(int *)(param_1 + 0x34) < (int)param_4[2]) {
      piVar10 = (int *)(param_1 + 0x34);
    }
    iVar6 = *piVar10;
    iVar20 = param_4[1];
    piVar10 = param_4 + 3;
    if (*(int *)(param_1 + 0x38) < (int)param_4[3]) {
      piVar10 = (int *)(param_1 + 0x38);
    }
    local_cc = *piVar10;
    if (iVar20 <= local_cc) {
      do {
        std::
        _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
        ::begin(*(undefined8 *)(param_1 + 0x28),&local_d8);
        plVar7 = (longlong *)FKey::GetFName(*(undefined8 *)(param_1 + 0x28),local_b8);
        puVar19 = puVar13;
        if (local_d8 != (longlong *)*plVar7) {
          do {
            plVar7 = local_d8;
            iVar9 = *(int *)((longlong)local_d8 + 0x124);
            if (iVar20 < 0) {
              if (iVar9 < 0) {
                iVar15 = (-1 - iVar9) - iVar20;
              }
              else {
                iVar15 = (iVar9 - iVar20) + -1;
              }
              iVar15 = -(iVar15 / iVar9);
            }
            else {
              iVar15 = iVar20 / iVar9;
            }
            puVar13 = puVar19;
            if (iVar20 == iVar15 * iVar9) {
              uVar5 = FUN_14393e3f0((int)local_d8[0x24],uVar3,iVar6);
              uVar12 = (ulonglong)uVar5;
              uVar14 = 0;
              iVar9 = *(int *)((longlong)plVar7 + 0x11c);
              if (iVar9 == 0) {
                puVar16 = puVar19 + (int)uVar5;
                puVar17 = puVar16 + (int)uVar5;
                puVar18 = puVar17 + (int)uVar5;
                puVar13 = puVar18 + (int)uVar5;
                if (0 < (int)uVar5) {
                  do {
                    uVar5 = 0;
                    lVar11 = (longlong)local_c0 - (longlong)param_2;
                    do {
                      uVar5 = uVar5 + 1;
                      *(char *)(lVar11 + (longlong)param_2) = (char)*param_2;
                      param_2 = (ushort *)((longlong)param_2 + 1);
                    } while (uVar5 < 4);
                    iVar9 = local_c0[0] - uVar14;
                    *puVar19 = (char)((uint)iVar9 >> 0x18);
                    puVar19 = puVar19 + 1;
                    *puVar16 = (char)((uint)iVar9 >> 0x10);
                    puVar16 = puVar16 + 1;
                    *puVar17 = (char)((uint)iVar9 >> 8);
                    puVar17 = puVar17 + 1;
                    *puVar18 = (char)iVar9;
                    puVar18 = puVar18 + 1;
                    uVar12 = uVar12 - 1;
                    uVar14 = local_c0[0];
                  } while (uVar12 != 0);
                }
              }
              else if (iVar9 == 1) {
                puVar16 = puVar19 + (int)uVar5;
                puVar13 = puVar16 + (int)uVar5;
                if (0 < (int)uVar5) {
                  do {
                    uVar2 = *param_2;
                    iVar9 = uVar2 - uVar14;
                    param_2 = param_2 + 1;
                    *puVar19 = (char)((uint)iVar9 >> 8);
                    *puVar16 = (char)iVar9;
                    uVar12 = uVar12 - 1;
                    puVar16 = puVar16 + 1;
                    puVar19 = puVar19 + 1;
                    uVar14 = (uint)uVar2;
                  } while (uVar12 != 0);
                }
              }
              else if (iVar9 == 2) {
                puVar16 = puVar19 + (int)uVar5;
                puVar17 = puVar16 + (int)uVar5;
                puVar13 = puVar17 + (int)uVar5;
                if (0 < (int)uVar5) {
                  do {
                    uVar5 = 0;
                    lVar11 = -4 - (longlong)param_2;
                    do {
                      uVar5 = uVar5 + 1;
                      *(char *)((longlong)local_c0 + lVar11 + (longlong)param_2) = (char)*param_2;
                      param_2 = (ushort *)((longlong)param_2 + 1);
                    } while (uVar5 < 4);
                    local_c8 = local_c4;
                    uVar5 = local_c4 & 0x7fffff;
                    if ((local_c4 & 0x7f800000) == 0x7f800000) {
                      if (uVar5 == 0) {
                        uVar5 = 0x7f8000;
                      }
                      else {
                        uVar5 = (uint)(uVar5 >> 8 == 0) | uVar5 >> 8 | 0x7f8000;
                      }
                    }
                    else {
                      uVar5 = (local_c4 & 0x80) + (local_c4 & 0x7fffffff) >> 8;
                      if (0x7f7fff < uVar5) {
                        uVar5 = (local_c4 & 0x7fffffff) >> 8;
                      }
                    }
                    uVar5 = (local_c4 & 0x80000000) >> 8 | uVar5;
                    iVar9 = uVar5 - uVar14;
                    *puVar19 = (char)((uint)iVar9 >> 0x10);
                    puVar19 = puVar19 + 1;
                    *puVar16 = (char)((uint)iVar9 >> 8);
                    puVar16 = puVar16 + 1;
                    *puVar17 = (char)iVar9;
                    puVar17 = puVar17 + 1;
                    uVar12 = uVar12 - 1;
                    uVar14 = uVar5;
                  } while (uVar12 != 0);
                }
              }
            }
            if (*(char *)((longlong)local_d8 + 0x19) == '\0') {
              plVar7 = (longlong *)local_d8[2];
              if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
                cVar1 = *(char *)(*plVar7 + 0x19);
                local_d8 = plVar7;
                plVar7 = (longlong *)*plVar7;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*plVar7 + 0x19);
                  local_d8 = plVar7;
                  plVar7 = (longlong *)*plVar7;
                }
              }
              else {
                cVar1 = *(char *)(local_d8[1] + 0x19);
                plVar4 = (longlong *)local_d8[1];
                plVar7 = local_d8;
                while ((local_d8 = plVar4, cVar1 == '\0' && (plVar7 == (longlong *)local_d8[2]))) {
                  cVar1 = *(char *)(local_d8[1] + 0x19);
                  plVar4 = (longlong *)local_d8[1];
                  plVar7 = local_d8;
                }
              }
            }
            puVar8 = (undefined8 *)FKey::GetFName(*(undefined8 *)(param_1 + 0x28),local_b8);
            puVar19 = puVar13;
          } while (local_d8 != (longlong *)*puVar8);
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 <= local_cc);
    }
    puVar8 = local_b0;
    lVar11 = *(longlong *)(param_1 + 0x18);
    dVar21 = _guard_xfg_dispatch_icall_nop((double)((longlong)puVar13 - lVar11) * 1.01);
    local_d0 = (int)dVar21 + 100;
    iVar6 = compress(*(undefined8 *)(param_1 + 0x20),&local_d0,lVar11,(int)puVar13 - (int)lVar11);
    if (iVar6 != 0) {
      FUN_143e179e0(local_a8,"Data compression (zlib) failed.");
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_a8,(ThrowInfo *)&DAT_1461db928);
    }
    *puVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  return local_d0;
}



// FUNCTION 143945850 FUN_143945850 body=63 status=ok
// SIG undefined FUN_143945850(void)

void FUN_143945850(void)

{
  FUN_1439453f0();
  return;
}



// FUNCTION 143945890 FUN_143945890 body=60 status=ok
// SIG undefined FUN_143945890(void)

void FUN_143945890(void)

{
  FUN_1439453f0();
  return;
}



// FUNCTION 1439458d0 FUN_1439458d0 body=71 status=ok
// SIG undefined FUN_1439458d0(void)

void FUN_1439458d0(void)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FUN_143e179e0(local_78,"Error decompressing data (input data are shorter than expected).");
  local_78[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db5c8);
}



// FUNCTION 143945920 FUN_143945920 body=1119 status=ok
// SIG undefined FUN_143945920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143945920(longlong param_1,undefined8 param_2,int param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined2 *puVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  int iVar20;
  int iVar21;
  undefined1 *puVar22;
  undefined1 auStack_108 [32];
  uint local_e8 [2];
  longlong *local_e0;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  int local_cc;
  undefined1 local_c8 [8];
  undefined8 *local_c0;
  undefined **local_b8 [12];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_c0 = param_5;
  if (param_3 == 0) {
    *param_5 = *(undefined8 *)(param_1 + 0x20);
    iVar5 = 0;
  }
  else {
    local_e8[0] = *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x10);
    iVar5 = uncompress(*(undefined8 *)(param_1 + 0x18),local_e8,param_2,param_3);
    if (iVar5 != 0) {
      FUN_143e179e0(local_b8,"Data decompression (zlib) failed.");
      local_b8[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_b8,(ThrowInfo *)&DAT_1461db5c8);
    }
    piVar10 = param_4 + 2;
    if (*(int *)(param_1 + 0x34) < (int)param_4[2]) {
      piVar10 = (int *)(param_1 + 0x34);
    }
    uVar14 = *param_4;
    puVar16 = *(undefined2 **)(param_1 + 0x20);
    iVar5 = param_4[1];
    iVar21 = *piVar10;
    piVar10 = param_4 + 3;
    if (*(int *)(param_1 + 0x38) < (int)param_4[3]) {
      piVar10 = (int *)(param_1 + 0x38);
    }
    puVar22 = *(undefined1 **)(param_1 + 0x18);
    local_d4 = *piVar10;
    local_d0 = uVar14;
    local_cc = iVar21;
    if (iVar5 <= local_d4) {
      do {
        std::
        _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
        ::begin(*(undefined8 *)(param_1 + 0x28),&local_e0);
        plVar7 = (longlong *)FKey::GetFName(*(undefined8 *)(param_1 + 0x28),local_c8);
        puVar19 = puVar22;
        if (local_e0 != (longlong *)*plVar7) {
          do {
            plVar7 = local_e0;
            iVar20 = *(int *)((longlong)local_e0 + 0x124);
            if (iVar5 < 0) {
              if (iVar20 < 0) {
                iVar17 = (-1 - iVar20) - iVar5;
              }
              else {
                iVar17 = (iVar20 - iVar5) + -1;
              }
              iVar17 = -(iVar17 / iVar20);
            }
            else {
              iVar17 = iVar5 / iVar20;
            }
            puVar22 = puVar19;
            if (iVar5 == iVar17 * iVar20) {
              uVar6 = FUN_14393e3f0((int)local_e0[0x24],uVar14,iVar21);
              uVar18 = (ulonglong)uVar6;
              iVar20 = 0;
              iVar21 = *(int *)((longlong)plVar7 + 0x11c);
              if (iVar21 == 0) {
                puVar12 = puVar19 + (int)uVar6;
                puVar13 = puVar12 + (int)uVar6;
                puVar15 = puVar13 + (int)uVar6;
                puVar22 = puVar15 + (int)uVar6;
                if ((longlong)(ulonglong)local_e8[0] <
                    (longlong)puVar22 - *(longlong *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
                  FUN_1439458d0();
                }
                if (0 < (int)uVar6) {
                  do {
                    uVar1 = *puVar19;
                    uVar2 = *puVar12;
                    puVar12 = puVar12 + 1;
                    puVar19 = puVar19 + 1;
                    iVar20 = iVar20 + CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),*puVar13),*puVar15);
                    piVar10 = &local_d8;
                    local_d8 = iVar20;
                    uVar6 = 0;
                    do {
                      iVar21 = *piVar10;
                      piVar10 = (int *)((longlong)piVar10 + 1);
                      uVar6 = uVar6 + 1;
                      *(char *)puVar16 = (char)iVar21;
                      puVar16 = (undefined2 *)((longlong)puVar16 + 1);
                    } while (uVar6 < 4);
                    uVar18 = uVar18 - 1;
                    puVar13 = puVar13 + 1;
                    puVar15 = puVar15 + 1;
                  } while (uVar18 != 0);
                }
              }
              else if (iVar21 == 1) {
                puVar12 = puVar19 + (int)uVar6;
                puVar22 = puVar12 + (int)uVar6;
                if ((longlong)(ulonglong)local_e8[0] <
                    (longlong)puVar22 - *(longlong *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
                  FUN_1439458d0();
                }
                if (0 < (int)uVar6) {
                  do {
                    uVar1 = *puVar19;
                    puVar19 = puVar19 + 1;
                    uVar2 = *puVar12;
                    puVar12 = puVar12 + 1;
                    iVar20 = iVar20 + (uint)CONCAT11(uVar1,uVar2);
                    *puVar16 = (short)iVar20;
                    puVar16 = puVar16 + 1;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
              }
              else if (iVar21 == 2) {
                lVar9 = (longlong)(int)uVar6;
                puVar12 = puVar19 + lVar9 * 2;
                puVar22 = puVar12 + lVar9;
                if ((longlong)(ulonglong)local_e8[0] <
                    (longlong)puVar22 - *(longlong *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
                  FUN_1439458d0();
                }
                if (0 < (int)uVar6) {
                  do {
                    uVar1 = *puVar19;
                    puVar13 = puVar19 + lVar9;
                    puVar19 = puVar19 + 1;
                    iVar20 = iVar20 + (uint)CONCAT21(CONCAT11(uVar1,*puVar13),*puVar12) * 0x100;
                    uVar6 = 0;
                    lVar11 = (longlong)&local_d8 - (longlong)puVar16;
                    local_d8 = iVar20;
                    do {
                      uVar6 = uVar6 + 1;
                      *(undefined1 *)puVar16 = *(undefined1 *)(lVar11 + (longlong)puVar16);
                      puVar16 = (undefined2 *)((longlong)puVar16 + 1);
                    } while (uVar6 < 4);
                    uVar18 = uVar18 - 1;
                    puVar12 = puVar12 + 1;
                  } while (uVar18 != 0);
                }
              }
            }
            if (*(char *)((longlong)local_e0 + 0x19) == '\0') {
              plVar7 = (longlong *)local_e0[2];
              if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
                cVar3 = *(char *)(*plVar7 + 0x19);
                local_e0 = plVar7;
                plVar7 = (longlong *)*plVar7;
                while (cVar3 == '\0') {
                  cVar3 = *(char *)(*plVar7 + 0x19);
                  local_e0 = plVar7;
                  plVar7 = (longlong *)*plVar7;
                }
              }
              else {
                cVar3 = *(char *)(local_e0[1] + 0x19);
                plVar4 = (longlong *)local_e0[1];
                plVar7 = local_e0;
                while ((local_e0 = plVar4, cVar3 == '\0' && (plVar7 == (longlong *)local_e0[2]))) {
                  cVar3 = *(char *)(local_e0[1] + 0x19);
                  plVar4 = (longlong *)local_e0[1];
                  plVar7 = local_e0;
                }
              }
            }
            puVar8 = (undefined8 *)FKey::GetFName(*(undefined8 *)(param_1 + 0x28),local_c8);
            puVar19 = puVar22;
            uVar14 = local_d0;
            iVar21 = local_cc;
          } while (local_e0 != (longlong *)*puVar8);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= local_d4);
    }
    if ((longlong)puVar22 - *(longlong *)(param_1 + 0x18) < (longlong)(ulonglong)local_e8[0]) {
      FUN_143e179e0(local_b8,"Error decompressing data (input data are longer than expected).");
      local_b8[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_b8,(ThrowInfo *)&DAT_1461db5c8);
    }
    *local_c0 = *(undefined8 *)(param_1 + 0x20);
    iVar5 = (int)puVar16 - *(int *)(param_1 + 0x20);
  }
  return iVar5;
}



// FUNCTION 143945d90 FUN_143945d90 body=63 status=ok
// SIG undefined FUN_143945d90(void)

void FUN_143945d90(void)

{
  FUN_143945920();
  return;
}



// FUNCTION 143945dd0 FUN_143945dd0 body=60 status=ok
// SIG undefined FUN_143945dd0(void)

void FUN_143945dd0(void)

{
  FUN_143945920();
  return;
}



// FUNCTION 143945e10 FUN_143945e10 body=965 status=ok
// SIG undefined FUN_143945e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_143945e10(undefined8 *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
             undefined1 param_5)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined1 local_130 [8];
  undefined8 local_128;
  undefined8 *local_120;
  undefined **local_118 [12];
  undefined **local_b8 [12];
  ulonglong local_58;
  
  local_128 = 0xfffffffffffffffe;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_120 = param_1;
  FBinaryArchiveFormatter::FBinaryArchiveFormatter();
  *param_1 = Imf::B44Compressor::vftable;
  *(int *)(param_1 + 2) = (int)param_3;
  *(undefined1 *)((longlong)param_1 + 0x14) = param_5;
  *(undefined4 *)(param_1 + 3) = 1;
  *(int *)((longlong)param_1 + 0x1c) = (int)param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar16 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar8 = UEngine::SeamlessTravelHandlerForWorld(param_2);
  param_1[7] = uVar8;
  param_1[8] = 0;
  uVar9 = FUN_143937df0(param_3,param_4);
  if (0x7fffffffffffffff < uVar9) {
    FUN_143e179e0(local_118,"Integer multiplication overflow.");
    local_118[0] = Iex::OverflowExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_118,(ThrowInfo *)&DAT_1461db8a8);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar9;
  uVar8 = SUB168(ZEXT816(2) * auVar3,0);
  if (SUB168(ZEXT816(2) * auVar3,8) != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  uVar8 = operator_new(uVar8);
  param_1[4] = uVar8;
  uVar8 = UEngine::SeamlessTravelHandlerForWorld(param_1[1]);
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::begin(uVar8,&local_138);
  plVar10 = (longlong *)FKey::GetFName(uVar8);
  iVar6 = 0;
  if (local_138 != (longlong *)*plVar10) {
    do {
      *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
      iVar16 = iVar6;
      if (*(int *)((longlong)local_138 + 0x11c) == 1) {
        iVar16 = iVar6 + 1;
      }
      if (*(char *)((longlong)local_138 + 0x19) == '\0') {
        plVar10 = (longlong *)local_138[2];
        if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar10 + 0x19);
          local_138 = plVar10;
          plVar10 = (longlong *)*plVar10;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar10 + 0x19);
            local_138 = plVar10;
            plVar10 = (longlong *)*plVar10;
          }
        }
        else {
          cVar1 = *(char *)(local_138[1] + 0x19);
          plVar5 = (longlong *)local_138[1];
          plVar10 = local_138;
          while ((local_138 = plVar5, cVar1 == '\0' && (plVar10 == (longlong *)local_138[2]))) {
            cVar1 = *(char *)(local_138[1] + 0x19);
            plVar5 = (longlong *)local_138[1];
            plVar10 = local_138;
          }
        }
      }
      puVar11 = (undefined8 *)FKey::GetFName(uVar8);
      iVar6 = iVar16;
    } while (local_138 != (longlong *)*puVar11);
  }
  uVar9 = (longlong)(iVar16 * 0xc) * (param_4 + 3) >> 2;
  if ((param_3 != 0) &&
     (auVar2._8_8_ = 0, auVar2._0_8_ = param_3,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar2,0) < param_4)) {
    FUN_143e179e0(local_118,"Integer multiplication overflow.");
    local_118[0] = Iex::OverflowExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_118,(ThrowInfo *)&DAT_1461db8a8);
  }
  param_4 = param_4 * param_3;
  uVar12 = -uVar9 - 1;
  if (param_4 < uVar12 || param_4 - uVar12 == 0) {
    uVar13 = operator_new(uVar9 + param_4);
    param_1[5] = uVar13;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)*(int *)(param_1 + 6);
    uVar13 = SUB168(ZEXT816(0x28) * auVar4,0);
    if (SUB168(ZEXT816(0x28) * auVar4,8) != 0) {
      uVar13 = 0xffffffffffffffff;
    }
    uVar13 = operator_new(uVar13);
    param_1[8] = uVar13;
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::begin(uVar8,&local_138);
    puVar11 = (undefined8 *)FKey::GetFName(uVar8,local_130);
    if (local_138 != (longlong *)*puVar11) {
      lVar15 = 0;
      do {
        *(undefined4 *)(param_1[8] + 0x18 + lVar15) = *(undefined4 *)((longlong)local_138 + 0x124);
        *(undefined4 *)(param_1[8] + 0x1c + lVar15) = *(undefined4 *)((longlong)local_138 + 0x11c);
        *(char *)(param_1[8] + 0x20 + lVar15) = (char)local_138[0x25];
        iVar6 = FUN_14393e510(*(undefined4 *)((longlong)local_138 + 0x11c));
        iVar7 = FUN_14393e510(1);
        *(int *)(param_1[8] + 0x24 + lVar15) = iVar6 / iVar7;
        if (*(char *)((longlong)local_138 + 0x19) == '\0') {
          plVar10 = (longlong *)local_138[2];
          if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar10 + 0x19);
            local_138 = plVar10;
            plVar10 = (longlong *)*plVar10;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar10 + 0x19);
              local_138 = plVar10;
              plVar10 = (longlong *)*plVar10;
            }
          }
          else {
            cVar1 = *(char *)(local_138[1] + 0x19);
            plVar5 = (longlong *)local_138[1];
            plVar10 = local_138;
            while ((local_138 = plVar5, cVar1 == '\0' && (plVar10 == (longlong *)local_138[2]))) {
              cVar1 = *(char *)(local_138[1] + 0x19);
              plVar5 = (longlong *)local_138[1];
              plVar10 = local_138;
            }
          }
        }
        lVar15 = lVar15 + 0x28;
        puVar11 = (undefined8 *)FKey::GetFName(uVar8,local_130);
      } while (local_138 != (longlong *)*puVar11);
    }
    puVar14 = (undefined4 *)UEngine::SeamlessTravelHandlerForWorld(param_2);
    *(undefined4 *)(param_1 + 9) = *puVar14;
    *(undefined4 *)((longlong)param_1 + 0x4c) = puVar14[2];
    *(undefined4 *)(param_1 + 10) = puVar14[3];
    if (*(int *)(param_1 + 6) == iVar16) {
      *(undefined4 *)(param_1 + 3) = 0;
    }
    return param_1;
  }
  FUN_143e179e0(local_b8,"Integer addition overflow.");
  local_b8[0] = Iex::OverflowExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_b8,(ThrowInfo *)&DAT_1461db8a8);
}



// FUNCTION 1439461e0 FUN_1439461e0 body=87 status=ok
// SIG undefined FUN_1439461e0(void)

undefined8 * FUN_1439461e0(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::B44Compressor::vftable;
  FMemory::operator_delete(param_1[4]);
  FMemory::operator_delete(param_1[5]);
  FMemory::operator_delete(param_1[8]);
  FUN_143937ec0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143946240 FUN_143946240 body=1501 status=ok
// SIG undefined FUN_143946240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143946240(longlong param_1,undefined2 *param_2,int param_3,undefined4 *param_4,
                 undefined8 *param_5)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  ulonglong uVar14;
  size_t sVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  void *_Dst;
  int iVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  *param_5 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    iVar20 = 0;
  }
  else {
    uVar3 = *param_4;
    piVar13 = param_4 + 2;
    if (*(int *)(param_1 + 0x4c) < (int)param_4[2]) {
      piVar13 = (int *)(param_1 + 0x4c);
    }
    iVar20 = param_4[1];
    iVar8 = *piVar13;
    lVar18 = *(longlong *)(param_1 + 0x20);
    piVar13 = param_4 + 3;
    if (*(int *)(param_1 + 0x50) < (int)param_4[3]) {
      piVar13 = (int *)(param_1 + 0x50);
    }
    local_88 = *piVar13;
    local_78 = param_1;
    local_68 = param_2;
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::begin(*(undefined8 *)(param_1 + 0x38),&local_80);
    plVar9 = (longlong *)FKey::GetFName(*(undefined8 *)(param_1 + 0x38),&local_70);
    iVar22 = local_88;
    if (local_80 != (longlong *)*plVar9) {
      lVar17 = 0;
      do {
        plVar9 = (longlong *)(*(longlong *)(param_1 + 0x40) + lVar17);
        *plVar9 = lVar18;
        plVar9[1] = lVar18;
        uVar6 = FUN_14393e3f0((int)local_80[0x24],uVar3,iVar8);
        *(undefined4 *)(plVar9 + 2) = uVar6;
        iVar7 = FUN_14393e3f0(*(undefined4 *)((longlong)local_80 + 0x124),iVar20,iVar22);
        param_1 = local_78;
        *(int *)((longlong)plVar9 + 0x14) = iVar7;
        lVar18 = lVar18 + (longlong)(iVar7 * *(int *)((longlong)plVar9 + 0x24) * (int)plVar9[2]) * 2
        ;
        if (*(char *)((longlong)local_80 + 0x19) == '\0') {
          plVar9 = (longlong *)local_80[2];
          if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar9 + 0x19);
            local_80 = plVar9;
            plVar9 = (longlong *)*plVar9;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar9 + 0x19);
              local_80 = plVar9;
              plVar9 = (longlong *)*plVar9;
            }
          }
          else {
            cVar1 = *(char *)(local_80[1] + 0x19);
            plVar5 = (longlong *)local_80[1];
            plVar9 = local_80;
            while ((local_80 = plVar5, cVar1 == '\0' && (plVar9 == (longlong *)local_80[2]))) {
              cVar1 = *(char *)(local_80[1] + 0x19);
              plVar5 = (longlong *)local_80[1];
              plVar9 = local_80;
            }
          }
        }
        lVar17 = lVar17 + 0x28;
        puVar10 = (undefined8 *)FKey::GetFName(*(undefined8 *)(local_78 + 0x38),&local_70);
        param_2 = local_68;
      } while (local_80 != (longlong *)*puVar10);
    }
    iVar8 = local_88;
    lVar18 = local_78;
    if (*(int *)(local_78 + 0x18) == 1) {
      for (; iVar20 <= iVar8; iVar20 = iVar20 + 1) {
        iVar22 = 0;
        if (0 < *(int *)(lVar18 + 0x30)) {
          lVar17 = 0;
          do {
            lVar11 = *(longlong *)(lVar18 + 0x40);
            iVar7 = *(int *)(lVar17 + 0x18 + lVar11);
            if (iVar20 < 0) {
              if (iVar7 < 0) {
                iVar12 = (-1 - iVar7) - iVar20;
              }
              else {
                iVar12 = (iVar7 - iVar20) + -1;
              }
              iVar12 = -(iVar12 / iVar7);
            }
            else {
              iVar12 = iVar20 / iVar7;
            }
            if (iVar20 == iVar12 * iVar7) {
              if (*(int *)(lVar17 + 0x1c + lVar11) == 1) {
                for (iVar7 = *(int *)(lVar17 + 0x10 + lVar11); 0 < iVar7; iVar7 = iVar7 + -1) {
                  uVar2 = *param_2;
                  param_2 = param_2 + 1;
                  uVar4 = (uint)local_88 >> 0x10;
                  local_88 = CONCAT22((short)uVar4,uVar2);
                  **(undefined2 **)(lVar17 + 8 + lVar11) = uVar2;
                  plVar9 = (longlong *)(lVar17 + 8 + lVar11);
                  *plVar9 = *plVar9 + 2;
                }
              }
              else {
                lVar18 = (longlong)
                         (*(int *)(lVar17 + 0x24 + lVar11) * *(int *)(lVar17 + 0x10 + lVar11));
                sVar15 = lVar18 * 2;
                _guard_xfg_dispatch_icall_nop(*(void **)(lVar17 + 8 + lVar11),param_2,sVar15);
                param_2 = param_2 + lVar18;
                plVar9 = (longlong *)(lVar17 + 8 + lVar11);
                *plVar9 = *plVar9 + sVar15;
                lVar18 = local_78;
              }
            }
            iVar22 = iVar22 + 1;
            lVar17 = lVar17 + 0x28;
          } while (iVar22 < *(int *)(lVar18 + 0x30));
        }
      }
    }
    else {
      for (; iVar20 <= iVar8; iVar20 = iVar20 + 1) {
        iVar22 = 0;
        if (0 < *(int *)(lVar18 + 0x30)) {
          lVar17 = 0;
          do {
            lVar11 = *(longlong *)(lVar18 + 0x40) + lVar17;
            iVar7 = *(int *)(lVar11 + 0x18);
            if (iVar20 < 0) {
              if (iVar7 < 0) {
                iVar12 = (-1 - iVar7) - iVar20;
              }
              else {
                iVar12 = (iVar7 - iVar20) + -1;
              }
              iVar12 = -(iVar12 / iVar7);
            }
            else {
              iVar12 = iVar20 / iVar7;
            }
            if (iVar20 == iVar12 * iVar7) {
              lVar18 = (longlong)(*(int *)(lVar11 + 0x24) * *(int *)(lVar11 + 0x10));
              sVar15 = lVar18 * 2;
              _guard_xfg_dispatch_icall_nop(*(void **)(lVar11 + 8),param_2,sVar15);
              param_2 = param_2 + lVar18;
              *(longlong *)(lVar11 + 8) = *(longlong *)(lVar11 + 8) + sVar15;
              lVar18 = local_78;
            }
            iVar22 = iVar22 + 1;
            lVar17 = lVar17 + 0x28;
          } while (iVar22 < *(int *)(lVar18 + 0x30));
        }
      }
    }
    _Dst = *(void **)(lVar18 + 0x28);
    local_80 = (longlong *)((ulonglong)local_80 & 0xffffffff00000000);
    if (0 < *(int *)(lVar18 + 0x30)) {
      local_70 = 0;
      do {
        lVar17 = local_70;
        plVar9 = (longlong *)(*(longlong *)(lVar18 + 0x40) + local_70);
        if (*(int *)((longlong)plVar9 + 0x1c) == 1) {
          iVar20 = *(int *)((longlong)plVar9 + 0x14);
          local_70 = lVar17;
          if (0 < iVar20) {
            local_88 = 1;
            do {
              iVar8 = (int)plVar9[2];
              uVar14 = (ulonglong)iVar8;
              puVar10 = (undefined8 *)(*plVar9 + (longlong)((local_88 + -1) * iVar8) * 2);
              puVar16 = (undefined8 *)((longlong)puVar10 + uVar14 * 2);
              puVar19 = (undefined8 *)((longlong)puVar16 + uVar14 * 2);
              puVar21 = (undefined8 *)((longlong)puVar19 + uVar14 * 2);
              if (iVar20 <= local_88 + 2) {
                if (iVar20 <= local_88) {
                  puVar16 = puVar10;
                }
                puVar21 = puVar19;
                if (iVar20 <= local_88 + 1) {
                  puVar19 = puVar16;
                  puVar21 = puVar16;
                }
              }
              iVar20 = 0;
              iVar22 = local_88;
              if (0 < iVar8) {
                do {
                  if (iVar20 + 3 < (int)uVar14) {
                    local_60 = *puVar10;
                    local_58 = *puVar16;
                    local_50 = *puVar19;
                    local_48 = *puVar21;
                  }
                  else {
                    iVar22 = 0;
                    iVar8 = ((int)uVar14 - iVar20) + -1;
                    do {
                      iVar7 = iVar22;
                      if (iVar8 < iVar22) {
                        iVar7 = iVar8;
                      }
                      lVar17 = (longlong)iVar7 * 2;
                      lVar11 = (longlong)iVar22;
                      iVar22 = iVar22 + 1;
                      lVar11 = lVar11 * 2;
                      *(undefined2 *)((longlong)&local_60 + lVar11) =
                           *(undefined2 *)(lVar17 + (longlong)puVar10);
                      *(undefined2 *)((longlong)&local_58 + lVar11) =
                           *(undefined2 *)((longlong)puVar16 + lVar17);
                      *(undefined2 *)((longlong)&local_50 + lVar11) =
                           *(undefined2 *)((longlong)puVar19 + lVar17);
                      *(undefined2 *)((longlong)&local_48 + lVar11) =
                           *(undefined2 *)((longlong)puVar21 + lVar17);
                    } while (iVar22 < 4);
                  }
                  lVar17 = plVar9[4];
                  puVar10 = puVar10 + 1;
                  puVar19 = puVar19 + 1;
                  puVar16 = puVar16 + 1;
                  puVar21 = puVar21 + 1;
                  if ((char)lVar17 != '\0') {
                    lVar11 = 0;
                    do {
                      *(undefined2 *)((longlong)&local_60 + lVar11 * 2) =
                           *(undefined2 *)
                            (&DAT_145c66160 +
                            (ulonglong)*(ushort *)((longlong)&local_60 + lVar11 * 2) * 2);
                      *(undefined2 *)((longlong)&local_60 + lVar11 * 2 + 2) =
                           *(undefined2 *)
                            (&DAT_145c66160 +
                            (ulonglong)*(ushort *)((longlong)&local_60 + lVar11 * 2 + 2) * 2);
                      *(undefined2 *)((longlong)&local_60 + lVar11 * 2 + 4) =
                           *(undefined2 *)
                            (&DAT_145c66160 +
                            (ulonglong)*(ushort *)((longlong)&local_60 + lVar11 * 2 + 4) * 2);
                      *(undefined2 *)((longlong)&local_60 + lVar11 * 2 + 6) =
                           *(undefined2 *)
                            (&DAT_145c66160 +
                            (ulonglong)*(ushort *)((longlong)&local_60 + lVar11 * 2 + 6) * 2);
                      lVar11 = lVar11 + 4;
                    } while (lVar11 < 0x10);
                  }
                  iVar8 = FUN_1439468e0(&local_60,_Dst,*(undefined1 *)(lVar18 + 0x14),
                                        (char)lVar17 == '\0');
                  uVar14 = (ulonglong)*(uint *)(plVar9 + 2);
                  iVar20 = iVar20 + 4;
                  _Dst = (void *)((longlong)_Dst + (longlong)iVar8);
                  lVar18 = local_78;
                  iVar22 = local_88;
                } while (iVar20 < (int)*(uint *)(plVar9 + 2));
              }
              iVar20 = *(int *)((longlong)plVar9 + 0x14);
              local_88 = iVar22 + 4;
            } while (iVar22 + 3 < iVar20);
          }
        }
        else {
          sVar15 = (size_t)(*(int *)((longlong)plVar9 + 0x24) * *(int *)((longlong)plVar9 + 0x14) *
                            (int)plVar9[2] * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,(void *)*plVar9,sVar15);
          _Dst = (void *)((longlong)_Dst + sVar15);
          local_70 = lVar17;
          lVar18 = local_78;
        }
        iVar20 = (int)local_80 + 1;
        local_70 = local_70 + 0x28;
        local_80 = (longlong *)CONCAT44(local_80._4_4_,iVar20);
      } while (iVar20 < *(int *)(lVar18 + 0x30));
    }
    iVar20 = (int)_Dst - *(int *)(lVar18 + 0x28);
  }
  return iVar20;
}



// FUNCTION 143946820 FUN_143946820 body=123 status=ok
// SIG undefined FUN_143946820(void)

void FUN_143946820(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4,
                  undefined8 param_5)

{
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = (**(code **)(*param_1 + 8))();
  local_10 = *(undefined4 *)((longlong)param_1 + 0x4c);
  local_c = param_4 + -1 + local_c;
  local_18 = (undefined4)param_1[9];
  local_14 = param_4;
  FUN_143946240(param_1,param_2,param_3,&local_18,param_5);
  return;
}



// FUNCTION 1439468a0 FUN_1439468a0 body=60 status=ok
// SIG undefined FUN_1439468a0(void)

void FUN_1439468a0(void)

{
  FUN_143946240();
  return;
}



// FUNCTION 1439468e0 FUN_1439468e0 body=1166 status=ok
// SIG undefined FUN_1439468e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1439468e0(longlong param_1,undefined1 *param_2,char param_3,char param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar9;
  undefined4 uVar10;
  ushort *puVar11;
  byte bVar12;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ushort uVar24;
  ushort uVar26;
  uint uVar25;
  ushort uVar27;
  ushort uVar29;
  uint uVar28;
  ushort uVar30;
  ushort uVar32;
  uint uVar31;
  ushort uVar33;
  ushort uVar35;
  uint uVar34;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined1 local_f8 [24];
  char local_e0 [4];
  int local_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int local_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_98 [16];
  ushort local_58 [16];
  ulonglong local_38;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  byte bVar13;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)local_f8;
  lVar14 = 0x10;
  puVar11 = local_58;
  lVar19 = 0x10;
  do {
    uVar30 = *(ushort *)((param_1 - (longlong)local_58) + (longlong)puVar11);
    if ((uVar30 & 0x7c00) == 0x7c00) {
      *puVar11 = 0x8000;
    }
    else {
      if ((uVar30 & 0x8000) == 0) {
        uVar30 = uVar30 | 0x8000;
      }
      else {
        uVar30 = ~uVar30;
      }
      *puVar11 = uVar30;
    }
    puVar11 = puVar11 + 1;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  uVar18 = 0;
  if (DAT_1468387b0 < 2) {
    puVar11 = local_58;
    do {
      if ((ushort)uVar18 < *puVar11) {
        uVar18 = (uint)*puVar11;
      }
      puVar11 = puVar11 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  else {
    uVar24 = (local_58[0] != 0) * local_58[0];
    uVar30 = (local_58[1] != 0) * local_58[1];
    uVar27 = (local_58[2] != 0) * local_58[2];
    uVar29 = (local_58[3] != 0) * local_58[3];
    uVar32 = (local_58[4] != 0) * local_58[4];
    uVar33 = (local_58[5] != 0) * local_58[5];
    uVar35 = (local_58[6] != 0) * local_58[6];
    uVar1 = (local_58[7] != 0) * local_58[7];
    uVar26 = (local_58[8] != 0) * local_58[8];
    uVar2 = (local_58[9] != 0) * local_58[9];
    uVar3 = (local_58[10] != 0) * local_58[10];
    uVar4 = (local_58[0xb] != 0) * local_58[0xb];
    uVar5 = (local_58[0xc] != 0) * local_58[0xc];
    uVar6 = (local_58[0xd] != 0) * local_58[0xd];
    uVar7 = (local_58[0xe] != 0) * local_58[0xe];
    uVar8 = (local_58[0xf] != 0) * local_58[0xf];
    uVar24 = (uVar24 < uVar26) * uVar26 | (uVar24 >= uVar26) * uVar24;
    uVar26 = (uVar30 < uVar2) * uVar2 | (uVar30 >= uVar2) * uVar30;
    uVar27 = (uVar27 < uVar3) * uVar3 | (uVar27 >= uVar3) * uVar27;
    uVar29 = (uVar29 < uVar4) * uVar4 | (uVar29 >= uVar4) * uVar29;
    uVar30 = (uVar32 < uVar5) * uVar5 | (uVar32 >= uVar5) * uVar32;
    uVar32 = (uVar33 < uVar6) * uVar6 | (uVar33 >= uVar6) * uVar33;
    uVar33 = (uVar35 < uVar7) * uVar7 | (uVar35 >= uVar7) * uVar35;
    uVar35 = (uVar1 < uVar8) * uVar8 | (uVar1 >= uVar8) * uVar1;
    uVar30 = (uVar24 < uVar30) * uVar30 | (uVar24 >= uVar30) * uVar24;
    uVar24 = (uVar26 < uVar32) * uVar32 | (uVar26 >= uVar32) * uVar26;
    uVar27 = (uVar27 < uVar33) * uVar33 | (uVar27 >= uVar33) * uVar27;
    uVar29 = (uVar29 < uVar35) * uVar35 | (uVar29 >= uVar35) * uVar29;
    uVar30 = (uVar30 < uVar27) * uVar27 | (uVar30 >= uVar27) * uVar30;
    uVar24 = (uVar24 < uVar29) * uVar29 | (uVar24 >= uVar29) * uVar24;
    uVar18 = (uint)(ushort)((uVar30 < uVar24) * uVar24 | (uVar30 >= uVar24) * uVar30);
  }
  bVar13 = 0xff;
  do {
    bVar12 = bVar13 + 1;
    lVar14 = 0;
    do {
      iVar9 = (uVar18 - local_58[lVar14]) * 2;
      local_98[lVar14] =
           (int)((iVar9 >> (bVar13 + 2 & 0x1f) & 1U) + (1 << (bVar12 & 0x1f)) + -1 + iVar9) >>
           (bVar13 + 2 & 0x1f);
      lVar14 = lVar14 + 1;
    } while (lVar14 < 0x10);
    local_dc = (local_98[4] - local_98[8]) + 0x20;
    uVar17 = (local_98[0] - local_98[4]) + 0x20;
    iStack_d8 = (local_98[8] - local_98[0xc]) + 0x20;
    iStack_c8 = (local_98[0xc] - local_98[0xd]) + 0x20;
    iStack_d4 = (local_98[0] - local_98[1]) + 0x20;
    iStack_c4 = (local_98[1] - local_98[2]) + 0x20;
    local_a8 = (local_98[0xe] - local_98[0xf]) + 0x20;
    local_ac = (local_98[10] - local_98[0xb]) + 0x20;
    local_b4 = (local_98[2] - local_98[3]) + 0x20;
    iStack_d0 = (local_98[4] - local_98[5]) + 0x20;
    local_b0 = (local_98[6] - local_98[7]) + 0x20;
    local_cc = (local_98[8] - local_98[9]) + 0x20;
    iStack_c0 = (local_98[5] - local_98[6]) + 0x20;
    local_bc = (local_98[9] - local_98[10]) + 0x20;
    local_b8 = (local_98[0xd] - local_98[0xe]) + 0x20;
    lVar14 = 1;
    iVar9 = 1;
    uVar20 = uVar17;
    uVar21 = uVar17;
    if (1 < DAT_1468387b0) {
      lVar14 = 9;
      iVar9 = 9;
      uVar40 = (uint)(local_dc < (int)uVar17) * local_dc | (local_dc >= (int)uVar17) * uVar17;
      uVar41 = (uint)(iStack_d8 < (int)uVar17) * iStack_d8 | (iStack_d8 >= (int)uVar17) * uVar17;
      uVar42 = (uint)(iStack_d4 < (int)uVar17) * iStack_d4 | (iStack_d4 >= (int)uVar17) * uVar17;
      uVar43 = (uint)(iStack_d0 < (int)uVar17) * iStack_d0 | (iStack_d0 >= (int)uVar17) * uVar17;
      uVar36 = (uint)((int)uVar17 < local_dc) * local_dc | ((int)uVar17 >= local_dc) * uVar17;
      uVar37 = (uint)((int)uVar17 < iStack_d8) * iStack_d8 | ((int)uVar17 >= iStack_d8) * uVar17;
      uVar38 = (uint)((int)uVar17 < iStack_d4) * iStack_d4 | ((int)uVar17 >= iStack_d4) * uVar17;
      uVar39 = (uint)((int)uVar17 < iStack_d0) * iStack_d0 | ((int)uVar17 >= iStack_d0) * uVar17;
      uVar20 = (uint)((int)uVar17 < local_cc) * local_cc | ((int)uVar17 >= local_cc) * uVar17;
      uVar21 = (uint)((int)uVar17 < iStack_c8) * iStack_c8 | ((int)uVar17 >= iStack_c8) * uVar17;
      uVar22 = (uint)((int)uVar17 < iStack_c4) * iStack_c4 | ((int)uVar17 >= iStack_c4) * uVar17;
      uVar23 = (uint)((int)uVar17 < iStack_c0) * iStack_c0 | ((int)uVar17 >= iStack_c0) * uVar17;
      uVar25 = (uint)(local_cc < (int)uVar17) * local_cc | (local_cc >= (int)uVar17) * uVar17;
      uVar28 = (uint)(iStack_c8 < (int)uVar17) * iStack_c8 | (iStack_c8 >= (int)uVar17) * uVar17;
      uVar31 = (uint)(iStack_c4 < (int)uVar17) * iStack_c4 | (iStack_c4 >= (int)uVar17) * uVar17;
      uVar34 = (uint)(iStack_c0 < (int)uVar17) * iStack_c0 | (iStack_c0 >= (int)uVar17) * uVar17;
      uVar20 = ((int)uVar36 < (int)uVar20) * uVar20 | ((int)uVar36 >= (int)uVar20) * uVar36;
      uVar21 = ((int)uVar37 < (int)uVar21) * uVar21 | ((int)uVar37 >= (int)uVar21) * uVar37;
      uVar22 = ((int)uVar38 < (int)uVar22) * uVar22 | ((int)uVar38 >= (int)uVar22) * uVar38;
      uVar23 = ((int)uVar39 < (int)uVar23) * uVar23 | ((int)uVar39 >= (int)uVar23) * uVar39;
      uVar25 = ((int)uVar25 < (int)uVar40) * uVar25 | ((int)uVar25 >= (int)uVar40) * uVar40;
      uVar28 = ((int)uVar28 < (int)uVar41) * uVar28 | ((int)uVar28 >= (int)uVar41) * uVar41;
      uVar31 = ((int)uVar31 < (int)uVar42) * uVar31 | ((int)uVar31 >= (int)uVar42) * uVar42;
      uVar34 = ((int)uVar34 < (int)uVar43) * uVar34 | ((int)uVar34 >= (int)uVar43) * uVar43;
      uVar20 = ((int)uVar20 < (int)uVar22) * uVar22 | ((int)uVar20 >= (int)uVar22) * uVar20;
      uVar21 = ((int)uVar21 < (int)uVar23) * uVar23 | ((int)uVar21 >= (int)uVar23) * uVar21;
      uVar21 = ((int)uVar20 < (int)uVar21) * uVar21 | ((int)uVar20 >= (int)uVar21) * uVar20;
      uVar20 = ((int)uVar31 < (int)uVar25) * uVar31 | ((int)uVar31 >= (int)uVar25) * uVar25;
      uVar22 = ((int)uVar34 < (int)uVar28) * uVar34 | ((int)uVar34 >= (int)uVar28) * uVar28;
      uVar20 = ((int)uVar22 < (int)uVar20) * uVar22 | ((int)uVar22 >= (int)uVar20) * uVar20;
    }
    puVar15 = (uint *)(local_e0 + lVar14 * 4);
    uVar16 = (ulonglong)(0xf - iVar9);
    do {
      uVar22 = *puVar15;
      puVar15 = puVar15 + 1;
      if ((int)uVar22 < (int)uVar20) {
        uVar20 = uVar22;
      }
      if ((int)uVar21 < (int)uVar22) {
        uVar21 = uVar22;
      }
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    bVar13 = bVar12;
  } while (((int)uVar20 < 0) || (0x3f < (int)uVar21));
  if ((uVar20 == 0x20) && ((uVar21 == 0x20 && (param_3 != '\0')))) {
    *param_2 = (char)(local_58[0] >> 8);
    param_2[1] = (undefined1)local_58[0];
    uVar10 = 3;
    param_2[2] = 0xfc;
  }
  else {
    if (param_4 != '\0') {
      local_58[0] = (short)uVar18 - ((short)local_98[0] << (bVar12 & 0x1f));
    }
    param_2[1] = (undefined1)local_58[0];
    local_e0[0] = (char)uVar17;
    param_2[4] = (char)local_dc << 6 | (byte)iStack_d8;
    param_2[3] = (byte)(local_dc >> 2) | local_e0[0] << 4;
    param_2[7] = (char)local_cc << 6 | (byte)iStack_c8;
    param_2[10] = (char)local_bc << 6 | (byte)local_b8;
    param_2[0xb] = (byte)(local_b0 >> 4) | (char)local_b4 << 2;
    param_2[0xd] = (char)local_ac << 6 | (byte)local_a8;
    uVar10 = 0xe;
    *param_2 = (char)(local_58[0] >> 8);
    param_2[2] = (byte)((int)uVar17 >> 4) | bVar12 * '\x04';
    param_2[5] = (byte)(iStack_d0 >> 4) | (char)iStack_d4 << 2;
    param_2[6] = (byte)(local_cc >> 2) | (char)iStack_d0 << 4;
    param_2[8] = (byte)(iStack_c0 >> 4) | (char)iStack_c4 << 2;
    param_2[9] = (byte)(local_bc >> 2) | (char)iStack_c0 << 4;
    param_2[0xc] = (byte)(local_ac >> 2) | (char)local_b0 << 4;
  }
  return uVar10;
}



// FUNCTION 143946d70 FUN_143946d70 body=1744 status=ok
// SIG undefined FUN_143946d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143946d70(longlong param_1,byte *param_2,int param_3,undefined4 *param_4,undefined8 *param_5
                 )

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  byte *_Dst;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  longlong lVar15;
  undefined1 *_Src;
  size_t sVar16;
  longlong lVar17;
  longlong lVar18;
  undefined2 *_Dst_00;
  longlong lVar19;
  byte *_Dst_01;
  int iVar20;
  void *_Dst_02;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  int local_104;
  longlong *local_100;
  int local_f8;
  int local_f4;
  byte *local_f0;
  longlong local_e8;
  void *local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  undefined **local_c8 [12];
  ushort local_68 [4];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  *param_5 = *(undefined8 *)(param_1 + 0x28);
  local_d0 = param_5;
  if (param_3 == 0) {
    iVar12 = 0;
  }
  else {
    local_104 = param_4[1];
    puVar13 = param_4 + 2;
    if (*(int *)(param_1 + 0x4c) < (int)param_4[2]) {
      puVar13 = (undefined4 *)(param_1 + 0x4c);
    }
    uVar2 = *puVar13;
    lVar15 = *(longlong *)(param_1 + 0x20);
    piVar14 = param_4 + 3;
    if (*(int *)(param_1 + 0x50) < (int)param_4[3]) {
      piVar14 = (int *)(param_1 + 0x50);
    }
    uVar3 = *param_4;
    local_f8 = *piVar14;
    local_f4 = param_3;
    local_f0 = param_2;
    local_d8 = param_1;
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::begin(*(undefined8 *)(param_1 + 0x38),&local_100);
    plVar9 = (longlong *)FKey::GetFName(*(undefined8 *)(param_1 + 0x38),&local_e8);
    iVar12 = local_104;
    if (local_100 != (longlong *)*plVar9) {
      lVar18 = 0;
      do {
        plVar9 = (longlong *)(*(longlong *)(param_1 + 0x40) + lVar18);
        *plVar9 = lVar15;
        plVar9[1] = lVar15;
        uVar7 = FUN_14393e3f0((int)local_100[0x24],uVar3,uVar2);
        *(undefined4 *)(plVar9 + 2) = uVar7;
        iVar8 = FUN_14393e3f0(*(undefined4 *)((longlong)local_100 + 0x124),iVar12,local_f8);
        *(int *)((longlong)plVar9 + 0x14) = iVar8;
        lVar15 = lVar15 + (longlong)(iVar8 * *(int *)((longlong)plVar9 + 0x24) * (int)plVar9[2]) * 2
        ;
        if (*(char *)((longlong)local_100 + 0x19) == '\0') {
          plVar9 = (longlong *)local_100[2];
          if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar9 + 0x19);
            local_100 = plVar9;
            plVar9 = (longlong *)*plVar9;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar9 + 0x19);
              local_100 = plVar9;
              plVar9 = (longlong *)*plVar9;
            }
          }
          else {
            cVar1 = *(char *)(local_100[1] + 0x19);
            plVar6 = (longlong *)local_100[1];
            plVar9 = local_100;
            while ((local_100 = plVar6, cVar1 == '\0' && (plVar9 == (longlong *)local_100[2]))) {
              cVar1 = *(char *)(local_100[1] + 0x19);
              plVar6 = (longlong *)local_100[1];
              plVar9 = local_100;
            }
          }
        }
        lVar18 = lVar18 + 0x28;
        puVar10 = (undefined8 *)FKey::GetFName(*(undefined8 *)(param_1 + 0x38),&local_e8);
        param_2 = local_f0;
        param_3 = local_f4;
      } while (local_100 != (longlong *)*puVar10);
    }
    local_f4 = 0;
    lVar15 = local_d8;
    if (0 < *(int *)(local_d8 + 0x30)) {
      local_e8 = 0;
      do {
        iVar12 = local_f4;
        plVar9 = (longlong *)(local_e8 + *(longlong *)(lVar15 + 0x40));
        if (*(int *)((longlong)plVar9 + 0x1c) == 1) {
          iVar8 = 0;
          local_100 = (longlong *)((ulonglong)local_100 & 0xffffffff00000000);
          local_f4 = iVar12;
          if (0 < *(int *)((longlong)plVar9 + 0x14)) {
            local_108 = 1;
            do {
              iVar12 = (int)plVar9[2];
              lVar15 = (longlong)iVar12;
              iVar20 = 0;
              local_e0 = (void *)(*plVar9 + (longlong)(iVar8 * iVar12) * 2);
              _Dst_02 = (void *)((longlong)local_e0 + lVar15 * 2);
              _Dst_01 = (byte *)((longlong)_Dst_02 + lVar15 * 2);
              local_f0 = _Dst_01 + lVar15 * 2;
              if (0 < iVar12) {
                do {
                  if (param_3 < 3) {
                    /* WARNING: Subroutine does not return */
                    FUN_1439458d0();
                  }
                  if (param_2[2] == 0xfc) {
                    local_68[0] = CONCAT11(*param_2,param_2[1]);
                    if ((*param_2 & 0x80) == 0) {
                      local_68[0] = ~local_68[0];
                    }
                    else {
                      local_68[0] = local_68[0] & 0x7fff;
                    }
                    lVar15 = 1;
                    uVar4 = local_68[0];
                    do {
                      local_68[lVar15] = uVar4;
                      lVar15 = lVar15 + 1;
                      uVar4 = local_68[0];
                    } while (lVar15 < 0x10);
                    param_2 = param_2 + 3;
                    param_3 = param_3 + -3;
                  }
                  else {
                    if (param_3 < 0xe) {
                    /* WARNING: Subroutine does not return */
                      FUN_1439458d0();
                    }
                    FUN_143947510(param_2,local_68);
                    param_2 = param_2 + 0xe;
                    param_3 = param_3 + -0xe;
                  }
                  if ((char)plVar9[4] != '\0') {
                    lVar15 = 0;
                    do {
                      local_68[lVar15] =
                           *(ushort *)(&DAT_145c86160 + (ulonglong)local_68[lVar15] * 2);
                      local_68[lVar15 + 1] =
                           *(ushort *)(&DAT_145c86160 + (ulonglong)local_68[lVar15 + 1] * 2);
                      local_68[lVar15 + 2] =
                           *(ushort *)(&DAT_145c86160 + (ulonglong)local_68[lVar15 + 2] * 2);
                      *(undefined2 *)(local_60 + lVar15 * 2 + -2) =
                           *(undefined2 *)
                            (&DAT_145c86160 + (ulonglong)*(ushort *)(local_60 + lVar15 * 2 + -2) * 2
                            );
                      lVar15 = lVar15 + 4;
                    } while (lVar15 < 0x10);
                  }
                  if (iVar20 + 3 < (int)plVar9[2]) {
                    iVar12 = 8;
                  }
                  else {
                    iVar12 = ((int)plVar9[2] - iVar20) * 2;
                  }
                  sVar16 = (size_t)iVar12;
                  if (local_108 + 2 < *(int *)((longlong)plVar9 + 0x14)) {
                    _guard_xfg_dispatch_icall_nop(local_e0,local_68,sVar16);
                    _guard_xfg_dispatch_icall_nop(_Dst_02,local_60,sVar16);
                    _guard_xfg_dispatch_icall_nop(_Dst_01,local_58,sVar16);
                    _Src = local_50;
                    _Dst = local_f0;
LAB_143947165:
                    _guard_xfg_dispatch_icall_nop(_Dst,_Src,sVar16);
                  }
                  else {
                    _guard_xfg_dispatch_icall_nop(local_e0,local_68,sVar16);
                    if (local_108 < *(int *)((longlong)plVar9 + 0x14)) {
                      _guard_xfg_dispatch_icall_nop(_Dst_02,local_60,sVar16);
                    }
                    if (local_108 + 1 < *(int *)((longlong)plVar9 + 0x14)) {
                      _Src = local_58;
                      _Dst = _Dst_01;
                      goto LAB_143947165;
                    }
                  }
                  local_f0 = local_f0 + 8;
                  local_e0 = (void *)((longlong)local_e0 + 8);
                  _Dst_02 = (void *)((longlong)_Dst_02 + 8);
                  _Dst_01 = _Dst_01 + 8;
                  iVar20 = iVar20 + 4;
                } while (iVar20 < (int)plVar9[2]);
              }
              local_108 = local_108 + 4;
              iVar8 = (int)local_100 + 4;
              local_100 = (longlong *)CONCAT44(local_100._4_4_,iVar8);
              lVar15 = local_d8;
            } while (iVar8 < *(int *)((longlong)plVar9 + 0x14));
          }
        }
        else {
          iVar20 = *(int *)((longlong)plVar9 + 0x24) * *(int *)((longlong)plVar9 + 0x14) *
                   (int)plVar9[2];
          iVar8 = iVar20 * 2;
          if (param_3 < iVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_1439458d0();
          }
          _guard_xfg_dispatch_icall_nop((void *)*plVar9,param_2,(longlong)iVar8);
          param_2 = param_2 + iVar8;
          param_3 = param_3 + iVar20 * -2;
          local_f4 = iVar12;
        }
        local_f4 = local_f4 + 1;
        local_e8 = local_e8 + 0x28;
      } while (local_f4 < *(int *)(lVar15 + 0x30));
    }
    _Dst_00 = *(undefined2 **)(lVar15 + 0x28);
    if (*(int *)(lVar15 + 0x18) == 1) {
      iVar12 = local_f8;
      if (local_104 <= local_f8) {
        do {
          iVar20 = 0;
          iVar8 = local_104;
          if (0 < *(int *)(lVar15 + 0x30)) {
            lVar18 = 0;
            do {
              lVar19 = *(longlong *)(lVar15 + 0x40) + lVar18;
              iVar12 = *(int *)(lVar19 + 0x18);
              if (iVar8 < 0) {
                if (iVar12 < 0) {
                  iVar11 = (-1 - iVar12) - iVar8;
                }
                else {
                  iVar11 = (iVar12 - iVar8) + -1;
                }
                iVar11 = -(iVar11 / iVar12);
              }
              else {
                iVar11 = iVar8 / iVar12;
              }
              if (iVar8 == iVar11 * iVar12) {
                if (*(int *)(lVar19 + 0x1c) == 1) {
                  for (iVar12 = *(int *)(lVar19 + 0x10); 0 < iVar12; iVar12 = iVar12 + -1) {
                    uVar5 = (uint)local_108 >> 0x10;
                    local_108 = CONCAT22((short)uVar5,**(undefined2 **)(lVar19 + 8));
                    *_Dst_00 = **(undefined2 **)(lVar19 + 8);
                    _Dst_00 = _Dst_00 + 1;
                    *(longlong *)(lVar19 + 8) = *(longlong *)(lVar19 + 8) + 2;
                  }
                }
                else {
                  lVar17 = (longlong)(*(int *)(lVar19 + 0x24) * *(int *)(lVar19 + 0x10));
                  sVar16 = lVar17 * 2;
                  _guard_xfg_dispatch_icall_nop(_Dst_00,*(void **)(lVar19 + 8),sVar16);
                  _Dst_00 = _Dst_00 + lVar17;
                  *(longlong *)(lVar19 + 8) = *(longlong *)(lVar19 + 8) + sVar16;
                  iVar8 = local_104;
                }
              }
              iVar20 = iVar20 + 1;
              lVar18 = lVar18 + 0x28;
              iVar12 = local_f8;
            } while (iVar20 < *(int *)(lVar15 + 0x30));
          }
          local_104 = iVar8 + 1;
        } while (local_104 <= iVar12);
      }
    }
    else {
      iVar12 = local_f8;
      if (local_104 <= local_f8) {
        do {
          iVar20 = 0;
          iVar8 = local_104;
          if (0 < *(int *)(lVar15 + 0x30)) {
            lVar18 = 0;
            do {
              lVar19 = *(longlong *)(lVar15 + 0x40) + lVar18;
              iVar12 = *(int *)(lVar19 + 0x18);
              if (iVar8 < 0) {
                if (iVar12 < 0) {
                  iVar11 = (-1 - iVar12) - iVar8;
                }
                else {
                  iVar11 = (iVar12 - iVar8) + -1;
                }
                iVar11 = -(iVar11 / iVar12);
              }
              else {
                iVar11 = iVar8 / iVar12;
              }
              if (iVar8 == iVar11 * iVar12) {
                lVar17 = (longlong)(*(int *)(lVar19 + 0x24) * *(int *)(lVar19 + 0x10));
                sVar16 = lVar17 * 2;
                _guard_xfg_dispatch_icall_nop(_Dst_00,*(void **)(lVar19 + 8),sVar16);
                _Dst_00 = _Dst_00 + lVar17;
                *(longlong *)(lVar19 + 8) = *(longlong *)(lVar19 + 8) + sVar16;
                iVar8 = local_104;
              }
              iVar20 = iVar20 + 1;
              lVar18 = lVar18 + 0x28;
              iVar12 = local_f8;
            } while (iVar20 < *(int *)(lVar15 + 0x30));
          }
          local_104 = iVar8 + 1;
        } while (local_104 <= iVar12);
      }
    }
    if (0 < param_3) {
      FUN_143e179e0(local_c8,"Error decompressing data (input data are longer than expected).");
      local_c8[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_c8,(ThrowInfo *)&DAT_1461db5c8);
    }
    *local_d0 = *(undefined8 *)(lVar15 + 0x28);
    iVar12 = (int)_Dst_00 - *(int *)(lVar15 + 0x28);
  }
  return iVar12;
}



// FUNCTION 143947450 FUN_143947450 body=123 status=ok
// SIG undefined FUN_143947450(void)

void FUN_143947450(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4,
                  undefined8 param_5)

{
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = (**(code **)(*param_1 + 8))();
  local_10 = *(undefined4 *)((longlong)param_1 + 0x4c);
  local_c = param_4 + -1 + local_c;
  local_18 = (undefined4)param_1[9];
  local_14 = param_4;
  FUN_143946d70(param_1,param_2,param_3,&local_18,param_5);
  return;
}



// FUNCTION 1439474d0 FUN_1439474d0 body=60 status=ok
// SIG undefined FUN_1439474d0(void)

void FUN_1439474d0(void)

{
  FUN_143946d70();
  return;
}



// FUNCTION 143947510 FUN_143947510 body=760 status=ok
// SIG undefined FUN_143947510(void)

void FUN_143947510(undefined1 *param_1,ushort *param_2)

{
  byte bVar1;
  longlong lVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  
  uVar6 = CONCAT11(*param_1,param_1[1]);
  *param_2 = uVar6;
  bVar1 = (byte)param_1[2] >> 2;
  sVar3 = 0x20 << (bVar1 & 0x1f);
  uVar4 = (((((byte)param_1[2] & 3) << 4 | (ushort)((byte)param_1[3] >> 4)) << (bVar1 & 0x1f)) -
          sVar3) + uVar6;
  param_2[4] = uVar4;
  uVar7 = (((((byte)param_1[3] & 0xf) << 2 | (ushort)((byte)param_1[4] >> 6)) << (bVar1 & 0x1f)) -
          sVar3) + uVar4;
  param_2[8] = uVar7;
  uVar5 = (((ushort)(param_1[4] & 0x3f) << (bVar1 & 0x1f)) - sVar3) + uVar7;
  param_2[0xc] = uVar5;
  uVar6 = (((ushort)((byte)param_1[5] >> 2) << (bVar1 & 0x1f)) - sVar3) + uVar6;
  param_2[1] = uVar6;
  uVar4 = (((((byte)param_1[5] & 3) << 4 | (ushort)((byte)param_1[6] >> 4)) << (bVar1 & 0x1f)) -
          sVar3) + uVar4;
  param_2[5] = uVar4;
  uVar7 = ((((ushort)((byte)param_1[7] >> 6) | ((byte)param_1[6] & 0xf) << 2) << (bVar1 & 0x1f)) -
          sVar3) + uVar7;
  param_2[9] = uVar7;
  uVar5 = (((ushort)(param_1[7] & 0x3f) << (bVar1 & 0x1f)) - sVar3) + uVar5;
  param_2[0xd] = uVar5;
  uVar6 = (((ushort)((byte)param_1[8] >> 2) << (bVar1 & 0x1f)) - sVar3) + uVar6;
  param_2[2] = uVar6;
  uVar4 = (((((byte)param_1[8] & 3) << 4 | (ushort)((byte)param_1[9] >> 4)) << (bVar1 & 0x1f)) -
          sVar3) + uVar4;
  param_2[6] = uVar4;
  uVar7 = ((((ushort)((byte)param_1[10] >> 6) | ((byte)param_1[9] & 0xf) << 2) << (bVar1 & 0x1f)) -
          sVar3) + uVar7;
  param_2[10] = uVar7;
  uVar5 = (((ushort)(param_1[10] & 0x3f) << (bVar1 & 0x1f)) - sVar3) + uVar5;
  param_2[0xe] = uVar5;
  param_2[3] = (((ushort)((byte)param_1[0xb] >> 2) << (bVar1 & 0x1f)) - sVar3) + uVar6;
  param_2[7] = (((((byte)param_1[0xb] & 3) << 4 | (ushort)((byte)param_1[0xc] >> 4)) <<
                (bVar1 & 0x1f)) - sVar3) + uVar4;
  param_2[0xb] = (((((byte)param_1[0xc] & 0xf) << 2 | (ushort)((byte)param_1[0xd] >> 6)) <<
                  (bVar1 & 0x1f)) - sVar3) + uVar7;
  lVar2 = 2;
  param_2[0xf] = (((ushort)(param_1[0xd] & 0x3f) << (bVar1 & 0x1f)) - sVar3) + uVar5;
  do {
    uVar4 = *param_2;
    uVar7 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    uVar8 = param_2[4];
    uVar9 = param_2[5];
    uVar10 = param_2[6];
    uVar11 = param_2[7];
    uVar12 = -(ushort)((uVar4 & 0x8000) == 0);
    uVar13 = -(ushort)((uVar7 & 0x8000) == 0);
    uVar14 = -(ushort)((uVar5 & 0x8000) == 0);
    uVar15 = -(ushort)((uVar6 & 0x8000) == 0);
    uVar16 = -(ushort)((uVar8 & 0x8000) == 0);
    uVar17 = -(ushort)((uVar9 & 0x8000) == 0);
    uVar18 = -(ushort)((uVar10 & 0x8000) == 0);
    uVar19 = -(ushort)((uVar11 & 0x8000) == 0);
    uVar4 = ~uVar4 & uVar12 | ~uVar12 & uVar4;
    uVar7 = ~uVar7 & uVar13 | ~uVar13 & uVar7;
    uVar5 = ~uVar5 & uVar14 | ~uVar14 & uVar5;
    uVar6 = ~uVar6 & uVar15 | ~uVar15 & uVar6;
    uVar8 = ~uVar8 & uVar16 | ~uVar16 & uVar8;
    uVar9 = ~uVar9 & uVar17 | ~uVar17 & uVar9;
    uVar10 = ~uVar10 & uVar18 | ~uVar18 & uVar10;
    uVar11 = ~uVar11 & uVar19 | ~uVar19 & uVar11;
    *param_2 = uVar4;
    param_2[1] = uVar7;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
    param_2[4] = uVar8;
    param_2[5] = uVar9;
    param_2[6] = uVar10;
    param_2[7] = uVar11;
    *param_2 = ~uVar12 & uVar4 & 0x7fff | uVar12 & uVar4;
    param_2[1] = ~uVar13 & uVar7 & 0x7fff | uVar13 & uVar7;
    param_2[2] = ~uVar14 & uVar5 & 0x7fff | uVar14 & uVar5;
    param_2[3] = ~uVar15 & uVar6 & 0x7fff | uVar15 & uVar6;
    param_2[4] = ~uVar16 & uVar8 & 0x7fff | uVar16 & uVar8;
    param_2[5] = ~uVar17 & uVar9 & 0x7fff | uVar17 & uVar9;
    param_2[6] = ~uVar18 & uVar10 & 0x7fff | uVar18 & uVar10;
    param_2[7] = ~uVar19 & uVar11 & 0x7fff | uVar19 & uVar11;
    lVar2 = lVar2 + -1;
    param_2 = param_2 + 8;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 143947810 FUN_143947810 body=101 status=ok
// SIG undefined FUN_143947810(void)

undefined2 * FUN_143947810(undefined2 *param_1,float param_2)

{
  if (((uint)param_2 & 0x7f800000) != 0x7f800000) {
    if (65504.0 < param_2) {
      *param_1 = 0x7c00;
      return param_1;
    }
    if (param_2 < -65504.0) {
      *param_1 = 0xfc00;
      return param_1;
    }
  }
  FUN_143934e20();
  return param_1;
}



// FUNCTION 143947880 FUN_143947880 body=81 status=ok
// SIG undefined FUN_143947880(void)

longlong FUN_143947880(float param_1)

{
  if (((int)param_1 < 0) || (0x7f800000 < (uint)ABS(param_1))) {
    return 0;
  }
  if ((ABS(param_1) != INFINITY) && (param_1 <= 4.2949673e+09)) {
    return (longlong)param_1;
  }
  return 0xffffffff;
}



// FUNCTION 1439478e0 FUN_1439478e0 body=72 status=ok
// SIG undefined FUN_1439478e0(void)

longlong FUN_1439478e0(ushort param_1)

{
  if ((short)param_1 < 0) {
    return 0;
  }
  if ((param_1 >> 10 & 0x1f) == 0x1f) {
    if ((param_1 & 0x3ff) != 0) {
      return 0;
    }
    if ((param_1 & 0x3ff) == 0) {
      return 0xffffffff;
    }
  }
  return (longlong)*(float *)(&DAT_145dcac70 + (ulonglong)param_1 * 4);
}



// FUNCTION 143947930 FUN_143947930 body=59 status=ok
// SIG undefined FUN_143947930(void)

undefined2 * FUN_143947930(undefined2 *param_1,uint param_2)

{
  if (65504.0 < (float)param_2) {
    *param_1 = 0x7c00;
    return param_1;
  }
  FUN_143934e20();
  return param_1;
}



// FUNCTION 143947970 FUN_143947970 body=202 status=ok
// SIG undefined FUN_143947970(void)

longlong FUN_143947970(void)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *local_res10;
  undefined1 local_res18 [16];
  
  uVar4 = UEngine::SeamlessTravelHandlerForWorld();
  lVar7 = 0;
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::begin(uVar4,&local_res10);
  plVar5 = (longlong *)FKey::GetFName(uVar4,local_res18);
  if (local_res10 != (longlong *)*plVar5) {
    do {
      iVar3 = FUN_14393e510(*(undefined4 *)((longlong)local_res10 + 0x11c));
      lVar7 = lVar7 + iVar3;
      if (*(char *)((longlong)local_res10 + 0x19) == '\0') {
        plVar5 = (longlong *)local_res10[2];
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          local_res10 = plVar5;
          plVar5 = (longlong *)*plVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar5 + 0x19);
            local_res10 = plVar5;
            plVar5 = (longlong *)*plVar5;
          }
        }
        else {
          cVar1 = *(char *)(local_res10[1] + 0x19);
          plVar2 = (longlong *)local_res10[1];
          plVar5 = local_res10;
          while ((local_res10 = plVar2, cVar1 == '\0' && (plVar5 == (longlong *)local_res10[2]))) {
            cVar1 = *(char *)(local_res10[1] + 0x19);
            plVar2 = (longlong *)local_res10[1];
            plVar5 = local_res10;
          }
        }
      }
      puVar6 = (undefined8 *)FKey::GetFName(uVar4,local_res18);
    } while (local_res10 != (longlong *)*puVar6);
  }
  return lVar7;
}



// FUNCTION 143947a40 FUN_143947a40 body=244 status=ok
// SIG undefined FUN_143947a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143947a40(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  undefined **local_88 [12];
  ulonglong local_28;
  
  if (0 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
    iVar4 = 0;
    uVar3 = 1;
    do {
      if (iVar4 < 0) {
        FUN_143e179e0(local_88,"Argument not in valid range.");
        local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
        _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
      }
      iVar2 = (param_4 - param_3) + 1;
      iVar1 = iVar2 / (int)uVar3;
      if ((param_6 == 1) && ((int)(uVar3 * iVar1) < iVar2)) {
        iVar1 = iVar1 + 1;
      }
      if (iVar1 < 1) {
        iVar1 = 1;
      }
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      *param_1 = (iVar1 + -1 + param_5) / param_5;
      param_1 = param_1 + 1;
    } while (iVar4 < param_2);
  }
  return;
}



// FUNCTION 143947b40 FUN_143947b40 body=348 status=ok
// SIG undefined FUN_143947b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143947b40(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    return 1;
  }
  if (iVar2 == 1) {
    uVar4 = (param_3 - param_2) + 1;
    uVar1 = (param_5 - param_4) + 1;
    if ((int)uVar4 < (int)uVar1) {
      uVar4 = uVar1;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar2 = 0;
      if (1 < (int)uVar4) {
        do {
          iVar3 = iVar2;
          uVar4 = (int)uVar4 >> 1;
          iVar2 = iVar3 + 1;
        } while (1 < (int)uVar4);
        return iVar3 + 2;
      }
      goto LAB_143947c47;
    }
    iVar2 = 0;
    iVar3 = iVar2;
    for (; 1 < (int)uVar4; uVar4 = (int)uVar4 >> 1) {
      if ((uVar4 & 1) != 0) {
        iVar3 = 1;
      }
      iVar2 = iVar2 + 1;
    }
  }
  else {
    if (iVar2 != 2) {
      FUN_143e179e0(local_78,"Unknown LevelMode format.");
      local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
    }
    uVar4 = (param_3 - param_2) + 1;
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar2 = 0;
      if (1 < (int)uVar4) {
        do {
          iVar3 = iVar2;
          uVar4 = (int)uVar4 >> 1;
          iVar2 = iVar3 + 1;
        } while (1 < (int)uVar4);
        return iVar3 + 2;
      }
      goto LAB_143947c47;
    }
    iVar2 = 0;
    iVar3 = 0;
    if (1 < (int)uVar4) {
      do {
        if ((uVar4 & 1) != 0) {
          iVar3 = 1;
        }
        iVar2 = iVar2 + 1;
        uVar4 = (int)uVar4 >> 1;
      } while (1 < (int)uVar4);
      return iVar2 + iVar3 + 1;
    }
  }
  iVar2 = iVar2 + iVar3;
LAB_143947c47:
  return iVar2 + 1;
}



// FUNCTION 143947ca0 FUN_143947ca0 body=332 status=ok
// SIG undefined FUN_143947ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143947ca0(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  else if (iVar1 == 1) {
    uVar3 = (param_3 - param_2) + 1;
    uVar2 = (param_5 - param_4) + 1;
    if ((int)uVar3 < (int)uVar2) {
      uVar3 = uVar2;
    }
    iVar1 = 0;
    iVar4 = iVar1;
    if (*(int *)(param_1 + 0xc) == 0) {
      if (1 < (int)uVar3) {
        do {
          iVar4 = iVar1;
          uVar3 = (int)uVar3 >> 1;
          iVar1 = iVar4 + 1;
        } while (1 < (int)uVar3);
        return iVar4 + 2;
      }
    }
    else {
      for (; 1 < (int)uVar3; uVar3 = (int)uVar3 >> 1) {
        if ((uVar3 & 1) != 0) {
          iVar4 = 1;
        }
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 + iVar4;
    }
    iVar1 = iVar1 + 1;
  }
  else {
    if (iVar1 != 2) {
      FUN_143e179e0(local_78,"Unknown LevelMode format.");
      local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
    }
    iVar1 = 0;
    uVar3 = (param_5 - param_4) + 1;
    if (*(int *)(param_1 + 0xc) == 0) {
      if (1 < (int)uVar3) {
        do {
          iVar4 = iVar1;
          uVar3 = (int)uVar3 >> 1;
          iVar1 = iVar4 + 1;
        } while (1 < (int)uVar3);
        return iVar4 + 2;
      }
    }
    else {
      iVar4 = 0;
      for (; 1 < (int)uVar3; uVar3 = (int)uVar3 >> 1) {
        if ((uVar3 & 1) != 0) {
          iVar4 = 1;
        }
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 + iVar4;
    }
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// FUNCTION 143947df0 FUN_143947df0 body=134 status=ok
// SIG undefined FUN_143947df0(void)

int * FUN_143947df0(int *param_1,longlong param_2,int param_3,undefined4 param_4,int param_5,
                   undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_143947fa0(param_5,param_6,param_8,*(undefined4 *)(param_2 + 0xc));
  iVar2 = FUN_143947fa0(param_3,param_4,param_7,*(undefined4 *)(param_2 + 0xc));
  param_1[1] = param_5;
  *param_1 = param_3;
  param_1[3] = iVar1 + -1 + param_5;
  param_1[2] = iVar2 + -1 + param_3;
  return param_1;
}



// FUNCTION 143947e80 FUN_143947e80 body=273 status=ok
// SIG undefined FUN_143947e80(void)

int * FUN_143947e80(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5,
                   undefined4 param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10
                   )

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_res10;
  int local_res14;
  undefined8 local_48;
  
  iVar4 = *param_2 * param_7 + param_3;
  iVar6 = *param_2 + -1 + iVar4;
  iVar7 = param_2[1] * param_8 + param_5;
  iVar5 = param_2[1] + -1 + iVar7;
  local_res10 = iVar6;
  local_res14 = iVar5;
  iVar1 = FUN_143947fa0(param_5,param_6,param_10,param_2[3]);
  iVar2 = FUN_143947fa0(param_3,param_4,param_9,param_2[3]);
  param_5 = iVar1 + -1 + param_5;
  param_3 = iVar2 + -1 + param_3;
  local_48 = CONCAT44(param_5,param_3);
  piVar3 = (int *)&local_48;
  if (iVar6 <= param_3) {
    piVar3 = &local_res10;
  }
  iVar1 = *piVar3;
  piVar3 = (int *)((longlong)&local_48 + 4);
  if (iVar5 <= param_5) {
    piVar3 = &local_res14;
  }
  param_1[1] = iVar7;
  iVar2 = *piVar3;
  *param_1 = iVar4;
  param_1[2] = iVar1;
  param_1[3] = iVar2;
  return param_1;
}



// FUNCTION 143947fa0 FUN_143947fa0 body=156 status=ok
// SIG undefined FUN_143947fa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143947fa0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (-1 < param_3) {
    iVar3 = (param_2 - param_1) + 1;
    iVar2 = 1 << ((byte)param_3 & 0x1f);
    iVar1 = iVar3 / iVar2;
    if ((param_4 == 1) && (iVar1 * iVar2 < iVar3)) {
      iVar1 = iVar1 + 1;
    }
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    return iVar1;
  }
  FUN_143e179e0(local_78,"Argument not in valid range.");
  local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 143948040 FUN_143948040 body=285 status=ok
// SIG undefined FUN_143948040(void)

void FUN_143948040(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,undefined8 *param_7,int *param_8,
                  int *param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = FUN_143947b40();
  *param_8 = iVar3;
  iVar3 = FUN_143947ca0(param_1,param_2,param_3,param_4,param_5);
  *param_9 = iVar3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)*param_8;
  uVar4 = SUB168(ZEXT816(4) * auVar1,0);
  if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  uVar4 = operator_new(uVar4);
  *param_6 = uVar4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)*param_9;
  uVar4 = SUB168(ZEXT816(4) * auVar2,0);
  if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  uVar4 = operator_new(uVar4);
  *param_7 = uVar4;
  FUN_143947a40(*param_6,*param_8,param_2,param_3,*param_1,param_1[3]);
  FUN_143947a40(*param_7,*param_9,param_4,param_5);
  return;
}



// FUNCTION 143948160 FUN_143948160 body=71 status=ok
// SIG undefined FUN_143948160(void)

void FUN_143948160(undefined8 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1439481b0 FUN_1439481b0 body=71 status=ok
// SIG undefined FUN_1439481b0(void)

void FUN_1439481b0(undefined8 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 143948200 _Uninitialized_move_al_unchecked1<std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64,std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64,std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>_> body=119 status=ok
// SIG undefined _Uninitialized_move_al_unchecked1<std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64,std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64,std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>_>(void)

undefined8 *
std::
_Uninitialized_move_al_unchecked1<std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64,std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64,std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>_>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    do {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        *param_3 = puVar2[-2];
        param_3[1] = puVar2[-1];
        param_3[2] = *puVar2;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
      }
      param_3 = param_3 + 3;
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 3;
    } while (puVar1 != param_2);
  }
  return param_3;
}



// FUNCTION 143948280 _Uninitialized_move_al_unchecked1<std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64,std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64,std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>_> body=119 status=ok
// SIG undefined _Uninitialized_move_al_unchecked1<std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64,std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64,std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>_>(void)

undefined8 *
std::
_Uninitialized_move_al_unchecked1<std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64,std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64,std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>_>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    do {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        *param_3 = puVar2[-2];
        param_3[1] = puVar2[-1];
        param_3[2] = *puVar2;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
      }
      param_3 = param_3 + 3;
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 3;
    } while (puVar1 != param_2);
  }
  return param_3;
}



// FUNCTION 143948300 FUN_143948300 body=96 status=ok
// SIG undefined FUN_143948300(void)

void FUN_143948300(undefined8 param_1,longlong *param_2)

{
  undefined1 local_res10;
  
  if (*param_2 != 0) {
    std::
    _Destroy_range1<std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>,std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64>
              (*param_2,param_2[1],param_2,local_res10);
    FUN_143940be0(*param_2,(param_2[2] - *param_2) / 0x18);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return;
}



// FUNCTION 143948360 FUN_143948360 body=52 status=ok
// SIG undefined FUN_143948360(void)

void FUN_143948360(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_143931100(lVar1,param_2[2] - lVar1 >> 3);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return;
}



// FUNCTION 1439483a0 FUN_1439483a0 body=690 status=ok
// SIG undefined FUN_1439483a0(void)

int * FUN_1439483a0(int *param_1,int param_2,int param_3,int param_4,longlong param_5,
                   longlong param_6)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  plVar1 = (longlong *)(param_1 + 4);
  *plVar1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar3 = *param_1;
  if (-1 < iVar3) {
    if (iVar3 < 2) {
      FUN_143949540(plVar1,(longlong)param_1[1]);
      uVar8 = 0;
      lVar2 = *(longlong *)(param_1 + 6) - *plVar1 >> 0x3f;
      if ((*(longlong *)(param_1 + 6) - *plVar1) / 0x18 + lVar2 != lVar2) {
        uVar10 = 0;
        do {
          lVar2 = uVar10 * 0x18;
          FUN_143949650(*plVar1 + lVar2,(longlong)*(int *)(param_6 + uVar10 * 4));
          uVar6 = 0;
          lVar5 = *(longlong *)(lVar2 + 8 + *plVar1) - *(longlong *)(lVar2 + *plVar1);
          lVar4 = lVar5 >> 0x3f;
          if (lVar5 / 0x18 + lVar4 != lVar4) {
            uVar7 = 0;
            do {
              FUN_1439328a0(*(longlong *)(lVar2 + *plVar1) + uVar7 * 0x18,
                            (longlong)*(int *)(param_5 + uVar10 * 4));
              uVar6 = uVar6 + 1;
              uVar7 = (ulonglong)uVar6;
            } while (uVar7 < (ulonglong)
                             ((*(longlong *)(lVar2 + 8 + *plVar1) - *(longlong *)(lVar2 + *plVar1))
                             / 0x18));
          }
          uVar8 = uVar8 + 1;
          uVar10 = (ulonglong)uVar8;
        } while (uVar10 < (ulonglong)((*(longlong *)(param_1 + 6) - *plVar1) / 0x18));
      }
    }
    else if (iVar3 == 2) {
      FUN_143949540(plVar1,(longlong)(param_1[2] * param_1[1]));
      uVar10 = 0;
      if (param_1[2] != 0) {
        do {
          uVar7 = 0;
          if (param_1[1] != 0) {
            do {
              lVar2 = (longlong)(param_1[1] * (int)uVar10 + (int)uVar7) * 0x18;
              FUN_143949650(*plVar1 + lVar2,(longlong)*(int *)(param_6 + uVar10 * 4));
              uVar8 = 0;
              lVar5 = *(longlong *)(lVar2 + 8 + *plVar1) - *(longlong *)(lVar2 + *plVar1);
              lVar4 = lVar5 >> 0x3f;
              if (lVar5 / 0x18 + lVar4 != lVar4) {
                uVar9 = 0;
                do {
                  FUN_1439328a0(*(longlong *)(lVar2 + *plVar1) + uVar9 * 0x18,
                                (longlong)*(int *)(param_5 + uVar7 * 4));
                  uVar8 = uVar8 + 1;
                  uVar9 = (ulonglong)uVar8;
                } while (uVar9 < (ulonglong)
                                 ((*(longlong *)(lVar2 + 8 + *plVar1) -
                                  *(longlong *)(lVar2 + *plVar1)) / 0x18));
              }
              uVar8 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar8;
            } while (uVar8 < (uint)param_1[1]);
          }
          uVar8 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar8;
        } while (uVar8 < (uint)param_1[2]);
      }
    }
  }
  return param_1;
}



// FUNCTION 143948660 FUN_143948660 body=96 status=ok
// SIG undefined FUN_143948660(void)

void FUN_143948660(longlong *param_1)

{
  undefined1 local_res8;
  
  if (*param_1 != 0) {
    FUN_143940c50(*param_1,param_1[1],param_1,local_res8);
    FUN_143940be0(*param_1,(param_1[2] - *param_1) / 0x18);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1439486c0 FUN_1439486c0 body=190 status=ok
// SIG undefined FUN_1439486c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1439486c0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  iVar1 = *param_1;
  if (iVar1 == 0) {
    lVar2 = **(longlong **)(param_1 + 4);
  }
  else if (iVar1 == 1) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 4) + (longlong)param_4 * 0x18);
  }
  else {
    if (iVar1 != 2) {
      FUN_143e179e0(local_78,"Unknown LevelMode format.");
      local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
    }
    lVar2 = *(longlong *)
             (*(longlong *)(param_1 + 4) + (longlong)(param_1[1] * param_5 + param_4) * 0x18);
  }
  return *(longlong *)(lVar2 + (longlong)param_3 * 0x18) + (longlong)param_2 * 8;
}



// FUNCTION 143948780 FUN_143948780 body=244 status=ok
// SIG undefined FUN_143948780(void)

void FUN_143948780(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 local_res8;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar2 = std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>::allocate();
  local_res8 = (undefined1)uVar2;
  std::
  _Uninitialized_move_al_unchecked1<std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64,std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64,std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>_>
            (*param_1,param_1[1],uVar2,param_1,0,local_res8,uVar4);
  uVar1 = *param_1;
  lVar3 = param_1[1] - uVar1;
  lVar3 = lVar3 / 6 + (lVar3 >> 0x3f);
  if (uVar1 != 0) {
    FUN_143940c50(uVar1,param_1[1],param_1,uVar2 & 0xff);
    FUN_143940be0(*param_1,(longlong)(param_1[2] - *param_1) / 0x18);
  }
  param_1[2] = uVar2 + param_2 * 0x18;
  param_1[1] = uVar2 + ((lVar3 >> 2) - (lVar3 >> 0x3f)) * 0x18;
  *param_1 = uVar2;
  return;
}



// FUNCTION 143948880 FUN_143948880 body=244 status=ok
// SIG undefined FUN_143948880(void)

void FUN_143948880(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 local_res8;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar2 = std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>::allocate();
  local_res8 = (undefined1)uVar2;
  std::
  _Uninitialized_move_al_unchecked1<std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64,std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64,std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>_>
            (*param_1,param_1[1],uVar2,param_1,0,local_res8,uVar4);
  uVar1 = *param_1;
  lVar3 = param_1[1] - uVar1;
  lVar3 = lVar3 / 6 + (lVar3 >> 0x3f);
  if (uVar1 != 0) {
    std::
    _Destroy_range1<std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>,std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64>
              (uVar1,param_1[1],param_1,uVar2 & 0xff);
    FUN_143940be0(*param_1,(longlong)(param_1[2] - *param_1) / 0x18);
  }
  param_1[2] = uVar2 + param_2 * 0x18;
  param_1[1] = uVar2 + ((lVar3 >> 2) - (lVar3 >> 0x3f)) * 0x18;
  *param_1 = uVar2;
  return;
}



// FUNCTION 143948980 FUN_143948980 body=201 status=ok
// SIG undefined FUN_143948980(void)

void FUN_143948980(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_2 <= (ulonglong)((param_1[2] - param_1[1]) / 0x18)) {
    return;
  }
  lVar3 = (param_1[1] - *param_1) / 0x18;
  if (0xaaaaaaaaaaaaaaaU - lVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  lVar1 = param_1[2] - *param_1;
  param_2 = lVar3 + param_2;
  lVar3 = lVar1 / 6 + (lVar1 >> 0x3f);
  uVar2 = (lVar3 >> 2) - (lVar3 >> 0x3f);
  uVar4 = (uVar2 >> 1) + uVar2;
  if (0xaaaaaaaaaaaaaaa - (uVar2 >> 1) < uVar2) {
    uVar4 = 0;
  }
  if (uVar4 < param_2) {
    uVar4 = param_2;
  }
  FUN_143948780(param_1,uVar4);
  return;
}



// FUNCTION 143948a50 FUN_143948a50 body=201 status=ok
// SIG undefined FUN_143948a50(void)

void FUN_143948a50(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_2 <= (ulonglong)((param_1[2] - param_1[1]) / 0x18)) {
    return;
  }
  lVar3 = (param_1[1] - *param_1) / 0x18;
  if (0xaaaaaaaaaaaaaaaU - lVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  lVar1 = param_1[2] - *param_1;
  param_2 = lVar3 + param_2;
  lVar3 = lVar1 / 6 + (lVar1 >> 0x3f);
  uVar2 = (lVar3 >> 2) - (lVar3 >> 0x3f);
  uVar4 = (uVar2 >> 1) + uVar2;
  if (0xaaaaaaaaaaaaaaa - (uVar2 >> 1) < uVar2) {
    uVar4 = 0;
  }
  if (uVar4 < param_2) {
    uVar4 = param_2;
  }
  FUN_143948880(param_1,uVar4);
  return;
}



// FUNCTION 143948b20 FUN_143948b20 body=96 status=ok
// SIG undefined FUN_143948b20(void)

void FUN_143948b20(longlong *param_1)

{
  undefined1 local_res8;
  
  if (*param_1 != 0) {
    std::
    _Destroy_range1<std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>,std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64>
              (*param_1,param_1[1],param_1,local_res8);
    FUN_143940be0(*param_1,(param_1[2] - *param_1) / 0x18);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 143948b80 FUN_143948b80 body=329 status=ok
// SIG undefined FUN_143948b80(void)

ulonglong FUN_143948b80(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  
  lVar6 = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10);
  uVar7 = 0;
  lVar1 = lVar6 >> 0x3f;
  if (lVar6 / 0x18 + lVar1 != lVar1) {
    lVar6 = *(longlong *)(param_1 + 0x10);
    uVar2 = 0;
    do {
      uVar9 = 0;
      lVar1 = uVar2 * 0x18;
      lVar3 = *(longlong *)(lVar6 + 8 + lVar1) - *(longlong *)(lVar6 + lVar1);
      lVar4 = lVar3 >> 0x3f;
      if (lVar3 / 0x18 + lVar4 != lVar4) {
        lVar4 = *(longlong *)(lVar1 + lVar6);
        uVar2 = 0;
        do {
          uVar5 = 0;
          if (*(longlong *)(lVar4 + 8 + uVar2 * 0x18) - *(longlong *)(lVar4 + uVar2 * 0x18) >> 3 !=
              0) {
            plVar8 = (longlong *)(*(longlong *)(lVar6 + lVar1) + uVar2 * 0x18);
            uVar2 = 0;
            lVar3 = *plVar8;
            do {
              if (*(longlong *)(lVar3 + uVar2 * 8) == 0) {
                return CONCAT71((int7)(uVar2 >> 8),1);
              }
              uVar5 = uVar5 + 1;
              uVar2 = (ulonglong)uVar5;
            } while (uVar2 < (ulonglong)(plVar8[1] - lVar3 >> 3));
          }
          uVar9 = uVar9 + 1;
          uVar2 = (ulonglong)uVar9;
        } while (uVar2 < (ulonglong)((*(longlong *)(lVar1 + lVar6 + 8) - lVar4) / 0x18));
      }
      uVar7 = uVar7 + 1;
      lVar4 = *(longlong *)(param_1 + 0x18) - lVar6;
      uVar2 = (ulonglong)uVar7;
      lVar1 = lVar4 >> 0x3f;
    } while (uVar2 < (ulonglong)(lVar4 / 0x18));
  }
  return -lVar1 & 0xffffffffffffff00;
}



// FUNCTION 143948cd0 FUN_143948cd0 body=966 status=ok
// SIG undefined FUN_143948cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143948cd0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_4b8 [32];
  undefined4 local_498;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  int local_478;
  uint local_474;
  uint local_470;
  undefined4 local_46c;
  longlong local_468;
  longlong local_460;
  undefined8 local_458;
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4b8;
  lVar9 = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10);
  local_470 = 0;
  lVar1 = lVar9 >> 0x3f;
  if (lVar9 / 0x18 + lVar1 != lVar1) {
    uVar10 = 0;
    do {
      local_468 = uVar10 * 0x18;
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0x10) + local_468);
      local_474 = 0;
      lVar1 = plVar11[1] - *plVar11 >> 0x3f;
      if ((plVar11[1] - *plVar11) / 0x18 + lVar1 != lVar1) {
        uVar10 = 0;
        do {
          uVar12 = 0;
          local_460 = uVar10 * 0x18;
          if (*(longlong *)(local_460 + 8 + *plVar11) - *(longlong *)(local_460 + *plVar11) >> 3 !=
              0) {
            do {
              local_458 = (**(code **)(*param_2 + 0x20))(param_2);
              (**(code **)(*param_2 + 0x10))(param_2,&local_484,4);
              uVar3 = local_484;
              (**(code **)(*param_2 + 0x10))(param_2,&local_47c,4);
              uVar4 = local_47c;
              (**(code **)(*param_2 + 0x10))(param_2,&local_488,4);
              uVar2 = local_488;
              (**(code **)(*param_2 + 0x10))(param_2,&local_480,4);
              local_46c = local_480;
              (**(code **)(*param_2 + 0x10))(param_2,&local_478,4);
              for (iVar8 = local_478; 0x3ff < iVar8; iVar8 = iVar8 + -0x400) {
                cVar6 = (**(code **)(*param_2 + 0x10))(param_2,local_448,0x400);
                if (cVar6 == '\0') goto LAB_143948f6c;
              }
              if (0 < iVar8) {
                (**(code **)(*param_2 + 0x10))(param_2,local_448,iVar8);
              }
LAB_143948f6c:
              uVar5 = local_46c;
              local_498 = local_46c;
              cVar6 = FUN_1439490a0(param_1,uVar3,uVar4,uVar2);
              if (cVar6 == '\0') {
                return;
              }
              local_498 = uVar5;
              puVar7 = (undefined8 *)FUN_1439486c0(param_1,uVar3,uVar4,uVar2);
              uVar12 = (ulonglong)((int)uVar12 + 1);
              *puVar7 = local_458;
              lVar1 = *(longlong *)(local_468 + *(longlong *)(param_1 + 0x10));
            } while (uVar12 < (ulonglong)
                              (*(longlong *)(local_460 + 8 + lVar1) -
                               *(longlong *)(local_460 + lVar1) >> 3));
          }
          local_474 = local_474 + 1;
          plVar11 = (longlong *)(local_468 + *(longlong *)(param_1 + 0x10));
          uVar10 = (ulonglong)local_474;
        } while (uVar10 < (ulonglong)((plVar11[1] - *plVar11) / 0x18));
      }
      local_470 = local_470 + 1;
      uVar10 = (ulonglong)local_470;
    } while (uVar10 < (ulonglong)
                      ((*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10)) / 0x18));
  }
  return;
}



// FUNCTION 1439490a0 FUN_1439490a0 body=456 status=ok
// SIG undefined FUN_1439490a0(void)

ulonglong FUN_1439490a0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong in_RAX;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (ulonglong)param_3;
  iVar2 = *param_1;
  if (iVar2 == 0) {
    if ((param_4 != 0) || (param_5 != 0)) goto LAB_14394925b;
    lVar4 = *(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4) >> 0x3f;
    in_RAX = -lVar4;
    if ((*(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4)) / 0x18 + lVar4 == lVar4)
    goto LAB_14394925b;
    plVar1 = *(longlong **)(param_1 + 4);
    in_RAX = -(plVar1[1] - *plVar1 >> 0x3f);
    if ((ulonglong)((plVar1[1] - *plVar1) / 0x18) <= uVar5) goto LAB_14394925b;
    lVar4 = *plVar1;
  }
  else if (iVar2 == 1) {
    if ((param_1[1] <= param_4) || (in_RAX = (ulonglong)(uint)param_1[2], param_1[2] <= param_5))
    goto LAB_14394925b;
    in_RAX = -(*(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4) >> 0x3f);
    if ((ulonglong)((*(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4)) / 0x18) <=
        (ulonglong)(longlong)param_4) goto LAB_14394925b;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 4) + (longlong)param_4 * 0x18);
    in_RAX = -(plVar1[1] - *plVar1 >> 0x3f);
    if ((ulonglong)((plVar1[1] - *plVar1) / 0x18) <= uVar5) goto LAB_14394925b;
    lVar4 = *plVar1;
  }
  else {
    if (iVar2 != 2) goto LAB_14394925b;
    uVar3 = param_1[1];
    in_RAX = (ulonglong)uVar3;
    if (((int)uVar3 <= param_4) || (param_1[2] <= param_5)) goto LAB_14394925b;
    uVar6 = (ulonglong)(int)(uVar3 * param_5 + param_4);
    in_RAX = (*(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4)) * 0x2aaaaaaaaaaaaaab;
    if ((ulonglong)((*(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4)) / 0x18) <= uVar6)
    goto LAB_14394925b;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 4) + uVar6 * 0x18);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 4) + 8 + uVar6 * 0x18) - *plVar1;
    in_RAX = -(lVar4 >> 0x3f);
    if ((ulonglong)(lVar4 / 0x18) <= uVar5) goto LAB_14394925b;
    lVar4 = *plVar1;
  }
  in_RAX = (longlong)param_2;
  if ((ulonglong)(longlong)param_2 <
      (ulonglong)
      (*(longlong *)(lVar4 + 8 + uVar5 * 0x18) - *(longlong *)(lVar4 + uVar5 * 0x18) >> 3)) {
    return CONCAT71((int7)(int3)((uint)param_2 >> 8),1);
  }
LAB_14394925b:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143949270 FUN_143949270 body=585 status=ok
// SIG undefined FUN_143949270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143949270(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar8 = 0;
  local_58 = param_3;
  if ((*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10)) / 0x18 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x10);
    uVar5 = 0;
    do {
      uVar9 = 0;
      lVar1 = uVar5 * 0x18;
      lVar4 = *(longlong *)(lVar6 + 8 + lVar1) - *(longlong *)(lVar6 + lVar1);
      lVar7 = lVar4 >> 0x3f;
      if (lVar4 / 0x18 + lVar7 != lVar7) {
        lVar7 = *(longlong *)(lVar6 + lVar1);
        do {
          uVar5 = 0;
          lVar6 = uVar9 * 0x18;
          if (*(longlong *)(lVar7 + 8 + lVar6) - *(longlong *)(lVar7 + lVar6) >> 3 != 0) {
            do {
              lVar4 = *(longlong *)(lVar7 + lVar6);
              lVar7 = uVar5 * 8;
              (**(code **)(*param_2 + 0x10))(param_2,&local_50,8);
              uVar5 = (ulonglong)((int)uVar5 + 1);
              *(undefined8 *)(lVar4 + lVar7) = local_50;
              lVar7 = *(longlong *)(lVar1 + *(longlong *)(param_1 + 0x10));
            } while (uVar5 < (ulonglong)
                             (*(longlong *)(lVar7 + 8 + lVar6) - *(longlong *)(lVar7 + lVar6) >> 3))
            ;
          }
          lVar6 = *(longlong *)(param_1 + 0x10);
          uVar9 = (ulonglong)((int)uVar9 + 1);
        } while (uVar9 < (ulonglong)
                         ((*(longlong *)(lVar6 + 8 + lVar1) - *(longlong *)(lVar6 + lVar1)) / 0x18))
        ;
      }
      uVar8 = uVar8 + 1;
      uVar5 = (ulonglong)uVar8;
    } while (uVar5 < (ulonglong)
                     ((*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10)) / 0x18));
  }
  puVar2 = local_58;
  cVar3 = FUN_143948b80(param_1);
  if (cVar3 == '\0') {
    *puVar2 = 1;
  }
  else {
    *puVar2 = 0;
    FUN_1439494c0(param_1,param_2);
  }
  return;
}



// FUNCTION 1439494c0 FUN_1439494c0 body=103 status=ok
// SIG undefined FUN_1439494c0(void)

void FUN_1439494c0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  uVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FUN_143948cd0(param_1,param_2,param_3,param_4,uVar2);
  (**(code **)(*param_2 + 0x30))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014394952d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2,uVar1);
  return;
}



// FUNCTION 143949540 FUN_143949540 body=263 status=ok
// SIG undefined FUN_143949540(void)

void FUN_143949540(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 local_res8;
  
  lVar1 = param_1[1];
  lVar3 = (lVar1 - *param_1) / 6 + (lVar1 - *param_1 >> 0x3f);
  uVar2 = (lVar3 >> 2) - (lVar3 >> 0x3f);
  if (param_2 < uVar2) {
    lVar3 = lVar1 + (param_2 - uVar2) * 0x18;
    FUN_143940c50(lVar3,lVar1,param_1,(ulonglong)param_1 & 0xff);
    param_1[1] = lVar3;
  }
  else if (uVar2 < param_2) {
    FUN_143948980(param_1,param_2 - uVar2);
    local_res8 = SUB81(param_1,0);
    FUN_143948160(param_1[1],param_2 - (param_1[1] - *param_1) / 0x18,param_1,0,local_res8);
    param_1[1] = param_1[1] + (param_2 - (param_1[1] - *param_1) / 0x18) * 0x18;
  }
  return;
}



// FUNCTION 143949650 FUN_143949650 body=263 status=ok
// SIG undefined FUN_143949650(void)

void FUN_143949650(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 local_res8;
  
  lVar1 = param_1[1];
  lVar3 = (lVar1 - *param_1) / 6 + (lVar1 - *param_1 >> 0x3f);
  uVar2 = (lVar3 >> 2) - (lVar3 >> 0x3f);
  if (param_2 < uVar2) {
    lVar3 = lVar1 + (param_2 - uVar2) * 0x18;
    std::
    _Destroy_range1<std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>,std::vector<c2t::Point,std::allocator<c2t::Point>_>_*___ptr64>
              (lVar3,lVar1,param_1,(ulonglong)param_1 & 0xff);
    param_1[1] = lVar3;
  }
  else if (uVar2 < param_2) {
    FUN_143948a50(param_1,param_2 - uVar2);
    local_res8 = SUB81(param_1,0);
    FUN_1439481b0(param_1[1],param_2 - (param_1[1] - *param_1) / 0x18,param_1,0,local_res8);
    param_1[1] = param_1[1] + (param_2 - (param_1[1] - *param_1) / 0x18) * 0x18;
  }
  return;
}



// FUNCTION 143949760 FUN_143949760 body=238 status=ok
// SIG undefined FUN_143949760(void)

void FUN_143949760(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = param_2 - param_1 >> 3;
  lVar4 = lVar7 - (param_2 - param_1 >> 0x3f) >> 1;
  if (0 < lVar4) {
    lVar6 = lVar4 * 2 + 2;
    do {
      puVar2 = *(ulonglong **)(param_1 + -8 + lVar4 * 8);
      lVar4 = lVar4 + -1;
      lVar6 = lVar6 + -2;
      lVar1 = lVar4;
      for (lVar5 = lVar6; lVar5 < lVar7; lVar5 = lVar5 * 2 + 2) {
        if (**(ulonglong **)(param_1 + -8 + lVar5 * 8) < **(ulonglong **)(param_1 + lVar5 * 8)) {
          lVar5 = lVar5 + -1;
        }
        *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + lVar5 * 8);
        lVar1 = lVar5;
      }
      if (lVar5 == lVar7) {
        *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + -8 + lVar7 * 8);
        lVar1 = lVar7 + -1;
      }
      while (lVar4 < lVar1) {
        lVar5 = (lVar1 + -1) / 2;
        puVar3 = *(ulonglong **)(param_1 + lVar5 * 8);
        if (*puVar3 <= *puVar2) break;
        *(ulonglong **)(param_1 + lVar1 * 8) = puVar3;
        lVar1 = lVar5;
      }
      *(ulonglong **)(param_1 + lVar1 * 8) = puVar2;
    } while (0 < lVar4);
  }
  return;
}



// FUNCTION 143949850 FUN_143949850 body=168 status=ok
// SIG undefined FUN_143949850(void)

void FUN_143949850(undefined8 *param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  puVar1 = *(ulonglong **)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  lVar5 = (param_2 - (longlong)param_1) + -8 >> 3;
  lVar3 = 0;
  lVar2 = 2;
  bVar6 = lVar5 == 2;
  lVar4 = lVar3;
  if (2 < lVar5) {
    do {
      lVar3 = lVar2;
      if (*(ulonglong *)param_1[lVar2 + -1] < *(ulonglong *)param_1[lVar2]) {
        lVar3 = lVar2 + -1;
      }
      param_1[lVar4] = param_1[lVar3];
      lVar2 = lVar3 * 2 + 2;
      bVar6 = lVar2 == lVar5;
      lVar4 = lVar3;
    } while (lVar2 < lVar5);
  }
  if (bVar6) {
    param_1[lVar3] = param_1[lVar5 + -1];
    lVar3 = lVar5 + -1;
  }
  while (0 < lVar3) {
    lVar2 = (lVar3 + -1) / 2;
    if (*(ulonglong *)param_1[lVar2] <= *puVar1) break;
    param_1[lVar3] = (ulonglong *)param_1[lVar2];
    lVar3 = lVar2;
  }
  param_1[lVar3] = puVar1;
  return;
}



// FUNCTION 143949900 FUN_143949900 body=422 status=ok
// SIG undefined FUN_143949900(void)

void FUN_143949900(longlong param_1,int param_2,int param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  longlong lVar3;
  sbyte sVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong *puVar12;
  
  uVar9 = (ulonglong)param_2;
  if (param_2 <= param_3) {
    puVar12 = (ulonglong *)(param_1 + uVar9 * 8);
    do {
      uVar6 = *puVar12 >> 6;
      uVar5 = (uint)*puVar12 & 0x3f;
      sVar4 = (sbyte)uVar5;
      if (uVar6 >> sVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14394ade0();
      }
      iVar8 = (int)uVar9;
      if (uVar5 < 0xf) {
        if (uVar5 != 0) {
          iVar11 = 1 << (0xeU - sVar4 & 0x1f);
          puVar7 = (uint *)((uVar6 << (0xeU - sVar4 & 0x3f)) * 0x10 + param_4);
          lVar3 = (longlong)iVar11;
          if (iVar11 != 0) {
            do {
              if (((char)*puVar7 != '\0') || (*(longlong *)(puVar7 + 2) != 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_14394ade0();
              }
              *(sbyte *)puVar7 = sVar4;
              *puVar7 = *puVar7 & 0xff;
              *puVar7 = *puVar7 | iVar8 << 8;
              puVar7 = puVar7 + 4;
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
        }
      }
      else {
        puVar7 = (uint *)((uVar6 >> (sVar4 - 0xeU & 0x3f)) * 0x10 + param_4);
        if ((char)*puVar7 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_14394ade0();
        }
        lVar3 = *(longlong *)(puVar7 + 2);
        uVar5 = (*puVar7 & 0xffffff00) + 0x100 ^ *puVar7 & 0xff;
        *puVar7 = uVar5;
        if (lVar3 == 0) {
          lVar3 = operator_new(4);
          *(longlong *)(puVar7 + 2) = lVar3;
          *(int *)(lVar3 + -4 + ((longlong)(int)*puVar7 >> 8) * 4) = iVar8;
        }
        else {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = (longlong)((int)uVar5 >> 8);
          uVar2 = SUB168(ZEXT816(4) * auVar1,0);
          if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
            uVar2 = 0xffffffffffffffff;
          }
          uVar2 = operator_new(uVar2);
          *(undefined8 *)(puVar7 + 2) = uVar2;
          iVar11 = 0;
          if (0 < ((int)*puVar7 >> 8) + -1) {
            lVar10 = 0;
            do {
              iVar11 = iVar11 + 1;
              *(undefined4 *)(lVar10 + *(longlong *)(puVar7 + 2)) = *(undefined4 *)(lVar10 + lVar3);
              lVar10 = lVar10 + 4;
            } while (iVar11 < ((int)*puVar7 >> 8) + -1);
          }
          FMemory::operator_delete(lVar3);
          *(int *)(*(longlong *)(puVar7 + 2) + -4 + ((longlong)(int)*puVar7 >> 8) * 4) = iVar8;
        }
      }
      uVar9 = (ulonglong)(iVar8 + 1U);
      puVar12 = puVar12 + 1;
    } while ((int)(iVar8 + 1U) <= param_3);
  }
  return;
}



// FUNCTION 143949ab0 FUN_143949ab0 body=996 status=ok
// SIG undefined FUN_143949ab0(void)

void FUN_143949ab0(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *_Dst;
  longlong *_Dst_00;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  bool bVar18;
  longlong *local_res8;
  longlong *local_res10;
  ulonglong local_res20;
  
  _Dst = (void *)operator_new(0x40004);
  _guard_xfg_dispatch_icall_nop(_Dst,0,0x40004);
  _Dst_00 = (longlong *)operator_new(0x80008);
  _guard_xfg_dispatch_icall_nop(_Dst_00,0,0x80008);
  uVar11 = 0;
  *param_2 = 0;
  lVar10 = *param_1;
  uVar8 = 0;
  while (lVar10 == 0) {
    uVar8 = uVar8 + 1;
    *param_2 = uVar8;
    lVar10 = param_1[(int)uVar8];
  }
  uVar9 = (ulonglong)(int)*param_2;
  if ((int)*param_2 < 0x10001) {
    plVar5 = param_1 + uVar9;
    piVar13 = (int *)((longlong)_Dst + uVar9 * 4);
    plVar7 = plVar5;
    plVar15 = _Dst_00;
    uVar11 = 0;
    do {
      iVar12 = (int)uVar9;
      *piVar13 = iVar12;
      if (*plVar7 != 0) {
        *plVar15 = (longlong)plVar5;
        uVar11 = uVar11 + 1;
        plVar15 = plVar15 + 1;
        *param_3 = iVar12;
      }
      uVar9 = (ulonglong)(iVar12 + 1U);
      plVar5 = plVar5 + 1;
      piVar13 = piVar13 + 1;
      plVar7 = plVar7 + 1;
    } while ((int)(iVar12 + 1U) < 0x10001);
  }
  *param_3 = *param_3 + 1;
  param_1[*param_3] = 1;
  _Dst_00[(int)uVar11] = (longlong)(param_1 + *param_3);
  iVar12 = uVar11 + 1;
  if (0xf < (longlong)((longlong)(_Dst_00 + iVar12) - (longlong)_Dst_00 & 0xfffffffffffffff8U)) {
    FUN_143949760(_Dst_00,_Dst_00 + iVar12,(ulonglong)_Dst & 0xff,0,0);
  }
  plVar5 = (longlong *)operator_new(0x80008);
  _guard_xfg_dispatch_icall_nop(plVar5,0,0x80008);
  _guard_xfg_dispatch_icall_nop(plVar5,0,0x80008);
  if (1 < iVar12) {
    plVar7 = _Dst_00 + (longlong)iVar12 + -1;
    local_res10 = _Dst_00 + iVar12;
    local_res20 = (ulonglong)uVar11;
    local_res8 = plVar7;
    do {
      lVar10 = *_Dst_00;
      if (0xf < (longlong)((longlong)local_res10 - (longlong)_Dst_00 & 0xfffffffffffffff8U)) {
        FUN_143949850(_Dst_00,local_res10,(ulonglong)plVar7 & 0xff,0);
      }
      local_res10 = local_res10 + -1;
      plVar15 = local_res8 + -1;
      iVar12 = (int)(*_Dst_00 - (longlong)param_1 >> 3);
      if (0xf < (longlong)(-(longlong)_Dst_00 + (longlong)local_res10 & 0xfffffffffffffff8U)) {
        FUN_143949850(_Dst_00,local_res10,(ulonglong)plVar7 & 0xff,0);
      }
      lVar16 = (longlong)iVar12;
      iVar17 = (int)(lVar10 - (longlong)param_1 >> 3);
      lVar10 = (longlong)iVar17;
      param_1[lVar16] = param_1[lVar16] + param_1[lVar10];
      if ((_Dst_00 != local_res8) &&
         (lVar14 = -(longlong)_Dst_00 + (longlong)plVar15 >> 3, 0 < lVar14)) {
        puVar2 = (ulonglong *)*plVar15;
        do {
          lVar6 = (lVar14 + -1) / 2;
          if (*(ulonglong *)_Dst_00[lVar6] <= *puVar2) break;
          _Dst_00[lVar14] = _Dst_00[lVar6];
          lVar14 = lVar6;
        } while (0 < lVar6);
        _Dst_00[lVar14] = (longlong)puVar2;
      }
      plVar5[lVar16] = plVar5[lVar16] + 1;
      iVar1 = *(int *)((longlong)_Dst + lVar16 * 4);
      if (iVar1 != iVar12) {
        do {
          iVar12 = iVar1;
          plVar5[iVar12] = plVar5[iVar12] + 1;
          iVar1 = *(int *)((longlong)_Dst + (longlong)iVar12 * 4);
        } while (iVar1 != iVar12);
      }
      *(int *)((longlong)_Dst + (longlong)iVar12 * 4) = iVar17;
      plVar5[lVar10] = plVar5[lVar10] + 1;
      iVar12 = *(int *)((longlong)_Dst + lVar10 * 4);
      if (iVar12 != iVar17) {
        do {
          plVar5[iVar12] = plVar5[iVar12] + 1;
          iVar17 = *(int *)((longlong)_Dst + (longlong)iVar12 * 4);
          bVar18 = iVar17 != iVar12;
          iVar12 = iVar17;
        } while (bVar18);
      }
      local_res20 = local_res20 - 1;
      local_res8 = plVar15;
    } while (local_res20 != 0);
  }
  FUN_143949ea0(plVar5);
  lVar10 = 0x1000;
  plVar7 = plVar5;
  do {
    lVar16 = plVar7[1];
    *param_1 = *plVar7;
    param_1[1] = lVar16;
    lVar16 = plVar7[3];
    param_1[2] = plVar7[2];
    param_1[3] = lVar16;
    lVar16 = plVar7[5];
    param_1[4] = plVar7[4];
    param_1[5] = lVar16;
    lVar16 = plVar7[7];
    param_1[6] = plVar7[6];
    param_1[7] = lVar16;
    lVar16 = plVar7[9];
    param_1[8] = plVar7[8];
    param_1[9] = lVar16;
    lVar16 = plVar7[0xb];
    param_1[10] = plVar7[10];
    param_1[0xb] = lVar16;
    uVar3 = *(undefined4 *)((longlong)plVar7 + 100);
    lVar16 = plVar7[0xd];
    uVar4 = *(undefined4 *)((longlong)plVar7 + 0x6c);
    *(int *)(param_1 + 0xc) = (int)plVar7[0xc];
    *(undefined4 *)((longlong)param_1 + 100) = uVar3;
    *(int *)(param_1 + 0xd) = (int)lVar16;
    *(undefined4 *)((longlong)param_1 + 0x6c) = uVar4;
    plVar15 = param_1 + 0x10;
    uVar3 = *(undefined4 *)((longlong)plVar7 + 0x74);
    lVar16 = plVar7[0xf];
    uVar4 = *(undefined4 *)((longlong)plVar7 + 0x7c);
    *(int *)(param_1 + 0xe) = (int)plVar7[0xe];
    *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
    *(int *)(param_1 + 0xf) = (int)lVar16;
    *(undefined4 *)((longlong)param_1 + 0x7c) = uVar4;
    plVar7 = plVar7 + 0x10;
    lVar10 = lVar10 + -1;
    param_1 = plVar15;
  } while (lVar10 != 0);
  *plVar15 = *plVar7;
  FMemory::operator_delete(plVar5);
  FMemory::operator_delete(_Dst_00);
  FMemory::operator_delete(_Dst);
  return;
}



// FUNCTION 143949ea0 FUN_143949ea0 body=255 status=ok
// SIG undefined FUN_143949ea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_143949ea0(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong auStack_200 [61];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)(auStack_200 + 1);
  uVar4 = 0;
  lVar8 = 7;
  puVar3 = auStack_200 + 1;
  do {
    puVar6 = puVar3;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    lVar8 = lVar8 + -1;
    puVar3 = puVar6 + 8;
  } while (lVar8 != 0);
  puVar6[8] = 0;
  lVar8 = 0x10001;
  puVar6[9] = 0;
  puVar6[10] = 0;
  plVar7 = param_1;
  do {
    lVar1 = *plVar7;
    plVar7 = plVar7 + 1;
    auStack_200[lVar1 + 1] = auStack_200[lVar1 + 1] + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  lVar8 = 0x3a;
  uVar5 = uVar4;
  do {
    lVar1 = auStack_200[lVar8 + 1];
    auStack_200[lVar8 + 1] = uVar5;
    uVar2 = auStack_200[lVar8];
    uVar5 = lVar1 + uVar5 >> 1;
    auStack_200[lVar8] = uVar5;
    uVar5 = uVar2 + uVar5 >> 1;
    lVar8 = lVar8 + -2;
  } while (0 < lVar8);
  do {
    uVar5 = (ulonglong)(int)param_1[uVar4];
    if (0 < (int)param_1[uVar4]) {
      lVar8 = auStack_200[uVar5 + 1];
      param_1[uVar4] = lVar8 << 6 | uVar5;
      auStack_200[uVar5 + 1] = lVar8 + 1;
    }
    uVar4 = uVar4 + 1;
  } while ((longlong)uVar4 < 0x10001);
  return;
}



// FUNCTION 143949fa0 FUN_143949fa0 body=430 status=ok
// SIG undefined FUN_143949fa0(void)

int FUN_143949fa0(ushort *param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 *_Dst;
  ushort *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    _Dst = (undefined8 *)operator_new(0x80008);
    local_48 = _Dst;
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x80008);
    puVar5 = _Dst;
    for (lVar3 = 0x10001; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar2 = param_1;
    uVar4 = (ulonglong)param_2;
    if (0 < (int)param_2) {
      do {
        _Dst[*puVar2] = _Dst[*puVar2] + 1;
        uVar4 = uVar4 - 1;
        puVar2 = puVar2 + 1;
      } while (uVar4 != 0);
    }
    FUN_143949ab0(_Dst,local_res20,local_res10);
    local_48 = (undefined8 *)(param_3 + 0x14);
    FUN_14394a830(_Dst,local_res20[0],local_res10[0],&local_48);
    iVar7 = (int)local_48;
    iVar6 = iVar7 - (int)(param_3 + 0x14);
    iVar1 = FUN_14394a520(_Dst,param_1,(ulonglong)param_2,local_res10[0],local_48);
    *param_3 = (char)local_res20[0];
    param_3[1] = (char)((uint)local_res20[0] >> 8);
    param_3[2] = (char)((uint)local_res20[0] >> 0x10);
    param_3[3] = (char)((uint)local_res20[0] >> 0x18);
    param_3[4] = (char)local_res10[0];
    param_3[5] = (char)((uint)local_res10[0] >> 8);
    param_3[6] = (char)((uint)local_res10[0] >> 0x10);
    param_3[7] = (char)((uint)local_res10[0] >> 0x18);
    param_3[8] = (char)iVar6;
    param_3[9] = (char)((uint)iVar6 >> 8);
    param_3[10] = (char)((uint)iVar6 >> 0x10);
    param_3[0xb] = (char)((uint)iVar6 >> 0x18);
    param_3[0xc] = (char)iVar1;
    param_3[0xd] = (char)((uint)iVar1 >> 8);
    param_3[0xe] = (char)((uint)iVar1 >> 0x10);
    param_3[0xf] = (char)((uint)iVar1 >> 0x18);
    *(undefined4 *)(param_3 + 0x10) = 0;
    iVar1 = (iVar7 - (int)param_3) + ((int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3);
    FMemory::operator_delete(_Dst);
  }
  return iVar1;
}



// FUNCTION 14394a150 FUN_14394a150 body=966 status=ok
// SIG undefined FUN_14394a150(void)

void FUN_14394a150(longlong param_1,longlong param_2,byte *param_3,int param_4,int param_5,
                  int param_6,undefined2 *param_7)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined2 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  undefined2 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lStack_50;
  
  uVar15 = 0;
  iVar16 = 0;
  puVar1 = param_7 + param_6;
  pbVar11 = param_3 + ((int)(param_4 + 7 + (param_4 + 7 >> 0x1f & 7U)) >> 3);
  puVar9 = param_7;
  do {
    if (pbVar11 <= param_3) {
      iVar16 = iVar16 - (-param_4 & 7U);
      uVar15 = uVar15 >> (sbyte)(-param_4 & 7U);
      while( true ) {
        if (iVar16 < 1) {
          if ((longlong)puVar9 - (longlong)param_7 >> 1 != (longlong)param_6) {
                    /* WARNING: Subroutine does not return */
            FUN_14394ae30();
          }
          return;
        }
        iVar10 = *(int *)(param_2 +
                         (ulonglong)((uint)(uVar15 << (0xeU - (char)iVar16 & 0x3f)) & 0x3fff) * 0x10
                         );
        if ((char)iVar10 == '\0') break;
        iVar16 = iVar16 - (char)iVar10;
        if (iVar10 >> 8 == param_5) {
          if (iVar16 < 8) {
            bVar4 = *param_3;
            param_3 = param_3 + 1;
            uVar15 = uVar15 << 8 | (ulonglong)bVar4;
            iVar16 = iVar16 + 8;
          }
          iVar16 = iVar16 + -8;
          uVar8 = uVar15 >> ((byte)iVar16 & 0x3f);
          uVar7 = uVar8 & 0xff;
          if (puVar1 < puVar9 + uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_14394aed0();
          }
          if ((char)uVar8 != '\0') {
            uVar5 = puVar9[-1];
            puVar2 = puVar9 + uVar7;
            puVar13 = puVar9;
            for (; puVar9 = puVar2, uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar13 = uVar5;
              puVar13 = puVar13 + 1;
            }
          }
        }
        else {
          if (puVar1 <= puVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_14394aed0();
          }
          *puVar9 = (short)((uint)iVar10 >> 8);
          puVar9 = puVar9 + 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_14394ad90();
    }
    bVar4 = *param_3;
    iVar16 = iVar16 + 8;
    param_3 = param_3 + 1;
    uVar15 = uVar15 << 8 | (ulonglong)bVar4;
    while (0xd < iVar16) {
      auVar3 = *(undefined1 (*) [16])
                (param_2 +
                (ulonglong)((uint)(uVar15 >> ((char)iVar16 - 0xeU & 0x3f)) & 0x3fff) * 0x10);
      iVar10 = auVar3._0_4_ >> 8;
      if (auVar3[0] == '\0') {
        lStack_50 = auVar3._8_8_;
        if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_14394ad90();
        }
        iVar18 = 0;
        lVar17 = (longlong)auVar3._0_4_ >> 8;
        lVar14 = 0;
        if (0 < lVar17) {
          do {
            lVar6 = (longlong)*(int *)(lStack_50 + lVar14 * 4);
            uVar12 = *(uint *)(param_1 + lVar6 * 8) & 0x3f;
            for (; iVar16 < (int)uVar12; iVar16 = iVar16 + 8) {
              if (pbVar11 <= param_3) {
                if (iVar16 < (int)uVar12) goto LAB_14394a31f;
                break;
              }
              bVar4 = *param_3;
              param_3 = param_3 + 1;
              uVar15 = uVar15 << 8 | (ulonglong)bVar4;
            }
            if (*(ulonglong *)(param_1 + lVar6 * 8) >> 6 ==
                (uVar15 >> ((char)iVar16 - (sbyte)uVar12 & 0x3fU) & (1L << (sbyte)uVar12) - 1U)) {
              iVar16 = iVar16 - uVar12;
              if (*(int *)(lVar14 * 4 + lStack_50) == param_5) {
                if (iVar16 < 8) {
                  bVar4 = *param_3;
                  param_3 = param_3 + 1;
                  uVar15 = uVar15 << 8 | (ulonglong)bVar4;
                  iVar16 = iVar16 + 8;
                }
                iVar16 = iVar16 + -8;
                uVar8 = uVar15 >> ((byte)iVar16 & 0x3f);
                uVar7 = uVar8 & 0xff;
                if (puVar1 < puVar9 + uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_14394aed0();
                }
                if ((char)uVar8 != '\0') {
                  uVar5 = puVar9[-1];
                  puVar2 = puVar9 + uVar7;
                  puVar13 = puVar9;
                  for (; puVar9 = puVar2, uVar7 != 0; uVar7 = uVar7 - 1) {
                    *puVar13 = uVar5;
                    puVar13 = puVar13 + 1;
                  }
                }
              }
              else {
                if (puVar1 <= puVar9) {
                    /* WARNING: Subroutine does not return */
                  FUN_14394aed0();
                }
                *puVar9 = *(undefined2 *)(lVar14 * 4 + lStack_50);
                puVar9 = puVar9 + 1;
              }
              break;
            }
LAB_14394a31f:
            iVar18 = iVar18 + 1;
            lVar14 = lVar14 + 1;
          } while (lVar14 < lVar17);
        }
        if (iVar18 == iVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_14394ad90();
        }
      }
      else {
        iVar16 = iVar16 - auVar3[0];
        if (iVar10 == param_5) {
          if (iVar16 < 8) {
            bVar4 = *param_3;
            param_3 = param_3 + 1;
            uVar15 = uVar15 << 8 | (ulonglong)bVar4;
            iVar16 = iVar16 + 8;
          }
          iVar16 = iVar16 + -8;
          uVar8 = uVar15 >> ((byte)iVar16 & 0x3f);
          uVar7 = uVar8 & 0xff;
          if (puVar1 < puVar9 + uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_14394aed0();
          }
          if ((char)uVar8 != '\0') {
            uVar5 = puVar9[-1];
            puVar2 = puVar9 + uVar7;
            puVar13 = puVar9;
            for (; puVar9 = puVar2, uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar13 = uVar5;
              puVar13 = puVar13 + 1;
            }
          }
        }
        else {
          if (puVar1 <= puVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_14394aed0();
          }
          *puVar9 = auVar3._1_2_;
          puVar9 = puVar9 + 1;
        }
      }
    }
  } while( true );
}



// FUNCTION 14394a520 FUN_14394a520 body=689 status=ok
// SIG undefined FUN_14394a520(void)

longlong FUN_14394a520(longlong param_1,ushort *param_2,int param_3,int param_4,undefined1 *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  
  uVar9 = 0;
  uVar7 = (uint)*param_2;
  uVar4 = 0;
  iVar5 = 0;
  lVar6 = 1;
  puVar8 = param_5;
  if (1 < (longlong)param_3) {
    do {
      if ((uVar7 == param_2[lVar6]) && (iVar5 < 0xff)) {
        iVar5 = iVar5 + 1;
      }
      else {
        uVar1 = *(ulonglong *)(param_1 + (longlong)param_4 * 8);
        uVar2 = *(ulonglong *)(param_1 + (longlong)(int)uVar7 * 8);
        if (iVar5 < 0x21) {
          if (-1 < iVar5) {
            uVar7 = (uint)uVar2 & 0x3f;
            do {
              iVar5 = iVar5 + -1;
              uVar4 = uVar4 + uVar7;
              uVar9 = uVar9 << (sbyte)uVar7 | uVar2 >> 6;
              while (7 < (int)uVar4) {
                uVar4 = uVar4 - 8;
                *puVar8 = (char)(uVar9 >> ((byte)uVar4 & 0x3f));
                puVar8 = puVar8 + 1;
              }
            } while (-1 < iVar5);
          }
        }
        else {
          uVar7 = (uint)uVar2 & 0x3f;
          iVar3 = uVar4 + uVar7;
          uVar9 = uVar9 << (sbyte)uVar7 | uVar2 >> 6;
          while (7 < iVar3) {
            iVar3 = iVar3 + -8;
            *puVar8 = (char)(uVar9 >> ((byte)iVar3 & 0x3f));
            puVar8 = puVar8 + 1;
          }
          uVar4 = (uint)uVar1 & 0x3f;
          iVar3 = iVar3 + uVar4;
          uVar9 = uVar9 << (sbyte)uVar4 | uVar1 >> 6;
          while (7 < iVar3) {
            iVar3 = iVar3 + -8;
            *puVar8 = (char)(uVar9 >> ((byte)iVar3 & 0x3f));
            puVar8 = puVar8 + 1;
          }
          uVar4 = iVar3 + 8;
          uVar9 = uVar9 << 8 | (longlong)iVar5;
          while (7 < (int)uVar4) {
            uVar4 = uVar4 - 8;
            *puVar8 = (char)(uVar9 >> ((byte)uVar4 & 0x3f));
            puVar8 = puVar8 + 1;
          }
        }
        iVar5 = 0;
      }
      uVar7 = (uint)param_2[lVar6];
      lVar6 = lVar6 + 1;
    } while (lVar6 < param_3);
  }
  uVar1 = *(ulonglong *)(param_1 + (longlong)param_4 * 8);
  uVar2 = *(ulonglong *)(param_1 + (longlong)(int)uVar7 * 8);
  if (iVar5 < 0x21) {
    if (-1 < iVar5) {
      uVar7 = (uint)uVar2 & 0x3f;
      do {
        iVar5 = iVar5 + -1;
        uVar4 = uVar4 + uVar7;
        uVar9 = uVar9 << (sbyte)uVar7 | uVar2 >> 6;
        while (7 < (int)uVar4) {
          uVar4 = uVar4 - 8;
          *puVar8 = (char)(uVar9 >> ((byte)uVar4 & 0x3f));
          puVar8 = puVar8 + 1;
        }
      } while (-1 < iVar5);
    }
  }
  else {
    uVar7 = (uint)uVar2 & 0x3f;
    iVar3 = uVar4 + uVar7;
    uVar9 = uVar9 << (sbyte)uVar7 | uVar2 >> 6;
    while (7 < iVar3) {
      iVar3 = iVar3 + -8;
      *puVar8 = (char)(uVar9 >> ((byte)iVar3 & 0x3f));
      puVar8 = puVar8 + 1;
    }
    uVar4 = (uint)uVar1 & 0x3f;
    iVar3 = iVar3 + uVar4;
    uVar9 = uVar9 << (sbyte)uVar4 | uVar1 >> 6;
    while (7 < iVar3) {
      iVar3 = iVar3 + -8;
      *puVar8 = (char)(uVar9 >> ((byte)iVar3 & 0x3f));
      puVar8 = puVar8 + 1;
    }
    uVar4 = iVar3 + 8;
    uVar9 = uVar9 << 8 | (longlong)iVar5;
    while (7 < (int)uVar4) {
      uVar4 = uVar4 - 8;
      *puVar8 = (char)(uVar9 >> ((byte)uVar4 & 0x3f));
      puVar8 = puVar8 + 1;
    }
  }
  if (uVar4 != 0) {
    *puVar8 = (char)(uVar9 << (8U - (char)uVar4 & 0x3f));
  }
  return (ulonglong)uVar4 + ((longlong)puVar8 - (longlong)param_5) * 8;
}



// FUNCTION 14394a7e0 FUN_14394a7e0 body=74 status=ok
// SIG undefined FUN_14394a7e0(void)

void FUN_14394a7e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = 0x4000;
  do {
    if (*plVar1 != 0) {
      FMemory::operator_delete();
      *plVar1 = 0;
    }
    plVar1 = plVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 14394a830 FUN_14394a830 body=386 status=ok
// SIG undefined FUN_14394a830(void)

void FUN_14394a830(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  puVar8 = (undefined1 *)*param_4;
  uVar3 = 0;
  uVar6 = (ulonglong)param_2;
  uVar9 = uVar6;
  uVar10 = uVar3;
  if (param_2 <= param_3) {
    do {
      uVar5 = (uint)uVar9;
      uVar7 = *(uint *)(param_1 + uVar6 * 8) & 0x3f;
      if ((uVar7 == 0) && (iVar4 = 1, (longlong)uVar6 < (longlong)param_3)) {
        pbVar1 = (byte *)(param_1 + 8 + uVar6 * 8);
        do {
          uVar5 = (uint)uVar9;
          if ((0x104 < iVar4) || ((*pbVar1 & 0x3f) != 0)) break;
          uVar5 = uVar5 + 1;
          uVar9 = (ulonglong)uVar5;
          uVar6 = uVar6 + 1;
          pbVar1 = pbVar1 + 8;
          iVar4 = iVar4 + 1;
        } while ((longlong)uVar6 < (longlong)param_3);
        if (iVar4 < 2) goto LAB_14394a946;
        uVar7 = (int)uVar3 + 6;
        uVar3 = (ulonglong)uVar7;
        if (iVar4 < 6) {
          uVar10 = (longlong)(iVar4 + 0x39) | uVar10 << 6;
          while (7 < (int)uVar7) {
            uVar7 = (int)uVar3 - 8;
            uVar3 = (ulonglong)uVar7;
            *puVar8 = (char)(uVar10 >> ((byte)uVar7 & 0x3f));
            puVar8 = puVar8 + 1;
          }
        }
        else {
          uVar9 = uVar10 << 6 | 0x3f;
          while (7 < (int)uVar7) {
            uVar7 = (int)uVar3 - 8;
            uVar3 = (ulonglong)uVar7;
            *puVar8 = (char)(uVar9 >> ((byte)uVar7 & 0x3f));
            puVar8 = puVar8 + 1;
          }
          uVar7 = uVar7 + 8;
          uVar10 = (longlong)(iVar4 + -6) | uVar9 << 8;
          while (uVar3 = (ulonglong)uVar7, 7 < (int)uVar7) {
            uVar7 = uVar7 - 8;
            *puVar8 = (char)(uVar10 >> ((byte)uVar7 & 0x3f));
            puVar8 = puVar8 + 1;
          }
        }
      }
      else {
LAB_14394a946:
        uVar2 = (int)uVar3 + 6;
        uVar10 = uVar10 << 6 | (longlong)(int)uVar7;
        while (uVar3 = (ulonglong)uVar2, 7 < (int)uVar2) {
          uVar2 = uVar2 - 8;
          *puVar8 = (char)(uVar10 >> ((byte)uVar2 & 0x3f));
          puVar8 = puVar8 + 1;
        }
      }
      uVar6 = uVar6 + 1;
      uVar9 = (ulonglong)(uVar5 + 1);
    } while ((int)(uVar5 + 1) <= param_3);
    if (0 < (int)uVar3) {
      *puVar8 = (char)(uVar10 << (8U - (char)uVar3 & 0x3f));
      puVar8 = puVar8 + 1;
    }
  }
  *param_4 = (longlong)puVar8;
  return;
}



// FUNCTION 14394a9c0 FUN_14394a9c0 body=565 status=ok
// SIG undefined FUN_14394a9c0(void)

void FUN_14394a9c0(uint *param_1,int param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  void *_Dst;
  void *_Dst_00;
  void *pvVar5;
  uint *local_120;
  void *local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  undefined **local_f8 [12];
  undefined **local_98 [12];
  undefined4 uVar6;
  
  local_100 = 0xfffffffffffffffe;
  local_110 = param_3;
  if (param_2 == 0) {
    if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14394ae30();
    }
  }
  else {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[3];
    if ((0x10000 < uVar1) || (0x10000 < uVar2)) {
      FUN_143e179e0(local_98,"Error in Huffman-encoded data (invalid code table size).");
      local_98[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_98,(ThrowInfo *)&DAT_1461db5c8);
    }
    local_120 = param_1 + 5;
    _Dst = (void *)operator_new(0x80008);
    local_108 = _Dst;
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x80008);
    _Dst_00 = (void *)operator_new(0x40000);
    local_118 = _Dst_00;
    _guard_xfg_dispatch_icall_nop(_Dst_00,0,0x40000);
    _guard_xfg_dispatch_icall_nop(_Dst_00,0,0x40000);
    pvVar5 = _Dst;
    FUN_14394ac00(&local_120,((int)param_1 - (int)(param_1 + 5)) + param_2,uVar1,uVar2,_Dst);
    puVar4 = local_120;
    uVar6 = (undefined4)((ulonglong)pvVar5 >> 0x20);
    if ((((longlong)param_2 - (longlong)local_120) + (longlong)param_1) * 8 < (longlong)(int)uVar3)
    {
      FUN_143e179e0(local_f8,"Error in header for Huffman-encoded data (invalid number of bits).");
      local_f8[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_f8,(ThrowInfo *)&DAT_1461db5c8);
    }
    FUN_143949900(_Dst,uVar1,uVar2,_Dst_00);
    FUN_14394a150(_Dst,_Dst_00,puVar4,uVar3,CONCAT44(uVar6,uVar2),param_4,local_110);
    FUN_14394a7e0(_Dst_00);
    FMemory::operator_delete(_Dst_00);
    FMemory::operator_delete(_Dst);
  }
  return;
}



// FUNCTION 14394ac00 FUN_14394ac00 body=389 status=ok
// SIG undefined FUN_14394ac00(void)

void FUN_14394ac00(longlong *param_1,int param_2,int param_3,int param_4,void *param_5)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  
  _guard_xfg_dispatch_icall_nop(param_5,0,0x80008);
  pbVar9 = (byte *)*param_1;
  uVar3 = 0;
  uVar8 = uVar3;
  do {
    if (param_4 < param_3) {
      *param_1 = (longlong)pbVar9;
      FUN_143949ea0(param_5);
      return;
    }
    iVar6 = (int)uVar3;
    if ((longlong)param_2 < (longlong)pbVar9 - *param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_14394af20();
    }
    if (iVar6 < 6) {
      uVar2 = (5U - iVar6 >> 3) + 1;
      uVar3 = (ulonglong)uVar2;
      iVar6 = iVar6 + uVar2 * 8;
      do {
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar8 = uVar8 << 8 | (ulonglong)bVar1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar7 = iVar6 - 6;
    uVar3 = (ulonglong)uVar7;
    puVar5 = (ulonglong *)((longlong)param_5 + (longlong)param_3 * 8);
    uVar2 = (uint)(uVar8 >> ((byte)uVar7 & 0x3f)) & 0x3f;
    uVar4 = (ulonglong)uVar2;
    *puVar5 = uVar4;
    if (uVar4 == 0x3f) {
      if ((longlong)param_2 < (longlong)pbVar9 - *param_1) {
                    /* WARNING: Subroutine does not return */
        FUN_14394af20();
      }
      if ((int)uVar7 < 8) {
        uVar2 = (7 - uVar7 >> 3) + 1;
        uVar3 = (ulonglong)uVar2;
        uVar7 = uVar7 + uVar2 * 8;
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          uVar8 = uVar8 << 8 | (ulonglong)bVar1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar3 = (ulonglong)(uVar7 - 8);
      uVar2 = ((uint)(uVar8 >> ((byte)(uVar7 - 8) & 0x3f)) & 0xff) + 6;
      uVar4 = (ulonglong)uVar2;
      if (param_4 + 1 < (int)(uVar2 + param_3)) {
                    /* WARNING: Subroutine does not return */
        FUN_14394ae80();
      }
      if (uVar2 != 0) {
        param_3 = param_3 + uVar2;
LAB_14394ad3f:
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
LAB_14394ad42:
      param_3 = param_3 + -1;
    }
    else if (0x3a < uVar4) {
      uVar2 = uVar2 - 0x39;
      uVar4 = (ulonglong)uVar2;
      if (param_4 + 1 < (int)(uVar2 + param_3)) {
                    /* WARNING: Subroutine does not return */
        FUN_14394ae80();
      }
      if (uVar2 != 0) {
        param_3 = param_3 + uVar2;
        goto LAB_14394ad3f;
      }
      goto LAB_14394ad42;
    }
    param_3 = param_3 + 1;
  } while( true );
}



// FUNCTION 14394ad90 FUN_14394ad90 body=71 status=ok
// SIG undefined FUN_14394ad90(void)

void FUN_14394ad90(void)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FUN_143e179e0(local_78,"Error in Huffman-encoded data (invalid code).");
  local_78[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db5c8);
}



// FUNCTION 14394ade0 FUN_14394ade0 body=71 status=ok
// SIG undefined FUN_14394ade0(void)

void FUN_14394ade0(void)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FUN_143e179e0(local_78,"Error in Huffman-encoded data (invalid code table entry).");
  local_78[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db5c8);
}



// FUNCTION 14394ae30 FUN_14394ae30 body=71 status=ok
// SIG undefined FUN_14394ae30(void)

void FUN_14394ae30(void)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FUN_143e179e0(local_78,"Error in Huffman-encoded data (decoded data are shorter than expected).");
  local_78[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db5c8);
}



// FUNCTION 14394ae80 FUN_14394ae80 body=71 status=ok
// SIG undefined FUN_14394ae80(void)

void FUN_14394ae80(void)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FUN_143e179e0(local_78,"Error in Huffman-encoded data (code table is longer than expected).");
  local_78[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db5c8);
}



// FUNCTION 14394aed0 FUN_14394aed0 body=71 status=ok
// SIG undefined FUN_14394aed0(void)

void FUN_14394aed0(void)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FUN_143e179e0(local_78,"Error in Huffman-encoded data (decoded data are longer than expected).");
  local_78[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db5c8);
}



// FUNCTION 14394af20 FUN_14394af20 body=71 status=ok
// SIG undefined FUN_14394af20(void)

void FUN_14394af20(void)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FUN_143e179e0(local_78,"Error in Huffman-encoded data (unexpected end of code table data).");
  local_78[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db5c8);
}



// FUNCTION 14394af70 FUN_14394af70 body=978 status=ok
// SIG undefined FUN_14394af70(void)

void FUN_14394af70(short *param_1,uint param_2,int param_3,uint param_4,int param_5,ushort param_6)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  uint uVar4;
  longlong lVar5;
  ushort uVar6;
  int iVar7;
  short sVar8;
  ushort *puVar9;
  short *psVar10;
  short sVar11;
  int iVar12;
  longlong lVar13;
  ushort uVar14;
  ushort uVar15;
  longlong lVar16;
  bool bVar17;
  
  iVar7 = 1;
  bVar17 = 0x3fff < param_6;
  uVar2 = param_2;
  if ((int)param_4 < (int)param_2) {
    uVar2 = param_4;
  }
  if (0 < (int)uVar2) {
    do {
      iVar7 = iVar7 * 2;
    } while (iVar7 <= (int)uVar2);
  }
  uVar2 = iVar7 >> 1;
  for (uVar1 = iVar7 >> 2; 0 < (int)uVar1; uVar1 = (int)uVar1 >> 1) {
    iVar12 = -uVar2;
    iVar7 = uVar2 * param_3;
    lVar16 = (longlong)(int)(uVar1 * param_3);
    psVar10 = param_1;
    if (param_1 <= param_1 + (int)((iVar12 + param_4) * param_5)) {
      lVar13 = (longlong)(int)(uVar1 * param_5);
      do {
        psVar3 = psVar10;
        if (psVar10 <= psVar10 + (int)((iVar12 + param_2) * param_3)) {
          puVar9 = (ushort *)(psVar10 + lVar16);
          lVar5 = lVar13 - lVar16;
          do {
            if (bVar17) {
              sVar8 = *psVar3 - (short)((int)(uint)puVar9[lVar5] >> 1);
              uVar4 = (uint)*puVar9 - ((int)(uint)puVar9[lVar16 + lVar5] >> 1);
              sVar11 = (short)uVar4;
              uVar14 = puVar9[lVar16 + lVar5] + sVar11 + 0x8000;
              uVar15 = (puVar9[lVar5] + sVar8 + -0x8000) - (short)((int)(uint)uVar14 >> 1);
              *puVar9 = uVar15;
              uVar6 = sVar8 - (short)((int)(uVar4 & 0xffff) >> 1);
              *psVar3 = uVar14 + uVar15 + -0x8000;
              puVar9[lVar16 + lVar5] = uVar6;
              puVar9[lVar5] = uVar6 + sVar11 + 0x8000;
            }
            else {
              uVar6 = puVar9[lVar5];
              uVar15 = puVar9[lVar16 + lVar5];
              sVar8 = ((short)uVar6 >> 1) + (uVar6 & 1) + *psVar3;
              uVar14 = ((short)uVar15 >> 1) + (uVar15 & 1) + *puVar9;
              uVar15 = uVar14 - uVar15;
              sVar11 = ((short)uVar14 >> 1) + (uVar14 & 1) + sVar8;
              *psVar3 = sVar11;
              *puVar9 = sVar11 - uVar14;
              uVar6 = (sVar8 - uVar6) + ((short)uVar15 >> 1) + (uVar15 & 1);
              puVar9[lVar5] = uVar6;
              puVar9[lVar16 + lVar5] = uVar6 - uVar15;
            }
            psVar3 = psVar3 + iVar7;
            puVar9 = puVar9 + iVar7;
          } while (psVar3 <= psVar10 + (int)((iVar12 + param_2) * param_3));
        }
        if ((uVar1 & param_2) != 0) {
          if (bVar17) {
            uVar6 = psVar3[lVar13];
            sVar8 = *psVar3 - (short)((int)(uint)uVar6 >> 1);
            psVar3[lVar13] = sVar8;
            sVar8 = uVar6 + sVar8 + -0x8000;
          }
          else {
            uVar6 = psVar3[lVar13];
            sVar8 = ((short)uVar6 >> 1) + (uVar6 & 1) + *psVar3;
            psVar3[lVar13] = sVar8 - uVar6;
          }
          *psVar3 = sVar8;
        }
        psVar10 = psVar10 + (int)(uVar2 * param_5);
      } while (psVar10 <= param_1 + (int)((iVar12 + param_4) * param_5));
    }
    if (((param_4 & uVar1) != 0) &&
       (psVar3 = psVar10 + (int)((iVar12 + param_2) * param_3), psVar10 <= psVar3)) {
      do {
        if (bVar17) {
          uVar6 = psVar10[lVar16];
          sVar8 = *psVar10 - (short)((int)(uint)uVar6 >> 1);
          psVar10[lVar16] = sVar8;
          sVar8 = uVar6 + sVar8 + -0x8000;
        }
        else {
          uVar6 = psVar10[lVar16];
          sVar8 = ((short)uVar6 >> 1) + (uVar6 & 1) + *psVar10;
          psVar10[lVar16] = sVar8 - uVar6;
        }
        *psVar10 = sVar8;
        psVar10 = psVar10 + iVar7;
      } while (psVar10 <= psVar3);
    }
    uVar2 = uVar1;
  }
  return;
}



// FUNCTION 14394b350 FUN_14394b350 body=949 status=ok
// SIG undefined FUN_14394b350(void)

void FUN_14394b350(ushort *param_1,uint param_2,int param_3,uint param_4,int param_5,ushort param_6)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  ushort *puVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ushort *puVar19;
  bool bVar20;
  uint local_98;
  uint local_94;
  
  local_94 = 2;
  bVar20 = 0x3fff < param_6;
  uVar1 = param_2;
  if ((int)param_4 < (int)param_2) {
    uVar1 = param_4;
  }
  local_98 = 1;
  if (1 < (int)uVar1) {
    do {
      iVar11 = -local_94;
      iVar5 = local_94 * param_3;
      lVar18 = (longlong)(int)(local_98 * param_3);
      puVar19 = param_1;
      if (param_1 <= param_1 + (int)((param_4 + iVar11) * param_5)) {
        lVar17 = (longlong)(int)(local_98 * param_5);
        do {
          puVar2 = puVar19;
          if (puVar19 <= puVar19 + (int)((iVar11 + param_2) * param_3)) {
            puVar8 = puVar19 + lVar18;
            lVar4 = lVar17 - lVar18;
            do {
              if (bVar20) {
                uVar15 = *puVar2 - 0x8000 & 0xffff;
                uVar3 = (int)(*puVar8 + uVar15) >> 1;
                iVar6 = uVar15 - *puVar8;
                if (iVar6 < 0) {
                  uVar3 = uVar3 - 0x8000 & 0xffff;
                }
                uVar15 = puVar8[lVar4] - 0x8000 & 0xffff;
                uVar12 = (int)(puVar8[lVar18 + lVar4] + uVar15) >> 1;
                uVar15 = uVar15 - puVar8[lVar18 + lVar4];
                if ((int)uVar15 < 0) {
                  uVar12 = uVar12 - 0x8000 & 0xffff;
                }
                uVar3 = uVar3 - 0x8000 & 0xffff;
                uVar14 = (ushort)((int)(uVar12 + uVar3) >> 1);
                iVar16 = uVar3 - uVar12;
                if (iVar16 < 0) {
                  uVar14 = uVar14 + 0x8000;
                }
                *puVar2 = uVar14;
                uVar3 = iVar6 - 0x8000U & 0xffff;
                uVar15 = uVar15 & 0xffff;
                puVar8[lVar4] = (ushort)iVar16;
                uVar14 = (ushort)((int)(uVar15 + uVar3) >> 1);
                iVar6 = uVar3 - uVar15;
                if (iVar6 < 0) {
                  uVar14 = uVar14 + 0x8000;
                }
                *puVar8 = uVar14;
                puVar8[lVar18 + lVar4] = (ushort)iVar6;
              }
              else {
                sVar9 = *puVar2 - *puVar8;
                sVar13 = (short)((int)(short)*puVar2 + (int)(short)*puVar8 >> 1);
                sVar7 = puVar8[lVar4] - puVar8[lVar18 + lVar4];
                sVar10 = (short)((int)(short)puVar8[lVar4] + (int)(short)puVar8[lVar18 + lVar4] >> 1
                                );
                *puVar2 = (ushort)((int)sVar10 + (int)sVar13 >> 1);
                puVar8[lVar4] = sVar13 - sVar10;
                *puVar8 = (ushort)((int)sVar7 + (int)sVar9 >> 1);
                puVar8[lVar18 + lVar4] = sVar9 - sVar7;
              }
              puVar2 = puVar2 + iVar5;
              puVar8 = puVar8 + iVar5;
            } while (puVar2 <= puVar19 + (int)((iVar11 + param_2) * param_3));
          }
          if ((local_98 & param_2) != 0) {
            if (bVar20) {
              uVar3 = *puVar2 - 0x8000 & 0xffff;
              uVar14 = (ushort)((int)(puVar2[lVar17] + uVar3) >> 1);
              iVar6 = uVar3 - puVar2[lVar17];
              if (iVar6 < 0) {
                uVar14 = uVar14 + 0x8000;
              }
              puVar2[lVar17] = (ushort)iVar6;
            }
            else {
              uVar14 = (ushort)((int)(short)*puVar2 + (int)(short)puVar2[lVar17] >> 1);
              puVar2[lVar17] = *puVar2 - puVar2[lVar17];
            }
            *puVar2 = uVar14;
          }
          puVar19 = puVar19 + (int)(local_94 * param_5);
        } while (puVar19 <= param_1 + (int)((param_4 + iVar11) * param_5));
      }
      if (((param_4 & local_98) != 0) &&
         (puVar2 = puVar19 + (int)((iVar11 + param_2) * param_3), puVar19 <= puVar2)) {
        do {
          if (bVar20) {
            uVar3 = *puVar19 - 0x8000 & 0xffff;
            uVar14 = (ushort)((int)(puVar19[lVar18] + uVar3) >> 1);
            iVar11 = uVar3 - puVar19[lVar18];
            if (iVar11 < 0) {
              uVar14 = uVar14 + 0x8000;
            }
            puVar19[lVar18] = (ushort)iVar11;
          }
          else {
            uVar14 = (ushort)((int)(short)*puVar19 + (int)(short)puVar19[lVar18] >> 1);
            puVar19[lVar18] = *puVar19 - puVar19[lVar18];
          }
          *puVar19 = uVar14;
          puVar19 = puVar19 + iVar5;
        } while (puVar19 <= puVar2);
      }
      uVar3 = local_94 * 2;
      local_98 = local_94;
      local_94 = uVar3;
    } while ((int)uVar3 <= (int)uVar1);
  }
  return;
}



// FUNCTION 14394b710 FUN_14394b710 body=49 status=ok
// SIG undefined FUN_14394b710(void)

void FUN_14394b710(void)

{
  longlong lVar1;
  undefined8 *in_R9;
  
  lVar1 = std::
          _List_alloc<0,std::_List_base_types<google::protobuf::Descriptor_const_*___ptr64,std::allocator<google::protobuf::Descriptor_const_*___ptr64>_>_>
          ::_Buynode0();
  if ((undefined8 *)(lVar1 + 0x10) != (undefined8 *)0x0) {
    *(undefined8 *)(lVar1 + 0x10) = *in_R9;
  }
  return;
}



// FUNCTION 14394b750 FUN_14394b750 body=188 status=ok
// SIG undefined FUN_14394b750(void)

longlong FUN_14394b750(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_14394c360(param_1,0,param_3,param_4,0xfffffffffffffffe);
  FUN_14394c2d0(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar1 = std::
          _List_alloc<0,std::_List_base_types<google::protobuf::Descriptor_const_*___ptr64,std::allocator<google::protobuf::Descriptor_const_*___ptr64>_>_>
          ::_Buynode0(param_1 + 0x40,0,0);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_14394c360(param_1 + 0x58,0);
  FUN_14394c2d0(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  uVar1 = std::
          _List_alloc<0,std::_List_base_types<google::protobuf::Descriptor_const_*___ptr64,std::allocator<google::protobuf::Descriptor_const_*___ptr64>_>_>
          ::_Buynode0(param_1 + 0x98,0,0);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_14394c2d0(param_1 + 0xb8);
  return param_1;
}



// FUNCTION 14394b810 FBinaryArchiveFormatter body=18 status=ok
// SIG undefined FBinaryArchiveFormatter(void)

undefined8 *
FBinaryArchiveFormatter::FBinaryArchiveFormatter(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = IlmThread::Task::vftable;
  return param_1;
}



// FUNCTION 14394b830 FUN_14394b830 body=87 status=ok
// SIG undefined FUN_14394b830(void)

longlong * FUN_14394b830(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  lVar1 = operator_new(0x18);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_14394c360(lVar1,1,param_3,param_4,uVar2);
    *(undefined4 *)(lVar1 + 0x10) = 0;
  }
  *param_1 = lVar1;
  return param_1;
}



// FUNCTION 14394b890 FUN_14394b890 body=261 status=ok
// SIG undefined FUN_14394b890(void)

void FUN_14394b890(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1437125f0(param_1 + 0x68);
  FUN_14394bc60(param_1);
  FUN_143712dd0(param_1 + 0x68);
  FUN_14394c300(param_1 + 0xb8);
  plVar1 = *(longlong **)(param_1 + 0x98);
  plVar2 = (longlong *)*plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong *)(*(longlong *)(param_1 + 0x98) + 8) = *(longlong *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar2 != *(longlong **)(param_1 + 0x98)) {
    do {
      plVar2 = (longlong *)*plVar2;
      FMemory::operator_delete();
    } while (plVar2 != (longlong *)*(longlong *)(param_1 + 0x98));
  }
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x98));
  FUN_14394c300(param_1 + 0x68);
  FUN_14394c500(param_1 + 0x58);
  plVar1 = *(longlong **)(param_1 + 0x40);
  plVar2 = (longlong *)*plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong *)(*(longlong *)(param_1 + 0x40) + 8) = *(longlong *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar2 != *(longlong **)(param_1 + 0x40)) {
    do {
      plVar2 = (longlong *)*plVar2;
      FMemory::operator_delete();
    } while (plVar2 != (longlong *)*(longlong *)(param_1 + 0x40));
  }
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x40));
  FUN_14394c300(param_1 + 0x10);
  FUN_14394c500(param_1);
  return;
}



// FUNCTION 14394b9a0 FUN_14394b9a0 body=11 status=ok
// SIG undefined FUN_14394b9a0(void)

void FUN_14394b9a0(undefined8 *param_1)

{
  *param_1 = IlmThread::Task::vftable;
  return;
}



// FUNCTION 14394b9b0 FUN_14394b9b0 body=60 status=ok
// SIG undefined FUN_14394b9b0(void)

void FUN_14394b9b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14394c790(lVar1);
    FUN_14394c500(lVar1);
    FMemory::operator_delete(lVar1);
    return;
  }
  return;
}



// FUNCTION 14394b9f0 FUN_14394b9f0 body=38 status=ok
// SIG undefined FUN_14394b9f0(void)

undefined8 * FUN_14394b9f0(undefined8 *param_1,byte param_2)

{
  *param_1 = IlmThread::Task::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete();
  }
  return param_1;
}



// FUNCTION 14394ba20 FUN_14394ba20 body=88 status=ok
// SIG undefined FUN_14394ba20(void)

undefined8 * FUN_14394ba20(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  *param_1 = IlmThread::ThreadPool::vftable;
  if (lVar1 != 0) {
    FUN_14394b890(lVar1);
    FMemory::operator_delete(lVar1);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14394ba80 FUN_14394ba80 body=47 status=ok
// SIG undefined FUN_14394ba80(void)

undefined8 FUN_14394ba80(undefined8 param_1,uint param_2)

{
  FUN_14394c910();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14394bab0 _Buynode0 body=89 status=ok
// SIG undefined _Buynode0(void)

void std::
     _List_alloc<0,std::_List_base_types<google::protobuf::Descriptor_const_*___ptr64,std::allocator<google::protobuf::Descriptor_const_*___ptr64>_>_>
     ::_Buynode0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)operator_new(0x18);
  if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  if (param_2 == (longlong *)0x0) {
    param_2 = plVar1;
    param_3 = plVar1;
  }
  *plVar1 = (longlong)param_2;
  if (plVar1 + 1 != (longlong *)0x0) {
    plVar1[1] = (longlong)param_3;
  }
  return;
}



// FUNCTION 14394bb10 FUN_14394bb10 body=30 status=ok
// SIG undefined FUN_14394bb10(void)

void FUN_14394bb10(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14394bdf0();
  FUN_14394bb30(uVar1,param_1);
  return;
}



// FUNCTION 14394bb30 FUN_14394bb30 body=294 status=ok
// SIG undefined FUN_14394bb30(void)

void FUN_14394bb30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_res10;
  undefined8 uVar6;
  longlong local_30;
  undefined1 local_28;
  longlong local_20;
  undefined1 local_18;
  
  uVar6 = 0xfffffffffffffffe;
  local_20 = *(longlong *)(param_1 + 8) + 0x68;
  local_res10 = param_2;
  FUN_1437125f0();
  local_18 = 1;
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0xa8) == 0) {
    (**(code **)(*param_2 + 8))(param_2);
    (**(code **)*param_2)(param_2,1);
  }
  else {
    local_30 = *(longlong *)(param_1 + 8) + 0x10;
    FUN_1437125f0();
    local_28 = 1;
    lVar3 = *(longlong *)(param_1 + 8);
    lVar4 = *(longlong *)(lVar3 + 0x40);
    lVar5 = FUN_14394b710(lVar3 + 0x40,lVar4,*(undefined8 *)(lVar4 + 8),&local_res10,uVar6);
    if (*(longlong *)(lVar3 + 0x48) == 0xaaaaaaaaaaaaaa9) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(longlong *)(lVar3 + 0x48) = *(longlong *)(lVar3 + 0x48) + 1;
    *(longlong *)(lVar4 + 8) = lVar5;
    **(longlong **)(lVar5 + 8) = lVar5;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + 0x50);
    *plVar1 = *plVar1 + 1;
    iVar2 = *(int *)(*(longlong *)param_2[1] + 0x10);
    *(int *)(*(longlong *)param_2[1] + 0x10) = iVar2 + 1;
    if (iVar2 == 0) {
      FUN_14394c790();
    }
    FUN_143925920(&local_30);
    FUN_14394c610(*(undefined8 *)(param_1 + 8));
  }
  FUN_143925920(&local_20);
  return;
}



// FUNCTION 14394bc60 FUN_14394bc60 body=387 status=ok
// SIG undefined FUN_14394bc60(void)

void FUN_14394bc60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong local_30;
  undefined1 local_28;
  longlong local_20;
  undefined1 local_18;
  
  uVar6 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0xb8;
  local_30 = lVar1;
  FUN_1437125f0(lVar1);
  local_28 = 1;
  *(undefined1 *)(param_1 + 0xb0) = 1;
  FUN_143925920(&local_30);
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    do {
      FUN_14394c610(param_1);
      FUN_14394c790(param_1 + 0x58);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulonglong *)(param_1 + 0xa8));
  }
  plVar5 = (longlong *)**(longlong **)(param_1 + 0x98);
  if (plVar5 != *(longlong **)(param_1 + 0x98)) {
    do {
      puVar2 = (undefined8 *)plVar5[2];
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1,param_3,param_4,uVar6);
      }
      plVar5 = (longlong *)*plVar5;
    } while (plVar5 != (longlong *)*(longlong *)(param_1 + 0x98));
  }
  local_20 = param_1 + 0x10;
  FUN_1437125f0();
  local_18 = 1;
  local_30 = lVar1;
  FUN_1437125f0(lVar1);
  local_28 = 1;
  plVar5 = *(longlong **)(param_1 + 0x98);
  plVar3 = (longlong *)*plVar5;
  *plVar5 = (longlong)plVar5;
  *(longlong *)(*(longlong *)(param_1 + 0x98) + 8) = *(longlong *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar3 != *(longlong **)(param_1 + 0x98)) {
    do {
      plVar3 = (longlong *)*plVar3;
      FMemory::operator_delete();
    } while (plVar3 != (longlong *)*(longlong *)(param_1 + 0x98));
  }
  plVar5 = *(longlong **)(param_1 + 0x40);
  plVar3 = (longlong *)*plVar5;
  *plVar5 = (longlong)plVar5;
  *(longlong *)(*(longlong *)(param_1 + 0x40) + 8) = *(longlong *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar3 != *(longlong **)(param_1 + 0x40)) {
    do {
      plVar3 = (longlong *)*plVar3;
      FMemory::operator_delete();
    } while (plVar3 != (longlong *)*(longlong *)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_143925920(&local_30);
  FUN_143925920(&local_20);
  return;
}



// FUNCTION 14394bdf0 FUN_14394bdf0 body=180 status=ok
// SIG undefined FUN_14394bdf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_14394bdf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b95de0) && (_Init_thread_header(&DAT_146b95de0), DAT_146b95de0 == -1))
  {
    _DAT_146b95dd0 = IlmThread::ThreadPool::vftable;
    lVar1 = operator_new(0xe8);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_14394b750(lVar1);
    }
    DAT_146b95dd8 = uVar2;
    FUN_14394c030(&DAT_146b95dd0,0,param_3,param_4,uVar3);
    atexit(FUN_143ec5de0);
    _Init_thread_footer(&DAT_146b95de0);
  }
  return &DAT_146b95dd0;
}



// FUNCTION 14394beb0 FUN_14394beb0 body=60 status=ok
// SIG undefined FUN_14394beb0(void)

undefined4 FUN_14394beb0(longlong param_1)

{
  undefined4 uVar1;
  longlong local_18;
  undefined1 local_10;
  
  local_18 = *(longlong *)(param_1 + 8) + 0x68;
  FUN_1437125f0();
  local_10 = 1;
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xa8);
  FUN_143925920(&local_18);
  return uVar1;
}



// FUNCTION 14394bef0 FUN_14394bef0 body=316 status=ok
// SIG undefined FUN_14394bef0(void)

void FUN_14394bef0(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_30;
  undefined1 local_28;
  longlong local_20;
  undefined1 local_18;
  
  FUN_14394c610(*(longlong *)(param_1 + 0x10) + 0x58);
  do {
    FUN_14394c790(*(undefined8 *)(param_1 + 0x10));
    lVar7 = *(longlong *)(param_1 + 0x10) + 0x10;
    local_30 = lVar7;
    FUN_1437125f0(lVar7);
    local_28 = 1;
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(lVar3 + 0x50) == 0) {
      local_20 = lVar3 + 0xb8;
      FUN_1437125f0();
      local_18 = 1;
      cVar2 = *(char *)(lVar3 + 0xb0);
      FUN_143925920(&local_20);
      if (cVar2 != '\0') {
        FUN_143925920(&local_30);
        return;
      }
    }
    else {
      plVar4 = *(longlong **)(**(longlong **)(lVar3 + 0x40) + 0x10);
      plVar5 = (longlong *)plVar4[1];
      plVar6 = (longlong *)**(longlong **)(lVar3 + 0x40);
      *(longlong *)plVar6[1] = *plVar6;
      *(longlong *)(*plVar6 + 8) = plVar6[1];
      *(longlong *)(lVar3 + 0x48) = *(longlong *)(lVar3 + 0x48) + -1;
      FMemory::operator_delete();
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
      *plVar6 = *plVar6 + -1;
      FUN_143712dd0(lVar7);
      local_28 = 0;
      (**(code **)(*plVar4 + 8))(plVar4);
      FUN_1437125f0(lVar7);
      local_28 = 1;
      (**(code **)*plVar4)(plVar4,1);
      piVar1 = (int *)(*plVar5 + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14394c610();
      }
    }
    FUN_143925920(&local_30);
  } while( true );
}



// FUNCTION 14394c030 FUN_14394c030 body=654 status=ok
// SIG undefined FUN_14394c030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14394c030(longlong param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined **local_88 [12];
  ulonglong local_28;
  
  local_90 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar8 = (ulonglong)param_2;
  if (param_2 < 0) {
    FUN_143e179e0(local_88,
                  "Attempt to set the number of threads in a thread pool to a negative value.");
    local_88[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db4d8);
  }
  local_a0 = *(longlong *)(param_1 + 8) + 0x68;
  FUN_1437125f0();
  local_98 = 1;
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 8) + 0xa8);
  if (uVar2 < uVar8) {
    while (uVar2 < uVar8) {
      puVar6 = (undefined8 *)operator_new(0x18);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 8);
        local_a8 = puVar6;
        FUN_14394c900(puVar6);
        *puVar6 = IlmThread::_anon_9D79AC29::WorkerThread::vftable;
        puVar6[2] = uVar3;
        FUN_14394c990(puVar6);
      }
      lVar4 = *(longlong *)(param_1 + 8);
      lVar5 = *(longlong *)(lVar4 + 0x98);
      local_a8 = puVar6;
      lVar7 = FUN_14394b710(lVar4 + 0x98,lVar5,*(undefined8 *)(lVar5 + 8),&local_a8);
      if (*(longlong *)(lVar4 + 0xa0) == 0xaaaaaaaaaaaaaa9) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(longlong *)(lVar4 + 0xa0) = *(longlong *)(lVar4 + 0xa0) + 1;
      *(longlong *)(lVar5 + 8) = lVar7;
      **(longlong **)(lVar7 + 8) = lVar7;
      plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + 0xa8);
      *plVar1 = *plVar1 + 1;
      uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 8) + 0xa8);
    }
  }
  else if (uVar8 < uVar2) {
    FUN_14394bc60();
    uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 8) + 0xa8);
    while (uVar2 < uVar8) {
      puVar6 = (undefined8 *)operator_new(0x18);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 8);
        local_a8 = puVar6;
        FUN_14394c900(puVar6);
        *puVar6 = IlmThread::_anon_9D79AC29::WorkerThread::vftable;
        puVar6[2] = uVar3;
        FUN_14394c990(puVar6);
      }
      lVar4 = *(longlong *)(param_1 + 8);
      lVar5 = *(longlong *)(lVar4 + 0x98);
      local_a8 = puVar6;
      lVar7 = FUN_14394b710(lVar4 + 0x98,lVar5,*(undefined8 *)(lVar5 + 8),&local_a8);
      if (*(longlong *)(lVar4 + 0xa0) == 0xaaaaaaaaaaaaaa9) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(longlong *)(lVar4 + 0xa0) = *(longlong *)(lVar4 + 0xa0) + 1;
      *(longlong *)(lVar5 + 8) = lVar7;
      **(longlong **)(lVar7 + 8) = lVar7;
      plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + 0xa8);
      *plVar1 = *plVar1 + 1;
      uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 8) + 0xa8);
    }
  }
  FUN_143925920(&local_a0);
  return;
}



// FUNCTION 14394c2d0 FUN_14394c2d0 body=38 status=ok
// SIG undefined FUN_14394c2d0(void)

undefined8 * FUN_14394c2d0(undefined8 *param_1)

{
  *param_1 = IlmThread::Mutex::vftable;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return param_1;
}



// FUNCTION 14394c300 FUN_14394c300 body=21 status=ok
// SIG undefined FUN_14394c300(void)

void FUN_14394c300(undefined8 *param_1)

{
  *param_1 = IlmThread::Mutex::vftable;
                    /* WARNING: Could not recover jumptable at 0x00014394c30e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 14394c320 FUN_14394c320 body=62 status=ok
// SIG undefined FUN_14394c320(void)

undefined8 * FUN_14394c320(undefined8 *param_1,uint param_2)

{
  *param_1 = IlmThread::Mutex::vftable;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14394c360 FUN_14394c360 body=402 status=ok
// SIG undefined FUN_14394c360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14394c360(undefined8 *param_1,LONG param_2)

{
  HANDLE pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined *local_198 [3];
  undefined **local_180 [13];
  undefined8 local_118;
  undefined4 local_110;
  code *local_100;
  undefined8 local_98 [3];
  ulonglong local_80;
  undefined **local_78 [13];
  ulonglong local_10;
  
  local_1a0 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_1a8 = 0;
  *param_1 = IlmThread::Semaphore::vftable;
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,param_2,0x7fffffff,(LPCSTR)0x0);
  param_1[1] = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    local_198[0] = &DAT_145af0c78;
    local_198[2] = &DAT_145af0c80;
    local_100 = _vftable__exref;
    local_1a8 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_198,
               (basic_streambuf<char,std::char_traits<char>_> *)local_180);
    *(undefined ***)((longlong)local_198 + (longlong)*(int *)(local_198[0] + 4)) =
         std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)local_198 + (longlong)*(int *)(local_198[0] + 4) + -4) =
         *(int *)(local_198[0] + 4) + -0x98;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)local_180);
    local_180[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_118 = 0;
    local_110 = 0;
    uVar2 = FUN_14394c560(local_98);
    uVar3 = std::operator<<<std::char_traits<char>_>(local_198 + 2,"Could not create semaphore (");
    uVar2 = FUN_143930d70(uVar3,uVar2);
    std::operator<<<std::char_traits<char>_>(uVar2,&DAT_145ca6910);
    if (0xf < local_80) {
      std::_Wrap_alloc<std::allocator<char>_>::deallocate(local_98,local_98[0],local_80 + 1);
    }
    FUN_143e175c0(local_78,local_198);
    local_78[0] = Iex::LogicExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db730);
  }
  return param_1;
}



// FUNCTION 14394c500 FUN_14394c500 body=21 status=ok
// SIG undefined FUN_14394c500(void)

void FUN_14394c500(undefined8 *param_1)

{
  *param_1 = IlmThread::Semaphore::vftable;
                    /* WARNING: Could not recover jumptable at 0x00014394c50e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle((HANDLE)param_1[1]);
  return;
}



// FUNCTION 14394c520 FUN_14394c520 body=62 status=ok
// SIG undefined FUN_14394c520(void)

undefined8 * FUN_14394c520(undefined8 *param_1,uint param_2)

{
  *param_1 = IlmThread::Semaphore::vftable;
  CloseHandle((HANDLE)param_1[1]);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14394c560 FUN_14394c560 body=164 status=ok
// SIG undefined FUN_14394c560(void)

undefined1 * FUN_14394c560(undefined1 *param_1)

{
  DWORD DVar1;
  longlong lVar2;
  char *local_res10;
  
  lVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  DVar1 = GetLastError();
  DVar1 = FormatMessageA(0x1300,(LPCVOID)0x0,DVar1,0x400,(LPSTR)&local_res10,0,(va_list *)0x0);
  if (DVar1 != 0) {
    if (*local_res10 != '\0') {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (local_res10[lVar2] != '\0');
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1,local_res10,lVar2);
    LocalFree(local_res10);
  }
  return param_1;
}



// FUNCTION 14394c610 FUN_14394c610 body=370 status=ok
// SIG undefined FUN_14394c610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14394c610(longlong param_1)

{
  BOOL BVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined *local_198 [3];
  undefined **local_180 [13];
  undefined8 local_118;
  undefined4 local_110;
  code *local_100;
  undefined8 local_98 [3];
  ulonglong local_80;
  undefined **local_78 [13];
  ulonglong local_10;
  
  local_1a0 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_1a8 = 0;
  BVar1 = ReleaseSemaphore(*(HANDLE *)(param_1 + 8),1,(LPLONG)0x0);
  if (BVar1 == 0) {
    local_198[0] = &DAT_145af0c78;
    local_198[2] = &DAT_145af0c80;
    local_100 = _vftable__exref;
    local_1a8 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_198,
               (basic_streambuf<char,std::char_traits<char>_> *)local_180);
    *(undefined ***)((longlong)local_198 + (longlong)*(int *)(local_198[0] + 4)) =
         std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)local_198 + (longlong)*(int *)(local_198[0] + 4) + -4) =
         *(int *)(local_198[0] + 4) + -0x98;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)local_180);
    local_180[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_118 = 0;
    local_110 = 0;
    uVar2 = FUN_14394c560(local_98);
    uVar3 = std::operator<<<std::char_traits<char>_>(local_198 + 2,"Could not post on semaphore (");
    uVar2 = FUN_143930d70(uVar3,uVar2);
    std::operator<<<std::char_traits<char>_>(uVar2,&DAT_145ca6910);
    if (0xf < local_80) {
      std::_Wrap_alloc<std::allocator<char>_>::deallocate(local_98,local_98[0],local_80 + 1);
    }
    FUN_143e175c0(local_78,local_198);
    local_78[0] = Iex::LogicExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db730);
  }
  return;
}



// FUNCTION 14394c790 FUN_14394c790 body=367 status=ok
// SIG undefined FUN_14394c790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14394c790(longlong param_1)

{
  DWORD DVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined *local_198 [3];
  undefined **local_180 [13];
  undefined8 local_118;
  undefined4 local_110;
  code *local_100;
  undefined8 local_98 [3];
  ulonglong local_80;
  undefined **local_78 [13];
  ulonglong local_10;
  
  local_1a0 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_1a8 = 0;
  DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
  if (DVar1 != 0) {
    local_198[0] = &DAT_145af0c78;
    local_198[2] = &DAT_145af0c80;
    local_100 = _vftable__exref;
    local_1a8 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_198,
               (basic_streambuf<char,std::char_traits<char>_> *)local_180);
    *(undefined ***)((longlong)local_198 + (longlong)*(int *)(local_198[0] + 4)) =
         std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)local_198 + (longlong)*(int *)(local_198[0] + 4) + -4) =
         *(int *)(local_198[0] + 4) + -0x98;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)local_180);
    local_180[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_118 = 0;
    local_110 = 0;
    uVar2 = FUN_14394c560(local_98);
    uVar3 = std::operator<<<std::char_traits<char>_>(local_198 + 2,"Could not wait on semaphore (");
    uVar2 = FUN_143930d70(uVar3,uVar2);
    std::operator<<<std::char_traits<char>_>(uVar2,&DAT_145ca6910);
    if (0xf < local_80) {
      std::_Wrap_alloc<std::allocator<char>_>::deallocate(local_98,local_98[0],local_80 + 1);
    }
    FUN_143e175c0(local_78,local_198);
    local_78[0] = Iex::LogicExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db730);
  }
  return;
}



// FUNCTION 14394c900 FUN_14394c900 body=14 status=ok
// SIG undefined FUN_14394c900(void)

undefined8 * FUN_14394c900(undefined8 *param_1)

{
  *param_1 = IlmThread::Thread::vftable;
  return param_1;
}



// FUNCTION 14394c910 FUN_14394c910 body=48 status=ok
// SIG undefined FUN_14394c910(void)

void FUN_14394c910(undefined8 *param_1)

{
  *param_1 = IlmThread::Thread::vftable;
  WaitForSingleObject((HANDLE)param_1[1],0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00014394c939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle((HANDLE)param_1[1]);
  return;
}



// FUNCTION 14394c940 FUN_14394c940 body=75 status=ok
// SIG undefined FUN_14394c940(void)

undefined8 * FUN_14394c940(undefined8 *param_1,uint param_2)

{
  *param_1 = IlmThread::Thread::vftable;
  WaitForSingleObject((HANDLE)param_1[1],0xffffffff);
  CloseHandle((HANDLE)param_1[1]);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14394c990 FUN_14394c990 body=179 status=ok
// SIG undefined FUN_14394c990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14394c990(void *param_1)

{
  undefined1 auStackY_78 [32];
  uint local_48 [2];
  undefined8 local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  uintptr_t local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_40 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStackY_78;
  local_28 = _beginthreadex((void *)0x0,0,FUN_14394ca50,param_1,0,local_48);
  *(uintptr_t *)((longlong)param_1 + 8) = local_28;
  if (local_28 == 0) {
    local_20 = 0xf;
    local_38 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_38,"Cannot create new thread (%T).",0x1e);
    FUN_143e19150(&local_38);
    if (0xf < local_20) {
      std::_Wrap_alloc<std::allocator<char>_>::deallocate
                (&local_38,CONCAT71(uStack_37,local_38),local_20 + 1);
    }
  }
  return;
}



// FUNCTION 14394ca50 FUN_14394ca50 body=25 status=ok
// SIG undefined FUN_14394ca50(void)

undefined8 FUN_14394ca50(longlong *param_1)

{
  (**(code **)(*param_1 + 8))();
  _endthreadex(0);
  return 0;
}



// FUNCTION 14394ca70 uncompress body=194 status=ok
// SIG undefined uncompress(void)

ulonglong uncompress(undefined8 param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = *param_2;
  local_38 = 0;
  local_30 = 0;
  local_68 = param_3;
  local_60 = param_4;
  local_58 = param_1;
  uVar2 = inflateInit_(&local_68,"1.2.8",0x58);
  if ((int)uVar2 == 0) {
    uVar1 = FUN_14369eec0(&local_68,4);
    if (uVar1 != 1) {
      inflateEnd(&local_68);
      if ((uVar1 != 2) && ((uVar1 != 0xfffffffb || (local_60 != 0)))) {
        return (ulonglong)uVar1;
      }
      return 0xfffffffd;
    }
    *param_2 = local_4c;
    uVar2 = inflateEnd(&local_68);
  }
  return uVar2;
}



// FUNCTION 14394cb32 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cb32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateFX();
  return;
}



// FUNCTION 14394cb38 DelayLoad_vorbis_info_init body=12 status=ok
// SIG undefined DelayLoad_vorbis_info_init(void)

void DelayLoad_vorbis_info_init(void)

{
  FUN_14394cb4a();
  return;
}



// FUNCTION 14394cb44 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vorbis_info_init();
  return;
}



// FUNCTION 14394cb4a FUN_14394cb4a body=121 status=ok
// SIG undefined FUN_14394cb4a(void)

void FUN_14394cb4a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de148);
                    /* WARNING: Could not recover jumptable at 0x00014394cbc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14394cbc3 DelayLoad_vorbis_comment_init body=12 status=ok
// SIG undefined DelayLoad_vorbis_comment_init(void)

void DelayLoad_vorbis_comment_init(void)

{
  FUN_14394cb4a();
  return;
}



// FUNCTION 14394cbcf _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cbcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vorbis_comment_init();
  return;
}



// FUNCTION 14394cbd5 DelayLoad_vorbis_comment_clear body=12 status=ok
// SIG undefined DelayLoad_vorbis_comment_clear(void)

void DelayLoad_vorbis_comment_clear(void)

{
  FUN_14394cb4a();
  return;
}



// FUNCTION 14394cbe1 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cbe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vorbis_comment_clear();
  return;
}



// FUNCTION 14394cbe7 DelayLoad_vorbis_block_init body=12 status=ok
// SIG undefined DelayLoad_vorbis_block_init(void)

void DelayLoad_vorbis_block_init(void)

{
  FUN_14394cb4a();
  return;
}



// FUNCTION 14394cbf3 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cbf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vorbis_block_init();
  return;
}



// FUNCTION 14394cbf9 DelayLoad_vorbis_synthesis_headerin body=12 status=ok
// SIG undefined DelayLoad_vorbis_synthesis_headerin(void)

void DelayLoad_vorbis_synthesis_headerin(void)

{
  FUN_14394cb4a();
  return;
}



// FUNCTION 14394cc05 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cc05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vorbis_synthesis_headerin();
  return;
}



// FUNCTION 14394cc0b DelayLoad_vorbis_synthesis_init body=12 status=ok
// SIG undefined DelayLoad_vorbis_synthesis_init(void)

void DelayLoad_vorbis_synthesis_init(void)

{
  FUN_14394cb4a();
  return;
}



// FUNCTION 14394cc17 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cc17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vorbis_synthesis_init();
  return;
}



// FUNCTION 14394cc1d DelayLoad_vorbis_synthesis body=12 status=ok
// SIG undefined DelayLoad_vorbis_synthesis(void)

void DelayLoad_vorbis_synthesis(void)

{
  FUN_14394cb4a();
  return;
}



// FUNCTION 14394cc29 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cc29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vorbis_synthesis();
  return;
}



// FUNCTION 14394cc2f DelayLoad_vorbis_synthesis_blockin body=12 status=ok
// SIG undefined DelayLoad_vorbis_synthesis_blockin(void)

void DelayLoad_vorbis_synthesis_blockin(void)

{
  FUN_14394cb4a();
  return;
}



// FUNCTION 14394cc3b _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cc3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vorbis_synthesis_blockin();
  return;
}



// FUNCTION 14394cc41 DelayLoad_vorbis_synthesis_pcmout body=12 status=ok
// SIG undefined DelayLoad_vorbis_synthesis_pcmout(void)

void DelayLoad_vorbis_synthesis_pcmout(void)

{
  FUN_14394cb4a();
  return;
}



// FUNCTION 14394cc4d _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cc4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vorbis_synthesis_pcmout();
  return;
}



// FUNCTION 14394cc53 DelayLoad_vorbis_synthesis_read body=12 status=ok
// SIG undefined DelayLoad_vorbis_synthesis_read(void)

void DelayLoad_vorbis_synthesis_read(void)

{
  FUN_14394cb4a();
  return;
}



// FUNCTION 14394cc5f _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cc5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  vorbis_synthesis_read();
  return;
}



// FUNCTION 14394cc65 DelayLoad_ov_clear body=12 status=ok
// SIG undefined DelayLoad_ov_clear(void)

void DelayLoad_ov_clear(void)

{
  FUN_14394cc77();
  return;
}



// FUNCTION 14394cc71 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cc71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ov_clear();
  return;
}



// FUNCTION 14394cc77 FUN_14394cc77 body=121 status=ok
// SIG undefined FUN_14394cc77(void)

void FUN_14394cc77(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de168);
                    /* WARNING: Could not recover jumptable at 0x00014394ccee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14394ccf0 DelayLoad_ov_open_callbacks body=12 status=ok
// SIG undefined DelayLoad_ov_open_callbacks(void)

void DelayLoad_ov_open_callbacks(void)

{
  FUN_14394cc77();
  return;
}



// FUNCTION 14394ccfc _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394ccfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ov_open_callbacks();
  return;
}



// FUNCTION 14394cd02 DelayLoad_ov_pcm_total body=12 status=ok
// SIG undefined DelayLoad_ov_pcm_total(void)

void DelayLoad_ov_pcm_total(void)

{
  FUN_14394cc77();
  return;
}



// FUNCTION 14394cd0e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cd0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ov_pcm_total();
  return;
}



// FUNCTION 14394cd14 DelayLoad_ov_time_total body=12 status=ok
// SIG undefined DelayLoad_ov_time_total(void)

void DelayLoad_ov_time_total(void)

{
  FUN_14394cc77();
  return;
}



// FUNCTION 14394cd20 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ov_time_total();
  return;
}



// FUNCTION 14394cd26 DelayLoad_ov_pcm_seek_page body=12 status=ok
// SIG undefined DelayLoad_ov_pcm_seek_page(void)

void DelayLoad_ov_pcm_seek_page(void)

{
  FUN_14394cc77();
  return;
}



// FUNCTION 14394cd32 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cd32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ov_pcm_seek_page();
  return;
}



// FUNCTION 14394cd38 DelayLoad_ov_time_seek body=12 status=ok
// SIG undefined DelayLoad_ov_time_seek(void)

void DelayLoad_ov_time_seek(void)

{
  FUN_14394cc77();
  return;
}



// FUNCTION 14394cd44 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ov_time_seek();
  return;
}



// FUNCTION 14394cd4a DelayLoad_ov_info body=12 status=ok
// SIG undefined DelayLoad_ov_info(void)

void DelayLoad_ov_info(void)

{
  FUN_14394cc77();
  return;
}



// FUNCTION 14394cd56 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cd56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ov_info();
  return;
}



// FUNCTION 14394cd5c DelayLoad_ov_read body=12 status=ok
// SIG undefined DelayLoad_ov_read(void)

void DelayLoad_ov_read(void)

{
  FUN_14394cc77();
  return;
}



// FUNCTION 14394cd68 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ov_read();
  return;
}



// FUNCTION 14394cd6e DelayLoad_ov_halfrate body=12 status=ok
// SIG undefined DelayLoad_ov_halfrate(void)

void DelayLoad_ov_halfrate(void)

{
  FUN_14394cc77();
  return;
}



// FUNCTION 14394cd7a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014394cd7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ov_halfrate();
  return;
}



// FUNCTION 14394cd80 PxInitVehicleSDK body=975 status=ok
// SIG undefined PxInitVehicleSDK(void)

undefined8 PxInitVehicleSDK(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  physx::shdfnd::Foundation::incRefCount();
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  physx::setVehicleToleranceScale(uVar1);
  physx::setVehicleDefaults();
  physx::setSerializationRegistryPtr(param_2);
  if (param_2 != (longlong *)0x0) {
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    puVar3 = (undefined8 *)
             (**(code **)(*plVar2 + 8))
                       (plVar2,0x10,"PxRepXSerializer",
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleSDK.cpp"
                        ,0x41);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      plVar2 = (longlong *)PxGetFoundation();
      uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
      puVar3[1] = uVar1;
      *puVar3 = &PTR__scalar_deleting_destructor__145ca6e50;
    }
    (**(code **)(*param_2 + 0x20))(param_2,0x201,puVar3);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    puVar3 = (undefined8 *)
             (**(code **)(*plVar2 + 8))
                       (plVar2,0x10,"PxRepXSerializer",
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleSDK.cpp"
                        ,0x42);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      plVar2 = (longlong *)PxGetFoundation();
      uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
      puVar3[1] = uVar1;
      *puVar3 = &PTR__scalar_deleting_destructor__145ca6e88;
    }
    (**(code **)(*param_2 + 0x20))(param_2,0x203,puVar3);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    puVar3 = (undefined8 *)
             (**(code **)(*plVar2 + 8))
                       (plVar2,0x10,"PxRepXSerializer",
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleSDK.cpp"
                        ,0x43);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      plVar2 = (longlong *)PxGetFoundation();
      uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
      puVar3[1] = uVar1;
      *puVar3 = &PTR__scalar_deleting_destructor__145ca6ec0;
    }
    (**(code **)(*param_2 + 0x20))(param_2,0x202,puVar3);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    puVar3 = (undefined8 *)
             (**(code **)(*plVar2 + 8))
                       (plVar2,0x10,"PxRepXSerializer",
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleSDK.cpp"
                        ,0x44);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      plVar2 = (longlong *)PxGetFoundation();
      uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
      puVar3[1] = uVar1;
      *puVar3 = &PTR__scalar_deleting_destructor__145ca6ef8;
    }
    (**(code **)(*param_2 + 0x20))(param_2,0x200,puVar3);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    puVar3 = (undefined8 *)
             (**(code **)(*plVar2 + 8))
                       (plVar2,0x10,"PxSerializerDefaultAdapter",
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleSDK.cpp"
                        ,0x46);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *puVar3 = &PTR_GetBoundProgramCounterForTimerManager_145ca6f30;
      puVar3[1] = "PxVehicleDrive4W";
    }
    (**(code **)*param_2)(param_2,0x201,puVar3);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    puVar3 = (undefined8 *)
             (**(code **)(*plVar2 + 8))
                       (plVar2,0x10,"PxSerializerDefaultAdapter",
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleSDK.cpp"
                        ,0x47);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *puVar3 = &PTR_GetBoundProgramCounterForTimerManager_145ca6f78;
      puVar3[1] = "PxVehicleDriveTank";
    }
    (**(code **)*param_2)(param_2,0x203,puVar3);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    puVar3 = (undefined8 *)
             (**(code **)(*plVar2 + 8))
                       (plVar2,0x10,"PxSerializerDefaultAdapter",
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleSDK.cpp"
                        ,0x48);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *puVar3 = &PTR_GetBoundProgramCounterForTimerManager_145ca6fc0;
      puVar3[1] = "PxVehicleNoDrive";
    }
    (**(code **)*param_2)(param_2,0x200,puVar3);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    puVar3 = (undefined8 *)
             (**(code **)(*plVar2 + 8))
                       (plVar2,0x10,"PxSerializerDefaultAdapter",
                        "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleSDK.cpp"
                        ,0x49);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *puVar3 = &PTR_GetBoundProgramCounterForTimerManager_145ca7008;
      puVar3[1] = "PxVehicleDriveNW";
    }
    (**(code **)*param_2)(param_2,0x202,puVar3);
    (**(code **)(*param_2 + 0x10))(param_2,physx::PxVehicleDrive4W::getBinaryMetaData);
    (**(code **)(*param_2 + 0x10))(param_2,physx::PxVehicleDriveTank::getBinaryMetaData);
    (**(code **)(*param_2 + 0x10))(param_2,physx::PxVehicleNoDrive::getBinaryMetaData);
    (**(code **)(*param_2 + 0x10))(param_2,physx::PxVehicleDriveNW::getBinaryMetaData);
  }
  return 1;
}



// FUNCTION 14394d160 PxCloseVehicleSDK body=567 status=ok
// SIG undefined PxCloseVehicleSDK(void)

void PxCloseVehicleSDK(longlong *param_1)

{
  longlong *plVar1;
  Foundation *this;
  longlong *plVar2;
  longlong lVar3;
  
  physx::shdfnd::Foundation::decRefCount();
  physx::resetVehicleToleranceScale();
  physx::setVehicleDefaults();
  plVar1 = (longlong *)physx::resetSerializationRegistryPtr();
  if (param_1 != plVar1) {
    this = physx::shdfnd::Foundation::getInstance();
    physx::shdfnd::Foundation::error
              (this,4,
               "T:\\UE4-CODE1-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\PhysX3\\PhysX_3.4\\Source\\PhysXVehicle\\src\\PxVehicleSDK.cpp"
               ,0x5c,
               "PxCloseVehicleSDK called with different PxSerializationRegistry instance than PxInitVehicleSDK."
              );
    return;
  }
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x201);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,0);
      plVar2 = (longlong *)PxGetFoundation();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
      (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x203);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,0);
      plVar2 = (longlong *)PxGetFoundation();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
      (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x200);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,0);
      plVar2 = (longlong *)PxGetFoundation();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
      (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x202);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,0);
      plVar2 = (longlong *)PxGetFoundation();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
      (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
    }
    lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x201);
    if (lVar3 != 0) {
      plVar1 = (longlong *)PxGetFoundation();
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
      (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
    }
    lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x203);
    if (lVar3 != 0) {
      plVar1 = (longlong *)PxGetFoundation();
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
      (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
    }
    lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x200);
    if (lVar3 != 0) {
      plVar1 = (longlong *)PxGetFoundation();
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
      (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
    }
    lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x202);
    if (lVar3 != 0) {
      plVar1 = (longlong *)PxGetFoundation();
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00014394d38d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 14394d3a0 operator()<548,physx::PxVehicleEngineData,unsigned_int,float> body=137 status=ok
// SIG undefined operator()<548,physx::PxVehicleEngineData,unsigned_int,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleEngineData>_>::
     operator()<548,physx::PxVehicleEngineData,unsigned_int,float>
               (longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 local_res18 [16];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined8 *local_18;
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  local_28[0] = 0;
  local_24 = 0;
  local_20 = param_3;
  local_18 = param_2;
  Sn::RepXVisitorWriterBase<physx::PxVehicleEngineData>::
  PxFixedSizeLookupTableProperty<physx::Vd::PxPvdFixedSizeLookupTablePropertyAccessor<548,physx::PxVehicleEngineData,unsigned_int,float>,physx::PxUnknownClassInfo_const_>
            (param_1,local_res18,local_28,local_res18);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394d430 operator()<574,physx::PxVehicleDifferential4WData,enum_physx::PxVehicleDifferential4WData::Enum,enum_physx::PxVehicleDifferential4WData::Enum> body=156 status=ok
// SIG undefined operator()<574,physx::PxVehicleDifferential4WData,enum_physx::PxVehicleDifferential4WData::Enum,enum_physx::PxVehicleDifferential4WData::Enum>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDifferential4WData>_>::
     operator()<574,physx::PxVehicleDifferential4WData,enum_physx::PxVehicleDifferential4WData::Enum,enum_physx::PxVehicleDifferential4WData::Enum>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *local_res8 [4];
  
  pcVar3 = (code *)param_2[3];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_res8[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) == 0) {
      pcVar6 = "bad__repx__name";
    }
    else {
      pcVar6 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
      ;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar6,local_res8);
    if (((cVar4 != '\0') && (local_res8[0] != (char *)0x0)) && (*local_res8[0] != '\0')) {
      uVar5 = Sn::findEnumByName(local_res8[0],&PTR_s_eDIFF_TYPE_LS_4WD_14682e230);
      (*pcVar3)(param_1[6],uVar5);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394d4d0 operator()<574,physx::PxVehicleDifferential4WData,enum_physx::PxVehicleDifferential4WData::Enum,enum_physx::PxVehicleDifferential4WData::Enum> body=228 status=ok
// SIG undefined operator()<574,physx::PxVehicleDifferential4WData,enum_physx::PxVehicleDifferential4WData::Enum,enum_physx::PxVehicleDifferential4WData::Enum>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDifferential4WData>_>::
     operator()<574,physx::PxVehicleDifferential4WData,enum_physx::PxVehicleDifferential4WData::Enum,enum_physx::PxVehicleDifferential4WData::Enum>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  undefined **ppuVar7;
  char *pcVar8;
  
  pcVar5 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  iVar6 = (*pcVar5)(param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar8 = "bad__repx__name";
  }
  else {
    pcVar8 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  ppuVar7 = &PTR_s_eDIFF_TYPE_LS_4WD_14682e230;
  plVar3 = (longlong *)param_1[1];
  puVar4 = PTR_s_eDIFF_TYPE_LS_4WD_14682e230;
  while (puVar4 != (undefined *)0x0) {
    if (*(int *)(ppuVar7 + 1) == iVar6) {
      (**(code **)(*plVar3 + 0x10))(plVar3,pcVar8,*ppuVar7);
    }
    ppuVar7 = ppuVar7 + 2;
    puVar4 = *ppuVar7;
  }
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394d5c0 operator()<587,physx::PxVehicleClutchData,enum_physx::PxVehicleClutchAccuracyMode::Enum,enum_physx::PxVehicleClutchAccuracyMode::Enum> body=156 status=ok
// SIG undefined operator()<587,physx::PxVehicleClutchData,enum_physx::PxVehicleClutchAccuracyMode::Enum,enum_physx::PxVehicleClutchAccuracyMode::Enum>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleClutchData>_>::
     operator()<587,physx::PxVehicleClutchData,enum_physx::PxVehicleClutchAccuracyMode::Enum,enum_physx::PxVehicleClutchAccuracyMode::Enum>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *local_res8 [4];
  
  pcVar3 = (code *)param_2[3];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_res8[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) == 0) {
      pcVar6 = "bad__repx__name";
    }
    else {
      pcVar6 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
      ;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar6,local_res8);
    if (((cVar4 != '\0') && (local_res8[0] != (char *)0x0)) && (*local_res8[0] != '\0')) {
      uVar5 = Sn::findEnumByName(local_res8[0],&PTR_s_eESTIMATE_14682cfc0);
      (*pcVar3)(param_1[6],uVar5);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394d660 operator()<587,physx::PxVehicleClutchData,enum_physx::PxVehicleClutchAccuracyMode::Enum,enum_physx::PxVehicleClutchAccuracyMode::Enum> body=228 status=ok
// SIG undefined operator()<587,physx::PxVehicleClutchData,enum_physx::PxVehicleClutchAccuracyMode::Enum,enum_physx::PxVehicleClutchAccuracyMode::Enum>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleClutchData>_>::
     operator()<587,physx::PxVehicleClutchData,enum_physx::PxVehicleClutchAccuracyMode::Enum,enum_physx::PxVehicleClutchAccuracyMode::Enum>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  undefined **ppuVar7;
  char *pcVar8;
  
  pcVar5 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  iVar6 = (*pcVar5)(param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar8 = "bad__repx__name";
  }
  else {
    pcVar8 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  ppuVar7 = &PTR_s_eESTIMATE_14682cfc0;
  plVar3 = (longlong *)param_1[1];
  puVar4 = PTR_s_eESTIMATE_14682cfc0;
  while (puVar4 != (undefined *)0x0) {
    if (*(int *)(ppuVar7 + 1) == iVar6) {
      (**(code **)(*plVar3 + 0x10))(plVar3,pcVar8,*ppuVar7);
    }
    ppuVar7 = ppuVar7 + 2;
    puVar4 = *ppuVar7;
  }
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394d750 operator()<645,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleSuspensionData> body=143 status=ok
// SIG undefined operator()<645,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleSuspensionData>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>::
     operator()<645,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleSuspensionData>
               (undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 local_res18 [16];
  undefined1 local_168 [4];
  undefined4 local_164;
  undefined4 local_160;
  undefined8 *local_158;
  undefined1 local_150 [328];
  
  ::_guard_xfg_dispatch_icall_nop(local_150,0,0x148);
  PxVehicleSuspensionDataGeneratedInfo::PxVehicleSuspensionDataGeneratedInfo(local_150);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  local_168[0] = 0;
  local_164 = 0;
  local_160 = param_3;
  local_158 = param_2;
  Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<645,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleSuspensionData>,physx::PxVehicleSuspensionDataGeneratedInfo_const_>
            (param_1,local_res18,local_168,local_150);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394d7e0 operator()<646,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleWheelData> body=143 status=ok
// SIG undefined operator()<646,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleWheelData>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>::
     operator()<646,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleWheelData>
               (undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 local_res18 [16];
  undefined1 local_178 [4];
  undefined4 local_174;
  undefined4 local_170;
  undefined8 *local_168;
  undefined1 local_160 [344];
  
  ::_guard_xfg_dispatch_icall_nop(local_160,0,0x150);
  PxVehicleWheelDataGeneratedInfo::PxVehicleWheelDataGeneratedInfo(local_160);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  local_178[0] = 0;
  local_174 = 0;
  local_170 = param_3;
  local_168 = param_2;
  Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<646,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleWheelData>,physx::PxVehicleWheelDataGeneratedInfo_const_>
            (param_1,local_res18,local_178,local_160);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394d870 operator()<647,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleTireData> body=143 status=ok
// SIG undefined operator()<647,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleTireData>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>::
     operator()<647,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleTireData>
               (undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 local_res18 [16];
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 local_130;
  undefined8 *local_128;
  undefined1 local_120 [280];
  
  ::_guard_xfg_dispatch_icall_nop(local_120,0,0x110);
  PxVehicleTireDataGeneratedInfo::PxVehicleTireDataGeneratedInfo(local_120);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  local_138[0] = 0;
  local_134 = 0;
  local_130 = param_3;
  local_128 = param_2;
  Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<647,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleTireData>,physx::PxVehicleTireDataGeneratedInfo_const_>
            (param_1,local_res18,local_138,local_120);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394d900 operator()<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3> body=137 status=ok
// SIG undefined operator()<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
     operator()<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>
               (longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 local_res18 [16];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined8 *local_18;
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  local_28[0] = 0;
  local_24 = 0;
  local_20 = param_3;
  local_18 = param_2;
  Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<648,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVec3>,physx::PxUnknownClassInfo_const_>
            (param_1,local_res18,local_28,local_res18);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394d990 operator()<652,physx::PxVehicleWheelsSimData,unsigned_int_const_,int> body=270 status=ok
// SIG undefined operator()<652,physx::PxVehicleWheelsSimData,unsigned_int_const_,int>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>::
     operator()<652,physx::PxVehicleWheelsSimData,unsigned_int_const_,int>
               (longlong *param_1,undefined8 *param_2,ulong param_3)

{
  ulong *puVar1;
  longlong lVar2;
  char cVar3;
  ulong uVar4;
  char *_Str;
  int iVar5;
  char *local_res8;
  ulong local_res18 [4];
  
  local_res18[0] = param_3;
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  lVar2 = param_1[1];
  local_res18[0] = *(ulong *)(*param_1 + 0x10);
  if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (ulong *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 4);
    if (puVar1 != (ulong *)0x0) {
      *puVar1 = local_res18[0];
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  }
  else {
    shdfnd::Array<unsigned_int,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_int>_>::
    growAndPushBack(lVar2,local_res18);
  }
  cVar3 = Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar3 != '\0') {
    iVar5 = 0;
    cVar3 = Sn::RepXVisitorReaderBase<physx::PxArticulation>::gotoFirstChild(param_1);
    uVar4 = local_res18[0];
    while (cVar3 != '\0') {
      _Str = (char *)(**(code **)(*(longlong *)param_1[5] + 0x40))();
      if ((_Str == (char *)0x0) || (*_Str == '\0')) {
        *(undefined1 *)param_1[10] = 1;
      }
      else {
        local_res8 = _Str;
        uVar4 = strtoul(_Str,&local_res8,10);
      }
      (*(code *)param_2[2])(param_1[6],iVar5,uVar4);
      iVar5 = iVar5 + 1;
      if ((char)param_1[9] == '\0') break;
      cVar3 = (**(code **)(*(longlong *)param_1[5] + 0x28))();
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxArticulation>::popCurrentContext(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394daa0 operator()<652,physx::PxVehicleWheelsSimData,unsigned_int_const_,int> body=137 status=ok
// SIG undefined operator()<652,physx::PxVehicleWheelsSimData,unsigned_int_const_,int>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
     operator()<652,physx::PxVehicleWheelsSimData,unsigned_int_const_,int>
               (longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 local_res18 [16];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined8 *local_18;
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  local_28[0] = 0;
  local_24 = 0;
  local_20 = param_3;
  local_18 = param_2;
  Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<652,physx::PxVehicleWheelsSimData,unsigned_int_const_,int>,physx::PxUnknownClassInfo_const_>
            (param_1,local_res18,local_28,local_res18);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394db30 operator()<653,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxFilterData> body=137 status=ok
// SIG undefined operator()<653,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxFilterData>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
     operator()<653,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxFilterData>
               (longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 local_res18 [16];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined8 *local_18;
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  local_28[0] = 0;
  local_24 = 0;
  local_20 = param_3;
  local_18 = param_2;
  Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<653,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxFilterData>,physx::PxUnknownClassInfo_const_>
            (param_1,local_res18,local_28,local_res18);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394dbc0 operator()<654,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleAntiRollBarData> body=141 status=ok
// SIG undefined operator()<654,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleAntiRollBarData>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>::
     operator()<654,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleAntiRollBarData>
               (undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 local_res18 [16];
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined4 local_80;
  undefined8 *local_78;
  undefined1 local_70 [104];
  
  ::_guard_xfg_dispatch_icall_nop(local_70,0,0x60);
  PxVehicleAntiRollBarDataGeneratedInfo::PxVehicleAntiRollBarDataGeneratedInfo(local_70);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  local_88[0] = 0;
  local_84 = 0;
  local_80 = param_3;
  local_78 = param_2;
  Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<654,physx::PxVehicleWheelsSimData,unsigned_int_const_,physx::PxVehicleAntiRollBarData>,physx::PxVehicleAntiRollBarDataGeneratedInfo_const_>
            (param_1,local_res18,local_88,local_70);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394dc50 operator()<655,physx::PxVehicleWheelsSimData,physx::PxVehicleTireLoadFilterData_const_&___ptr64,physx::PxVehicleTireLoadFilterData> body=151 status=ok
// SIG undefined operator()<655,physx::PxVehicleWheelsSimData,physx::PxVehicleTireLoadFilterData_const_&___ptr64,physx::PxVehicleTireLoadFilterData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>::
     operator()<655,physx::PxVehicleWheelsSimData,physx::PxVehicleTireLoadFilterData_const_&___ptr64,physx::PxVehicleTireLoadFilterData>
               (longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [152];
  
  local_c0 = *param_2;
  uStack_bc = param_2[1];
  uStack_b8 = param_2[2];
  uStack_b4 = param_2[3];
  local_b0 = param_2[4];
  uStack_ac = param_2[5];
  uStack_a8 = param_2[6];
  uStack_a4 = param_2[7];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName();
  local_c4 = 0;
  if (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)0x0) {
    local_c4 = **(undefined4 **)(param_1 + 0x60);
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_c8[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_a0,0,0x98);
  PxVehicleTireLoadFilterDataGeneratedInfo::PxVehicleTireLoadFilterDataGeneratedInfo(local_a0);
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
  complexProperty<physx::PxRepXPropertyAccessor<655,physx::PxVehicleWheelsSimData,physx::PxVehicleTireLoadFilterData_const_&___ptr64,physx::PxVehicleTireLoadFilterData>,physx::PxVehicleTireLoadFilterDataGeneratedInfo_const_>
            (param_1,puVar2,local_c8,local_a0);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394dcf0 operator()<655,physx::PxVehicleWheelsSimData,physx::PxVehicleTireLoadFilterData_const_&___ptr64,physx::PxVehicleTireLoadFilterData> body=187 status=ok
// SIG undefined operator()<655,physx::PxVehicleWheelsSimData,physx::PxVehicleTireLoadFilterData_const_&___ptr64,physx::PxVehicleTireLoadFilterData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
     operator()<655,physx::PxVehicleWheelsSimData,physx::PxVehicleTireLoadFilterData_const_&___ptr64,physx::PxVehicleTireLoadFilterData>
               (longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0 [32];
  undefined1 local_a0 [152];
  
  local_d0 = *(undefined4 *)(param_2 + 0x10);
  uStack_cc = *(undefined4 *)(param_2 + 0x14);
  uStack_c8 = *(undefined4 *)(param_2 + 0x18);
  uStack_c4 = *(undefined4 *)(param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_a0,0,0x98);
  PxVehicleTireLoadFilterDataGeneratedInfo::PxVehicleTireLoadFilterDataGeneratedInfo(local_a0);
  puVar3 = (undefined4 *)(*(code *)CONCAT44(uStack_cc,local_d0))(local_c0,param_1[2]);
  local_108 = *puVar3;
  uStack_104 = puVar3[1];
  uStack_100 = puVar3[2];
  uStack_fc = puVar3[3];
  local_f8 = puVar3[4];
  uStack_f4 = puVar3[5];
  uStack_f0 = puVar3[6];
  uStack_ec = puVar3[7];
  Sn::writeAllProperties<physx::PxVehicleTireLoadFilterData>
            (*param_1,&local_108,param_1[1],param_1[3],param_1[4]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394ddb0 operator()<660,physx::PxVehicleWheelsSimData,unsigned_int_const_,bool> body=270 status=ok
// SIG undefined operator()<660,physx::PxVehicleWheelsSimData,unsigned_int_const_,bool>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsSimData>_>::
     operator()<660,physx::PxVehicleWheelsSimData,unsigned_int_const_,bool>
               (longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 local_res18 [2];
  
  local_res18[0] = param_3;
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  lVar2 = param_1[1];
  local_res18[0] = *(undefined4 *)(*param_1 + 0x10);
  if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_res18[0];
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  }
  else {
    shdfnd::Array<unsigned_int,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_int>_>::
    growAndPushBack(lVar2,local_res18);
  }
  cVar3 = Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar3 != '\0') {
    iVar6 = 0;
    cVar3 = Sn::RepXVisitorReaderBase<physx::PxArticulation>::gotoFirstChild(param_1);
    if (cVar3 != '\0') {
      uVar7 = (undefined1)local_res18[0];
      do {
        pcVar5 = (char *)(**(code **)(*(longlong *)param_1[5] + 0x40))();
        if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
          *(undefined1 *)param_1[10] = 1;
        }
        else {
          iVar4 = physx::shdfnd::stricmp(pcVar5,"true");
          uVar7 = iVar4 == 0;
        }
        (*(code *)param_2[2])(param_1[6],iVar6,uVar7);
        iVar6 = iVar6 + 1;
      } while (((char)param_1[9] != '\0') &&
              (cVar3 = (**(code **)(*(longlong *)param_1[5] + 0x28))(), cVar3 != '\0'));
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxArticulation>::popCurrentContext(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394dec0 operator()<660,physx::PxVehicleWheelsSimData,unsigned_int_const_,bool> body=137 status=ok
// SIG undefined operator()<660,physx::PxVehicleWheelsSimData,unsigned_int_const_,bool>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>::
     operator()<660,physx::PxVehicleWheelsSimData,unsigned_int_const_,bool>
               (longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 local_res18 [16];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined8 *local_18;
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  local_28[0] = 0;
  local_24 = 0;
  local_20 = param_3;
  local_18 = param_2;
  Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsSimData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<660,physx::PxVehicleWheelsSimData,unsigned_int_const_,bool>,physx::PxUnknownClassInfo_const_>
            (param_1,local_res18,local_28,local_res18);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394df50 operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float> body=261 status=ok
// SIG undefined operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleWheelsDynData>_>::
     operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>
               (longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  
  local_res18[0] = param_3;
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  lVar2 = param_1[1];
  local_res18[0] = *(undefined4 *)(*param_1 + 0x10);
  if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_res18[0];
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  }
  else {
    shdfnd::Array<unsigned_int,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_int>_>::
    growAndPushBack(lVar2,local_res18);
  }
  cVar3 = Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar3 != '\0') {
    iVar5 = 0;
    cVar3 = Sn::RepXVisitorReaderBase<physx::PxArticulation>::gotoFirstChild(param_1);
    uVar6 = local_res18[0];
    while (cVar3 != '\0') {
      pcVar4 = (char *)(**(code **)(*(longlong *)param_1[5] + 0x40))();
      if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
        *(undefined1 *)param_1[10] = 1;
      }
      else {
        uVar6 = Sn::strToFloat(pcVar4,local_res8);
      }
      (*(code *)param_2[2])(param_1[6],iVar5,uVar6);
      iVar5 = iVar5 + 1;
      if ((char)param_1[9] == '\0') break;
      cVar3 = (**(code **)(*(longlong *)param_1[5] + 0x28))();
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxArticulation>::popCurrentContext(param_1);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394e060 operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float> body=137 status=ok
// SIG undefined operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>(void)

void physx::Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsDynData>_>::
     operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>
               (longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 local_res18 [16];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined8 *local_18;
  
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  local_28[0] = 0;
  local_24 = 0;
  local_20 = param_3;
  local_18 = param_2;
  Sn::RepXVisitorWriterBase<physx::PxVehicleWheelsDynData>::
  extendedIndexedProperty<physx::Vd::PxPvdExtendedIndexedPropertyAccessor<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>,physx::PxUnknownClassInfo_const_>
            (param_1,local_res18,local_28,local_res18);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394e0f0 operator()<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData> body=157 status=ok
// SIG undefined operator()<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>::
     operator()<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData>
               (longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_2f8 [4];
  int local_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined1 local_2d0 [712];
  
  local_2f0 = *param_2;
  uStack_2ec = param_2[1];
  uStack_2e8 = param_2[2];
  uStack_2e4 = param_2[3];
  local_2e0 = param_2[4];
  uStack_2dc = param_2[5];
  uStack_2d8 = param_2[6];
  uStack_2d4 = param_2[7];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName();
  local_2f4 = 0x18;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_2f4 = **(int **)(param_1 + 0x60) + 0x18;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_2f8[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_2d0,0,0x2c8);
  PxVehicleWheelsSimDataGeneratedInfo::PxVehicleWheelsSimDataGeneratedInfo(local_2d0);
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>::
  complexProperty<physx::PxRepXPropertyAccessor<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData>,physx::PxVehicleWheelsSimDataGeneratedInfo_const_>
            (param_1,puVar2,local_2f8,local_2d0);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394e190 operator()<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData> body=194 status=ok
// SIG undefined operator()<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>::
     operator()<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData>
               (longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_res8 [32];
  undefined1 local_2f8 [4];
  int local_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined1 local_2d0 [712];
  
  local_2f0 = *param_2;
  uStack_2ec = param_2[1];
  uStack_2e8 = param_2[2];
  uStack_2e4 = param_2[3];
  local_2e0 = param_2[4];
  uStack_2dc = param_2[5];
  uStack_2d8 = param_2[6];
  uStack_2d4 = param_2[7];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  local_2f4 = 0x18;
  if ((int *)param_1[6] != (int *)0x0) {
    local_2f4 = *(int *)param_1[6] + 0x18;
  }
  piVar1 = (int *)param_1[5];
  local_2f8[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_2d0,0,0x2c8);
  PxVehicleWheelsSimDataGeneratedInfo::PxVehicleWheelsSimDataGeneratedInfo(local_2d0);
  puVar3 = local_res8;
  if ((undefined1 *)param_1[5] != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)param_1[5];
  }
  Sn::RepXVisitorWriterBase<physx::PxVehicleDrive4W>::
  complexProperty<physx::PxRepXPropertyAccessor<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData>,physx::PxVehicleWheelsSimDataGeneratedInfo_const_>
            (param_1,puVar3,local_2f8,local_2d0);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394e260 operator()<673,physx::PxVehicleWheels,physx::PxVehicleWheelsDynData,physx::PxVehicleWheelsDynData> body=214 status=ok
// SIG undefined operator()<673,physx::PxVehicleWheels,physx::PxVehicleWheelsDynData,physx::PxVehicleWheelsDynData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>::
     operator()<673,physx::PxVehicleWheels,physx::PxVehicleWheelsDynData,physx::PxVehicleWheelsDynData>
               (longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [152];
  
  local_b0 = *(undefined4 *)(param_2 + 0x10);
  uStack_ac = *(undefined4 *)(param_2 + 0x14);
  uStack_a8 = *(undefined4 *)(param_2 + 0x18);
  uStack_a4 = *(undefined4 *)(param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName();
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_a0,0,0x90);
  PxVehicleWheelsDynDataGeneratedInfo::PxVehicleWheelsDynDataGeneratedInfo(local_a0);
  cVar2 = Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar2 != '\0') {
    puVar3 = (undefined8 *)
             (*(code *)CONCAT44(uStack_ac,local_b0))(&local_f8,*(undefined8 *)(param_1 + 0x30));
    local_128 = *puVar3;
    uStack_120 = puVar3[1];
    local_118 = *(undefined4 *)(puVar3 + 2);
    uStack_114 = *(undefined4 *)((longlong)puVar3 + 0x14);
    uStack_110 = *(undefined4 *)(puVar3 + 3);
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0x1c);
    local_108 = *(undefined4 *)(puVar3 + 4);
    uStack_104 = *(undefined4 *)((longlong)puVar3 + 0x24);
    uStack_100 = *(undefined4 *)(puVar3 + 5);
    uStack_fc = *(undefined4 *)((longlong)puVar3 + 0x2c);
    Sn::
    readComplexObj<physx::PxVehicleWheelsDynData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>,physx::PxVehicleWheelsDynDataGeneratedInfo>
              (param_1,&local_128,local_a0);
    local_f8 = local_128;
    uStack_f0 = uStack_120;
    local_e8 = local_118;
    uStack_e4 = uStack_114;
    uStack_e0 = uStack_110;
    uStack_dc = uStack_10c;
    local_d8 = local_108;
    uStack_d4 = uStack_104;
    uStack_d0 = uStack_100;
    uStack_cc = uStack_fc;
    (*(code *)CONCAT44(uStack_a4,uStack_a8))(*(undefined8 *)(param_1 + 0x30),&local_f8);
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394e340 operator()<673,physx::PxVehicleWheels,physx::PxVehicleWheelsDynData,physx::PxVehicleWheelsDynData> body=194 status=ok
// SIG undefined operator()<673,physx::PxVehicleWheels,physx::PxVehicleWheelsDynData,physx::PxVehicleWheelsDynData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>::
     operator()<673,physx::PxVehicleWheels,physx::PxVehicleWheelsDynData,physx::PxVehicleWheelsDynData>
               (longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_res8 [32];
  undefined1 local_c8 [4];
  int local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [152];
  
  local_c0 = *param_2;
  uStack_bc = param_2[1];
  uStack_b8 = param_2[2];
  uStack_b4 = param_2[3];
  local_b0 = param_2[4];
  uStack_ac = param_2[5];
  uStack_a8 = param_2[6];
  uStack_a4 = param_2[7];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  local_c4 = 0x78;
  if ((int *)param_1[6] != (int *)0x0) {
    local_c4 = *(int *)param_1[6] + 0x78;
  }
  piVar1 = (int *)param_1[5];
  local_c8[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_a0,0,0x90);
  PxVehicleWheelsDynDataGeneratedInfo::PxVehicleWheelsDynDataGeneratedInfo(local_a0);
  puVar3 = local_res8;
  if ((undefined1 *)param_1[5] != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)param_1[5];
  }
  Sn::RepXVisitorWriterBase<physx::PxVehicleDrive4W>::
  complexProperty<physx::PxRepXPropertyAccessor<673,physx::PxVehicleWheels,physx::PxVehicleWheelsDynData,physx::PxVehicleWheelsDynData>,physx::PxVehicleWheelsDynDataGeneratedInfo_const_>
            (param_1,puVar3,local_c8,local_a0);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394e410 operator()<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData> body=151 status=ok
// SIG undefined operator()<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
     operator()<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>
               (longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 local_130 [296];
  
  local_150 = *param_2;
  uStack_14c = param_2[1];
  uStack_148 = param_2[2];
  uStack_144 = param_2[3];
  local_140 = param_2[4];
  uStack_13c = param_2[5];
  uStack_138 = param_2[6];
  uStack_134 = param_2[7];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName();
  local_154 = 0;
  if (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)0x0) {
    local_154 = **(undefined4 **)(param_1 + 0x60);
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_158[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_130,0,0x128);
  PxVehicleEngineDataGeneratedInfo::PxVehicleEngineDataGeneratedInfo(local_130);
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>::
  complexProperty<physx::PxRepXPropertyAccessor<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>,physx::PxVehicleEngineDataGeneratedInfo_const_>
            (param_1,puVar2,local_158,local_130);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394e4b0 operator()<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData> body=188 status=ok
// SIG undefined operator()<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
     operator()<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>
               (longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_res8 [32];
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 local_130 [296];
  
  local_150 = *param_2;
  uStack_14c = param_2[1];
  uStack_148 = param_2[2];
  uStack_144 = param_2[3];
  local_140 = param_2[4];
  uStack_13c = param_2[5];
  uStack_138 = param_2[6];
  uStack_134 = param_2[7];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  local_154 = 0;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    local_154 = *(undefined4 *)param_1[6];
  }
  piVar1 = (int *)param_1[5];
  local_158[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_130,0,0x128);
  PxVehicleEngineDataGeneratedInfo::PxVehicleEngineDataGeneratedInfo(local_130);
  puVar3 = local_res8;
  if ((undefined1 *)param_1[5] != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)param_1[5];
  }
  Sn::RepXVisitorWriterBase<physx::PxVehicleDriveSimData4W>::
  complexProperty<physx::PxRepXPropertyAccessor<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>,physx::PxVehicleEngineDataGeneratedInfo_const_>
            (param_1,puVar3,local_158,local_130);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394e570 operator()<697,physx::PxVehicleDriveSimData,physx::PxVehicleGearsData_const_&___ptr64,physx::PxVehicleGearsData> body=157 status=ok
// SIG undefined operator()<697,physx::PxVehicleDriveSimData,physx::PxVehicleGearsData_const_&___ptr64,physx::PxVehicleGearsData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
     operator()<697,physx::PxVehicleDriveSimData,physx::PxVehicleGearsData_const_&___ptr64,physx::PxVehicleGearsData>
               (longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_b8 [4];
  int local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90 [136];
  
  local_b0 = *param_2;
  uStack_ac = param_2[1];
  uStack_a8 = param_2[2];
  uStack_a4 = param_2[3];
  local_a0 = param_2[4];
  uStack_9c = param_2[5];
  uStack_98 = param_2[6];
  uStack_94 = param_2[7];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName();
  local_b4 = 0x70;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_b4 = **(int **)(param_1 + 0x60) + 0x70;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_b8[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_90,0,0x80);
  PxVehicleGearsDataGeneratedInfo::PxVehicleGearsDataGeneratedInfo(local_90);
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>::
  complexProperty<physx::PxRepXPropertyAccessor<697,physx::PxVehicleDriveSimData,physx::PxVehicleGearsData_const_&___ptr64,physx::PxVehicleGearsData>,physx::PxVehicleGearsDataGeneratedInfo_const_>
            (param_1,puVar2,local_b8,local_90);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394e610 operator()<697,physx::PxVehicleDriveSimData,physx::PxVehicleGearsData_const_&___ptr64,physx::PxVehicleGearsData> body=277 status=ok
// SIG undefined operator()<697,physx::PxVehicleDriveSimData,physx::PxVehicleGearsData_const_&___ptr64,physx::PxVehicleGearsData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
     operator()<697,physx::PxVehicleDriveSimData,physx::PxVehicleGearsData_const_&___ptr64,physx::PxVehicleGearsData>
               (longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [128];
  undefined1 local_98 [144];
  
  pcVar3 = *(code **)(param_2 + 0x10);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_118,0,0x80);
  PxVehicleGearsDataGeneratedInfo::PxVehicleGearsDataGeneratedInfo(local_118);
  puVar4 = (undefined8 *)(*pcVar3)(local_98,param_1[2]);
  local_1a8 = *puVar4;
  uStack_1a0 = puVar4[1];
  local_198 = puVar4[2];
  uStack_190 = puVar4[3];
  local_188 = puVar4[4];
  uStack_180 = puVar4[5];
  local_178 = puVar4[6];
  uStack_170 = puVar4[7];
  local_168 = puVar4[8];
  uStack_160 = puVar4[9];
  local_158 = puVar4[10];
  uStack_150 = puVar4[0xb];
  local_148 = puVar4[0xc];
  uStack_140 = puVar4[0xd];
  local_138 = *(undefined4 *)(puVar4 + 0xe);
  uStack_134 = *(undefined4 *)((longlong)puVar4 + 0x74);
  uStack_130 = *(undefined4 *)(puVar4 + 0xf);
  uStack_12c = *(undefined4 *)((longlong)puVar4 + 0x7c);
  local_128 = *(undefined4 *)(puVar4 + 0x10);
  uStack_124 = *(undefined4 *)((longlong)puVar4 + 0x84);
  uStack_120 = *(undefined4 *)(puVar4 + 0x11);
  uStack_11c = *(undefined4 *)((longlong)puVar4 + 0x8c);
  Sn::writeAllProperties<physx::PxVehicleGearsData>
            (*param_1,&local_1a8,param_1[1],param_1[3],param_1[4]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394e730 operator()<698,physx::PxVehicleDriveSimData,physx::PxVehicleClutchData_const_&___ptr64,physx::PxVehicleClutchData> body=157 status=ok
// SIG undefined operator()<698,physx::PxVehicleDriveSimData,physx::PxVehicleClutchData_const_&___ptr64,physx::PxVehicleClutchData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
     operator()<698,physx::PxVehicleDriveSimData,physx::PxVehicleClutchData_const_&___ptr64,physx::PxVehicleClutchData>
               (longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [104];
  
  local_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_7c = *(undefined4 *)(param_2 + 0x14);
  uStack_78 = *(undefined4 *)(param_2 + 0x18);
  uStack_74 = *(undefined4 *)(param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName();
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_70,0,0x60);
  PxVehicleClutchDataGeneratedInfo::PxVehicleClutchDataGeneratedInfo(local_70);
  cVar2 = Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar2 != '\0') {
    puVar3 = (undefined4 *)
             (*(code *)CONCAT44(uStack_7c,local_80))(&local_a8,*(undefined8 *)(param_1 + 0x30));
    local_b8 = *puVar3;
    uStack_b4 = puVar3[1];
    uStack_b0 = puVar3[2];
    uStack_ac = puVar3[3];
    Sn::
    readComplexObj<physx::PxVehicleClutchData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleClutchDataGeneratedInfo>
              (param_1,&local_b8,local_70);
    local_a8 = local_b8;
    uStack_a4 = uStack_b4;
    uStack_a0 = uStack_b0;
    uStack_9c = uStack_ac;
    (*(code *)CONCAT44(uStack_74,uStack_78))(*(undefined8 *)(param_1 + 0x30),&local_a8);
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394e7d0 operator()<698,physx::PxVehicleDriveSimData,physx::PxVehicleClutchData_const_&___ptr64,physx::PxVehicleClutchData> body=191 status=ok
// SIG undefined operator()<698,physx::PxVehicleDriveSimData,physx::PxVehicleClutchData_const_&___ptr64,physx::PxVehicleClutchData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
     operator()<698,physx::PxVehicleDriveSimData,physx::PxVehicleClutchData_const_&___ptr64,physx::PxVehicleClutchData>
               (longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_res8 [32];
  undefined1 local_98 [4];
  int local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [104];
  
  local_90 = *param_2;
  uStack_8c = param_2[1];
  uStack_88 = param_2[2];
  uStack_84 = param_2[3];
  local_80 = param_2[4];
  uStack_7c = param_2[5];
  uStack_78 = param_2[6];
  uStack_74 = param_2[7];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  local_94 = 0x100;
  if ((int *)param_1[6] != (int *)0x0) {
    local_94 = *(int *)param_1[6] + 0x100;
  }
  piVar1 = (int *)param_1[5];
  local_98[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_70,0,0x60);
  PxVehicleClutchDataGeneratedInfo::PxVehicleClutchDataGeneratedInfo(local_70);
  puVar3 = local_res8;
  if ((undefined1 *)param_1[5] != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)param_1[5];
  }
  Sn::RepXVisitorWriterBase<physx::PxVehicleDriveSimData4W>::
  complexProperty<physx::PxRepXPropertyAccessor<698,physx::PxVehicleDriveSimData,physx::PxVehicleClutchData_const_&___ptr64,physx::PxVehicleClutchData>,physx::PxVehicleClutchDataGeneratedInfo_const_>
            (param_1,puVar3,local_98,local_70);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394e890 operator()<699,physx::PxVehicleDriveSimData,physx::PxVehicleAutoBoxData_const_&___ptr64,physx::PxVehicleAutoBoxData> body=154 status=ok
// SIG undefined operator()<699,physx::PxVehicleDriveSimData,physx::PxVehicleAutoBoxData_const_&___ptr64,physx::PxVehicleAutoBoxData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
     operator()<699,physx::PxVehicleDriveSimData,physx::PxVehicleAutoBoxData_const_&___ptr64,physx::PxVehicleAutoBoxData>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_98 [4];
  int local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [104];
  
  local_90 = *(undefined4 *)param_2;
  uStack_8c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_88 = *(undefined4 *)(param_2 + 1);
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_80 = *(undefined4 *)(param_2 + 2);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_78 = *(undefined4 *)(param_2 + 3);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_90,*param_2);
  local_94 = 0x110;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_94 = **(int **)(param_1 + 0x60) + 0x110;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_98[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_70,0,0x60);
  PxVehicleAutoBoxDataGeneratedInfo::PxVehicleAutoBoxDataGeneratedInfo(local_70);
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>::
  complexProperty<physx::PxRepXPropertyAccessor<699,physx::PxVehicleDriveSimData,physx::PxVehicleAutoBoxData_const_&___ptr64,physx::PxVehicleAutoBoxData>,physx::PxVehicleAutoBoxDataGeneratedInfo_const_>
            (param_1,puVar2,local_98,local_70);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394e930 operator()<699,physx::PxVehicleDriveSimData,physx::PxVehicleAutoBoxData_const_&___ptr64,physx::PxVehicleAutoBoxData> body=265 status=ok
// SIG undefined operator()<699,physx::PxVehicleDriveSimData,physx::PxVehicleAutoBoxData_const_&___ptr64,physx::PxVehicleAutoBoxData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
     operator()<699,physx::PxVehicleDriveSimData,physx::PxVehicleAutoBoxData_const_&___ptr64,physx::PxVehicleAutoBoxData>
               (longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 local_270 [104];
  undefined8 local_208 [32];
  undefined1 local_108 [256];
  
  pcVar6 = *(code **)(param_2 + 0x10);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_270,0,0x60);
  PxVehicleAutoBoxDataGeneratedInfo::PxVehicleAutoBoxDataGeneratedInfo(local_270);
  puVar7 = (undefined8 *)(*pcVar6)(local_108,param_1[2]);
  lVar9 = 2;
  puVar8 = local_208;
  do {
    uVar5 = puVar7[1];
    *puVar8 = *puVar7;
    puVar8[1] = uVar5;
    uVar5 = puVar7[3];
    puVar8[2] = puVar7[2];
    puVar8[3] = uVar5;
    uVar5 = puVar7[5];
    puVar8[4] = puVar7[4];
    puVar8[5] = uVar5;
    uVar5 = puVar7[7];
    puVar8[6] = puVar7[6];
    puVar8[7] = uVar5;
    uVar5 = puVar7[9];
    puVar8[8] = puVar7[8];
    puVar8[9] = uVar5;
    uVar5 = puVar7[0xb];
    puVar8[10] = puVar7[10];
    puVar8[0xb] = uVar5;
    uVar2 = *(undefined4 *)((longlong)puVar7 + 100);
    uVar3 = *(undefined4 *)(puVar7 + 0xd);
    uVar4 = *(undefined4 *)((longlong)puVar7 + 0x6c);
    *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar7 + 0xc);
    *(undefined4 *)((longlong)puVar8 + 100) = uVar2;
    *(undefined4 *)(puVar8 + 0xd) = uVar3;
    *(undefined4 *)((longlong)puVar8 + 0x6c) = uVar4;
    uVar2 = *(undefined4 *)((longlong)puVar7 + 0x74);
    uVar3 = *(undefined4 *)(puVar7 + 0xf);
    uVar4 = *(undefined4 *)((longlong)puVar7 + 0x7c);
    *(undefined4 *)(puVar8 + 0xe) = *(undefined4 *)(puVar7 + 0xe);
    *(undefined4 *)((longlong)puVar8 + 0x74) = uVar2;
    *(undefined4 *)(puVar8 + 0xf) = uVar3;
    *(undefined4 *)((longlong)puVar8 + 0x7c) = uVar4;
    lVar9 = lVar9 + -1;
    puVar7 = puVar7 + 0x10;
    puVar8 = puVar8 + 0x10;
  } while (lVar9 != 0);
  Sn::writeAllProperties<physx::PxVehicleAutoBoxData>
            (*param_1,local_208,param_1[1],param_1[3],param_1[4]);
  lVar9 = *param_1;
  if (*(int *)(lVar9 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar9 + 8) + 8 + (ulonglong)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394ea40 operator()<702,physx::PxVehicleDriveSimData4W,physx::PxVehicleDifferential4WData_const_&___ptr64,physx::PxVehicleDifferential4WData> body=189 status=ok
// SIG undefined operator()<702,physx::PxVehicleDriveSimData4W,physx::PxVehicleDifferential4WData_const_&___ptr64,physx::PxVehicleDifferential4WData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
     operator()<702,physx::PxVehicleDriveSimData4W,physx::PxVehicleDifferential4WData_const_&___ptr64,physx::PxVehicleDifferential4WData>
               (longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
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
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_f0 [232];
  
  local_100 = *(undefined4 *)(param_2 + 0x10);
  uStack_fc = *(undefined4 *)(param_2 + 0x14);
  uStack_f8 = *(undefined4 *)(param_2 + 0x18);
  uStack_f4 = *(undefined4 *)(param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName();
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_f0,0,0xe0);
  PxVehicleDifferential4WDataGeneratedInfo::PxVehicleDifferential4WDataGeneratedInfo(local_f0);
  cVar2 = Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar2 != '\0') {
    puVar3 = (undefined4 *)
             (*(code *)CONCAT44(uStack_fc,local_100))(&local_138,*(undefined8 *)(param_1 + 0x30));
    local_158 = *puVar3;
    uStack_154 = puVar3[1];
    uStack_150 = puVar3[2];
    uStack_14c = puVar3[3];
    local_148 = puVar3[4];
    uStack_144 = puVar3[5];
    uStack_140 = puVar3[6];
    uStack_13c = puVar3[7];
    Sn::
    readComplexObj<physx::PxVehicleDifferential4WData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleDifferential4WDataGeneratedInfo>
              (param_1,&local_158,local_f0);
    local_138 = local_158;
    uStack_134 = uStack_154;
    uStack_130 = uStack_150;
    uStack_12c = uStack_14c;
    local_128 = local_148;
    uStack_124 = uStack_144;
    uStack_120 = uStack_140;
    uStack_11c = uStack_13c;
    (*(code *)CONCAT44(uStack_f4,uStack_f8))(*(undefined8 *)(param_1 + 0x30),&local_138);
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394eb00 operator()<702,physx::PxVehicleDriveSimData4W,physx::PxVehicleDifferential4WData_const_&___ptr64,physx::PxVehicleDifferential4WData> body=187 status=ok
// SIG undefined operator()<702,physx::PxVehicleDriveSimData4W,physx::PxVehicleDifferential4WData_const_&___ptr64,physx::PxVehicleDifferential4WData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
     operator()<702,physx::PxVehicleDriveSimData4W,physx::PxVehicleDifferential4WData_const_&___ptr64,physx::PxVehicleDifferential4WData>
               (longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 local_110 [32];
  undefined1 local_f0 [232];
  
  local_120 = *(undefined4 *)(param_2 + 0x10);
  uStack_11c = *(undefined4 *)(param_2 + 0x14);
  uStack_118 = *(undefined4 *)(param_2 + 0x18);
  uStack_114 = *(undefined4 *)(param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_f0,0,0xe0);
  PxVehicleDifferential4WDataGeneratedInfo::PxVehicleDifferential4WDataGeneratedInfo(local_f0);
  puVar3 = (undefined4 *)(*(code *)CONCAT44(uStack_11c,local_120))(local_110,param_1[2]);
  local_158 = *puVar3;
  uStack_154 = puVar3[1];
  uStack_150 = puVar3[2];
  uStack_14c = puVar3[3];
  local_148 = puVar3[4];
  uStack_144 = puVar3[5];
  uStack_140 = puVar3[6];
  uStack_13c = puVar3[7];
  Sn::writeAllProperties<physx::PxVehicleDifferential4WData>
            (*param_1,&local_158,param_1[1],param_1[3],param_1[4]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394ebc0 operator()<703,physx::PxVehicleDriveSimData4W,physx::PxVehicleAckermannGeometryData_const_&___ptr64,physx::PxVehicleAckermannGeometryData> body=156 status=ok
// SIG undefined operator()<703,physx::PxVehicleDriveSimData4W,physx::PxVehicleAckermannGeometryData_const_&___ptr64,physx::PxVehicleAckermannGeometryData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimData4W>_>::
     operator()<703,physx::PxVehicleDriveSimData4W,physx::PxVehicleAckermannGeometryData_const_&___ptr64,physx::PxVehicleAckermannGeometryData>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_b8 [4];
  int local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90 [136];
  
  local_b0 = *(undefined4 *)param_2;
  uStack_ac = *(undefined4 *)((longlong)param_2 + 4);
  uStack_a8 = *(undefined4 *)(param_2 + 1);
  uStack_a4 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_a0 = *(undefined4 *)(param_2 + 2);
  uStack_9c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_98 = *(undefined4 *)(param_2 + 3);
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_b0,*param_2);
  local_b4 = 0x230;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_b4 = **(int **)(param_1 + 0x60) + 0x230;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_b8[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_90,0,0x80);
  PxVehicleAckermannGeometryDataGeneratedInfo::PxVehicleAckermannGeometryDataGeneratedInfo(local_90)
  ;
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>::
  complexProperty<physx::PxRepXPropertyAccessor<703,physx::PxVehicleDriveSimData4W,physx::PxVehicleAckermannGeometryData_const_&___ptr64,physx::PxVehicleAckermannGeometryData>,physx::PxVehicleAckermannGeometryDataGeneratedInfo_const_>
            (param_1,puVar2,local_b8,local_90);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394ec60 operator()<703,physx::PxVehicleDriveSimData4W,physx::PxVehicleAckermannGeometryData_const_&___ptr64,physx::PxVehicleAckermannGeometryData> body=172 status=ok
// SIG undefined operator()<703,physx::PxVehicleDriveSimData4W,physx::PxVehicleAckermannGeometryData_const_&___ptr64,physx::PxVehicleAckermannGeometryData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimData4W>_>::
     operator()<703,physx::PxVehicleDriveSimData4W,physx::PxVehicleAckermannGeometryData_const_&___ptr64,physx::PxVehicleAckermannGeometryData>
               (longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [16];
  undefined1 local_90 [136];
  
  local_b0 = *(undefined4 *)(param_2 + 0x10);
  uStack_ac = *(undefined4 *)(param_2 + 0x14);
  uStack_a8 = *(undefined4 *)(param_2 + 0x18);
  uStack_a4 = *(undefined4 *)(param_2 + 0x1c);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_90,0,0x80);
  PxVehicleAckermannGeometryDataGeneratedInfo::PxVehicleAckermannGeometryDataGeneratedInfo(local_90)
  ;
  puVar3 = (undefined4 *)(*(code *)CONCAT44(uStack_ac,local_b0))(local_a0,param_1[2]);
  local_d8 = *puVar3;
  uStack_d4 = puVar3[1];
  uStack_d0 = puVar3[2];
  uStack_cc = puVar3[3];
  Sn::writeAllProperties<physx::PxVehicleAckermannGeometryData>
            (*param_1,&local_d8,param_1[1],param_1[3],param_1[4]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394ed10 operator()<707,physx::PxVehicleDrive,physx::PxVehicleDriveDynData,physx::PxVehicleDriveDynData> body=156 status=ok
// SIG undefined operator()<707,physx::PxVehicleDrive,physx::PxVehicleDriveDynData,physx::PxVehicleDriveDynData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>::
     operator()<707,physx::PxVehicleDrive,physx::PxVehicleDriveDynData,physx::PxVehicleDriveDynData>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_288 [4];
  int local_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 local_260 [600];
  
  local_280 = *(undefined4 *)param_2;
  uStack_27c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_278 = *(undefined4 *)(param_2 + 1);
  uStack_274 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_270 = *(undefined4 *)(param_2 + 2);
  uStack_26c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_268 = *(undefined4 *)(param_2 + 3);
  uStack_264 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_280,*param_2);
  local_284 = 0xb0;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_284 = **(int **)(param_1 + 0x60) + 0xb0;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_288[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_260,0,0x250);
  PxVehicleDriveDynDataGeneratedInfo::PxVehicleDriveDynDataGeneratedInfo(local_260);
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>::
  complexProperty<physx::PxRepXPropertyAccessor<707,physx::PxVehicleDrive,physx::PxVehicleDriveDynData,physx::PxVehicleDriveDynData>,physx::PxVehicleDriveDynDataGeneratedInfo_const_>
            (param_1,puVar2,local_288,local_260);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394edb0 operator()<707,physx::PxVehicleDrive,physx::PxVehicleDriveDynData,physx::PxVehicleDriveDynData> body=193 status=ok
// SIG undefined operator()<707,physx::PxVehicleDrive,physx::PxVehicleDriveDynData,physx::PxVehicleDriveDynData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>::
     operator()<707,physx::PxVehicleDrive,physx::PxVehicleDriveDynData,physx::PxVehicleDriveDynData>
               (longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_res8 [32];
  undefined1 local_288 [4];
  int local_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 local_260 [600];
  
  local_280 = *param_2;
  uStack_27c = param_2[1];
  uStack_278 = param_2[2];
  uStack_274 = param_2[3];
  local_270 = param_2[4];
  uStack_26c = param_2[5];
  uStack_268 = param_2[6];
  uStack_264 = param_2[7];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  local_284 = 0xb0;
  if ((int *)param_1[6] != (int *)0x0) {
    local_284 = *(int *)param_1[6] + 0xb0;
  }
  piVar1 = (int *)param_1[5];
  local_288[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_260,0,0x250);
  PxVehicleDriveDynDataGeneratedInfo::PxVehicleDriveDynDataGeneratedInfo(local_260);
  puVar3 = local_res8;
  if ((undefined1 *)param_1[5] != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)param_1[5];
  }
  Sn::RepXVisitorWriterBase<physx::PxVehicleDrive4W>::
  complexProperty<physx::PxRepXPropertyAccessor<707,physx::PxVehicleDrive,physx::PxVehicleDriveDynData,physx::PxVehicleDriveDynData>,physx::PxVehicleDriveDynDataGeneratedInfo_const_>
            (param_1,puVar3,local_288,local_260);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394ee80 operator()<711,physx::PxVehicleDrive4W,physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4W> body=156 status=ok
// SIG undefined operator()<711,physx::PxVehicleDrive4W,physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4W>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDrive4W>_>::
     operator()<711,physx::PxVehicleDrive4W,physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4W>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_f8 [4];
  int local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 local_d0 [200];
  
  local_f0 = *(undefined4 *)param_2;
  uStack_ec = *(undefined4 *)((longlong)param_2 + 4);
  uStack_e8 = *(undefined4 *)(param_2 + 1);
  uStack_e4 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_e0 = *(undefined4 *)(param_2 + 2);
  uStack_dc = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_d8 = *(undefined4 *)(param_2 + 3);
  uStack_d4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_f0,*param_2);
  local_f4 = 0x118;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_f4 = **(int **)(param_1 + 0x60) + 0x118;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_f8[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_d0,0,0xc0);
  PxVehicleDriveSimData4WGeneratedInfo::PxVehicleDriveSimData4WGeneratedInfo(local_d0);
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>::
  complexProperty<physx::PxRepXPropertyAccessor<711,physx::PxVehicleDrive4W,physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4W>,physx::PxVehicleDriveSimData4WGeneratedInfo_const_>
            (param_1,puVar2,local_f8,local_d0);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394ef20 operator()<711,physx::PxVehicleDrive4W,physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4W> body=246 status=ok
// SIG undefined operator()<711,physx::PxVehicleDrive4W,physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4W>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDrive4W>_>::
     operator()<711,physx::PxVehicleDrive4W,physx::PxVehicleDriveSimData4W,physx::PxVehicleDriveSimData4W>
               (longlong *param_1,longlong param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 local_550 [200];
  undefined1 local_488 [528];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 local_248 [576];
  
  pcVar2 = *(code **)(param_2 + 0x10);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_550,0,0xc0);
  PxVehicleDriveSimData4WGeneratedInfo::PxVehicleDriveSimData4WGeneratedInfo(local_550);
  lVar3 = (*pcVar2)(local_248,param_1[2]);
  PxVehicleDriveSimData::PxVehicleDriveSimData(local_488,lVar3);
  local_278 = *(undefined8 *)(lVar3 + 0x210);
  uStack_270 = *(undefined8 *)(lVar3 + 0x218);
  local_268 = *(undefined4 *)(lVar3 + 0x220);
  uStack_264 = *(undefined4 *)(lVar3 + 0x224);
  uStack_260 = *(undefined4 *)(lVar3 + 0x228);
  uStack_25c = *(undefined4 *)(lVar3 + 0x22c);
  local_258 = *(undefined4 *)(lVar3 + 0x230);
  uStack_254 = *(undefined4 *)(lVar3 + 0x234);
  uStack_250 = *(undefined4 *)(lVar3 + 0x238);
  uStack_24c = *(undefined4 *)(lVar3 + 0x23c);
  Sn::writeAllProperties<physx::PxVehicleDriveSimData4W>
            (*param_1,local_488,param_1[1],param_1[3],param_1[4]);
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar3 + 8) + 8 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394f020 operator()<714,physx::PxVehicleDriveTank,enum_physx::PxVehicleDriveTankControlModel::Enum_const_,enum_physx::PxVehicleDriveTankControlModel::Enum> body=156 status=ok
// SIG undefined operator()<714,physx::PxVehicleDriveTank,enum_physx::PxVehicleDriveTankControlModel::Enum_const_,enum_physx::PxVehicleDriveTankControlModel::Enum>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveTank>_>::
     operator()<714,physx::PxVehicleDriveTank,enum_physx::PxVehicleDriveTankControlModel::Enum_const_,enum_physx::PxVehicleDriveTankControlModel::Enum>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *local_res8 [4];
  
  pcVar3 = (code *)param_2[3];
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_res8[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x10) == 0) {
      pcVar6 = "bad__repx__name";
    }
    else {
      pcVar6 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x18)
      ;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],pcVar6,local_res8);
    if (((cVar4 != '\0') && (local_res8[0] != (char *)0x0)) && (*local_res8[0] != '\0')) {
      uVar5 = Sn::findEnumByName(local_res8[0],&PTR_s_eSTANDARD_14682e180);
      (*pcVar3)(param_1[6],uVar5);
    }
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394f0c0 operator()<714,physx::PxVehicleDriveTank,enum_physx::PxVehicleDriveTankControlModel::Enum_const_,enum_physx::PxVehicleDriveTankControlModel::Enum> body=228 status=ok
// SIG undefined operator()<714,physx::PxVehicleDriveTank,enum_physx::PxVehicleDriveTankControlModel::Enum_const_,enum_physx::PxVehicleDriveTankControlModel::Enum>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveTank>_>::
     operator()<714,physx::PxVehicleDriveTank,enum_physx::PxVehicleDriveTankControlModel::Enum_const_,enum_physx::PxVehicleDriveTankControlModel::Enum>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  undefined **ppuVar7;
  char *pcVar8;
  
  pcVar5 = (code *)param_2[2];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  iVar6 = (*pcVar5)(param_1[2]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) == 0) {
    pcVar8 = "bad__repx__name";
  }
  else {
    pcVar8 = *(char **)(*(longlong *)(lVar2 + 8) + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10);
  }
  ppuVar7 = &PTR_s_eSTANDARD_14682e180;
  plVar3 = (longlong *)param_1[1];
  puVar4 = PTR_s_eSTANDARD_14682e180;
  while (puVar4 != (undefined *)0x0) {
    if (*(int *)(ppuVar7 + 1) == iVar6) {
      (**(code **)(*plVar3 + 0x10))(plVar3,pcVar8,*ppuVar7);
    }
    ppuVar7 = ppuVar7 + 2;
    puVar4 = *ppuVar7;
  }
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394f1b0 operator()<716,physx::PxVehicleDriveTank,physx::PxVehicleDriveSimData,physx::PxVehicleDriveSimData> body=156 status=ok
// SIG undefined operator()<716,physx::PxVehicleDriveTank,physx::PxVehicleDriveSimData,physx::PxVehicleDriveSimData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveTank>_>::
     operator()<716,physx::PxVehicleDriveTank,physx::PxVehicleDriveSimData,physx::PxVehicleDriveSimData>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_b8 [4];
  int local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90 [136];
  
  local_b0 = *(undefined4 *)param_2;
  uStack_ac = *(undefined4 *)((longlong)param_2 + 4);
  uStack_a8 = *(undefined4 *)(param_2 + 1);
  uStack_a4 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_a0 = *(undefined4 *)(param_2 + 2);
  uStack_9c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_98 = *(undefined4 *)(param_2 + 3);
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_b0,*param_2);
  local_b4 = 0x120;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_b4 = **(int **)(param_1 + 0x60) + 0x120;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_b8[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_90,0,0x80);
  PxVehicleDriveSimDataGeneratedInfo::PxVehicleDriveSimDataGeneratedInfo(local_90);
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxVehicleDriveTank>::
  complexProperty<physx::PxRepXPropertyAccessor<716,physx::PxVehicleDriveTank,physx::PxVehicleDriveSimData,physx::PxVehicleDriveSimData>,physx::PxVehicleDriveSimDataGeneratedInfo_const_>
            (param_1,puVar2,local_b8,local_90);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394f250 operator()<716,physx::PxVehicleDriveTank,physx::PxVehicleDriveSimData,physx::PxVehicleDriveSimData> body=186 status=ok
// SIG undefined operator()<716,physx::PxVehicleDriveTank,physx::PxVehicleDriveSimData,physx::PxVehicleDriveSimData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveTank>_>::
     operator()<716,physx::PxVehicleDriveTank,physx::PxVehicleDriveSimData,physx::PxVehicleDriveSimData>
               (longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 local_4b0 [136];
  undefined1 local_428 [528];
  undefined1 local_218 [528];
  
  pcVar3 = *(code **)(param_2 + 0x10);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_4b0,0,0x80);
  PxVehicleDriveSimDataGeneratedInfo::PxVehicleDriveSimDataGeneratedInfo(local_4b0);
  uVar4 = (*pcVar3)(local_218,param_1[2]);
  PxVehicleDriveSimData::PxVehicleDriveSimData(local_428,uVar4);
  Sn::writeAllProperties<physx::PxVehicleDriveSimData>
            (*param_1,local_428,param_1[1],param_1[3],param_1[4]);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394f310 operator()<719,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDifferentialNWData_const_&___ptr64,physx::PxVehicleDifferentialNWData> body=166 status=ok
// SIG undefined operator()<719,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDifferentialNWData_const_&___ptr64,physx::PxVehicleDifferentialNWData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveSimDataNW>_>::
     operator()<719,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDifferentialNWData_const_&___ptr64,physx::PxVehicleDifferentialNWData>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(param_1,*param_2);
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  PxVehicleDifferentialNWDataGeneratedInfo::PxVehicleDifferentialNWDataGeneratedInfo(&local_58);
  cVar2 = Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar2 != '\0') {
    puVar3 = (undefined4 *)
             (*(code *)CONCAT44(uStack_1c,local_20))(&local_68,*(undefined8 *)(param_1 + 0x30));
    local_78 = *puVar3;
    uStack_74 = puVar3[1];
    uStack_70 = puVar3[2];
    uStack_6c = puVar3[3];
    Sn::
    readComplexObj<physx::PxVehicleDifferentialNWData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimDataNW>,physx::PxVehicleDifferentialNWDataGeneratedInfo>
              (param_1,&local_78,&local_58);
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    (*(code *)CONCAT44(uStack_14,uStack_18))(*(undefined8 *)(param_1 + 0x30),&local_68);
  }
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394f3c0 operator()<719,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDifferentialNWData_const_&___ptr64,physx::PxVehicleDifferentialNWData> body=286 status=ok
// SIG undefined operator()<719,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDifferentialNWData_const_&___ptr64,physx::PxVehicleDifferentialNWData>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveSimDataNW>_>::
     operator()<719,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDifferentialNWData_const_&___ptr64,physx::PxVehicleDifferentialNWData>
               (longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong local_98;
  longlong local_90;
  undefined4 *puStack_88;
  code *local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30 [40];
  
  local_90 = *param_2;
  puStack_88 = (undefined4 *)param_2[1];
  local_80 = (code *)param_2[2];
  lStack_78 = param_2[3];
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName
            (*(undefined4 *)param_2,*param_2);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  PxVehicleDifferentialNWDataGeneratedInfo::PxVehicleDifferentialNWDataGeneratedInfo(&local_60);
  puVar6 = (undefined4 *)(*local_80)(local_30,param_1[2]);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar4 = param_1[3];
  local_40 = *puVar6;
  uStack_3c = puVar6[1];
  uStack_38 = puVar6[2];
  uStack_34 = puVar6[3];
  lVar5 = param_1[4];
  PxVehicleDifferentialNWDataGeneratedInfo::PxVehicleDifferentialNWDataGeneratedInfo(local_30);
  puStack_88 = &local_40;
  local_70 = 0;
  uStack_68 = 0;
  local_98 = lVar2;
  local_90 = lVar3;
  local_80 = (code *)lVar4;
  lStack_78 = lVar5;
  RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxHeightFieldDesc>_>::
  operator()<256,physx::PxHeightFieldDesc,unsigned_int,unsigned_int>(&local_98,local_30,0);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394f4e0 operator()<723,physx::PxVehicleDriveNW,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNW> body=156 status=ok
// SIG undefined operator()<723,physx::PxVehicleDriveNW,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNW>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxVehicleDriveNW>_>::
     operator()<723,physx::PxVehicleDriveNW,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNW>
               (longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  undefined1 local_d8 [4];
  int local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0 [168];
  
  local_d0 = *(undefined4 *)param_2;
  uStack_cc = *(undefined4 *)((longlong)param_2 + 4);
  uStack_c8 = *(undefined4 *)(param_2 + 1);
  uStack_c4 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_c0 = *(undefined4 *)(param_2 + 2);
  uStack_bc = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_b8 = *(undefined4 *)(param_2 + 3);
  uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::pushName(local_d0,*param_2);
  local_d4 = 0x118;
  if (*(int **)(param_1 + 0x60) != (int *)0x0) {
    local_d4 = **(int **)(param_1 + 0x60) + 0x118;
  }
  piVar1 = *(int **)(param_1 + 0x58);
  local_d8[0] = 1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_b0,0,0xa0);
  PxVehicleDriveSimDataNWGeneratedInfo::PxVehicleDriveSimDataNWGeneratedInfo(local_b0);
  puVar2 = local_res8;
  if (*(undefined1 **)(param_1 + 0x58) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x58);
  }
  Sn::RepXVisitorReaderBase<physx::PxVehicleDriveNW>::
  complexProperty<physx::PxRepXPropertyAccessor<723,physx::PxVehicleDriveNW,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNW>,physx::PxVehicleDriveSimDataNWGeneratedInfo_const_>
            (param_1,puVar2,local_d8,local_b0);
  Sn::RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::popName(param_1);
  return;
}



// FUNCTION 14394f580 operator()<723,physx::PxVehicleDriveNW,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNW> body=216 status=ok
// SIG undefined operator()<723,physx::PxVehicleDriveNW,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNW>(void)

void physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleDriveNW>_>::
     operator()<723,physx::PxVehicleDriveNW,physx::PxVehicleDriveSimDataNW,physx::PxVehicleDriveSimDataNW>
               (longlong *param_1,longlong param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 local_4f0 [168];
  undefined1 local_448 [528];
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 local_228 [544];
  
  pcVar2 = *(code **)(param_2 + 0x10);
  Sn::RepXVisitorWriterBase<physx::PxClothMotionConstraintConfig>::pushName();
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  ::_guard_xfg_dispatch_icall_nop(local_4f0,0,0xa0);
  PxVehicleDriveSimDataNWGeneratedInfo::PxVehicleDriveSimDataNWGeneratedInfo(local_4f0);
  lVar3 = (*pcVar2)(local_228,param_1[2]);
  PxVehicleDriveSimData::PxVehicleDriveSimData(local_448,lVar3);
  local_238 = *(undefined4 *)(lVar3 + 0x210);
  uStack_234 = *(undefined4 *)(lVar3 + 0x214);
  uStack_230 = *(undefined4 *)(lVar3 + 0x218);
  uStack_22c = *(undefined4 *)(lVar3 + 0x21c);
  Sn::writeAllProperties<physx::PxVehicleDriveSimDataNW>
            (*param_1,local_448,param_1[1],param_1[3],param_1[4]);
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar3 + 8) + 8 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
    }
    *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 14394f660 PxFixedSizeLookupTableProperty<physx::Vd::PxPvdFixedSizeLookupTablePropertyAccessor<548,physx::PxVehicleEngineData,unsigned_int,float>,physx::PxUnknownClassInfo_const_> body=331 status=ok
// SIG undefined PxFixedSizeLookupTableProperty<physx::Vd::PxPvdFixedSizeLookupTablePropertyAccessor<548,physx::PxVehicleEngineData,unsigned_int,float>,physx::PxUnknownClassInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleEngineData>::
     PxFixedSizeLookupTableProperty<physx::Vd::PxPvdFixedSizeLookupTablePropertyAccessor<548,physx::PxVehicleEngineData,unsigned_int,float>,physx::PxUnknownClassInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_res8 [2];
  
  (**(code **)(*(longlong *)(param_3 + 0x10) + 0x30))(param_1[6]);
  lVar2 = param_1[1];
  local_res8[0] = *(undefined4 *)(*param_1 + 0x10);
  if (*(uint *)(lVar2 + 0x10) < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 8) + (ulonglong)*(uint *)(lVar2 + 0x10) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_res8[0];
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  }
  else {
    shdfnd::Array<unsigned_int,physx::profile::PxProfileWrapperReflectionAllocator<unsigned_int>_>::
    growAndPushBack(lVar2,local_res8);
  }
  cVar3 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName(param_1);
  if (cVar3 != '\0') {
    cVar3 = RepXVisitorReaderBase<physx::PxArticulation>::gotoFirstChild(param_1);
    uVar5 = local_res8[0];
    uVar6 = local_res8[0];
    while (cVar3 != '\0') {
      pcVar4 = (char *)(**(code **)(*(longlong *)param_1[5] + 0x40))();
      if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
        *(undefined1 *)param_1[10] = 1;
      }
      else {
        uVar5 = strToFloat(pcVar4,local_res8);
      }
      if (((char)param_1[9] != '\0') &&
         (cVar3 = (**(code **)(*(longlong *)param_1[5] + 0x28))(), cVar3 != '\0')) {
        pcVar4 = (char *)(**(code **)(*(longlong *)param_1[5] + 0x40))();
        if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
          *(undefined1 *)param_1[10] = 1;
        }
        else {
          uVar6 = strToFloat(pcVar4,local_res8);
        }
        (**(code **)(*(longlong *)(param_3 + 0x10) + 0x28))(param_1[6],uVar5,uVar6);
      }
      if ((char)param_1[9] == '\0') break;
      cVar3 = (**(code **)(*(longlong *)param_1[5] + 0x28))();
    }
  }
  RepXVisitorReaderBase<physx::PxArticulation>::popCurrentContext(param_1);
  return;
}



// FUNCTION 14394f7b0 PxFixedSizeLookupTableProperty<physx::Vd::PxPvdFixedSizeLookupTablePropertyAccessor<548,physx::PxVehicleEngineData,unsigned_int,float>,physx::PxUnknownClassInfo_const_> body=947 status=ok
// SIG undefined PxFixedSizeLookupTableProperty<physx::Vd::PxPvdFixedSizeLookupTablePropertyAccessor<548,physx::PxVehicleEngineData,unsigned_int,float>,physx::PxUnknownClassInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxVehicleEngineData>::
     PxFixedSizeLookupTableProperty<physx::Vd::PxPvdFixedSizeLookupTablePropertyAccessor<548,physx::PxVehicleEngineData,unsigned_int,float>,physx::PxUnknownClassInfo_const_>
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  char local_108 [32];
  char *local_e8;
  undefined1 uStack_e0;
  uint7 uStack_df;
  char *local_d8;
  undefined1 uStack_d0;
  uint7 uStack_cf;
  char local_c8 [144];
  
  uVar3 = (**(code **)(*(longlong *)(param_3 + 0x10) + 0x20))(param_1[2]);
  uVar8 = 0;
  uVar7 = 0;
  if (uVar3 != 0) {
    do {
      local_108[0] = '\0';
      local_108[1] = '\0';
      local_108[2] = '\0';
      local_108[3] = '\0';
      local_108[4] = '\0';
      local_108[5] = '\0';
      local_108[6] = '\0';
      local_108[7] = '\0';
      local_108[8] = '\0';
      local_108[9] = '\0';
      local_108[10] = '\0';
      local_108[0xb] = '\0';
      local_108[0xc] = '\0';
      local_108[0xd] = '\0';
      local_108[0xe] = '\0';
      local_108[0xf] = '\0';
      local_108[0x10] = '\0';
      local_108[0x11] = '\0';
      local_108[0x12] = '\0';
      local_108[0x13] = '\0';
      local_108[0x14] = '\0';
      local_108[0x15] = '\0';
      local_108[0x16] = '\0';
      local_108[0x17] = '\0';
      local_108[0x18] = '\0';
      local_108[0x19] = '\0';
      local_108[0x1a] = '\0';
      local_108[0x1b] = '\0';
      local_108[0x1c] = '\0';
      local_108[0x1d] = '\0';
      local_108[0x1e] = '\0';
      local_108[0x1f] = 0;
      sprintf(local_108,"id_%u",uVar8);
      lVar6 = *param_1;
      if ((*(int *)(lVar6 + 0x10) != 0) &&
         (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10)
          == '\0')) {
        (**(code **)(*(longlong *)param_1[1] + 0x18))
                  ((longlong *)param_1[1],
                   *(undefined8 *)
                    (*(longlong *)(lVar6 + 8) + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10));
        *(undefined1 *)
         (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
      }
      lVar6 = *param_1;
      local_e8 = local_108;
      uStack_e0 = 0;
      if (*(uint *)(lVar6 + 0x10) < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
        plVar5 = (longlong *)((ulonglong)*(uint *)(lVar6 + 0x10) * 0x10 + *(longlong *)(lVar6 + 8));
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = (longlong)local_e8;
          plVar5[1] = (ulonglong)uStack_df << 8;
        }
        *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
      }
      else {
        shdfnd::
        Array<physx::Sn::NameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::NameStackEntry>_>
        ::growAndPushBack(lVar6,&local_e8);
      }
      (**(code **)(*(longlong *)(param_3 + 0x10) + 0x10))(param_1[2]);
      uVar4 = topName(param_1);
      puVar1 = (undefined8 *)param_1[3];
      plVar5 = (longlong *)param_1[1];
      ::_guard_xfg_dispatch_icall_nop(local_c8,0,0x80);
      physx::shdfnd::snprintf(local_c8,0x80,"%g");
      if (local_c8[0] != '\0') {
        lVar6 = -1;
        do {
          lVar2 = lVar6 + 1;
          lVar6 = lVar6 + 1;
        } while (local_c8[lVar2] != '\0');
        (**(code **)*puVar1)(puVar1,local_c8);
      }
      local_res8[0] = 0;
      (**(code **)*puVar1)(puVar1,local_res8,1);
      (**(code **)(*plVar5 + 0x10))(plVar5,uVar4,puVar1[4]);
      puVar1[3] = 0;
      lVar6 = *param_1;
      if (*(int *)(lVar6 + 0x10) != 0) {
        if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*(longlong *)param_1[1] + 0x20))();
        }
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
      }
      sprintf(local_108,"id_%u",(ulonglong)((int)uVar8 + 1));
      lVar6 = *param_1;
      uVar8 = (ulonglong)((int)uVar8 + 2);
      if ((*(int *)(lVar6 + 0x10) != 0) &&
         (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10)
          == '\0')) {
        (**(code **)(*(longlong *)param_1[1] + 0x18))
                  ((longlong *)param_1[1],
                   *(undefined8 *)
                    (*(longlong *)(lVar6 + 8) + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10));
        *(undefined1 *)
         (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
      }
      lVar6 = *param_1;
      local_d8 = local_108;
      uStack_d0 = 0;
      if (*(uint *)(lVar6 + 0x10) < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
        plVar5 = (longlong *)((ulonglong)*(uint *)(lVar6 + 0x10) * 0x10 + *(longlong *)(lVar6 + 8));
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = (longlong)local_d8;
          plVar5[1] = (ulonglong)uStack_cf << 8;
        }
        *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
      }
      else {
        shdfnd::
        Array<physx::Sn::NameStackEntry,physx::profile::PxProfileWrapperReflectionAllocator<physx::Sn::NameStackEntry>_>
        ::growAndPushBack(lVar6,&local_d8);
      }
      (**(code **)(*(longlong *)(param_3 + 0x10) + 0x18))(param_1[2]);
      uVar4 = topName(param_1);
      puVar1 = (undefined8 *)param_1[3];
      plVar5 = (longlong *)param_1[1];
      ::_guard_xfg_dispatch_icall_nop(local_c8,0,0x80);
      physx::shdfnd::snprintf(local_c8,0x80,"%g");
      if (local_c8[0] != '\0') {
        lVar6 = -1;
        do {
          lVar2 = lVar6 + 1;
          lVar6 = lVar6 + 1;
        } while (local_c8[lVar2] != '\0');
        (**(code **)*puVar1)(puVar1,local_c8);
      }
      local_res8[0] = 0;
      (**(code **)*puVar1)(puVar1,local_res8,1);
      (**(code **)(*plVar5 + 0x10))(plVar5,uVar4,puVar1[4]);
      puVar1[3] = 0;
      lVar6 = *param_1;
      if (*(int *)(lVar6 + 0x10) != 0) {
        if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*(longlong *)param_1[1] + 0x20))();
        }
        *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  return;
}



// FUNCTION 14394fb70 complexProperty<physx::PxRepXPropertyAccessor<655,physx::PxVehicleWheelsSimData,physx::PxVehicleTireLoadFilterData_const_&___ptr64,physx::PxVehicleTireLoadFilterData>,physx::PxVehicleTireLoadFilterDataGeneratedInfo_const_> body=306 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<655,physx::PxVehicleWheelsSimData,physx::PxVehicleTireLoadFilterData_const_&___ptr64,physx::PxVehicleTireLoadFilterData>,physx::PxVehicleTireLoadFilterDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleWheelsSimData>::
     complexProperty<physx::PxRepXPropertyAccessor<655,physx::PxVehicleWheelsSimData,physx::PxVehicleTireLoadFilterData_const_&___ptr64,physx::PxVehicleTireLoadFilterData>,physx::PxVehicleTireLoadFilterDataGeneratedInfo_const_>
               (undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined8 *puVar2;
  char local_b8 [8];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  char *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar1 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)(**(code **)(param_3 + 0x18))(&local_28,param_1[6]);
    local_88 = param_1[1];
    local_68 = param_1[5];
    local_58 = param_1[7];
    local_b0 = *puVar2;
    uStack_a8 = puVar2[1];
    local_50 = param_1[8];
    local_a0 = puVar2[2];
    uStack_98 = puVar2[3];
    local_90 = *param_1;
    local_80 = param_1[2];
    uStack_78 = param_1[3];
    local_60 = &local_b0;
    local_40 = local_b8;
    local_70 = param_1[4];
    local_b8[0] = '\0';
    local_48 = 1;
    local_38 = 0;
    uStack_30 = 0;
    RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
    operator()<416,physx::PxClothStretchConfig,float,float>(&local_90,param_4 + 0x18,1);
    RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
    operator()<416,physx::PxClothStretchConfig,float,float>(&local_90,param_4 + 0x38,2);
    RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
    operator()<416,physx::PxClothStretchConfig,float,float>(&local_90,param_4 + 0x58,3);
    RepXPropertyFilter<physx::Sn::RepXVisitorReader<physx::PxClothStretchConfig>_>::
    operator()<416,physx::PxClothStretchConfig,float,float>(&local_90,param_4 + 0x78,4);
    if (local_b8[0] != '\0') {
      *(undefined1 *)param_1[10] = 1;
    }
    local_28 = (undefined4)local_b0;
    uStack_24 = local_b0._4_4_;
    uStack_20 = (undefined4)uStack_a8;
    uStack_1c = uStack_a8._4_4_;
    local_18 = (undefined4)local_a0;
    uStack_14 = local_a0._4_4_;
    uStack_10 = (undefined4)uStack_98;
    uStack_c = uStack_98._4_4_;
    (**(code **)(param_3 + 0x20))(param_1[6],&local_28);
  }
  return;
}



// FUNCTION 14394fcb0 complexProperty<physx::PxRepXPropertyAccessor<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData>,physx::PxVehicleWheelsSimDataGeneratedInfo_const_> body=207 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData>,physx::PxVehicleWheelsSimDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>::
     complexProperty<physx::PxRepXPropertyAccessor<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData>,physx::PxVehicleWheelsSimDataGeneratedInfo_const_>
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar1 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)(**(code **)(param_3 + 0x18))(&local_68,*(undefined8 *)(param_1 + 0x30));
    local_c8 = *puVar2;
    uStack_c0 = puVar2[1];
    local_b8 = puVar2[2];
    uStack_b0 = puVar2[3];
    local_a8 = puVar2[4];
    uStack_a0 = puVar2[5];
    local_98 = puVar2[6];
    uStack_90 = puVar2[7];
    local_88 = *(undefined4 *)(puVar2 + 8);
    uStack_84 = *(undefined4 *)((longlong)puVar2 + 0x44);
    uStack_80 = *(undefined4 *)(puVar2 + 9);
    uStack_7c = *(undefined4 *)((longlong)puVar2 + 0x4c);
    local_78 = *(undefined4 *)(puVar2 + 10);
    uStack_74 = *(undefined4 *)((longlong)puVar2 + 0x54);
    uStack_70 = *(undefined4 *)(puVar2 + 0xb);
    uStack_6c = *(undefined4 *)((longlong)puVar2 + 0x5c);
    readComplexObj<physx::PxVehicleWheelsSimData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDrive4W>,physx::PxVehicleWheelsSimDataGeneratedInfo>
              (param_1,&local_c8,param_4);
    local_68 = local_c8;
    uStack_60 = uStack_c0;
    local_58 = local_b8;
    uStack_50 = uStack_b0;
    local_48 = local_a8;
    uStack_40 = uStack_a0;
    local_38 = local_98;
    uStack_30 = uStack_90;
    local_28 = local_88;
    uStack_24 = uStack_84;
    uStack_20 = uStack_80;
    uStack_1c = uStack_7c;
    local_18 = local_78;
    uStack_14 = uStack_74;
    uStack_10 = uStack_70;
    uStack_c = uStack_6c;
    (**(code **)(param_3 + 0x20))(*(undefined8 *)(param_1 + 0x30),&local_68);
  }
  return;
}



// FUNCTION 14394fd80 complexProperty<physx::PxRepXPropertyAccessor<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData>,physx::PxVehicleWheelsSimDataGeneratedInfo_const_> body=227 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData>,physx::PxVehicleWheelsSimDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxVehicleDrive4W>::
     complexProperty<physx::PxRepXPropertyAccessor<672,physx::PxVehicleWheels,physx::PxVehicleWheelsSimData,physx::PxVehicleWheelsSimData>,physx::PxVehicleWheelsSimDataGeneratedInfo_const_>
               (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 *local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined1 local_2d8 [720];
  
  puVar5 = (undefined8 *)(**(code **)(param_3 + 0x18))(&local_398,param_1[2]);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[3];
  local_338 = *puVar5;
  uStack_330 = puVar5[1];
  uVar4 = param_1[4];
  local_328 = puVar5[2];
  uStack_320 = puVar5[3];
  local_318 = puVar5[4];
  uStack_310 = puVar5[5];
  local_308 = puVar5[6];
  uStack_300 = puVar5[7];
  local_2f8 = *(undefined4 *)(puVar5 + 8);
  uStack_2f4 = *(undefined4 *)((longlong)puVar5 + 0x44);
  uStack_2f0 = *(undefined4 *)(puVar5 + 9);
  uStack_2ec = *(undefined4 *)((longlong)puVar5 + 0x4c);
  local_2e8 = *(undefined4 *)(puVar5 + 10);
  uStack_2e4 = *(undefined4 *)((longlong)puVar5 + 0x54);
  uStack_2e0 = *(undefined4 *)(puVar5 + 0xb);
  uStack_2dc = *(undefined4 *)((longlong)puVar5 + 0x5c);
  PxVehicleWheelsSimDataGeneratedInfo::PxVehicleWheelsSimDataGeneratedInfo(local_2d8);
  local_388 = &local_338;
  local_370 = 0;
  uStack_368 = 0;
  local_398 = uVar1;
  local_390 = uVar2;
  local_380 = uVar3;
  local_378 = uVar4;
  PxVehicleWheelsSimDataGeneratedInfo::
  visitInstanceProperties<physx::RepXPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsSimData>_>_>
            (local_2d8,&local_398,0);
  return;
}



// FUNCTION 14394fe70 complexProperty<physx::PxRepXPropertyAccessor<673,physx::PxVehicleWheels,physx::PxVehicleWheelsDynData,physx::PxVehicleWheelsDynData>,physx::PxVehicleWheelsDynDataGeneratedInfo_const_> body=206 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<673,physx::PxVehicleWheels,physx::PxVehicleWheelsDynData,physx::PxVehicleWheelsDynData>,physx::PxVehicleWheelsDynDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxVehicleDrive4W>::
     complexProperty<physx::PxRepXPropertyAccessor<673,physx::PxVehicleWheels,physx::PxVehicleWheelsDynData,physx::PxVehicleWheelsDynData>,physx::PxVehicleWheelsDynDataGeneratedInfo_const_>
               (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_98 [24];
  undefined1 local_80 [48];
  undefined1 local_50 [72];
  
  puVar5 = (undefined8 *)(**(code **)(param_3 + 0x18))(&local_108,param_1[2]);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[3];
  local_d0 = *puVar5;
  uStack_c8 = puVar5[1];
  uVar4 = param_1[4];
  local_c0 = *(undefined4 *)(puVar5 + 2);
  uStack_bc = *(undefined4 *)((longlong)puVar5 + 0x14);
  uStack_b8 = *(undefined4 *)(puVar5 + 3);
  uStack_b4 = *(undefined4 *)((longlong)puVar5 + 0x1c);
  local_b0 = *(undefined4 *)(puVar5 + 4);
  uStack_ac = *(undefined4 *)((longlong)puVar5 + 0x24);
  uStack_a8 = *(undefined4 *)(puVar5 + 5);
  uStack_a4 = *(undefined4 *)((longlong)puVar5 + 0x2c);
  PxVehicleWheelsDynDataGeneratedInfo::PxVehicleWheelsDynDataGeneratedInfo(local_98);
  local_f8 = &local_d0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_108 = uVar1;
  local_100 = uVar2;
  local_f0 = uVar3;
  local_e8 = uVar4;
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsDynData>_>::
  operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>(&local_108,local_80,1);
  Vd::PvdPropertyFilter<physx::Sn::RepXVisitorWriter<physx::PxVehicleWheelsDynData>_>::
  operator()<664,physx::PxVehicleWheelsDynData,unsigned_int_const_,float>(&local_108,local_50,2);
  return;
}



// FUNCTION 14394ff40 complexProperty<physx::PxRepXPropertyAccessor<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>,physx::PxVehicleEngineDataGeneratedInfo_const_> body=290 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>,physx::PxVehicleEngineDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>::
     complexProperty<physx::PxRepXPropertyAccessor<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>,physx::PxVehicleEngineDataGeneratedInfo_const_>
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  void *_Src;
  undefined1 local_f8 [64];
  int local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [64];
  int local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar2 = RepXVisitorReaderBase<physx::PxClothMotionConstraintConfig>::gotoTopName();
  if (cVar2 != '\0') {
    _Src = (void *)(**(code **)(param_3 + 0x18))(local_88,*(undefined8 *)(param_1 + 0x30));
    ::_guard_xfg_dispatch_icall_nop
              (local_f8,_Src,(ulonglong)(uint)(*(int *)((longlong)_Src + 0x40) << 3));
    local_b8 = *(int *)((longlong)_Src + 0x40);
    local_a8 = *(undefined4 *)((longlong)_Src + 0x50);
    uStack_a4 = *(undefined4 *)((longlong)_Src + 0x54);
    uStack_a0 = *(undefined4 *)((longlong)_Src + 0x58);
    uStack_9c = *(undefined4 *)((longlong)_Src + 0x5c);
    local_98 = *(undefined4 *)((longlong)_Src + 0x60);
    uStack_94 = *(undefined4 *)((longlong)_Src + 100);
    uStack_90 = *(undefined4 *)((longlong)_Src + 0x68);
    uStack_8c = *(undefined4 *)((longlong)_Src + 0x6c);
    readComplexObj<physx::PxVehicleEngineData,physx::Sn::RepXVisitorReaderBase<physx::PxVehicleDriveSimData4W>,physx::PxVehicleEngineDataGeneratedInfo>
              (param_1,local_f8,param_4);
    iVar1 = local_b8;
    ::_guard_xfg_dispatch_icall_nop(local_88,local_f8,(ulonglong)(uint)(local_b8 * 8));
    local_38 = CONCAT44(uStack_a4,local_a8);
    uStack_30 = CONCAT44(uStack_9c,uStack_a0);
    local_48 = iVar1;
    local_28 = local_98;
    uStack_24 = uStack_94;
    uStack_20 = uStack_90;
    uStack_1c = uStack_8c;
    (**(code **)(param_3 + 0x20))(*(undefined8 *)(param_1 + 0x30),local_88);
  }
  return;
}



// FUNCTION 143950070 complexProperty<physx::PxRepXPropertyAccessor<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>,physx::PxVehicleEngineDataGeneratedInfo_const_> body=222 status=ok
// SIG undefined complexProperty<physx::PxRepXPropertyAccessor<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>,physx::PxVehicleEngineDataGeneratedInfo_const_>(void)

void physx::Sn::RepXVisitorWriterBase<physx::PxVehicleDriveSimData4W>::
     complexProperty<physx::PxRepXPropertyAccessor<696,physx::PxVehicleDriveSimData,physx::PxVehicleEngineData_const_&___ptr64,physx::PxVehicleEngineData>,physx::PxVehicleEngineDataGeneratedInfo_const_>
               (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  void *_Src;
  undefined1 local_e8 [64];
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [112];
  
  _Src = (void *)(**(code **)(param_3 + 0x18))(local_78,param_1[2]);
  ::_guard_xfg_dispatch_icall_nop
            (local_e8,_Src,(ulonglong)(uint)(*(int *)((longlong)_Src + 0x40) << 3));
  local_a8 = *(undefined4 *)((longlong)_Src + 0x40);
  local_98 = *(undefined4 *)((longlong)_Src + 0x50);
  local_94 = *(undefined4 *)((longlong)_Src + 0x54);
  local_90 = *(undefined4 *)((longlong)_Src + 0x58);
  local_8c = *(undefined4 *)((longlong)_Src + 0x5c);
  local_88 = *(undefined4 *)((longlong)_Src + 0x60);
  local_84 = *(undefined4 *)((longlong)_Src + 100);
  local_80 = *(undefined4 *)((longlong)_Src + 0x68);
  local_7c = *(undefined4 *)((longlong)_Src + 0x6c);
  writeAllProperties<physx::PxVehicleEngineData>(*param_1,local_e8,param_1[1],param_1[3],param_1[4])
  ;
  return;
}


