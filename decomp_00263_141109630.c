// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141109630 FUN_141109630 body=605 status=ok
// SIG undefined FUN_141109630(void)

void FUN_141109630(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined4 in_stack_ffffffffffffff78;
  undefined2 uVar8;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  uVar8 = (undefined2)((uint)in_stack_ffffffffffffff78 >> 0x10);
  if (*(longlong *)(param_1 + 0xa28) != 0) {
    if (*(char *)(param_1 + 0xa39) == '\0') {
      *(undefined1 *)(param_1 + 0xa39) = 1;
      local_78[0] = 0;
      local_78[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
      FGenericPlatformString::Convert<char,wchar_t>
                (local_78[0],5,&DAT_1446a8b04,5,CONCAT22(uVar8,0x3f));
      FUN_142088910(*(undefined8 *)(param_1 + 0xa28),local_78);
      if (local_78[0] != 0) {
        FMemory::Free();
      }
    }
    FUN_141105fc0(param_1);
    puVar6 = (undefined8 *)FName::FName(local_res8,L"OnTestMapsClicked",1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,L"MAPS",L"MainMenu",L"MapsText");
    uVar5 = FUN_141104250(param_1,uVar7,*puVar6,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x970) = uVar5;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    puVar6 = (undefined8 *)FName::FName(local_res10,L"OnMultiplayerDebugClicked",1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"MULTIPLAYER",L"MainMenu",L"MultiplayerText");
    uVar5 = FUN_141104250(param_1,uVar7,*puVar6,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x974) = uVar5;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    puVar6 = (undefined8 *)FName::FName(local_res18,L"OnCreditsClicked",1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"CREDITS",L"MainMenu",L"CreditsText");
    uVar5 = FUN_141104250(param_1,uVar7,*puVar6,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x978) = uVar5;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141109890 FUN_141109890 body=1958 status=ok
// SIG undefined FUN_141109890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141109890(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 auStack_258 [32];
  int local_238;
  longlong *local_230;
  undefined4 local_228;
  longlong local_218;
  longlong local_208;
  longlong *plStack_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  longlong *plStack_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  longlong local_1a8;
  longlong *plStack_1a0;
  undefined4 *local_198;
  longlong *plStack_190;
  undefined8 local_188;
  longlong local_180;
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined4 *local_168;
  longlong *plStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [8];
  longlong *local_140;
  undefined **local_130 [2];
  longlong *local_120;
  longlong local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [24];
  undefined4 local_80 [4];
  undefined1 local_70 [8];
  longlong *local_68;
  char local_58;
  longlong local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar7 != 0) {
    local_218 = lVar7;
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_208 = 0;
      plStack_200 = (longlong *)0x0;
      lVar8 = UGameInstance::FindLocalPlayerFromControllerId(lVar7,*(undefined4 *)(param_1 + 0x9c8))
      ;
      if (lVar8 != 0) {
        FUN_140be8c40(param_1 + 0x9b8,0);
        lVar8 = FUN_142547580(lVar8,local_130);
        local_50 = *(longlong *)(lVar8 + 8);
        plStack_48 = *(longlong **)(lVar8 + 0x10);
        local_1e8 = 0;
        plVar13 = (longlong *)0x0;
        if (plStack_48 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_48 + 1) = (int)plStack_48[1] + 1;
          UNLOCK();
          local_1e8 = local_208;
          plVar13 = plStack_200;
        }
        local_208 = local_50;
        plStack_200 = plStack_48;
        plStack_1e0 = plVar13;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar13 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_1e0 + 8))(plStack_1e0,1);
            }
          }
        }
        local_130[0] = &PTR_FUN_143f740c8;
        if (local_118 != 0) {
          FMemory::Free();
        }
        local_130[0] = &PTR_FUN_143f73d18;
        if (local_120 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_120 + 1;
          lVar8 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_120)(local_120);
            LOCK();
            piVar2 = (int *)((longlong)local_120 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_120 + 8))(local_120,1);
            }
          }
        }
        if (local_208 != 0) {
          local_1a8 = local_208;
          plStack_1a0 = plStack_200;
          if (plStack_200 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_200 + 1) = (int)plStack_200[1] + 1;
            UNLOCK();
          }
          FUN_140bbc650(lVar7,param_1 + 0x9b8,&local_1a8);
          plVar13 = plStack_1a0;
          if (plStack_1a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_1a0 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_1a0)(plStack_1a0);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
        }
        FUN_141105fc0();
        if (0 < *(int *)(param_1 + 0x9c0)) {
          uVar12 = 0;
          do {
            if (*(int *)(param_1 + 0x9c0) <= (int)uVar12) break;
            local_1f8 = 0;
            lVar8 = uVar12 * 0xe8 + *(longlong *)(param_1 + 0x9b8);
            local_1f0 = 0;
            if ((*(longlong *)(lVar8 + 0x10) != 0) &&
               (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x58c), cVar5 != '\0')) {
              uVar9 = FWeakObjectPtr::Get(param_1 + 0x58c);
              local_1d8 = *(undefined8 *)(lVar8 + 0x10);
              local_1d0 = *(longlong **)(lVar8 + 0x18);
              if (local_1d0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
                UNLOCK();
              }
              local_230 = &local_1f8;
              local_228 = 0x42200000;
              local_238 = CONCAT31(local_238._1_3_,1);
              FUN_140d7a1d0(*(undefined8 *)(lVar7 + 0x478),&local_1d8,uVar9,1);
              plVar13 = local_1d0;
              if (local_1d0 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_1d0 + 1;
                lVar8 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_1d0)(local_1d0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
            }
            FText::FText(local_1c8);
            if ((int)local_1f0 < 2) {
              uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_108,L"Join Player\'s Game",L"GFxMainAndPauseBaseMenu",
                                 L"SessionInviteJoinNoName");
              FText::operator=(local_1c8,uVar9);
              plVar13 = local_100;
              if (local_100 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_100 + 1;
                lVar8 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_100)(local_100);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
            }
            else {
              lVar7 = FText::FromString(local_98,&local_1f8);
              uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_d8,L"Join {0}",L"GFxMainAndPauseBaseMenu",
                                 L"SessionInviteJoin");
              puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_a8,uVar9);
              local_80[0] = 4;
              FText::FText(local_70,lVar7);
              local_188 = *puVar10;
              local_198 = local_80;
              plStack_190 = &local_50;
              local_180 = puVar10[1];
              local_58 = '\x01';
              if (local_180 != 0) {
                LOCK();
                *(int *)(local_180 + 8) = *(int *)(local_180 + 8) + 1;
                UNLOCK();
              }
              local_168 = local_198;
              plStack_160 = plStack_190;
              uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                      TArray<FFormatArgumentValue,FDefaultAllocator>(local_158,&local_168);
              uVar9 = FText::Format(local_f0,&local_188,uVar9);
              FText::FText(local_148,uVar9);
              plVar13 = local_e8;
              if (local_e8 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_e8 + 1;
                lVar8 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_e8)(local_e8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
              TArray<FFormatArgumentValue,FDefaultAllocator>::
              ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_158);
              plVar13 = local_68;
              if ((local_58 != '\0') && (local_58 = '\0', local_68 != (longlong *)0x0)) {
                LOCK();
                plVar1 = local_68 + 1;
                lVar8 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_68)(local_68);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
              plVar13 = (longlong *)puVar10[1];
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar13 + 1;
                lVar8 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
              plVar13 = *(longlong **)(lVar7 + 8);
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar13 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
              FText::operator=(local_1c8,local_148);
              plVar13 = local_140;
              if (local_140 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_140 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_140)(local_140);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
              plVar13 = local_d0;
              lVar7 = local_218;
              if (local_d0 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_d0 + 1;
                lVar8 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_d0)(local_d0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  lVar7 = local_218;
                  if (iVar3 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                    lVar7 = local_218;
                  }
                }
              }
            }
            puVar10 = (undefined8 *)FName::FName(local_178,L"OnInviteListItemClicked",1);
            local_238 = (int)uVar12;
            uVar6 = FUN_141104250(param_1,local_1c8,*puVar10,0);
            plVar13 = local_1c0;
            *(undefined4 *)(param_1 + 0x954 + uVar12 * 4) = uVar6;
            if (local_1c0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_1c0 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_1c0)(local_1c0);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
            }
            if (local_1f8 != 0) {
              FMemory::Free();
            }
            bVar11 = (char)uVar12 + 1;
            uVar12 = (ulonglong)bVar11;
          } while (bVar11 < 5);
        }
        puVar10 = (undefined8 *)FName::FName(local_170,L"OnInviteListClearClicked",1);
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_c0,L"Clear All Invites",L"GFxMainAndPauseBaseMenu",
                           L"SessionInviteClear");
        local_238 = 0xffffffff;
        uVar6 = FUN_141104250(param_1,uVar9,*puVar10,0);
        *(undefined4 *)(param_1 + 0x96c) = uVar6;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_b8 + 1;
          lVar7 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar2 = (int *)((longlong)local_b8 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_b8 + 8))(local_b8,1);
            }
          }
        }
        plVar13 = plStack_200;
        if (plStack_200 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_200 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_200)(plStack_200);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_200 + 8))(plStack_200,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14110a040 FUN_14110a040 body=2555 status=ok
// SIG undefined FUN_14110a040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14110a040(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 uVar13;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  longlong *local_248;
  int local_240;
  longlong local_238 [2];
  longlong *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong *local_208;
  longlong *local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [16];
  undefined4 local_60 [2];
  undefined8 local_58;
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  if ((param_1[0x145] != 0) && (*(char *)((longlong)param_1 + 0xa39) == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0xa39) = 1;
    local_238[0] = 0;
    local_238[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_238,0);
    local_258 = CONCAT22(local_258._2_2_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_238[0],5,&DAT_1446a8b04);
    FUN_142088910(param_1[0x145],local_238);
    if (local_238[0] != 0) {
      FMemory::Free();
    }
  }
  if (param_1[0x130] == 0) {
    return;
  }
  FUN_141105fc0(param_1);
  lVar7 = FUN_140f9aee0(param_1);
  uVar4 = 1;
  uVar13 = 1;
  if ((lVar7 != 0) && (cVar3 = FUN_140bc2e40(lVar7), uVar4 = 1, cVar3 != '\0')) {
    puVar8 = (undefined8 *)FName::FName(local_1e8,L"OnInvitesClicked",1);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_160,L"INVITES",L"MainMenu",L"InvitesText");
    local_258 = 0xffffffff;
    uVar5 = FUN_141104250(param_1,uVar9,*puVar8,0);
    uVar13 = 0;
    *(undefined4 *)(param_1 + 0x11a) = uVar5;
    uVar4 = 0;
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_158 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar1 = (int *)((longlong)local_158 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar4 = 0;
        if (iVar2 == 1) {
          (**(code **)(*local_158 + 8))(local_158,1);
          uVar13 = 0;
        }
      }
    }
  }
  cVar3 = FOutputDevice::CanBeUsedOnAnyThread();
  if ((cVar3 == '\0') && (cVar3 = FUN_141107e50(param_1), cVar3 == '\0')) {
    puVar8 = (undefined8 *)FName::FName(local_1e0,L"OnStartGameClicked",1);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_148,L"NEW GAME",L"MainMenu",L"NewGameText");
    local_258 = 0xffffffff;
    uVar5 = FUN_141104250(param_1,uVar9,*puVar8,uVar4);
    *(undefined4 *)(param_1 + 0x11d) = uVar5;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_140 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)local_140 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
    if (param_1[0x155] == 0) {
      uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar10 = (longlong *)FUN_140d3a420(uVar9);
      if (plVar10 != (longlong *)0x0) {
        uStack_210 = (ulonglong *)((ulonglong)uStack_210 & 0xffffffff00000000);
        local_248 = (longlong *)0x0;
        local_218 = (undefined4 *)&LAB_1411173d0;
        plVar11 = (longlong *)FMemory::Realloc(0,0x30);
        local_240 = 3;
        local_248 = plVar11;
        if (plVar11 != (longlong *)0x0) {
          *plVar11 = (longlong)&PTR_FUN_144060be0;
          FWeakObjectPtr::operator=(plVar11 + 1,param_1);
          *(undefined4 *)(plVar11 + 2) = (undefined4)local_218;
          *(undefined4 *)((longlong)plVar11 + 0x14) = local_218._4_4_;
          *(undefined4 *)(plVar11 + 3) = (undefined4)uStack_210;
          *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_210._4_4_;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar11[5] = lVar7;
          *plVar11 = (longlong)&PTR_FUN_144060c28;
        }
        plVar10 = (longlong *)(**(code **)(*plVar10 + 0x140))(plVar10,local_1d8,&local_248);
        param_1[0x155] = *plVar10;
        if (local_240 != 0) {
          if (local_248 == (longlong *)0x0) goto LAB_14110a47c;
          (**(code **)(*local_248 + 0x28))(local_248,0);
          if (local_248 != (longlong *)0x0) {
            local_248 = (longlong *)FMemory::Realloc(local_248,0,0);
          }
          local_240 = 0;
        }
        if (local_248 != (longlong *)0x0) {
          FMemory::Free(local_248);
        }
      }
    }
  }
  else {
    puVar8 = (undefined8 *)FName::FName(local_1d0,L"OnPlayClicked",1);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_130,L"PLAY",L"MainMenu",L"PlayText");
    local_258 = 0xffffffff;
    uVar5 = FUN_141104250(param_1,uVar9,*puVar8,uVar13);
    *(undefined4 *)(param_1 + 0x116) = uVar5;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_128 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    iVar2 = (int)param_1[0x116];
    if ((-1 < iVar2) && (iVar2 < (int)param_1[0x115])) {
      lVar7 = param_1[0x114];
      uVar4 = FUN_1411343b0(param_1);
      FUN_142ed3eb0(*(undefined8 *)((longlong)iVar2 * 0x38 + lVar7),uVar4);
    }
    if (param_1[0x155] != 0) {
      uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar10 = (longlong *)FUN_140d3a420(uVar9);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x148))(plVar10,param_1 + 0x155);
      }
    }
  }
LAB_14110a47c:
  puVar8 = (undefined8 *)FName::FName(local_1c8,L"OnSocialCoreClicked",1);
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_118,L"SOCIAL",L"MainMenu",L"SocialCoreText");
  local_258 = 0xffffffff;
  uVar5 = FUN_141104250(param_1,uVar9,*puVar8,0);
  *(undefined4 *)((longlong)param_1 + 0x904) = uVar5;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_110 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)local_110 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  local_228 = param_1;
  FUN_1410fd1a0(&local_228,0x15);
  FUN_1410fd1a0(&local_228,0x16);
  lVar7 = DAT_146875640;
  if ((char)param_1[0x16b] == '\0') {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar6 = GetCurrentThreadId();
      lVar12 = 4;
      if (DVar6 == DAT_1468c21c0) goto LAB_14110a56b;
    }
    else {
LAB_14110a56b:
      lVar12 = 0;
    }
    if (*(int *)(lVar12 + lVar7) == 0) goto LAB_14110a604;
  }
  puVar8 = (undefined8 *)FName::FName(local_1c0,L"OnBehindTheScenesClicked",1);
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_100,L"BEHIND THE SCENES",L"MainMenu",L"BehindTheScenesText");
  local_258 = 0xffffffff;
  uVar5 = FUN_141104250(param_1,uVar9,*puVar8,0);
  *(undefined4 *)((longlong)param_1 + 0x8bc) = uVar5;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_f8 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar1 = (int *)((longlong)local_f8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8,1);
      }
    }
  }
LAB_14110a604:
  puVar8 = (undefined8 *)FName::FName(local_1b8,L"OnOptionsClicked",1);
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_e8,L"OPTIONS",L"MainMenu",L"OptionsText");
  local_258 = 0xffffffff;
  uVar5 = FUN_141104250(param_1,uVar9,*puVar8,0);
  *(undefined4 *)(param_1 + 0x118) = uVar5;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_e0 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  local_220 = 0;
  FUN_1404cf2e0(&local_208,0);
  if (local_208 != (longlong *)0x0) {
    cVar3 = (**(code **)(*local_208 + 0x10))(local_208,1);
    if (cVar3 != '\0') {
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_b8,&DAT_1446abd40,L"MainMenu",L"StoreText");
      puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_70,uVar9);
      local_60[0] = 0;
      local_218 = local_60;
      local_38 = '\0';
      uStack_210 = &local_30;
      local_1f8 = *puVar8;
      local_1f0 = puVar8[1];
      local_58 = 0;
      if (local_1f0 != 0) {
        LOCK();
        *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
        UNLOCK();
      }
      local_198 = local_218;
      uStack_190 = uStack_210;
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_188,&local_198);
      uVar9 = FText::Format(local_d0,&local_1f8,uVar9);
      FText::FText(local_178,uVar9);
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_c8 + 1;
        lVar7 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)local_c8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_c8 + 8))(local_c8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_188);
      if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
        LOCK();
        plVar10 = local_48 + 1;
        lVar7 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      plVar10 = (longlong *)puVar8[1];
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar10 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      puVar8 = (undefined8 *)FName::FName(local_1b0,L"OnStoreClicked",1);
      local_258 = 0xffffffff;
      uVar5 = FUN_141104250(param_1,local_178,*puVar8,0);
      *(undefined4 *)((longlong)param_1 + 0x8c4) = uVar5;
      if (local_170 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_170 + 1;
        lVar7 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar1 = (int *)((longlong)local_170 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_170 + 8))(local_170,1);
          }
        }
      }
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_b0 + 1;
        lVar7 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
    }
  }
  cVar3 = FUN_141111180(param_1);
  if (cVar3 == '\0') {
    puVar8 = (undefined8 *)FName::FName(local_1a0,L"OnQuitClicked",1);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,L"QUIT GAME",L"MainMenu",L"QuitText");
    local_258 = 0xffffffff;
    uVar5 = FUN_141104250(param_1,uVar9,*puVar8,0);
    *(undefined4 *)((longlong)param_1 + 0x8cc) = uVar5;
    plVar10 = local_80;
  }
  else {
    puVar8 = (undefined8 *)FName::FName(local_1a8,L"OnLeaveGroupClicked",1);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"LEAVE GROUP",L"MainMenu",L"DisconnectText");
    local_258 = 0xffffffff;
    uVar5 = FUN_141104250(param_1,uVar9,*puVar8,0);
    *(undefined4 *)(param_1 + 0x119) = uVar5;
    plVar10 = local_98;
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar10 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = local_200;
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_200 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_200 + 8))(local_200,1);
      }
    }
  }
  return;
}



// FUNCTION 14110aa40 FUN_14110aa40 body=1001 status=ok
// SIG undefined FUN_14110aa40(void)

void FUN_14110aa40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 in_stack_ffffffffffffff18;
  undefined2 uVar8;
  longlong local_d8 [2];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  uVar8 = (undefined2)((uint)in_stack_ffffffffffffff18 >> 0x10);
  if (*(longlong *)(param_1 + 0xa28) != 0) {
    if (*(char *)(param_1 + 0xa39) == '\0') {
      *(undefined1 *)(param_1 + 0xa39) = 1;
      local_d8[0] = 0;
      local_d8[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
      FGenericPlatformString::Convert<char,wchar_t>
                (local_d8[0],5,&DAT_1446a8b04,5,CONCAT22(uVar8,0x3f));
      FUN_142088910(*(undefined8 *)(param_1 + 0xa28),local_d8);
      if (local_d8[0] != 0) {
        FMemory::Free();
      }
    }
    FUN_141105fc0(param_1);
    puVar6 = (undefined8 *)FName::FName(local_res8,L"OnGraphicsClicked",1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,L"VISUALS",L"MainMenu",L"VisualsText");
    uVar5 = FUN_141104250(param_1,uVar7,*puVar6,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x93c) = uVar5;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    puVar6 = (undefined8 *)FName::FName(local_res10,L"OnAudioClicked",1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"SOUND",L"MainMenu",L"SoundText");
    uVar5 = FUN_141104250(param_1,uVar7,*puVar6,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x940) = uVar5;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)local_98 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    puVar6 = (undefined8 *)FName::FName(local_res18,L"OnControlsClicked",1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,L"CONTROLS",L"MainMenu",L"ControlsText");
    uVar5 = FUN_141104250(param_1,uVar7,*puVar6,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x944) = uVar5;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    puVar6 = (undefined8 *)FName::FName(local_res20,L"OnGameplayClicked",1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,L"GAMEPLAY",L"MainMenu",L"GameplayText");
    uVar5 = FUN_141104250(param_1,uVar7,*puVar6,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x948) = uVar5;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    puVar6 = (undefined8 *)FName::FName(local_c8,L"OnNetworkClicked",1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"NETWORK & SOCIAL",L"MainMenu",L"NetworkText");
    uVar5 = FUN_141104250(param_1,uVar7,*puVar6,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x94c) = uVar5;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    puVar6 = (undefined8 *)FName::FName(local_c0,L"OnAccessibilityClicked",1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"ACCESSIBILITY",L"MainMenu",L"AccessibilityText");
    uVar5 = FUN_141104250(param_1,uVar7,*puVar6,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x950) = uVar5;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14110ae30 FUN_14110ae30 body=2751 status=ok
// SIG undefined FUN_14110ae30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14110ae30(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined *puVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined4 *local_1b8;
  ulonglong *puStack_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [16];
  undefined4 local_68 [2];
  undefined8 local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if (param_1[0x145] == 0) {
    return;
  }
  plVar16 = (longlong *)0x0;
  if (*(char *)((longlong)param_1 + 0xa39) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa39) = 1;
    local_1c8 = 0;
    local_1c0 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
    local_1e8 = CONCAT22(local_1e8._2_2_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_1c8,5,&DAT_1446a8b04);
    FUN_142088910(param_1[0x145],&local_1c8);
    if (local_1c8 != 0) {
      FMemory::Free();
    }
  }
  FUN_141105fc0(param_1);
  cVar3 = FUN_141111180(param_1);
  if ((cVar3 == '\0') && (lVar8 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c), lVar8 != 0)) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (((bVar17) && (lVar8 = FUN_140cfbfb0(lVar8), local_198 = lVar8, lVar8 != 0)) &&
       (cVar3 = FWebMMovieStreamer::IsLastMovieInPlaylist(lVar8), cVar3 == '\0')) {
      lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar9 == 0) {
LAB_14110afd0:
        bVar17 = false;
      }
      else {
        uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar9 = UWorld::GetGameState<APVPGameState>(uVar10);
        if (lVar9 == 0) goto LAB_14110afd0;
        iVar5 = FUN_140cb6340(lVar9);
        if (iVar5 + -1 < 1) goto LAB_14110afd0;
        lVar8 = FUN_140d3b5c0(lVar8,iVar5 + -1);
        if (lVar8 == 0) {
          bVar17 = true;
        }
        else {
          bVar17 = *(int *)(lVar8 + 8) == 0;
        }
      }
      if (bVar17) {
        puVar11 = (undefined8 *)FName::FName(local_188,L"OnNewPlaythroughClicked",1);
        local_1e8 = 0xffffffff;
        uVar6 = FUN_141104250(param_1,&DAT_146875580,*puVar11,0);
        *(undefined4 *)((longlong)param_1 + 0x8e4) = uVar6;
      }
      else {
        puVar11 = (undefined8 *)FName::FName(local_190,L"OnContinueClicked",1);
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_120,L"CONTINUE",L"MainMenu",L"ContinueText");
        local_1e8 = 0xffffffff;
        uVar6 = FUN_141104250(param_1,uVar10,*puVar11,0);
        *(undefined4 *)(param_1 + 0x11c) = uVar6;
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_118 + 1;
          lVar8 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar1 = (int *)((longlong)local_118 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_118 + 8))(local_118,1);
            }
          }
        }
      }
    }
  }
  cVar3 = FUN_141111180(param_1);
  if (cVar3 == '\0') {
    puVar11 = (undefined8 *)FName::FName(local_180,L"OnStartGameClicked",1);
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_108,L"NEW GAME",L"MainMenu",L"NewGameText");
    local_1e8 = 0xffffffff;
    uVar6 = FUN_141104250(param_1,uVar10,*puVar11,0);
    *(undefined4 *)(param_1 + 0x11d) = uVar6;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_100 + 1;
      lVar8 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar8 = FUN_142f6caf0(uVar10);
    if ((lVar8 != 0) && (lVar9 = FUN_14110ce00(), lVar9 != 0)) {
      local_1d8 = (longlong *)0x0;
      local_1d0 = 0;
      FUN_1404ccea0(lVar9,&local_1d8);
      plVar13 = local_1d8 + (int)local_1d0;
      for (plVar14 = local_1d8; plVar14 != plVar13; plVar14 = plVar14 + 1) {
        lVar9 = *plVar14;
        if (lVar9 != 0) {
          lVar12 = FUN_141304350();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
            bVar17 = false;
          }
          else {
            bVar17 = true;
          }
          if ((bVar17) && (iVar5 = FUN_14110f010(lVar8,lVar9), iVar5 == 1)) {
            if (local_1d8 != (longlong *)0x0) {
              FMemory::Free();
            }
            uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                               (local_d8,
                                L"START {0}|platform(default=ADD-ON, xbox=ADD-ON, playstation=ADD-ON, stadia=ADD-ON)"
                                ,L"MainMenu",L"StartDLCText");
            puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_78,uVar10);
            local_68[0] = 0;
            local_1b8 = local_68;
            local_40 = '\0';
            puStack_1b0 = local_38;
            local_1a8 = *puVar11;
            local_1a0 = puVar11[1];
            local_60 = 0;
            if (local_1a0 != 0) {
              LOCK();
              *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
              UNLOCK();
            }
            uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                     TArray<FFormatArgumentValue,FDefaultAllocator>(local_148,&local_1b8);
            uVar10 = FText::Format(local_f0,&local_1a8,uVar10);
            FText::FText(local_138,uVar10);
            if (local_e8 != (longlong *)0x0) {
              LOCK();
              plVar13 = local_e8 + 1;
              lVar8 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_e8)(local_e8);
                LOCK();
                piVar1 = (int *)((longlong)local_e8 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_e8 + 8))(local_e8,1);
                }
              }
            }
            TArray<FFormatArgumentValue,FDefaultAllocator>::
            ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_148);
            if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
              LOCK();
              plVar13 = local_50 + 1;
              lVar8 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_50)(local_50);
                LOCK();
                piVar1 = (int *)((longlong)local_50 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_50 + 8))(local_50,1);
                }
              }
            }
            plVar13 = (longlong *)puVar11[1];
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              plVar14 = plVar13 + 1;
              lVar8 = *plVar14;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
            }
            puVar11 = (undefined8 *)FName::FName(local_178,L"OnStartDLCClicked",1);
            local_1e8 = 0xffffffff;
            uVar6 = FUN_141104250(param_1,local_138,*puVar11,0);
            *(undefined4 *)(param_1 + 0x11f) = uVar6;
            if (local_130 != (longlong *)0x0) {
              LOCK();
              plVar13 = local_130 + 1;
              lVar8 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_130)(local_130);
                LOCK();
                piVar1 = (int *)((longlong)local_130 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_130 + 8))(local_130,1);
                }
              }
            }
            if (local_d0 != (longlong *)0x0) {
              LOCK();
              plVar13 = local_d0 + 1;
              lVar8 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_d0)(local_d0);
                LOCK();
                piVar1 = (int *)((longlong)local_d0 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_d0 + 8))(local_d0,1);
                }
              }
            }
            goto LAB_14110b224;
          }
        }
      }
      if (local_1d8 != (longlong *)0x0) {
        FMemory::Free(local_1d8);
      }
    }
  }
LAB_14110b224:
  cVar3 = FUN_141107e50(param_1);
  if (cVar3 != '\0') {
    puVar11 = (undefined8 *)FName::FName(local_170,L"OnLoadGameClicked",1);
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_c0,L"LOAD CHARACTER",L"MainMenu",L"LoadCharacterText");
    local_1e8 = 0xffffffff;
    uVar6 = FUN_141104250(param_1,uVar10,*puVar11,0);
    *(undefined4 *)((longlong)param_1 + 0x8ec) = uVar6;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_b8 + 1;
      lVar8 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
  }
  cVar3 = FOutputDevice::CanBeUsedOnAnyThread();
  if (cVar3 != '\0') {
    puVar11 = (undefined8 *)FName::FName(local_168,L"OnSplitscreenClicked",1);
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_a8,L"ADD SPLITSCREEN",L"MainMenu",L"SplitscreenText");
    local_1e8 = 0xffffffff;
    iVar5 = FUN_141104250(param_1,uVar10,*puVar11,0);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_a0 + 1;
      lVar8 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    *(int *)(param_1 + 0x11e) = iVar5;
    if ((iVar5 < 0) || ((int)param_1[0x115] <= iVar5)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if ((bVar17) && (lVar8 = *(longlong *)((longlong)iVar5 * 0x38 + param_1[0x114]), lVar8 != 0)) {
      lVar9 = FUN_140f9aee0(param_1);
      if ((lVar9 == 0) || (cVar3 = FUN_140bc2da0(lVar9), cVar3 == '\0')) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      plVar13 = (longlong *)(lVar8 + 0x170);
      (**(code **)(*plVar13 + 0x38))(plVar13,uVar10);
    }
  }
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  plVar13 = plVar16;
  if (lVar8 != 0) {
    plVar13 = (longlong *)UWorld::GetGameState<APVPGameState>(lVar8);
  }
  cVar3 = FUN_1411118c0(param_1);
  if (cVar3 != '\0') {
    if ((plVar13 == (longlong *)0x0) || (iVar5 = FUN_140cb6340(plVar13), iVar5 < 2)) {
      puVar11 = (undefined8 *)FName::FName(local_158,L"OnTrueVaultHunterClicked",1);
      puVar15 = &DAT_1468755b0;
    }
    else {
      puVar11 = (undefined8 *)FName::FName(local_160,L"OnTrueVaultHunterClicked",1);
      puVar15 = &DAT_146875598;
    }
    local_1e8 = 0xffffffff;
    iVar5 = FUN_141104250(param_1,puVar15,*puVar11,0);
    *(int *)((longlong)param_1 + 0x8f4) = iVar5;
    if ((iVar5 < 0) || ((int)param_1[0x115] <= iVar5)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      lVar8 = param_1[0x114];
      uVar4 = FUN_1411343b0(param_1);
      FUN_142ed3eb0(*(undefined8 *)((longlong)iVar5 * 0x38 + lVar8),uVar4);
    }
  }
  plVar13 = (longlong *)FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (plVar13 == (longlong *)0x0) {
LAB_14110b70d:
    plVar13 = plVar16;
  }
  else {
    lVar8 = FUN_14145f370();
    if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (!bVar17) goto LAB_14110b70d;
  }
  lVar8 = DAT_146875610;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    plVar14 = (longlong *)0x1;
    if (DVar7 == DAT_1468c21c0) goto LAB_14110b748;
  }
  else {
LAB_14110b748:
    plVar14 = plVar16;
  }
  if (0 < *(int *)(lVar8 + (longlong)plVar14 * 4)) {
    return;
  }
  if (plVar13 == (longlong *)0x0) {
    return;
  }
  plVar14 = (longlong *)FUN_1422312c0(plVar13);
  if (plVar14 != (longlong *)0x0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) goto LAB_14110b7a7;
  }
  plVar14 = plVar16;
LAB_14110b7a7:
  cVar3 = FUN_140bca8a0(plVar14);
  if ((((cVar3 != '\0') && (cVar3 = (**(code **)(*plVar13 + 0x768))(plVar13), cVar3 != '\0')) &&
      ((char)plVar13[0x25] == '\x03')) &&
     ((lVar8 = FUN_140f9aee0(param_1), lVar8 != 0 && (lVar8 = FUN_1424503b0(lVar8), lVar8 != 0)))) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      uVar6 = *(undefined4 *)(lVar8 + 0x1c70);
      puVar11 = (undefined8 *)FName::FName(local_150,L"OnEnableLeaguesClicked",1);
      uVar10 = FUN_14110d820(param_1,local_90,uVar6);
      local_1e8 = 0xffffffff;
      uVar6 = FUN_141104250(param_1,uVar10,*puVar11,0);
      *(undefined4 *)((longlong)param_1 + 0x97c) = uVar6;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_88 + 1;
        lVar8 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14110b8f0 FUN_14110b8f0 body=271 status=ok
// SIG undefined FUN_14110b8f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14110b8f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_141107660;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14110ba00 FUN_14110ba00 body=164 status=ok
// SIG undefined FUN_14110ba00(void)

undefined8 * FUN_14110ba00(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446ba030;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined1 *)((longlong)puVar2 + 0x14) = *(undefined1 *)(param_1 + 0x14);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar2[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x30);
    *(undefined4 *)(puVar2 + 7) = 0xffffffff;
    uVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x38));
    FUN_14170c210(puVar2 + 7,uVar3);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14110bab0 FUN_14110bab0 body=111 status=ok
// SIG undefined FUN_14110bab0(void)

undefined8 * FUN_14110bab0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446ba270;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FUN_140e9a4f0(puVar1 + 2,param_1 + 0x10);
    *(undefined4 *)(puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x120);
    *(undefined4 *)((longlong)puVar1 + 0x124) = *(undefined4 *)(param_1 + 0x124);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14110bb20 FUN_14110bb20 body=133 status=ok
// SIG undefined FUN_14110bb20(void)

undefined8 * FUN_14110bb20(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446ba1b0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    FString::FString(puVar2 + 4,param_1 + 0x20);
    *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x30);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_1 + 0x40);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14110bbb0 FUN_14110bbb0 body=228 status=ok
// SIG undefined FUN_14110bbb0(void)

undefined8 * FUN_14110bbb0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446ba078;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)((longlong)puVar1 + 0xc) = *(undefined1 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
    FUN_14170c210(puVar1 + 2,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x14));
    FUN_14170c210((longlong)puVar1 + 0x14,uVar2);
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar1 + 3,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x1c));
    FUN_14170c210((longlong)puVar1 + 0x1c,uVar2);
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x20));
    FUN_14170c210(puVar1 + 4,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14110bca0 FUN_14110bca0 body=93 status=ok
// SIG undefined FUN_14110bca0(void)

undefined8 * FUN_14110bca0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446ba1c8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14110bd00 FUN_14110bd00 body=66 status=ok
// SIG undefined FUN_14110bd00(void)

void FUN_14110bd00(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1446b9f60;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1446b9fa8;
  }
  return;
}



// FUNCTION 14110bd50 FUN_14110bd50 body=91 status=ok
// SIG undefined FUN_14110bd50(void)

void FUN_14110bd50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_LAB_1446ba090;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_LAB_1446ba0d8;
  }
  return;
}



// FUNCTION 14110bdb0 FUN_14110bdb0 body=91 status=ok
// SIG undefined FUN_14110bdb0(void)

void FUN_14110bdb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_LAB_1446ba120;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_LAB_1446ba168;
  }
  return;
}



// FUNCTION 14110be10 FUN_14110be10 body=68 status=ok
// SIG undefined FUN_14110be10(void)

void FUN_14110be10(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446b9ff0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 14110be60 FUN_14110be60 body=84 status=ok
// SIG undefined FUN_14110be60(void)

void FUN_14110be60(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446ba1e0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1446ba228;
  }
  return;
}



// FUNCTION 14110bec0 FUN_14110bec0 body=159 status=ok
// SIG undefined FUN_14110bec0(void)

void FUN_14110bec0(undefined8 param_1,char param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [16];
  
  if (((param_2 != '\0') && (param_4 != 0)) && (lVar3 = FUN_1410f7490(param_4), lVar3 != 0)) {
    FUN_142f005e0(param_4,lVar3);
    if ((*(int *)(param_4 + 0x48) < 1) ||
       (plVar2 = *(longlong **)
                  (*(longlong *)(param_4 + 0x40) + -8 + (longlong)*(int *)(param_4 + 0x48) * 8),
       plVar2 == (longlong *)0x0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*plVar2 + 0x278))();
    }
    if (lVar4 == lVar3) {
      uVar1 = *(undefined4 *)(param_3 + 8);
      puVar5 = (undefined8 *)FName::FName(local_18,L"Roster",1);
      FUN_14112a420(lVar3,*puVar5,uVar1);
    }
  }
  return;
}



// FUNCTION 14110bf60 FUN_14110bf60 body=468 status=ok
// SIG undefined FUN_14110bf60(void)

void FUN_14110bf60(longlong *param_1,longlong param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  if ((char)param_1[0xff] == '\0') {
    if (param_3 == '\x01') {
      if (*(int *)(param_2 + 0xd8) == -1) {
        return;
      }
      cVar2 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x77c);
      if (cVar2 == '\0') {
        return;
      }
      cVar2 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x784);
      if (cVar2 == '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0xff) = 1;
      uVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x784);
      uVar6 = FUN_140e97230(param_1);
      FUN_140b45600(uVar5,(int *)(param_2 + 0xd8),uVar6,1,1);
      pcVar8 = "Bank_Deposit";
    }
    else if (param_3 == '\x02') {
      if (*(int *)(param_2 + 0xd8) == -1) {
        return;
      }
      cVar2 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x77c);
      if (cVar2 == '\0') {
        return;
      }
      cVar2 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x784);
      if (cVar2 == '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0xff) = 1;
      uVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x77c);
      uVar6 = FUN_140e97230(param_1);
      FUN_140b45600(uVar5,(int *)(param_2 + 0xd8),uVar6,0,1);
      pcVar8 = "Bank_Withdraw";
    }
    else {
      if (param_3 != '\x03') {
        return;
      }
      lVar3 = FUN_142ebe540(param_1,param_1[0xd9]);
      if (lVar3 != 0) {
        lVar4 = FUN_141358f70();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar5 = FWeakObjectPtr::Get(param_2 + 0xdc);
          FUN_140f8dd50(lVar3,uVar5,*(undefined8 *)(param_2 + 0xa8));
        }
      }
      pcVar8 = "Inspect_Item";
    }
    lVar3 = *param_1;
    local_18 = 0;
    local_10 = 0;
    puVar7 = (undefined8 *)FName::FName(local_res8,pcVar8,1);
    (**(code **)(lVar3 + 0x4e8))(param_1,*puVar7,&local_18);
  }
  return;
}



// FUNCTION 14110c140 FUN_14110c140 body=80 status=ok
// SIG undefined FUN_14110c140(void)

void FUN_14110c140(undefined8 param_1)

{
  undefined8 *puVar1;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = FUN_141107790;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 14110c190 FUN_14110c190 body=101 status=ok
// SIG undefined FUN_14110c190(void)

void FUN_14110c190(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14222a250();
  lVar3 = FUN_1422312c0(param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    iVar1 = *(int *)(lVar4 + 0x90);
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140bec3e0(lVar3,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
      return;
    }
  }
  return;
}



// FUNCTION 14110c200 FUN_14110c200 body=62 status=ok
// SIG undefined FUN_14110c200(void)

void FUN_14110c200(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x5e0) + 0x318,param_1);
  }
  FUN_140ad2470(param_1,param_2);
  return;
}



// FUNCTION 14110c240 FUN_14110c240 body=411 status=ok
// SIG undefined FUN_14110c240(void)

void FUN_14110c240(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if ((((lVar6 != 0) && (lVar6 = FUN_140aea640(lVar6), lVar6 != 0)) &&
      (*(char *)(lVar6 + 0xba9) == '\0')) && (((char)param_1[0xb4] == '\f' && (param_1[0x8d] != 0)))
     ) {
    bVar4 = false;
    bVar3 = false;
    plVar7 = (longlong *)UListView::OnItemSelectionChanged(lVar6);
    plVar9 = (longlong *)*plVar7;
    plVar7 = plVar9 + (int)plVar7[1];
    if (plVar9 != plVar7) {
      do {
        if ((*plVar9 != 0) && (lVar1 = *(longlong *)(*plVar9 + 0x30), lVar1 != 0)) {
          lVar8 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) &&
             (cVar5 = (**(code **)(*(longlong *)(lVar1 + 0x980) + 0x20))(), bVar3 = bVar4,
             cVar5 != '\0')) {
            bVar4 = true;
            bVar3 = true;
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar7);
      if (bVar3) {
        return;
      }
    }
    plVar7 = (longlong *)FUN_1424503b0(lVar6);
    if (plVar7 != (longlong *)0x0) {
      lVar6 = FUN_14145f370();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((bVar3) && (lVar6 = (**(code **)(*plVar7 + 0xfa8))(plVar7), lVar6 != 0)) &&
         (*(int *)(lVar6 + 0x48) == 0)) {
        FUN_142f02280(lVar6,param_1[0x8d]);
      }
    }
  }
  return;
}



// FUNCTION 14110c400 FUN_14110c400 body=88 status=ok
// SIG undefined FUN_14110c400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14110c400(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_18 = 1;
  local_28[0] = param_2;
  local_20 = param_3;
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(param_1 + 8),local_28);
  return;
}



// FUNCTION 14110c460 FUN_14110c460 body=89 status=ok
// SIG undefined FUN_14110c460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14110c460(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_18 = 1;
  local_28 = param_2;
  local_20 = param_3;
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(param_1 + 8),&local_28);
  return;
}



// FUNCTION 14110c4c0 FUN_14110c4c0 body=137 status=ok
// SIG undefined FUN_14110c4c0(void)

undefined8 *
FUN_14110c4c0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong local_18 [2];
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
  puVar2 = (undefined8 *)(**(code **)(param_1 + 0x10))(uVar1,local_18,param_3,param_4);
  *param_2 = 0;
  *param_2 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14110c550 FUN_14110c550 body=161 status=ok
// SIG undefined FUN_14110c550(void)

void FUN_14110c550(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 8);
  local_38 = *param_2;
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar5 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar5)(iStack_18 + lVar6,&local_38,param_3);
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 14110c600 FUN_14110c600 body=31 status=ok
// SIG undefined FUN_14110c600(void)

undefined8 FUN_14110c600(longlong param_1)

{
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x6e9) = 0;
  FUN_14112cdb0(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 14110c620 FUN_14110c620 body=141 status=ok
// SIG undefined FUN_14110c620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14110c620(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar1 != '\0') {
    local_18 = 1;
    local_28[0] = param_2;
    local_20 = param_3;
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
    (**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(param_1 + 8),local_28);
  }
  return cVar1 != '\0';
}



// FUNCTION 14110c6b0 FUN_14110c6b0 body=144 status=ok
// SIG undefined FUN_14110c6b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14110c6b0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar1 != '\0') {
    local_18 = 1;
    local_28 = param_2;
    local_20 = param_3;
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
    (**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(param_1 + 8),&local_28);
  }
  return cVar1 != '\0';
}



// FUNCTION 14110c740 FUN_14110c740 body=313 status=ok
// SIG undefined FUN_14110c740(void)

undefined8 FUN_14110c740(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 8);
  plVar4 = (longlong *)param_2[1];
  if (lVar6 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    uVar7 = 0;
  }
  else {
    uVar7 = *param_2;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    lVar6 = FWeakObjectPtr::Get(param_1 + 8);
    local_30 = *(undefined4 *)(param_1 + 0x10);
    uStack_2c = *(undefined4 *)(param_1 + 0x14);
    pcVar5 = *(code **)(param_1 + 0x10);
    iStack_28 = *(int *)(param_1 + 0x18);
    uStack_24 = *(undefined4 *)(param_1 + 0x1c);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_48 = uVar7;
    local_40 = plVar4;
    (*pcVar5)(iStack_28 + lVar6,&local_48,param_3);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 14110c880 GetWidgetClippingText body=33 status=ok
// SIG undefined GetWidgetClippingText(void)

undefined8 FSnapshotWidgetReflectorNode::GetWidgetClippingText(longlong param_1,undefined8 param_2)

{
  FText::FText(param_2,param_1 + 0xa0);
  return param_2;
}



// FUNCTION 14110c8b0 FUN_14110c8b0 body=63 status=ok
// SIG undefined FUN_14110c8b0(void)

char * FUN_14110c8b0(longlong param_1,char param_2,char param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = *(char **)(param_1 + 0x1a0);
  pcVar2 = pcVar1 + (longlong)*(int *)(param_1 + 0x1a8) * 0x38;
  while( true ) {
    if (pcVar1 == pcVar2) {
      return (char *)0x0;
    }
    if (((*pcVar1 == param_2) && (pcVar1[1] == param_3)) ||
       ((pcVar1[1] == param_2 && (*pcVar1 == param_3)))) break;
    pcVar1 = pcVar1 + 0x38;
  }
  return pcVar1 + 4;
}



// FUNCTION 14110c8f0 FUN_14110c8f0 body=97 status=ok
// SIG undefined FUN_14110c8f0(void)

undefined4 FUN_14110c8f0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x698);
  local_10 = 0;
  local_18 = lVar2;
  if (lVar2 != 0) {
    uVar3 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
  }
  FUN_142ed36d0(param_1,&local_18,0);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 14110c960 FUN_14110c960 body=128 status=ok
// SIG undefined FUN_14110c960(void)

void FUN_14110c960(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  if ((((*(longlong *)(param_1 + 0x6f8) != 0) && (*(char *)(param_1 + 0x70a) != '\0')) &&
      (*(char *)(param_1 + 0x70b) == '\x01')) &&
     ((cVar2 = FUN_142ebdd70(), cVar2 == '\0' &&
      (lVar1 = *(longlong *)(param_1 + 0x6f8), *(char *)(lVar1 + 0x360) != '\0')))) {
    local_18 = lVar1;
    if (lVar1 == 0) {
      local_10 = 0;
    }
    else {
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
    }
    FUN_142ed36d0(param_1,&local_18,0);
  }
  return;
}



// FUNCTION 14110c9e0 FUN_14110c9e0 body=367 status=ok
// SIG undefined FUN_14110c9e0(void)

void FUN_14110c9e0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  code *local_d8 [2];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 local_58;
  
  local_res10[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FUN_14170c210(local_res10);
  }
  uVar11 = local_res10[0];
  uVar4 = *(undefined1 *)((longlong)param_2 + 0xc);
  plVar7 = (longlong *)param_2[4];
  uVar8 = *param_2;
  uVar6 = *(undefined4 *)(param_2 + 1);
  local_res20 = param_2[3];
  local_res18 = param_2[2];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  uVar5 = *(undefined1 *)(param_2 + 5);
  local_58 = local_res10[0];
  local_res10[0] = 0xffffffff;
  local_a8 = 0;
  local_98 = 0;
  puVar10 = (undefined8 *)FUN_140438ef0(0x40,local_c8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_FUN_1446ba030;
    *(undefined1 *)((longlong)puVar10 + 0x14) = uVar4;
    puVar10[1] = uVar8;
    *(undefined4 *)(puVar10 + 2) = uVar6;
    puVar10[3] = local_res18;
    puVar10[4] = local_res20;
    puVar10[5] = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      uVar11 = local_58;
    }
    *(undefined1 *)(puVar10 + 6) = uVar5;
    *(undefined4 *)(puVar10 + 7) = uVar11;
    local_58 = 0xffffffff;
    uVar11 = 0xffffffff;
  }
  local_d8[0] = FUN_1411075f0;
  FUN_14208c4f0(param_1,local_d8);
  FUN_1416f8340(uVar11);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  FUN_1416f8340(local_res10[0]);
  return;
}



// FUNCTION 14110cb50 FUN_14110cb50 body=102 status=ok
// SIG undefined FUN_14110cb50(void)

longlong FUN_14110cb50(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                      int param_5)

{
  longlong lVar1;
  float fVar2;
  undefined1 local_res8 [8];
  
  FUN_142ef62c0(param_2,param_1);
  if (param_5 == 1) {
    lVar1 = FUN_142eb8e90(*(undefined8 *)(param_2 + 0x38),local_res8);
    fVar2 = *(float *)(lVar1 + 4) - *(float *)(param_4 + 4);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    *(float *)(param_1 + 4) = fVar2 + *(float *)(param_1 + 4);
  }
  return param_1;
}



// FUNCTION 14110cbc0 FUN_14110cbc0 body=98 status=ok
// SIG undefined FUN_14110cbc0(void)

undefined8 FUN_14110cbc0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x140), lVar1 != 0)) {
    lVar3 = AOfflineGameMode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = FUN_140c13f10(lVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 14110cc30 FUN_14110cc30 body=93 status=ok
// SIG undefined FUN_14110cc30(void)

undefined8 FUN_14110cc30(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x7b0);
  if (lVar1 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = FUN_140cfbfb0(lVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 14110cc90 FUN_14110cc90 body=102 status=ok
// SIG undefined FUN_14110cc90(void)

undefined4 FUN_14110cc90(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x7b0);
  if (lVar3 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = FUN_140cfbfb0(lVar3);
      if (lVar3 != 0) {
        return *(undefined4 *)(lVar3 + 0x28);
      }
    }
  }
  return 0;
}



// FUNCTION 14110cd00 FUN_14110cd00 body=249 status=ok
// SIG undefined FUN_14110cd00(void)

undefined8 FUN_14110cd00(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x948);
  if (lVar2 == 0) {
LAB_14110cd60:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_1413b9340();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14110cd60;
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x948);
  if (lVar3 != 0) {
    lVar4 = FUN_1412fc200();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14110cdaa;
  }
  lVar3 = 0;
LAB_14110cdaa:
  if (lVar2 != 0) {
    uVar5 = FWeakObjectPtr::Get(param_2 + 0xdc);
    return uVar5;
  }
  if (lVar3 != 0) {
    uVar5 = FWeakObjectPtr::Get(param_2 + 0x5c);
    return uVar5;
  }
  return 0;
}



// FUNCTION 14110ce00 FUN_14110ce00 body=130 status=ok
// SIG undefined FUN_14110ce00(void)

undefined8 FUN_14110ce00(void)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146875660) {
    _Init_thread_header(&DAT_146875660);
    if (DAT_146875660 == -1) {
      FName::FName(&DAT_146875658,L"OnlineSubsystemUtils",1);
      _Init_thread_footer(&DAT_146875660);
    }
  }
  lVar1 = FModuleManager::GetModulePtr_Internal(DAT_146875658);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x28);
  }
  return 0;
}



// FUNCTION 14110ce90 FUN_14110ce90 body=23 status=ok
// SIG undefined FUN_14110ce90(void)

longlong FUN_14110ce90(longlong param_1,byte param_2)

{
  if (param_2 < 7) {
    return param_1 + 0x30 + (ulonglong)param_2 * 0x34;
  }
  return 0;
}



// FUNCTION 14110ceb0 FUN_14110ceb0 body=234 status=ok
// SIG undefined FUN_14110ceb0(void)

longlong FUN_14110ceb0(longlong param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)(param_1 + 0x5c0);
  lVar4 = FUN_1422312c0();
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(char *)(param_1 + 0x5c0) == '\x04')) {
      if (*(int *)(param_1 + 0x5c4) == -1) {
        iVar3 = FUN_140bba310();
        iVar3 = iVar3 + -1;
        goto LAB_14110cf41;
      }
      lVar4 = FUN_140bb8cd0(lVar4);
      if (lVar4 != 0) {
        iVar3 = *(int *)(lVar4 + 8) + *(int *)(param_1 + 0x5c4);
        goto LAB_14110cf41;
      }
    }
  }
  iVar3 = -1;
LAB_14110cf41:
  if ((ulonglong)bVar1 < 7) {
    param_1 = param_1 + ((ulonglong)bVar1 * 3 + 0x97) * 8;
    if ((iVar3 < 0) || (*(int *)(param_1 + 0x10) <= iVar3)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return *(longlong *)(param_1 + 8) + (longlong)iVar3 * 8;
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



// FUNCTION 14110cfa0 FUN_14110cfa0 body=131 status=ok
// SIG undefined FUN_14110cfa0(void)

undefined8 FUN_14110cfa0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    lVar3 = FUN_140aea640(lVar2);
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_14244f490(lVar3,lVar2);
      if (plVar4 != (longlong *)0x0) {
        lVar2 = FUN_14145f370();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
            lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014110d014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*plVar4 + 0xfa8))(plVar4);
          return uVar5;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14110d030 FUN_14110d030 body=126 status=ok
// SIG undefined FUN_14110d030(void)

undefined8 * FUN_14110d030(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x778);
  if ((byte)(cVar1 - 1U) < 2) {
    param_2[1] = (undefined1 *)(param_1 + 0x818);
    *(undefined1 *)param_2 = *(undefined1 *)(param_1 + 0x818);
    *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(param_1 + 0x87c);
    return param_2;
  }
  if (cVar1 == '\x04') {
    param_2[1] = (undefined1 *)(param_1 + 0x9b8);
    *(undefined1 *)param_2 = *(undefined1 *)(param_1 + 0x9b8);
    *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(param_1 + 0xa1c);
    return param_2;
  }
  if (cVar1 == '\x03') {
    param_2[1] = (undefined1 *)(param_1 + 0x8e8);
    *(undefined1 *)param_2 = *(undefined1 *)(param_1 + 0x8e8);
    *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(param_1 + 0x94c);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)((longlong)param_2 + 4) = 0xffffffff;
  return param_2;
}



// FUNCTION 14110d0b0 FUN_14110d0b0 body=247 status=ok
// SIG undefined FUN_14110d0b0(void)

longlong * FUN_14110d0b0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  longlong local_30 [5];
  
  cVar1 = ULowEntryExtendedStandardLibrary::ByteToBoolean(param_4);
  if (cVar1 == '\0') {
    bVar3 = param_3 == (longlong *)0x0;
    if (bVar3) {
      local_30[0] = 0;
      plVar2 = local_30;
      local_30[1] = 0;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*param_3 + 0x308))(param_3,local_30 + 2,param_4);
    }
    *param_2 = 0;
    *param_2 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_2 + 1) = (int)plVar2[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
    if (bVar3) {
      if (local_30[0] != 0) {
        FMemory::Free();
      }
    }
    if ((!bVar3) && (local_30[2] != 0)) {
      FMemory::Free();
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"disabled",0x12);
  }
  return param_2;
}



// FUNCTION 14110d1b0 FUN_14110d1b0 body=213 status=ok
// SIG undefined FUN_14110d1b0(void)

ulonglong FUN_14110d1b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int local_res8 [2];
  undefined1 local_res20 [8];
  
  plVar8 = *(longlong **)(param_1 + 0x20);
  uVar10 = 0;
  plVar11 = plVar8 + (longlong)*(int *)(param_1 + 0x28) * 2;
  uVar7 = uVar10;
  for (; plVar8 != plVar11; plVar8 = plVar8 + 2) {
    lVar1 = *plVar8;
    uVar3 = FUN_140d3ae40(param_2);
    piVar4 = (int *)FUN_140d2cd70(uVar3,local_res20,lVar1 + 8);
    if (*piVar4 != -1) {
      lVar1 = *plVar8;
      plVar5 = (longlong *)FUN_140d3ae40(param_2);
      FUN_140d2cd70(plVar5,local_res8,lVar1 + 8);
      uVar6 = uVar10;
      if (local_res8[0] != -1) {
        uVar6 = (longlong)local_res8[0] * 0x40 + *plVar5;
      }
      uVar9 = uVar6 + 0x28;
      if (uVar6 == 0) {
        uVar9 = uVar10;
      }
      iVar2 = FUN_140d3b120(uVar9,param_3);
      uVar7 = (ulonglong)(uint)((int)uVar7 + iVar2);
    }
  }
  return uVar7;
}



// FUNCTION 14110d290 FUN_14110d290 body=1020 status=ok
// SIG undefined FUN_14110d290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14110d290(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  code *local_e8;
  longlong *plStack_e0;
  longlong local_d8 [2];
  code *local_c8;
  longlong *plStack_c0;
  code *local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  code *local_98;
  longlong *plStack_90;
  code *local_88;
  longlong *plStack_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong *local_68;
  code *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_a8 = param_1;
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar5 != 0) {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar10 = 0;
      local_d8[0] = 0;
      local_d8[1] = 0;
      local_98 = (code *)0x0;
      plStack_90 = (longlong *)0x0;
      FUN_140bba620(lVar5,&local_e8,&local_98);
      if (local_e8 != (code *)0x0) {
        puVar7 = (undefined8 *)(**(code **)(*(longlong *)local_e8 + 8))(local_e8,local_78);
        cVar4 = FUN_140bcac80(lVar5,*puVar7);
        plVar8 = plStack_e0;
        if (cVar4 == '\0') {
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
            UNLOCK();
          }
          local_58 = local_98;
          plStack_50 = plStack_90;
          local_b8 = local_e8;
          plStack_b0 = plStack_e0;
          local_e8 = local_98;
          plStack_e0 = plStack_90;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar8 + 1;
            lVar6 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
              }
            }
          }
        }
        if (local_e8 != (code *)0x0) {
          if (plStack_e0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
            UNLOCK();
          }
          local_f8 = local_d8;
          local_88 = local_e8;
          plStack_80 = plStack_e0;
          cVar4 = FUN_140d79f00(*(undefined8 *)(lVar5 + 0x478),&local_88,1);
          plVar8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            plVar11 = plStack_80 + 1;
            lVar6 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          if ((cVar4 == '\0') && (*(longlong *)(param_1 + 0xaa0) == 0)) {
            lVar6 = *(longlong *)(lVar5 + 0x478);
            local_c8 = FUN_1411173e0;
            plStack_c0 = (longlong *)((ulonglong)plStack_c0 & 0xffffffff00000000);
            plVar11 = (longlong *)(lVar6 + 0x1e0);
            plVar8 = (longlong *)FMemory::Realloc(0,0x30);
            local_68 = plVar8;
            if (plVar8 != (longlong *)0x0) {
              *plVar8 = (longlong)&PTR_FUN_143fcfec0;
              FWeakObjectPtr::operator=(plVar8 + 1,param_1);
              plVar8[2] = (longlong)local_c8;
              plVar8[3] = (longlong)plStack_c0;
              lVar9 = FDelegateHandle::GenerateNewID();
              plVar8[5] = lVar9;
              *plVar8 = (longlong)&PTR_FUN_143fcff08;
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
              puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0x20))(plVar8,local_70);
              iVar2 = *(int *)(lVar6 + 0x1e8);
              uVar10 = *puVar7;
              *(int *)(lVar6 + 0x1e8) = iVar2 + 1;
              if (*(int *)(lVar6 + 0x1ec) < iVar2 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar2);
              }
              puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar11);
              *puVar7 = plVar8;
              *(undefined4 *)(puVar7 + 1) = 3;
              param_1 = local_a8;
            }
            local_c8 = local_e8;
            plStack_c0 = plStack_e0;
            *(undefined8 *)(param_1 + 0xaa0) = uVar10;
            if (plStack_e0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
              UNLOCK();
            }
            FUN_140d938f0(*(undefined8 *)(lVar5 + 0x478),&local_c8);
            plVar8 = plStack_c0;
            if (plStack_c0 != (longlong *)0x0) {
              LOCK();
              plVar11 = plStack_c0 + 1;
              lVar5 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plStack_c0)(plStack_c0);
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar8 + 8))(plVar8,1);
                }
              }
            }
          }
        }
      }
      FText::FromString(param_2,local_d8);
      plVar8 = plStack_e0;
      if (plStack_e0 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_e0 + 1;
        lVar5 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_e0)(plStack_e0);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      plVar8 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_90 + 1;
        lVar5 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (local_d8[0] == 0) {
        return param_2;
      }
      FMemory::Free();
      return param_2;
    }
  }
  uVar10 = FUN_1404b03b0();
  FText::FText(param_2,uVar10);
  return param_2;
}



// FUNCTION 14110d690 FUN_14110d690 body=118 status=ok
// SIG undefined FUN_14110d690(void)

int FUN_14110d690(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc0)) {
    do {
      lVar1 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xb8) + 0xdc + (longlong)iVar2 * 0x110);
      if (lVar1 == param_2) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc0));
  }
  return -1;
}



// FUNCTION 14110d710 FUN_14110d710 body=18 status=ok
// SIG undefined FUN_14110d710(void)

undefined8 FUN_14110d710(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x5c4);
  if (iVar1 == -1) {
    return 0;
  }
  if (iVar1 != -1) {
    lVar3 = FUN_1422312c0();
    if (lVar3 != 0) {
      lVar4 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar5 = FUN_140bb8be0(lVar3,iVar1);
        return uVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 14110d730 FUN_14110d730 body=234 status=ok
// SIG undefined FUN_14110d730(void)

undefined8 FUN_14110d730(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x77c);
  if (cVar1 == '\0') {
LAB_14110d7ba:
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x784);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(*param_2 + 0x340))(param_2);
      uVar3 = FWeakObjectPtr::Get(lVar2 + 0xdc);
      uVar4 = FWeakObjectPtr::Get(param_1 + 0x784);
      cVar1 = FUN_143000f00(uVar4,uVar3);
      if (cVar1 != '\0') {
        param_1 = param_1 + 0x784;
        goto LAB_14110d7a0;
      }
    }
    uVar3 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_2 + 0x340))(param_2);
    uVar3 = FWeakObjectPtr::Get(lVar2 + 0xdc);
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x77c);
    cVar1 = FUN_143000f00(uVar4,uVar3);
    if (cVar1 == '\0') goto LAB_14110d7ba;
    param_1 = param_1 + 0x77c;
LAB_14110d7a0:
    uVar3 = FWeakObjectPtr::Get(param_1);
  }
  return uVar3;
}



// FUNCTION 14110d820 FUN_14110d820 body=837 status=ok
// SIG undefined FUN_14110d820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14110d820(undefined8 param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  ulonglong *puStack_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_f8,L"Current Event",L"MainMenu",L"DefaultLeagueName");
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    if (param_3 == 0) goto LAB_14110d8c0;
    lVar7 = FUN_140b82620(*(longlong *)(DAT_146b33f38 + 0x58),param_3);
    if (lVar7 != 0) {
      cVar6 = FText::IsEmpty(lVar7 + 0x240);
      if (cVar6 == '\0') {
        FText::operator=(local_f8,lVar7 + 0x240);
      }
    }
  }
  if (param_3 != 0) {
    lVar7 = FText::FText(local_80,local_f8);
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_90,&DAT_1468755c8);
    local_68[0] = 4;
    FText::FText(local_58,lVar7);
    local_e0 = *puVar8;
    local_108 = local_68;
    puStack_100 = local_38;
    local_d8 = puVar8[1];
    local_40 = '\x01';
    if (local_d8 != 0) {
      LOCK();
      *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
      UNLOCK();
    }
    uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_d0,&local_108);
    uVar9 = FText::Format(local_a8,&local_e0,uVar9);
    FText::FText(local_c0,uVar9);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_d0);
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar4 = (longlong *)puVar8[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    plVar4 = *(longlong **)(lVar7 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    FText::ToUpper(local_c0,param_2);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b8 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    if (local_f0 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    plVar4 = local_f0 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) {
      return param_2;
    }
    (**(code **)*local_f0)(local_f0);
    LOCK();
    piVar1 = (int *)((longlong)local_f0 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return param_2;
    }
    (**(code **)(*local_f0 + 8))(local_f0,1);
    return param_2;
  }
LAB_14110d8c0:
  FText::ToUpper(&DAT_1468755e0,param_2);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f0 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14110db70 FUN_14110db70 body=340 status=ok
// SIG undefined FUN_14110db70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14110db70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_1a8 [32];
  undefined2 local_188;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  code *local_158 [2];
  longlong local_148 [4];
  longlong *local_128;
  int local_118;
  undefined1 local_108 [208];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  FWeakObjectPtr::operator=(&local_178,param_3);
  local_128 = (longlong *)0x0;
  local_118 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_148);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_143fcfe50;
    *(undefined4 *)(puVar1 + 1) = local_178;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_174;
  }
  local_170 = 0;
  local_158[0] = FUN_141107720;
  local_168 = 0x21;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,0);
  local_188 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_170,0x21,"UGFxLoadGameMenu::GetLocalUserId");
  FUN_14106d6c0(local_108,&local_170,local_158);
  uVar2 = FUN_1410817c0(local_108,local_158);
  FUN_142084370(param_1,uVar2);
  if (local_118 != 0) {
    plVar3 = local_148;
    if (local_128 != (longlong *)0x0) {
      plVar3 = local_128;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_141081b40(local_108,param_2);
  FUN_140ce1dc0(local_108);
  return param_2;
}



// FUNCTION 14110dcd0 FUN_14110dcd0 body=323 status=ok
// SIG undefined FUN_14110dcd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14110dcd0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_188 [32];
  undefined2 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  code *local_148 [2];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  undefined1 local_f8 [208];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_118 = (longlong *)0x0;
  local_108 = 0;
  local_158 = param_1;
  uStack_150._0_4_ = param_3;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_138);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_158;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_158._4_4_;
    *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_150._4_4_;
  }
  local_158 = 0;
  local_148[0] = FUN_1411072d0;
  uStack_150 = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
  local_168 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_158,0x20,"UGFxOakMainMenu::GetLocalUserId");
  FUN_14106d6c0(local_f8,&local_158,local_148);
  uVar2 = FUN_1410817c0(local_f8,local_148);
  FUN_142084370(param_1,uVar2);
  if (local_108 != 0) {
    plVar3 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar3 = local_118;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_141081b40(local_f8,param_2);
  FUN_140ce1dc0(local_f8);
  return param_2;
}



// FUNCTION 14110de20 FUN_14110de20 body=179 status=ok
// SIG undefined FUN_14110de20(void)

longlong FUN_14110de20(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1[0x134] != 0) {
    return param_1[0x134];
  }
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar2 = *(longlong *)(lVar2 + 0x140);
    if (lVar2 != 0) {
      lVar3 = AOfflineGameMode::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar2 = FUN_140c13f10(lVar2);
        param_1[0x134] = lVar2;
      }
    }
    return param_1[0x134];
  }
  return param_1[0x134];
}



// FUNCTION 14110dee0 FUN_14110dee0 body=102 status=ok
// SIG undefined FUN_14110dee0(void)

undefined8 FUN_14110dee0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  lVar2 = *(longlong *)(lVar2 + 0x140);
  if (lVar2 != 0) {
    lVar3 = AOfflineGameMode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = FUN_140c13f20(lVar2);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 14110df50 FUN_14110df50 body=12 status=ok
// SIG undefined FUN_14110df50(void)

void FUN_14110df50(longlong param_1)

{
  FWeakObjectPtr::Get(param_1 + 0x5b8);
  return;
}



// FUNCTION 14110df60 FUN_14110df60 body=423 status=ok
// SIG undefined FUN_14110df60(void)

longlong * FUN_14110df60(longlong *param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x308))(param_1,param_2,param_4);
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x59);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x59);
    cVar1 = *(char *)(lVar2 + 0x778);
    if (cVar1 == '\x01') {
      if (((char)param_1[0x5b] == '\x01') && ((wchar_t *)*param_2 != L"focusedUp")) {
        iVar3 = 0;
        *(undefined4 *)(param_2 + 1) = 0;
        if (*(int *)((longlong)param_2 + 0xc) != 10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,10);
          iVar3 = (int)param_2[1];
        }
        *(int *)(param_2 + 1) = iVar3 + 10;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
        }
        builtin_wcsncpy((wchar_t *)*param_2,L"focusedUp",10);
        return param_2;
      }
    }
    else if (cVar1 == '\x02') {
      if (((char)param_1[0x5b] == '\0') && ((wchar_t *)*param_2 != L"focusedUp")) {
        iVar3 = 0;
        *(undefined4 *)(param_2 + 1) = 0;
        if (*(int *)((longlong)param_2 + 0xc) != 10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,10);
          iVar3 = (int)param_2[1];
        }
        *(int *)(param_2 + 1) = iVar3 + 10;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
        }
        builtin_wcsncpy((wchar_t *)*param_2,L"focusedUp",10);
        return param_2;
      }
    }
    else if (((byte)(cVar1 - 3U) < 2) && ((wchar_t *)*param_2 != L"disabled")) {
      iVar3 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,9);
        iVar3 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = iVar3 + 9;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"disabled",9);
    }
  }
  return param_2;
}



// FUNCTION 14110e110 FUN_14110e110 body=45 status=ok
// SIG undefined FUN_14110e110(void)

longlong FUN_14110e110(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FText::IsEmpty(param_1 + 0x60);
  lVar2 = param_1 + 0x60;
  if (cVar1 != '\0') {
    lVar2 = param_1 + 0x48;
  }
  return lVar2;
}



// FUNCTION 14110e140 FUN_14110e140 body=1503 status=ok
// SIG undefined FUN_14110e140(void)

void FUN_14110e140(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint uVar5;
  void *_Src;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  undefined8 local_res20;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  uint local_c8;
  uint local_c4;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  void *local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  int local_98;
  ulonglong *local_90;
  longlong local_88 [2];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_60 [32];
  
  puVar17 = (ulonglong *)(param_1 + 0xa88);
  *(undefined4 *)(param_1 + 0xa90) = 0;
  local_90 = puVar17;
  if (0x7fffffff < *(uint *)(param_1 + 0xa94)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(puVar17,0);
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5d4);
  if (lVar6 != 0) {
    lVar7 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      puVar3 = *(undefined4 **)(lVar6 + 0x418);
      iVar9 = *(int *)(lVar6 + 0x420);
      if (puVar3 != puVar3 + (longlong)iVar9 * 10) {
        puVar14 = puVar3 + 1;
        do {
          local_f8 = puVar14[-1];
          local_f4 = *puVar14;
          local_f0 = puVar14[1];
          local_68 = *(undefined8 *)(puVar14 + 3);
          local_e0 = 0;
          local_d8 = 0;
          local_e8 = 0;
          FString::FString(local_60,puVar14 + 5);
          FSoftObjectPath::operator=(&local_e8,&local_68);
          lVar6 = FWeakObjectPtr::Get(&local_f8);
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != local_f0) && (local_e8 != 0)) {
              lVar6 = FUN_141796df0(&local_e8);
              FWeakObjectPtr::operator=(&local_f8,lVar6);
              if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                local_f0 = DAT_1464b56f4;
              }
              lVar6 = FWeakObjectPtr::Get(&local_f8);
              if (lVar6 != 0) goto LAB_14110e2db;
            }
LAB_14110e311:
            lVar6 = FUN_1405ec200(&local_f8);
            if (lVar6 != 0) {
              FUN_14137f110();
            }
          }
          else {
LAB_14110e2db:
            lVar7 = FUN_14137f110();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_14110e311;
          }
          lVar6 = FWeakObjectPtr::Get(&local_f8);
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != local_f0) && (local_e8 != 0)) {
              lVar6 = FUN_141796df0(&local_e8);
              FWeakObjectPtr::operator=(&local_f8,lVar6);
              if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                local_f0 = DAT_1464b56f4;
              }
              lVar6 = FWeakObjectPtr::Get(&local_f8);
              if (lVar6 != 0) goto LAB_14110e3ac;
            }
          }
          else {
LAB_14110e3ac:
            lVar7 = FUN_14137f110();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              lVar6 = FWeakObjectPtr::Get(&local_f8);
              if (lVar6 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != local_f0) && (local_e8 != 0)) {
                  lVar6 = FUN_141796df0(&local_e8);
                  FWeakObjectPtr::operator=(&local_f8,lVar6);
                  if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    local_f0 = DAT_1464b56f4;
                  }
                  lVar6 = FWeakObjectPtr::Get(&local_f8);
                  if (lVar6 != 0) goto LAB_14110e465;
                }
LAB_14110e49b:
                lVar6 = 0;
              }
              else {
LAB_14110e465:
                lVar7 = FUN_14137f110();
                if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (!bVar4) goto LAB_14110e49b;
              }
              iVar2 = *(int *)(param_1 + 0xa90);
              *(int *)(param_1 + 0xa90) = iVar2 + 1;
              if (*(int *)(param_1 + 0xa94) < iVar2 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar17,iVar2);
              }
              *(longlong *)(*puVar17 + (longlong)iVar2 * 8) = lVar6;
            }
          }
          if (local_e0 != 0) {
            FMemory::Free();
          }
          puVar1 = puVar14 + 9;
          puVar14 = puVar14 + 10;
        } while (puVar1 != puVar3 + (longlong)iVar9 * 10);
      }
    }
  }
  uVar10 = 0;
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar6 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (lVar6 = FUN_140cff230(lVar6), lVar6 != 0)) {
      FUN_140d3b8a0(lVar6,&local_a0);
      uVar15 = 0;
      local_d0 = 0;
      uVar11 = 0;
      local_c4 = 0;
      plVar12 = (longlong *)*puVar17;
      uVar8 = (longlong)*(int *)(param_1 + 0xa90) & 0x1fffffffffffffff;
      if (plVar12 + *(int *)(param_1 + 0xa90) < plVar12) {
        uVar8 = uVar15;
      }
      uVar13 = uVar10;
      uVar16 = uVar10;
      if (uVar8 != 0) {
        do {
          local_b0 = (void *)0x0;
          local_a8 = 0;
          local_res20 = *(undefined8 *)(*plVar12 + 0x18);
          FName::ToString(&local_res20,&local_b0);
          _Src = local_b0;
          lVar6 = (longlong)(int)local_a8;
          local_c0 = (void *)0x0;
          local_b8 = (int)local_a8;
          if ((int)local_a8 == 0) {
            local_b4 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c0,local_a8 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop(local_c0,_Src,lVar6 * 2);
          }
          FString::FString(local_88,&local_c0);
          FString::FString(local_78,local_88);
          lVar6 = FUN_1410f7030(&local_a0,local_78);
          if (local_88[0] != 0) {
            FMemory::Free();
          }
          if (local_c0 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_b0 != (void *)0x0) {
            FMemory::Free();
          }
          if (lVar6 == 0) {
            iVar9 = (int)uVar10;
            local_c8 = iVar9 + 1;
            if ((int)uVar16 < (int)local_c8) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d0,uVar10);
              uVar16 = (ulonglong)local_c4;
              uVar13 = local_d0;
            }
            uVar10 = (ulonglong)local_c8;
            *(longlong *)(uVar13 + (longlong)iVar9 * 8) = *plVar12;
          }
          uVar11 = (undefined4)uVar10;
          plVar12 = plVar12 + 1;
          uVar15 = uVar15 + 1;
          puVar17 = local_90;
        } while (uVar15 != uVar8);
      }
      uVar5 = local_c4;
      if (puVar17 == &local_d0) {
        plVar12 = local_a0;
        iVar9 = local_98;
        if (uVar13 != 0) {
          FMemory::Free(uVar13);
          plVar12 = local_a0;
          iVar9 = local_98;
        }
      }
      else {
        if (*puVar17 != 0) {
          FMemory::Free();
        }
        *puVar17 = uVar13;
        *(undefined4 *)(puVar17 + 1) = uVar11;
        *(uint *)((longlong)puVar17 + 0xc) = uVar5;
        plVar12 = local_a0;
        iVar9 = local_98;
      }
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_a0 != (longlong *)0x0) {
        FMemory::Free(local_a0);
      }
    }
  }
  return;
}



// FUNCTION 14110e720 FUN_14110e720 body=610 status=ok
// SIG undefined FUN_14110e720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_14110e720(undefined8 param_1)

{
  undefined4 uVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_1b8 [32];
  undefined2 local_198;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 *local_168 [2];
  longlong local_158 [4];
  longlong *local_138;
  int local_128;
  undefined1 local_118 [192];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  FWeakObjectPtr::operator=(&local_188,param_1);
  local_138 = (longlong *)0x0;
  local_128 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_158);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_1444f8920;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = local_188;
    *(undefined4 *)((longlong)puVar4 + 0x14) = local_184;
  }
  local_180 = 0;
  local_168[0] = &LAB_1410c58b0;
  local_178 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,0);
  local_198 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_180,0x14,"GetNumRemotePlayers");
  FUN_141022700(local_118,&local_180,local_168);
  uVar5 = FUN_141036f30(local_118,local_168);
  FUN_142084370(param_1,uVar5);
  if (local_128 != 0) {
    plVar7 = local_158;
    if (local_138 != (longlong *)0x0) {
      plVar7 = local_138;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar6 = local_58;
  if (local_58 != 0) {
    while ((lVar6 = local_58, local_58 != 0 && (*(char *)(local_58 + 0x58) == '\0'))) {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar2 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)))) {
        lVar6 = FUN_14203ca70();
        if (lVar6 != 0) {
          FUN_1420714f0(lVar6);
        }
      }
      else {
        FUN_142036de0();
      }
      lVar6 = local_58;
      if (local_58 == 0) break;
      if (*(char *)(local_58 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(local_58 + 0x50) + 0x20))(*(longlong **)(local_58 + 0x50),5);
      }
    }
  }
  cVar2 = *(char *)(lVar6 + 0x58);
  while (cVar2 == '\0') {
    (**(code **)(**(longlong **)(lVar6 + 0x50) + 0x20))(*(longlong **)(lVar6 + 0x50),0x5d638865,0);
    cVar2 = *(char *)(lVar6 + 0x58);
  }
  uVar1 = *(undefined4 *)(lVar6 + 0x60);
  FUN_140ce1dc0(local_118);
  return uVar1;
}



// FUNCTION 14110e990 FUN_14110e990 body=113 status=ok
// SIG undefined FUN_14110e990(void)

undefined8 FUN_14110e990(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 != -1) {
    lVar2 = FUN_1422312c0();
    if (lVar2 != 0) {
      lVar3 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar4 = FUN_140bb8be0(lVar2,param_2);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 14110ea10 FUN_14110ea10 body=1523 status=ok
// SIG undefined FUN_14110ea10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14110ea10(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *_Src;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *_Src_00;
  int iVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 *local_140;
  uint local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined4 *local_118;
  int local_110;
  undefined4 local_10c;
  undefined4 *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined4 *local_c8;
  ulonglong *puStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [16];
  undefined4 local_68 [2];
  undefined8 local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_168;
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_90,
                     L"{0}|platform(default=Add-on, xbox=Add-on, playstation=Add-on, stadia=Add-on)"
                     ,L"MainMenu",L"DownloadableContentGeneric");
  puVar6 = (undefined8 *)FTextFormat::FTextFormat(local_78,uVar5);
  puVar14 = (undefined4 *)0x0;
  local_68[0] = 0;
  uStack_100 = local_38;
  local_e0 = *puVar6;
  local_d8 = puVar6[1];
  local_40 = '\0';
  local_60 = 0;
  if (local_d8 != 0) {
    LOCK();
    *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
    UNLOCK();
  }
  local_108 = local_68;
  local_c8 = local_68;
  puStack_c0 = uStack_100;
  uVar5 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
  uVar5 = FText::Format(local_a8,&local_e0,uVar5);
  FText::FText(local_130,uVar5);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_a0 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_b8);
  if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_50 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  plVar3 = (longlong *)puVar6[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_88 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar7 == 0) {
LAB_14110ef97:
    FText::FText(param_2,local_130);
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_128 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    return param_2;
  }
  lVar8 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_14110ef97;
  lVar7 = FUN_140cfbfb0(lVar7);
  if (lVar7 == 0) {
    FText::FText(param_2,local_130);
    goto LAB_14110ed79;
  }
  puVar6 = (undefined8 *)FUN_140d3b2a0(lVar7);
  local_140 = (undefined4 *)0x0;
  local_138 = *(uint *)(puVar6 + 1);
  uVar12 = (ulonglong)(int)local_138;
  _Src = (void *)*puVar6;
  _Src_00 = puVar14;
  if (local_138 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_140,local_138,0);
    _Src_00 = local_140;
    _guard_xfg_dispatch_icall_nop(local_140,_Src,uVar12 * 2);
    uVar12 = (ulonglong)local_138;
  }
  iVar11 = (int)uVar12;
  if (1 < iVar11) {
    local_118 = (undefined4 *)0x0;
    local_110 = iVar11;
    if (iVar11 == 0) {
      local_10c = 0;
      puVar9 = puVar14;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,uVar12 & 0xffffffff,0);
      puVar9 = local_118;
      _guard_xfg_dispatch_icall_nop(local_118,_Src_00,(longlong)iVar11 * 2);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    uStack_100 = (ulonglong *)CONCAT44(local_10c,local_110);
    local_108 = puVar9;
    FUN_1417978e0(&local_f8,&local_108);
    puVar9 = (undefined4 *)FSoftObjectPath::TryLoad(&local_f8);
    if (puVar9 == (undefined4 *)0x0) {
LAB_14110ed48:
      puVar9 = puVar14;
    }
    else {
      lVar7 = FUN_142f47520();
      if ((*(int *)(*(longlong *)(puVar9 + 4) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(puVar9 + 4) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
          != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14110ed48;
    }
    if (local_f0 != 0) {
      FMemory::Free();
    }
    if (puVar9 != (undefined4 *)0x0) {
      puVar13 = puVar9 + 0x1c;
      lVar7 = FWeakObjectPtr::Get(puVar13);
      if (lVar7 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        _Src_00 = local_140;
        if ((DAT_1464b56f4 != puVar9[0x1e]) && (local_148 = 0, *(longlong *)(puVar9 + 0x20) != 0)) {
          lVar7 = FUN_141796df0();
          FWeakObjectPtr::operator=(puVar13,lVar7);
          if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            puVar9[0x1e] = DAT_1464b56f4;
          }
          lVar7 = FWeakObjectPtr::Get(puVar13);
          _Src_00 = local_140;
          if (lVar7 != 0) goto LAB_14110ee38;
        }
      }
      else {
LAB_14110ee38:
        lVar8 = FUN_142e67be0();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          puVar10 = (undefined4 *)FWeakObjectPtr::Get(puVar13);
          if (puVar10 == (undefined4 *)0x0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            _Src_00 = local_140;
            if ((DAT_1464b56f4 != puVar9[0x1e]) &&
               (local_148 = 0, *(longlong *)(puVar9 + 0x20) != 0)) {
              lVar7 = FUN_141796df0();
              FWeakObjectPtr::operator=(puVar13,lVar7);
              if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                puVar9[0x1e] = DAT_1464b56f4;
              }
              puVar10 = (undefined4 *)FWeakObjectPtr::Get(puVar13);
              _Src_00 = local_140;
              if (puVar10 != (undefined4 *)0x0) goto LAB_14110eef3;
            }
LAB_14110ef30:
            puVar10 = puVar14;
          }
          else {
LAB_14110eef3:
            lVar7 = FUN_142e67be0();
            if ((*(int *)(*(longlong *)(puVar10 + 4) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(puVar10 + 4) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_14110ef30;
          }
          lVar7 = *(longlong *)(puVar10 + 0x2e);
          if (lVar7 != 0) {
            lVar8 = FUN_141304350();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              uVar5 = FUN_14110e110(lVar7);
              FText::operator=(local_130,uVar5);
            }
          }
        }
      }
    }
  }
  FText::FText(param_2,local_130);
  if (_Src_00 != (undefined4 *)0x0) {
    FMemory::Free(_Src_00);
  }
LAB_14110ed79:
  if (local_128 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  plVar3 = local_128 + 1;
  lVar7 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar7 != 1) {
    return param_2;
  }
  (**(code **)*local_128)(local_128);
  LOCK();
  piVar1 = (int *)((longlong)local_128 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar11 != 1) {
    return param_2;
  }
  (**(code **)(*local_128 + 8))(local_128,1);
  return param_2;
}



// FUNCTION 14110f010 FUN_14110f010 body=385 status=ok
// SIG undefined FUN_14110f010(void)

int FUN_14110f010(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  plVar1 = param_2 + 0x15;
  lVar5 = FWeakObjectPtr::Get(plVar1);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == (int)param_2[0x16]) {
      return 0;
    }
    if (param_2[0x17] == 0) {
      return 0;
    }
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar1,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_2 + 0x16) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(plVar1);
    if (lVar5 == 0) {
      return 0;
    }
  }
  lVar6 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar7 = FUN_142f71d80();
    lVar6 = lVar5;
    do {
      if (lVar6 == lVar7) {
        lVar7 = FUN_142f71d80();
        lVar6 = lVar5;
        while (lVar6 != lVar7) {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          if (lVar6 == 0) {
            return 0;
          }
        }
        cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
        if (cVar3 == '\0') {
          return 4;
        }
        cVar3 = (**(code **)(*param_2 + 0x280))(param_2,0);
        if (cVar3 != '\0') {
          cVar3 = (**(code **)(*param_1 + 0x728))(param_1,lVar5);
          if (cVar3 == '\0') {
            iVar4 = FUN_142f5c9d0(param_1,lVar5);
            return 3 - (uint)(iVar4 != 0);
          }
          return 1;
        }
        return 5;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  return 0;
}



// FUNCTION 14110f1a0 FUN_14110f1a0 body=510 status=ok
// SIG undefined FUN_14110f1a0(void)

void FUN_14110f1a0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  wchar_t *pwVar13;
  undefined2 local_res18 [4];
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  uVar6 = thunk_FUN_1422ca050();
  cVar5 = FUN_140a0b280(uVar6);
  if (cVar5 == '\0') {
    FUN_140dbb930(local_38,3);
    FWeakObjectPtr::operator=(local_48,0);
    local_40 = 0;
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x58c);
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_20,L"Network Error",L"GFxMainAndPauseBaseMenu",L"NetworkError");
    FUN_1410f3960(uVar6,uVar11,local_38,local_48,1,0,0);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  else {
    local_res18[0] = 0;
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x5cc);
    if (lVar7 != 0) {
      lVar8 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (cVar5 = FUN_140bca8d0(lVar7,local_res18), cVar5 == '\0')) {
        puVar9 = (undefined2 *)FUN_140a5dc70(lVar7);
        local_res18[0] = *puVar9;
      }
    }
    if ((char)local_res18[0] == '\0') {
      pwVar13 = L"Mail";
      puVar12 = local_50;
    }
    else if ((char)local_res18[0] == '\x01') {
      pwVar13 = L"Lan";
      puVar12 = local_58;
    }
    else {
      if ((char)local_res18[0] != '\x02') {
        return;
      }
      pwVar13 = L"Roster";
      puVar12 = local_res20;
    }
    puVar10 = (undefined8 *)FName::FName(puVar12,pwVar13,1);
    FUN_14112a420(param_1,*puVar10,param_2);
  }
  return;
}



// FUNCTION 14110f3a0 FUN_14110f3a0 body=1636 status=ok
// SIG undefined FUN_14110f3a0(void)

void FUN_14110f3a0(longlong param_1)

{
  wchar_t *pwVar1;
  bool bVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  int iVar9;
  longlong local_res10;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  pwVar8 = (wchar_t *)0x0;
  local_88 = (longlong *)0x0;
  local_80 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"roomMoodWrapper",0x20);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  lVar3 = FUN_140e96f30(param_1,&local_88,0,6,&local_98);
  plVar7 = local_98;
  for (iVar9 = (int)local_90; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  pwVar6 = pwVar8;
  pwVar4 = pwVar8;
  if (lVar3 != 0) {
    local_68 = 0;
    local_60 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"roomMoodInfo",0x1a);
    local_78 = (longlong *)0x0;
    local_70 = 0;
    pwVar4 = (wchar_t *)FUN_140ecbdf0(lVar3,&local_68,0,6,&local_78);
    pwVar6 = (wchar_t *)0x3;
  }
  if (((ulonglong)pwVar6 & 2) != 0) {
    pwVar6 = (wchar_t *)(ulonglong)((uint)pwVar6 & 0xfffffffd);
    plVar7 = local_78;
    for (iVar9 = (int)local_70; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free(local_78);
    }
  }
  if ((((ulonglong)pwVar6 & 1) != 0) && (local_68 != 0)) {
    FMemory::Free();
  }
  bVar2 = false;
  if (pwVar4 != (wchar_t *)0x0) {
    local_98 = (longlong *)0x0;
    local_90 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"listContent",0x18);
    local_88 = (longlong *)0x0;
    local_80 = 0;
    FUN_140ecbdf0(pwVar4,&local_98,0,6,&local_88);
    bVar2 = true;
    plVar7 = local_88;
    for (iVar9 = (int)local_80; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
  }
  if ((bVar2) && (local_98 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if (pwVar4 != (wchar_t *)0x0) {
    local_98 = (longlong *)0x0;
    local_90 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"infoPanel",0x14);
    local_88 = (longlong *)0x0;
    local_80 = 0;
    FUN_1410f9600(pwVar4,param_1 + 0x6a8,&local_98,0,6,&local_88);
    plVar7 = local_88;
    for (iVar9 = (int)local_80; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_98 = (longlong *)0x0;
    local_90 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"listButtons",0x18);
    local_88 = (longlong *)0x0;
    local_80 = 0;
    FUN_140f15e80(pwVar4,param_1 + 0x6b0,&local_98,0,6,&local_88);
    plVar7 = local_88;
    for (iVar9 = (int)local_80; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_98 = (longlong *)0x0;
    local_90 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"scrollBar",0x14);
    local_88 = (longlong *)0x0;
    local_80 = 0;
    FUN_140e98f00(pwVar4,param_1 + 0x6b8,&local_98,0,6,&local_88);
    plVar7 = local_88;
    for (iVar9 = (int)local_80; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_98 = (longlong *)0x0;
    local_90 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"unlockedText",0x1a);
    local_88 = (longlong *)0x0;
    local_80 = 0;
    FUN_140e99270(pwVar4,param_1 + 0x6c0,&local_98,0,6,&local_88);
    plVar7 = local_88;
    for (iVar9 = (int)local_80; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    local_40 = 0;
    local_48 = 0;
    local_38 = 0;
    local_58 = 0xffffffff;
    local_54 = 0;
    FUN_141132a20(*(longlong *)(param_1 + 0x6a8),&local_58);
  }
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    FUN_142ed4250(*(longlong *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x6b8));
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMoodItemSelected",L"::");
    pwVar6 = pwVar8;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar6 = pwVar1;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    lVar5 = local_res10;
    lVar3 = *(longlong *)(param_1 + 0x6b0);
    FWeakObjectPtr::operator=(&local_98,0);
    local_90 = 0;
    FWeakObjectPtr::operator=(&local_98,param_1);
    local_90 = lVar5;
    if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(&local_98), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_90);
    }
    FUN_1406a5aa0(lVar3 + 0x180,&local_98);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMoodItemClicked",L"::");
    while (pwVar4 = pwVar6, pwVar4 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar8 = pwVar4;
    }
    FName::FName(&local_res10,pwVar8 + 2,1);
    lVar3 = *(longlong *)(param_1 + 0x6b0);
    FWeakObjectPtr::operator=(&local_98,0);
    local_90 = 0;
    FWeakObjectPtr::operator=(&local_98,param_1);
    local_90 = local_res10;
    if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(&local_98), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_90);
    }
    FUN_1406a5aa0(lVar3 + 0x1a8,&local_98);
  }
  return;
}



// FUNCTION 14110fa10 FUN_14110fa10 body=211 status=ok
// SIG undefined FUN_14110fa10(void)

void FUN_14110fa10(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  
  if (((byte)(*(char *)(param_1 + 0x778) - 1U) < 2) &&
     (cVar1 = FUN_141033030(param_1 + 0x820), cVar1 != '\0')) {
    param_1 = param_1 + 0x820;
  }
  else if (((byte)(*(char *)(param_1 + 0x778) - 3U) < 2) &&
          (cVar1 = FUN_141033030(param_1 + 0x8f0,param_2), cVar1 != '\0')) {
    if (param_3 != '\0') {
      FUN_141132530(param_1,3);
    }
    param_1 = param_1 + 0x8f0;
  }
  else {
    if (1 < (byte)(*(char *)(param_1 + 0x778) - 3U)) {
      return;
    }
    cVar1 = FUN_141033030(param_1 + 0x9c0,param_2);
    if (cVar1 == '\0') {
      return;
    }
    if (param_3 != '\0') {
      FUN_141132530(param_1,4);
    }
    param_1 = param_1 + 0x9c0;
  }
  FUN_14103ca50(param_1,param_2,param_3);
  return;
}



// FUNCTION 14110faf0 FUN_14110faf0 body=30 status=ok
// SIG undefined FUN_14110faf0(void)

void FUN_14110faf0(longlong param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x580,local_res10);
  return;
}



// FUNCTION 14110fb10 FUN_14110fb10 body=694 status=ok
// SIG undefined FUN_14110fb10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14110fb10(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  undefined1 auStack_158 [32];
  longlong local_138;
  ulonglong local_130;
  code *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  *(char *)(param_1 + 0x708) = param_2;
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    local_130 = 0;
    pwVar7 = L"news";
    if (param_2 != '\0') {
      pwVar7 = L"lobby";
    }
    local_138 = 0;
    if (*pwVar7 != L'\0') {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (pwVar7[lVar6] != L'\0');
      uVar5 = (int)lVar6 + 1;
      local_130 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
      }
      FGenericPlatformString::Memcpy(local_138,pwVar7,(longlong)(int)uVar5 * 2);
    }
    FUN_142088910(*(undefined8 *)(param_1 + 0x6e0),&local_138);
    if (local_138 != 0) {
      FMemory::Free();
    }
  }
  if (param_2 == '\0') {
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f3f130;
    }
    local_d8[0] = &LAB_1411073f0;
    FUN_141107840(param_1,local_d8);
    cVar1 = BuildSettings::IsPromotedBuild();
    if (cVar1 == '\0') {
      local_f8 = (longlong *)0x0;
      local_e8 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_118);
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[1] = param_1;
        *puVar2 = &PTR_FUN_143f77b70;
      }
      local_128[0] = FUN_14107d8b0;
      uVar3 = FUN_1420849a0(param_1,local_88,local_128);
      FUN_14208c260(param_1,uVar3);
      if (local_48 != 0) {
        plVar4 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar4 = local_58;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_e8 != 0) {
        plVar4 = local_118;
        if (local_f8 != (longlong *)0x0) {
          plVar4 = local_f8;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_f8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    plVar4 = local_a8;
    if (local_98 != 0) {
      plVar8 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar8 = local_a8;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
        plVar4 = local_a8;
      }
    }
  }
  else {
    local_f8 = (longlong *)0x0;
    local_e8 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_118);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f3f130;
    }
    local_128[0] = (code *)&LAB_1411076d0;
    FUN_141107840(param_1,local_128);
    plVar4 = local_f8;
    if (local_e8 != 0) {
      plVar8 = local_118;
      if (local_f8 != (longlong *)0x0) {
        plVar8 = local_f8;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
        plVar4 = local_f8;
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_141138000(param_1);
  return;
}



// FUNCTION 14110fdd0 FUN_14110fdd0 body=179 status=ok
// SIG undefined FUN_14110fdd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14110fdd0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3f130;
  }
  local_68[0] = &LAB_141107280;
  FUN_141107840(param_1,local_68);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14110fe90 FUN_14110fe90 body=328 status=ok
// SIG undefined FUN_14110fe90(void)

void FUN_14110fe90(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  if ((*(char *)(param_1 + 0x961) != '\0') && (*(char *)(param_1 + 0x960) != '\0')) {
    FUN_14112d9e0();
    FUN_140f089d0(param_1 + 0x7a0);
    FUN_140f0b090(param_1 + 0x7a0,0xffffffff,0);
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x948);
    uVar6 = 0;
    uVar5 = uVar6;
    if (lVar3 != 0) {
      lVar4 = FUN_1412fc200();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar5 = *(ulonglong *)(lVar3 + 0x6c8);
      }
    }
    *(ulonglong *)(param_1 + 0x968) = uVar5;
    if ((uVar5 != 0) && (0 < *(int *)(param_1 + 0x908))) {
      do {
        lVar3 = FWeakObjectPtr::Get((longlong)(int)uVar6 * 0x110 +
                                    *(longlong *)(param_1 + 0x900) + 0x5c);
        if (lVar3 == *(longlong *)(param_1 + 0x968)) {
          uVar8 = 1;
          goto LAB_14110ffaa;
        }
        uVar7 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
      } while ((int)uVar7 < *(int *)(param_1 + 0x908));
    }
    if ((*(longlong *)(param_1 + 0x910) != 0) && (iVar2 = FUN_142eb7440(), 0 < iVar2)) {
      uVar8 = 0;
      uVar6 = 0;
LAB_14110ffaa:
      FUN_140f0b090(param_1 + 0x7a0,uVar6,uVar8,0);
    }
    FUN_142ecd4d0(param_1);
  }
  return;
}



// FUNCTION 14110ffe0 FUN_14110ffe0 body=30 status=ok
// SIG undefined FUN_14110ffe0(void)

void FUN_14110ffe0(longlong param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x570,local_res10);
  return;
}



// FUNCTION 141110000 FUN_141110000 body=484 status=ok
// SIG undefined FUN_141110000(void)

undefined8 FUN_141110000(longlong param_1,longlong param_2)

{
  void *_Src;
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src_00;
  int iVar5;
  longlong *local_48;
  int local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar3 = FUN_140cff230(lVar3), lVar3 != 0)) {
      FUN_140d3b8a0(lVar3,&local_48);
      local_30 = *(int *)(param_2 + 0x38);
      lVar3 = (longlong)local_30;
      _Src_00 = (void *)0x0;
      _Src = *(void **)(param_2 + 0x30);
      local_38 = (void *)0x0;
      iVar5 = local_30;
      if (local_30 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
        _Src_00 = local_38;
        _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar3 * 2);
        iVar5 = local_30;
      }
      local_38 = (void *)0x0;
      local_30 = iVar5;
      if (iVar5 == 0) {
        local_2c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar5,0);
        _guard_xfg_dispatch_icall_nop(local_38,_Src_00,(longlong)iVar5 * 2);
      }
      FString::FString(local_28,&local_38);
      FString::FString(local_18,local_28);
      lVar3 = FUN_1410f7030(&local_48,local_18);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
      if (lVar3 != 0) {
        plVar1 = local_48;
        if (_Src_00 != (void *)0x0) {
          FMemory::Free(_Src_00);
          plVar1 = local_48;
        }
        for (; local_40 != 0; local_40 = local_40 + -1) {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free(local_48);
        }
        return 1;
      }
      plVar1 = local_48;
      if (_Src_00 != (void *)0x0) {
        FMemory::Free(_Src_00);
        plVar1 = local_48;
      }
      for (; local_40 != 0; local_40 = local_40 + -1) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        plVar1 = plVar1 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
  }
  return 0;
}



// FUNCTION 1411101f0 FUN_1411101f0 body=104 status=ok
// SIG undefined FUN_1411101f0(void)

bool FUN_1411101f0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = FUN_14046e5c0(lVar3);
      return 1 < iVar2;
    }
  }
  return false;
}



// FUNCTION 141110260 FUN_141110260 body=2044 status=ok
// SIG undefined FUN_141110260(void)

void FUN_141110260(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  float fVar12;
  undefined1 local_res8 [8];
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xd;
  uVar8 = 0;
  local_38 = (code *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"lobbyFocused",0x1a);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_140ecf270(param_1,param_1 + 0xd6,&local_38,0,6,&local_48);
  plVar4 = local_48;
  for (iVar10 = (int)local_40; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (code *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0x26;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"lobbyFocused.LobbyContainerTint.inner",0x4c);
  local_38 = (code *)0x0;
  uStack_30 = 0;
  FUN_140ecf270(param_1,param_1 + 0xd7,&local_48,0,6,&local_38);
  plVar4 = (longlong *)local_38;
  for (iVar10 = (int)uStack_30; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_38 != (code *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (param_1[0xd7] != 0) {
    FUN_142087ad0(param_1[0xd7],(longlong)param_1 + 0x69c,param_1 + 0xd4);
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar9 = uVar8;
    if (lVar3 != 0) {
      lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      uVar9 = *(ulonglong *)(lVar3 + 400);
    }
    if ((uVar9 == 0) || (iVar10 = FUN_14046e5c0(), iVar10 < 2)) {
      fVar12 = *(float *)(param_1 + 0xd3);
    }
    else if ((param_1[0x86] == 0) || (cVar2 = APlayerController::IsPrimaryPlayer(), cVar2 == '\0'))
    {
      fVar12 = 75.0;
    }
    else {
      fVar12 = -1000.0;
    }
    *(float *)(param_1 + 0xd4) = fVar12 + *(float *)(param_1 + 0xd4);
    FUN_1420900f0(param_1[0xd7],*(undefined8 *)((longlong)param_1 + 0x69c));
  }
  local_48 = (longlong *)0x0;
  local_40 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"lobbyFocused.lobbyWrapper",0x34);
  local_38 = (code *)0x0;
  uStack_30 = 0;
  FUN_140ecf270(param_1,param_1 + 0xd8,&local_48,0,6,&local_38);
  plVar4 = (longlong *)local_38;
  for (iVar10 = (int)uStack_30; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_38 != (code *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0x26;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"lobbyFocused.lobbyWrapper.lobbyWidget",0x4c);
  local_38 = (code *)0x0;
  uStack_30 = 0;
  FUN_1410b09c0(param_1,param_1 + 0xd9,&local_48,0,6,&local_38);
  plVar4 = (longlong *)local_38;
  for (iVar10 = (int)uStack_30; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_38 != (code *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"newsWrapper",0x18);
  local_38 = (code *)0x0;
  uStack_30 = 0;
  FUN_140ecf270(param_1,param_1 + 0xdc,&local_48,0,6,&local_38);
  plVar4 = (longlong *)local_38;
  for (iVar10 = (int)uStack_30; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_38 != (code *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"newsWrapper.newsWidget",0x2e);
  local_38 = (code *)0x0;
  uStack_30 = 0;
  FUN_140ecf270(param_1,param_1 + 0xdd,&local_48,0,6,&local_38);
  plVar4 = (longlong *)local_38;
  for (iVar10 = (int)uStack_30; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_38 != (code *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (param_1[0xdd] != 0) {
    local_48 = (longlong *)0x0;
    local_40 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"newsWrapper",0x18);
    local_38 = (code *)0x0;
    uStack_30 = 0;
    FUN_1410fa0c0(param_1[0xdd],param_1 + 0xde,&local_48,0,6,&local_38);
    plVar4 = (longlong *)local_38;
    for (iVar10 = (int)uStack_30; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_38 != (code *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if (param_1[0xde] != 0) {
    param_1[0xdf] = *(longlong *)(param_1[0xde] + 0x170);
  }
  local_48 = (longlong *)0x0;
  local_40 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"PNL_Matchmaking_Activated",0x34);
  local_38 = (code *)0x0;
  uStack_30 = 0;
  FUN_1410f9e50(param_1,param_1 + 0xe0,&local_48,0,6,&local_38);
  plVar4 = (longlong *)local_38;
  for (iVar10 = (int)uStack_30; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_38 != (code *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar3 = param_1[0xd9];
  if (lVar3 != 0) {
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_14111d700;
    plVar11 = (longlong *)(lVar3 + 0x270);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_144012f30;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_38._4_4_;
      *(int *)(plVar4 + 3) = (int)uStack_30;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_30._4_4_;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_144012f78;
    }
    if (&local_38 != plVar11) {
      if (plVar4 == (longlong *)0x0) {
        if ((*(int *)(lVar3 + 0x278) != 0) &&
           (plVar1 = (longlong *)*plVar11, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar11 != 0) {
            lVar5 = FMemory::Realloc(*plVar11,0,0);
            *plVar11 = lVar5;
          }
          *(undefined4 *)(lVar3 + 0x278) = 0;
        }
      }
      else {
        (**(code **)(*plVar4 + 0x30))(plVar4,plVar11);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar3 = FMemory::Realloc(plVar4,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
    lVar3 = param_1[0xd9];
    local_38 = FUN_14111d940;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    plVar11 = (longlong *)(lVar3 + 0x280);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_38._4_4_;
      *(int *)(plVar4 + 3) = (int)uStack_30;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_30._4_4_;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar10 = *(int *)(lVar3 + 0x288);
      *(int *)(lVar3 + 0x288) = iVar10 + 1;
      if (*(int *)(lVar3 + 0x28c) < iVar10 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar10);
      }
      puVar6 = (undefined8 *)((longlong)iVar10 * 0x10 + *plVar11);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
    plVar4 = (longlong *)param_1[0xd9];
    local_38 = (code *)plVar4;
    if (plVar4 != (longlong *)0x0) {
      uVar7 = UBlendableInterface::GetPrivateStaticClass();
      uVar8 = UObjectBaseUtility::GetInterfaceAddress(plVar4,uVar7);
    }
    uStack_30 = uVar8;
    FUN_142ecfdd0(param_1,&local_38,0,0,0,0);
  }
  if (param_1[0xdf] != 0) {
    FUN_1411fb120(param_1[0xdf],param_1[0xdd]);
    FUN_1411f6be0(param_1[0xdf]);
  }
  return;
}



// FUNCTION 141110a60 FUN_141110a60 body=39 status=ok
// SIG undefined FUN_141110a60(void)

void FUN_141110a60(longlong *param_1)

{
  FUN_140e9cc60(param_1 + 0x61);
                    /* WARNING: Could not recover jumptable at 0x000141110a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x348))(param_1);
  return;
}



// FUNCTION 141110a90 FUN_141110a90 body=146 status=ok
// SIG undefined FUN_141110a90(void)

void FUN_141110a90(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140e9cc60(param_1 + 0x61);
  (**(code **)(*param_1 + 0x348))(param_1);
  lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x364);
  if (lVar2 != 0) {
    lVar3 = UARTrackedObject::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FText::operator=(param_1 + 0xd9,lVar2 + 0x30);
      (**(code **)(*param_1 + 0x348))(param_1);
    }
  }
  return;
}



// FUNCTION 141110b30 FUN_141110b30 body=95 status=ok
// SIG undefined FUN_141110b30(void)

void FUN_141110b30(longlong param_1)

{
  FUN_142dd2860();
  FUN_142fceca0(*(undefined8 *)(param_1 + 0x2ca0),*(undefined8 *)(param_1 + 0x458),param_1 + 0x1190,
                0);
  FUN_142fc8b90(param_1,*(undefined8 *)(param_1 + 0x2cb8));
  FUN_142fcd410(param_1,*(undefined8 *)(param_1 + 0x2cc0),0xbf800000,0,0);
  return;
}



// FUNCTION 141110b90 FUN_141110b90 body=615 status=ok
// SIG undefined FUN_141110b90(void)

void FUN_141110b90(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_a8 [5];
  longlong *plStack_80;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FString::operator=(param_1 + 0x318,param_2 + 0x40);
  uVar6 = FText::FromString(local_68,param_2 + 0x40);
  FUN_142ed3af0(param_1,uVar6,0);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  local_a8[1] = 0x14;
  local_a8[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy(local_a8[0],L"characterLevelLabel",0x28);
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_50,L"LEVEL",L"LoadGameListItem",L"LevelText");
  FUN_142f100e0(param_1,local_a8,uVar6);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  local_a8[2] = 0;
  local_a8[3] = 0x12;
  local_a8[4] = 0;
  plStack_80 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
  FGenericPlatformString::Memcpy(local_a8[2],L"characterLevelNum",0x24);
  uVar6 = FText::AsNumber(local_38,*(undefined4 *)(param_2 + 0x10),0,local_a8 + 4);
  FUN_142f100e0(param_1,local_a8 + 2,uVar6);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  plVar1 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_80 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  FUN_142ed2820(param_1,param_3,1);
  if (*(longlong *)(param_1 + 0x310) != 0) {
    uVar6 = FName::ToString(param_2 + 0x18,local_78);
    FUN_142088910(*(undefined8 *)(param_1 + 0x310),uVar6);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141110e00 FUN_141110e00 body=442 status=ok
// SIG undefined FUN_141110e00(void)

void FUN_141110e00(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_18;
  undefined8 local_10;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar2 != '\0') {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x59c);
    lVar4 = FUN_1410f70d0(uVar3);
    if ((lVar4 != 0) && (lVar4 = FUN_142eb6ed0(lVar4), lVar4 != 0)) {
      lVar5 = FUN_141340df0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_141110e90;
    }
  }
  lVar4 = 0;
LAB_141110e90:
  uVar3 = 0;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xc1) == '\0')) {
    if (*(char *)(lVar4 + 0xc2) == '\0') {
      uVar3 = 0;
      if (*(char *)(lVar4 + 0xc3) != '\0') {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  if (*(longlong *)(param_1 + 0x690) != 0) {
    FUN_141132cc0(*(longlong *)(param_1 + 0x690),uVar3);
    FUN_141131b70(*(undefined8 *)(param_1 + 0x690),1);
    FWeakObjectPtr::operator=
              (param_1 + 0x698,*(undefined8 *)(*(longlong *)(param_1 + 0x690) + 0x198));
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x698);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x698);
    local_10 = 0;
    local_18 = lVar4;
    if (lVar4 != 0) {
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar3);
    }
    FUN_142ecfdd0(param_1,&local_18,0,0,0,0);
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
    if (((cVar2 != '\0') &&
        (lVar4 = FWeakObjectPtr::Get(param_1 + 0x59c), *(char *)(lVar4 + 0xb8) == '\x02')) &&
       (lVar4 = FWeakObjectPtr::Get(param_1 + 0x59c), *(char *)(lVar4 + 0xb9) != '\0')) {
      return;
    }
    cVar2 = FUN_142ebd930(param_1);
    if (cVar2 != '\0') {
      FUN_14110c8f0(param_1);
    }
  }
  return;
}



// FUNCTION 141110fc0 FUN_141110fc0 body=445 status=ok
// SIG undefined FUN_141110fc0(void)

void FUN_141110fc0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if ((param_2 != 0) && (iVar4 = *(int *)(param_3 + 0x38), *(int *)(param_2 + 0x308) != iVar4)) {
    if (iVar4 == 3) {
      lVar5 = FName::GetNames();
      if ((((-1 < *(int *)(param_3 + 0x18)) && (*(int *)(param_3 + 0x18) < *(int *)(lVar5 + 0x400)))
          && (iVar4 = *(int *)(param_3 + 0x18), uVar7 = iVar4 >> 0x1f & 0x3fff,
             uVar3 = iVar4 + uVar7,
             *(longlong *)
              (*(longlong *)(lVar5 + (longlong)((int)uVar3 >> 0xe) * 8) +
              (longlong)(int)((uVar3 & 0x3fff) - uVar7) * 8) != 0)) &&
         (((-1 < iVar4 && (iVar4 < *(int *)(lVar5 + 0x400))) &&
          (uVar7 = *(int *)(param_3 + 0x18) >> 0x1f & 0x3fff,
          uVar3 = *(int *)(param_3 + 0x18) + uVar7,
          *(longlong *)
           (*(longlong *)(lVar5 + (longlong)((int)uVar3 >> 0xe) * 8) +
           (longlong)(int)((uVar3 & 0x3fff) - uVar7) * 8) != 0)))) {
        iVar4 = FUN_14110cc90(param_1);
        FUN_141110b90(param_2,param_3,iVar4 == *(int *)(param_3 + 0x20));
        *(undefined4 *)(param_2 + 0x308) = *(undefined4 *)(param_3 + 0x38);
        return;
      }
      iVar4 = *(int *)(param_3 + 0x38);
    }
    if (iVar4 == 2) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_38,L"!Corrupt!",L"LoadGameListItem",L"CorruptCharacterStringText");
      FUN_1411317d0(param_2,uVar6);
      plVar8 = local_30;
    }
    else {
      if (iVar4 != 1) {
        return;
      }
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_20,L"Reading...",L"LoadGameListItem",L"ReadingCharacterStringText");
      FUN_1411317d0(param_2,uVar6);
      plVar8 = local_18;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    *(undefined4 *)(param_2 + 0x308) = *(undefined4 *)(param_3 + 0x38);
  }
  return;
}



// FUNCTION 141111180 FUN_141111180 body=97 status=ok
// SIG undefined FUN_141111180(void)

ulonglong FUN_141111180(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      uVar4 = (ulonglong)uVar5 << 8;
      bVar1 = false;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = FUN_140bc9f60(lVar2);
      return uVar4;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1411111f0 FUN_1411111f0 body=887 status=ok
// SIG undefined FUN_1411111f0(void)

ulonglong FUN_1411111f0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar8;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  void *pvVar7;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  void *pvVar12;
  bool bVar13;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  uint local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x58c);
  uVar10 = 0;
  if (lVar2 == 0) {
LAB_14111155e:
    return uVar10 & 0xffffffffffffff00;
  }
  lVar3 = FUN_14145f370();
  uVar8 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    uVar10 = (ulonglong)uVar8 << 8;
    bVar13 = false;
  }
  else {
    uVar10 = CONCAT71(uVar8,1);
    bVar13 = true;
  }
  if (!bVar13) goto LAB_14111155e;
  lVar3 = FUN_140cfbfb0(lVar2);
  uVar10 = 0;
  if (lVar3 == 0) goto LAB_14111155e;
  puVar4 = (undefined8 *)FUN_140d3b2a0(lVar3);
  pvVar12 = (void *)0x0;
  local_58 = (void *)0x0;
  local_50 = *(uint *)(puVar4 + 1);
  uVar10 = (ulonglong)(int)local_50;
  pvVar5 = (void *)*puVar4;
  if (local_50 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_58,pvVar5,uVar10 * 2);
    uVar10 = (ulonglong)local_50;
  }
  iVar9 = (int)uVar10;
  if (iVar9 < 2) goto LAB_14111152f;
  local_68 = (void *)0x0;
  local_60 = iVar9;
  if (iVar9 == 0) {
    local_5c = 0;
    pvVar5 = pvVar12;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,uVar10 & 0xffffffff,0);
    pvVar5 = local_68;
    _guard_xfg_dispatch_icall_nop(local_68,local_58,(longlong)iVar9 * 2);
  }
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_48 = pvVar5;
  local_40 = local_60;
  local_3c = local_5c;
  FUN_1417978e0(&local_38,&local_48);
  pvVar5 = (void *)FSoftObjectPath::TryLoad(&local_38);
  if (pvVar5 == (void *)0x0) {
LAB_14111135d:
    pvVar5 = pvVar12;
  }
  else {
    lVar3 = FUN_142f47520();
    if ((*(int *)(*(longlong *)((longlong)pvVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)((longlong)pvVar5 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (!bVar13) goto LAB_14111135d;
  }
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (pvVar5 == (void *)0x0) {
    bVar13 = true;
    goto LAB_141111531;
  }
  lVar11 = (longlong)pvVar5 + 0x70;
  lVar3 = FWeakObjectPtr::Get(lVar11);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)((longlong)pvVar5 + 0x78)) &&
       (*(longlong *)((longlong)pvVar5 + 0x80) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar11,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)((longlong)pvVar5 + 0x78) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar11);
      if (lVar3 != 0) goto LAB_1411113f7;
    }
  }
  else {
LAB_1411113f7:
    lVar6 = FUN_142e67be0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) {
      pvVar7 = (void *)FWeakObjectPtr::Get(lVar11);
      if (pvVar7 == (void *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)((longlong)pvVar5 + 0x78)) &&
           (*(longlong *)((longlong)pvVar5 + 0x80) != 0)) {
          lVar3 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar11,lVar3);
          if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)((longlong)pvVar5 + 0x78) = DAT_1464b56f4;
          }
          pvVar7 = (void *)FWeakObjectPtr::Get(lVar11);
          if (pvVar7 != (void *)0x0) goto LAB_1411114a2;
        }
LAB_1411114d8:
        pvVar7 = pvVar12;
      }
      else {
LAB_1411114a2:
        lVar3 = FUN_142e67be0();
        if ((*(int *)(*(longlong *)((longlong)pvVar7 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)((longlong)pvVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if (!bVar13) goto LAB_1411114d8;
      }
      lVar3 = *(longlong *)((longlong)pvVar7 + 0xb8);
      if (lVar3 != 0) {
        lVar11 = FUN_141304350();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if (bVar13) {
          cVar1 = FUN_140aa50f0(lVar3,lVar2);
          bVar13 = cVar1 == '\0';
          goto LAB_141111531;
        }
      }
    }
  }
LAB_14111152f:
  bVar13 = false;
LAB_141111531:
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return (ulonglong)bVar13;
}



// FUNCTION 141111570 FUN_141111570 body=54 status=ok
// SIG undefined FUN_141111570(void)

undefined1 FUN_141111570(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x710) == 0) {
    cVar1 = FUN_141111610();
    if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x798) != 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1411115b0 FUN_1411115b0 body=87 status=ok
// SIG undefined FUN_1411115b0(void)

ulonglong FUN_1411115b0(longlong param_1)

{
  int iVar1;
  ulonglong in_RAX;
  
  if ((*(longlong *)(param_1 + 0x710) == 0) && (*(longlong *)(param_1 + 0x788) != 0)) {
    in_RAX = FUN_142eb7a00();
    iVar1 = (int)in_RAX;
    if ((-1 < iVar1) &&
       ((iVar1 < *(int *)(param_1 + 0x6d8) &&
        (in_RAX = *(ulonglong *)(param_1 + 0x6d0),
        *(int *)((longlong)iVar1 * 0x1c8 + 0x38 + in_RAX) != 1)))) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141111610 FUN_141111610 body=97 status=ok
// SIG undefined FUN_141111610(void)

ulonglong FUN_141111610(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x58c);
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      uVar4 = (ulonglong)uVar5 << 8;
      bVar1 = false;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = FUN_140d01b90(lVar2);
      return uVar4;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 141111680 FUN_141111680 body=46 status=ok
// SIG undefined FUN_141111680(void)

undefined1 FUN_141111680(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    cVar1 = FUN_141087490(*(longlong *)(param_1 + 0x6c8) + 0x170);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1411116b0 FUN_1411116b0 body=47 status=ok
// SIG undefined FUN_1411116b0(void)

undefined8 FUN_1411116b0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    cVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x6f8) + 0x170) + 0x48))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1411116e0 FUN_1411116e0 body=78 status=ok
// SIG undefined FUN_1411116e0(void)

ulonglong FUN_1411116e0(longlong param_1)

{
  ulonglong in_RAX;
  
  if (((*(longlong *)(param_1 + 0x6f8) != 0) && (*(char *)(param_1 + 0x70a) != '\0')) &&
     (*(char *)(param_1 + 0x70b) == '\x01')) {
    in_RAX = FUN_142ebdd70();
    if (((char)in_RAX == '\0') &&
       (in_RAX = *(ulonglong *)(param_1 + 0x6f8), *(char *)(in_RAX + 0x360) != '\0')) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141111730 FUN_141111730 body=55 status=ok
// SIG undefined FUN_141111730(void)

undefined1 FUN_141111730(void)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = FUN_14110cfa0();
  if (lVar3 != 0) {
    uVar1 = FUN_14137f1c0();
    cVar2 = FUN_142ef5b10(lVar3,uVar1);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141111770 FUN_141111770 body=165 status=ok
// SIG undefined FUN_141111770(void)

undefined8 FUN_141111770(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  if (((*(byte *)(param_1 + 0x5c8) & 2) != 0) && (lVar3 = FUN_1422312c0(), lVar3 != 0)) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (plVar5 = (longlong *)FUN_140bb8be0(lVar3,0), plVar5 != (longlong *)0x0)) &&
       (cVar2 = FUN_140e53cb0(plVar5), cVar2 == '\0')) {
      uVar6 = (**(code **)(*plVar5 + 0x148))(plVar5);
      lVar3 = FUN_140d3a420(uVar6);
      if ((lVar3 != 0) && (cVar2 = FUN_140d3db10(lVar3), cVar2 != '\0')) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141111820 FUN_141111820 body=118 status=ok
// SIG undefined FUN_141111820(void)

ulonglong FUN_141111820(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  
  if ((*(longlong *)(param_1 + 0x710) == 0) && (*(longlong *)(param_1 + 0x788) != 0)) {
    if (param_2 == 0) {
      in_RAX = FUN_142eb7a00();
    }
    else {
      in_RAX = (ulonglong)*(uint *)(param_2 + 0x2d8);
    }
    iVar1 = (int)in_RAX;
    if ((((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x6d8))) &&
        (in_RAX = *(ulonglong *)(param_1 + 0x6d0),
        *(int *)((longlong)iVar1 * 0x1c8 + 0x38 + in_RAX) == 3)) &&
       ((*(char *)(param_1 + 0x6e8) != '\0' && (*(char *)(param_1 + 0x6e9) == '\0')))) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1411118a0 FUN_1411118a0 body=11 status=ok
// SIG undefined FUN_1411118a0(void)

bool FUN_1411118a0(longlong param_1)

{
  return *(char *)(param_1 + 0x70b) == '\x01';
}



// FUNCTION 1411118b0 FUN_1411118b0 body=8 status=ok
// SIG undefined FUN_1411118b0(void)

undefined1 FUN_1411118b0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x468);
}



// FUNCTION 1411118c0 FUN_1411118c0 body=140 status=ok
// SIG undefined FUN_1411118c0(void)

bool FUN_1411118c0(longlong param_1)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_141111180();
  if (cVar1 == '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x58c);
    if (lVar3 != 0) {
      lVar4 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar3 = FUN_140cfbfb0(lVar3);
        if (lVar3 != 0) {
          cVar1 = FWebMMovieStreamer::IsLastMovieInPlaylist(lVar3);
          if (cVar1 == '\0') {
            return 0 < *(int *)(lVar3 + 0x144);
          }
        }
      }
    }
  }
  return false;
}



// FUNCTION 141111950 FUN_141111950 body=283 status=ok
// SIG undefined FUN_141111950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141111950(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar2 = FWeakObjectPtr::Get(param_2);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_2 + 8)) ||
       (local_108 = 0, *(longlong *)(param_2 + 0x10) == 0)) goto LAB_141111a1e;
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_2,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_2 + 8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(param_2);
    if (lVar2 == 0) goto LAB_141111a1e;
  }
  lVar3 = FUN_142f2cf80();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
LAB_141111a1e:
  FUN_14282a800(local_f8);
  FUN_14283c290(local_f8,param_2 + 0x10,1,0);
  FUN_14282cc40(local_f8);
  return;
}



// FUNCTION 141111a70 FUN_141111a70 body=139 status=ok
// SIG undefined FUN_141111a70(void)

void FUN_141111a70(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != (longlong *)0x0) &&
     (lVar1 = (**(code **)(*param_2 + 0x340))(param_2), *(char *)(lVar1 + 0x54) != '\0')) {
    (**(code **)(*param_2 + 0x378))(param_2);
    lVar1 = FUN_14110d730(param_1,param_2);
    if ((lVar1 != 0) &&
       (lVar2 = (**(code **)(*param_2 + 0x340))(param_2), *(int *)(lVar2 + 0xd8) != -1)) {
      lVar2 = (**(code **)(*param_2 + 0x340))(param_2);
      FUN_143015ae0(lVar1,lVar2 + 0xd8,0,1);
    }
  }
  return;
}



// FUNCTION 141111b00 FUN_141111b00 body=157 status=ok
// SIG undefined FUN_141111b00(void)

ulonglong FUN_141111b00(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint7 uVar4;
  ulonglong uVar3;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0xf4);
  uVar3 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_14141f270();
    uVar4 = (uint7)((ulonglong)(lVar2 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      uVar3 = (ulonglong)uVar4 << 8;
    }
    else {
      uVar3 = CONCAT71(uVar4,1);
    }
    if ((char)uVar3 != '\0') {
      uVar3 = FUN_140bca8a0(lVar1);
      if ((((char)uVar3 != '\0') && (uVar3 = *(ulonglong *)(param_1 + 0x2d8), uVar3 != 0)) &&
         (param_2 == uVar3)) {
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141111ba0 FUN_141111ba0 body=272 status=ok
// SIG undefined FUN_141111ba0(void)

ulonglong FUN_141111ba0(longlong *param_1,longlong *param_2)

{
  longlong *in_RAX;
  longlong lVar1;
  longlong *plVar2;
  uint7 uVar5;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (*(char *)((longlong)param_1 + 0x4b9) != '\0') {
    lVar1 = FUN_140f9aee0(param_1 + -0x9b);
    in_RAX = (longlong *)0x0;
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_1424503b0(lVar1);
      in_RAX = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        lVar1 = FUN_14145f370();
        uVar5 = (uint7)((ulonglong)(lVar1 + 0x88) >> 8);
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar1 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8) !=
            lVar1 + 0x88)) {
          in_RAX = (longlong *)((ulonglong)uVar5 << 8);
        }
        else {
          in_RAX = (longlong *)CONCAT71(uVar5,1);
        }
        if (((((char)in_RAX != '\0') && (param_2 != plVar2)) &&
            (in_RAX = (longlong *)(**(code **)(*plVar2 + 0xfa8))(plVar2), in_RAX != (longlong *)0x0)
            ) && (0 < (int)in_RAX[9])) {
          plVar2 = in_RAX + 9;
          in_RAX = (longlong *)in_RAX[8];
          if ((longlong *)in_RAX[(longlong)(int)*plVar2 + -1] != (longlong *)0x0) {
            lVar1 = (**(code **)(*(longlong *)in_RAX[(longlong)(int)*plVar2 + -1] + 0x278))();
            in_RAX = (longlong *)0x0;
            if (lVar1 != 0) {
              uVar3 = FUN_142f2b5a0();
              in_RAX = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
              if (in_RAX != (longlong *)0x0) {
                if (param_1 + -0x9b == (longlong *)0x0) {
                  param_1 = (longlong *)0x0;
                }
                if (param_1 != in_RAX) {
                  uVar4 = (**(code **)(*in_RAX + 0x158))(in_RAX,param_2);
                  return uVar4;
                }
              }
            }
          }
        }
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141111cb0 FUN_141111cb0 body=393 status=ok
// SIG undefined FUN_141111cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141111cb0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  plVar3 = (longlong *)param_2[1];
  uVar6 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x28,local_b8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1446ba1c8;
    puVar5[1] = param_1;
    puVar5[2] = uVar6;
    puVar5[3] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    puVar5[4] = param_3;
  }
  local_c8[0] = &LAB_141107780;
  uVar6 = FUN_1420849a0(param_1,local_78,local_c8);
  FUN_14208c260(param_1,uVar6);
  if (local_38 != 0) {
    plVar7 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar7 = local_48;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    plVar7 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar7 = local_98;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 141111e40 FUN_141111e40 body=66 status=ok
// SIG undefined FUN_141111e40(void)

void FUN_141111e40(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res8 [8];
  
  FUN_1411b6c90(0x10);
  local_res8[0] = 0xd;
  FUN_141136250(param_1,local_res8,param_1 + 0x748,*(undefined4 *)(param_3 + 8));
  return;
}



// FUNCTION 141111e90 FUN_141111e90 body=75 status=ok
// SIG undefined FUN_141111e90(void)

void FUN_141111e90(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x468) != '\0') {
    *(undefined1 *)(param_1 + 0x468) = 0;
    lVar1 = FUN_14110dee0();
    if (lVar1 != 0) {
      FUN_1411581f0(lVar1);
    }
  }
  lVar1 = FUN_14110dee0(param_1);
  if (lVar1 != 0) {
    thunk_FUN_141178db0(lVar1);
    return;
  }
  return;
}



// FUNCTION 141111ee0 FUN_141111ee0 body=204 status=ok
// SIG undefined FUN_141111ee0(void)

void FUN_141111ee0(longlong param_1,char *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    lVar2 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140f9aee0(lVar4);
      goto LAB_141111f41;
    }
  }
  lVar4 = 0;
LAB_141111f41:
  FUN_141133b20(param_1,0);
  if (((byte)(*param_2 - 1U) < 2) && (lVar4 != 0)) {
    lVar2 = FWeakObjectPtr::Get(lVar4 + 0x59c);
    if (lVar2 != 0) {
      uVar3 = FWeakObjectPtr::Get(lVar4 + 0x59c);
      lVar4 = FUN_1410f70d0(uVar3);
      if (lVar4 != 0) {
        local_res8 = *(undefined8 *)(lVar4 + 0x6e0);
        thunk_FUN_142eda790(lVar4,&local_res8);
      }
    }
  }
  return;
}



// FUNCTION 141111fc0 FUN_141111fc0 body=249 status=ok
// SIG undefined FUN_141111fc0(void)

void FUN_141111fc0(longlong param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      TBaseMulticastDelegate<void>::Remove(lVar4 + 0x9a0,*(undefined8 *)(param_1 + 0xb28));
    }
  }
  iVar1 = *(int *)(param_1 + 0xb30);
  if (iVar1 == 1) {
    if (*param_2 == '\x01') {
      FUN_14112a5e0(param_1);
    }
  }
  else {
    if (iVar1 == 2) {
      if (*param_2 != '\x02') goto LAB_141112090;
      pwVar7 = L"Roster";
    }
    else {
      if ((iVar1 != 3) || (*param_2 != '\x02')) goto LAB_141112090;
      pwVar7 = L"Matchmaking";
    }
    uVar2 = *(undefined4 *)(param_1 + 0xb20);
    puVar6 = (undefined8 *)FName::FName(local_res8,pwVar7,1);
    FUN_14112a420(param_1,*puVar6,uVar2);
  }
LAB_141112090:
  *(undefined8 *)(param_1 + 0xb28) = 0;
  *(undefined4 *)(param_1 + 0xb30) = 0;
  *(undefined4 *)(param_1 + 0xb20) = 0xffffffff;
  return;
}



// FUNCTION 1411120c0 FUN_1411120c0 body=66 status=ok
// SIG undefined FUN_1411120c0(void)

void FUN_1411120c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res8 [8];
  
  FUN_1411b6c90(1);
  local_res8[0] = 0xd;
  FUN_141136250(param_1,local_res8,param_1 + 0x748,*(undefined4 *)(param_3 + 8));
  return;
}



// FUNCTION 141112110 FUN_141112110 body=165 status=ok
// SIG undefined FUN_141112110(void)

undefined8 FUN_141112110(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar3 = FUN_140ec9a00(uVar2);
    if ((lVar3 != 0) &&
       (cVar1 = (**(code **)(*(longlong *)(lVar3 + 0x4d8) + 0xd0))
                          ((longlong *)(lVar3 + 0x4d8),param_2), cVar1 != '\0')) {
      return 1;
    }
  }
  if (((*(longlong *)(param_1 + 0x1b8) != 0) &&
      (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x180), lVar3 != 0)) &&
     (cVar1 = FUN_142f0b080(lVar3,param_2), cVar1 != '\0')) {
    return 1;
  }
  uVar2 = FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  return uVar2;
}



// FUNCTION 1411121d0 FUN_1411121d0 body=89 status=ok
// SIG undefined FUN_1411121d0(void)

undefined1 FUN_1411121d0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (((*(longlong *)(param_2 + 8) == DAT_1468752f0) && (*(longlong *)(param_1 + 0x1d8) != 0)) &&
     (cVar1 = FUN_142eef530(), cVar1 != '\0')) {
    return 1;
  }
  cVar1 = FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}



// FUNCTION 141112230 FUN_141112230 body=712 status=ok
// SIG undefined FUN_141112230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141112230(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  longlong local_78;
  char local_64;
  longlong local_58;
  longlong local_50;
  undefined8 local_38;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + -0x4d8);
  if ((*(longlong *)(param_1 + 0x4c0) != 0) ||
     (lVar5 = (**(code **)(*plVar1 + 0x148))(plVar1), lVar5 == 0)) goto LAB_14111235c;
  local_98 = AEquipmentSkin::GetPrivateStaticClass();
  local_88[0] = 5;
  local_30 = '\0';
  local_90 = lVar5;
  FUN_14044bc80(&local_80,&local_90,&local_98);
  FUN_14045a130(local_88);
  if (local_64 == '\0') {
    if (local_58 == 0) {
LAB_141112310:
      local_58 = 0;
    }
    else {
      lVar5 = AEquipmentSkin::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(local_58 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_58 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_141112310;
    }
    *(longlong *)(param_1 + 0x4c0) = local_58;
  }
  if (local_30 != '\0') {
    local_30 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_80,local_38);
    if (local_50 != 0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
LAB_14111235c:
  lVar5 = *(longlong *)(param_1 + 0x4c0);
  if ((lVar5 != 0) && (1e-08 < ABS(*(float *)(param_2 + 4)))) {
    lVar3 = *(longlong *)(param_2 + 8);
    if (lVar3 == DAT_146875328) {
      FUN_14112f7a0(lVar5,0);
      *(undefined4 *)(lVar5 + 0x4c8) = 0;
      *(undefined1 *)(lVar5 + 0x4b0) = 1;
      uVar2 = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(lVar5 + 0x4a8) = uVar2;
      return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
    }
    if (lVar3 == DAT_146875330) {
      FUN_14112f7a0(lVar5,0);
      *(undefined4 *)(lVar5 + 0x4c8) = 0;
      *(undefined1 *)(lVar5 + 0x4b1) = 1;
      uVar2 = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(lVar5 + 0x4a8) = uVar2;
      return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
    }
    if (lVar3 == DAT_1468752e8) {
      FUN_14112f7a0(lVar5,0);
      *(undefined4 *)(lVar5 + 0x4c8) = 0;
      uVar2 = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(lVar5 + 0x4a0) = uVar2;
      return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
    }
    if (lVar3 == DAT_1468752f0) {
      FUN_14112f7a0(lVar5,0);
      *(undefined4 *)(lVar5 + 0x4c8) = 0;
      uVar2 = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(lVar5 + 0x4a4) = uVar2;
      return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
    }
  }
  lVar5 = FUN_14110de20(plVar1);
  if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x5c4) != -1)) &&
      (lVar5 = FUN_14110e990(lVar5), lVar5 != 0)) &&
     ((*(longlong *)(param_2 + 8) == DAT_1468752e8 &&
      ((*(char *)(lVar5 + 0x488) != '\0' || (0.1 < ABS(*(float *)(param_2 + 4)))))))) {
    fVar7 = -*(float *)(param_2 + 4);
    if (ABS(fVar7) <= 0.1) {
      fVar7 = 0.0;
    }
    *(float *)(lVar5 + 0x47c) = fVar7;
    FUN_142dbedb0(lVar5 + 0x478);
  }
  uVar6 = FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  return uVar6;
}



// FUNCTION 141112500 FUN_141112500 body=58 status=ok
// SIG undefined FUN_141112500(void)

void FUN_141112500(longlong param_1,longlong param_2)

{
  FUN_140eaffa0(param_1 + 0x230,param_2 + 8,*(undefined4 *)(param_2 + 4));
  FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  return;
}



// FUNCTION 141112540 FUN_141112540 body=309 status=ok
// SIG undefined FUN_141112540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141112540(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)FName::FName(local_c8,&DAT_1446a66d4,1);
  if (param_3 == *plVar1) {
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = param_1;
      *puVar2 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_141107530;
    uVar3 = FUN_1420849a0(param_1,local_68,local_b8);
    FUN_14208c260(param_1,uVar3);
    if (local_28 != 0) {
      plVar1 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar1 = local_38;
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      plVar1 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar1 = local_88;
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141112680 FUN_141112680 body=152 status=ok
// SIG undefined FUN_141112680(void)

undefined4 FUN_141112680(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = FUN_141324a80();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar3 = param_3;
    if (bVar2) goto LAB_1411126d2;
  }
  lVar3 = 0;
LAB_1411126d2:
  FUN_141111a70(param_1,lVar3);
  if (((byte)(*(char *)(param_1 + 0x778) - 3U) < 2) && (param_3 != 0)) {
    FUN_141132530(param_1,3);
  }
  *(undefined1 *)(param_1 + 0xa88) = 1;
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 141112720 FUN_141112720 body=10 status=ok
// SIG undefined FUN_141112720(void)

void FUN_141112720(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x7f8) = 0x100;
  return;
}



// FUNCTION 141112730 FUN_141112730 body=52 status=ok
// SIG undefined FUN_141112730(void)

void FUN_141112730(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 0x77c);
  FUN_141139bc0(param_1,uVar1,param_2);
  return;
}



// FUNCTION 141112770 FUN_141112770 body=772 status=ok
// SIG undefined FUN_141112770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141112770(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_108 [224];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar5 = param_1 + 0x868;
  lVar3 = FWeakObjectPtr::Get(lVar5);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x870)) &&
       (local_118 = 0, *(longlong *)(param_1 + 0x878) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar5,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x870) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar5);
      if (lVar3 != 0) goto LAB_141112819;
    }
LAB_14111284f:
    FUN_14282a800(local_108);
    FUN_14283c290(local_108,param_1 + 0x878,1,0);
    FUN_14282cc40(local_108);
  }
  else {
LAB_141112819:
    lVar4 = FUN_141324ef0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14111284f;
  }
  lVar3 = FWeakObjectPtr::Get(lVar5);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x870)) &&
       (local_118 = 0, *(longlong *)(param_1 + 0x878) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar5,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x870) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar5);
      if (lVar3 != 0) goto LAB_1411128ec;
    }
  }
  else {
LAB_1411128ec:
    lVar5 = FUN_141324ef0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141112925;
  }
  lVar3 = 0;
LAB_141112925:
  FUN_142ebe540(param_1,lVar3);
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar5 != 0) {
    lVar3 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (plVar6 = (longlong *)FUN_1424503b0(lVar5), plVar6 != (longlong *)0x0)) {
      lVar5 = FUN_14145f370();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((bVar1) && (lVar5 = (**(code **)(*plVar6 + 0xfa8))(plVar6), lVar5 != 0)) &&
          (0 < *(int *)(lVar5 + 0x48))) &&
         ((plVar6 = *(longlong **)
                     (*(longlong *)(lVar5 + 0x40) + -8 + (longlong)*(int *)(lVar5 + 0x48) * 8),
          plVar6 != (longlong *)0x0 && (lVar5 = (**(code **)(*plVar6 + 0x278))(), lVar5 != 0)))) {
        lVar3 = AGPoisonSplashProjectile::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if (param_2 == 0) {
            uVar2 = 0xffffffff;
          }
          else {
            uVar2 = *(undefined4 *)(param_2 + 0x288);
          }
          *(undefined4 *)(lVar5 + 0x690) = uVar2;
        }
      }
    }
  }
  return;
}



// FUNCTION 141112a80 FUN_141112a80 body=249 status=ok
// SIG undefined FUN_141112a80(void)

void FUN_141112a80(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res20 [8];
  
  lVar2 = FUN_14110de20();
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x5c8) & 2) != 0)) {
    if (*(char *)(lVar2 + 0x5c0) != '\x06') {
      lVar3 = FUN_1422312c0(lVar2);
      if (lVar3 != 0) {
        lVar4 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar3 = FUN_140bb8b20(lVar3);
          if (lVar3 != 0) {
            FUN_140e48890(lVar3);
          }
        }
      }
      *(undefined1 *)(lVar2 + 0x5c0) = 6;
      FUN_1411088c0(lVar2,0);
      local_res20[0] = *(undefined1 *)(lVar2 + 0x5c0);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar2 + 0x458,local_res20);
      TBaseMulticastDelegate<void,float>::Broadcast(lVar2 + 0x490,0xbf800000);
    }
    FUN_1411299c0(lVar2);
  }
  FUN_1411323d0(param_1,3);
  return;
}



// FUNCTION 141112b80 FUN_141112b80 body=372 status=ok
// SIG undefined FUN_141112b80(void)

void FUN_141112b80(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_118 [272];
  
  if (*(char *)(param_1 + 0x778) == '\x01') {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x784);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x784);
      cVar1 = FUN_143003580(uVar2);
      if (cVar1 == '\0') {
        if ((param_2 < 0) || (*(int *)(param_1 + 0x8d8) <= param_2)) {
          _guard_xfg_dispatch_icall_nop(local_118,0,0x110);
          FUN_140ed0240(local_118);
        }
        else {
          FUN_140e9a4f0(local_118,(longlong)param_2 * 0x110 + *(longlong *)(param_1 + 0x8d0));
        }
        FUN_14110bf60(param_1,local_118,2);
        FUN_140e9c360(local_118);
        return;
      }
    }
    FUN_140ebba70(param_1 + 0x708);
  }
  else if (*(char *)(param_1 + 0x778) == '\x02') {
    cVar1 = FUN_141107bc0(param_1);
    if (cVar1 != '\0') {
      if ((param_2 < 0) || (*(int *)(param_1 + 0x8d8) <= param_2)) {
        _guard_xfg_dispatch_icall_nop(local_118,0,0x110);
        FUN_140ed0240(local_118);
      }
      else {
        FUN_140e9a4f0(local_118,(longlong)param_2 * 0x110 + *(longlong *)(param_1 + 0x8d0));
      }
      FUN_14110bf60(param_1,local_118,1);
      FUN_140e9c360(local_118);
      return;
    }
    FUN_140ebba70(param_1 + 0x708);
    return;
  }
  return;
}



// FUNCTION 141112d00 FUN_141112d00 body=197 status=ok
// SIG undefined FUN_141112d00(void)

void FUN_141112d00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x778) == '\x01') {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x784);
    if (cVar2 != '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x784);
      cVar2 = FUN_143003580(uVar1);
      if (cVar2 == '\0') {
        FUN_14110bf60(param_1,param_2,2);
        return;
      }
    }
    FUN_140ebba70(param_1 + 0x708);
  }
  else if (*(char *)(param_1 + 0x778) == '\x02') {
    cVar2 = FUN_141107bc0(param_1);
    if (cVar2 != '\0') {
      FUN_14110bf60(param_1,param_2,1);
      return;
    }
    FUN_140ebba70(param_1 + 0x708);
    return;
  }
  return;
}



// FUNCTION 141112dd0 FUN_141112dd0 body=333 status=ok
// SIG undefined FUN_141112dd0(void)

undefined4 FUN_141112dd0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar7 = 0;
  if (param_3 != 0) {
    lVar4 = FUN_141324a80();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_141112e2c;
  }
  param_3 = lVar7;
LAB_141112e2c:
  FUN_141111a70(param_1,param_3);
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x7e0);
  if (cVar3 != '\0') {
    cVar3 = FWeakObjectPtr::IsValid(param_2 + 0xdc);
    if (cVar3 != '\0') {
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_2 + 0xdc);
      uVar6 = FUN_14301f8f0();
      lVar7 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
    }
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x7e0);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2b0))(plVar5);
    (**(code **)(*plVar5 + 0x20))(plVar5,1);
    if (lVar7 != 0) {
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x7e0);
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2b0))(plVar5);
      (**(code **)(*plVar5 + 8))(plVar5,lVar7,0,0);
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x7e0);
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2b0))(plVar5);
      (**(code **)(*plVar5 + 0x18))(plVar5,0);
    }
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 141112f20 FUN_141112f20 body=12 status=ok
// SIG undefined FUN_141112f20(void)

void FUN_141112f20(longlong param_1)

{
  FUN_14103cb10(param_1 + 0x820);
  return;
}



// FUNCTION 141112f50 FUN_141112f50 body=331 status=ok
// SIG undefined FUN_141112f50(void)

void FUN_141112f50(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 uVar11;
  longlong *plVar12;
  
  lVar4 = FUN_1422312c0();
  plVar9 = (longlong *)0x0;
  plVar6 = plVar9;
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar6 = (longlong *)FUN_140bb8cd0(lVar4);
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if ((plVar6 != (longlong *)0x0) && (*(longlong *)(DAT_146b33f38 + 0xd0) != 0)) {
    iVar2 = *(int *)(param_1 + 0x5c4);
    plVar12 = plVar9;
    if ((-1 < iVar2) && ((ulonglong)(longlong)iVar2 < 4)) {
      plVar12 = (longlong *)((longlong)iVar2 * 0x50 + 0x448 + *(longlong *)(DAT_146b33f38 + 0xd0));
    }
    plVar10 = plVar9;
    if (0 < (int)plVar6[1]) {
      do {
        uVar11 = 0;
        if (plVar12 != (longlong *)0x0) {
          piVar7 = (int *)*plVar12;
          piVar1 = piVar7 + (int)plVar12[1];
          for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
            if (*piVar7 == (int)plVar9) {
              uVar11 = 1;
              break;
            }
          }
        }
        if (*(longlong *)((longlong)plVar10 + *plVar6) != 0) {
          FUN_140e5dcf0(*(longlong *)((longlong)plVar10 + *plVar6),uVar11,1);
        }
        uVar8 = (int)plVar9 + 1;
        plVar9 = (longlong *)(ulonglong)uVar8;
        plVar10 = plVar10 + 1;
      } while ((int)uVar8 < (int)plVar6[1]);
    }
  }
  return;
}



// FUNCTION 1411130a0 FUN_1411130a0 body=52 status=ok
// SIG undefined FUN_1411130a0(void)

void FUN_1411130a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 0x784);
  FUN_141139bc0(param_1,uVar1,param_2);
  return;
}



// FUNCTION 1411130e0 FUN_1411130e0 body=135 status=ok
// SIG undefined FUN_1411130e0(void)

void FUN_1411130e0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 local_res18 [16];
  
  plVar1 = (longlong *)FName::FName(local_res18,&DAT_1446a69b4,1);
  if (param_3 == *plVar1) {
    lVar4 = FUN_140e971d0(param_1);
    if (lVar4 != 0) {
      lVar4 = FUN_140cfbfb0(lVar4);
      if (lVar4 != 0) {
        cVar3 = FWebMMovieStreamer::IsLastMovieInPlaylist(lVar4);
        if (cVar3 == '\0') {
          uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
          FUN_140c54910(*(undefined4 *)(lVar4 + 0x140),lVar4,uVar2,1);
        }
      }
    }
  }
  FUN_14110b8f0(param_1);
  return;
}



// FUNCTION 141113170 FUN_141113170 body=97 status=ok
// SIG undefined FUN_141113170(void)

void FUN_141113170(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    iVar1 = *(int *)(lVar4 + 0x90);
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140bccab0(lVar3,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
      return;
    }
  }
  return;
}



// FUNCTION 1411131e0 FUN_1411131e0 body=12 status=ok
// SIG undefined FUN_1411131e0(void)

void FUN_1411131e0(longlong param_1)

{
  FUN_14103cb10(param_1 + 0x8f0);
  return;
}



// FUNCTION 1411131f0 FUN_1411131f0 body=12 status=ok
// SIG undefined FUN_1411131f0(void)

void FUN_1411131f0(longlong param_1)

{
  FUN_14103cb10(param_1 + 0x9c0);
  return;
}



// FUNCTION 141113200 thunk_FUN_14110b8f0 body=5 status=ok
// SIG undefined thunk_FUN_14110b8f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_14110b8f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *apuStack_b8 [2];
  longlong alStack_a8 [4];
  longlong *plStack_88;
  int iStack_78;
  undefined1 auStack_68 [16];
  longlong alStack_58 [4];
  longlong *plStack_38;
  int iStack_28;
  ulonglong uStack_18;
  
  uStack_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plStack_88 = (longlong *)0x0;
  iStack_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,alStack_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  apuStack_b8[0] = &LAB_141107660;
  uVar2 = FUN_1420849a0(param_1,auStack_68,apuStack_b8);
  FUN_14208c260(param_1,uVar2);
  if (iStack_28 != 0) {
    plVar3 = alStack_58;
    if (plStack_38 != (longlong *)0x0) {
      plVar3 = plStack_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (plStack_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (iStack_78 != 0) {
    plVar3 = alStack_a8;
    if (plStack_88 != (longlong *)0x0) {
      plVar3 = plStack_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (plStack_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141113210 FUN_141113210 body=66 status=ok
// SIG undefined FUN_141113210(void)

void FUN_141113210(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res8 [8];
  
  FUN_1411b6c90(7);
  local_res8[0] = 0xd;
  FUN_141136250(param_1,local_res8,param_1 + 0x748,*(undefined4 *)(param_3 + 8));
  return;
}



// FUNCTION 141113260 FUN_141113260 body=626 status=ok
// SIG undefined FUN_141113260(void)

void FUN_141113260(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  longlong local_78;
  longlong *plStack_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  bVar9 = false;
  FUN_14110db70(param_1,&local_78,param_1[0xf6]);
  plVar8 = plStack_70;
  if (local_78 == 0) goto LAB_141113394;
  uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar7 = FUN_140d3a420(uVar6);
  plVar8 = plStack_70;
  if (lVar7 == 0) {
LAB_1411132ff:
    bVar3 = false;
  }
  else {
    local_58 = local_78;
    plStack_50 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
    bVar9 = true;
    cVar5 = BuildSettings::IsPromotedBuild(lVar7,&local_58);
    if (cVar5 == '\0') goto LAB_1411132ff;
    bVar3 = true;
  }
  plVar4 = plStack_50;
  if ((bVar9) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_50 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = plStack_70;
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar8 = plStack_70;
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
        plVar8 = plStack_70;
      }
    }
  }
  plVar4 = plStack_70;
  if (bVar3) {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar8 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
    FUN_141129ca0(param_1);
    return;
  }
LAB_141113394:
  plVar4 = plStack_70;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_30,L"No Space",L"LoadGameMenu",L"TooManySavesTitle");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_48,
             L"You have too many save games, you must delete one before you can create a new character."
             ,L"LoadGameMenu",L"TooManySavesMessage");
  FWeakObjectPtr::operator=(local_68,0);
  local_60 = 0;
  uVar6 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  FUN_1410f3960(uVar6,local_30,local_48,local_68,0,param_1[0xf6],2);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_28 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  return;
}



// FUNCTION 1411134e0 FUN_1411134e0 body=35 status=ok
// SIG undefined FUN_1411134e0(void)

void FUN_1411134e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = 0xd;
  FUN_141136250(param_1,local_res8,param_1 + 0x6f8,*(undefined4 *)(param_3 + 8));
  return;
}



// FUNCTION 141113510 FUN_141113510 body=31 status=ok
// SIG undefined FUN_141113510(void)

void FUN_141113510(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x6c8);
  if (lVar1 != 0) {
    FUN_141133250(lVar1,*(undefined4 *)(lVar1 + 0x1b8),*(undefined8 *)(lVar1 + 0x1b0));
    return;
  }
  return;
}



// FUNCTION 141113530 FUN_141113530 body=232 status=ok
// SIG undefined FUN_141113530(void)

void FUN_141113530(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  lVar5 = 0;
  lVar4 = lVar5;
  lVar3 = lVar5;
  if (lVar2 != 0) {
    lVar3 = UWorld::GetGameState<APVPGameState>(lVar2);
    lVar4 = *(longlong *)(lVar2 + 400);
  }
  if ((lVar4 != 0) && (lVar4 = FUN_1424503b0(), lVar4 != 0)) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar5 = FUN_140cfbfb0(lVar4);
    }
  }
  if ((lVar3 != 0) && (lVar5 != 0)) {
    FUN_141138800(param_1,lVar3,lVar5);
  }
  local_res8 = param_2;
  local_resc = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xac,&local_res8);
  return;
}



// FUNCTION 141113620 FUN_141113620 body=798 status=ok
// SIG undefined FUN_141113620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141113620(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 uVar10;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [16];
  undefined4 local_50 [2];
  undefined8 local_48;
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_c8 = (undefined4 *)CONCAT44(local_c8._4_4_,(undefined4)local_c8);
  uStack_c0 = (ulonglong *)CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0);
  if ((*(longlong *)(param_1 + 0x690) != 0) &&
     (local_c8 = (undefined4 *)CONCAT44(local_c8._4_4_,(undefined4)local_c8),
     uStack_c0 = (ulonglong *)CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0), param_2 != 0)) {
    lVar6 = UMobBaseAnim::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_60,param_2 + 0x318);
      local_50[0] = 0;
      local_28 = '\0';
      local_48 = 0;
      local_c8 = local_50;
      local_d8 = *puVar7;
      uStack_c0 = &local_20;
      lStack_d0 = puVar7[1];
      if (lStack_d0 != 0) {
        LOCK();
        *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
        UNLOCK();
      }
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
      uVar8 = FText::Format(local_90,&local_d8,uVar8);
      FText::FText(local_a8,uVar8);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_88 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8);
      if (local_28 != '\0') {
        local_28 = '\0';
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_38 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar1 = (int *)((longlong)local_38 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_38 + 8))(local_38,1);
            }
          }
        }
      }
      plVar4 = (longlong *)puVar7[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x690) + 0x2b0))
                (*(longlong **)(param_1 + 0x690),local_a8,1,0);
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_a0 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
    }
  }
  FUN_142ecdac0(param_1);
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_78,L"Close",L"GFxNewDLCMenu",L"BackOutHint");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar8);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x698) != 0) {
    uVar10 = 0;
    if (*(longlong **)(param_1 + 0x6a8) != (longlong *)0x0) {
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0x6a8) + 0x2b0))();
      if (lVar6 != 0) {
        lVar9 = UMobBaseAnim::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          uVar10 = *(undefined1 *)(lVar6 + 0x310);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x698) + 0x278))(*(longlong **)(param_1 + 0x698),uVar10);
  }
  return;
}



// FUNCTION 141113940 FUN_141113940 body=572 status=ok
// SIG undefined FUN_141113940(void)

void FUN_141113940(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_28 [2];
  
  if (param_2 == 0) {
    return;
  }
  lVar3 = UMobBaseAnim::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      != lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  if (*(char *)(param_2 + 0x310) == '\0') {
    return;
  }
  lVar3 = FUN_140f9aee0(param_1);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = FUN_14244f490(lVar3,0);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar4 = FUN_140cfbfb0(lVar4);
  if (lVar4 == 0) {
    return;
  }
  cVar2 = FWebMMovieStreamer::IsLastMovieInPlaylist(lVar4);
  if (cVar2 != '\0') {
    return;
  }
  lVar5 = 0;
  local_28[1] = 0x36;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy
            (local_28[0],L"/Game/GameData/FastTravel/FTS_Sanctuary.FTS_Sanctuary",0x6c);
  FUN_140d4ce20(lVar4,local_28,*(undefined4 *)(lVar4 + 0x140));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  lVar9 = param_2 + 0x330;
  lVar6 = FWeakObjectPtr::Get(lVar9);
  lVar8 = lVar5;
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_2 + 0x338)) || (*(longlong *)(param_2 + 0x340) == 0))
    goto LAB_141113b51;
    lVar6 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar9,lVar6);
    if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_2 + 0x338) = DAT_1464b56f4;
    }
    lVar6 = FWeakObjectPtr::Get(lVar9);
    if (lVar6 == 0) goto LAB_141113b51;
  }
  lVar9 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar7 = FUN_142f71d80();
    lVar9 = lVar6;
    do {
      lVar8 = lVar6;
      if (lVar9 == lVar7) break;
      lVar9 = *(longlong *)(lVar9 + 0x30);
      lVar8 = lVar5;
    } while (lVar9 != 0);
  }
LAB_141113b51:
  FUN_140d26690(lVar4,lVar8);
  FUN_140bccab0(lVar3,0);
  return;
}



// FUNCTION 141113b80 FUN_141113b80 body=10 status=ok
// SIG undefined FUN_141113b80(void)

void FUN_141113b80(undefined8 param_1)

{
  FUN_1411323d0(param_1,6);
  return;
}



// FUNCTION 141113b90 FUN_141113b90 body=27 status=ok
// SIG undefined FUN_141113b90(void)

void FUN_141113b90(undefined8 param_1)

{
  FUN_1411087c0();
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 141113bb0 FUN_141113bb0 body=475 status=ok
// SIG undefined FUN_141113bb0(void)

void FUN_141113bb0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_141131b70(param_1,0);
  plVar1 = *(longlong **)(param_1 + 0x180);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x180) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x198) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 141113d90 FUN_141113d90 body=723 status=ok
// SIG undefined FUN_141113d90(void)

void FUN_141113d90(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 400);
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 400) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x198) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 141114070 FUN_141114070 body=468 status=ok
// SIG undefined FUN_141114070(void)

void FUN_141114070(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 400);
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 400) = 0;
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 141114250 FUN_141114250 body=209 status=ok
// SIG undefined FUN_141114250(void)

void FUN_141114250(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 141114330 FUN_141114330 body=802 status=ok
// SIG undefined FUN_141114330(void)

void FUN_141114330(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  longlong *local_78;
  int local_70;
  code *local_68;
  longlong *plStack_60;
  code *local_58;
  longlong *plStack_50;
  longlong local_48 [2];
  
  bVar4 = false;
  plVar6 = (longlong *)FName::FName(local_res8,&DAT_1446a5a8c,1);
  if ((param_3 == *plVar6) && (param_1[0xf6] != 0)) {
    FUN_142dcf3a0(param_1[0xf6],&local_68);
    bVar3 = false;
    if (local_68 != (code *)0x0) {
      uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar6 = (longlong *)FUN_140d3a420(uVar7);
      bVar3 = bVar4;
      if (plVar6 != (longlong *)0x0) {
        lVar9 = param_1[0xdb];
        puVar2 = (undefined8 *)param_1[0xda];
        for (puVar12 = puVar2; puVar12 != puVar2 + (longlong)(int)lVar9 * 0x39;
            puVar12 = puVar12 + 0x39) {
          if ((int)param_1[0xe4] == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)param_1[0xe3];
          }
          if (*(int *)(puVar12 + 1) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = (undefined2 *)*puVar12;
          }
          iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
          if (iVar5 == 0) {
            iVar5 = (int)(((longlong)puVar12 - (longlong)puVar2) / 0x1c8);
            if ((-1 < iVar5) && (iVar5 < (int)param_1[0xdb])) {
              plStack_50 = (longlong *)((ulonglong)plStack_50 & 0xffffffff00000000);
              local_78 = (longlong *)0x0;
              local_58 = FUN_141114660;
              bVar3 = true;
              plVar8 = (longlong *)FMemory::Realloc(0,0x30);
              local_70 = 3;
              local_78 = plVar8;
              if (plVar8 != (longlong *)0x0) {
                *plVar8 = (longlong)&PTR_FUN_144060be0;
                FWeakObjectPtr::operator=(plVar8 + 1,param_1);
                plVar8[2] = (longlong)local_58;
                plVar8[3] = (longlong)plStack_50;
                lVar9 = FDelegateHandle::GenerateNewID();
                plVar8[5] = lVar9;
                *plVar8 = (longlong)&PTR_FUN_144060c28;
              }
              plVar8 = (longlong *)(**(code **)(*plVar6 + 0x160))(plVar6,local_res18,&local_78);
              param_1[0xe5] = *plVar8;
              if (local_70 == 0) {
LAB_141114547:
                if (local_78 != (longlong *)0x0) {
                  FMemory::Free(local_78);
                }
              }
              else if (local_78 != (longlong *)0x0) {
                (**(code **)(*local_78 + 0x28))(local_78,0);
                if (local_78 != (longlong *)0x0) {
                  local_78 = (longlong *)FMemory::Realloc(local_78,0,0);
                }
                local_70 = 0;
                goto LAB_141114547;
              }
              local_58 = local_68;
              plStack_50 = plStack_60;
              if (plStack_60 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
                UNLOCK();
              }
              FUN_140d2a8a0(plVar6,&local_58,param_1 + 0xe3);
              plVar6 = plStack_50;
              if (plStack_50 != (longlong *)0x0) {
                LOCK();
                plVar8 = plStack_50 + 1;
                lVar9 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plStack_50)(plStack_50);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  iVar5 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*plVar6 + 8))(plVar6,1);
                  }
                }
              }
            }
            break;
          }
        }
      }
    }
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_60 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plStack_60 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
    if (bVar3) goto LAB_14111463f;
  }
  plVar6 = param_1 + 0xe3;
  if (plVar6 != local_48) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    *plVar6 = 0;
    param_1[0xe4] = 0;
  }
LAB_14111463f:
  *(undefined1 *)((longlong)param_1 + 0x7c6) = 0;
  return;
}



// FUNCTION 141114660 FUN_141114660 body=943 status=ok
// SIG undefined FUN_141114660(void)

void FUN_141114660(longlong *param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined8 *puVar15;
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  plVar8 = param_1 + 0xe3;
  if ((int)param_1[0xe4] == 0) {
    puVar14 = &DAT_143f3eda8;
  }
  else {
    puVar14 = (undefined2 *)*plVar8;
  }
  if (*(int *)(param_3 + 1) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*param_3;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar14);
  if (iVar4 == 0) {
    if (plVar8 != local_58) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      *plVar8 = 0;
      param_1[0xe4] = 0;
    }
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar8 = (longlong *)FUN_140d3a420(uVar7);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x168))(plVar8,param_1 + 0xe5);
    }
    if (param_4 == '\0') {
      FWeakObjectPtr::operator=(local_68,0);
      local_60 = 0;
      uVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
      uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_30,L"Failed to delete corrupt character.",L"LoadGameMenu",
                          L"DeleteCorruptCharacterFailedBodyText");
      uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_48,L"Failed",L"LoadGameMenu",
                          L"DeleteCorruptCharacterFailedHeaderText");
      FUN_1410f3960(uVar7,uVar12,uVar11,local_68,0,param_1[0xf6],2);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_40 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_28 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
    }
    else {
      plVar8 = param_1 + 0xda;
      puVar2 = (undefined8 *)*plVar8;
      lVar10 = param_1[0xdb];
      for (puVar15 = puVar2; puVar15 != puVar2 + (longlong)(int)lVar10 * 0x39;
          puVar15 = puVar15 + 0x39) {
        if (*(int *)(param_3 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*param_3;
        }
        if (*(int *)(puVar15 + 1) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)*puVar15;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar14);
        if (iVar4 == 0) {
          lVar10 = ((longlong)puVar15 - (longlong)puVar2) / 0x72 +
                   ((longlong)puVar15 - (longlong)puVar2 >> 0x3f);
          iVar4 = (int)(lVar10 >> 2) - (int)(lVar10 >> 0x3f);
          if ((iVar4 < 0) || ((int)param_1[0xdb] <= iVar4)) goto LAB_141114780;
          bVar3 = true;
          goto LAB_141114782;
        }
      }
      iVar4 = -1;
LAB_141114780:
      bVar3 = false;
LAB_141114782:
      if (bVar3) {
        lVar10 = param_1[0xf6];
        if (lVar10 != 0) {
          lVar9 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) &&
             (iVar5 = FUN_14110cc90(param_1),
             iVar5 == *(int *)((longlong)iVar4 * 0x1c8 + 0x20 + *plVar8))) {
            uVar7 = FUN_140cfcaa0(lVar10);
            FUN_140d12170(lVar10,uVar7);
            lVar10 = FUN_140f9aee0(param_1);
            if (lVar10 != 0) {
              FUN_140bf5100(lVar10);
              FUN_140beb560(lVar10,param_2);
            }
          }
        }
        lVar10 = *plVar8;
        lVar9 = (longlong)iVar4 * 0x1c8;
        FUN_1410fc740(lVar10 + 0x28 + lVar9);
        if (*(longlong *)(lVar10 + lVar9) != 0) {
          FMemory::Free();
        }
        iVar5 = (int)param_1[0xdb];
        iVar6 = (iVar5 - iVar4) + -1;
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar8 + lVar9),(void *)((longlong)(iVar4 + 1) * 0x1c8 + *plVar8),
                     (longlong)iVar6 * 0x1c8);
          iVar5 = (int)param_1[0xdb];
        }
        *(int *)(param_1 + 0xdb) = iVar5 + -1;
        FUN_14112eca0(plVar8);
        FUN_14112d5a0(param_1);
        LOCK();
        *(undefined4 *)(param_1 + 0xb1) = 1;
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 141114a10 FUN_141114a10 body=556 status=ok
// SIG undefined FUN_141114a10(void)

void FUN_141114a10(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_30 [8];
  longlong *local_28;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_30,L"Please wait while the save downloads...",L"MainMenu",
                         L"CloudSaveDownloadingMessage");
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (&local_48,L"Save",L"MainMenu",L"CloudSaveTitle");
      uVar11 = 0;
      uVar7 = FUN_1410f2b30(lVar5,uVar8,uVar7,0,0,0);
      plVar2 = (longlong *)CONCAT44(uStack_3c,uStack_40);
      *(undefined8 *)(param_1 + 0xb50) = uVar7;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar2 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_28 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
      uStack_40 = 0;
      local_48 = FUN_141114c40;
      plVar2 = (longlong *)(lVar5 + 0x13d0);
      plVar9 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = (longlong)&PTR_FUN_1446ba1e0;
        FWeakObjectPtr::operator=(plVar9 + 1,param_1);
        *(undefined4 *)(plVar9 + 2) = (undefined4)local_48;
        *(undefined4 *)((longlong)plVar9 + 0x14) = local_48._4_4_;
        *(undefined4 *)(plVar9 + 3) = uStack_40;
        *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_3c;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar9[5] = lVar6;
        *plVar9 = (longlong)&PTR_FUN_1446ba228;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
        puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x20))(plVar9,local_res8);
        iVar3 = *(int *)(lVar5 + 0x13d8);
        uVar11 = *puVar10;
        *(int *)(lVar5 + 0x13d8) = iVar3 + 1;
        if (*(int *)(lVar5 + 0x13dc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar3);
        }
        puVar10 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar2);
        *puVar10 = plVar9;
        *(undefined4 *)(puVar10 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0xb48) = uVar11;
      FUN_140d0df60(lVar5);
    }
  }
  return;
}



// FUNCTION 141114c40 FUN_141114c40 body=686 status=ok
// SIG undefined FUN_141114c40(void)

void FUN_141114c40(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      TBaseMulticastDelegate<void>::Remove(lVar5 + 0x13d0,*(undefined8 *)(param_1 + 0xb48));
      thunk_FUN_142eb3990(*(undefined8 *)(param_1 + 0xb50));
      *(undefined8 *)(param_1 + 0xb50) = 0;
      goto LAB_141114ce0;
    }
  }
  lVar5 = 0;
LAB_141114ce0:
  if (param_3 == '\0') {
    FWeakObjectPtr::operator=(local_78,0);
    local_70 = 0;
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Save game download failed.",L"MainMenu",
                       L"CloudSaveDownloadFailMessage");
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"Save",L"MainMenu",L"CloudSaveTitle");
    FUN_1410f3960(lVar5,uVar8,uVar7,local_78,0,0,2);
    plVar9 = local_18;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar9 = local_18;
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
          plVar9 = local_18;
        }
      }
    }
  }
  else {
    FWeakObjectPtr::operator=(local_88,0);
    local_80 = 0;
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"Save game download successful.",L"MainMenu",
                       L"CloudSaveDownloadSuccessMessage");
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,L"Save",L"MainMenu",L"CloudSaveTitle");
    FUN_1410f3960(lVar5,uVar8,uVar7,local_88,0,0,0);
    plVar9 = local_48;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar9 = local_48;
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
          plVar9 = local_48;
        }
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = *(longlong **)(param_2 + 8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 141114ef0 FUN_141114ef0 body=125 status=ok
// SIG undefined FUN_141114ef0(void)

void FUN_141114ef0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(param_1 + 0x770) != '\0')) {
      FUN_14145faf0(lVar2);
    }
  }
  *(undefined1 *)(param_1 + 0x770) = 0;
  FUN_142eb3990(param_1);
  return;
}



// FUNCTION 141114f70 FUN_141114f70 body=562 status=ok
// SIG undefined FUN_141114f70(void)

void FUN_141114f70(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  iVar4 = 0;
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  iVar8 = 0;
  if (lVar5 != 0) {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar8 = iVar4;
    if ((bVar3) && (lVar5 = FUN_1424503b0(lVar5), lVar5 != 0)) {
      lVar6 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar4 = *(int *)(lVar5 + 0x1c70) + 1;
        iVar8 = 0;
        if (iVar4 < 4) {
          iVar8 = iVar4;
        }
        *(int *)(lVar5 + 0x1c70) = iVar8;
        if (DAT_146af4bf0 != 0) {
          FUN_140cd3550(DAT_146af4bf0,lVar5,iVar8);
        }
      }
    }
  }
  if (param_2 != 0) {
    uVar7 = FUN_14110d820(param_1,local_38,iVar8);
    FUN_142ed3af0(param_2,uVar7,0);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)();
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    iVar4 = *(int *)(param_1 + 0x97c);
    if ((iVar4 < 0) || (*(int *)(param_1 + 0x8a8) <= iVar4)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (plVar2 = *(longlong **)((longlong)iVar4 * 0x38 + 8 + *(longlong *)(param_1 + 0x8a0)),
       plVar2 != (longlong *)0x0)) {
      lVar5 = *plVar2;
      uVar7 = FUN_14110d820(param_1,local_20,iVar8);
      (**(code **)(lVar5 + 0x2b0))(plVar2,uVar7,1,0);
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_18 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_18)(local_18);
          LOCK();
          piVar1 = (int *)((longlong)local_18 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_18 + 8))(local_18,1);
          }
        }
      }
    }
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      Z_Construct_UClass_ACharacterGunfire_Statics::NewProp_bSkipWallChecks_SetBit(lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 1411151b0 FUN_1411151b0 body=190 status=ok
// SIG undefined FUN_1411151b0(void)

void FUN_1411151b0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  
  cVar4 = FUN_142ebd930(param_1 + -0x680);
  if ((cVar4 != '\0') && (cVar4 = FWeakObjectPtr::IsValid(param_1 + -0xe4), cVar4 != '\0')) {
    uVar2 = FWeakObjectPtr::Get(param_1 + -0xe4);
    lVar5 = FUN_1410f7490(uVar2);
    if (lVar5 != 0) {
      cVar4 = FUN_141136c30(param_1 + -0x680,1);
      if (cVar4 == '\0') {
        pwVar6 = L"Roster";
      }
      else {
        cVar4 = FUN_142ebd930(lVar5);
        if (cVar4 == '\0') {
          return;
        }
        pwVar6 = L"Roster";
      }
      uVar1 = *(undefined4 *)(param_2 + 8);
      puVar3 = (undefined8 *)FName::FName(local_res8,pwVar6,1);
      FUN_14112a420(lVar5,*puVar3,uVar1);
    }
  }
  return;
}



// FUNCTION 141115270 FUN_141115270 body=342 status=ok
// SIG undefined FUN_141115270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141115270(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined2 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined1 local_res8 [8];
  undefined6 uStack_66;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar1 = param_1 + -0x9d0;
  cVar5 = FUN_142ebd930(lVar1);
  if (cVar5 != '\0') {
    lVar6 = FWeakObjectPtr::Get(param_1 + -0x404);
    if (lVar6 != 0) {
      lVar7 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         (pcVar8 = (char *)FUN_140a5dc70(lVar6), uVar4 = _DAT_146297e38, *pcVar8 == '\0')) {
        if (*(longlong *)(param_1 + 0x158) == 0) {
          return;
        }
        uVar2 = *(undefined4 *)(param_2 + 8);
        local_28 = 0;
        local_18 = 0;
        puVar9 = (undefined8 *)FUN_140438ef0(0x20,local_48);
        if (puVar9 != (undefined8 *)0x0) {
          puVar9[1] = lVar1;
          *(undefined4 *)(puVar9 + 2) = 2;
          *(undefined4 *)((longlong)puVar9 + 0x14) = uVar2;
          *puVar9 = &PTR_FUN_143f4d0b0;
          puVar9[3] = CONCAT62(uStack_66,uVar4);
        }
        local_58[0] = &LAB_1411076a0;
        FUN_14204c280(local_58);
        return;
      }
    }
    uVar2 = *(undefined4 *)(param_2 + 8);
    puVar9 = (undefined8 *)FName::FName(local_res8,L"Roster",1);
    FUN_14112a420(lVar1,*puVar9,uVar2);
  }
  return;
}



// FUNCTION 1411153d0 FUN_1411153d0 body=233 status=ok
// SIG undefined FUN_1411153d0(void)

void FUN_1411153d0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  cVar3 = FUN_142ebd930(param_1 + -0x680);
  if (cVar3 != '\0') {
    lVar7 = param_1 + -0xe4;
    cVar3 = FWeakObjectPtr::IsValid(lVar7);
    if (cVar3 != '\0') {
      uVar4 = FWeakObjectPtr::Get(lVar7);
      lVar5 = FUN_1410f7490(uVar4);
      if (((lVar5 != 0) && (cVar3 = FWeakObjectPtr::IsValid(lVar7), cVar3 != '\0')) &&
         (cVar3 = FUN_141136d50(param_1 + -0x680,1), cVar3 != '\0')) {
        lVar7 = FWeakObjectPtr::Get(lVar7);
        if ((*(int *)(lVar7 + 0x48) < 1) ||
           (plVar2 = *(longlong **)
                      (*(longlong *)(lVar7 + 0x40) + -8 + (longlong)*(int *)(lVar7 + 0x48) * 8),
           plVar2 == (longlong *)0x0)) {
          lVar7 = 0;
        }
        else {
          lVar7 = (**(code **)(*plVar2 + 0x278))();
        }
        if (lVar7 == lVar5) {
          uVar1 = *(undefined4 *)(param_2 + 8);
          puVar6 = (undefined8 *)FName::FName(local_res8,L"Roster",1);
          FUN_14112a420(lVar5,*puVar6,uVar1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411154d0 FUN_1411154d0 body=142 status=ok
// SIG undefined FUN_1411154d0(void)

undefined4 FUN_1411154d0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong local_18;
  undefined8 local_10;
  
  cVar3 = FUN_142ebd930(param_1 + -0x680);
  if (cVar3 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x108);
    local_18 = lVar2;
    if (lVar2 == 0) {
      local_10 = 0;
    }
    else {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar4);
    }
    FUN_142ed36d0(param_1 + -0x680,&local_18,0);
    if (*(longlong *)(param_1 + -0xd0) != 0) {
      FUN_142f11000(*(longlong *)(param_1 + -0xd0),1);
    }
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + -0xf8);
  *(undefined4 *)(param_1 + -0xf8) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 141115560 FUN_141115560 body=106 status=ok
// SIG undefined FUN_141115560(void)

undefined4 FUN_141115560(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  lVar2 = *(longlong *)(param_1 + -0x50);
  local_18 = lVar2;
  if (lVar2 == 0) {
    local_10 = 0;
  }
  else {
    uVar3 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
  }
  FUN_142ed36d0(param_1 + -0x9d0,&local_18,0);
  FUN_141138360(param_1 + -0x9d0);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + -0x448);
  *(undefined4 *)(param_1 + -0x448) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1411155d0 FUN_1411155d0 body=143 status=ok
// SIG undefined FUN_1411155d0(void)

undefined4 FUN_1411155d0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong local_18;
  undefined8 local_10;
  
  lVar2 = *(longlong *)(param_1 + 0x150);
  local_18 = lVar2;
  if (lVar2 == 0) {
    local_10 = 0;
  }
  else {
    uVar4 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar4);
  }
  FUN_142ed36d0(param_1 + -0x680,&local_18,0);
  *(undefined8 *)(param_1 + 0x150) = 0;
  cVar3 = FUN_142ebd930(param_1 + -0x680);
  if ((cVar3 != '\0') && (*(longlong *)(param_1 + -0xd0) != 0)) {
    FUN_142f11000(*(longlong *)(param_1 + -0xd0),1);
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + -0xf8);
  *(undefined4 *)(param_1 + -0xf8) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 141115660 FUN_141115660 body=83 status=ok
// SIG undefined FUN_141115660(void)

void FUN_141115660(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(param_1 + -0x50);
  local_18 = lVar1;
  if (lVar1 == 0) {
    local_10 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
  }
  FUN_142ed36d0(param_1 + -0x9d0,&local_18,0);
  return;
}



// FUNCTION 1411156c0 FUN_1411156c0 body=55 status=ok
// SIG undefined FUN_1411156c0(void)

undefined4 FUN_1411156c0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FUN_142ed36d0(param_1 + -0x688,&local_18,0);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + -0x100);
  *(undefined4 *)(param_1 + -0x100) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 141115700 FUN_141115700 body=99 status=ok
// SIG undefined FUN_141115700(void)

undefined4 FUN_141115700(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  cVar2 = FUN_142ebd930(param_1 + -0x680);
  if (cVar2 != '\0') {
    local_18 = 0;
    uStack_10 = 0;
    FUN_142ed36d0(param_1 + -0x680,&local_18,0);
    if (*(longlong *)(param_1 + -0xd0) != 0) {
      FUN_142f11000(*(longlong *)(param_1 + -0xd0),0);
    }
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + -0xf8);
  *(undefined4 *)(param_1 + -0xf8) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 141115770 FUN_141115770 body=76 status=ok
// SIG undefined FUN_141115770(void)

undefined4 FUN_141115770(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FUN_142ed36d0(param_1 + -0x9d0,&local_18,0);
  FUN_141138360(param_1 + -0x9d0);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + -0x448);
  *(undefined4 *)(param_1 + -0x448) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1411157c0 FUN_1411157c0 body=118 status=ok
// SIG undefined FUN_1411157c0(void)

undefined4 FUN_1411157c0(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar3 = FUN_142eb65a0(param_1 + -0x680);
  *(undefined8 *)(param_1 + 0x150) = uVar3;
  local_18 = 0;
  uStack_10 = 0;
  FUN_142ed36d0(param_1 + -0x680,&local_18,0);
  cVar2 = FUN_142ebd930(param_1 + -0x680);
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + -0xd0) != 0)) {
    FUN_142f11000(*(longlong *)(param_1 + -0xd0),0);
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + -0xf8);
  *(undefined4 *)(param_1 + -0xf8) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 141115850 FUN_141115850 body=44 status=ok
// SIG undefined FUN_141115850(void)

void FUN_141115850(longlong param_1)

{
  FUN_140f36510();
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FUN_142056670(*(longlong *)(param_1 + 0x3b0),0);
    return;
  }
  return;
}



// FUNCTION 141115880 FUN_141115880 body=31 status=ok
// SIG undefined FUN_141115880(void)

undefined4 FUN_141115880(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_1410d5bc0();
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xb0) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1411158a0 FUN_1411158a0 body=136 status=ok
// SIG undefined FUN_1411158a0(void)

undefined4 FUN_1411158a0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  cVar3 = FUN_142ebd930(param_1 + -0x4d8);
  if (((cVar3 != '\0') && (lVar2 = *(longlong *)(param_1 + 0x4b0), lVar2 != 0)) && (param_2 != 0)) {
    local_18 = 0;
    uStack_10 = 0;
    FUN_142ed36d0(lVar2,&local_18,0);
    FUN_142ed1500(lVar2);
  }
  FUN_141138360(param_1 + -0x4d8);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xb0) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 141115930 FUN_141115930 body=38 status=ok
// SIG undefined FUN_141115930(void)

void FUN_141115930(undefined8 param_1)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_1410fd1a0(local_res8,0x15);
  FUN_1410fd1a0(local_res8,0x16);
  return;
}



// FUNCTION 141115960 FUN_141115960 body=186 status=ok
// SIG undefined FUN_141115960(void)

void FUN_141115960(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 400), lVar2 != 0)) {
    lVar3 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FUN_1424503b0(lVar2);
      if (lVar2 != 0) {
        lVar3 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) goto LAB_141115a05;
      }
    }
  }
  lVar2 = 0;
LAB_141115a05:
  FUN_141122050(param_1,lVar2);
  return;
}



// FUNCTION 141115a20 BeginDestroy body=35 status=ok
// SIG undefined BeginDestroy(void)

void UPawnAction_Move::BeginDestroy(undefined8 param_1)

{
  FUN_142ec1f90();
  FUN_142ecd4d0(param_1);
  FUN_141110e00(param_1);
  return;
}



// FUNCTION 141115a50 FUN_141115a50 body=369 status=ok
// SIG undefined FUN_141115a50(void)

void FUN_141115a50(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  FUN_142ec1f90();
  FUN_141110260(param_1);
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  FUN_142ecd4d0(param_1);
  FUN_141131d10(param_1,*(undefined1 *)(param_1 + 0x70b));
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x710,0);
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar7 = 0;
      plVar8 = (longlong *)(lVar3 + 0x948);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = 0x4111d6b0;
        *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
        *(undefined4 *)(plVar5 + 3) = 0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_1c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
        iVar1 = *(int *)(lVar3 + 0x950);
        uVar7 = *puVar6;
        *(int *)(lVar3 + 0x950) = iVar1 + 1;
        if (*(int *)(lVar3 + 0x954) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
        }
        puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
        *puVar6 = plVar5;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x720) = uVar7;
    }
  }
  return;
}



// FUNCTION 141115bd0 FUN_141115bd0 body=508 status=ok
// SIG undefined FUN_141115bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141115bd0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_142ec1f90();
  FUN_14112cdb0(param_1);
  FUN_14112ea20(param_1);
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    local_98 = FUN_14112ea20;
    uStack_90 = 0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_8c;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar1;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,param_1 + 0xd8,&local_88,0x3e800000);
    if (local_28 != 0) {
      plVar4 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar4 = local_38;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar1 = FMemory::Realloc(plVar2,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 141115dd0 FUN_141115dd0 body=1628 status=ok
// SIG undefined FUN_141115dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141115dd0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  undefined1 auStack_1f8 [32];
  undefined4 *local_1d8;
  undefined4 *puStack_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined1 local_1b8 [8];
  longlong local_1b0;
  undefined4 *local_1a8;
  ulonglong *puStack_1a0;
  longlong local_198;
  undefined4 *local_190;
  undefined8 local_188;
  longlong local_180;
  longlong local_178;
  wchar_t *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined4 local_88 [2];
  undefined8 local_80;
  longlong *local_70;
  char local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  FUN_142ec1f90();
  pwVar12 = (wchar_t *)0x0;
  if (*(longlong *)(param_1 + 0x680) != 0) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_f0,
                       L"Select {0}|platform(default=Add-on, xbox=Add-on, playstation=Add-on, stadia=Add-on)"
                       ,L"GFxNewDLCMenu",L"DLCMenuTitle");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_a8,uVar8);
    local_88[0] = 0;
    local_1d8 = local_88;
    local_60 = '\0';
    puStack_1d0 = local_58;
    local_1c8 = *puVar9;
    local_1c0 = puVar9[1];
    local_80 = 0;
    if (local_1c0 != 0) {
      LOCK();
      *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
      UNLOCK();
    }
    local_168 = local_1d8;
    uStack_160 = puStack_1d0;
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_158,&local_168);
    uVar8 = FText::Format(local_108,&local_1c8,uVar8);
    FText::FText(local_138,uVar8);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_158);
    if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_70 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    plVar4 = (longlong *)puVar9[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x680) + 0x2b0))
              (*(longlong **)(param_1 + 0x680),local_138,1,0);
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_130 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar1 = (int *)((longlong)local_130 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_e8 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x688) != 0) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c0,
                       L"{0}|platform(default=Add-on, xbox=Add-on, playstation=Add-on, stadia=Add-on) Campaigns"
                       ,L"GFxNewDLCMenu",L"DLCMenuCategory");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_98,uVar8);
    local_58[0] = 0;
    local_1a8 = local_58;
    local_30 = '\0';
    puStack_1a0 = local_28;
    local_188 = *puVar9;
    local_180 = puVar9[1];
    local_50 = 0;
    if (local_180 != 0) {
      LOCK();
      *(int *)(local_180 + 8) = *(int *)(local_180 + 8) + 1;
      UNLOCK();
    }
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_148,&local_1a8);
    uVar8 = FText::Format(local_d8,&local_188,uVar8);
    FText::FText(local_120,uVar8);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d0 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_148);
    if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_40 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    plVar4 = (longlong *)puVar9[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x2b0))
              (*(longlong **)(param_1 + 0x688),local_120,1,0);
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_118 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b8 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
  }
  if (*(longlong **)(param_1 + 0x690) != (longlong *)0x0) {
    lVar7 = **(longlong **)(param_1 + 0x690);
    uVar8 = FUN_1404b03b0();
    (**(code **)(lVar7 + 0x2b0))(*(undefined8 *)(param_1 + 0x690),uVar8,1,0);
  }
  FUN_141106800(param_1);
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnDLCListSelectionChanged",L"::");
    pwVar6 = pwVar12;
    while (pwVar5 = pwVar10, pwVar5 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar6 = pwVar5;
    }
    FName::FName(&local_198,pwVar6 + 2,1);
    lVar7 = *(longlong *)(param_1 + 0x6a8);
    FWeakObjectPtr::operator=(local_1b8,0);
    local_1b0 = 0;
    FWeakObjectPtr::operator=(local_1b8,param_1);
    local_1b0 = local_198;
    local_1c8 = 0;
    if (local_198 != 0) {
      lVar11 = FWeakObjectPtr::Get(local_1b8);
      if (lVar11 != 0) {
        UObject::FindFunction(lVar11,local_1b0);
      }
    }
    FUN_1406a5aa0(lVar7 + 0x180,local_1b8);
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnDLCListSelectionClicked",L"::");
    pwVar6 = pwVar12;
    while (pwVar5 = pwVar10, pwVar5 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar6 = pwVar5;
    }
    FName::FName(&local_190,pwVar6 + 2,1);
    lVar7 = *(longlong *)(param_1 + 0x6a8);
    FWeakObjectPtr::operator=(&local_1d8,0);
    puStack_1d0 = (undefined4 *)0x0;
    FWeakObjectPtr::operator=(&local_1d8,param_1);
    puStack_1d0 = local_190;
    local_1c8 = 0;
    if (local_190 != (undefined4 *)0x0) {
      lVar11 = FWeakObjectPtr::Get(&local_1d8);
      if (lVar11 != 0) {
        UObject::FindFunction(lVar11,puStack_1d0);
      }
    }
    FUN_1406a5aa0(lVar7 + 0x1a8,&local_1d8);
    (**(code **)(**(longlong **)(param_1 + 0x6a8) + 0x2c8))(*(longlong **)(param_1 + 0x6a8),1,0);
    lVar7 = *(longlong *)(param_1 + 0x6a8);
    local_178 = lVar7;
    if (lVar7 != 0) {
      uVar8 = UBlendableInterface::GetPrivateStaticClass();
      pwVar12 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar8);
    }
    local_170 = pwVar12;
    FUN_142ed36d0(param_1,&local_178,0);
  }
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 141116430 FUN_141116430 body=690 status=ok
// SIG undefined FUN_141116430(void)

void FUN_141116430(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar5 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x59c);
    lVar7 = FUN_140ec9a00(uVar6);
    if (lVar7 != 0) {
      plVar9 = *(longlong **)(lVar7 + 0x6c8);
      *(undefined1 *)(lVar7 + 0x709) = 0;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x278))(plVar9,0);
      }
      plVar9 = *(longlong **)(lVar7 + 0x6f0);
      *(undefined1 *)(lVar7 + 0x70a) = 0;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x278))(plVar9,0);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x690) != 0) {
    FUN_141104db0(param_1);
  }
  bVar2 = false;
  bVar3 = false;
  if (((*(longlong *)(param_1 + 0x698) != 0) &&
      (bVar2 = false, bVar3 = false, 1 < *(int *)(*(longlong *)(param_1 + 0x698) + 0x38))) &&
     (*(longlong *)(param_1 + 0x2b8) != 0)) {
    local_68 = 0;
    local_60 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"content",0x10);
    local_78 = (longlong *)0x0;
    local_70 = 0;
    bVar3 = true;
    bVar2 = true;
    cVar5 = FUN_140e98b90(*(undefined8 *)(param_1 + 0x2b8),param_1 + 0x5f0,&local_68,0,6,&local_78);
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_14111655b;
    }
  }
  bVar4 = false;
LAB_14111655b:
  if (bVar2) {
    plVar9 = local_78;
    for (iVar8 = (int)local_70; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free(local_78);
    }
  }
  if ((bVar3) && (local_68 != 0)) {
    FMemory::Free();
  }
  if (bVar4) {
    local_48 = 0;
    local_40 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"layouts",0x10);
    local_58 = (longlong *)0x0;
    local_50 = 0;
    cVar5 = FUN_140e98b90(*(undefined8 *)(param_1 + 0x5f0),param_1 + 0x5f8,&local_48,0,6,&local_58);
    plVar9 = local_58;
    for (iVar8 = (int)local_50; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (cVar5 != '\0') {
      FUN_142085870(*(undefined8 *)(param_1 + 0x5f8),&local_38,L"newsFrames");
      if (local_38 != 0) {
        FUN_141104f00(param_1);
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_30 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1411166f0 FUN_1411166f0 body=92 status=ok
// SIG undefined FUN_1411166f0(void)

void FUN_1411166f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_142ec1f90();
  *(undefined1 *)(param_1 + 0x6d0) = 0;
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_1411072b0;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 141116750 FUN_141116750 body=824 status=ok
// SIG undefined FUN_141116750(void)

void FUN_141116750(longlong param_1)

{
  wchar_t *pwVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong local_res10;
  code *local_28;
  undefined4 uStack_20;
  
  FUN_142ec1f90();
  pwVar6 = (wchar_t *)0x0;
  local_28 = FUN_1411291d0;
  uStack_20 = 0;
  FUN_1410f6f40(param_1 + 0x820,param_1,&local_28);
  local_28 = FUN_141112b80;
  uStack_20 = 0;
  FUN_1410f6e50(param_1 + 0x830,param_1,&local_28);
  lVar2 = FUN_14103aae0(param_1 + 0x820);
  if (lVar2 != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBigBagScrollBarUpdated",L"::");
    pwVar5 = pwVar6;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar5 = pwVar1;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    lVar4 = local_res10;
    FWeakObjectPtr::operator=(lVar2 + 0x378,param_1);
    *(longlong *)(lVar2 + 0x380) = lVar4;
    if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(lVar2 + 0x378), lVar4 != 0)) {
      UObject::FindFunction(lVar4,*(undefined8 *)(lVar2 + 0x380));
    }
  }
  local_28 = FUN_141129260;
  uStack_20 = 0;
  FUN_1410f6f40(param_1 + 0x8f0,param_1,&local_28);
  local_28 = AK::MemoryMgr::StartProfileThreadUsage;
  uStack_20 = 0;
  FUN_1410f6e50(param_1 + 0x900,param_1,&local_28);
  lVar2 = FUN_14103aae0(param_1 + 0x8f0);
  if (lVar2 != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCompareBankBagScrollBarUpdated",L"::");
    pwVar5 = pwVar6;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar5 = pwVar1;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    lVar4 = local_res10;
    FWeakObjectPtr::operator=(lVar2 + 0x378,param_1);
    *(longlong *)(lVar2 + 0x380) = lVar4;
    if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(lVar2 + 0x378), lVar4 != 0)) {
      UObject::FindFunction(lVar4,*(undefined8 *)(lVar2 + 0x380));
    }
  }
  local_28 = FUN_1411292f0;
  uStack_20 = 0;
  FUN_1410f6f40(param_1 + 0x9c0,param_1,&local_28);
  local_28 = AK::MemoryMgr::StartProfileThreadUsage;
  uStack_20 = 0;
  FUN_1410f6e50(param_1 + 0x9d0,param_1,&local_28);
  lVar2 = FUN_14103aae0(param_1 + 0x9c0);
  if (lVar2 != 0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop
                       (L"&ThisClass::OnCompareInventoryBagScrollBarUpdated",L"::");
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar6 = pwVar3;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    FWeakObjectPtr::operator=(lVar2 + 0x378,param_1);
    *(longlong *)(lVar2 + 0x380) = local_res10;
    if ((local_res10 != 0) && (lVar4 = FWeakObjectPtr::Get(lVar2 + 0x378), lVar4 != 0)) {
      UObject::FindFunction(lVar4,*(undefined8 *)(lVar2 + 0x380));
    }
  }
  *(undefined1 *)(param_1 + 0xa8a) = 1;
  return;
}



// FUNCTION 141116a90 FUN_141116a90 body=73 status=ok
// SIG undefined FUN_141116a90(void)

void FUN_141116a90(longlong param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x698) = local_res8;
  *(undefined4 *)(param_1 + 0x69c) = local_resc;
  if (*(longlong *)(param_1 + 0x690) != 0) {
    FUN_141131b70(*(longlong *)(param_1 + 0x690),0);
  }
  FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 141116ae0 FUN_141116ae0 body=587 status=ok
// SIG undefined FUN_141116ae0(void)

void FUN_141116ae0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      TBaseMulticastDelegate<void>::Remove(lVar3 + 0x948,*(undefined8 *)(param_1 + 0x720));
      *(undefined8 *)(param_1 + 0x720) = 0;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x6c8);
  if (lVar3 != 0) {
    if ((*(int *)(lVar3 + 0x278) != 0) &&
       (plVar1 = *(longlong **)(lVar3 + 0x270), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*(longlong *)(lVar3 + 0x270) != 0) {
        uVar5 = FMemory::Realloc(*(longlong *)(lVar3 + 0x270),0,0);
        *(undefined8 *)(lVar3 + 0x270) = uVar5;
      }
      *(undefined4 *)(lVar3 + 0x278) = 0;
      lVar3 = *(longlong *)(param_1 + 0x6c8);
    }
    FUN_140483870(lVar3 + 0x280,param_1);
  }
  plVar1 = *(longlong **)(param_1 + 0x6b0);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x6c8);
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x6f0);
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x700);
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x700) = 0;
  FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 141116d30 FUN_141116d30 body=118 status=ok
// SIG undefined FUN_141116d30(void)

void FUN_141116d30(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1[0xd8] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      FUN_142880530(uVar2,param_1 + 0xd8);
      param_1[0xd8] = 0;
    }
  }
  FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 141116db0 FUN_141116db0 body=418 status=ok
// SIG undefined FUN_141116db0(void)

void FUN_141116db0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0xa8a) = 0;
  if ((*(int *)(param_1 + 0x828) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x820), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x820) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x820),0,0);
      *(undefined8 *)(param_1 + 0x820) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x828) = 0;
  }
  if ((*(int *)(param_1 + 0x838) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x830), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x830) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x830),0,0);
      *(undefined8 *)(param_1 + 0x830) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x838) = 0;
  }
  if ((*(int *)(param_1 + 0x8f8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x8f0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x8f0) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x8f0),0,0);
      *(undefined8 *)(param_1 + 0x8f0) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x8f8) = 0;
  }
  if ((*(int *)(param_1 + 0x908) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x900), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x900) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x900),0,0);
      *(undefined8 *)(param_1 + 0x900) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x908) = 0;
  }
  if ((*(int *)(param_1 + 0x9c8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x9c0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x9c0) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x9c0),0,0);
      *(undefined8 *)(param_1 + 0x9c0) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x9c8) = 0;
  }
  if ((*(int *)(param_1 + 0x9d8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x9d0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x9d0) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x9d0),0,0);
      *(undefined8 *)(param_1 + 0x9d0) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x9d8) = 0;
  }
  FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 141116f60 FUN_141116f60 body=66 status=ok
// SIG undefined FUN_141116f60(void)

void FUN_141116f60(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res8 [8];
  
  FUN_1411b6c90(2);
  local_res8[0] = 0xd;
  FUN_141136250(param_1,local_res8,param_1 + 0x748,*(undefined4 *)(param_3 + 8));
  return;
}



// FUNCTION 141116fb0 FUN_141116fb0 body=576 status=ok
// SIG undefined FUN_141116fb0(void)

void FUN_141116fb0(ulonglong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  bool bVar16;
  ulonglong local_res8;
  ulonglong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  uVar14 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  cVar8 = FWeakObjectPtr::IsValid(param_1 + 0x58c);
  bVar16 = cVar8 == '\0';
  if (bVar16) {
    puVar10 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x58c);
    puVar10 = (ulonglong *)FUN_142dcf3a0(uVar9,local_38);
    uVar14 = *puVar10;
  }
  plVar5 = (longlong *)puVar10[1];
  puVar10[1] = 0;
  *puVar10 = 0;
  plVar3 = plStack_40;
  if ((bVar16) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar15 = plStack_40 + 1;
    lVar7 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar16) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_30 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if ((uVar14 != 0) &&
     (cVar8 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,uVar14), cVar8 != '\0')) {
    plVar3 = (longlong *)(param_1 + 0x9a8);
    if (plVar3 != param_3) {
      iVar13 = *(int *)(param_1 + 0x9b0);
      if (iVar13 != 0) {
        plVar15 = (longlong *)(*plVar3 + 8);
        do {
          plVar6 = (longlong *)*plVar15;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar6 + 1;
            lVar7 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          plVar15 = plVar15 + 2;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      iVar13 = (int)param_3[1];
      puVar12 = (undefined8 *)*param_3;
      *(int *)(param_1 + 0x9b0) = iVar13;
      if ((iVar13 == 0) && (*(int *)(param_1 + 0x9b4) == 0)) {
        *(undefined4 *)(param_1 + 0x9b4) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar3,iVar13);
        puVar11 = (undefined8 *)*plVar3;
        for (; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar11 = *puVar12;
          lVar7 = puVar12[1];
          puVar11[1] = lVar7;
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
            UNLOCK();
          }
          puVar11 = puVar11 + 2;
          puVar12 = puVar12 + 2;
        }
      }
    }
    local_res8 = param_1;
    FUN_1410fd1a0(&local_res8,0x15);
    FUN_1410fd1a0(&local_res8,0x16);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1411171f0 FUN_1411171f0 body=385 status=ok
// SIG undefined FUN_1411171f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411171f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 local_res8 [4];
  undefined8 local_res20;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 == 0) {
    return;
  }
  lVar4 = USoUIInputKeySelector::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar4 = FUN_140f9aee0(lVar1);
  if (lVar4 == 0) goto LAB_14111735a;
  lVar6 = *(longlong *)(param_1 + 0x38);
  if (lVar6 == 0) {
LAB_141117324:
    local_res8[0] = _DAT_146297e38;
  }
  else {
    lVar5 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((!bVar2) || (lVar6 = FWeakObjectPtr::Get(lVar6 + 0x59c), lVar6 == 0)) ||
       (lVar6 = FUN_1410f70d0(lVar6), lVar6 == 0)) goto LAB_141117324;
    local_res20 = *(undefined8 *)(lVar6 + 0x6e0);
    lVar6 = FUN_142eb6ed0(lVar6,&local_res20);
    if (lVar6 == 0) goto LAB_141117324;
    lVar5 = FUN_141340df0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((!bVar2) || (local_res8[0] = DAT_146297e30, *(char *)(lVar6 + 0xc2) == '\0'))
    goto LAB_141117324;
  }
  FUN_141133b20(param_1,1);
  cVar3 = FUN_140ba40f0(lVar4,local_res8);
  if (cVar3 == '\0') {
    FUN_141133b20(param_1,0);
  }
LAB_14111735a:
  LOCK();
  *(undefined4 *)(lVar1 + 0x588) = 1;
  UNLOCK();
  return;
}



// FUNCTION 141117380 FUN_141117380 body=66 status=ok
// SIG undefined FUN_141117380(void)

void FUN_141117380(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res8 [8];
  
  FUN_1411b6c90(3);
  local_res8[0] = 0xd;
  FUN_141136250(param_1,local_res8,param_1 + 0x748,*(undefined4 *)(param_3 + 8));
  return;
}



// FUNCTION 1411173e0 FUN_1411173e0 body=138 status=ok
// SIG undefined FUN_1411173e0(void)

void FUN_1411173e0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(lVar2 + 0x478) + 0x1e0,*(undefined8 *)(param_1 + 0xaa0));
      *(undefined8 *)(param_1 + 0xaa0) = 0;
    }
  }
  FUN_141137ed0(param_1);
  return;
}



// FUNCTION 141117470 FUN_141117470 body=1052 status=ok
// SIG undefined FUN_141117470(void)

void FUN_141117470(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_142ef9e70();
  local_20 = 0x1a;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"backpackHeader.headerText",0x34);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e99270(param_1,param_1 + 0x170,&local_28,0,6,&local_38);
  plVar6 = local_38;
  for (iVar5 = (int)local_30; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"backpackHeader.filterText",0x34);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e99270(param_1,param_1 + 0x178,&local_38,0,6,&local_28);
  plVar6 = local_28;
  for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"backpackHeader.sortText",0x30);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e99270(param_1,param_1 + 0x180,&local_38,0,6,&local_28);
  plVar6 = local_28;
  for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x23;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"backpackHeader.sortButtonLeft.hint",0x46);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e98630(param_1,param_1 + 0x188,&local_38,0,6,&local_28);
  plVar6 = local_28;
  for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x24;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"backpackHeader.sortButtonRight.hint",0x48);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e98630(param_1,param_1 + 400,&local_38,0,6,&local_28);
  plVar6 = local_28;
  for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar6 = *(longlong **)(param_1 + 0x188);
      if (plVar6 != (longlong *)0x0) {
        local_20 = 0;
        local_28 = plVar6;
        uVar4 = UBlendableInterface::GetPrivateStaticClass();
        local_20 = UObjectBaseUtility::GetInterfaceAddress(plVar6,uVar4);
        FUN_142ecff00(lVar1,&local_28,DAT_146875298);
      }
      plVar6 = *(longlong **)(param_1 + 400);
      if (plVar6 != (longlong *)0x0) {
        local_20 = 0;
        local_28 = plVar6;
        uVar4 = UBlendableInterface::GetPrivateStaticClass();
        local_20 = UObjectBaseUtility::GetInterfaceAddress(plVar6,uVar4);
        FUN_142ecff00(lVar1,&local_28,DAT_146875290);
      }
    }
  }
  return;
}



// FUNCTION 141117890 FUN_141117890 body=29 status=ok
// SIG undefined FUN_141117890(void)

void FUN_141117890(undefined8 param_1)

{
  FUN_142ec5080();
  FUN_142ed3eb0(param_1,0);
  return;
}



// FUNCTION 1411178b0 FUN_1411178b0 body=907 status=ok
// SIG undefined FUN_1411178b0(void)

void FUN_1411178b0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  FUN_142ef9e70();
  uVar6 = 0;
  local_c0 = 0xe;
  local_c8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"roomMoodsText",0x1c);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  FUN_140e99270(param_1,param_1 + 0x170,&local_c8,0,6,&local_d8);
  plVar7 = local_d8;
  for (iVar8 = (int)local_d0; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  local_a8 = 0;
  local_a0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"descriptionText",0x20);
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  FUN_140e99270(param_1,param_1 + 0x178,&local_a8,0,6,&local_b8);
  plVar7 = local_b8;
  for (iVar8 = (int)local_b0; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  local_88 = 0;
  local_80 = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"buttonPromptWrapper.hint",0x32);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  FUN_140e98630(param_1,param_1 + 0x180,&local_88,0,6,&local_98);
  plVar7 = local_98;
  for (iVar8 = (int)local_90; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0x170);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,L"ROOM MOODS",L"GFxCrewQuartersMenu",L"RoomMoodsTitle");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x170),uVar4,1,0);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_60 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  if (*(longlong **)(param_1 + 0x178) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0x178);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"No room selected.",L"GFxCrewQuartersMenu",L"NothingSelected");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x178),uVar4,1,0);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_48 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    lVar5 = AGImpulseWindProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar5 = *(longlong *)(param_1 + 0x180);
      local_78 = lVar5;
      if (lVar5 != 0) {
        uVar6 = UBlendableInterface::GetPrivateStaticClass();
        uVar6 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
      }
      local_70 = uVar6;
      FUN_142ecff00(lVar2,&local_78,DAT_146b3e2a0);
    }
  }
  return;
}



// FUNCTION 141117c40 FUN_141117c40 body=2015 status=ok
// SIG undefined FUN_141117c40(void)

void FUN_141117c40(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  longlong **pplVar12;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  FUN_142ef9e70();
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    lVar6 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140f9aee0(lVar2);
    }
  }
  local_180 = 8;
  local_188 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
  FGenericPlatformString::Memcpy(local_188,L"infoBox",0x10);
  local_198 = (longlong *)0x0;
  plVar8 = (longlong *)(param_1 + 0x170);
  local_190 = 0;
  local_res18 = 0;
  FUN_140e98b90(param_1,plVar8,&local_188,0,6,&local_198);
  plVar10 = local_198;
  for (iVar11 = (int)local_190; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_198 != (longlong *)0x0) {
    FMemory::Free(local_198);
  }
  if (local_188 != 0) {
    FMemory::Free();
  }
  local_168 = 0;
  local_160 = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
  FGenericPlatformString::Memcpy(local_168,L"keyArtBox.placeholderImage",0x36);
  local_178 = (longlong *)0x0;
  local_170 = 0;
  local_res20 = 0;
  FUN_140e98b90(param_1,param_1 + 0x1a8,&local_168,0,6,&local_178);
  plVar10 = local_178;
  for (iVar11 = (int)local_170; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free(local_178);
  }
  if (local_168 != 0) {
    FMemory::Free();
  }
  if (*plVar8 != 0) {
    local_148 = 0;
    local_140 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    FGenericPlatformString::Memcpy(local_148,L"titleText",0x14);
    local_158 = (longlong *)0x0;
    local_150 = 0;
    local_88 = 0;
    FUN_140e99270(*plVar8,param_1 + 0x178,&local_148,0,6,&local_158);
    plVar10 = local_158;
    for (iVar11 = (int)local_150; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_158 != (longlong *)0x0) {
      FMemory::Free(local_158);
    }
    if (local_148 != 0) {
      FMemory::Free();
    }
    local_128 = 0;
    local_120 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    FGenericPlatformString::Memcpy(local_128,L"descriptionText",0x20);
    local_138 = (longlong *)0x0;
    local_130 = 0;
    local_80 = 0;
    FUN_140e99270(*plVar8,param_1 + 0x180,&local_128,0,6,&local_138);
    plVar10 = local_138;
    for (iVar11 = (int)local_130; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free(local_138);
    }
    if (local_128 != 0) {
      FMemory::Free();
    }
    local_108 = 0;
    local_100 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    FGenericPlatformString::Memcpy(local_108,L"gridArea",0x12);
    local_118 = (longlong *)0x0;
    local_110 = 0;
    local_78 = 0;
    FUN_140e98b90(*plVar8,param_1 + 0x188,&local_108,0,6,&local_118);
    plVar10 = local_118;
    for (iVar11 = (int)local_110; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_118 != (longlong *)0x0) {
      FMemory::Free(local_118);
    }
    if (local_108 != 0) {
      FMemory::Free();
    }
    local_e8 = 0;
    local_e0 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    FGenericPlatformString::Memcpy(local_e8,L"scrollBar",0x14);
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    local_70 = 0;
    FUN_140e98f00(*plVar8,param_1 + 400,&local_e8,0,6,&local_f8);
    plVar10 = local_f8;
    for (iVar11 = (int)local_f0; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free(local_f8);
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
    local_c8 = 0;
    local_c0 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    FGenericPlatformString::Memcpy(local_c8,L"landingButton",0x1c);
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    local_68 = 0;
    FUN_140f15b10(*plVar8,param_1 + 0x198,&local_c8,0,6,&local_d8);
    plVar10 = local_d8;
    for (iVar11 = (int)local_d0; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free(local_d8);
    }
    if (local_c8 != 0) {
      FMemory::Free();
    }
    local_a8 = 0;
    local_a0 = 0x1a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    FGenericPlatformString::Memcpy(local_a8,L"networkTransitionMC.label",0x34);
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_60 = 0;
    FUN_140e99270(*plVar8,param_1 + 0x1a0,&local_a8,0,6,&local_b8);
    plVar8 = local_b8;
    for (iVar11 = (int)local_b0; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnGoOnlineClicked",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x198);
    FWeakObjectPtr::operator=(lVar2 + 0x1b0,param_1);
    *(longlong *)(lVar2 + 0x1b8) = local_res10;
    if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar2 + 0x1b0), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar2 + 0x1b8));
    }
    lVar2 = *(longlong *)(param_1 + 0x198);
    pplVar12 = (longlong **)(lVar2 + 0x188);
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    local_98[0] = plVar8;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_1446b9ff0;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1);
      plVar8[2] = (longlong)FUN_14110d0b0;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar8[4] = lVar6;
    }
    if (local_98 != pplVar12) {
      if (plVar8 == (longlong *)0x0) {
        if ((*(int *)(lVar2 + 400) != 0) && (plVar8 = *pplVar12, plVar8 != (longlong *)0x0)) {
          (**(code **)(*plVar8 + 0x28))(plVar8,0);
          if (*pplVar12 != (longlong *)0x0) {
            plVar8 = (longlong *)FMemory::Realloc(*pplVar12,0,0);
            *pplVar12 = plVar8;
          }
          *(undefined4 *)(lVar2 + 400) = 0;
        }
        goto LAB_14111831c;
      }
      (**(code **)(*plVar8 + 0x30))(plVar8,pplVar12);
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      local_98[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
      if (local_98[0] != (longlong *)0x0) {
        FMemory::Free(local_98[0]);
      }
    }
  }
LAB_14111831c:
  if (((*(longlong *)(param_1 + 0x180) != 0) && (*(longlong *)(param_1 + 0x188) != 0)) &&
     (*(longlong *)(param_1 + 400) != 0)) {
    FUN_142f0f790(*(longlong *)(param_1 + 400),1);
    FUN_142f118f0(*(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 400),
                  *(undefined8 *)(param_1 + 0x188));
  }
  if (*(longlong **)(param_1 + 0x1a0) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0x1a0);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Transitioning",L"GFxFrontendLandingPage",L"NetTransition");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x1a0),uVar9,1,0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar2 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141118420 FUN_141118420 body=194 status=ok
// SIG undefined FUN_141118420(void)

void FUN_141118420(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ec5080();
  local_10 = 0xf;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"characterClass",0x1e);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x310) = uVar1;
  plVar2 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411184f0 FUN_1411184f0 body=194 status=ok
// SIG undefined FUN_1411184f0(void)

void FUN_1411184f0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ec5080();
  local_10 = 6;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"label",0xc);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x308) = uVar1;
  plVar2 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411185c0 FUN_1411185c0 body=233 status=ok
// SIG undefined FUN_1411185c0(void)

void FUN_1411185c0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_140f39860();
  (**(code **)(*param_1 + 0x3b0))(param_1,1);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    lVar3 = FUN_14138d230();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_10 = 0;
      FWeakObjectPtr::operator=(&local_28,0);
      FWeakObjectPtr::operator=(&local_20,0);
      FWeakObjectPtr::operator=(&local_18,0);
      FWeakObjectPtr::operator=(&local_10,0);
      local_30 = 0;
      local_38 = param_1;
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_30 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
      FUN_142ecfd10(lVar1,&local_38,&local_28);
    }
  }
  return;
}



// FUNCTION 1411186b0 FUN_1411186b0 body=985 status=ok
// SIG undefined FUN_1411186b0(void)

void FUN_1411186b0(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  FUN_142ef9e70();
  local_d0 = 9;
  local_d8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"sortHint",0x12);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  FUN_140e98630(param_1,param_1 + 0x178,&local_d8,0,6,&local_e8);
  plVar7 = local_e8;
  for (iVar6 = (int)local_e0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  local_b8 = 0;
  local_b0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"listHeaderLabel",0x20);
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  FUN_140e99270(param_1,param_1 + 0x180,&local_b8,0,6,&local_c8);
  plVar7 = local_c8;
  for (iVar6 = (int)local_c0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  local_98 = 0;
  local_90 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"filterText",0x16);
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  FUN_140e99270(param_1,param_1 + 0x188,&local_98,0,6,&local_a8);
  plVar7 = local_a8;
  for (iVar6 = (int)local_a0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  local_78 = 0;
  local_70 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"listTypeIcon",0x1a);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  FUN_140e98b90(param_1,param_1 + 400,&local_78,0,6,&local_88);
  plVar7 = local_88;
  for (iVar6 = (int)local_80; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  lVar8 = *(longlong *)(param_1 + 0x38);
  if (lVar8 != 0) {
    lVar4 = FUN_14138d230();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_141118997;
  }
  lVar8 = 0;
LAB_141118997:
  FWeakObjectPtr::operator=(param_1 + 0x170,lVar8);
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x170);
  if ((cVar3 != '\0') && (lVar8 = *(longlong *)(param_1 + 0x178), lVar8 != 0)) {
    local_60 = 0;
    local_68 = lVar8;
    uVar5 = UBlendableInterface::GetPrivateStaticClass();
    local_60 = UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar5);
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x170);
    FUN_142ecff00(uVar5,&local_68,DAT_146875570);
  }
  if (*(longlong **)(param_1 + 0x188) != (longlong *)0x0) {
    lVar8 = **(longlong **)(param_1 + 0x188);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"ALL ITEMS",L"GFxPlayerStorageMenu",L"AllItems");
    (**(code **)(lVar8 + 0x2b0))(*(undefined8 *)(param_1 + 0x188),uVar5,1,0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141118a90 FUN_141118a90 body=527 status=ok
// SIG undefined FUN_141118a90(void)

void FUN_141118a90(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 0x10;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"listHeaderLabel",0x20);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e99270(param_1,param_1 + 0x170,&local_18,0,6,&local_28);
  plVar2 = local_28;
  for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"listCapacityLabel",0x24);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_140e99270(param_1,param_1 + 0x178,&local_28,0,6,&local_18);
  plVar2 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"listTypeIcon",0x1a);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_140e98b90(param_1,param_1 + 0x180,&local_28,0,6,&local_18);
  plVar2 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141118ca0 FUN_141118ca0 body=780 status=ok
// SIG undefined FUN_141118ca0(void)

void FUN_141118ca0(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  char cVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_res10;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_142ec3600();
  pwVar8 = *(wchar_t **)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x198) = 0;
  if (pwVar8 == (wchar_t *)0x0) {
LAB_141118d04:
    pwVar8 = (wchar_t *)0x0;
  }
  else {
    lVar4 = FUN_14138d230();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_141118d04;
  }
  FWeakObjectPtr::operator=(param_1 + 0x2c8,pwVar8);
  local_38 = (code *)0x0;
  uStack_30 = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"navBarIconOuter.navBarIcon",0x36);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_140e98b90(param_1,param_1 + 0x2d0,&local_38,0,6,&local_58);
  plVar9 = local_58;
  for (iVar10 = (int)local_50; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_38 != (code *)0x0) {
    FMemory::Free();
  }
  pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnNavButtonClicked",L"::");
  pwVar8 = (wchar_t *)0x0;
  while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar8 = pwVar2;
  }
  FName::FName(&local_res10,pwVar8 + 2,1);
  FWeakObjectPtr::operator=(param_1 + 0x1b0,param_1);
  *(longlong *)(param_1 + 0x1b8) = local_res10;
  if ((local_res10 != 0) && (lVar4 = FWeakObjectPtr::Get(param_1 + 0x1b0), lVar4 != 0)) {
    UObject::FindFunction(lVar4,*(undefined8 *)(param_1 + 0x1b8));
  }
  uStack_30 = uStack_30 & 0xffffffff00000000;
  local_38 = FUN_14110df60;
  plVar9 = (longlong *)(param_1 + 0x188);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_14461b688;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1);
    *(undefined4 *)(plVar6 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar6 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar6 + 3) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_30._4_4_;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar4;
  }
  if (&local_38 != plVar9) {
    if (plVar6 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 400) != 0) &&
         (plVar6 = (longlong *)*plVar9, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar9 != 0) {
          lVar4 = FMemory::Realloc(*plVar9,0,0);
          *plVar9 = lVar4;
        }
        *(undefined4 *)(param_1 + 400) = 0;
      }
      goto LAB_141118ed8;
    }
    (**(code **)(*plVar6 + 0x30))(plVar6,plVar9);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar4 = FMemory::Realloc(plVar6,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
LAB_141118ed8:
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x2c8);
  if (cVar3 != '\0') {
    local_58 = (longlong *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_58,0);
    FWeakObjectPtr::operator=(&local_50,0);
    FWeakObjectPtr::operator=(&local_48,0);
    FWeakObjectPtr::operator=(&local_40,0);
    uStack_30 = 0;
    local_38 = (code *)param_1;
    uVar7 = UBlendableInterface::GetPrivateStaticClass();
    uStack_30 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar7);
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x2c8);
    FUN_142ecfd10(uVar7,&local_38,&local_58);
  }
  return;
}



// FUNCTION 141118fb0 FUN_141118fb0 body=1155 status=ok
// SIG undefined FUN_141118fb0(void)

void FUN_141118fb0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  
  FUN_142ef9e70();
  lVar6 = 0;
  local_30 = 0x13;
  local_38 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"previousButtonText",0x26);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_140e98630(param_1,param_1 + 0x178,&local_38,0,6,&local_48);
  plVar7 = local_48;
  for (iVar8 = (int)local_40; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"nextButtonText",0x1e);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e98630(param_1,param_1 + 0x180,&local_48,0,6,&local_38);
  plVar7 = local_38;
  for (iVar8 = (int)local_30; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"navigationButtons.entry0",0x32);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_1410faa10(param_1,param_1 + 0x188,&local_48,0,6,&local_38);
  plVar7 = local_38;
  for (iVar8 = (int)local_30; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"navigationButtons.entry1",0x32);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_1410faa10(param_1,param_1 + 400,&local_48,0,6,&local_38);
  plVar7 = local_38;
  for (iVar8 = (int)local_30; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"menuLabel",0x14);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e99270(param_1,param_1 + 0x198,&local_48,0,6,&local_38);
  plVar7 = local_38;
  for (iVar8 = (int)local_30; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (lVar5 != 0) {
    lVar3 = FUN_14138d230();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141119337;
  }
  lVar5 = lVar6;
LAB_141119337:
  FWeakObjectPtr::operator=(param_1 + 0x170,lVar5);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x170);
  if (cVar2 != '\0') {
    plVar7 = *(longlong **)(param_1 + 0x178);
    lVar5 = lVar6;
    local_38 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      lVar5 = UObjectBaseUtility::GetInterfaceAddress(plVar7,uVar4);
    }
    local_30 = lVar5;
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x170);
    FUN_142ecff00(uVar4,&local_38,DAT_146875298);
    plVar7 = *(longlong **)(param_1 + 0x180);
    local_38 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      lVar6 = UObjectBaseUtility::GetInterfaceAddress(plVar7,uVar4);
    }
    local_30 = lVar6;
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x170);
    FUN_142ecff00(uVar4,&local_38,DAT_146875290);
    if (*(longlong *)(param_1 + 0x188) != 0) {
      FUN_141132c10(*(longlong *)(param_1 + 0x188),1);
    }
    if (*(longlong *)(param_1 + 400) != 0) {
      FUN_141132c10(*(longlong *)(param_1 + 400),0);
    }
  }
  FUN_14112e8a0(param_1);
  return;
}



// FUNCTION 141119440 FUN_141119440 body=194 status=ok
// SIG undefined FUN_141119440(void)

void FUN_141119440(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ec5080();
  local_10 = 5;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"icon",10);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x308) = uVar1;
  plVar2 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141119510 FUN_141119510 body=1542 status=ok
// SIG undefined FUN_141119510(void)

void FUN_141119510(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  FUN_142ef9e70();
  local_30 = 0xb;
  local_38 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"playerIcon",0x16);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_140e98b90(param_1,param_1 + 0x170,&local_38,0,6,&local_48);
  plVar4 = local_48;
  for (iVar3 = (int)local_40; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"upgradeText",0x18);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e99270(param_1,param_1 + 0x178,&local_48,0,6,&local_38);
  plVar4 = local_38;
  for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"currency",0x12);
  local_38 = (longlong *)0x0;
  plVar4 = (longlong *)(param_1 + 0x180);
  local_30 = 0;
  FUN_140f57f20(param_1,plVar4,&local_48,0,6,&local_38);
  plVar5 = local_38;
  for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"contextualSelect",0x22);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e98b90(param_1,param_1 + 0x188,&local_48,0,6,&local_38);
  plVar5 = local_38;
  for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"ownedAmount",0x18);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e99270(param_1,param_1 + 0x1a0,&local_48,0,6,&local_38);
  plVar5 = local_38;
  for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"totalAmount",0x18);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e99270(param_1,param_1 + 0x1a8,&local_48,0,6,&local_38);
  plVar5 = local_38;
  for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    local_48 = (longlong *)0x0;
    local_40 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"ownedText",0x14);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x188),param_1 + 400,&local_48,0,6,&local_38);
    plVar5 = local_38;
    for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_48 = (longlong *)0x0;
    local_40 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"ammoText",0x12);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x188),param_1 + 0x198,&local_48,0,6,&local_38);
    plVar5 = local_38;
    for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x38);
  if (lVar6 != 0) {
    lVar2 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FUN_140f578e0(lVar6);
      if (lVar2 != 0) {
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x170),lVar2 + 0x2a68);
      }
      goto LAB_141119aa9;
    }
  }
  lVar6 = 0;
LAB_141119aa9:
  if (*plVar4 != 0) {
    FUN_142f10940(*plVar4,1);
    FUN_140f08510(*plVar4,0);
    if (lVar6 != 0) {
      FUN_140f0b470(*plVar4,*(undefined4 *)(lVar6 + 0x688));
      FUN_140f08510(*plVar4,*(undefined4 *)(lVar6 + 0x68c));
      FUN_140f0a9a0(*plVar4,*(undefined4 *)(lVar6 + 0x690));
    }
  }
  return;
}



// FUNCTION 141119b20 FUN_141119b20 body=1917 status=ok
// SIG undefined FUN_141119b20(void)

void FUN_141119b20(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  FUN_142ef9e70();
  local_170 = 0x10;
  local_178 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
  FGenericPlatformString::Memcpy(local_178,L"savegameDetails",0x20);
  local_188 = (longlong *)0x0;
  local_180 = 0;
  lVar3 = FUN_140ecbdf0(param_1,&local_178,0,6,&local_188);
  plVar6 = local_188;
  for (iVar5 = (int)local_180; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free(local_188);
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  if (lVar3 != 0) {
    local_168 = 0;
    local_160 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_168,0x14,"chapterMissionLabel",0x14,0x3f);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,L"Chapter Mission",L"GFxSaveGameDetails",L"ChapterMissionText");
    FUN_142f100e0(lVar3,&local_168,uVar4);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_80 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    if (local_168 != 0) {
      FMemory::Free();
    }
    local_158 = 0;
    local_150 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_158,0x14,"currentMissionLabel",0x14,0x3f);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,L"Current Mission",L"GFxSaveGameDetails",L"CurrentMissionText");
    FUN_142f100e0(lVar3,&local_158,uVar4);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_68 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    if (local_158 != 0) {
      FMemory::Free();
    }
    local_148 = 0;
    local_140 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_148,0x11,"playthroughLabel",0x11,0x3f);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Playthrough",L"GFxSaveGameDetails",L"PlaythroughText");
    FUN_142f100e0(lVar3,&local_148,uVar4);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (local_148 != 0) {
      FMemory::Free();
    }
    local_138 = 0;
    local_130 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_138,0xe,"playtimeLabel",0xe,0x3f);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Playtime",L"GFxSaveGameDetails",L"PlaytimeText");
    FUN_142f100e0(lVar3,&local_138,uVar4);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_38 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
    local_118 = 0;
    local_110 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"savegameName",0x1a);
    local_128 = (longlong *)0x0;
    local_120 = 0;
    uVar4 = FUN_140ecc7d0(lVar3,&local_118,0,6,&local_128);
    *(undefined8 *)(param_1 + 0x170) = uVar4;
    plVar6 = local_128;
    for (iVar5 = (int)local_120; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free(local_128);
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
    local_f8 = 0;
    local_f0 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,L"chapterMission",0x1e);
    local_108 = (longlong *)0x0;
    local_100 = 0;
    uVar4 = FUN_140ecc7d0(lVar3,&local_f8,0,6,&local_108);
    *(undefined8 *)(param_1 + 0x178) = uVar4;
    plVar6 = local_108;
    for (iVar5 = (int)local_100; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free(local_108);
    }
    if (local_f8 != 0) {
      FMemory::Free();
    }
    local_d8 = 0;
    local_d0 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"currentMission",0x1e);
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    uVar4 = FUN_140ecc7d0(lVar3,&local_d8,0,6,&local_e8);
    *(undefined8 *)(param_1 + 0x180) = uVar4;
    plVar6 = local_e8;
    for (iVar5 = (int)local_e0; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free(local_e8);
    }
    if (local_d8 != 0) {
      FMemory::Free();
    }
    local_b8 = 0;
    local_b0 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"playthrough",0x18);
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    uVar4 = FUN_140ecc7d0(lVar3,&local_b8,0,6,&local_c8);
    *(undefined8 *)(param_1 + 0x188) = uVar4;
    plVar6 = local_c8;
    for (iVar5 = (int)local_c0; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
    local_98 = 0;
    local_90 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"playtime",0x12);
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    uVar4 = FUN_140ecc7d0(lVar3,&local_98,0,6,&local_a8);
    *(undefined8 *)(param_1 + 400) = uVar4;
    plVar6 = local_a8;
    for (iVar5 = (int)local_a0; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x170);
  if (plVar6 != (longlong *)0x0) {
    lVar3 = *plVar6;
    uVar4 = FUN_1404b03b0();
    (**(code **)(lVar3 + 0x2b0))(plVar6,uVar4,1,0);
  }
  plVar6 = *(longlong **)(param_1 + 0x178);
  if (plVar6 != (longlong *)0x0) {
    lVar3 = *plVar6;
    uVar4 = FUN_1404b03b0();
    (**(code **)(lVar3 + 0x2b0))(plVar6,uVar4,1,0);
  }
  plVar6 = *(longlong **)(param_1 + 0x180);
  if (plVar6 != (longlong *)0x0) {
    lVar3 = *plVar6;
    uVar4 = FUN_1404b03b0();
    (**(code **)(lVar3 + 0x2b0))(plVar6,uVar4,1,0);
  }
  plVar6 = *(longlong **)(param_1 + 0x188);
  if (plVar6 != (longlong *)0x0) {
    lVar3 = *plVar6;
    uVar4 = FUN_1404b03b0();
    (**(code **)(lVar3 + 0x2b0))(plVar6,uVar4,1,0);
  }
  plVar6 = *(longlong **)(param_1 + 400);
  if (plVar6 != (longlong *)0x0) {
    lVar3 = *plVar6;
    uVar4 = FUN_1404b03b0();
    (**(code **)(lVar3 + 0x2b0))(plVar6,uVar4,1,0);
  }
  return;
}



// FUNCTION 14111a2a0 FUN_14111a2a0 body=368 status=ok
// SIG undefined FUN_14111a2a0(void)

void FUN_14111a2a0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 10;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"innerText",0x14);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e99270(param_1,param_1 + 0x170,&local_18,0,6,&local_28);
  plVar2 = local_28;
  for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"innerTextShadow",0x20);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_140e99270(param_1,param_1 + 0x178,&local_28,0,6,&local_18);
  plVar2 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14111a410 FUN_14111a410 body=320 status=ok
// SIG undefined FUN_14111a410(void)

undefined8 FUN_14111a410(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_res10 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    uVar4 = FUN_142ec6030();
    return uVar4;
  }
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x470);
  if (lVar2 != 0) {
    lVar3 = FUN_1412fc200();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(longlong *)(lVar2 + 0x6c8) != *(longlong *)(param_1 + 0x490))) &&
       (lVar2 = FUN_140e971d0(param_1 + -0x4d8), lVar2 != 0)) {
      uVar4 = FWeakObjectPtr::Get(param_1 + 0x470);
      uVar5 = FWeakObjectPtr::Get(param_1 + 0x468);
      FUN_141460550(lVar2,uVar5,uVar4,*(undefined8 *)(param_1 + 0x490));
    }
  }
  lVar2 = *(longlong *)(param_1 + -0x4d8);
  local_18 = 0;
  local_10 = 0;
  puVar6 = (undefined8 *)FName::FName(local_res10,L"Cancel",1);
  (**(code **)(lVar2 + 0x4e8))(param_1 + -0x4d8,*puVar6,&local_18);
  FUN_142eb3990(param_1 + -0x4d8);
  return 1;
}



// FUNCTION 14111a550 FUN_14111a550 body=129 status=ok
// SIG undefined FUN_14111a550(void)

undefined8 FUN_14111a550(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar3 = FUN_140ec9a00(uVar2);
    if (lVar3 != 0) {
      cVar1 = (**(code **)(*(longlong *)(lVar3 + 0x4d8) + 0xc0))
                        ((longlong *)(lVar3 + 0x4d8),param_2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  uVar2 = FUN_1410db2b0(param_1,param_2);
  return uVar2;
}



// FUNCTION 14111a5e0 FUN_14111a5e0 body=717 status=ok
// SIG undefined FUN_14111a5e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14111a5e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (((((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146875270 == *param_2)) &&
       (*(char *)(param_1 + 0x231) != '\0')) &&
      ((cVar2 = FKey::IsGamepadKey(param_2 + 2), cVar2 != '\0' &&
       (*(longlong *)(param_1 + 0x1f0) != 0)))) &&
     (cVar2 = FUN_141087490(*(longlong *)(param_1 + 0x1f0) + 0x170), cVar2 == '\0')) {
    uVar3 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (&local_78,*(undefined8 *)(param_1 + 0x1f0));
    FUN_142ed36d0(param_1 + -0x4d8,uVar3,0);
    return 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x1f0);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x3cd) != '\0')) {
    (**(code **)(*(longlong *)(lVar1 + 0x170) + 0x20))((longlong *)(lVar1 + 0x170),param_2);
    return 1;
  }
  if (((*(char *)((longlong)param_2 + 0xc) == '\0') &&
      (((DAT_146875218 == *param_2 || (DAT_146875220 == *param_2)) &&
       (*(longlong *)(param_1 + 0x220) != 0)))) &&
     (((cVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x220) + 0x170) + 0x48))(),
       cVar2 != '\0' && (*(char *)(param_1 + 0x233) == '\x01')) &&
      (plVar5 = (longlong *)(*(longlong *)(param_1 + 0x220) + 0x170),
      cVar2 = (**(code **)(*plVar5 + 0x20))(plVar5,param_2), cVar2 != '\0')))) {
    return 1;
  }
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if (DAT_146b3e2b8 == *param_2) {
      if ((*(longlong *)(param_1 + 0x1f0) != 0) &&
         (cVar2 = FUN_141087490(*(longlong *)(param_1 + 0x1f0) + 0x170), cVar2 != '\0')) {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x170);
        cVar2 = (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
        if (cVar2 != '\0') {
          return 1;
        }
        local_78 = 0;
        uStack_70 = 0;
        FUN_142ed36d0(param_1 + -0x4d8,&local_78,0);
        FUN_142ed1500(param_1 + -0x4d8);
        FUN_1410a4180(*(undefined8 *)(param_1 + 0x1f0),0);
        return 1;
      }
    }
    else if (((DAT_146875208 == *param_2) && (*(longlong *)(param_1 + 0x220) != 0)) &&
            (cVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x220) + 0x170) + 0x48))(),
            cVar2 != '\0')) {
      param_1 = param_1 + -0x4d8;
      local_78 = 0;
      uStack_70 = 0;
      FUN_142ed36d0(param_1,&local_78,0);
      FUN_142ed1500(param_1);
      local_38 = (longlong *)0x0;
      local_28 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_143f3f130;
      }
      local_68[0] = &LAB_141107630;
      FUN_141107840(param_1,local_68);
      if (local_28 != 0) {
        plVar5 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar5 = local_38;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_38 == (longlong *)0x0) {
        return 1;
      }
      FMemory::Free();
      return 1;
    }
  }
  uVar3 = FUN_142ec6030(param_1,param_2);
  return uVar3;
}



// FUNCTION 14111a8b0 FUN_14111a8b0 body=200 status=ok
// SIG undefined FUN_14111a8b0(void)

undefined8 FUN_14111a8b0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2a0 == *param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0xb4);
    if (lVar2 != 0) {
      lVar3 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(char *)(param_1 + 0x298) != '\0')) {
        FUN_14145faf0(lVar2);
      }
    }
    *(undefined1 *)(param_1 + 0x298) = 0;
    FUN_142eb3990(param_1 + -0x4d8);
    return 1;
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014111a96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x170) + 0x20))();
    return uVar4;
  }
  return 0;
}



// FUNCTION 14111a980 FUN_14111a980 body=610 status=ok
// SIG undefined FUN_14111a980(void)

undefined8 FUN_14111a980(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + -0x4d8;
  cVar2 = FUN_141111610(lVar1);
  if (((((cVar2 != '\0') && (iVar3 = FUN_14110e720(lVar1), 0 < iVar3)) &&
       (*(char *)((longlong)param_2 + 0xc) == '\0')) &&
      ((DAT_146875430 == *param_2 &&
       (plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4), plVar4 != (longlong *)0x0)))) &&
     ((lVar5 = FUN_14270bb10(plVar4), lVar5 != 0 && (*(int *)(lVar5 + 0x108) == (int)param_2[1]))))
  {
    (**(code **)(*plVar4 + 0xf90))(plVar4,1);
    return 1;
  }
  lVar5 = param_2[1];
  if (((*(longlong *)(param_1 + 0x2d8) != 0) && (lVar6 = FUN_14270bb10(), lVar6 != 0)) &&
     (*(int *)(lVar6 + 0x108) == (int)lVar5)) {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
    if (cVar2 != '\0') {
      uVar7 = FWeakObjectPtr::Get(param_1 + 0xc4);
      lVar5 = FUN_140ec9a00(uVar7);
      if (lVar5 != 0) {
        cVar2 = (**(code **)(*(longlong *)(lVar5 + 0x4d8) + 0xc0))
                          ((longlong *)(lVar5 + 0x4d8),param_2);
        if (cVar2 != '\0') {
          return 1;
        }
        if ((*(longlong *)(lVar5 + 0x6c8) != 0) &&
           (cVar2 = FUN_141087490(*(longlong *)(lVar5 + 0x6c8) + 0x170), cVar2 != '\0')) {
          return 0;
        }
      }
    }
    if (((*(char *)((longlong)param_2 + 0xc) != '\0') ||
        (((DAT_146b3e2b8 != *param_2 ||
          ((*(longlong *)(param_1 + 0x238) == 0 && (cVar2 = FUN_141136c30(lVar1,0), cVar2 == '\0')))
          ) && (((*(char *)((longlong)param_2 + 0xc) != '\0' || (DAT_146b3e2a0 != *param_2)) ||
                (((((*(longlong *)(param_1 + 0x238) == 0 && (*(longlong *)(param_1 + 0x2b0) != 0))
                   && (iVar3 = FUN_142eb7a00(), -1 < iVar3)) &&
                  ((iVar3 < *(int *)(param_1 + 0x200) &&
                   (*(int *)((longlong)iVar3 * 0x1c8 + 0x38 + *(longlong *)(param_1 + 0x1f8)) == 3))
                  )) && ((*(char *)(param_1 + 0x210) != '\0' && (*(char *)(param_1 + 0x211) == '\0')
                         ))))))))) && (cVar2 = FUN_142ec6030(param_1,param_2), cVar2 == '\0')) {
      if (*(char *)((longlong)param_2 + 0xc) != '\0') {
        return 0;
      }
      if ((DAT_146875268 == *param_2) && (cVar2 = FUN_141111570(lVar1), cVar2 != '\0')) {
        FUN_141113260(lVar1,*(undefined8 *)(param_1 + 0x2c0),param_2);
      }
      else {
        if (*(char *)((longlong)param_2 + 0xc) != '\0') {
          return 0;
        }
        if (DAT_146875310 != *param_2) {
          return 0;
        }
        cVar2 = FUN_1411115b0(lVar1);
        if (cVar2 == '\0') {
          return 0;
        }
        cVar2 = FUN_142ebe1b0(lVar1,*(undefined8 *)(param_1 + 0x2b0));
        if (cVar2 == '\0') {
          return 0;
        }
        FUN_141134440(lVar1);
      }
    }
  }
  return 1;
}



// FUNCTION 14111abf0 FUN_14111abf0 body=1214 status=ok
// SIG undefined FUN_14111abf0(void)

undefined8 FUN_14111abf0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong *local_res10;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [48];
  
  plVar11 = (longlong *)0x0;
  local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000);
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if (DAT_146b3e2a0 == *param_2) {
      if (*(int *)(*(longlong *)(param_1 + 0x1c0) + 0x78) < 2) {
        if (*(int *)(*(longlong *)(param_1 + 0x1c0) + 0x68) < 2) {
          return 0;
        }
        FUN_1404cf2e0(&local_d8,0);
        if ((local_d8 != (longlong *)0x0) &&
           (cVar6 = (**(code **)(*local_d8 + 0x10))(local_d8,0xf), cVar6 != '\0')) {
          local_78 = 0;
          uStack_70 = 2;
          local_80 = 0;
          local_c8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_c4 = 0;
          local_b0 = (longlong *)0x0;
          local_a8 = 0;
          local_a0 = 0;
          local_98 = 0;
          (**(code **)(*local_d8 + 0x98))
                    (local_d8,*(longlong *)(param_1 + 0x1c0) + 0x60,&local_c8,&local_80);
          if (local_a0 != 0) {
            FMemory::Free();
          }
          plVar11 = local_b0;
          for (iVar10 = (int)local_a8; iVar10 != 0; iVar10 = iVar10 + -1) {
            if (*plVar11 != 0) {
              FMemory::Free();
            }
            plVar11 = plVar11 + 2;
          }
          if (local_b0 != (longlong *)0x0) {
            FMemory::Free(local_b0);
          }
          TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_80);
          plVar11 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_d0 + 1;
            lVar7 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              iVar10 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*local_d0 + 8))(local_d0,1);
              }
            }
          }
          return 1;
        }
        plVar11 = local_d0;
        if (local_d0 == (longlong *)0x0) {
          return 0;
        }
        LOCK();
        plVar8 = local_d0 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 != 1) {
          return 0;
        }
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 != 1) {
          return 0;
        }
        lVar7 = *local_d0;
      }
      else {
        lVar7 = FUN_140f9aee0(param_1 + -0x4d8);
        if (lVar7 == 0) {
          return 0;
        }
        lVar7 = UGameInstance::FindLocalPlayerFromControllerId(lVar7,(int)param_2[1]);
        if (lVar7 == 0) {
          bVar5 = false;
          bVar4 = false;
          bVar3 = true;
          plVar8 = local_res10;
          plVar9 = plVar11;
          local_res10 = plVar11;
        }
        else {
          lVar7 = FUN_142547b50(lVar7,local_68);
          plVar8 = *(longlong **)(lVar7 + 0x10);
          plVar11 = *(longlong **)(lVar7 + 8);
          plVar1 = plVar8 + 1;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)plVar1 = (int)*plVar1 + 1;
            UNLOCK();
          }
          bVar5 = true;
          bVar4 = true;
          bVar3 = false;
          plVar9 = plVar8;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)plVar1 = (int)*plVar1 + 1;
            UNLOCK();
          }
        }
        if ((bVar3) && (local_res10 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_res10 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_res10)(local_res10);
            LOCK();
            piVar2 = (int *)((longlong)local_res10 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*local_res10 + 8))(local_res10,1);
            }
          }
        }
        if ((bVar4) && (plVar8 != (longlong *)0x0)) {
          LOCK();
          plVar1 = plVar8 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        if (bVar5) {
          FUN_1404bf980(local_68);
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_1404cf2e0(&local_e8,0);
          plVar8 = local_e8;
          if ((local_e8 != (longlong *)0x0) &&
             (cVar6 = (**(code **)(*local_e8 + 0x10))(local_e8,1), cVar6 != '\0')) {
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
              plVar8 = local_e8;
            }
            local_90 = plVar11;
            local_88 = plVar9;
            (**(code **)(*plVar8 + 0x28))
                      (plVar8,&local_90,0xffffffff,*(longlong *)(param_1 + 0x1c0) + 0x70);
            plVar11 = local_88;
            if (local_88 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_88 + 1;
              lVar7 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_88)(local_88);
                LOCK();
                piVar2 = (int *)((longlong)plVar11 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
            plVar11 = local_e0;
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_e0 + 1;
              lVar7 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_e0)(local_e0);
                LOCK();
                piVar2 = (int *)((longlong)plVar11 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*local_e0 + 8))(local_e0,1);
                }
              }
            }
            if (plVar9 == (longlong *)0x0) {
              return 1;
            }
            LOCK();
            plVar11 = plVar9 + 1;
            lVar7 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar7 != 1) {
              return 1;
            }
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 != 1) {
              return 1;
            }
            (**(code **)(*plVar9 + 8))(plVar9,1);
            return 1;
          }
          plVar11 = local_e0;
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_e0 + 1;
            lVar7 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              iVar10 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*local_e0 + 8))(local_e0,1);
              }
            }
          }
        }
        if (plVar9 == (longlong *)0x0) {
          return 0;
        }
        LOCK();
        plVar11 = plVar9 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 != 1) {
          return 0;
        }
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 != 1) {
          return 0;
        }
        lVar7 = *plVar9;
        local_d0 = plVar9;
      }
      (**(code **)(lVar7 + 8))(local_d0,1);
    }
    else if (DAT_146b3e2b8 == *param_2) {
      FUN_142eb3990(param_1 + -0x4d8);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14111b0b0 FUN_14111b0b0 body=98 status=ok
// SIG undefined FUN_14111b0b0(void)

undefined8 FUN_14111b0b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    local_28 = 0;
    local_18 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143f77b70;
      puVar1[1] = param_1 + -0x4d8;
    }
    local_58[0] = &LAB_141107440;
    FUN_14204c280(local_58);
  }
  return 1;
}



// FUNCTION 14111b120 FUN_14111b120 body=1144 status=ok
// SIG undefined FUN_14111b120(void)

undefined4 FUN_14111b120(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [48];
  
  lVar6 = param_2[1];
  plVar2 = (longlong *)(param_1 + -0x4d8);
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xf4);
  if (cVar4 == '\0') {
    return 0;
  }
  uVar5 = FWeakObjectPtr::Get(param_1 + 0xf4);
  lVar6 = UGameInstance::FindLocalPlayerFromControllerId(uVar5,(int)lVar6);
  if (lVar6 == 0) {
    return 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x4b0);
  if (lVar6 != 0) {
    if ((*(longlong *)(lVar6 + 0x6c8) != 0) &&
       (*(char *)(*(longlong *)(lVar6 + 0x6c8) + 0x3cd) != '\0')) {
      (**(code **)(*(longlong *)(lVar6 + 0x4d8) + 0xc0))((longlong *)(lVar6 + 0x4d8),param_2);
      return 1;
    }
    if (((*(char *)((longlong)param_2 + 0xc) == '\0') &&
        ((((lVar7 = *param_2, DAT_146875218 == lVar7 || (DAT_146875220 == lVar7)) ||
          (DAT_146875208 == lVar7)) || (DAT_146875210 == lVar7)))) &&
       (cVar4 = (**(code **)(*(longlong *)(lVar6 + 0x4d8) + 0xc0))
                          ((longlong *)(lVar6 + 0x4d8),param_2), cVar4 != '\0')) {
      return 1;
    }
  }
  cVar4 = FUN_142ec6030(param_1,param_2);
  if (cVar4 == '\0') {
    lVar6 = param_2[1];
    bVar10 = false;
    if (((int)lVar6 != -1) && (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xf4), cVar4 != '\0')) {
      uVar5 = FWeakObjectPtr::Get(param_1 + 0xf4);
      lVar7 = UGameInstance::GetFirstGamePlayer(uVar5);
      if (lVar7 != 0) {
        bVar10 = *(int *)(lVar7 + 0x108) == (int)lVar6;
      }
    }
    if ((*(longlong *)(param_1 + 0x4b0) == 0) ||
       (plVar9 = (longlong *)(*(longlong *)(param_1 + 0x4b0) + 0x4d8),
       cVar4 = (**(code **)(*plVar9 + 0xc0))(plVar9,param_2), cVar4 == '\0')) {
      lVar6 = FUN_140f9aee0(plVar2);
      if (*(char *)((longlong)param_2 + 0xc) == '\0') {
        if (DAT_146875210 == *param_2) {
          if ((((*(longlong *)(param_1 + 0x4a8) != 0) &&
               (cVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4a8) + 0x170) + 0x48))
                                  (), cVar4 != '\0')) && (*(longlong *)(param_1 + 0x4b0) != 0)) &&
             (cVar4 = FUN_1411116e0(), cVar4 != '\0')) {
            local_58 = 0;
            uStack_50 = 0;
            FUN_142ed36d0(plVar2,&local_58,0);
            lVar6 = *(longlong *)(param_1 + 0x4b0);
            if (*(longlong *)(lVar6 + 0x6f8) == 0) {
              return 1;
            }
            if (*(char *)(lVar6 + 0x70a) == '\0') {
              return 1;
            }
            if (*(char *)(lVar6 + 0x70b) != '\x01') {
              return 1;
            }
            cVar4 = FUN_142ebdd70(lVar6);
            if (cVar4 != '\0') {
              return 1;
            }
            lVar7 = *(longlong *)(lVar6 + 0x6f8);
            if (*(char *)(lVar7 + 0x360) == '\0') {
              return 1;
            }
            local_68 = lVar7;
            if (lVar7 == 0) {
              local_60 = 0;
            }
            else {
              uVar5 = UBlendableInterface::GetPrivateStaticClass();
              local_60 = UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar5);
            }
            FUN_142ed36d0(lVar6,&local_68,0);
            return 1;
          }
        }
        else if (DAT_146b3e2b8 == *param_2) {
          if (*(int *)(param_1 + 0x3c4) != 0) {
            lVar6 = *plVar2;
            local_78 = 0;
            local_70 = 0;
            puVar8 = (undefined8 *)FName::FName(local_res8,L"MainMenu_Cancel",1);
            (**(code **)(lVar6 + 0x4e8))(plVar2,*puVar8,&local_78);
            FUN_1411323d0(plVar2,0);
            return 1;
          }
          if (bVar10) {
            if (lVar6 == 0) {
              return 1;
            }
            lVar7 = FUN_140bb6170(lVar6);
            if (lVar7 == 0) {
              FUN_141122770(plVar2,param_2);
              return 1;
            }
            FUN_140baea50(lVar6,0);
            return 1;
          }
          if (lVar6 != 0) {
            AK::MemoryMgr::StartProfileThreadUsage((long)lVar6);
            return 1;
          }
        }
      }
      if ((((*(longlong *)(param_1 + 0x4b0) == 0) || (cVar4 = FUN_141111680(), cVar4 == '\0')) &&
          ((*(char *)((longlong)param_2 + 0xc) == '\0' &&
           ((DAT_1468755f8 == *param_2 && (lVar6 != 0)))))) &&
         ((*(int *)(param_1 + 0x3c4) != 4 &&
          (lVar7 = UGameInstance::FindLocalPlayerFromControllerId(lVar6,(int)param_2[1]), lVar7 != 0
          )))) {
        lVar7 = FUN_142547b50(lVar7,local_48);
        local_88 = *(longlong *)(lVar7 + 8);
        local_80 = *(longlong **)(lVar7 + 0x10);
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
        FUN_1404bf980(local_48);
        plVar2 = local_80;
        if (local_88 != 0) {
          FUN_140be2980(lVar6,&local_88);
          plVar2 = local_80;
          if (local_80 == (longlong *)0x0) {
            return 1;
          }
          LOCK();
          plVar9 = local_80 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 != 1) {
            return 1;
          }
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 != 1) {
            return 1;
          }
          (**(code **)(*plVar2 + 8))(plVar2,1);
          return 1;
        }
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_80 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14111b5a0 FUN_14111b5a0 body=1533 status=ok
// SIG undefined FUN_14111b5a0(void)

char FUN_14111b5a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_148;
  longlong local_140;
  undefined1 local_138 [220];
  undefined1 local_5c [52];
  
  plVar1 = (longlong *)(param_1 + -0x4d8);
  cVar3 = *(char *)(param_1 + 0x2a0);
  cVar4 = '\0';
  if ((byte)(cVar3 - 1U) < 2) {
    lVar8 = param_1 + 0x348;
LAB_14111b6be:
    cVar3 = FUN_14103c540(lVar8);
    if (cVar3 != '\0') {
LAB_14111b626:
      FUN_140eb0420(param_1 + 0x230,param_2);
      return '\x01';
    }
  }
  else {
    if (cVar3 == '\x03') {
      if ((*(char *)((longlong)param_2 + 0xc) == '\0') &&
         ((DAT_146875220 == *param_2 || (DAT_146b3e2a0 == *param_2)))) {
        FUN_141132530(plVar1,4);
        FUN_14105c120(param_1 + 0x4e8,*(undefined4 *)(param_1 + 0x590),1);
        goto LAB_14111b626;
      }
      lVar8 = param_1 + 0x418;
      goto LAB_14111b6be;
    }
    if (cVar3 == '\x04') {
      if ((*(char *)((longlong)param_2 + 0xc) == '\0') &&
         ((DAT_146875218 == *param_2 || (DAT_146b3e2a0 == *param_2)))) {
        FUN_141132530(plVar1,3);
        FUN_14105c120(param_1 + 0x418,*(undefined4 *)(param_1 + 0x4c0),1);
        FUN_140eb0420(param_1 + 0x230,param_2);
        return '\x01';
      }
      lVar8 = param_1 + 0x4e8;
      goto LAB_14111b6be;
    }
  }
  if (*(char *)((longlong)param_2 + 0xc) != '\0') goto LAB_14111bb10;
  if ((DAT_146875298 == *param_2) || (DAT_146875290 == *param_2)) {
    FUN_141132530(plVar1,(*(char *)(param_1 + 0x2a0) != '\x02') + '\x01');
  }
  else if (DAT_146875268 == *param_2) {
    cVar3 = FUN_141107a90(plVar1);
    if (cVar3 != '\0') {
      lVar8 = *plVar1;
      local_148 = 0;
      local_140 = 0;
      puVar6 = (undefined8 *)FName::FName(&local_res8,"Confirm",1);
      (**(code **)(lVar8 + 0x4e8))(plVar1,*puVar6,&local_148);
      cVar3 = *(char *)(param_1 + 0x2a0);
      if ((byte)(cVar3 - 1U) < 2) {
        lVar8 = param_1 + 0x340;
LAB_14111b79b:
        iVar5 = *(int *)(lVar8 + 100);
        if (((lVar8 == 0) || (iVar5 < 0)) || (*(int *)(lVar8 + 0xc0) <= iVar5)) goto LAB_14111b7cb;
        FUN_140e9a4f0(local_138,(longlong)iVar5 * 0x110 + *(longlong *)(lVar8 + 0xb8));
      }
      else {
        if (cVar3 == '\x04') {
          lVar8 = param_1 + 0x4e0;
          goto LAB_14111b79b;
        }
        if (cVar3 == '\x03') {
          lVar8 = param_1 + 0x410;
          goto LAB_14111b79b;
        }
LAB_14111b7cb:
        _guard_xfg_dispatch_icall_nop(local_138,0,0x110);
        FUN_140ed0240(local_138);
      }
      uVar7 = FWeakObjectPtr::Get(local_5c);
      FWeakObjectPtr::operator=(param_1 + 0x330,uVar7);
      FUN_140e9c360(local_138);
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x330);
      if (cVar3 != '\0') {
        *(undefined1 *)(param_1 + 0x338) = *(undefined1 *)(param_1 + 0x2a0);
        uVar11 = FUN_142eedeb0(param_1 + 0x368);
        *(undefined4 *)(param_1 + 0x5b8) = uVar11;
        *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 0x3a4);
        FUN_141132530(plVar1,(*(char *)(param_1 + 0x338) == '\x01') + '\x03');
        *(undefined1 *)(param_1 + 0x5b0) = 1;
      }
    }
  }
  else if (DAT_146875578 == *param_2) {
    cVar3 = FUN_141107d50(plVar1);
    if (cVar3 != '\0') {
      FUN_14110d030(plVar1);
      lVar2 = local_140;
      lVar8 = local_148;
      iVar5 = local_148._4_4_;
      lVar10 = (longlong)local_148._4_4_;
      if (((local_140 == 0) || (local_148 < 0)) || (*(int *)(local_140 + 0xc0) <= local_148._4_4_))
      {
        _guard_xfg_dispatch_icall_nop(local_138,0,0x110);
        FUN_140ed0240(local_138);
      }
      else {
        FUN_140e9a4f0(local_138);
      }
      cVar3 = FWeakObjectPtr::IsValid(local_5c);
      FUN_140e9c360(local_138);
      if (cVar3 != '\0') {
        if (((lVar2 == 0) || (lVar8 < 0)) || (*(int *)(lVar2 + 0xc0) <= iVar5)) {
          _guard_xfg_dispatch_icall_nop(local_138,0,0x110);
          FUN_140ed0240(local_138);
        }
        else {
          FUN_140e9a4f0(local_138,lVar10 * 0x110 + *(longlong *)(lVar2 + 0xb8));
        }
        FUN_14110bf60(plVar1,local_138,3);
        FUN_140e9c360(local_138);
      }
    }
  }
  else if (DAT_146875568 == *param_2) {
    cVar3 = FUN_141107f60(plVar1);
    if (cVar3 != '\0') {
      FUN_141136750(plVar1);
    }
  }
  else {
    if (DAT_146875570 == *param_2) {
      if (1 < (byte)(*(char *)(param_1 + 0x2a0) - 1U)) goto LAB_14111bb10;
      iVar5 = *(int *)(param_1 + 0x210);
      if (iVar5 != 0) {
        *(int *)(param_1 + 0x324) = (*(int *)(param_1 + 0x324) + 1 + iVar5) % iVar5;
        FUN_14112cc30(plVar1,1);
        *(undefined4 *)(param_1 + 0x5bc) = *(undefined4 *)(param_1 + 0x29c);
        *(undefined1 *)(param_1 + 0x32d) = 1;
      }
      pcVar9 = "Navigate";
    }
    else if (DAT_1468752a0 == *param_2) {
      cVar3 = FUN_1411079c0(plVar1,1);
      if (cVar3 == '\0') goto LAB_14111bb10;
      FUN_141108080(plVar1,1);
      pcVar9 = "Navigate";
    }
    else {
      if (DAT_1468752a8 != *param_2) goto LAB_14111bb10;
      cVar3 = *(char *)(param_1 + 0x2a0);
      if ((byte)(cVar3 - 1U) < 2) {
        lVar8 = 0x340;
      }
      else if (cVar3 == '\x04') {
        lVar8 = 0x4e0;
      }
      else {
        if (cVar3 != '\x03') goto LAB_14111bb10;
        lVar8 = 0x410;
      }
      if ((lVar8 + param_1 == 0) || (iVar5 = FUN_14103af20(lVar8 + param_1 + 8), iVar5 < 1))
      goto LAB_14111bb10;
      FUN_141108080(plVar1,0);
      pcVar9 = "Navigate";
    }
    lVar8 = *plVar1;
    local_148 = 0;
    local_140 = 0;
    puVar6 = (undefined8 *)FName::FName(&local_res8,pcVar9,1);
    (**(code **)(lVar8 + 0x4e8))(plVar1,*puVar6,&local_148);
  }
  cVar4 = '\x01';
LAB_14111bb10:
  if (((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) &&
     ((byte)(*(char *)(param_1 + 0x2a0) - 3U) < 2)) {
    FUN_141132530(plVar1,*(undefined1 *)(param_1 + 0x338));
    FWeakObjectPtr::operator=(&local_res8,0);
    cVar4 = '\x01';
    *(undefined4 *)(param_1 + 0x330) = local_res8;
    *(undefined4 *)(param_1 + 0x334) = local_resc;
    *(undefined1 *)(param_1 + 0x338) = 0;
  }
  else if ((cVar4 == '\0') && (cVar4 = FUN_142ec6030(param_1,param_2), cVar4 == '\0')) {
    return '\0';
  }
  FUN_140eb0420(param_1 + 0x230,param_2);
  return cVar4;
}



// FUNCTION 14111bba0 FUN_14111bba0 body=801 status=ok
// SIG undefined FUN_14111bba0(void)

undefined8 FUN_14111bba0(longlong param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined8 local_res8;
  longlong local_res18 [2];
  longlong local_38;
  longlong local_30;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar3 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar7 = FUN_140ec9a00(uVar6);
    if ((lVar7 != 0) &&
       (cVar3 = (**(code **)(*(longlong *)(lVar7 + 0x4d8) + 0xc0))
                          ((longlong *)(lVar7 + 0x4d8),param_2), cVar3 != '\0')) {
      return 1;
    }
  }
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if (DAT_146b3e2b8 == *param_2) {
      if (*(longlong *)(param_1 + 0x2a8) != 0) {
        local_38 = 0;
        local_30 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        FGenericPlatformString::Memcpy(local_38,L"hide",10);
        FUN_142088910(*(undefined8 *)(param_1 + 0x2a8),&local_38);
        if (local_38 != 0) {
          FMemory::Free();
        }
      }
      if (*(longlong *)(param_1 + 0x2b0) != 0) {
        local_38 = 0;
        local_30 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        FGenericPlatformString::Memcpy(local_38,L"hide",10);
        FUN_142088910(*(undefined8 *)(param_1 + 0x2b0),&local_38);
        if (local_38 != 0) {
          FMemory::Free();
        }
      }
      FUN_142ecd3f0(param_1 + -0x4d8);
      *(undefined1 *)(param_1 + 0x304) = 1;
      if (*(longlong *)(param_1 + 0x2f0) != 0) {
        plVar10 = (longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x170);
        (**(code **)(*plVar10 + 0x38))(plVar10,0);
      }
      if (*(int *)(param_1 + 0x60) < 2) {
        return 1;
      }
      local_38 = 0;
      local_30 = 0;
      if (*(int *)(param_1 + 0x60) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = *(undefined2 **)(param_1 + 0x58);
      }
      lVar7 = *(longlong *)(param_1 + -0x4d8);
      puVar8 = (undefined8 *)FName::FName(&local_res8,puVar11,1);
      (**(code **)(lVar7 + 0x4e8))(param_1 + -0x4d8,*puVar8,&local_38);
      return 1;
    }
    if ((((DAT_146875268 == *param_2) && (*(longlong *)(param_1 + 0x2f0) != 0)) &&
        (iVar4 = FUN_142eb7a00(), 0 < iVar4)) &&
       ((lVar7 = FUN_140e971d0(param_1 + -0x4d8), lVar7 != 0 &&
        (lVar7 = FUN_140cfbfb0(lVar7), lVar7 != 0)))) {
      uVar5 = FUN_142eb7a00(*(undefined8 *)(param_1 + 0x2f0));
      cVar3 = FUN_140c39b30(uVar5,lVar7);
      if (cVar3 != '\0') {
        FWeakObjectPtr::operator=(&local_38,0);
        local_30 = 0;
        pwVar9 = _guard_xfg_dispatch_icall_nop
                           (L"&UGFxPlaythroughSelectionMenu::OnResetProgressChoiceMade",L"::");
        pwVar2 = (wchar_t *)0x0;
        while (pwVar1 = pwVar9, pwVar1 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar2 = pwVar1;
        }
        FName::FName(local_res18,pwVar2 + 2,1);
        FWeakObjectPtr::operator=(&local_38,param_1 + -0x4d8);
        local_30 = local_res18[0];
        local_res8 = 0;
        if ((local_res18[0] != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
          UObject::FindFunction(lVar7,local_30);
        }
        uVar6 = FWeakObjectPtr::Get(param_1 + 0xb4);
        FUN_1410f47a0(uVar6,param_1 + 0x250,param_1 + 0x268,&local_38,0,0,0,1,0);
      }
    }
  }
  cVar3 = FUN_142ec6030(param_1,param_2);
  if (cVar3 != '\0') {
    return 1;
  }
  return 0;
}



// FUNCTION 14111bed0 FUN_14111bed0 body=353 status=ok
// SIG undefined FUN_14111bed0(void)

undefined8 FUN_14111bed0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x200;
  cVar2 = FWeakObjectPtr::IsValid(lVar1);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(lVar1);
    if (*(char *)(lVar3 + 0x570) != '\0') {
      return 1;
    }
    if (*(char *)((longlong)param_2 + 0xc) == '\0') {
      if (DAT_146b3e2a0 == *param_2) {
        uVar4 = FWeakObjectPtr::Get(lVar1);
        FUN_140b126c0(uVar4);
        return 1;
      }
      if (DAT_146875218 == *param_2) {
        uVar4 = FWeakObjectPtr::Get(lVar1);
        FUN_140b12600(uVar4);
        return 1;
      }
      if (DAT_146875220 == *param_2) {
        uVar4 = FWeakObjectPtr::Get(lVar1);
        FUN_140b12640(uVar4);
        return 1;
      }
      if (DAT_146875208 == *param_2) {
        uVar4 = FWeakObjectPtr::Get(lVar1);
        FUN_140b12680(uVar4);
        return 1;
      }
      if (DAT_146875210 == *param_2) {
        uVar4 = FWeakObjectPtr::Get(lVar1);
        FUN_140b125c0(uVar4);
        return 1;
      }
    }
  }
  uVar4 = FUN_142ec6030(param_1,param_2);
  return uVar4;
}



// FUNCTION 14111c040 FUN_14111c040 body=53 status=ok
// SIG undefined FUN_14111c040(void)

void FUN_14111c040(longlong param_1,undefined1 param_2)

{
  FUN_142ec64e0();
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1410955d0(*(longlong *)(param_1 + 0x1f0),param_2);
  }
  return;
}



// FUNCTION 14111c080 FUN_14111c080 body=84 status=ok
// SIG undefined FUN_14111c080(void)

void FUN_14111c080(longlong param_1)

{
  FUN_142ec64e0();
  if ((*(longlong *)(param_1 + 0x288) != 0) && (*(longlong *)(param_1 + 0x290) != 0)) {
    FUN_142ed3af0(*(longlong *)(param_1 + 0x288),param_1 + 0x200,0);
    FUN_142ed3af0(*(undefined8 *)(param_1 + 0x290),param_1 + 0x218,0);
    return;
  }
  return;
}



// FUNCTION 14111c0e0 FUN_14111c0e0 body=31 status=ok
// SIG undefined FUN_14111c0e0(void)

void FUN_14111c0e0(longlong param_1)

{
  FUN_142ec64e0();
  FUN_141138360(param_1 + -0x4d8);
  return;
}



// FUNCTION 14111c100 FUN_14111c100 body=446 status=ok
// SIG undefined FUN_14111c100(void)

void FUN_14111c100(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_48 [4];
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (((int)param_1[0xd7] == 0) && (*(int *)((longlong)param_1 + 0x6bc) == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) {
    local_48[2] = 0;
    local_48[3] = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0xd7],local_48 + 2);
  }
  lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14111c198;
  }
  lVar5 = 0;
LAB_14111c198:
  FUN_140ab72e0(lVar5,4);
  if (param_1[0xdd] != 0) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Insufficient Funds!",L"GFxSDUVendorMenu",L"InsufficientFundsText")
    ;
    lVar5 = param_1[0xdd];
    plVar3 = *(longlong **)(lVar5 + 0x170);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2b0))(plVar3,uVar7,1,0);
    }
    plVar3 = *(longlong **)(lVar5 + 0x178);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2b0))(plVar3,uVar7,1,0);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    local_48[0] = 0;
    local_48[1] = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],&DAT_1446b6648,6);
    FUN_142088910(param_1[0xdd],local_48);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14111c2c0 FUN_14111c2c0 body=152 status=ok
// SIG undefined FUN_14111c2c0(void)

undefined4 FUN_14111c2c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = FUN_141324a80();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar3 = param_3;
    if (bVar2) goto LAB_14111c312;
  }
  lVar3 = 0;
LAB_14111c312:
  FUN_141111a70(param_1,lVar3);
  if (((byte)(*(char *)(param_1 + 0x778) - 3U) < 2) && (param_3 != 0)) {
    FUN_141132530(param_1,4);
  }
  *(undefined1 *)(param_1 + 0xa88) = 1;
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 14111c360 FUN_14111c360 body=601 status=ok
// SIG undefined FUN_14111c360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14111c360(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  undefined8 local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar5 != 0) {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_98 = 0;
      plStack_90 = (longlong *)0x0;
      lVar6 = UGameInstance::FindLocalPlayerFromControllerId(lVar5,*(undefined4 *)(param_1 + 0x9c8))
      ;
      plVar7 = plStack_90;
      if (lVar6 != 0) {
        lVar6 = FUN_142547580(lVar6,local_68);
        local_40 = *(undefined8 *)(lVar6 + 8);
        plStack_38 = *(longlong **)(lVar6 + 0x10);
        local_88 = 0;
        plVar7 = (longlong *)0x0;
        if (plStack_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
          UNLOCK();
          local_88 = local_98;
          plVar7 = plStack_90;
        }
        local_98 = local_40;
        plStack_90 = plStack_38;
        plStack_80 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar7 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_80 + 8))(plStack_80,1);
            }
          }
        }
        local_68[0] = &PTR_FUN_143f740c8;
        if (local_50 != 0) {
          FMemory::Free();
        }
        local_68[0] = &PTR_FUN_143f73d18;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_58 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar2 = (int *)((longlong)local_58 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_58 + 8))(local_58,1);
            }
          }
        }
        plVar7 = plStack_90;
        local_78 = local_98;
        plStack_70 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
          UNLOCK();
        }
        FUN_140ba9e90(lVar5,&local_78);
        plVar1 = plStack_70;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          plVar7 = plStack_70 + 1;
          lVar5 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          plVar7 = plStack_90;
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_70)(plStack_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            plVar7 = plStack_90;
            if (iVar3 == 1) {
              (**(code **)(*plVar1 + 8))(plVar1,1);
              plVar7 = plStack_90;
            }
          }
        }
      }
      FUN_1411323d0(param_1,0);
      plVar1 = plStack_90;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar7 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_90 + 8))(plStack_90,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14111c5c0 FUN_14111c5c0 body=181 status=ok
// SIG undefined FUN_14111c5c0(void)

void FUN_14111c5c0(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (param_2 == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = *(int *)(param_2 + 0x288);
      }
      if ((iVar2 < 0) || (*(int *)(param_1 + 0x9c0) <= iVar2)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140be8820(lVar3,(longlong)iVar2 * 0xe8 + *(longlong *)(param_1 + 0x9b8));
        FUN_1411323d0(param_1,0);
      }
    }
  }
  return;
}



// FUNCTION 14111c680 FUN_14111c680 body=20 status=ok
// SIG undefined FUN_14111c680(void)

void FUN_14111c680(longlong param_1,undefined8 param_2,longlong param_3)

{
  *(undefined4 *)(param_1 + 0x9c8) = *(undefined4 *)(param_3 + 8);
  FUN_1411323d0(param_1,5);
  return;
}



// FUNCTION 14111c6a0 FUN_14111c6a0 body=106 status=ok
// SIG undefined FUN_14111c6a0(void)

void FUN_14111c6a0(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x800);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FWeakObjectPtr::operator=(param_1 + 0x7e0,*(undefined8 *)(param_1 + 2000));
    FWeakObjectPtr::operator=(param_1 + 0x7e8,*(undefined8 *)(param_1 + 2000));
    FWeakObjectPtr::operator=(param_1 + 0x7f0,*(undefined8 *)(param_1 + 0x7d8));
  }
  if ((*(char *)(param_1 + 0x804) != '\0') && (*(int *)(param_1 + 0x800) == 0)) {
    *(undefined1 *)(param_1 + 0xa89) = 1;
  }
  return;
}



// FUNCTION 14111c710 FUN_14111c710 body=88 status=ok
// SIG undefined FUN_14111c710(void)

void FUN_14111c710(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)(param_1 + 0x6f2) = 1;
  if ((*(char *)(param_1 + 0x6f0) != '\0') && (*(char *)(param_1 + 0x6f1) != '\0')) {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x6d8);
    if (cVar2 != '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x6d8);
      FUN_140af3720(uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14111c770 FUN_14111c770 body=276 status=ok
// SIG undefined FUN_14111c770(void)

void FUN_14111c770(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined2 uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined6 uStack_66;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (pcVar6 = (char *)FUN_140a5dc70(lVar4), uVar3 = DAT_146297e30, *pcVar6 == '\0'))
    {
      if (*(longlong *)(param_1 + 0xb28) == 0) {
        return;
      }
      uVar1 = *(undefined4 *)(param_3 + 8);
      local_28 = 0;
      local_18 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_48);
      if (puVar7 != (undefined8 *)0x0) {
        local_78 = (undefined4)param_1;
        uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
        *(undefined4 *)(puVar7 + 1) = local_78;
        *(undefined4 *)((longlong)puVar7 + 0xc) = uStack_74;
        *(undefined4 *)(puVar7 + 2) = 1;
        *(undefined4 *)((longlong)puVar7 + 0x14) = uVar1;
        *puVar7 = &PTR_FUN_143f4d0b0;
        puVar7[3] = CONCAT62(uStack_66,uVar3);
      }
      local_58[0] = &LAB_1411076a0;
      FUN_14204c280(local_58);
      return;
    }
  }
  FUN_14112a5e0(param_1);
  return;
}



// FUNCTION 14111c890 FUN_14111c890 body=53 status=ok
// SIG undefined FUN_14111c890(void)

void FUN_14111c890(longlong param_1,undefined1 param_2)

{
  FUN_142ec6e40();
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_141095b50(*(longlong *)(param_1 + 0x1f0),param_2);
  }
  return;
}



// FUNCTION 14111c8d0 FUN_14111c8d0 body=97 status=ok
// SIG undefined FUN_14111c8d0(void)

void FUN_14111c8d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140baea50(lVar2,0);
      return;
    }
  }
  return;
}



// FUNCTION 14111c940 FUN_14111c940 body=77 status=ok
// SIG undefined FUN_14111c940(void)

void FUN_14111c940(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    FUN_1407665e0(param_2 + 0x550,param_1);
  }
  lVar1 = FUN_14110cfa0(param_1);
  if (lVar1 != 0) {
    FUN_142ee3cb0(lVar1);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x480,0);
  DAT_1462a0878 = 0;
  return;
}



// FUNCTION 14111c990 FUN_14111c990 body=80 status=ok
// SIG undefined FUN_14111c990(void)

void FUN_14111c990(undefined8 param_1)

{
  undefined8 *puVar1;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = FUN_141107450;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 14111c9e0 FUN_14111c9e0 body=341 status=ok
// SIG undefined FUN_14111c9e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14111c9e0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined8 local_2b0;
  undefined1 local_2a8 [272];
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined1 local_188 [272];
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  local_190 = param_1;
  FUN_140e9a4f0(local_188);
  FWeakObjectPtr::operator=(&local_2b8,param_1);
  local_2b0 = local_190;
  FUN_140e9a4f0(local_2a8,local_188);
  local_198 = local_2b8;
  local_194 = local_2b4;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x128,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446ba270;
    puVar1[1] = local_2b0;
    FUN_140e9a4f0(puVar1 + 2,local_2a8);
    *(undefined4 *)(puVar1 + 0x24) = local_198;
    *(undefined4 *)((longlong)puVar1 + 0x124) = local_194;
  }
  local_78[0] = &LAB_1411076f0;
  FUN_140e9c360(local_2a8);
  FUN_14208c260(param_1,local_78);
  if (local_38 != 0) {
    plVar2 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar2 = local_48;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_140e9c360(local_188);
  return;
}



// FUNCTION 14111cb40 FUN_14111cb40 body=52 status=ok
// SIG undefined FUN_14111cb40(void)

undefined4 FUN_14111cb40(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x974) != '\0') {
    *(undefined4 *)(param_1 + 0x970) = *(undefined4 *)(param_1 + 0x798);
    LOCK();
    uVar1 = *(undefined4 *)(param_1 + 0x588);
    *(undefined4 *)(param_1 + 0x588) = 1;
    UNLOCK();
    return uVar1;
  }
  *(undefined1 *)(param_1 + 0x974) = 1;
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 14111cb80 FUN_14111cb80 body=624 status=ok
// SIG undefined FUN_14111cb80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14111cb80(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined1 auStack_208 [32];
  undefined2 local_1e8;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  longlong *local_1b8;
  code *local_1a8 [2];
  undefined1 local_198 [32];
  undefined8 local_178;
  undefined4 local_168;
  undefined1 local_158 [16];
  longlong local_148 [4];
  longlong *local_128;
  int local_118;
  undefined1 local_108 [208];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_1d8 = 0xffffffff;
  uVar9 = 0xffffffff;
  if (param_1[0xf6] != 0) {
    FUN_14170c210(&local_1d8);
    uVar9 = local_1d8;
  }
  local_1d8 = 0xffffffff;
  local_178 = 0;
  local_168 = 0;
  local_1d4 = uVar9;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_198);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_1444f8758;
    *(undefined4 *)(puVar6 + 1) = uVar9;
    local_1d4 = 0xffffffff;
    uVar9 = 0xffffffff;
  }
  local_1d0 = 0;
  local_1a8[0] = FUN_141107260;
  local_1c8 = 0x3c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d0,0);
  local_1e8 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_1d0,0x3c,"UGFxLoadGameMenu::OnListSaveGamesComplete::GetTargetPCNetID");
  FUN_14106d6c0(local_108,&local_1d0,local_1a8);
  FUN_1416f8340(uVar9);
  FUN_1416f8340(local_1d8);
  uVar7 = FUN_1410817c0(local_108,local_158);
  FUN_142084370(param_1,uVar7);
  if (local_118 != 0) {
    plVar8 = local_148;
    if (local_128 != (longlong *)0x0) {
      plVar8 = local_128;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_141081b40(local_108,&local_1c0);
  if (local_1c0 != 0) {
    cVar5 = (*(code *)**(undefined8 **)*param_2)();
    if (cVar5 != '\0') {
      uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar8 = (longlong *)FUN_140d3a420(uVar7);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x188))(plVar8,param_1 + 0xdf);
        (**(code **)(*plVar8 + 0x1a8))(plVar8,param_1 + 0xde);
      }
      *(undefined1 *)(param_1 + 0xdd) = 1;
      if ((param_3 == '\0') ||
         ((*(char *)((longlong)param_1 + 0x63c) == '\0' && ((int)param_1[0xdb] == 0)))) {
        FUN_14112cdb0(param_1);
      }
      goto LAB_14111cd82;
    }
  }
  if (*(char *)((longlong)param_1 + 0x7c5) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x7c5) = 0;
    FUN_14112d8a0(param_1,param_1[0xf6]);
  }
LAB_14111cd82:
  plVar8 = local_1b8;
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1b8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_1b8)(local_1b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1b8 + 8))(local_1b8,1);
      }
    }
  }
  FUN_140ce1dc0(local_108);
  return;
}



// FUNCTION 14111cdf0 FUN_14111cdf0 body=1689 status=ok
// SIG undefined FUN_14111cdf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14111cdf0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  int iVar18;
  longlong *plVar19;
  int iVar20;
  undefined1 auStack_408 [32];
  int local_3e8;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined8 *local_3d0 [2];
  undefined8 local_3c0;
  undefined8 local_3b8;
  longlong local_3b0;
  longlong *local_3a8;
  longlong local_3a0;
  undefined4 local_390;
  undefined4 local_38c;
  longlong local_388 [5];
  undefined1 local_360 [16];
  undefined4 local_350;
  undefined1 local_348 [16];
  undefined4 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 local_314;
  undefined1 local_310 [24];
  undefined1 local_2f8 [24];
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined1 local_2d8 [16];
  undefined4 local_2c8;
  undefined1 local_2c0 [16];
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined1 local_2a0;
  undefined1 local_29f;
  undefined1 local_29e;
  undefined8 local_29c;
  undefined8 uStack_294;
  undefined8 local_28c;
  undefined8 uStack_284;
  undefined8 local_27c;
  undefined8 uStack_274;
  undefined1 local_26c;
  undefined1 local_26b;
  undefined1 local_26a;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 local_238 [72];
  longlong local_1f0;
  int local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  code *local_1b8 [2];
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined4 local_178;
  undefined1 local_168 [16];
  longlong local_158 [4];
  longlong *local_138;
  int local_128;
  undefined1 local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  iVar20 = 0;
  local_3d8 = 0;
  local_3d0[0] = param_3;
  local_3a0 = param_1;
  FWeakObjectPtr::operator=(&local_3d8,param_1);
  uVar9 = local_3d8;
  local_390 = local_3d8;
  local_38c = local_3d4;
  local_188 = 0;
  local_178 = 0;
  puVar10 = (undefined8 *)FUN_140438ef0(0x18,local_1a8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_FUN_1444f8920;
    puVar10[1] = param_1;
    *(undefined4 *)(puVar10 + 2) = uVar9;
    *(undefined4 *)((longlong)puVar10 + 0x14) = local_3d4;
  }
  local_3c0 = 0;
  local_1b8[0] = FUN_141107330;
  local_3b8 = 0x3b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c0,0);
  local_3e8 = CONCAT22(local_3e8._2_2_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_3c0,0x3b,"UGFxLoadGameMenu::OnListSaveGamesUpdated::GetTargetPCNetID");
  FUN_14106d6c0(local_118,&local_3c0,local_1b8);
  uVar11 = FUN_1410817c0(local_118,local_168);
  FUN_142084370(param_1,uVar11);
  if (local_128 != 0) {
    plVar19 = local_158;
    if (local_138 != (longlong *)0x0) {
      plVar19 = local_138;
    }
    if (plVar19 != (longlong *)0x0) {
      (**(code **)(*plVar19 + 0x10))(plVar19,0);
    }
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_141081b40(local_118,&local_3b0);
  if ((local_3b0 == 0) || (cVar5 = (*(code *)**(undefined8 **)*param_2)(), cVar5 == '\0'))
  goto LAB_14111d409;
  plVar19 = (longlong *)(param_1 + 0x6d0);
  iVar6 = *(int *)(param_1 + 0x6dc);
  plVar16 = (longlong *)*plVar19;
  iVar18 = *(int *)(param_1 + 0x6d8);
  if (iVar6 < 0) {
    if (iVar18 != 0) {
      do {
        FUN_1410fc740(plVar16 + 5);
        if (*plVar16 != 0) {
          FMemory::Free();
        }
        plVar16 = plVar16 + 0x39;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
      iVar6 = *(int *)(param_1 + 0x6dc);
    }
    *(undefined4 *)(param_1 + 0x6d8) = 0;
    if (iVar6 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<456,4>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(plVar19,0);
    }
  }
  else {
    for (; iVar18 != 0; iVar18 = iVar18 + -1) {
      FUN_1410fc740(plVar16 + 5);
      if (*plVar16 != 0) {
        FMemory::Free();
      }
      plVar16 = plVar16 + 0x39;
    }
    *(undefined4 *)(param_1 + 0x6d8) = 0;
  }
  FUN_14110cc30(param_1);
  puVar3 = (undefined4 *)*local_3d0[0];
  iVar6 = *(int *)(local_3d0[0] + 1);
  lVar12 = param_1;
  if (puVar3 != puVar3 + (longlong)iVar6 * 0x68) {
    puVar17 = puVar3 + 0x21;
    iVar18 = iVar20;
    do {
      iVar7 = FUN_140d4d650(puVar17 + -0x21);
      if (iVar7 == 0) {
LAB_14111d096:
        bVar4 = false;
      }
      else {
        iVar18 = 1;
        lVar12 = UKismetStringLibrary::Conv_IntToString(local_3d0,iVar7);
        iVar15 = 0;
        if (*(int *)(lVar12 + 8) != 0) {
          iVar15 = *(int *)(lVar12 + 8) + -1;
        }
        iVar8 = 0;
        if (puVar17[-0x1f] != 0) {
          iVar8 = puVar17[-0x1f] + -1;
        }
        if (iVar15 != iVar8) goto LAB_14111d096;
        bVar4 = true;
      }
      if ((iVar18 != 0) && (iVar18 = 0, local_3d0[0] != (undefined8 *)0x0)) {
        FMemory::Free();
      }
      if (bVar4) {
        uVar9 = FUN_140c10350(puVar17[-0x17]);
        local_3e8 = iVar7;
        FUN_1410fbe30(local_388,puVar17 + -0x21,uVar9,puVar17 + -0x15);
        FString::operator=(local_360,puVar17 + -0x21);
        local_350 = puVar17[-0x1d];
        FString::operator=(local_348,puVar17 + -0x1b);
        local_338 = puVar17[-0x17];
        local_330 = *(undefined8 *)(puVar17 + -0x15);
        local_328 = *(undefined8 *)(puVar17 + -0x13);
        local_320 = *(undefined8 *)(puVar17 + -0x11);
        local_318 = puVar17[-0xf];
        local_314 = puVar17[-0xe];
        FText::operator=(local_310,puVar17 + -0xd);
        FText::operator=(local_2f8,puVar17 + -7);
        local_2e0 = puVar17[-1];
        local_2dc = *puVar17;
        FString::operator=(local_2d8,puVar17 + 1);
        local_2c8 = puVar17[5];
        FString::operator=(local_2c0,puVar17 + 7);
        local_2b0 = puVar17[0xb];
        local_29c = *(undefined8 *)(puVar17 + 0x10);
        uStack_294 = *(undefined8 *)(puVar17 + 0x12);
        local_2ac = puVar17[0xc];
        local_28c = *(undefined8 *)(puVar17 + 0x14);
        uStack_284 = *(undefined8 *)(puVar17 + 0x16);
        local_2a8 = puVar17[0xd];
        local_2a4 = puVar17[0xe];
        local_2a0 = *(undefined1 *)(puVar17 + 0xf);
        local_29f = *(undefined1 *)((longlong)puVar17 + 0x3d);
        local_29e = *(undefined1 *)((longlong)puVar17 + 0x3e);
        local_27c = *(undefined8 *)(puVar17 + 0x18);
        uStack_274 = *(undefined8 *)(puVar17 + 0x1a);
        local_26c = *(undefined1 *)(puVar17 + 0x1c);
        local_26b = *(undefined1 *)((longlong)puVar17 + 0x71);
        local_268 = *(undefined8 *)(puVar17 + 0x1d);
        uStack_260 = *(undefined8 *)(puVar17 + 0x1f);
        local_26a = *(undefined1 *)((longlong)puVar17 + 0x72);
        local_258 = puVar17[0x21];
        uStack_254 = puVar17[0x22];
        uStack_250 = puVar17[0x23];
        uStack_24c = puVar17[0x24];
        local_248 = puVar17[0x25];
        uStack_244 = puVar17[0x26];
        uStack_240 = puVar17[0x27];
        uStack_23c = puVar17[0x28];
        FUN_14099b910(local_238,puVar17 + 0x29);
        if (&local_1f0 != (longlong *)(puVar17 + 0x3b)) {
          if (local_1e8 != 0) {
            plVar16 = (longlong *)(local_1f0 + 0x18);
            iVar7 = local_1e8;
            do {
              if (plVar16[5] != 0) {
                FMemory::Free();
              }
              if (*plVar16 != 0) {
                FMemory::Free();
              }
              plVar16 = plVar16 + 10;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          local_3e8 = 0;
          FUN_140998750(&local_1f0,*(undefined8 *)(puVar17 + 0x3b),puVar17[0x3d],local_1e4);
        }
        iVar7 = *(int *)(param_1 + 0x6d8);
        local_1e0 = puVar17[0x3f];
        uStack_1dc = puVar17[0x40];
        uStack_1d8 = puVar17[0x41];
        uStack_1d4 = puVar17[0x42];
        local_1d0 = puVar17[0x43];
        uStack_1cc = puVar17[0x44];
        uStack_1c8 = puVar17[0x45];
        uStack_1c4 = puVar17[0x46];
        *(int *)(param_1 + 0x6d8) = iVar7 + 1;
        if (*(int *)(param_1 + 0x6dc) < iVar7 + 1) {
          TArray<FPluginStatus,FDefaultAllocator>::ResizeGrow(plVar19,iVar7);
        }
        FUN_1410fbc10((longlong)iVar7 * 0x1c8 + *plVar19,local_388);
        FUN_1410fc740(local_360);
        if (local_388[0] != 0) {
          FMemory::Free();
        }
      }
      puVar2 = puVar17 + 0x47;
      puVar17 = puVar17 + 0x68;
      lVar12 = local_3a0;
    } while (puVar2 != puVar3 + (longlong)iVar6 * 0x68);
  }
  if (*(char *)(lVar12 + 0x6e8) == '\0') {
    if (0 < *(int *)(lVar12 + 0x6d8)) {
      *(undefined1 *)(lVar12 + 0x6e8) = 1;
    }
    FUN_14112cdb0(lVar12);
    goto LAB_14111d409;
  }
  lVar13 = *(longlong *)(lVar12 + 0x788);
  if (lVar13 == 0) {
LAB_14111d3d7:
    uVar9 = 0xffffffff;
  }
  else {
    if (0 < *(int *)(lVar12 + 0x6d8)) {
      do {
        lVar13 = FUN_142eb6a30(*(undefined8 *)(lVar12 + 0x788),iVar20);
        if (lVar13 != 0) {
          lVar14 = UXGameInstance::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            FUN_141110fc0(lVar12,lVar13,(longlong)iVar20 * 0x1c8 + *plVar19);
          }
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < *(int *)(lVar12 + 0x6d8));
      lVar13 = *(longlong *)(lVar12 + 0x788);
    }
    if (lVar13 == 0) goto LAB_14111d3d7;
    uVar9 = FUN_142eb7a00();
  }
  FUN_141139440(lVar12,uVar9);
  FUN_141139c60(lVar12,uVar9,0);
  LOCK();
  *(undefined4 *)(lVar12 + 0x588) = 1;
  UNLOCK();
LAB_14111d409:
  plVar19 = local_3a8;
  if (local_3a8 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_3a8 + 1;
    lVar12 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_3a8)(local_3a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      iVar20 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*local_3a8 + 8))(local_3a8,1);
      }
    }
  }
  FUN_140ce1dc0(local_118);
  return;
}



// FUNCTION 14111d490 FUN_14111d490 body=529 status=ok
// SIG undefined FUN_14111d490(void)

void FUN_14111d490(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  lVar12 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar12 != 0) {
    lVar13 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      cVar11 = FUN_140bca890(lVar12);
      if (cVar11 != '\0') {
        uVar14 = FWeakObjectPtr::Get(param_1 + 0x58c);
        FUN_140bed6a0(lVar12,uVar14);
        return;
      }
    }
  }
  uVar14 = param_3[3];
  plVar7 = (longlong *)param_3[4];
  uVar4 = *(undefined1 *)((longlong)param_3 + 0xc);
  uVar8 = param_3[2];
  uVar9 = *param_3;
  uVar6 = *(undefined4 *)(param_3 + 1);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  uVar5 = *(undefined1 *)(param_3 + 5);
  local_48 = 0;
  local_38 = 0;
  puVar15 = (undefined8 *)FUN_140438ef0(0x40,local_68);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_14468e9c8;
    puVar15[1] = param_1;
    puVar15[2] = uVar9;
    *(undefined4 *)(puVar15 + 3) = uVar6;
    *(undefined1 *)((longlong)puVar15 + 0x1c) = uVar4;
    puVar15[4] = uVar8;
    puVar15[5] = uVar14;
    puVar15[6] = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *(undefined1 *)(puVar15 + 7) = uVar5;
  }
  local_78[0] = &LAB_141107220;
  FUN_14204c280(local_78);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 14111d6d0 FUN_14111d6d0 body=27 status=ok
// SIG undefined FUN_14111d6d0(void)

void FUN_14111d6d0(undefined8 param_1)

{
  FUN_141138900();
  FUN_141137ed0(param_1);
  return;
}



// FUNCTION 14111d700 FUN_14111d700 body=376 status=ok
// SIG undefined FUN_14111d700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14111d700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_142ed36d0(0,&local_c8,0);
  FUN_142ed1500(param_1);
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3f130;
  }
  local_b8[0] = &LAB_1411073f0;
  FUN_141107840(param_1,local_b8);
  if (local_78 != 0) {
    plVar2 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar2 = local_88;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_3;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_141107240;
  FUN_141107840(param_1,local_68);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14111d880 FUN_14111d880 body=182 status=ok
// SIG undefined FUN_14111d880(void)

void FUN_14111d880(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  FUN_141138360();
  if (*(longlong *)(param_1 + 0x980) != 0) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x980) + 0x170);
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2 ^ 1);
  }
  lVar1 = *(longlong *)(param_1 + 0x988);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x6f8) != 0) {
      plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x6f8) + 0x170);
      (**(code **)(*plVar2 + 0x38))(plVar2,param_2 ^ 1);
    }
    if (*(longlong *)(lVar1 + 0x5b0) != 0) {
      *(byte *)(*(longlong *)(lVar1 + 0x5b0) + 0xa3) = param_2;
    }
  }
  plVar2 = *(longlong **)(param_1 + 0xa98);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x278))(plVar2,param_2);
  }
  return;
}



// FUNCTION 14111d940 FUN_14111d940 body=195 status=ok
// SIG undefined FUN_14111d940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14111d940(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_141107640;
  FUN_141107840(param_1,local_68);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14111da10 FUN_14111da10 body=21 status=ok
// SIG undefined FUN_14111da10(void)

void FUN_14111da10(longlong *param_1)

{
  LOCK();
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00014111da1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x568))();
  return;
}



// FUNCTION 14111da30 FUN_14111da30 body=118 status=ok
// SIG undefined FUN_14111da30(void)

void FUN_14111da30(longlong param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = *(byte *)(param_1 + 0x5c8);
  if ((bVar1 & 2) == 0) {
    return;
  }
  cVar2 = '\0';
  if (((bVar1 & 4) == 0) && (param_3 != 0)) {
    cVar2 = '\x01';
    *(byte *)(param_1 + 0x5c8) = bVar1 | 4;
  }
  FUN_1411088c0(param_1,cVar2);
  if (cVar2 != '\0') {
    TBaseMulticastDelegate<void,float>::Broadcast(param_1 + 0x490,0);
    return;
  }
  TBaseMulticastDelegate<void,float>::Broadcast(param_1 + 0x490,0xbf800000);
  return;
}



// FUNCTION 14111dab0 FUN_14111dab0 body=315 status=ok
// SIG undefined FUN_14111dab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14111dab0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined2 uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined6 uStack_66;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (pcVar6 = (char *)FUN_140a5dc70(lVar4), uVar3 = _DAT_146297e38, *pcVar6 == '\0'))
    {
      if (*(longlong *)(param_1 + 0xb28) == 0) {
        return;
      }
      uVar1 = *(undefined4 *)(param_3 + 8);
      local_28 = 0;
      local_18 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_48);
      if (puVar7 != (undefined8 *)0x0) {
        local_78 = (undefined4)param_1;
        uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
        *(undefined4 *)(puVar7 + 1) = local_78;
        *(undefined4 *)((longlong)puVar7 + 0xc) = uStack_74;
        *(undefined4 *)(puVar7 + 2) = 3;
        *(undefined4 *)((longlong)puVar7 + 0x14) = uVar1;
        *puVar7 = &PTR_FUN_143f4d0b0;
        puVar7[3] = CONCAT62(uStack_66,uVar3);
      }
      local_58[0] = &LAB_1411076a0;
      FUN_14204c280(local_58);
      return;
    }
  }
  uVar1 = *(undefined4 *)(param_3 + 8);
  puVar7 = (undefined8 *)FName::FName(local_res8,L"Matchmaking",1);
  FUN_14112a420(param_1,*puVar7,uVar1);
  return;
}



// FUNCTION 14111dbf0 FUN_14111dbf0 body=99 status=ok
// SIG undefined FUN_14111dbf0(void)

void FUN_14111dbf0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  FUN_142ec7200();
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (((cVar2 != '\0') &&
      (lVar1 = FWeakObjectPtr::Get(param_1 + 0xc4), *(char *)(lVar1 + 0xb8) == '\x02')) &&
     (lVar1 = FWeakObjectPtr::Get(param_1 + 0xc4), *(char *)(lVar1 + 0xb9) != '\0')) {
    return;
  }
  FUN_14110c8f0(param_1 + -0x4d8);
  return;
}



// FUNCTION 14111dc60 FUN_14111dc60 body=177 status=ok
// SIG undefined FUN_14111dc60(void)

void FUN_14111dc60(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142ec6f90();
  *(undefined1 *)(param_1 + 0x2ec) = 0;
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = FUN_14141f270();
  iVar2 = *(int *)(lVar4 + 0x90);
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar2) ||
     (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar2 * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  FUN_140beb060(lVar3,CONCAT71((int7)(int3)((uint)iVar2 >> 8),4));
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_142eb7a00();
    if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x200))) {
      bVar1 = true;
      goto LAB_14111dcf1;
    }
  }
  bVar1 = false;
LAB_14111dcf1:
  if (bVar1) {
    FUN_141139c60(param_1 + -0x4d8,iVar2,0);
  }
  return;
}



// FUNCTION 14111dd20 FUN_14111dd20 body=331 status=ok
// SIG undefined FUN_14111dd20(void)

void FUN_14111dd20(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ec6f90();
  if (*(longlong *)(param_1 + 0x610) != 0) {
    FUN_140d97f70();
  }
  plVar1 = (longlong *)(param_1 + -0x4d8);
  (**(code **)(*plVar1 + 0x568))(plVar1);
  lVar4 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140bdb6e0(lVar4);
      FUN_140beb060(lVar4,0);
      if (*(char *)(lVar4 + 0x13a0) != '\0') {
        *(undefined1 *)(lVar4 + 0x13a0) = 0;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FUN_141131d10(*(longlong *)(param_1 + 0x4b0),1);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x4b0) + 0x6c8);
    if (lVar4 != 0) {
      cVar3 = FUN_141087490(lVar4 + 0x170);
      if (cVar3 != '\0') goto LAB_14111de33;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x4a8);
  local_18 = lVar4;
  if (lVar4 == 0) {
    local_10 = 0;
  }
  else {
    uVar6 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar6);
  }
  FUN_142ed36d0(plVar1,&local_18,0);
LAB_14111de33:
  FUN_141138900(plVar1);
  FUN_141136a00(plVar1);
  if (DAT_146875684 == '\0') {
    FUN_14112a890(plVar1);
    DAT_146875684 = '\x01';
  }
  return;
}



// FUNCTION 14111de70 FUN_14111de70 body=173 status=ok
// SIG undefined FUN_14111de70(void)

void FUN_14111de70(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_38 [48];
  
  uVar2 = TSoftObjectPtr<UTexture2D>::TSoftObjectPtr<UTexture2D>(local_38,param_1 + 0x2f0);
  uVar3 = (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))(param_1 + -0x4d8);
  FUN_1405e5cb0(uVar3,uVar2,0);
  lVar4 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140bc99c0(lVar4);
    }
  }
  FUN_142ec7390(param_1);
  return;
}



// FUNCTION 14111df20 FUN_14111df20 body=39 status=ok
// SIG undefined FUN_14111df20(void)

void FUN_14111df20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x610) != 0) {
    FUN_140d924b0();
  }
  FUN_142ec7390(param_1);
  return;
}



// FUNCTION 14111df50 FUN_14111df50 body=132 status=ok
// SIG undefined FUN_14111df50(void)

void FUN_14111df50(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x1d0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x288))();
  }
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14145ff60(lVar2,0);
    }
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 14111dfe0 FUN_14111dfe0 body=204 status=ok
// SIG undefined FUN_14111dfe0(void)

void FUN_14111dfe0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  code *local_58 [6];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14145ff60(lVar2,0);
    }
  }
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x478) + 0xe8,param_1 + -0x4d8);
    local_58[0] = AK::MemoryMgr::StartProfileThreadUsage;
    local_28 = 0;
    local_18 = 0;
    FUN_1411f67c0(*(undefined8 *)(param_1 + 0x478),local_58);
    *(undefined8 *)(param_1 + 0x478) = 0;
  }
  FUN_140ee38f0(param_1 + 0x2c8);
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 14111e0b0 FUN_14111e0b0 body=88 status=ok
// SIG undefined FUN_14111e0b0(void)

void FUN_14111e0b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0xc4);
    FUN_1407665e0(lVar1 + 0x138,param_1 + -0x4d8);
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 14111e110 FUN_14111e110 body=343 status=ok
// SIG undefined FUN_14111e110(void)

void FUN_14111e110(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))();
  plVar2 = (longlong *)FUN_140d3a420(lVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x1a8))(plVar2,param_1 + 0x218);
    (**(code **)(*plVar2 + 0x188))(plVar2,param_1 + 0x220);
    (**(code **)(*plVar2 + 0x128))(plVar2,param_1 + 0x238);
    (**(code **)(*plVar2 + 0x108))(plVar2,param_1 + 0x250);
  }
  if ((lVar1 != 0) && (lVar1 = UWorld::GetGameState<APVPGameState>(lVar1), lVar1 != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x260);
    iVar5 = 0;
    if (0 < *(int *)(lVar1 + 0x628)) {
      lVar6 = 0;
      do {
        plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x620) + lVar6);
        if ((((int)plVar2[1] != 0) && (plVar3 = (longlong *)*plVar2, plVar3 != (longlong *)0x0)) &&
           (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8), *plVar3 == lVar4)
           ) {
          if (((int)plVar2[1] != 0) && (plVar3 = (longlong *)*plVar2, plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x28))(plVar3,0);
            if (*plVar2 != 0) {
              lVar4 = FMemory::Realloc(*plVar2,0,0);
              *plVar2 = lVar4;
            }
            *(undefined4 *)(plVar2 + 1) = 0;
          }
          break;
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x10;
      } while (iVar5 < *(int *)(lVar1 + 0x628));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar1 + 0x620),0);
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 14111e270 FUN_14111e270 body=120 status=ok
// SIG undefined FUN_14111e270(void)

void FUN_14111e270(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x4a8);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 14111e2f0 FUN_14111e2f0 body=152 status=ok
// SIG undefined FUN_14111e2f0(void)

void FUN_14111e2f0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar2 != '\0') {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar4 = FUN_140ec9a00(uVar3);
    if (lVar4 != 0) {
      plVar1 = *(longlong **)(lVar4 + 0x6c8);
      *(undefined1 *)(lVar4 + 0x709) = 1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,1);
      }
      plVar1 = *(longlong **)(lVar4 + 0x6f0);
      *(undefined1 *)(lVar4 + 0x70a) = 1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,1);
      }
    }
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 14111e390 FUN_14111e390 body=94 status=ok
// SIG undefined FUN_14111e390(void)

void FUN_14111e390(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77b70;
    puVar1[1] = param_1 + -0x4d8;
  }
  local_58[0] = &LAB_141107830;
  FUN_14204c280(local_58);
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 14111e3f0 FUN_14111e3f0 body=1318 status=ok
// SIG undefined FUN_14111e3f0(void)

void FUN_14111e3f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  uVar12 = 0;
  if ((cVar4 != '\0') && (*(longlong *)(param_1 + 0x4b0) != 0)) {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0xc4);
    FUN_142f06bc0(uVar5,*(undefined8 *)(param_1 + 0x4b0));
    *(undefined8 *)(param_1 + 0x4b0) = 0;
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar6 != 0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      TBaseMulticastDelegate<void>::Remove(lVar6 + 0x9a0,*(undefined8 *)(param_1 + 0x5e8));
      TBaseMulticastDelegate<void>::Remove(lVar6 + 0xa08,*(undefined8 *)(param_1 + 0x5d8));
      TBaseMulticastDelegate<void>::Remove(lVar6 + 0xa20,*(undefined8 *)(param_1 + 0x5e0));
      lVar7 = *(longlong *)(param_1 + 0x628);
      uVar11 = uVar12;
      uVar14 = uVar12;
      if (0 < *(int *)(lVar6 + 0xcc0)) {
        do {
          plVar13 = (longlong *)(*(longlong *)(lVar6 + 0xcb8) + uVar14);
          if ((((int)plVar13[1] != 0) && (plVar8 = (longlong *)*plVar13, plVar8 != (longlong *)0x0))
             && (plVar8 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,local_res10),
                *plVar8 == lVar7)) {
            if (((int)plVar13[1] != 0) && (plVar8 = (longlong *)*plVar13, plVar8 != (longlong *)0x0)
               ) {
              (**(code **)(*plVar8 + 0x28))(plVar8,0);
              if (*plVar13 != 0) {
                lVar7 = FMemory::Realloc(*plVar13,0,0);
                *plVar13 = lVar7;
              }
              *(undefined4 *)(plVar13 + 1) = 0;
            }
            break;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          uVar14 = uVar14 + 0x10;
        } while ((int)uVar10 < *(int *)(lVar6 + 0xcc0));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar6 + 0xcb8,0);
      TBaseMulticastDelegate<void>::Remove(lVar6 + 0xce8,*(undefined8 *)(param_1 + 0x630));
      lVar7 = *(longlong *)(param_1 + 0x620);
      plVar13 = (longlong *)FUN_140bb74b0(lVar6);
      uVar11 = uVar12;
      uVar14 = uVar12;
      if (0 < (int)plVar13[1]) {
        do {
          plVar8 = (longlong *)(*plVar13 + uVar14);
          if ((((int)plVar8[1] != 0) && (plVar9 = (longlong *)*plVar8, plVar9 != (longlong *)0x0))
             && (plVar9 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,local_res18),
                *plVar9 == lVar7)) {
            if (((int)plVar8[1] != 0) && (plVar9 = (longlong *)*plVar8, plVar9 != (longlong *)0x0))
            {
              (**(code **)(*plVar9 + 0x28))(plVar9,0);
              if (*plVar8 != 0) {
                lVar7 = FMemory::Realloc(*plVar8,0,0);
                *plVar8 = lVar7;
              }
              *(undefined4 *)(plVar8 + 1) = 0;
            }
            break;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          uVar14 = uVar14 + 0x10;
        } while ((int)uVar10 < (int)plVar13[1]);
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar13,0);
      lVar7 = FUN_140bb7440(lVar6);
      TBaseMulticastDelegate<void>::Remove(lVar7 + 0xc0,*(undefined8 *)(param_1 + 0x600));
      lVar7 = *(longlong *)(param_1 + 0x608);
      uVar11 = uVar12;
      if (0 < *(int *)(lVar6 + 0xc88)) {
        do {
          plVar13 = (longlong *)(*(longlong *)(lVar6 + 0xc80) + uVar11);
          if ((((int)plVar13[1] != 0) && (plVar8 = (longlong *)*plVar13, plVar8 != (longlong *)0x0))
             && (plVar8 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,local_res20),
                *plVar8 == lVar7)) {
            if (((int)plVar13[1] != 0) && (plVar8 = (longlong *)*plVar13, plVar8 != (longlong *)0x0)
               ) {
              (**(code **)(*plVar8 + 0x28))(plVar8,0);
              if (*plVar13 != 0) {
                lVar7 = FMemory::Realloc(*plVar13,0,0);
                *plVar13 = lVar7;
              }
              *(undefined4 *)(plVar13 + 1) = 0;
            }
            break;
          }
          uVar10 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar10;
          uVar11 = uVar11 + 0x10;
        } while ((int)uVar10 < *(int *)(lVar6 + 0xc88));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar6 + 0xc80,0);
      FUN_140483870(lVar6 + 0xc18,param_1 + -0x4d8);
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(lVar6 + 0x478) + 0x1e0,*(undefined8 *)(param_1 + 0x5c8));
      lVar7 = FUN_140bba5e0(lVar6);
      if (lVar7 != 0) {
        TBaseMulticastDelegate<void>::Remove(lVar7 + 0xf8,*(undefined8 *)(param_1 + 0x638));
      }
      lVar6 = UGameInstance::GetGameViewportClient(lVar6);
      if (lVar6 != 0) {
        TBaseMulticastDelegate<void>::Remove(lVar6 + 0x228,*(undefined8 *)(param_1 + 0x5f0));
        TBaseMulticastDelegate<void>::Remove(lVar6 + 0x240,*(undefined8 *)(param_1 + 0x5f8));
      }
    }
  }
  FUN_1404cf2e0(&local_58,0);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x120))(local_58,param_1 + 0x640);
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  if (*(longlong *)(param_1 + 0x5d0) != 0) {
    uVar5 = (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))();
    plVar13 = (longlong *)FUN_140d3a420(uVar5);
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x148))(plVar13,(longlong *)(param_1 + 0x5d0));
    }
  }
  local_60 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x610) != &local_68) {
    *(undefined8 *)(param_1 + 0x610) = 0;
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x618,&local_60);
    plVar13 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_60 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x5b8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x5bc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x5b0,0);
  }
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x3b8) + 0xc0) = 0;
  }
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  plVar13 = *(longlong **)(param_1 + 0x4a8);
  if (plVar13 != (longlong *)0x0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar13 + 0x288))(plVar13);
    }
  }
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  FUN_142ec75f0(param_1);
  plVar13 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_50 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 14111e920 FUN_14111e920 body=643 status=ok
// SIG undefined FUN_14111e920(void)

void FUN_14111e920(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong local_68 [2];
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_140eb0dd0(param_1 + 0x230);
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140d1b4d0(lVar3);
    }
  }
  if (*(longlong *)(param_1 + -0x220) != 0) {
    local_68[0] = 0;
    local_68[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
    FGenericPlatformString::Memcpy(local_68[0],L"hide",10);
    FUN_142088910(*(undefined8 *)(param_1 + -0x220),local_68);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  lVar3 = param_1 + -0x4d8;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x2ac);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x2ac);
    FUN_1407665e0(lVar4 + 0x2d8,lVar3);
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x2ac);
    FUN_1407665e0(lVar4 + 0x2e8,lVar3);
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x2ac);
    FUN_1407665e0(lVar4 + 0x2f8,lVar3);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x2a4);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x2a4);
    FUN_1407665e0(lVar4 + 0x2d8,lVar3);
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x2a4);
    FUN_1407665e0(lVar4 + 0x2e8,lVar3);
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x2a4);
    FUN_1407665e0(lVar4 + 0x2f8,lVar3);
  }
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FUN_1411eff10();
    local_28 = 0;
    local_18 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f3f130;
    }
    local_58[0] = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_1411f67c0(*(undefined8 *)(param_1 + 0x2b8),local_58);
    FUN_1411f8450(*(undefined8 *)(param_1 + 0x2b8));
    FUN_1407665e0(*(longlong *)(param_1 + 0x2b8) + 0xe8,lVar3);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
  }
  FUN_141033a10(param_1 + 0x348);
  FUN_140ee4200(param_1 + 0x3f8,0);
  FUN_141033a10(param_1 + 0x418);
  FUN_140ee4200(param_1 + 0x4c8,0);
  FUN_141033a10(param_1 + 0x4e8);
  FUN_140ee4200(param_1 + 0x598,0);
  FUN_140eb7180(param_1);
  return;
}



// FUNCTION 14111ebb0 FUN_14111ebb0 body=727 status=ok
// SIG undefined FUN_14111ebb0(void)

void FUN_14111ebb0(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  plVar2 = *(longlong **)(param_1 + 0x208);
  if (plVar2 != (longlong *)0x0) {
    lVar5 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar2 + 0x288))(plVar2);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (plVar2 != (longlong *)0x0) {
    lVar5 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar2 + 0x288))(plVar2);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x210) = 0;
  if (plVar2 != (longlong *)0x0) {
    lVar5 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar2 + 0x288))(plVar2);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  if (plVar2 != (longlong *)0x0) {
    lVar5 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar2 + 0x288))(plVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xbc);
  if (lVar5 != 0) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar5 = (**(code **)(*(longlong *)(lVar5 + 0xd80) + 0x18))();
      if (lVar5 != 0) {
        FUN_1407665e0(lVar5 + 0x318,param_1 + -0x4d8);
      }
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0x200);
  cVar4 = FWeakObjectPtr::IsValid(puVar1);
  if (cVar4 != '\0') {
    lVar5 = FWeakObjectPtr::Get(puVar1);
    FUN_140483870(lVar5 + 0x508,param_1 + -0x4d8);
    lVar5 = FWeakObjectPtr::Get(puVar1);
    FUN_140483870(lVar5 + 0x520,param_1 + -0x4d8);
    lVar5 = FWeakObjectPtr::Get(puVar1);
    FUN_140483870(lVar5 + 0x4f0,param_1 + -0x4d8);
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_14145ff60(lVar5,0);
    }
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  *puVar1 = local_res8;
  *(undefined4 *)(param_1 + 0x204) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x1f8) = local_res8;
  *(undefined4 *)(param_1 + 0x1fc) = local_resc;
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 14111ee90 FUN_14111ee90 body=273 status=ok
// SIG undefined FUN_14111ee90(void)

void FUN_14111ee90(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res10;
  undefined1 local_28 [8];
  longlong local_20;
  
  FUN_142ec85a0();
  *(uint *)(param_1 + -0x498) = *(uint *)(param_1 + -0x498) | 0x100;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar3 != '\0') {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMenuStackChanged",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res10,pwVar2 + 2,1);
    lVar5 = FWeakObjectPtr::Get(param_1 + 0xc4);
    FWeakObjectPtr::operator=(local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(local_28,param_1 + -0x4d8);
    local_20 = local_res10;
    if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(local_28), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_20);
    }
    FUN_1406a5aa0(lVar5 + 0x138,local_28);
  }
  return;
}



// FUNCTION 14111efb0 FUN_14111efb0 body=76 status=ok
// SIG undefined FUN_14111efb0(void)

void FUN_14111efb0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  FUN_142ec85a0();
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar3 = FUN_140ec9a00(uVar1);
    if (lVar3 != 0) {
      FUN_141131d10(lVar3,3);
      return;
    }
  }
  return;
}



// FUNCTION 14111f000 FUN_14111f000 body=3749 status=ok
// SIG undefined FUN_14111f000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14111f000(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  longlong local_298;
  int local_290;
  longlong local_288;
  int local_280;
  undefined8 local_278;
  undefined8 local_270;
  longlong *local_268;
  longlong *local_260;
  undefined8 local_258;
  undefined8 local_250;
  longlong *plStack_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  longlong *local_220;
  longlong *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  longlong *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  longlong *local_138;
  longlong *local_128;
  longlong *local_118;
  longlong *local_108;
  undefined1 local_f8 [32];
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  plVar12 = (longlong *)0x0;
  local_2b8 = (code *)((ulonglong)local_2b8 & 0xffffffff00000000);
  FUN_142ec85a0();
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  lVar14 = param_1 + -0x4d8;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = lVar14;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_d8[0] = &LAB_141107400;
  uVar5 = FUN_1420849a0(lVar14,local_88,local_d8);
  FUN_14208c260(lVar14,uVar5);
  if (local_48 != 0) {
    plVar7 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar7 = local_58;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar7 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar7 = local_a8;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar4 = (undefined8 *)FName::FName(local_1d8,L"AssetRegistry",1);
  uVar5 = *puVar4;
  uVar6 = FUN_14168dc80();
  plVar7 = (longlong *)FUN_141690010(uVar6,uVar5);
  local_278 = 0;
  local_270 = 0;
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x48))(plVar7);
  lVar8 = UPawnAction_Sequence::StaticClass();
  (**(code **)(*plVar7 + 0x28))(plVar7,*(undefined8 *)(lVar8 + 0x18),&local_278,1);
  if (0 < (int)local_270) {
    plVar7 = (longlong *)FAssetData::GetAsset(local_278);
    if (plVar7 == (longlong *)0x0) {
LAB_14111f1e1:
      plVar7 = plVar12;
    }
    else {
      lVar8 = UPawnAction_Sequence::StaticClass();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      if (!bVar16) goto LAB_14111f1e1;
    }
    if (plVar7 == (longlong *)0x0) {
      *(undefined4 *)(param_1 + 0x360) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x364) = 0;
      *(undefined8 *)(param_1 + 0x370) = 0;
      local_2b8 = (code *)0x0;
      *(undefined4 *)(param_1 + 0x380) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 900)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x378,0);
      }
      if (*(undefined2 **)(param_1 + 0x378) != (undefined2 *)0x0) {
        **(undefined2 **)(param_1 + 0x378) = 0;
      }
      *(undefined4 *)(param_1 + 0x368) = 0;
    }
    else {
      uVar5 = FSoftObjectPath::FSoftObjectPath(local_f8,plVar7);
      FSoftObjectPath::operator=(param_1 + 0x370,uVar5);
      FWeakObjectPtr::operator=((undefined4 *)(param_1 + 0x360),plVar7);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x368) = DAT_1464b56f4;
    }
  }
  FUN_1404be960(&local_278);
  lVar8 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar8 != 0) {
    lVar9 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (bVar16) {
      cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xb4);
      bVar16 = cVar2 == '\0';
      if (bVar16) {
        puVar4 = &local_250;
        local_250 = 0;
        plStack_248 = (longlong *)0x0;
        local_2a8 = plVar12;
      }
      else {
        uVar5 = FWeakObjectPtr::Get(param_1 + 0xb4);
        puVar4 = (undefined8 *)FUN_142dcf3a0(uVar5,local_188);
        local_2a8 = (longlong *)*puVar4;
      }
      uStack_2a0 = (longlong *)puVar4[1];
      puVar4[1] = 0;
      *puVar4 = 0;
      plVar7 = plStack_248;
      if ((bVar16) && (plStack_248 != (longlong *)0x0)) {
        LOCK();
        plVar10 = plStack_248 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_248)(plStack_248);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plStack_248 + 8))(plStack_248,1);
          }
        }
      }
      if ((!bVar16) && (local_180 != (longlong *)0x0)) {
        LOCK();
        plVar7 = local_180 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar1 = (int *)((longlong)local_180 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_180 + 8))(local_180,1);
          }
        }
      }
      if (local_2a8 != (longlong *)0x0) {
        local_1f8 = (undefined4)local_2a8;
        uStack_1f4 = local_2a8._4_4_;
        uStack_1f0 = (undefined4)uStack_2a0;
        uStack_1ec = uStack_2a0._4_4_;
        if (uStack_2a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(uStack_2a0 + 1) = (int)uStack_2a0[1] + 1;
          UNLOCK();
        }
        uVar5 = FUN_140bb74b0(lVar8);
        FUN_140d80f80(uVar5,&local_1f8,param_1 + 0x4d0,0);
        plVar7 = (longlong *)CONCAT44(uStack_1ec,uStack_1f0);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar7 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        lVar9 = operator_new(0x30);
        if (lVar9 == 0) {
          local_2b8 = (code *)((ulonglong)local_2b8 & 0xffffffff00000000);
          plVar7 = plVar12;
        }
        else {
          local_1e8 = (undefined4)local_2a8;
          uStack_1e4 = local_2a8._4_4_;
          uStack_1e0 = (undefined4)uStack_2a0;
          uStack_1dc = uStack_2a0._4_4_;
          if (uStack_2a0 != (longlong *)0x0) {
            LOCK();
            *(int *)(uStack_2a0 + 1) = (int)uStack_2a0[1] + 1;
            UNLOCK();
          }
          plVar7 = (longlong *)FUN_140d646b0(lVar9,lVar8,&local_1e8);
          local_2b8 = (code *)CONCAT44(local_2b8._4_4_,4);
        }
        plVar10 = (longlong *)operator_new(0x18);
        if (plVar10 != (longlong *)0x0) {
          *(undefined4 *)(plVar10 + 1) = 1;
          *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
          *plVar10 = (longlong)&PTR_FUN_1446487c8;
          plVar10[2] = (longlong)plVar7;
          plVar12 = plVar10;
        }
        local_268 = plVar7;
        local_260 = plVar12;
        SharedPointerInternals::EnableSharedFromThis(&local_268,plVar7,plVar7);
        if ((longlong **)(param_1 + 0x610) != &local_268) {
          *(longlong **)(param_1 + 0x610) = plVar7;
          local_268 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x618,&local_260);
          plVar12 = local_260;
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar12 + 1;
          lVar9 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        if (((int)local_2b8 != 0) &&
           (plVar12 = (longlong *)CONCAT44(uStack_1dc,uStack_1e0), plVar12 != (longlong *)0x0)) {
          LOCK();
          plVar7 = plVar12 + 1;
          lVar9 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
      }
      lVar9 = UGameInstance::GetGameViewportClient(lVar8);
      if (lVar9 != 0) {
        uStack_2b0 = 0;
        local_2b8 = FUN_14111da10;
        plVar12 = (longlong *)(lVar9 + 0x228);
        local_2c8 = (code *)lVar9;
        plVar7 = (longlong *)FMemory::Realloc(0,0x30);
        local_148 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = (longlong)&PTR_FUN_1444f8638;
          FWeakObjectPtr::operator=(plVar7 + 1,lVar14);
          *(int *)(plVar7 + 2) = (int)local_2b8;
          *(undefined4 *)((longlong)plVar7 + 0x14) = local_2b8._4_4_;
          *(undefined4 *)(plVar7 + 3) = uStack_2b0;
          *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2ac;
          lVar11 = FDelegateHandle::GenerateNewID();
          plVar7[5] = lVar11;
          *plVar7 = (longlong)&PTR_FUN_1444f8680;
        }
        uVar5 = 0;
        if (plVar7 != (longlong *)0x0) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar12,1);
          puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_1d0);
          iVar15 = *(int *)(lVar9 + 0x230);
          local_2b8 = (code *)CONCAT44(local_2b8._4_4_,iVar15);
          uVar5 = *puVar4;
          *(int *)(lVar9 + 0x230) = iVar15 + 1;
          if (*(int *)(lVar9 + 0x234) < iVar15 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar15);
            iVar15 = (int)local_2b8;
          }
          puVar4 = (undefined8 *)((longlong)iVar15 * 0x10 + *plVar12);
          *puVar4 = plVar7;
          *(undefined4 *)(puVar4 + 1) = 3;
        }
        lVar9 = (longlong)local_2c8;
        *(undefined8 *)(param_1 + 0x5f0) = uVar5;
        local_2b8 = FUN_140f2ce70;
        uStack_2b0 = 0;
        plVar7 = (longlong *)((longlong)local_2c8 + 0x240);
        plVar12 = (longlong *)FMemory::Realloc(0,0x30);
        local_138 = plVar12;
        if (plVar12 != (longlong *)0x0) {
          *plVar12 = (longlong)&PTR_FUN_1444f8638;
          FWeakObjectPtr::operator=(plVar12 + 1,lVar14);
          *(int *)(plVar12 + 2) = (int)local_2b8;
          *(undefined4 *)((longlong)plVar12 + 0x14) = local_2b8._4_4_;
          *(undefined4 *)(plVar12 + 3) = uStack_2b0;
          *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_2ac;
          lVar11 = FDelegateHandle::GenerateNewID();
          plVar12[5] = lVar11;
          *plVar12 = (longlong)&PTR_FUN_1444f8680;
        }
        uVar5 = 0;
        if (plVar12 != (longlong *)0x0) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
          puVar4 = (undefined8 *)(**(code **)(*plVar12 + 0x20))(plVar12,local_1c8);
          iVar15 = *(int *)(lVar9 + 0x248);
          local_2b8 = (code *)CONCAT44(local_2b8._4_4_,iVar15);
          uVar5 = *puVar4;
          *(int *)(lVar9 + 0x248) = iVar15 + 1;
          if (*(int *)(lVar9 + 0x24c) < iVar15 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar15);
            iVar15 = (int)local_2b8;
          }
          puVar4 = (undefined8 *)((longlong)iVar15 * 0x10 + *plVar7);
          *puVar4 = plVar12;
          *(undefined4 *)(puVar4 + 1) = 3;
        }
        *(undefined8 *)(param_1 + 0x5f8) = uVar5;
      }
      uStack_2c0 = 0;
      local_2c8 = (code *)&LAB_141111fb0;
      plVar12 = (longlong *)(lVar8 + 0x9a0);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      local_128 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar7 + 1,lVar14);
        *(undefined4 *)(plVar7 + 2) = (undefined4)local_2c8;
        *(undefined4 *)((longlong)plVar7 + 0x14) = local_2c8._4_4_;
        *(undefined4 *)(plVar7 + 3) = uStack_2c0;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2bc;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar9;
        *plVar7 = (longlong)&PTR_FUN_143fcff08;
      }
      uVar5 = 0;
      if (plVar7 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar12,1);
        puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_1c0);
        iVar15 = *(int *)(lVar8 + 0x9a8);
        local_2b8 = (code *)CONCAT44(local_2b8._4_4_,iVar15);
        uVar5 = *puVar4;
        *(int *)(lVar8 + 0x9a8) = iVar15 + 1;
        if (*(int *)(lVar8 + 0x9ac) < iVar15 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar15);
          iVar15 = (int)local_2b8;
        }
        puVar4 = (undefined8 *)((longlong)iVar15 * 0x10 + *plVar12);
        *puVar4 = plVar7;
        *(undefined4 *)(puVar4 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x5e8) = uVar5;
      uStack_2c0 = 0;
      local_2c8 = FUN_141128c70;
      plVar12 = (longlong *)(lVar8 + 0xa08);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      local_118 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar7 + 1,lVar14);
        *(undefined4 *)(plVar7 + 2) = (undefined4)local_2c8;
        *(undefined4 *)((longlong)plVar7 + 0x14) = local_2c8._4_4_;
        *(undefined4 *)(plVar7 + 3) = uStack_2c0;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2bc;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar9;
        *plVar7 = (longlong)&PTR_FUN_143f77bd0;
      }
      uVar5 = 0;
      if (plVar7 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar12,1);
        puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_1b8);
        iVar15 = *(int *)(lVar8 + 0xa10);
        local_2b8 = (code *)CONCAT44(local_2b8._4_4_,iVar15);
        uVar5 = *puVar4;
        *(int *)(lVar8 + 0xa10) = iVar15 + 1;
        if (*(int *)(lVar8 + 0xa14) < iVar15 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar15);
          iVar15 = (int)local_2b8;
        }
        puVar4 = (undefined8 *)((longlong)iVar15 * 0x10 + *plVar12);
        *puVar4 = plVar7;
        *(undefined4 *)(puVar4 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x5d8) = uVar5;
      local_2c8 = (code *)&LAB_141111fb0;
      uVar5 = 0;
      uStack_2c0 = 0;
      local_178 = 0x41111fb0;
      uStack_174 = 1;
      uStack_170 = 0;
      uStack_16c = uStack_2bc;
      puVar4 = (undefined8 *)
               TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                         (lVar8 + 0xa20,local_1b0,lVar14,&local_178);
      uStack_2c0 = 0;
      plVar12 = (longlong *)(lVar8 + 0xcb8);
      *(undefined8 *)(param_1 + 0x5e0) = *puVar4;
      local_2c8 = (code *)&LAB_14111d6f0;
      plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
      local_108 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143fcff50;
        FWeakObjectPtr::operator=(plVar7 + 1,lVar14);
        *(undefined4 *)(plVar7 + 2) = (undefined4)local_2c8;
        *(undefined4 *)((longlong)plVar7 + 0x14) = local_2c8._4_4_;
        *(undefined4 *)(plVar7 + 3) = uStack_2c0;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2bc;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar9;
        *plVar7 = (longlong)&PTR_FUN_143fcff98;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar12,1);
        puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_1a8);
        iVar15 = *(int *)(lVar8 + 0xcc0);
        local_2b8 = (code *)CONCAT44(local_2b8._4_4_,iVar15);
        uVar5 = *puVar4;
        *(int *)(lVar8 + 0xcc0) = iVar15 + 1;
        if (*(int *)(lVar8 + 0xcc4) < iVar15 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar15);
          iVar15 = (int)local_2b8;
        }
        puVar4 = (undefined8 *)((longlong)iVar15 * 0x10 + *plVar12);
        *puVar4 = plVar7;
        *(undefined4 *)(puVar4 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x628) = uVar5;
      local_2c8 = FUN_14111d6d0;
      uVar5 = 0;
      uStack_2c0 = 0;
      local_168 = 0x4111d6d0;
      uStack_164 = 1;
      uStack_160 = 0;
      uStack_15c = uStack_2bc;
      puVar4 = (undefined8 *)
               TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                         (lVar8 + 0xce8,local_1a0,lVar14,&local_168);
      uStack_2c0 = 0;
      *(undefined8 *)(param_1 + 0x630) = *puVar4;
      local_2c8 = FUN_141116fb0;
      uVar6 = FUN_140bb74b0(lVar8);
      local_298 = 0;
      local_290 = 0;
      puVar4 = (undefined8 *)operator_new(0x30,&local_298);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_144012f30;
        FWeakObjectPtr::operator=(puVar4 + 1,lVar14);
        *(undefined4 *)(puVar4 + 2) = (undefined4)local_2c8;
        *(undefined4 *)((longlong)puVar4 + 0x14) = local_2c8._4_4_;
        *(undefined4 *)(puVar4 + 3) = uStack_2c0;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_2bc;
        uVar13 = FDelegateHandle::GenerateNewID();
        puVar4[5] = uVar13;
        *puVar4 = &PTR_FUN_144012f78;
      }
      uVar13 = uVar5;
      if ((local_290 != 0) && (local_298 != 0)) {
        FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(uVar6,&local_210,&local_298);
        uVar13 = local_210;
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_298);
      uStack_2c0 = 0;
      local_2c8 = FUN_141115930;
      local_158 = 0x41115930;
      uStack_154 = 1;
      uStack_150 = 0;
      uStack_14c = uStack_2bc;
      *(undefined8 *)(param_1 + 0x620) = uVar13;
      lVar9 = FUN_140bb7440(lVar8);
      puVar4 = (undefined8 *)
               TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                         (lVar9 + 0xc0,local_198,lVar14,&local_158);
      uStack_2c0 = 0;
      local_288 = 0;
      local_280 = 0;
      *(undefined8 *)(param_1 + 0x600) = *puVar4;
      local_2c8 = FUN_140f2ce70;
      puVar4 = (undefined8 *)operator_new(0x30,&local_288);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_1442cc120;
        FWeakObjectPtr::operator=(puVar4 + 1,lVar14);
        *(undefined4 *)(puVar4 + 2) = (undefined4)local_2c8;
        *(undefined4 *)((longlong)puVar4 + 0x14) = local_2c8._4_4_;
        *(undefined4 *)(puVar4 + 3) = uStack_2c0;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_2bc;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar4[5] = uVar6;
        *puVar4 = &PTR_FUN_1442cc168;
      }
      if ((local_280 != 0) && (local_288 != 0)) {
        FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(lVar8 + 0xc80,&local_208,&local_288);
        uVar5 = local_208;
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_288);
      *(undefined8 *)(param_1 + 0x608) = uVar5;
      lVar9 = FUN_140bba5e0(lVar8);
      if (lVar9 != 0) {
        uStack_2c0 = 0;
        local_2c8 = (code *)&LAB_141112f40;
        local_240 = 0;
        local_238 = 0;
        puVar4 = (undefined8 *)operator_new(0x30,&local_240);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &PTR_FUN_144012f30;
          FWeakObjectPtr::operator=(puVar4 + 1,lVar14);
          *(undefined4 *)(puVar4 + 2) = (undefined4)local_2c8;
          *(undefined4 *)((longlong)puVar4 + 0x14) = local_2c8._4_4_;
          *(undefined4 *)(puVar4 + 3) = uStack_2c0;
          *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_2bc;
          uVar5 = FDelegateHandle::GenerateNewID();
          puVar4[5] = uVar5;
          *puVar4 = &PTR_FUN_144012f78;
        }
        TBaseMulticastDelegate<void>::Add(lVar9 + 0xf8,&local_200,&local_240);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_240);
        *(undefined8 *)(param_1 + 0x638) = local_200;
      }
      uVar5 = FUN_140bb7440(lVar8);
      FUN_140d9f600(uVar5,2);
      FUN_140be5350(lVar8);
      uVar3 = FUN_140bca8a0(lVar8);
      plVar12 = uStack_2a0;
      *(undefined1 *)(param_1 + 0x4b9) = uVar3;
      if (uStack_2a0 != (longlong *)0x0) {
        LOCK();
        plVar7 = uStack_2a0 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*uStack_2a0)(uStack_2a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*uStack_2a0 + 8))(uStack_2a0,1);
          }
        }
      }
    }
  }
  local_258 = 0;
  FUN_1404cf2e0(&local_220,0);
  if (local_220 != (longlong *)0x0) {
    uStack_2c0 = 0;
    local_2c8 = FUN_141123be0;
    local_230 = 0;
    local_228 = 0;
    puVar4 = (undefined8 *)operator_new(0x30,&local_230);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_1442cc120;
      FWeakObjectPtr::operator=(puVar4 + 1,lVar14);
      *(undefined4 *)(puVar4 + 2) = (undefined4)local_2c8;
      *(undefined4 *)((longlong)puVar4 + 0x14) = local_2c8._4_4_;
      *(undefined4 *)(puVar4 + 3) = uStack_2c0;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_2bc;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[5] = uVar5;
      *puVar4 = &PTR_FUN_1442cc168;
    }
    puVar4 = (undefined8 *)(**(code **)(*local_220 + 0x118))(local_220,local_190,&local_230);
    *(undefined8 *)(param_1 + 0x640) = *puVar4;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_230);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x388) != 0)) {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar8 = FUN_142ee1f00(uVar5,*(undefined8 *)(param_1 + 0x388));
    if ((lVar8 == 0) || (cVar2 = FUN_14106bee0(lVar8), lVar9 = lVar8, cVar2 == '\0')) {
      lVar9 = 0;
    }
    *(longlong *)(param_1 + 0x4b0) = lVar9;
    if (lVar9 == 0) {
      if (lVar8 != 0) {
        uVar5 = FWeakObjectPtr::Get(param_1 + 0xc4);
        FUN_142f06bc0(uVar5,lVar8);
        lVar9 = *(longlong *)(param_1 + 0x4b0);
      }
      if (lVar9 == 0) goto LAB_14111fdcf;
    }
    *(longlong *)(lVar9 + 0x6a8) = lVar14;
    FUN_141131d10(*(undefined8 *)(param_1 + 0x4b0),1);
  }
LAB_14111fdcf:
  FUN_141137ed0(lVar14);
  lVar14 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if ((lVar14 == 0) || (cVar2 = FUN_140f57dd0(lVar14), cVar2 == '\0')) {
    lVar14 = 0;
  }
  uVar3 = FUN_1411d52e0(lVar14);
  *(undefined1 *)(param_1 + 0x680) = uVar3;
  uVar5 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar5,L"ForceFullscreenUpsell");
  if (((cVar2 != '\0') && (lVar14 != 0)) && (lVar14 = FUN_140cff230(lVar14), lVar14 != 0)) {
    AK::MemoryMgr::StartProfileThreadUsage((long)lVar14);
  }
  plVar12 = local_218;
  if (local_218 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_218 + 1;
    lVar14 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_218)(local_218);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_218 + 8))(local_218,1);
      }
    }
  }
  return;
}



// FUNCTION 14111feb0 FUN_14111feb0 body=1719 status=ok
// SIG undefined FUN_14111feb0(void)

void FUN_14111feb0(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong local_res10;
  longlong local_48;
  longlong local_40;
  
  FUN_140eb73b0();
  pwVar8 = (wchar_t *)0x0;
  if ((*(char *)(param_1 + 0x108) != '\0') && (*(longlong *)(param_1 + -0x220) != 0)) {
    local_48 = 0;
    local_40 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,&DAT_1446a9288,8);
    FUN_142088cf0(*(undefined8 *)(param_1 + -0x220),&local_48);
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar4 != 0) {
    FUN_14145f370();
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0xbc);
  if (lVar4 != 0) {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pwVar6 = (wchar_t *)(**(code **)(*(longlong *)(lVar4 + 0xd80) + 0x18))();
      if (pwVar6 == (wchar_t *)0x0) {
LAB_14111ffe5:
        pwVar6 = pwVar8;
      }
      else {
        lVar5 = ANavLinkProxy::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
             ) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_14111ffe5;
      }
      FWeakObjectPtr::operator=(param_1 + 0x2ac,pwVar6);
      pwVar6 = (wchar_t *)FUN_140c41a30(lVar4);
      if (pwVar6 == (wchar_t *)0x0) {
LAB_14112003d:
        pwVar6 = pwVar8;
      }
      else {
        lVar4 = ANavLinkProxy::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
             ) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_14112003d;
      }
      FWeakObjectPtr::operator=(param_1 + 0x2a4,pwVar6);
    }
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x2ac);
  if (cVar3 != '\0') {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCharacterItemAdded",L"::");
    pwVar6 = pwVar8;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x2ac);
    lVar4 = local_res10;
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1 + -0x4d8);
    local_40 = lVar4;
    if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(&local_48), lVar4 != 0)) {
      UObject::FindFunction(lVar4,local_40);
    }
    FUN_1406a5aa0(lVar5 + 0x2d8,&local_48);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCharacterItemRemoved",L"::");
    pwVar6 = pwVar8;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x2ac);
    lVar4 = local_res10;
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1 + -0x4d8);
    local_40 = lVar4;
    if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(&local_48), lVar4 != 0)) {
      UObject::FindFunction(lVar4,local_40);
    }
    FUN_1406a5aa0(lVar5 + 0x2e8,&local_48);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCharacterItemUpdated",L"::");
    pwVar6 = pwVar8;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x2ac);
    lVar4 = local_res10;
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1 + -0x4d8);
    local_40 = lVar4;
    if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(&local_48), lVar4 != 0)) {
      UObject::FindFunction(lVar4,local_40);
    }
    FUN_1406a5aa0(lVar5 + 0x2f8,&local_48);
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x2a4);
  if (cVar3 != '\0') {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBankItemAdded",L"::");
    pwVar6 = pwVar8;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x2a4);
    lVar4 = local_res10;
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1 + -0x4d8);
    local_40 = lVar4;
    if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(&local_48), lVar4 != 0)) {
      UObject::FindFunction(lVar4,local_40);
    }
    FUN_1406a5aa0(lVar5 + 0x2d8,&local_48);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBankItemRemoved",L"::");
    pwVar6 = pwVar8;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x2a4);
    lVar4 = local_res10;
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1 + -0x4d8);
    local_40 = lVar4;
    if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(&local_48), lVar4 != 0)) {
      UObject::FindFunction(lVar4,local_40);
    }
    FUN_1406a5aa0(lVar5 + 0x2e8,&local_48);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBankItemUpdated",L"::");
    pwVar6 = pwVar8;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x2a4);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1 + -0x4d8);
    local_40 = local_res10;
    if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(&local_48), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_40);
    }
    FUN_1406a5aa0(lVar4 + 0x2f8,&local_48);
  }
  pwVar6 = (wchar_t *)FWeakObjectPtr::Get(param_1 + 0xbc);
  if (pwVar6 != (wchar_t *)0x0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14112050c;
  }
  pwVar6 = pwVar8;
LAB_14112050c:
  FUN_140eb0f20(param_1 + 0x230,pwVar6,param_1 + 0x250,param_1 + 600);
  FUN_140ec1260(param_1 + 0x230);
  if ((*(char *)(param_1 + 0x32c) != '\0') && (*(int *)(param_1 + 0x328) == 0)) {
    *(undefined1 *)(param_1 + 0x5b1) = 1;
  }
  return;
}



// FUNCTION 141120570 FUN_141120570 body=1199 status=ok
// SIG undefined FUN_141120570(void)

void FUN_141120570(longlong param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  undefined8 local_res8;
  longlong local_res10;
  undefined1 local_38 [8];
  longlong local_30;
  
  FUN_142ec85a0();
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xb4);
  pwVar11 = (wchar_t *)0x0;
  if (lVar5 == 0) {
LAB_14112061e:
    lVar5 = 0;
LAB_141120621:
    pwVar7 = pwVar11;
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14112061e;
    pwVar7 = *(wchar_t **)(lVar5 + 0x1850);
    if (pwVar7 == (wchar_t *)0x0) goto LAB_141120621;
    lVar6 = FUN_1414b97c0();
    if ((*(int *)(*(longlong *)(pwVar7 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar7 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_141120621;
  }
  FWeakObjectPtr::operator=(param_1 + 0x1f8,pwVar7);
  if ((lVar5 != 0) && (pwVar7 = (wchar_t *)FUN_140cfc7b0(lVar5), pwVar7 != (wchar_t *)0x0)) {
    lVar5 = FUN_1414b9a30();
    if ((*(int *)(*(longlong *)(pwVar7 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar7 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_141120681;
  }
  pwVar7 = pwVar11;
LAB_141120681:
  FWeakObjectPtr::operator=(param_1 + 0x200,pwVar7);
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x200);
  if (cVar4 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x200);
    uVar8 = FName::FName(&local_res8,L"OnSelectedSDUChanged",1);
    plVar10 = (longlong *)(lVar5 + 0x4f0);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar9 != (longlong *)0x0) {
      FUN_1410fb740(plVar9,param_1 + -0x4d8,uVar8);
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
      iVar1 = *(int *)(lVar5 + 0x4f8);
      *(int *)(lVar5 + 0x4f8) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x4fc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
      }
      lVar5 = *plVar10;
      *(longlong **)(lVar5 + (longlong)iVar1 * 0x10) = plVar9;
      *(undefined4 *)(lVar5 + 8 + (longlong)iVar1 * 0x10) = 3;
    }
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x200);
    uVar8 = FName::FName(&local_res8,L"OnSDUPurchased",1);
    plVar10 = (longlong *)(lVar5 + 0x520);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar9 != (longlong *)0x0) {
      FUN_1410fb7c0(plVar9,param_1 + -0x4d8,uVar8);
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
      iVar1 = *(int *)(lVar5 + 0x528);
      *(int *)(lVar5 + 0x528) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x52c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
      }
      lVar5 = *plVar10;
      *(longlong **)(lVar5 + (longlong)iVar1 * 0x10) = plVar9;
      *(undefined4 *)(lVar5 + 8 + (longlong)iVar1 * 0x10) = 3;
    }
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x200);
    uVar8 = FName::FName(&local_res8,L"OnInsufficientFunds",1);
    plVar10 = (longlong *)(lVar5 + 0x508);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar9 != (longlong *)0x0) {
      FUN_140f168d0(plVar9,param_1 + -0x4d8,uVar8);
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
      iVar1 = *(int *)(lVar5 + 0x510);
      *(int *)(lVar5 + 0x510) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x514) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
      }
      lVar5 = *plVar10;
      *(longlong **)(lVar5 + (longlong)iVar1 * 0x10) = plVar9;
      *(undefined4 *)(lVar5 + 8 + (longlong)iVar1 * 0x10) = 3;
    }
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xbc);
  if (lVar5 != 0) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar5 = (**(code **)(*(longlong *)(lVar5 + 0xd80) + 0x18))(), lVar5 != 0)) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCurrencyQuantityChanged",L"::");
      while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar11 = pwVar3;
      }
      FName::FName(&local_res10,pwVar11 + 2,1);
      FWeakObjectPtr::operator=(local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(local_38,param_1 + -0x4d8);
      local_30 = local_res10;
      local_res8 = 0;
      if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(local_38), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_30);
      }
      FUN_1406a5aa0(lVar5 + 0x318,local_38);
    }
  }
  *(undefined1 *)(param_1 + 0x219) = 1;
  if ((((*(char *)(param_1 + 0x21a) != '\0') && (*(char *)(param_1 + 0x218) != '\0')) &&
      (*(char *)(param_1 + 0x219) != '\0')) &&
     (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x200), cVar4 != '\0')) {
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x200);
    FUN_140af3720(uVar8);
    return;
  }
  return;
}


