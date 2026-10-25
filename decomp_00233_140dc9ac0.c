// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140dc9ac0 FUN_140dc9ac0 body=116 status=ok
// SIG undefined FUN_140dc9ac0(void)

void FUN_140dc9ac0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x10) == '\x02') &&
     (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x14), cVar1 != '\0')) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar3 = FUN_140bb7900(uVar2);
    if ((lVar3 != 0) && (cVar1 = FUN_140db24b0(param_1 + 0x88), cVar1 != '\0')) {
      if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140dc9b1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
        return;
      }
      FUN_140db86e0(param_1);
    }
  }
  return;
}



// FUNCTION 140dc9b80 FUN_140dc9b80 body=470 status=ok
// SIG undefined FUN_140dc9b80(void)

void FUN_140dc9b80(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 uVar7;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  if (param_3 == '\0') {
    local_res20 = 0;
    FUN_1404cf890(&local_28,0);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x128))(local_28,param_1 + 0x50);
    }
    plVar6 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x40,0);
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined1 *)(param_1 + 0x3c) = 1;
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  local_40 = *param_2;
  iVar4 = FUN_1404bb3d0(param_1 + 0x40,&local_40);
  if (0 < iVar4) {
    uVar7 = 0;
    FUN_1404cf890(&local_38,0);
    plVar6 = local_38;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x140))
                (local_38,param_2,*(undefined4 *)(param_1 + 0x30),local_res18,uVar7);
      if (local_res18[0] == 1) {
        if (*(char *)(param_1 + 0x34) == '\0') {
          *(undefined4 *)(param_1 + 0x38) = 1;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x60);
          *(int *)(param_1 + 0x60) = iVar4 + 1;
          if (*(int *)(param_1 + 100) < iVar4 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x58,iVar4);
          }
          puVar5 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x58));
          *puVar5 = *param_2;
          lVar3 = param_2[1];
          puVar5[1] = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
            plVar6 = local_38;
          }
        }
      }
      if (*(int *)(param_1 + 0x48) == 0) {
        (**(code **)(*plVar6 + 0x128))(plVar6,param_1 + 0x50);
        FUN_140dd2160(param_1);
      }
    }
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140dc9d60 FUN_140dc9d60 body=690 status=ok
// SIG undefined FUN_140dc9d60(void)

void FUN_140dc9d60(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_res10;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong *local_68;
  longlong *local_58;
  
  if (param_2 == 0x11f) {
    plVar3 = (longlong *)*param_3;
    plVar4 = (longlong *)param_3[1];
    local_res10 = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    plVar2 = (longlong *)(param_1 + 0x108);
    local_58 = plVar3;
    if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
      if ((plVar3 == (longlong *)0x0) || (cVar7 = (**(code **)(*plVar3 + 0x20))(), cVar7 == '\0')) {
        iVar8 = -1;
      }
      else {
        iVar8 = GetTypeHash(plVar3);
      }
      lVar10 = *(longlong *)(param_1 + 0x148);
      if (*(longlong *)(param_1 + 0x148) == 0) {
        lVar10 = param_1 + 0x140;
      }
      iVar8 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x150) - 1U & (longlong)iVar8) * 4);
      if (iVar8 != -1) {
        lVar10 = *plVar2;
        do {
          lVar11 = (longlong)iVar8 * 0x38;
          plVar5 = *(longlong **)(lVar11 + 8 + lVar10);
          if ((((plVar5 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar5 + 0x20))(), cVar7 == '\0')) ||
              (plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3), cVar7 == '\0')) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          plVar5 = *(longlong **)(lVar11 + lVar10 + 8);
          if ((((plVar5 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar5 + 0x20))(), cVar7 == '\0')) &&
              ((plVar3 == (longlong *)0x0 ||
               (cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3), cVar7 == '\0')))) ||
             ((bVar6 && (cVar7 = (**(code **)*plVar3)(plVar3,*(undefined8 *)(lVar11 + lVar10 + 8)),
                        cVar7 != '\0')))) {
            if (iVar8 != -1) {
              local_res10 = *(undefined8 *)(lVar11 + 0x28 + *plVar2);
              TSet<TTuple<FUniqueNetIdMixer,TSharedPtr<FMixerChatUser,0>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdMixer,TSharedPtr<FMixerChatUser,0>,0>,FDefaultSetAllocator>
              ::Remove(plVar2,iVar8);
              bVar6 = false;
              goto LAB_140dc9ee3;
            }
            break;
          }
          lVar10 = *plVar2;
          iVar8 = *(int *)(lVar11 + 0x30 + lVar10);
        } while (iVar8 != -1);
      }
    }
    bVar6 = true;
LAB_140dc9ee3:
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    if (!bVar6) {
      puVar9 = (undefined8 *)FName::FName(local_78,L"SPARK",1);
      FUN_1404d0c50(&local_70,*puVar9);
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 0x2e0))(local_70,&local_res10);
      }
      TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
                (param_1 + 0x78,param_3,param_4);
      plVar3 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_68 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140dca020 FUN_140dca020 body=349 status=ok
// SIG undefined FUN_140dca020(void)

void FUN_140dca020(longlong param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((param_2 == 0x120) && (*(longlong *)(param_1 + 0x328) != 0)) &&
     (cVar1 = (*(code *)**(undefined8 **)*param_3)(), cVar1 != '\0')) {
    FUN_140db5980(param_1);
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x14);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x14);
      lVar3 = FUN_140bb7900(uVar2);
      if (lVar3 != 0) {
        if (param_4 != 1) {
          uVar2 = 0xc;
          if (param_4 == 4) {
            uVar2 = 7;
          }
          FUN_140db3670(param_1,uVar2);
          return;
        }
        FUN_140db86e0(param_1);
        return;
      }
    }
    lVar3 = FUN_140dbb780(param_1);
    if (lVar3 != 0) {
      if (param_4 == 1) {
        FUN_1404e2170(lVar3,0x120);
        return;
      }
      cVar1 = FUN_140dc0f80(param_1);
      if (cVar1 != '\0') {
        uVar2 = 0xc;
        if (param_4 == 4) {
          uVar2 = 7;
        }
        FUN_140dcedd0(param_1,uVar2);
        return;
      }
      if (param_4 == 4) {
        FUN_140db3670(param_1,7);
        return;
      }
      FUN_140db2520(param_1);
    }
  }
  return;
}



// FUNCTION 140dca1a0 FUN_140dca1a0 body=606 status=ok
// SIG undefined FUN_140dca1a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dca1a0(longlong *param_1,int param_2,undefined8 *param_3,undefined4 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  longlong *local_150;
  undefined4 local_148 [2];
  undefined8 local_140;
  longlong *local_138;
  undefined4 local_130;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar7 = (**(code **)(*param_1 + 0x2b0))();
  if (lVar7 != 0) {
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
      if (param_2 == 1) {
        if (((*(longlong *)(param_5 + 8) == 0) ||
            (*(longlong **)(param_5 + 0xa0) == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(**(longlong **)(param_5 + 0xa0) + 0x20))(), cVar6 == '\0')) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_140 = *param_3;
          local_128 = &PTR_FUN_143f769a8;
          local_100 = &PTR_FUN_143f769a0;
          local_150 = (longlong *)param_3[1];
          local_148[0] = 0;
          local_138 = (longlong *)0x0;
          local_130 = 0xffffffff;
          local_120 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_108 = 0;
          local_f8 = 0;
          local_f0 = 0;
          local_e8 = 0;
          local_e4 = 0;
          local_dc = 0;
          local_d8 = 0;
          local_d0 = 0;
          local_b8 = 0;
          local_b0 = 0;
          local_a8 = 0xffffffff;
          local_a4 = 0;
          local_98 = 0;
          local_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          local_70 = 9999;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          if (local_150 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_150 + 1) = (int)local_150[1] + 1;
            UNLOCK();
          }
          local_158 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_138,&local_150);
          plVar5 = local_150;
          if (local_150 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_150 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_150)(local_150);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_150 + 8))(local_150,1);
              }
            }
          }
          local_130 = param_4;
          FUN_1404c0750(&local_128,param_5);
          local_70 = *(undefined4 *)(param_5 + 0xb8);
          FUN_140be4f30(lVar7,local_148);
          TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
          ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_60);
          FUN_1404bf650(&local_128);
          plVar5 = local_138;
          if (local_138 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_138 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_138)(local_138);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
        }
      }
      else {
        FUN_140becf70(lVar7,param_2,param_3);
      }
    }
  }
  return;
}



// FUNCTION 140dca400 FUN_140dca400 body=160 status=ok
// SIG undefined FUN_140dca400(void)

void FUN_140dca400(longlong param_1,int param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong local_10;
  
  if (param_2 == 0) {
    local_18 = *param_3;
    local_10 = param_3[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_140bec800(*(undefined8 *)(param_1 + 0x38),&local_18,param_4);
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
    FUN_140db4000(param_1);
  }
  else {
    FUN_140dbf430(param_1,param_3,10);
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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



// FUNCTION 140dca4a0 FUN_140dca4a0 body=5007 status=ok
// SIG undefined FUN_140dca4a0(void)

void FUN_140dca4a0(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong *plVar18;
  wchar_t *pwVar19;
  float *pfVar20;
  longlong lVar21;
  undefined4 *puVar22;
  undefined2 *puVar23;
  undefined2 *puVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  float *pfVar28;
  longlong *plVar29;
  undefined4 local_res10 [2];
  longlong local_res18 [2];
  double in_stack_fffffffffffffc48;
  undefined4 uVar30;
  longlong *local_3a8;
  ulonglong local_3a0;
  longlong *local_398;
  longlong *local_390;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318 [2];
  ulonglong local_310;
  undefined4 local_308;
  undefined4 local_304;
  longlong local_300;
  undefined8 local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  longlong local_290;
  undefined8 local_288;
  longlong local_280;
  undefined8 local_278;
  longlong local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 local_258;
  longlong local_250;
  undefined8 local_248;
  longlong local_240;
  undefined8 local_238;
  longlong local_230;
  undefined8 local_228;
  longlong local_220;
  undefined8 local_218;
  longlong local_210;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  longlong local_1b8 [2];
  longlong local_1a8 [2];
  longlong local_198 [2];
  longlong local_188 [2];
  longlong local_178 [2];
  longlong local_168 [2];
  longlong local_158 [2];
  longlong local_148 [2];
  longlong local_138 [2];
  longlong local_128 [2];
  longlong local_118 [2];
  longlong local_108 [2];
  longlong local_f8 [2];
  longlong local_e8 [2];
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [5];
  
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  local_res10[0] = 0;
  local_res18[0] = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686f670) && (_Init_thread_header(&DAT_14686f670), DAT_14686f670 == -1))
  {
    FName::FName(&DAT_14686f668,"Matchmaking",1);
    _Init_thread_footer(&DAT_14686f670);
  }
  if (((param_2 != (longlong *)0x0) && (local_res18[0] != 0)) &&
     (cVar13 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_14686f668), cVar13 != '\0')) {
    FDisplayDebugManager::SetDrawColor(local_res18[0] + 0x98,&DAT_1464aa744);
    local_res10[0] = 0;
    local_2a0 = 0;
    local_298 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a0,0);
    FGenericPlatformString::Memcpy(local_2a0,L"Matchmaking",0x18);
    FUN_1428a6fb0(local_res18[0] + 0x98,&local_2a0,local_res10);
    if (local_2a0 != 0) {
      FMemory::Free();
    }
    FDisplayDebugManager::SetDrawColor(local_res18[0] + 0x98,&DAT_1464aa730);
    pwVar19 = L"False";
    if (*(char *)(param_1 + 0x70) != '\0') {
      pwVar19 = L"True";
    }
    local_34c = 0;
    uVar15 = FUN_140dd5730(*(undefined1 *)(param_1 + 0x10));
    FString::PrintfImpl(local_1b8,L"State: %s, BackfillOnly: %s",uVar15,pwVar19);
    FUN_1428a6fb0(local_res18[0] + 0x98,local_1b8,&local_34c);
    if (local_1b8[0] != 0) {
      FMemory::Free();
    }
    pwVar19 = L"False";
    if (*(char *)(param_1 + 0x2f8) != '\0') {
      pwVar19 = L"True";
    }
    local_308 = 0;
    FString::PrintfImpl(local_1a8,L"Playlist Content - IsAccessible: %s, Count: %d",pwVar19,
                        *(undefined4 *)(param_1 + 0x308));
    FUN_1428a6fb0(local_res18[0] + 0x98,local_1a8,&local_308);
    if (local_1a8[0] != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      local_388 = 0;
      fVar3 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x10);
      uVar14 = FUN_140dbc360(param_1);
      FString::PrintfImpl(local_198,L"Round - Members: %d, RemainingTime: %fs",uVar14,(double)fVar3)
      ;
      FUN_1428a6fb0(local_res18[0] + 0x98,local_198,&local_388);
      if (local_198[0] != 0) {
        FMemory::Free();
      }
    }
    if (*(char *)(param_1 + 0x10) == '\x03') {
      in_stack_fffffffffffffc48 = (double)*(float *)(param_1 + 0xc0);
      local_384 = 0;
      FString::PrintfImpl(local_188,L"Pending: %d, Confirmed: %d, Remaining: %fs (%d)",
                          *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe8),
                          in_stack_fffffffffffffc48,*(undefined4 *)(param_1 + 0xc4));
      FUN_1428a6fb0(local_res18[0] + 0x98,local_188,&local_384);
      if (local_188[0] != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      local_380 = 0;
      local_290 = 0;
      local_288 = 0x1d;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_290,0);
      FGenericPlatformString::Memcpy(local_290,L"Creating matchmaking session",0x3a);
      FUN_1428a6fb0(local_res18[0] + 0x98,&local_290,&local_380);
      if (local_290 != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
      local_37c = 0;
      local_280 = 0;
      local_278 = 0x1d;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
      FGenericPlatformString::Memcpy(local_280,L"Updating matchmaking session",0x3a);
      FUN_1428a6fb0(local_res18[0] + 0x98,&local_280,&local_37c);
      if (local_280 != 0) {
        FMemory::Free();
      }
    }
    puVar16 = (undefined8 *)FName::FName(local_a8,L"SPARK",1);
    FUN_1404d0c50(&local_1d0,*puVar16);
    if (local_1d0 != (longlong *)0x0) {
      local_1e0 = 0x120;
      local_1c0 = (**(code **)(*local_1d0 + 0x2c8))(local_1d0,0x120);
      if (local_1c0 != 0) {
        if (*(char *)(param_1 + 0x78) == '\0') {
          local_374 = 0;
          local_260 = 0;
          local_258 = 0x15;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,0);
          FGenericPlatformString::Memcpy(local_260,L"Advertised settings:",0x2a);
          FUN_1428a6fb0(local_res18[0] + 0x98,&local_260,&local_374);
          lVar17 = local_260;
        }
        else {
          local_378 = 0;
          local_270 = 0;
          local_268 = 0x20;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_270,0);
          FGenericPlatformString::Memcpy(local_270,L"Advertised settings (deferred):",0x40);
          FUN_1428a6fb0(local_res18[0] + 0x98,&local_270,&local_378);
          lVar17 = local_270;
        }
        if (lVar17 != 0) {
          FMemory::Free();
        }
        local_398 = &local_1c0;
        local_390 = local_res18;
        FUN_140dacc30(&local_398,DAT_14686f240);
        FUN_140dacc30(&local_398,DAT_14686f260);
        FUN_140dacc30(&local_398,DAT_14686f278);
        FUN_140dacc30(&local_398,DAT_14686f290);
        FUN_140dacc30(&local_398,DAT_14686f258);
        FUN_140dacc30(&local_398,DAT_14686f250);
        puVar16 = (undefined8 *)FName::FName(local_a0,L"SEARCHCROSSPLAY",1);
        FUN_140dacc30(&local_398,*puVar16);
      }
    }
    plVar18 = *(longlong **)(param_1 + 0x30);
    if (plVar18 != (longlong *)0x0) {
      local_3a8 = (longlong *)0x0;
      local_3a0 = 0;
      (**(code **)(*plVar18 + 0x38))(plVar18,&local_3a8);
      uVar27 = (ulonglong)(int)local_3a0;
      plVar29 = local_3a8 + uVar27 * 2;
      plVar18 = local_3a8;
      if (local_3a8 != plVar29) {
        do {
          local_370 = 0;
          FUN_1428a6fb0(local_res18[0] + 0x98,plVar18,&local_370);
          plVar18 = plVar18 + 2;
        } while (plVar18 != plVar29);
        uVar27 = local_3a0 & 0xffffffff;
      }
      uVar26 = (uint)uVar27;
      plVar18 = local_3a8;
      while (uVar26 != 0) {
        if (*plVar18 != 0) {
          FMemory::Free();
        }
        plVar18 = plVar18 + 2;
        uVar26 = (int)uVar27 - 1;
        uVar27 = (ulonglong)uVar26;
      }
      if (local_3a8 != (longlong *)0x0) {
        FMemory::Free(local_3a8);
      }
    }
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      local_36c = 0;
      FString::PrintfImpl(local_178,L"Retrying search in %fs",(double)*(float *)(param_1 + 0xb0));
      FUN_1428a6fb0(local_res18[0] + 0x98,local_178,&local_36c);
      if (local_178[0] != 0) {
        FMemory::Free();
      }
    }
    lVar17 = *(longlong *)(param_1 + 0x40);
    if (lVar17 != 0) {
      local_368 = 0;
      if (*(int *)(lVar17 + 0x48) == 0) {
        puVar23 = &DAT_143f3eda8;
      }
      else {
        puVar23 = *(undefined2 **)(lVar17 + 0x40);
      }
      FString::PrintfImpl(local_168,L"Connecting to \'%s\'",puVar23);
      FUN_1428a6fb0(local_res18[0] + 0x98,local_168,&local_368);
      if (local_168[0] != 0) {
        FMemory::Free();
      }
    }
    if (0 < *(int *)(param_1 + 0x360)) {
      local_364 = 0;
      FString::PrintfImpl(local_158,L"Waiting to process %d disconnected players");
      FUN_1428a6fb0(local_res18[0] + 0x98,local_158,&local_364);
      if (local_158[0] != 0) {
        FMemory::Free();
      }
    }
    cVar13 = FUN_140dc1420(param_1);
    if (cVar13 != '\0') {
      local_360 = 0;
      local_250 = 0;
      local_248 = 0x22;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_250,0);
      FGenericPlatformString::Memcpy(local_250,L"Waiting on splitscreen join/leave",0x44);
      FUN_1428a6fb0(local_res18[0] + 0x98,&local_250,&local_360);
      if (local_250 != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x390) != 0) {
      local_35c = 0;
      local_240 = 0;
      local_238 = 0x1f;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_240,0);
      FGenericPlatformString::Memcpy(local_240,L"Looking up matchmaking session",0x3e);
      FUN_1428a6fb0(local_res18[0] + 0x98,&local_240,&local_35c);
      if (local_240 != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
      local_358 = 0;
      local_230 = 0;
      local_228 = 0x30;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_230,0);
      FGenericPlatformString::Memcpy
                (local_230,L"Waiting for matchmaking to complete before join",0x60);
      FUN_1428a6fb0(local_res18[0] + 0x98,&local_230,&local_358);
      if (local_230 != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x1e8) != 0) {
      local_354 = 0;
      local_220 = 0;
      local_218 = 0x28;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_220,0);
      FGenericPlatformString::Memcpy(local_220,L"Destroying matchmaking session for join",0x50);
      FUN_1428a6fb0(local_res18[0] + 0x98,&local_220,&local_354);
      if (local_220 != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x1f0) != 0) {
      local_350 = 0;
      local_210 = 0;
      local_208 = 0x1c;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_210,0);
      FGenericPlatformString::Memcpy(local_210,L"Joining matchmaking session",0x38);
      FUN_1428a6fb0(local_res18[0] + 0x98,&local_210,&local_350);
      if (local_210 != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x3c0) != 0) {
      local_304 = 0;
      local_200 = 0;
      local_1f8 = 0x1c;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_200,0);
      FGenericPlatformString::Memcpy(local_200,L"Looking up gameplay session",0x38);
      FUN_1428a6fb0(local_res18[0] + 0x98,&local_200,&local_304);
      if (local_200 != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x2c0) != 0) {
      local_348 = 0;
      local_1f0 = 0;
      local_1e8 = 0x25;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f0,0);
      FGenericPlatformString::Memcpy(local_1f0,L"Destroying gameplay session for join",0x4a);
      FUN_1428a6fb0(local_res18[0] + 0x98,&local_1f0,&local_348);
      if (local_1f0 != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x2c8) != 0) {
      local_344 = 0;
      local_300 = 0;
      local_2f8 = 0x19;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_300,0);
      FGenericPlatformString::Memcpy(local_300,L"Joining gameplay session",0x32);
      FUN_1428a6fb0(local_res18[0] + 0x98,&local_300,&local_344);
      if (local_300 != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x3b8) != 0) {
      local_340 = 0;
      local_2f0 = 0;
      local_2e8 = 0x2a;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f0,0);
      FGenericPlatformString::Memcpy(local_2f0,L"Destroying matchmaking session for backup",0x54);
      FUN_1428a6fb0(local_res18[0] + 0x98,&local_2f0,&local_340);
      if (local_2f0 != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      local_33c = 0;
      local_2e0 = 0;
      local_2d8 = 0x2b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e0,0);
      FGenericPlatformString::Memcpy(local_2e0,L"Opening game session for matchmade players",0x56);
      FUN_1428a6fb0(local_res18[0] + 0x98,&local_2e0,&local_33c);
      if (local_2e0 != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x420) != 0) {
      local_338 = 0;
      local_2d0 = 0;
      local_2c8 = 0x32;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d0,0);
      FGenericPlatformString::Memcpy
                (local_2d0,L"Destroying matchmaking session for start gameplay",100);
      FUN_1428a6fb0(local_res18[0] + 0x98,&local_2d0,&local_338);
      if (local_2d0 != 0) {
        FMemory::Free();
      }
    }
    if (0 < *(int *)(param_1 + 0x120)) {
      local_334 = 0;
      FString::PrintfImpl(local_148,L"Waiting for %d matchmade players");
      FUN_1428a6fb0(local_res18[0] + 0x98,local_148,&local_334);
      if (local_148[0] != 0) {
        FMemory::Free();
      }
      pfVar20 = *(float **)(param_1 + 0x118);
      pfVar28 = pfVar20 + (longlong)*(int *)(param_1 + 0x120) * 0xc;
      for (; pfVar20 != pfVar28; pfVar20 = pfVar20 + 0xc) {
        local_330 = 0;
        puVar16 = (undefined8 *)FUniqueNetIdWrapper::ToDebugString(pfVar20 + 2,local_90);
        if (*(int *)(puVar16 + 1) == 0) {
          puVar23 = &DAT_143f3eda8;
        }
        else {
          puVar23 = (undefined2 *)*puVar16;
        }
        FString::PrintfImpl(local_138,L"  Player: %s, Timeout: %fs",puVar23,(double)*pfVar20);
        FUN_1428a6fb0(local_res18[0] + 0x98,local_138,&local_330);
        if (local_138[0] != 0) {
          FMemory::Free();
        }
        if (local_90[0] != 0) {
          FMemory::Free();
        }
      }
    }
    if (*(longlong *)(param_1 + 0x2f0) != 0) {
      local_32c = 0;
      FString::PrintfImpl(local_128,L"Waiting for clients to travel (%fs remaining)",
                          (double)*(float *)(param_1 + 0x2e8));
      FUN_1428a6fb0(local_res18[0] + 0x98,local_128,&local_32c);
      if (local_128[0] != 0) {
        FMemory::Free();
      }
    }
    uVar27 = param_1 + 0x14;
    local_1d8 = local_res18;
    local_310 = uVar27;
    cVar13 = FWeakObjectPtr::IsValid(uVar27);
    if (cVar13 != '\0') {
      uVar15 = FWeakObjectPtr::Get(uVar27);
      lVar17 = FUN_140bb7900(uVar15);
      if (lVar17 != 0) {
        uVar14 = *(undefined4 *)(lVar17 + 0x68);
        local_328 = 0;
        cVar13 = FUN_1404d2e60(lVar17);
        pwVar19 = L"False";
        if (cVar13 != '\0') {
          pwVar19 = L"True";
        }
        FString::PrintfImpl(local_118,L"HOST MatchmakingBeacon - HasPending:%s, RemoteParties (%d):"
                            ,pwVar19,uVar14);
        FUN_1428a6fb0(local_res18[0] + 0x98,local_118,&local_328);
        if (local_118[0] != 0) {
          FMemory::Free();
        }
        FUN_140dac8f0(&local_1d8,lVar17);
        lVar25 = *(longlong *)(lVar17 + 0xd0);
        lVar17 = lVar25 + (longlong)*(int *)(lVar17 + 0xd8) * 0x48;
        for (; lVar25 != lVar17; lVar25 = lVar25 + 0x48) {
          uVar30 = (undefined4)((ulonglong)in_stack_fffffffffffffc48 >> 0x20);
          uVar14 = *(undefined4 *)(lVar25 + 0x38);
          local_324 = 0;
          if ((*(longlong **)(lVar25 + 0x10) == (longlong *)0x0) ||
             (cVar13 = (**(code **)(**(longlong **)(lVar25 + 0x10) + 0x20))(), cVar13 == '\0')) {
            local_2c0 = 0;
            local_2b8 = 8;
            bVar5 = true;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c0,0);
            FGenericPlatformString::Memcpy(local_2c0,L"INVALID",0x10);
            plVar18 = &local_2c0;
          }
          else {
            plVar18 = *(longlong **)(lVar25 + 0x10);
            bVar8 = true;
            bVar7 = true;
            bVar6 = true;
            puVar16 = (undefined8 *)(**(code **)(*plVar18 + 0x30))(plVar18,local_70);
            if (*(int *)(puVar16 + 1) == 0) {
              puVar23 = &DAT_143f3eda8;
            }
            else {
              puVar23 = (undefined2 *)*puVar16;
            }
            uVar15 = (**(code **)(*plVar18 + 8))(plVar18,local_98);
            puVar16 = (undefined8 *)FName::ToString(uVar15,local_80);
            if (*(int *)(puVar16 + 1) == 0) {
              puVar24 = &DAT_143f3eda8;
            }
            else {
              puVar24 = (undefined2 *)*puVar16;
            }
            FString::PrintfImpl(local_108,L"%s:%s",puVar24,puVar23);
            plVar18 = local_108;
          }
          puVar23 = (undefined2 *)*plVar18;
          *plVar18 = 0;
          lVar11 = plVar18[1];
          plVar18[1] = 0;
          if ((bVar5) && (bVar5 = false, local_2c0 != 0)) {
            FMemory::Free();
          }
          if ((bVar6) && (bVar6 = false, local_108[0] != 0)) {
            FMemory::Free();
          }
          if ((bVar7) && (bVar7 = false, local_80[0] != 0)) {
            FMemory::Free();
          }
          if ((bVar8) && (bVar8 = false, local_70[0] != 0)) {
            FMemory::Free();
          }
          in_stack_fffffffffffffc48 = (double)CONCAT44(uVar30,uVar14);
          puVar24 = &DAT_143f3eda8;
          if ((int)lVar11 != 0) {
            puVar24 = puVar23;
          }
          FString::PrintfImpl(local_f8,L"  PendingHost: %s, Timeout: %f, AdditionalPlayers (%d):",
                              puVar24,(double)*(float *)(lVar25 + 0x40),in_stack_fffffffffffffc48);
          FUN_1428a6fb0(local_res18[0] + 0x98,local_f8,&local_324);
          if (local_f8[0] != 0) {
            FMemory::Free();
          }
          if (puVar23 != (undefined2 *)0x0) {
            FMemory::Free(puVar23);
          }
          lVar21 = *(longlong *)(lVar25 + 0x30);
          lVar11 = lVar21 + (longlong)*(int *)(lVar25 + 0x38) * 0x28;
          for (; lVar21 != lVar11; lVar21 = lVar21 + 0x28) {
            local_320 = 0;
            if ((*(longlong **)(lVar21 + 8) == (longlong *)0x0) ||
               (cVar13 = (**(code **)(**(longlong **)(lVar21 + 8) + 0x20))(), cVar13 == '\0')) {
              local_2a8 = 8;
              local_2b0 = 0;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b0,0);
              FGenericPlatformString::Memcpy(local_2b0,L"INVALID",0x10);
              plVar18 = &local_2b0;
              bVar10 = false;
              bVar9 = true;
            }
            else {
              plVar18 = (longlong *)
                        (**(code **)(**(longlong **)(lVar21 + 8) + 0x28))
                                  (*(longlong **)(lVar21 + 8),local_60);
              bVar10 = true;
              bVar9 = false;
            }
            puVar23 = (undefined2 *)*plVar18;
            *plVar18 = 0;
            lVar12 = plVar18[1];
            plVar18[1] = 0;
            if ((bVar9) && (local_2b0 != 0)) {
              FMemory::Free();
            }
            if ((bVar10) && (local_60[0] != 0)) {
              FMemory::Free();
            }
            puVar24 = &DAT_143f3eda8;
            if ((int)lVar12 != 0) {
              puVar24 = puVar23;
            }
            FString::PrintfImpl(local_e8,L"    %s",puVar24);
            FUN_1428a6fb0(local_res18[0] + 0x98,local_e8,&local_320);
            if (local_e8[0] != 0) {
              FMemory::Free();
            }
            if (puVar23 != (undefined2 *)0x0) {
              FMemory::Free(puVar23);
            }
          }
          uVar27 = local_310;
        }
      }
    }
    cVar13 = FWeakObjectPtr::IsValid(uVar27);
    if (cVar13 != '\0') {
      uVar15 = FWeakObjectPtr::Get(uVar27);
      lVar17 = FUN_140bb6200(uVar15);
      if (lVar17 != 0) {
        local_31c = 0;
        FString::PrintfImpl(local_d8,L"CLIENT MatchmakingBeacon - RemoteParties (%d):",
                            *(undefined4 *)(lVar17 + 0x68));
        FUN_1428a6fb0(local_res18[0] + 0x98,local_d8,&local_31c);
        if (local_d8[0] != 0) {
          FMemory::Free();
        }
        FUN_140dac8f0(&local_1d8,lVar17);
      }
    }
    local_318[0] = 0;
    FString::PrintfImpl(local_c8,L"EnabledDebugFailures (%d):",DAT_14686f2b8);
    FUN_1428a6fb0(local_res18[0] + 0x98,local_c8,local_318);
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
    puVar2 = DAT_14686f2b0 + DAT_14686f2b8;
    plVar18 = local_1c8;
    for (puVar22 = DAT_14686f2b0; local_1c8 = plVar18, puVar22 != puVar2; puVar22 = puVar22 + 1) {
      local_310 = local_310 & 0xffffffff00000000;
      switch(*puVar22) {
      case 0:
        pwVar19 = L"None";
        break;
      case 1:
        pwVar19 = L"CreateMatchmakingSession";
        break;
      case 2:
        pwVar19 = L"JoinMatchmakingSession";
        break;
      case 3:
        pwVar19 = L"FindMatchmakingSession";
        break;
      case 4:
        pwVar19 = L"FindGameplaySession";
        break;
      case 5:
        pwVar19 = L"JoinGameplaySession";
        break;
      case 6:
        pwVar19 = L"InitClientMatchmakingBeacon";
        break;
      case 7:
        pwVar19 = L"CreateHostMatchmakingBeacon";
        break;
      default:
        pwVar19 = L"";
      }
      FString::PrintfImpl(local_b8,L"  %s",pwVar19);
      FUN_1428a6fb0(local_res18[0] + 0x98,local_b8,&local_310);
      if (local_b8[0] != 0) {
        FMemory::Free();
      }
      plVar18 = local_1c8;
    }
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar29 = plVar18 + 1;
      lVar17 = *plVar29;
      *(int *)plVar29 = (int)*plVar29 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140dcb850 FUN_140dcb850 body=430 status=ok
// SIG undefined FUN_140dcb850(void)

void FUN_140dcb850(longlong param_1,int param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  longlong *local_20;
  longlong *local_18;
  
  FUN_1404cf2e0(&local_20,0,param_3,param_4,0);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x220))(local_20,param_1 + 0x158);
  }
  if (param_2 == 1) {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    FUN_140dcce40(param_1);
  }
  else {
    lVar6 = *param_3;
    if (lVar6 == 0) {
      local_38 = (longlong *)(*(longlong **)(param_1 + 0x20))[1];
      local_40 = **(longlong **)(param_1 + 0x20);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      plVar7 = &local_40;
      bVar5 = false;
      bVar4 = true;
    }
    else {
      local_28 = (longlong *)param_3[1];
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      plVar7 = &local_30;
      bVar5 = true;
      bVar4 = false;
      local_30 = lVar6;
    }
    plVar1 = local_38;
    FUN_140dbf430(param_1,plVar7,2);
    plVar7 = local_38;
    if ((bVar4) && (plVar1 != (longlong *)0x0)) {
      LOCK();
      plVar1 = plVar1 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    plVar7 = local_28;
    if ((bVar5) && (local_28 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
  }
  plVar7 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return;
}



// FUNCTION 140dcba00 FUN_140dcba00 body=190 status=ok
// SIG undefined FUN_140dcba00(void)

void FUN_140dcba00(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *local_18;
  longlong *local_10;
  
  plVar6 = (longlong *)0x0;
  FUN_1404cf2e0(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x140))(local_18,param_1 + 4);
  }
  *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  if ((int)param_1[5] < (int)param_1[3]) {
    FUN_140dd1380(param_1);
  }
  else if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    cVar5 = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if (cVar5 != '\0') {
      if ((int)param_1[1] != 0) {
        plVar6 = (longlong *)*param_1;
      }
      (**(code **)(*plVar6 + 0x40))(plVar6);
    }
  }
  plVar6 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 140dcbac0 FUN_140dcbac0 body=180 status=ok
// SIG undefined FUN_140dcbac0(void)

void FUN_140dcbac0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  int param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_res18 [2];
  longlong *local_18;
  longlong *local_10;
  
  local_res18[0] = *param_3;
  iVar5 = FUN_1404bb3d0(param_1 + 0x58,local_res18);
  if (0 < iVar5) {
    FUN_1404cf2e0(&local_18,0);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x140))(local_18,param_1 + 0x68);
    }
    if (param_5 != 3) {
      *(int *)(param_1 + 0x38) = param_5;
    }
    FUN_140dd2160(param_1);
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140dcbb80 FUN_140dcbb80 body=913 status=ok
// SIG undefined FUN_140dcbb80(void)

ulonglong FUN_140dcbb80(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  undefined8 local_res8;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    local_78 = 0;
    uStack_74 = 1;
    iVar13 = *(int *)(param_1 + 0xd0);
    puStack_40 = (uint *)(param_1 + 0xb8);
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar13 != 0) {
      puVar12 = *(uint **)(param_1 + 200);
      if (*(uint **)(param_1 + 200) == (uint *)0x0) {
        puVar12 = puStack_40;
      }
      uVar2 = *puVar12;
      uStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar9 = (longlong)local_78;
        uStack_60 = uStack_60 + 0x20;
        iVar11 = local_78 + 1;
        bVar4 = (int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar11;
        if (bVar4) goto LAB_140dcbc4a;
        uVar2 = puVar12[lVar9 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar11 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      local_68._4_4_ = (uStack_60 - iVar11) + 0x1f;
      if (iVar13 < local_68._4_4_) {
LAB_140dcbc4a:
        local_68._4_4_ = iVar13;
      }
    }
    uStack_38 = 0xffffffff;
    iStack_34 = local_68._4_4_;
    iStack_30 = uStack_60;
    iStack_48 = local_78;
    uStack_44 = uStack_74;
    iStack_70 = local_78;
    uStack_6c = uStack_74;
    local_58 = uStack_60;
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    bVar4 = local_68._4_4_ < iVar13;
    local_50 = (longlong *)(param_1 + 0xa8);
    local_68 = puStack_40;
    if (bVar4) {
      do {
        local_res8 = *(undefined8 *)
                      ((longlong)iStack_5c * 0x20 + 0x10 + *(longlong *)(param_1 + 0xa8));
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x88))
                  (*(longlong **)(param_1 + 0x40),&local_res8);
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      } while (iStack_5c < (int)local_68[6]);
    }
  }
  plVar1 = (longlong *)(param_1 + 0xf8);
  local_78 = 0;
  uStack_74 = 1;
  iVar13 = *(int *)(param_1 + 0x120);
  puStack_40 = (uint *)(param_1 + 0x108);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar13 != 0) {
    puVar12 = *(uint **)(param_1 + 0x118);
    if (*(uint **)(param_1 + 0x118) == (uint *)0x0) {
      puVar12 = puStack_40;
    }
    uVar2 = *puVar12;
    local_78 = 0;
    while (uVar2 == 0) {
      lVar9 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar11 = local_78 + 1;
      bVar4 = (int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar11;
      if (bVar4) goto LAB_140dcbd7a;
      uVar2 = puVar12[lVar9 + 1];
    }
    uStack_74 = -uVar2 & uVar2;
    iVar11 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    local_68._4_4_ = (uStack_60 - iVar11) + 0x1f;
    if (iVar13 < local_68._4_4_) {
LAB_140dcbd7a:
      local_68._4_4_ = iVar13;
    }
  }
  uStack_38 = 0xffffffff;
  iStack_34 = local_68._4_4_;
  iStack_30 = uStack_60;
  iStack_2c = iStack_5c;
  iStack_48 = local_78;
  uStack_44 = uStack_74;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58 = uStack_60;
  iStack_54 = iStack_5c;
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  bVar4 = local_68._4_4_ < iVar13;
  local_50 = plVar1;
  local_68 = puStack_40;
  if (bVar4) {
    do {
      lVar9 = *(longlong *)((longlong)iStack_5c * 0x20 + 0x10 + *plVar1);
      lVar5 = FUN_142b45e90();
      iVar13 = 0;
      lVar5 = *(longlong *)(lVar5 + 0x18);
      if (0 < *(int *)(lVar5 + 0xd8)) {
        lVar10 = 0;
        do {
          lVar3 = *(longlong *)(lVar5 + 0xd0);
          if ((*(int *)(lVar10 + 8 + lVar3) != 0) &&
             (plVar6 = *(longlong **)(lVar10 + lVar3), plVar6 != (longlong *)0x0)) {
            plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,&local_res8);
            if (*plVar6 == lVar9) {
              if ((*(int *)(lVar10 + 8 + lVar3) != 0) &&
                 (plVar6 = *(longlong **)(lVar10 + lVar3), plVar6 != (longlong *)0x0)) {
                (**(code **)(*plVar6 + 0x28))(plVar6,0);
                if (*(longlong *)(lVar10 + lVar3) != 0) {
                  uVar7 = FMemory::Realloc(*(longlong *)(lVar10 + lVar3),0,0);
                  *(undefined8 *)(lVar10 + lVar3) = uVar7;
                }
                *(undefined4 *)(lVar10 + 8 + lVar3) = 0;
              }
              break;
            }
          }
          iVar13 = iVar13 + 1;
          lVar10 = lVar10 + 0x10;
        } while (iVar13 < *(int *)(lVar5 + 0xd8));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar5 + 0xd0,0);
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  TSet<TTuple<TSharedRef<FString,1>,unsigned_short>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,unsigned_short,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0xa8,0);
  TSet<TTuple<TSharedRef<FString,1>,unsigned_short>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,unsigned_short,0>,FDefaultSetAllocator>
  ::Empty(plVar1,0);
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x98,0);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  uVar8 = FUN_140dcce40(param_1);
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 140dcbf20 FUN_140dcbf20 body=152 status=ok
// SIG undefined FUN_140dcbf20(void)

void FUN_140dcbf20(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_res18 [2];
  
  if (param_3 != '\0') {
    FUN_1405499a0(param_1 + 0xf8,local_res18,param_2);
    if (local_res18[0] != -1) {
      uVar1 = *(undefined8 *)
               ((longlong)local_res18[0] * 0x20 + 0x10 + *(longlong *)(param_1 + 0xf8));
      FUN_140be6fe0(param_1 + 0xf8);
      lVar2 = FUN_142b45e90();
      TBaseMulticastDelegate<void>::Remove(*(longlong *)(lVar2 + 0x18) + 0xd0,uVar1);
      FUN_140dc5590(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140dcbfc0 FUN_140dcbfc0 body=2266 status=ok
// SIG undefined FUN_140dcbfc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dcbfc0(longlong param_1,char *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int iVar20;
  int *piVar21;
  undefined2 *puVar22;
  undefined1 auStack_1a8 [32];
  char local_188;
  uint local_184;
  longlong local_180;
  uint local_178;
  int local_174;
  undefined4 local_170;
  longlong local_168;
  longlong local_160;
  undefined4 local_158;
  longlong local_150;
  longlong *local_148;
  int local_140;
  longlong local_138 [6];
  longlong *local_108;
  longlong *local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  float local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  longlong local_b0 [2];
  longlong local_a0 [3];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar17 = 0;
  uVar5 = 0;
  local_184 = 0;
  local_170 = 0;
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x14);
  TBaseMulticastDelegate<void>::Remove(lVar7 + 0x9a0,*(undefined8 *)(param_1 + 0xf0));
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if ((*param_2 != '\x02') || (param_2[1] != '\0')) {
    FUN_140db3670(param_1,0xb);
    return;
  }
  local_158 = FUN_140dbc780(param_1);
  local_170 = FUN_140dbc360(param_1);
  local_178 = 0;
  local_188 = '\x01';
  local_180 = 0;
  local_174 = 0;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar3 != '\0') {
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar7 = FUN_140bb7900(uVar8);
    local_150 = lVar7;
    if (lVar7 != 0) {
      local_168 = 0;
      local_160 = 0;
      puVar9 = (undefined8 *)FName::FName(local_c0,L"SPARK",1);
      FUN_1404d0c50(&local_108,*puVar9);
      plVar19 = local_108;
      if (local_108 != (longlong *)0x0) {
        local_138[2] = 0x11f;
        lVar10 = (**(code **)(*local_108 + 0x10))(local_108,0x11f);
        if ((lVar10 != 0) && (plVar11 = *(longlong **)(lVar10 + 0xa0), plVar11 != (longlong *)0x0))
        {
          plVar11 = (longlong *)(**(code **)(*plVar11 + 0x38))(plVar11,local_b0);
          if (&local_168 != plVar11) {
            if (local_168 != 0) {
              FMemory::Free();
            }
            local_168 = *plVar11;
            *plVar11 = 0;
            local_160 = plVar11[1];
            plVar11[1] = 0;
          }
          lVar7 = local_150;
          if (local_b0[0] != 0) {
            FMemory::Free();
            lVar7 = local_150;
          }
        }
      }
      if (1 < (int)local_160) {
        local_138[3] = 0x11f;
        FUN_1404e20e0(lVar7,0x11f,&local_168);
      }
      lVar10 = *(longlong *)(lVar7 + 0x60);
      local_c8 = (longlong)*(int *)(lVar7 + 0x68) * 0x40 + lVar10;
      if (lVar10 != local_c8) {
        piVar21 = (int *)(lVar10 + 0x38);
        uVar16 = uVar17;
        do {
          lVar7 = (longlong)(int)uVar16;
          local_178 = (int)uVar16 + 1;
          if (local_174 < (int)local_178) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_180,uVar16);
          }
          *(undefined ***)(local_180 + lVar7 * 0x28) = &PTR_FUN_143f73d18;
          *(undefined8 *)(local_180 + 8 + lVar7 * 0x28) = *(undefined8 *)(piVar21 + -10);
          lVar1 = *(longlong *)(piVar21 + -8);
          *(longlong *)(local_180 + 0x10 + lVar7 * 0x28) = lVar1;
          if (lVar1 != 0) {
            LOCK();
            *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
            UNLOCK();
          }
          *(undefined ***)(local_180 + lVar7 * 0x28) = &PTR_FUN_143f740c8;
          *(undefined8 *)(local_180 + 0x18 + lVar7 * 0x28) = 0;
          *(undefined8 *)(local_180 + 0x20 + lVar7 * 0x28) = 0;
          iVar15 = *piVar21;
          if (iVar15 != 0) {
            if (local_174 < (int)(iVar15 + local_178)) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::
              ResizeTo(&local_180);
            }
            puVar13 = (undefined8 *)(*(longlong *)(piVar21 + -2) + 8);
            puVar18 = (undefined8 *)(local_180 + (longlong)(int)local_178 * 0x28);
            puVar9 = puVar18 + 4;
            iVar20 = iVar15;
            do {
              *puVar18 = &PTR_FUN_143f73d18;
              puVar9[-3] = *puVar13;
              lVar7 = puVar13[1];
              puVar9[-2] = lVar7;
              if (lVar7 != 0) {
                LOCK();
                *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
                UNLOCK();
              }
              *puVar18 = &PTR_FUN_143f740c8;
              puVar13 = puVar13 + 5;
              puVar9[-1] = 0;
              puVar18 = puVar18 + 5;
              *puVar9 = 0;
              puVar9 = puVar9 + 5;
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
            local_178 = local_178 + iVar15;
          }
          uVar16 = (ulonglong)local_178;
          lVar10 = lVar10 + 0x40;
          piVar21 = piVar21 + 0x10;
          plVar19 = local_108;
          lVar7 = local_150;
        } while (lVar10 != local_c8);
      }
      FUN_140dd0550(param_1,&local_180);
      *(undefined4 *)(lVar7 + 0x50) = 1;
      lVar10 = FWeakObjectPtr::Get(param_1 + 0x14);
      FUN_1404c9620(*(undefined8 *)(lVar10 + 0xae8),lVar7);
      if (plVar19 != (longlong *)0x0) {
        lVar7 = *plVar19;
        local_188 = '\0';
        uVar8 = FUN_140da5ad0(&local_148,param_1,FUN_140dc5cf0);
        puVar9 = (undefined8 *)(**(code **)(lVar7 + 0xd8))(plVar19,local_b8,uVar8);
        *(undefined8 *)(param_1 + 0x420) = *puVar9;
        if (local_140 == 0) {
LAB_140dcc368:
          if (local_148 != (longlong *)0x0) {
            FMemory::Free(local_148);
          }
        }
        else if (local_148 != (longlong *)0x0) {
          (**(code **)(*local_148 + 0x28))(local_148,0);
          if (local_148 != (longlong *)0x0) {
            local_148 = (longlong *)FMemory::Realloc(local_148,0,0);
          }
          local_140 = 0;
          goto LAB_140dcc368;
        }
        local_138[4] = 0x120;
        (**(code **)(*plVar19 + 0xd0))(plVar19,0x120);
      }
      plVar19 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_100 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar21 = (int *)((longlong)plVar19 + 0xc);
          iVar15 = *piVar21;
          *piVar21 = *piVar21 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_100 + 8))(local_100,1);
          }
        }
      }
      if (local_168 != 0) {
        FMemory::Free();
      }
    }
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if ((cVar3 != '\0') &&
     (lVar7 = FWeakObjectPtr::Get(param_1 + 0x14), *(longlong *)(lVar7 + 0xcb0) != 0)) {
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x14);
    if (cVar3 != '\0') {
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x14);
      uVar17 = *(ulonglong *)(lVar7 + 0xcb0);
    }
    FUN_1413c8ca0(uVar17,1);
    FUN_140db2f20(param_1);
    goto LAB_140dcc852;
  }
  cVar3 = FUN_140dd74c0(param_1,(longlong *)(param_1 + 0x300));
  *(char *)(param_1 + 0x2f8) = cVar3;
  if (cVar3 != '\0') {
    local_f8 = 0;
    local_f0 = 0;
    if (*(int *)(param_1 + 0x308) < 1) {
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x14);
      if (cVar3 == '\0') {
LAB_140dcc705:
        cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x14);
        if (cVar3 != '\0') {
          uVar8 = FWeakObjectPtr::Get(param_1 + 0x14);
          FUN_140ba3700(uVar8);
        }
      }
      else {
        uVar8 = FWeakObjectPtr::Get(param_1 + 0x14);
        cVar3 = FUN_140bca8a0(uVar8);
        if (cVar3 == '\0') goto LAB_140dcc705;
        if (((*(int *)(param_1 + 0x460) != 0) &&
            (*(longlong **)(param_1 + 0x458) != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x458) + 0x18))(), cVar3 != '\0')) {
          if (*(int *)(param_1 + 0x460) == 0) {
            (**(code **)(_DAT_00000000 + 0x38))();
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 0x458) + 0x38))();
          }
        }
      }
    }
    else {
      plVar19 = *(longlong **)(param_1 + 0x300);
      puVar22 = &DAT_143f3eda8;
      iVar15 = *(int *)(param_1 + 0x308);
      for (plVar11 = plVar19; plVar11 != plVar19 + iVar15; plVar11 = plVar11 + 1) {
        if (*plVar11 == 0) {
LAB_140dcc4d1:
          bVar2 = false;
        }
        else {
          local_184 = local_184 | 0x100;
          puVar9 = (undefined8 *)UObjectBaseUtility::GetPathName(*plVar11,local_a0,0);
          if (*(int *)(param_1 + 0x100) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = *(undefined2 **)(param_1 + 0xf8);
          }
          if (*(int *)(puVar9 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar9;
          }
          iVar20 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar14);
          if (iVar20 != 0) goto LAB_140dcc4d1;
          bVar2 = true;
        }
        if (((local_184 >> 8 & 1) != 0) && (local_184 = local_184 & 0xfffffeff, local_a0[0] != 0)) {
          FMemory::Free();
        }
        if (bVar2) {
          iVar15 = (int)((longlong)plVar11 - (longlong)plVar19 >> 3);
          goto LAB_140dcc507;
        }
      }
      iVar15 = -1;
LAB_140dcc507:
      if (*(int *)(param_1 + 0x308) < 2) {
LAB_140dcc5a1:
        iVar15 = *(int *)(param_1 + 0x308);
        if (0 < iVar15) {
          iVar20 = rand();
          uVar6 = (uint)((float)iVar20 * 3.051851e-05 * (float)iVar15);
          uVar5 = iVar15 - 1U;
          if ((int)uVar6 <= (int)(iVar15 - 1U)) {
            uVar5 = uVar6;
          }
          goto LAB_140dcc5d7;
        }
      }
      else {
        if (*(int *)(param_1 + 0x68) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = *(undefined2 **)(param_1 + 0x60);
        }
        if (*(int *)(param_1 + 0x110) != 0) {
          puVar22 = *(undefined2 **)(param_1 + 0x108);
        }
        iVar20 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar22,puVar14);
        if (((iVar20 != 0) || (iVar15 < 0)) ||
           (iVar20 = *(int *)(param_1 + 0x308), iVar20 <= iVar15)) goto LAB_140dcc5a1;
        if (iVar20 + -1 < 1) {
          uVar5 = (uint)(iVar15 < 1);
        }
        else {
          iVar4 = rand();
          uVar5 = (uint)((float)iVar4 * 3.051851e-05 * (float)(iVar20 + -1));
          uVar6 = iVar20 - 2U;
          if ((int)uVar5 <= (int)(iVar20 - 2U)) {
            uVar6 = uVar5;
          }
          uVar5 = uVar6 + 1;
          if ((int)uVar6 < iVar15) {
            uVar5 = uVar6;
          }
        }
LAB_140dcc5d7:
        if ((int)uVar5 < 0) goto LAB_140dcc723;
      }
      if ((int)uVar5 < *(int *)(param_1 + 0x308)) {
        uVar8 = UObjectBaseUtility::GetPathName
                          (*(undefined8 *)
                            (*(longlong *)(param_1 + 0x300) + (longlong)(int)uVar5 * 8),&local_e8,0)
        ;
        FString::operator=(param_1 + 0xf8,uVar8);
        if (local_e8 != 0) {
          FMemory::Free();
        }
        FString::operator=(param_1 + 0x108,param_1 + 0x60);
        FString::operator=(&local_f8,param_1 + 0xf8);
        if (((*(int *)(param_1 + 0x470) != 0) &&
            (*(longlong **)(param_1 + 0x468) != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x468) + 0x18))(), cVar3 != '\0')) {
          if (*(int *)(param_1 + 0x470) == 0) {
            (**(code **)(_DAT_00000000 + 0x38))
                      (0,*(undefined8 *)(*(longlong *)(param_1 + 0x300) + (longlong)(int)uVar5 * 8))
            ;
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 0x468) + 0x38))();
          }
        }
      }
    }
LAB_140dcc723:
    plStack_e0 = &local_f8;
    local_e8 = param_1;
    local_d8 = (float)FUN_140dbdaa0(param_1);
    local_d8 = local_d8 - *(float *)(param_1 + 0x90);
    uStack_d4 = local_158;
    uStack_d0 = local_170;
    local_58 = (longlong *)0x0;
    if (local_d8 <= 0.0) {
      local_d8 = 0.0;
    }
    local_48 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x28,local_78);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &PTR_FUN_143ff7760;
      puVar9[1] = local_e8;
      puVar9[2] = plStack_e0;
      puVar9[3] = CONCAT44(uStack_d4,local_d8);
      puVar9[4] = CONCAT44(uStack_cc,uStack_d0);
    }
    local_138[0] = 0;
    local_88[0] = &LAB_140db2af0;
    local_138[1] = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138,0);
    FGenericPlatformString::Memcpy(local_138[0],L"matchmaking_complete",0x2a);
    FUN_140dcdc50(param_1,local_138,local_88);
    if (local_138[0] != 0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      plVar19 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar19 = local_58;
      }
      if (plVar19 != (longlong *)0x0) {
        (**(code **)(*plVar19 + 0x10))(plVar19,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_f8 != 0) {
      FMemory::Free();
    }
  }
  if (local_188 != '\0') {
    local_138[5] = 0x120;
    FUN_140dc5cf0(param_1,0x120,1);
  }
  FUN_140dc2b80(param_1);
LAB_140dcc852:
  FUN_1404bebc0(&local_180);
  return;
}



// FUNCTION 140dcc8a0 FUN_140dcc8a0 body=693 status=ok
// SIG undefined FUN_140dcc8a0(void)

void FUN_140dcc8a0(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_res10;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong *local_68;
  longlong *local_58;
  
  if (param_2 == 0x11f) {
    plVar3 = (longlong *)*param_3;
    plVar4 = (longlong *)param_3[1];
    local_res10 = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    plVar2 = (longlong *)(param_1 + 0x158);
    local_58 = plVar3;
    if (*(int *)(param_1 + 0x160) != *(int *)(param_1 + 0x18c)) {
      if ((plVar3 == (longlong *)0x0) || (cVar7 = (**(code **)(*plVar3 + 0x20))(), cVar7 == '\0')) {
        iVar8 = -1;
      }
      else {
        iVar8 = GetTypeHash(plVar3);
      }
      lVar10 = *(longlong *)(param_1 + 0x198);
      if (*(longlong *)(param_1 + 0x198) == 0) {
        lVar10 = param_1 + 400;
      }
      iVar8 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x1a0) - 1U & (longlong)iVar8) * 4);
      if (iVar8 != -1) {
        lVar10 = *plVar2;
        do {
          lVar11 = (longlong)iVar8 * 0x38;
          plVar5 = *(longlong **)(lVar11 + 8 + lVar10);
          if ((((plVar5 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar5 + 0x20))(), cVar7 == '\0')) ||
              (plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3), cVar7 == '\0')) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          plVar5 = *(longlong **)(lVar11 + lVar10 + 8);
          if ((((plVar5 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar5 + 0x20))(), cVar7 == '\0')) &&
              ((plVar3 == (longlong *)0x0 ||
               (cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3), cVar7 == '\0')))) ||
             ((bVar6 && (cVar7 = (**(code **)*plVar3)(plVar3,*(undefined8 *)(lVar11 + lVar10 + 8)),
                        cVar7 != '\0')))) {
            if (iVar8 != -1) {
              local_res10 = *(undefined8 *)(lVar11 + 0x28 + *plVar2);
              TSet<TTuple<FUniqueNetIdMixer,TSharedPtr<FMixerChatUser,0>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdMixer,TSharedPtr<FMixerChatUser,0>,0>,FDefaultSetAllocator>
              ::Remove(plVar2,iVar8);
              bVar6 = false;
              goto LAB_140dcca23;
            }
            break;
          }
          lVar10 = *plVar2;
          iVar8 = *(int *)(lVar11 + 0x30 + lVar10);
        } while (iVar8 != -1);
      }
    }
    bVar6 = true;
LAB_140dcca23:
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    if (!bVar6) {
      puVar9 = (undefined8 *)FName::FName(local_78,L"SPARK",1);
      FUN_1404d0c50(&local_70,*puVar9);
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 0x308))(local_70,&local_res10);
      }
      TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
                (param_1 + 0x90,param_3,param_4);
      plVar3 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_68 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140dccb60 FUN_140dccb60 body=277 status=ok
// SIG undefined FUN_140dccb60(void)

void FUN_140dccb60(longlong param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((param_2 == 0x120) && (*(longlong *)(param_1 + 0x340) != 0)) &&
     (cVar1 = (*(code *)**(undefined8 **)*param_3)(), cVar1 != '\0')) {
    FUN_140db5ba0(param_1);
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x14);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x14);
      lVar3 = FUN_140bb7900(uVar2);
      if (lVar3 != 0) {
        if (param_4 != 1) {
          FUN_140db3670(param_1,0xd);
          return;
        }
        FUN_140db86e0();
        return;
      }
    }
    if (param_4 != 1) {
      cVar1 = FUN_140dc0f80(param_1);
      if (cVar1 != '\0') {
        uVar2 = 0xd;
        if (param_4 == 4) {
          uVar2 = 7;
        }
        FUN_140dcedd0(param_1,uVar2);
        return;
      }
      if (param_4 == 4) {
        FUN_140db3670(param_1,7);
        return;
      }
      FUN_140db2520(param_1);
    }
  }
  return;
}



// FUNCTION 140dccc80 FUN_140dccc80 body=224 status=ok
// SIG undefined FUN_140dccc80(void)

void FUN_140dccc80(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 local_res10;
  longlong *local_18;
  longlong *local_10;
  
  plVar7 = (longlong *)0x0;
  local_res10 = 0x11f;
  if (param_2 == 0x11f) {
    puVar6 = (undefined8 *)FName::FName(&local_res10,L"SPARK",1);
    FUN_1404d0c50(&local_18,*puVar6);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x90))(local_18,param_1 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x18) = param_3;
    if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
      cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
      if (cVar5 != '\0') {
        if (*(int *)(param_1 + 0x10) != 0) {
          plVar7 = *(longlong **)(param_1 + 8);
        }
        (**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    plVar7 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140dccd60 FUN_140dccd60 body=162 status=ok
// SIG undefined FUN_140dccd60(void)

void FUN_140dccd60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_18;
  longlong *local_10;
  
  puVar3 = (undefined8 *)(param_1 + 0xc0);
  (**(code **)(*(longlong *)*puVar3 + 0x10))((longlong *)*puVar3,param_1);
  local_10 = (longlong *)0x0;
  if (puVar3 != &local_18) {
    *puVar3 = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 200,&local_10);
    plVar6 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  FUN_140dcd8b0(param_1);
  return;
}



// FUNCTION 140dcce10 FUN_140dcce10 body=45 status=ok
// SIG undefined FUN_140dcce10(void)

void FUN_140dcce10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    TBaseMulticastDelegate<void>::Remove
              (*(longlong *)(param_1 + 0x18) + 0x28,*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 140dcce40 FUN_140dcce40 body=941 status=ok
// SIG undefined FUN_140dcce40(void)

void FUN_140dcce40(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 local_res10 [8];
  longlong *local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong *local_28 [2];
  
  iVar8 = *(int *)(param_1 + 0x78);
joined_r0x000140dcce58:
  if (9 < iVar8 - 1U) {
    return;
  }
  switch(iVar8 - 1U) {
  case 0:
    Online::GetIdentityInterface(&local_48,0);
    if ((local_48 == (longlong *)0x0) || (cVar2 = (**(code **)(*local_48 + 0x10))(), cVar2 != '\0'))
    {
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
      FUN_140dcce40(param_1);
      plVar4 = local_40;
      if (local_40 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar5 = local_40 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 != 1) {
        return;
      }
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 != 1) {
        return;
      }
      (**(code **)(*local_40 + 8))(local_40,1);
      return;
    }
    FUN_140dbf430(param_1,*(undefined8 *)(param_1 + 0x20),1);
    plVar4 = local_40;
    if (local_40 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar5 = local_40 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) {
      return;
    }
    (**(code **)*local_40)(local_40);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 != 1) {
      return;
    }
    (**(code **)(*local_40 + 8))(local_40,1);
    return;
  case 1:
    FUN_140db3d30(param_1);
    return;
  case 2:
    uVar3 = thunk_FUN_1422ca050();
    cVar2 = FUN_140a0b280(uVar3);
    if (cVar2 == '\0') {
      lVar6 = *(longlong *)(param_1 + 0x20);
      if (lVar6 == (longlong)*(int *)(param_1 + 0x28) * 0x10 + lVar6) {
        return;
      }
      FUN_140dbf430(param_1,lVar6,3);
      return;
    }
    break;
  case 3:
    FUN_140db4510(param_1);
    return;
  case 4:
    lVar6 = operator_new(0x70);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_140da8a70(lVar6,param_1 + 0x20,0,*(undefined1 *)(param_1 + 0x31));
    }
    puVar9 = &LAB_140dc9b40;
LAB_140dcd11d:
    *(longlong *)(param_1 + 0x88) = lVar6;
    FUN_1404b8b20(lVar6 + 0x10,param_1,puVar9);
    FUN_140dcdb10(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x88));
    return;
  case 5:
    if (*(char *)(param_1 + 0x30) != '\0') {
      lVar6 = operator_new(0x70);
      if (lVar6 == 0) {
        lVar6 = 0;
        puVar9 = &LAB_140dc58b0;
      }
      else {
        lVar6 = FUN_140da8a70(lVar6,param_1 + 0x20,2,*(undefined1 *)(param_1 + 0x31));
        puVar9 = &LAB_140dc58b0;
      }
      goto LAB_140dcd11d;
    }
    iVar8 = iVar8 + 1;
    *(int *)(param_1 + 0x78) = iVar8;
    goto joined_r0x000140dcce58;
  case 6:
    if ((*(char *)(param_1 + 0x7c) != '\0') &&
       (plVar4 = (longlong *)FUN_140bba5e0(*(undefined8 *)(param_1 + 0x38)),
       plVar4 != (longlong *)0x0)) {
      local_58 = (longlong *)0x0;
      plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
      local_50 = 3;
      local_58 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        plVar5[1] = param_1;
        *plVar5 = (longlong)&DAT_143f3ed00;
        plVar5[2] = (longlong)FUN_140dc62c0;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[4] = lVar6;
        *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar4 + 0x60))(plVar4,local_res10,&local_58);
      *(undefined8 *)(param_1 + 0x90) = *puVar7;
      if (local_50 != 0) {
        if (local_58 == (longlong *)0x0) goto LAB_140dccfe8;
        (**(code **)(*local_58 + 0x28))(local_58,0);
        if (local_58 != (longlong *)0x0) {
          local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
        }
        local_50 = 0;
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free(local_58);
      }
LAB_140dccfe8:
      FUN_140d2ae90(plVar4,*(undefined8 *)(param_1 + 0x20));
      return;
    }
    break;
  case 7:
    FUN_140db4e70(param_1);
    return;
  case 8:
    *(undefined4 *)(param_1 + 0x150) = 0;
    FUN_140db4000(param_1);
    return;
  case 9:
    local_38 = 0;
    local_28[0] = (longlong *)0x0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    if ((undefined8 *)(param_1 + 0x58) != &local_30) {
      *(undefined8 *)(param_1 + 0x58) = 0;
      local_30 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x60,local_28);
      plVar4 = local_28[0];
      if (local_28[0] != (longlong *)0x0) {
        LOCK();
        plVar5 = local_28[0] + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_28[0])(local_28[0]);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_28[0] + 8))(local_28[0],1);
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  iVar8 = *(int *)(param_1 + 0x78);
  goto joined_r0x000140dcce58;
}



// FUNCTION 140dcd220 FUN_140dcd220 body=851 status=ok
// SIG undefined FUN_140dcd220(void)

ulonglong FUN_140dcd220(longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong in_RAX;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  int local_res8 [2];
  uint local_38;
  undefined4 local_34;
  undefined1 local_30 [8];
  
  if (param_1 != 0) {
    lVar11 = *param_4;
    local_res8[0] = FUN_140bb8dc0();
    lVar11 = lVar11 + 0x20;
    FUN_1404ab0b0(lVar11,DAT_14686f240,local_res8,0);
    cVar4 = FUN_140bca8a0(param_1);
    local_38 = (uint)(cVar4 != '\0');
    if (cVar4 == '\0') {
      FUN_1404ab0b0(lVar11,DAT_14686f248,&local_38,0);
    }
    local_34 = FUN_140bb9090(param_1);
    puVar7 = (undefined8 *)FName::FName(local_30,L"SEARCHCROSSPLAY",1);
    FUN_1404ab0b0(lVar11,*puVar7,&local_34,0);
    in_RAX = FUN_140db9720(param_2);
    if (((in_RAX != 0) && (-1 < param_3)) && (param_3 < *(int *)(in_RAX + 0x78))) {
      lVar11 = *(longlong *)(in_RAX + 0x70) + (longlong)param_3 * 0x28;
      if (*(char *)(lVar11 + 0x10) != '\0') {
        local_res8[0] = FUN_140bb90b0(param_1);
        FUN_1404ab0b0(*param_4 + 0x20,DAT_14686f250,local_res8,0);
      }
      plVar12 = *(longlong **)(lVar11 + 0x18);
      plVar1 = plVar12 + (longlong)*(int *)(lVar11 + 0x20) * 3;
      lVar8 = DAT_14686f260;
      for (; plVar12 != plVar1; plVar12 = plVar12 + 3) {
        if ((((((plVar12[1] != lVar8) || (*(char *)(lVar11 + 0x10) == '\0')) ||
              (cVar4 = FUN_140bca690(param_1), lVar8 = DAT_14686f260, cVar4 == '\0')) &&
             (((lVar2 = *plVar12, lVar2 == DAT_14686f258 || (lVar2 == lVar8)) ||
              (((lVar2 == DAT_14686f270 ||
                (((lVar2 == DAT_14686f268 || (lVar2 == DAT_14686f278)) || (lVar2 == DAT_14686f288)))
                ) || ((lVar2 == DAT_14686f280 || (lVar2 == DAT_14686f290)))))))) &&
            ((lVar3 = plVar12[1], lVar3 == DAT_14686f258 ||
             (((lVar3 == lVar8 || (lVar3 == DAT_14686f270)) ||
              ((lVar3 == DAT_14686f268 ||
               ((((lVar3 == DAT_14686f278 || (lVar3 == DAT_14686f288)) || (lVar3 == DAT_14686f280))
                || (lVar3 == DAT_14686f290)))))))))) && ((char)plVar12[2] != '\0')) {
          if (lVar2 == DAT_14686f258) {
            iVar5 = FUN_140bb92e0(param_1);
          }
          else if (lVar2 == lVar8) {
            iVar5 = FUN_140bb9330(param_1);
          }
          else if (lVar2 == DAT_14686f270) {
            uVar10 = *(uint *)((longlong)plVar12 + 0x14);
            iVar5 = FUN_140bb9330(param_1);
            uVar9 = (int)uVar10 >> 0x1f;
            iVar5 = iVar5 + ((uVar10 ^ uVar9) - uVar9);
          }
          else if (lVar2 == DAT_14686f268) {
            iVar5 = FUN_140bb9330(param_1);
            uVar10 = (int)*(uint *)((longlong)plVar12 + 0x14) >> 0x1f;
            iVar5 = iVar5 - ((*(uint *)((longlong)plVar12 + 0x14) ^ uVar10) - uVar10);
            if (iVar5 < 2) {
              iVar5 = 1;
            }
          }
          else if (lVar2 == DAT_14686f278) {
            iVar5 = FUN_140bb93e0(param_1);
          }
          else if (lVar2 == DAT_14686f288) {
            uVar10 = *(uint *)((longlong)plVar12 + 0x14);
            uVar9 = (int)uVar10 >> 0x1f;
            iVar5 = FUN_140bb93e0(param_1);
            iVar5 = ((uVar10 ^ uVar9) - uVar9) + iVar5;
          }
          else if (lVar2 == DAT_14686f280) {
            iVar5 = FUN_140bb93e0(param_1);
            uVar10 = (int)*(uint *)((longlong)plVar12 + 0x14) >> 0x1f;
            iVar5 = iVar5 - ((*(uint *)((longlong)plVar12 + 0x14) ^ uVar10) - uVar10);
            if (iVar5 < 1) {
              iVar5 = 0;
            }
          }
          else {
            iVar5 = 0;
            if (lVar2 == DAT_14686f290) {
              iVar5 = FUN_140bb9430(param_1);
            }
          }
          local_res8[0] = iVar5;
          uVar6 = FUN_140dd5560((char)plVar12[2]);
          FUN_1404aaf50(*param_4 + 0x20,*plVar12,local_res8,uVar6,plVar12[1]);
          lVar8 = DAT_14686f260;
        }
      }
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140dcd580 FUN_140dcd580 body=579 status=ok
// SIG undefined FUN_140dcd580(void)

ulonglong FUN_140dcd580(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 local_res20;
  undefined1 local_68 [8];
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  
  if (0 < *(int *)(param_1 + 0x360)) {
    puVar8 = (undefined8 *)FName::FName(local_68,L"SPARK",1);
    FUN_1404d0c50(&local_60,*puVar8);
    if ((local_60 != (longlong *)0x0) &&
       (lVar9 = (**(code **)(*local_60 + 0x10))(local_60,0x120), lVar9 != 0)) {
      lVar11 = *(longlong *)(param_1 + 0x358);
      lVar9 = lVar11 + (longlong)*(int *)(param_1 + 0x360) * 0x28;
      for (; lVar11 != lVar9; lVar11 = lVar11 + 0x28) {
        if ((*(longlong **)(lVar11 + 8) != (longlong *)0x0) &&
           (cVar7 = (**(code **)(**(longlong **)(lVar11 + 8) + 0x20))(), cVar7 != '\0')) {
          local_50 = *(undefined8 *)(lVar11 + 8);
          local_48 = *(longlong **)(lVar11 + 0x10);
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
          }
          (**(code **)(*local_60 + 0x2f8))(local_60,0x120,&local_50);
          plVar4 = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_48 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_48)(local_48);
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
          if (*(char *)(param_1 + 0x10) == '\x03') {
            plVar4 = *(longlong **)(lVar11 + 0x10);
            uVar5 = *(undefined8 *)(lVar11 + 8);
            if (plVar4 == (longlong *)0x0) {
LAB_140dcd6e4:
              local_res20 = uVar5;
              FUN_1404bb3d0(param_1 + 0xd0,&local_res20);
              FUN_140db86e0(param_1);
            }
            else {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              if (*(char *)(param_1 + 0x10) == '\x03') goto LAB_140dcd6e4;
            }
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
          }
        }
      }
    }
    FUN_140bafce0(param_1 + 0x358,0);
    plVar4 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x368) = 0;
  uVar10 = FUN_140db86e0(param_1);
  return uVar10 & 0xffffffffffffff00;
}



// FUNCTION 140dcd7d0 FUN_140dcd7d0 body=182 status=ok
// SIG undefined FUN_140dcd7d0(void)

ulonglong FUN_140dcd7d0(void)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  plVar2 = DAT_14686f4b8 + DAT_14686f4c0;
  uVar5 = (longlong)DAT_14686f4c0 & 0x1fffffffffffffff;
  if (plVar2 < DAT_14686f4b8) {
    uVar5 = uVar3;
  }
  plVar4 = DAT_14686f4b8;
  if (uVar5 != 0) {
    do {
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        if (*(longlong *)(lVar1 + 8) != 0) {
          FMemory::Free();
        }
        plVar2 = (longlong *)FMemory::operator_delete(lVar1,0x20);
      }
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar3 != uVar5);
  }
  DAT_14686f4c0 = 0;
  if (DAT_14686f4c4 != 0) {
    plVar2 = (longlong *)TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_14686f4b8,0);
  }
  DAT_14686f3b8 = 0;
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 140dcd8b0 FUN_140dcd8b0 body=441 status=ok
// SIG undefined FUN_140dcd8b0(void)

void FUN_140dcd8b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong local_28;
  longlong *local_20;
  longlong local_18 [2];
  
  plVar2 = (longlong *)(param_1 + 0xc0);
  if ((*plVar2 == 0) && (0 < *(int *)(param_1 + 0xd8))) {
    local_20 = (longlong *)(*(longlong **)(param_1 + 0xd0))[1];
    local_28 = **(longlong **)(param_1 + 0xd0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    if (plVar2 != &local_28) {
      *plVar2 = local_28;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 200,&local_20);
    }
    plVar5 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_20 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (param_1 + 0xd0,0,1,1);
    lVar7 = *plVar2;
    plVar8 = (longlong *)(lVar7 + 8);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = param_1;
      *plVar5 = (longlong)&DAT_143f3ed00;
      plVar5[2] = (longlong)FUN_140dccd60;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar6;
      *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_18 != plVar8) {
      if (plVar5 == (longlong *)0x0) {
        if ((*(int *)(lVar7 + 0x10) != 0) &&
           (plVar4 = (longlong *)*plVar8, plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*plVar8 != 0) {
            lVar6 = FMemory::Realloc(*plVar8,0,0);
            *plVar8 = lVar6;
          }
          *(undefined4 *)(lVar7 + 0x10) = 0;
        }
      }
      else {
        (**(code **)(*plVar5 + 0x30))(plVar5,plVar8);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar7 = FMemory::Realloc(plVar5,0,0);
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
    (**(code **)(*(longlong *)*plVar2 + 8))();
  }
  return;
}



// FUNCTION 140dcda70 FUN_140dcda70 body=156 status=ok
// SIG undefined FUN_140dcda70(void)

void FUN_140dcda70(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    TBaseMulticastDelegate<void>::Remove
              (*(longlong *)(param_1 + 0x18) + 0x40,*(undefined8 *)(param_1 + 0x58));
    iVar2 = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (0 < param_2) {
      do {
        if (*(int *)(param_1 + 0x38) < 1) break;
        FUN_1404de5f0(param_1 + 0x30,0,1,1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      FUN_140dcdda0(param_1);
      if (*(longlong *)(param_1 + 0x50) != 0) {
        uVar1 = FUN_14164ab60();
        FUN_141597530(uVar1,*(undefined8 *)(param_1 + 0x50));
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140dcdb10 FUN_140dcdb10 body=314 status=ok
// SIG undefined FUN_140dcdb10(void)

void FUN_140dcdb10(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  if (param_2 != (longlong *)0x0) {
    if (*param_1 == 0) {
      *param_1 = (longlong)param_2;
      (**(code **)(*param_2 + 8))(param_2);
    }
    else {
      iVar1 = (int)param_1[2];
      *(int *)(param_1 + 2) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0x14) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 1,iVar1);
      }
      *(longlong **)(param_1[1] + (longlong)iVar1 * 8) = param_2;
    }
  }
  if (param_1[3] == 0) {
    local_18 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_10 = 3;
    local_18 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      plVar2[1] = (longlong)param_1;
      *plVar2 = (longlong)&PTR_GetPoolName_143f3f4f8;
      plVar2[2] = (longlong)FUN_140dd4ca0;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
    }
    uVar4 = FUN_14164ab60();
    plVar2 = (longlong *)FUN_14158f860(uVar4,local_res8,&local_18,L"FGbxOnlineTaskQueue_Tick",0);
    param_1[3] = *plVar2;
    if (local_10 != 0) {
      if (local_18 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_18 + 0x28))(local_18,0);
      if (local_18 != (longlong *)0x0) {
        local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
      }
      local_10 = 0;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}



// FUNCTION 140dcdc50 FUN_140dcdc50 body=328 status=ok
// SIG undefined FUN_140dcdc50(void)

void FUN_140dcdc50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28 [3];
  longlong *plStack_10;
  
  FUN_140dbc950(param_1,&local_38);
  plVar6 = plStack_30;
  if (local_38 != 0) {
    local_28[1] = 0xc;
    local_28[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"matchmaking",0x18);
    plVar6 = plStack_30;
    local_28[2] = local_38;
    plStack_10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    uVar5 = FUN_142b45ee0();
    FUN_142b63240(uVar5,local_28 + 2,local_28,param_2,param_3);
    plVar4 = plStack_10;
    if (plStack_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_10 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      plVar6 = plStack_30;
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_10)(plStack_10);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar6 = plStack_30;
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
          plVar6 = plStack_30;
        }
      }
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  plVar4 = plStack_30;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar6 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140dcdda0 FUN_140dcdda0 body=803 status=ok
// SIG undefined FUN_140dcdda0(void)

void FUN_140dcdda0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong local_78;
  longlong *local_70;
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    return;
  }
  plVar9 = (longlong *)FUN_140bba5e0();
  if ((*(longlong *)(param_1 + 0x10) != 0) && (plVar9 != (longlong *)0x0)) {
    plVar10 = (longlong *)UListView::OnItemSelectionChanged();
    plVar13 = (longlong *)*plVar10;
    plVar10 = plVar13 + (int)plVar10[1];
    plVar14 = plVar9;
    plVar15 = plVar9;
    for (; plVar13 != plVar10; plVar13 = plVar13 + 1) {
      if (*plVar13 == 0) {
        bVar5 = true;
        plVar15 = (longlong *)0x0;
        lVar11 = 0;
        plVar12 = (longlong *)0x0;
      }
      else {
        bVar7 = true;
        bVar6 = true;
        lVar11 = FUN_142547b50(*plVar13,local_68);
        plVar12 = *(longlong **)(lVar11 + 0x10);
        lVar11 = *(longlong *)(lVar11 + 8);
        plVar14 = plVar12;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
      }
      if ((bVar5) && (bVar5 = false, plVar15 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plVar15 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      if ((bVar6) && (bVar6 = false, plVar14 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plVar14 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      if (bVar7) {
        bVar7 = false;
        local_68[0] = &PTR_FUN_143f740c8;
        if (local_50 != 0) {
          FMemory::Free();
        }
        plVar1 = local_58;
        local_68[0] = &PTR_FUN_143f73d18;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_58 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_58)(local_58);
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
      }
      if (lVar11 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_78 = lVar11;
        local_70 = plVar12;
        lVar11 = FUN_140d3a750(plVar9,&local_78);
        plVar1 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_70 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_70)(local_70);
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
        if (lVar11 != 0) {
          if (*(int *)(param_1 + 0x28) == 0) {
            FUN_140d4ced0(lVar11);
          }
          else if (*(int *)(param_1 + 0x28) == 1) {
            FUN_140d4cf00(lVar11);
          }
        }
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
    }
    FUN_140bf8330(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x40) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 140dce0d0 FUN_140dce0d0 body=408 status=ok
// SIG undefined FUN_140dce0d0(void)

void FUN_140dce0d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  FUN_1404dda20();
  lVar2 = DAT_146b17150;
  plVar7 = (longlong *)(DAT_146b17150 + 0x9e8);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_1442e8218;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    plVar3[2] = (longlong)FUN_140dbf500;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_1442e8260;
  }
  uVar6 = 0;
  if (plVar3 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = *(int *)(lVar2 + 0x9f0);
    uVar6 = *puVar5;
    *(int *)(lVar2 + 0x9f0) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x9f4) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 0x1c8) = uVar6;
  lVar2 = DAT_146b17150;
  plVar7 = (longlong *)(DAT_146b17150 + 0x9d0);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  else {
    *plVar3 = (longlong)&PTR_FUN_143f77df8;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    plVar3[2] = (longlong)FUN_140dbf5d0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f77e40;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = *(int *)(lVar2 + 0x9d8);
    uVar6 = *puVar5;
    *(int *)(lVar2 + 0x9d8) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x9dc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
    *(undefined8 *)(param_1 + 0x1d0) = uVar6;
  }
  return;
}



// FUNCTION 140dce270 FUN_140dce270 body=454 status=ok
// SIG undefined FUN_140dce270(void)

void FUN_140dce270(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  int local_38;
  
  puVar5 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  FUN_1404d0c50(&local_50,*puVar5);
  plVar7 = local_50;
  if (local_50 == (longlong *)0x0) goto LAB_140dce3e5;
  local_58 = (longlong *)param_2[1];
  local_60 = *param_2;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x328) != &local_60) {
    *(undefined8 *)(param_1 + 0x328) = local_60;
    local_60 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x330,&local_58);
  }
  plVar2 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_58 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = local_50;
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = local_50;
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
        plVar7 = local_50;
      }
    }
  }
  lVar4 = *plVar7;
  uVar6 = FUN_140da5c30(&local_40,param_1,FUN_140dca020);
  puVar5 = (undefined8 *)(**(code **)(lVar4 + 0x2d8))(plVar7,local_68,uVar6);
  *(undefined8 *)(param_1 + 0x338) = *puVar5;
  if (local_38 == 0) {
LAB_140dce3bd:
    if (local_40 != (longlong *)0x0) {
      FMemory::Free(local_40);
    }
  }
  else if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x28))(local_40,0);
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)FMemory::Realloc(local_40,0,0);
    }
    local_38 = 0;
    goto LAB_140dce3bd;
  }
  (**(code **)(*plVar7 + 0x2d0))(plVar7,0x120,param_2);
LAB_140dce3e5:
  plVar7 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  return;
}



// FUNCTION 140dce440 Remove body=152 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FUniqueNetIdMixer,TSharedPtr<FMixerChatUser,0>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdMixer,TSharedPtr<FMixerChatUser,0>,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar6 = (longlong)param_2 * 0x38;
    lVar4 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar6 + 0x34 + lVar2));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)(lVar6 + 0x30 + lVar2);
        break;
      }
      piVar5 = (int *)(lVar2 + 0x30 + (longlong)iVar1 * 0x38);
      iVar1 = *piVar5;
    }
  }
  FUN_1404bf980((longlong)param_2 * 0x38 + *param_1);
  TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 140dce4e0 FUN_140dce4e0 body=165 status=ok
// SIG undefined FUN_140dce4e0(void)

void FUN_140dce4e0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar1 = FUN_140db9680(param_2,param_1);
    if ((-1 < iVar1) && (iVar2 = (int)param_1[1], iVar1 < iVar2)) {
      if (*(longlong *)((longlong)iVar1 * 0x28 + *param_1) != 0) {
        FMemory::Free();
        iVar2 = (int)param_1[1];
      }
      iVar3 = (iVar2 - iVar1) + -1;
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar1 * 0x28),
                   (void *)(*param_1 + (longlong)(iVar1 + 1) * 0x28),(longlong)iVar3 * 0x28);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 + -1;
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140dce590 FUN_140dce590 body=115 status=ok
// SIG undefined FUN_140dce590(void)

void FUN_140dce590(longlong *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (((-1 < param_2) && (iVar3 = FUN_140db9600(param_2,param_1), -1 < iVar3)) &&
     (iVar3 < (int)param_1[1])) {
    puVar2 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x28);
    if (*(int *)(*param_1 + 8 + (longlong)iVar3 * 0x28) == 1) {
      piVar4 = (int *)*puVar2;
      piVar1 = piVar4 + 1;
      for (; (piVar4 != piVar1 && (*piVar4 != param_2)); piVar4 = piVar4 + 1) {
      }
    }
    FUN_140dce610(param_2,puVar2,0,param_1);
    FUN_140db55b0(param_1);
  }
  return;
}



// FUNCTION 140dce610 FUN_140dce610 body=217 status=ok
// SIG undefined FUN_140dce610(void)

void FUN_140dce610(int param_1,undefined8 *param_2,char param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_res8 [2];
  
  if (-1 < param_1) {
    iVar1 = *(int *)(param_2 + 1);
    local_res8[0] = param_1;
    if (iVar1 == 1) {
      piVar4 = (int *)*param_2;
      piVar2 = piVar4 + 1;
      for (; piVar4 != piVar2; piVar4 = piVar4 + 1) {
        if (*piVar4 == param_1) {
          if (param_3 != '\0') {
            TArray<FSetElementId,FDefaultAllocator>::RemoveSingle(param_2,local_res8);
          }
          *(undefined1 *)(param_2 + 4) = 0;
          FUN_140db55b0(param_4);
          return;
        }
      }
    }
    piVar2 = (int *)*param_2;
    piVar4 = piVar2;
    if (piVar2 != piVar2 + iVar1) {
      while (*piVar4 != param_1) {
        piVar4 = piVar4 + 1;
        if (piVar4 == piVar2 + iVar1) {
          FUN_140db55b0(param_4);
          return;
        }
      }
      iVar3 = (int)((longlong)piVar4 - (longlong)piVar2 >> 2);
      if (iVar3 != -1) {
        _guard_xfg_dispatch_icall_nop
                  (piVar2 + iVar3,piVar2 + iVar3 + 1,(longlong)((iVar1 - iVar3) + -1) << 2);
        *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + -1;
      }
    }
    FUN_140db55b0(param_4);
  }
  return;
}



// FUNCTION 140dce6f0 FUN_140dce6f0 body=100 status=ok
// SIG undefined FUN_140dce6f0(void)

void FUN_140dce6f0(int param_1,int param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  int *piVar2;
  
  if (-1 < param_1) {
    if ((-1 < param_2) && (param_2 < (int)param_4[1])) {
      if (*(int *)(*param_4 + 8 + (longlong)param_2 * 0x28) == 1) {
        piVar2 = *(int **)(*param_4 + (longlong)param_2 * 0x28);
        piVar1 = piVar2 + 1;
        for (; (piVar2 != piVar1 && (*piVar2 != param_1)); piVar2 = piVar2 + 1) {
        }
      }
      FUN_140dce610(param_1);
    }
    FUN_140db55b0(param_4);
  }
  return;
}



// FUNCTION 140dce760 FUN_140dce760 body=989 status=ok
// SIG undefined FUN_140dce760(void)

void FUN_140dce760(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  longlong *local_d8;
  int local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined **local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined ***local_88;
  undefined1 *local_80;
  undefined1 local_78 [16];
  longlong *local_68;
  
  plVar10 = (longlong *)*param_2;
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)(param_1 + 0x158);
  local_68 = plVar10;
  if (*(int *)(param_1 + 0x160) != *(int *)(param_1 + 0x18c)) {
    if ((plVar10 == (longlong *)0x0) || (cVar5 = (**(code **)(*plVar10 + 0x20))(), cVar5 == '\0')) {
      iVar6 = -1;
    }
    else {
      iVar6 = GetTypeHash(plVar10);
    }
    lVar9 = *(longlong *)(param_1 + 0x198);
    if (*(longlong *)(param_1 + 0x198) == 0) {
      lVar9 = param_1 + 400;
    }
    iVar6 = *(int *)(lVar9 + ((longlong)*(int *)(param_1 + 0x1a0) - 1U & (longlong)iVar6) * 4);
    if (iVar6 != -1) {
      lVar9 = *plVar2;
      do {
        lVar11 = (longlong)iVar6 * 0x38;
        plVar3 = *(longlong **)(lVar11 + 8 + lVar9);
        if ((((plVar3 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar3 + 0x20))(), cVar5 == '\0')) ||
            (plVar10 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*plVar10 + 0x20))(plVar10), cVar5 == '\0')) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        plVar3 = *(longlong **)(lVar11 + lVar9 + 8);
        if ((((plVar3 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar3 + 0x20))(), cVar5 == '\0')) &&
            ((plVar10 == (longlong *)0x0 ||
             (cVar5 = (**(code **)(*plVar10 + 0x20))(plVar10), cVar5 == '\0')))) ||
           ((bVar4 && (cVar5 = (**(code **)*plVar10)(plVar10,*(undefined8 *)(lVar11 + lVar9 + 8)),
                      cVar5 != '\0')))) {
          if (iVar6 != -1) {
            lVar11 = *plVar2 + lVar11;
            goto LAB_140dce8b7;
          }
          break;
        }
        lVar9 = *plVar2;
        iVar6 = *(int *)(lVar11 + 0x30 + lVar9);
      } while (iVar6 != -1);
    }
  }
  lVar11 = 0;
LAB_140dce8b7:
  lVar9 = lVar11 + 0x28;
  if (lVar11 == 0) {
    lVar9 = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (lVar9 != 0) {
    return;
  }
  puVar7 = (undefined8 *)FName::FName(local_78,L"SPARK",1);
  FUN_1404d0c50(&local_c8,*puVar7);
  plVar10 = local_c8;
  if (local_c8 == (longlong *)0x0) {
    TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
              (param_1 + 0x90,param_2,2);
    goto LAB_140dceae7;
  }
  local_d8 = (longlong *)0x0;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  local_d0 = 3;
  local_d8 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&DAT_143f3ed00;
    plVar8[1] = param_1;
    plVar8[2] = (longlong)FUN_140dcc8a0;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[4] = lVar9;
    *plVar8 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  (**(code **)(*plVar10 + 0x300))(plVar10,local_90,&local_d8);
  if (local_d0 == 0) {
LAB_140dcea0d:
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  else if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x28))(local_d8,0);
    if (local_d8 != (longlong *)0x0) {
      local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
    }
    local_d0 = 0;
    goto LAB_140dcea0d;
  }
  local_b0 = *param_2;
  local_a8 = (longlong *)param_2[1];
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
    UNLOCK();
    plVar10 = local_c8;
  }
  local_88 = &local_b8;
  local_a0 = 0;
  local_80 = local_90;
  local_b8 = &PTR_FUN_143f740c8;
  local_98 = 0;
  FUN_140da61b0(plVar2,local_res18,&local_88,0);
  local_b8 = &PTR_FUN_143f740c8;
  if (local_a0 != 0) {
    FMemory::Free();
  }
  plVar8 = local_a8;
  local_b8 = &PTR_FUN_143f73d18;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_a8 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    plVar10 = local_c8;
    if ((int)lVar9 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar10 = local_c8;
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
        plVar10 = local_c8;
      }
    }
  }
  local_res20 = 0x11f;
  (**(code **)(*plVar10 + 0x2f8))(plVar10,0x11f,param_2);
LAB_140dceae7:
  plVar10 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_c0 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  return;
}



// FUNCTION 140dceb40 RemoveSingle body=108 status=ok
// SIG undefined RemoveSingle(void)

undefined8 TArray<FSetElementId,FDefaultAllocator>::RemoveSingle(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != piVar1 + *(int *)(param_1 + 1)) {
    piVar3 = piVar1;
    do {
      if (*piVar3 == *param_2) {
        iVar2 = (int)((longlong)piVar3 - (longlong)piVar1 >> 2);
        if (iVar2 == -1) {
          return 0;
        }
        ::_guard_xfg_dispatch_icall_nop
                  (piVar1 + iVar2,piVar1 + iVar2 + 1,
                   (longlong)((*(int *)(param_1 + 1) - iVar2) + -1) << 2);
        *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
        return 1;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1 + *(int *)(param_1 + 1));
  }
  return 0;
}



// FUNCTION 140dcebb0 FUN_140dcebb0 body=544 status=ok
// SIG undefined FUN_140dcebb0(void)

void FUN_140dcebb0(undefined8 *param_1,undefined1 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [16];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  longlong local_128;
  longlong *local_120;
  byte local_ff;
  longlong local_98;
  byte local_40;
  longlong local_38;
  longlong local_28;
  
  cVar2 = FUN_140bca8a0(*param_1);
  if (cVar2 == '\0') {
    lVar3 = FUN_14244f490(*param_1,0);
    if (lVar3 == 0) {
      return;
    }
    if (*(longlong *)(lVar3 + 0x460) != 0) {
      plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x460) + 0x4b8);
      if ((plVar4 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar4 + 0x20))(), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar3 = *(longlong *)(lVar3 + 0x460), lVar3 != 0)) {
        lVar5 = UInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_14146d910(lVar3,param_2);
        }
      }
      return;
    }
    return;
  }
  lVar3 = FUN_140bb6170();
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 200) == 0) {
    return;
  }
  local_res8[0] = param_2;
  plVar4 = (longlong *)FUN_1425bd330(*(longlong *)(lVar3 + 200),6);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  lVar3 = FUN_1404e6fc0();
  if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  local_res18[0] = 0x16;
  FUN_1423e4ec0(&local_128,plVar4,0);
  local_40 = local_40 | 0x20;
  if ((undefined4 *)local_120[1] < (undefined4 *)*local_120 + 1) {
    (**(code **)(local_128 + 0x50))(&local_128,local_res18,4);
    if ((local_ff & 0x10) != 0) {
      FArchive::ByteSwap(&local_128,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(undefined4 *)*local_120;
    *local_120 = *local_120 + 4;
  }
  if ((undefined1 *)local_120[1] < (undefined1 *)*local_120 + 1) {
    (**(code **)(local_128 + 0x50))(&local_128,local_res8,1);
  }
  else {
    local_res8[0] = *(undefined1 *)*local_120;
    *local_120 = *local_120 + 1;
  }
  (**(code **)(*plVar4 + 0x2c8))(plVar4,local_res20,&local_128,0);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_128);
  return;
}



// FUNCTION 140dcedd0 FUN_140dcedd0 body=301 status=ok
// SIG undefined FUN_140dcedd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dcedd0(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uStack_70 = CONCAT31(uStack_70._1_3_,param_2);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  local_78 = param_1;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_78._4_4_;
    *(undefined4 *)(puVar1 + 2) = uStack_70;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_6c;
  }
  local_88[0] = 0;
  local_68[0] = &LAB_140db2a10;
  local_88[1] = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88,0);
  FGenericPlatformString::Memcpy(local_88[0],L"report_client_matchmaking_error",0x40);
  FUN_140dcdc50(param_1,local_88,local_68);
  if (local_88[0] != 0) {
    FMemory::Free();
  }
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
  FUN_140dcebb0(param_1 + 0x88,param_2);
  return;
}



// FUNCTION 140dcef00 FUN_140dcef00 body=129 status=ok
// SIG undefined FUN_140dcef00(void)

ulonglong FUN_140dcef00(ulonglong *param_1,int param_2)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  
  if (-1 < param_2) {
    piVar6 = (int *)param_1[2];
    in_RAX = (ulonglong)(int)param_1[3];
    piVar1 = piVar6 + in_RAX;
    for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
      if (*piVar6 == param_2) goto LAB_140dcef7e;
    }
    uVar2 = *param_1;
    in_RAX = uVar2 + (longlong)(int)param_1[1] * 0x28;
    for (uVar3 = uVar2; uVar3 != in_RAX; uVar3 = uVar3 + 0x28) {
      if (*(char *)(uVar3 + 0x20) == '\0') {
        if (uVar3 != in_RAX) {
          lVar4 = uVar3 - uVar2;
          in_RAX = -(lVar4 >> 0x3f);
          iVar5 = (int)(lVar4 / 0x28) + (int)(lVar4 >> 0x3f) + (int)in_RAX;
          if ((-1 < iVar5) && (iVar5 < (int)param_1[1])) {
LAB_140dcef7e:
            return CONCAT71((int7)(in_RAX >> 8),1);
          }
        }
        break;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140dcef90 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x48,0);
  iVar4 = (int)(uVar3 / 0x48);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x48,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140dcf020 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x50,0);
  iVar4 = (int)(uVar3 / 0x50);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x50,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140dcf0b0 ResizeShrink body=168 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x28) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x28,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x28);
      }
      goto LAB_140dcf126;
    }
    if (iVar4 == 0) goto LAB_140dcf126;
  }
  iVar4 = iVar5;
LAB_140dcf126:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x28,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 140dcf160 FUN_140dcf160 body=302 status=ok
// SIG undefined FUN_140dcf160(void)

void FUN_140dcf160(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_18;
  longlong *local_10;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar5 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar7 = FUN_140bb7900(uVar6);
    if (lVar7 != 0) {
      if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
        local_10 = (longlong *)0x0;
        if ((undefined8 *)(param_1 + 0x40) != &local_18) {
          *(undefined8 *)(param_1 + 0x40) = 0;
          local_18 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x48,&local_10);
          plVar4 = local_10;
          if (local_10 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_10 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_10)(local_10);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_10 + 8))(local_10,1);
              }
            }
          }
        }
      }
      if ((param_2 != '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) {
        uVar6 = FUN_14164ab60();
        FUN_141597530(uVar6,*(undefined8 *)(param_1 + 0xa8));
        *(undefined8 *)(param_1 + 0xa8) = 0;
      }
      if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140dcf272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
        return;
      }
      FUN_140db86e0(param_1);
    }
  }
  return;
}



// FUNCTION 140dcf290 FUN_140dcf290 body=1128 status=ok
// SIG undefined FUN_140dcf290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dcf290(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  float fStack_a0;
  float fStack_9c;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  lVar5 = plVar3[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar5 = plVar3[0x1f];
  }
  iVar2 = rand();
  plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x10);
  fVar10 = (float)iVar2 * *(float *)(lVar4 + 0x2c) * 3.051851e-05 + *(float *)(lVar5 + 0x28);
  plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  lVar5 = plVar3[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar5 = plVar3[0x1f];
  }
  if (fVar1 - fVar10 < *(float *)(lVar5 + 0x30)) {
    plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
    lVar5 = plVar3[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar5 = plVar3[0x1f];
    }
    plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
    plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
    lVar9 = plVar3[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar9 = plVar3[0x1f];
    }
    local_b8._0_4_ = *(undefined4 *)(lVar9 + 0x28);
    local_b8._4_4_ = *(undefined4 *)(lVar4 + 0x2c);
    uStack_b0._0_4_ = *(undefined4 *)(lVar5 + 0x30);
    local_68 = (longlong *)0x0;
    local_58 = 0;
    local_a8 = param_1;
    fStack_a0 = fVar10;
    fStack_9c = fVar1;
    puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_88);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_143ff7760;
      *(undefined4 *)(puVar6 + 1) = (undefined4)local_b8;
      *(undefined4 *)((longlong)puVar6 + 0xc) = local_b8._4_4_;
      *(undefined4 *)(puVar6 + 2) = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_b0._4_4_;
      puVar6[3] = local_a8;
      puVar6[4] = CONCAT44(fStack_9c,fStack_a0);
    }
    local_d8 = (longlong *)0x0;
    local_98[0] = &LAB_140db2ae0;
    uStack_d0 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"retry_matchmaking_search",0x32);
    FUN_140dcdc50(param_1,&local_d8,local_98);
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      plVar3 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar3 = local_68;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_68 == (longlong *)0x0) {
      return;
    }
    FMemory::Free();
    return;
  }
  plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  lVar5 = plVar3[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar5 = plVar3[0x1f];
  }
  plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  lVar9 = plVar3[0x1f];
  if (lVar9 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar9 = plVar3[0x1f];
  }
  uStack_d0._0_4_ = *(int *)(lVar5 + 0x30);
  local_d8 = (longlong *)CONCAT44(*(undefined4 *)(lVar4 + 0x2c),*(undefined4 *)(lVar9 + 0x28));
  local_68 = (longlong *)0x0;
  local_58 = 0;
  local_c8 = param_1;
  fStack_c0 = fVar10;
  fStack_bc = fVar1;
  puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_88);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_143ff7760;
    *(undefined4 *)(puVar6 + 1) = (undefined4)local_d8;
    *(undefined4 *)((longlong)puVar6 + 0xc) = local_d8._4_4_;
    *(int *)(puVar6 + 2) = (int)uStack_d0;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_d0._4_4_;
    puVar6[3] = local_c8;
    puVar6[4] = CONCAT44(fStack_bc,fStack_c0);
  }
  local_b8 = 0;
  local_98[0] = &LAB_140db2cd0;
  uStack_b0 = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"retry_matchmaking_search",0x32);
  FUN_140dcdc50(param_1,&local_b8,local_98);
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    plVar3 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar3 = local_68;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  uVar7 = FUN_140da6050(&local_d8,param_1,FUN_140dd51c0);
  uVar8 = FUN_14164ab60();
  local_e8 = 0;
  puVar6 = (undefined8 *)
           FUN_14158f860(uVar8,&local_b8,uVar7,L"FMatchmaker_TickRetryMatchmakingTimer");
  *(undefined8 *)(param_1 + 0xa8) = *puVar6;
  if ((int)uStack_d0 != 0) {
    if (local_d8 == (longlong *)0x0) goto LAB_140dcf55c;
    (**(code **)(*local_d8 + 0x28))(local_d8,0);
    if (local_d8 != (longlong *)0x0) {
      local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
    }
    uStack_d0._0_4_ = 0;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
LAB_140dcf55c:
  *(float *)(param_1 + 0xb0) = fVar10;
  return;
}



// FUNCTION 140dcf700 FUN_140dcf700 body=255 status=ok
// SIG undefined FUN_140dcf700(void)

void FUN_140dcf700(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar4 != '\0')) {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar1 = plVar7 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      lVar5 = *plVar7;
      if ((lVar5 != 0) &&
         (cVar4 = FUniqueNetIdWrapper::operator==(lVar5 + 0x158,param_2), cVar4 != '\0')) {
        lVar5 = FUN_1425bd330(lVar5,6);
        if (lVar5 == 0) {
          return;
        }
        lVar6 = FUN_1404e6fc0();
        iVar2 = *(int *)(lVar6 + 0x90);
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar2) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)iVar2 * 8)
            != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          return;
        }
        FUN_140da6bf0(lVar5,CONCAT71((int7)(int3)((uint)iVar2 >> 8),1),0x1a,param_1 + 0x180);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140dcf800 FUN_140dcf800 body=67 status=ok
// SIG undefined FUN_140dcf800(void)

void FUN_140dcf800(longlong param_1)

{
  FUN_140da9da0(&DAT_14686f3c0,param_1);
  FText::operator=(&DAT_14686f478,param_1 + 0xb8);
  FText::operator=(&DAT_14686f490,param_1 + 0xd0);
  return;
}



// FUNCTION 140dcf850 FUN_140dcf850 body=463 status=ok
// SIG undefined FUN_140dcf850(void)

void FUN_140dcf850(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 local_f8 [184];
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar4 = (longlong *)FUN_1413c6930();
  lVar8 = plVar4[0x1f];
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar8 = plVar4[0x1f];
    if (lVar8 == 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_1;
  }
  if (*(int *)(lVar8 + 0x30) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = *(undefined2 **)(lVar8 + 0x28);
  }
  iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
  puVar10 = (undefined8 *)0x0;
  if (iVar3 == 0) {
    puVar10 = (undefined8 *)(lVar8 + 0x28);
  }
  puVar7 = *(undefined8 **)(lVar8 + 0xe0);
  puVar9 = puVar7 + (longlong)*(int *)(lVar8 + 0xe8) * 0x17;
  for (; puVar7 != puVar9; puVar7 = puVar7 + 0x17) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*param_1;
    }
    if (*(int *)(puVar7 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar7;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
    if (iVar3 == 0) {
      puVar10 = puVar7;
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    FUN_140da8460(local_f8,puVar10);
    cVar2 = FUN_140dc18f0(local_f8);
    if (cVar2 != '\0') {
      FUN_140da9da0(&DAT_14686f3c0,local_f8);
      FText::operator=(&DAT_14686f478,local_40);
      FText::operator=(&DAT_14686f490,local_28);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_20 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    FUN_140b9d680(local_f8);
  }
  return;
}



// FUNCTION 140dcfa20 FUN_140dcfa20 body=237 status=ok
// SIG undefined FUN_140dcfa20(void)

void FUN_140dcfa20(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  longlong *local_18;
  
  puVar5 = (undefined8 *)FName::FName(local_28,L"SPARK",1);
  FUN_1404d0c50(&local_20,*puVar5);
  if (local_20 != (longlong *)0x0) {
    lVar6 = (**(code **)(*local_20 + 0x2c8))(local_20,0x11f);
    if (lVar6 != 0) {
      *(undefined1 *)(lVar6 + 0x15) = param_2;
      *(undefined1 *)(lVar6 + 0x17) = param_3;
      *(undefined1 *)(lVar6 + 0x18) = param_4;
      (**(code **)(*local_20 + 0x80))(local_20,0x11f,lVar6,0);
    }
  }
  plVar4 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return;
}



// FUNCTION 140dcfb10 FUN_140dcfb10 body=439 status=ok
// SIG undefined FUN_140dcfb10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dcfb10(undefined8 param_1,int param_2,char param_3,undefined1 param_4,undefined1 param_5
                  ,undefined8 param_6,longlong *param_7)

{
  longlong *plVar1;
  undefined ***pppuVar2;
  undefined1 auStack_158 [32];
  undefined2 local_138;
  undefined8 local_130;
  longlong local_128 [7];
  longlong *local_f0;
  int local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined2 local_d0;
  undefined ***local_a0;
  undefined8 local_98;
  longlong local_90 [7];
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar1 = (longlong *)param_7[7];
  if (param_2 < 0) {
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_7);
  }
  else {
    local_98 = param_6;
    local_138 = CONCAT11(param_4,param_5);
    local_58 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      local_58 = (longlong *)(**(code **)*plVar1)(plVar1,local_90);
    }
    local_50 = param_2;
    local_48 = param_1;
    if (param_3 == '\0') {
      local_f0 = (longlong *)0x0;
      local_130 = local_98;
      if (local_58 != (longlong *)0x0) {
        local_f0 = (longlong *)(**(code **)*local_58)(local_58,local_128);
      }
      local_e8 = local_50;
      local_e0 = local_48;
      pppuVar2 = (undefined ***)operator_new(0x60);
      FUN_140da50f0(pppuVar2,&local_130);
      local_a0 = pppuVar2;
      if (local_f0 != (longlong *)0x0) {
        (**(code **)(*local_f0 + 0x20))
                  (local_f0,CONCAT71((int7)((ulonglong)local_128 >> 8),local_f0 != local_128));
        local_f0 = (longlong *)0x0;
      }
    }
    else {
      local_d8 = &PTR_LAB_144554170;
      local_d0 = local_138;
      local_a0 = &local_d8;
    }
    FUN_140db81c0(param_1,param_2,param_6,&local_d8);
    FUN_140db55b0(param_1);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x20))
                (local_58,CONCAT71((int7)((ulonglong)local_90 >> 8),local_58 != local_90));
      local_58 = (longlong *)0x0;
    }
    plVar1 = (longlong *)param_7[7];
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_7);
  }
  param_7[7] = 0;
  return;
}



// FUNCTION 140dcfcd0 FUN_140dcfcd0 body=2167 status=ok
// SIG undefined FUN_140dcfcd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dcfcd0(longlong param_1,char param_2,int param_3,longlong param_4,longlong param_5,
                  undefined4 param_6)

{
  int *piVar1;
  char *pcVar2;
  undefined2 **ppuVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  wchar_t *pwVar16;
  undefined2 *puVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  char *pcVar21;
  short *psVar22;
  wchar_t *pwVar23;
  wchar_t *pwVar24;
  undefined2 *puVar25;
  byte bVar26;
  uint uVar27;
  ulonglong uVar28;
  bool bVar29;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined4 local_240;
  undefined4 local_238;
  undefined4 local_230;
  byte local_228;
  int local_224;
  undefined4 local_220;
  longlong local_218;
  longlong local_210;
  undefined2 *local_208;
  ulonglong local_200;
  undefined2 *local_1f8;
  ulonglong local_1f0;
  undefined4 *local_1e8;
  ulonglong *puStack_1e0;
  undefined4 local_1d8 [2];
  short *local_1d0;
  int local_1c8;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180 [8];
  undefined1 local_178 [16];
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [32];
  undefined4 local_a8 [2];
  longlong local_a0;
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_218 = param_5;
  local_220 = param_6;
  local_1d8[0] = 0;
  local_224 = param_3;
  local_210 = param_4;
  lVar7 = FUN_1407fccd0();
  lVar10 = local_218;
  if ((lVar7 == 0) || (*(longlong *)(param_1 + 0x30) == 0)) goto LAB_140dd04eb;
  local_228 = FUN_140dd0ed0(param_1,1);
  FText::FText(local_1c0);
  uVar28 = 2;
  if (param_2 == '\0') {
    cVar4 = FUN_140bc9f00(*(undefined8 *)(param_1 + 0x30));
    if ((cVar4 == '\0') && (cVar4 = FUN_140bca8a0(*(undefined8 *)(param_1 + 0x30)), cVar4 == '\0'))
    {
      puVar13 = local_120;
      pwVar16 = L"In Game";
      pwVar23 = L"DiscordManager";
      pwVar24 = L"DiscordInGame";
      uVar20 = 1;
    }
    else {
      puVar13 = local_138;
      pwVar16 = L"In Menus";
      pwVar23 = L"DiscordManager";
      pwVar24 = L"DiscordInMenus";
      uVar20 = uVar28;
    }
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (puVar13,pwVar16,pwVar23,pwVar24);
    FText::operator=(local_1c0,uVar8);
    if (((uVar20 & 2) != 0) &&
       (uVar20 = (ulonglong)((uint)uVar20 & 0xfffffffd), local_130 != (longlong *)0x0)) {
      LOCK();
      plVar11 = local_130 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    if ((uVar20 & 1) != 0) goto LAB_140dcfe69;
  }
  else {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_150,L"Idle",L"DiscordManager",L"DiscordIdle");
    FText::operator=(local_1c0,uVar8);
    local_118 = local_148;
LAB_140dcfe69:
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_118 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
  puVar9 = (undefined8 *)FText::ToString(local_1c0);
  puVar25 = &DAT_143f3eda8;
  if (*(int *)(puVar9 + 1) == 0) {
    puVar17 = &DAT_143f3eda8;
  }
  else {
    puVar17 = (undefined2 *)*puVar9;
  }
  if (*(int *)(lVar7 + 0x98) == 0) {
    puVar14 = &DAT_143f3eda8;
  }
  else {
    puVar14 = *(undefined2 **)(lVar7 + 0x90);
  }
  iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar17);
  if (iVar5 != 0) {
    FString::operator=(lVar7 + 0x90,puVar9);
  }
  local_228 = local_228 | iVar5 != 0;
  FText::FText(local_198);
  if (param_2 == '\0') {
    lVar10 = FText::FText(local_c8,local_210);
    local_210 = lVar10;
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_f0,L"Level {0} {1}",L"DiscordManager",L"DiscordDetails");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_d8,uVar8);
    local_a0 = (longlong)local_224;
    local_a8[0] = 0;
    local_80 = 0;
    local_78 = 4;
    FText::FText(local_68,lVar10);
    local_1e8 = local_a8;
    local_50 = 1;
    puStack_1e0 = local_48;
    local_1a8 = *puVar9;
    local_1a0 = puVar9[1];
    if (local_1a0 != 0) {
      LOCK();
      *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
      UNLOCK();
    }
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_178,&local_1e8);
    uVar8 = FText::Format(local_108,&local_1a8,uVar8);
    FText::FText(local_168,uVar8);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_100 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_178);
    pcVar21 = &stack0xffffffffffffffe0;
    do {
      uVar28 = uVar28 - 1;
      pcVar2 = pcVar21 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar11 = *(longlong **)(pcVar21 + -0x40);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar11 + 1;
          lVar10 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
      }
      pcVar21 = pcVar2;
    } while (uVar28 != 0);
    plVar11 = (longlong *)puVar9[1];
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar11 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    plVar11 = *(longlong **)(local_210 + 8);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar11 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    FText::operator=(local_198,local_168);
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_160 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar1 = (int *)((longlong)local_160 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_e8 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
  }
  puVar9 = (undefined8 *)FText::ToString(local_198);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar17 = &DAT_143f3eda8;
  }
  else {
    puVar17 = (undefined2 *)*puVar9;
  }
  if (*(int *)(lVar7 + 0xa8) == 0) {
    puVar14 = &DAT_143f3eda8;
  }
  else {
    puVar14 = *(undefined2 **)(lVar7 + 0xa0);
  }
  iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar17);
  if (iVar5 != 0) {
    FString::operator=(lVar7 + 0xa0,puVar9);
    local_228 = 1;
  }
  FString::PrintfImpl(&local_1d0,L"level_art_%d",local_220);
  psVar22 = &DAT_143f3eda8;
  if (local_1c8 != 0) {
    psVar22 = local_1d0;
  }
  puVar17 = (undefined2 *)0x0;
  uVar27 = 0;
  local_208 = (undefined2 *)0x0;
  local_200 = 0;
  if ((psVar22 != (short *)0x0) && (*psVar22 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (psVar22[lVar10] != 0);
    uVar19 = (int)lVar10 + 1;
    local_200 = (ulonglong)uVar19;
    uVar27 = uVar19;
    if (0 < (int)uVar19) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
      uVar27 = (uint)local_200;
    }
    puVar17 = local_208;
    FGenericPlatformString::Memcpy(local_208,psVar22,(longlong)(int)uVar19 * 2);
  }
  ppuVar3 = (undefined2 **)(lVar7 + 0xc0);
  puVar14 = &DAT_143f3eda8;
  if (uVar27 != 0) {
    puVar14 = puVar17;
  }
  if (*(int *)(lVar7 + 200) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = *ppuVar3;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar14);
  if (iVar5 == 0) {
    bVar26 = 0;
  }
  else {
    if (ppuVar3 != &local_208) {
      *(uint *)(lVar7 + 200) = uVar27;
      if ((uVar27 == 0) && (*(int *)(lVar7 + 0xcc) == 0)) {
        *(undefined4 *)(lVar7 + 0xcc) = 0;
        bVar26 = 1;
        goto LAB_140dd02af;
      }
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar3,uVar27);
      _guard_xfg_dispatch_icall_nop(*ppuVar3,puVar17,(longlong)(int)uVar27 * 2);
    }
    bVar26 = 1;
  }
LAB_140dd02af:
  bVar26 = bVar26 | local_228;
  if (puVar17 != (undefined2 *)0x0) {
    FMemory::Free(puVar17);
  }
  if (local_1d0 != (short *)0x0) {
    FMemory::Free();
  }
  local_1f0 = 9;
  local_1f8 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
  puVar17 = local_1f8;
  FGenericPlatformString::Memcpy(local_1f8,L"bl3-logo",0x12);
  uVar28 = local_1f0;
  iVar5 = (int)local_1f0;
  lVar10 = (longlong)(int)local_1f0;
  ppuVar3 = (undefined2 **)(lVar7 + 0xe0);
  puVar14 = &DAT_143f3eda8;
  if ((int)local_1f0 != 0) {
    puVar14 = puVar17;
  }
  if (*(int *)(lVar7 + 0xe8) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = *ppuVar3;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar14);
  if (iVar6 != 0) {
    if (ppuVar3 != &local_1f8) {
      *(int *)(lVar7 + 0xe8) = iVar5;
      if ((iVar5 == 0) && (*(int *)(lVar7 + 0xec) == 0)) {
        *(undefined4 *)(lVar7 + 0xec) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar3,uVar28 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppuVar3,puVar17,lVar10 * 2);
      }
    }
    bVar26 = 1;
  }
  if (puVar17 != (undefined2 *)0x0) {
    FMemory::Free(puVar17);
  }
  lVar10 = local_218;
  puVar9 = (undefined8 *)FText::ToString(local_218);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar17 = &DAT_143f3eda8;
  }
  else {
    puVar17 = (undefined2 *)*puVar9;
  }
  if (*(int *)(lVar7 + 0xd8) != 0) {
    puVar25 = *(undefined2 **)(lVar7 + 0xd0);
  }
  iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar25,puVar17);
  if (iVar5 != 0) {
    FString::operator=(lVar7 + 0xd0,puVar9);
  }
  bVar26 = iVar5 != 0 | bVar26;
  if (*(longlong *)(lVar7 + 0xb0) == 0) {
    plVar11 = (longlong *)FDateTime::UtcNow(local_1d8);
    local_230 = 0;
    local_238 = 0;
    local_240 = 0;
    local_248 = 0;
    plVar12 = (longlong *)FDateTime::FDateTime(local_180,0x7b2,1);
    lVar18 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(*plVar11 - *plVar12),8) +
             (*plVar11 - *plVar12);
    lVar18 = (lVar18 >> 0x17) - (lVar18 >> 0x3f);
    bVar29 = *(longlong *)(lVar7 + 0xb0) != lVar18;
    if (bVar29) {
      *(longlong *)(lVar7 + 0xb0) = lVar18;
    }
    bVar26 = bVar26 | bVar29;
  }
  if (bVar26 != 0) {
    FUN_1407fd6d0(lVar7);
  }
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_190 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar1 = (int *)((longlong)local_190 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_190 + 8))(local_190,1);
      }
    }
  }
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_1b8 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1b8)(local_1b8);
      LOCK();
      piVar1 = (int *)((longlong)local_1b8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_1b8 + 8))(local_1b8,1);
      }
    }
  }
LAB_140dd04eb:
  plVar11 = *(longlong **)(lVar10 + 8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return;
}



// FUNCTION 140dd0550 FUN_140dd0550 body=511 status=ok
// SIG undefined FUN_140dd0550(void)

void FUN_140dd0550(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined **local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  plVar3 = (longlong *)(param_1 + 0x118);
  bVar12 = false;
  iVar13 = *(int *)(param_1 + 0x120);
  if (iVar13 != 0) {
    lVar11 = *plVar3 + 8;
    do {
      FUN_1404bf980(lVar11);
      lVar11 = lVar11 + 0x30;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar3);
  }
  lVar14 = *param_2;
  lVar11 = lVar14 + (longlong)(int)param_2[1] * 0x28;
  do {
    if (lVar14 == lVar11) {
      return;
    }
    if ((*(longlong **)(lVar14 + 8) == (longlong *)0x0) ||
       (cVar7 = (**(code **)(**(longlong **)(lVar14 + 8) + 0x20))(), cVar7 == '\0')) {
LAB_140dd0628:
      bVar4 = false;
    }
    else {
      local_68 = *(undefined8 *)(lVar14 + 8);
      bVar12 = true;
      local_60 = *(longlong **)(lVar14 + 0x10);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      uVar9 = FWeakObjectPtr::Get(param_1 + 0x14);
      cVar7 = FUN_140bca1f0(uVar9,&local_68,1);
      if (cVar7 != '\0') goto LAB_140dd0628;
      bVar4 = true;
    }
    plVar6 = local_60;
    if ((bVar12) && (bVar12 = false, local_60 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    if (bVar4) {
      lVar5 = *(longlong *)(lVar14 + 0x10);
      uVar9 = *(undefined8 *)(lVar14 + 8);
      local_58 = 0x42960000;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      iVar13 = *(int *)(param_1 + 0x120);
      local_50 = &PTR_FUN_143f740c8;
      local_38 = 0;
      local_30 = 0;
      iVar8 = iVar13 + 1;
      *(int *)(param_1 + 0x120) = iVar8;
      local_48 = uVar9;
      local_40 = lVar5;
      if (*(int *)(param_1 + 0x124) < iVar8) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar3);
      }
      puVar10 = (undefined4 *)((longlong)iVar13 * 0x30 + *plVar3);
      *(undefined ***)(puVar10 + 2) = &PTR_FUN_143f73d18;
      *(undefined8 *)(puVar10 + 4) = uVar9;
      *puVar10 = 0x42960000;
      *(longlong *)(puVar10 + 6) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      *(undefined ***)(puVar10 + 2) = &PTR_FUN_143f740c8;
      *(undefined8 *)(puVar10 + 8) = 0;
      *(undefined8 *)(puVar10 + 10) = 0;
      FUN_1404bf980(&local_50);
    }
    lVar14 = lVar14 + 0x28;
  } while( true );
}



// FUNCTION 140dd0750 FUN_140dd0750 body=222 status=ok
// SIG undefined FUN_140dd0750(void)

void FUN_140dd0750(longlong param_1,char param_2)

{
  char *pcVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  pcVar1 = (char *)(param_1 + 0x180);
  if (*pcVar1 != param_2) {
    *pcVar1 = param_2;
    if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
       (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar5 != '\0')) {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
      plVar2 = plVar8 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
      for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
        if ((*plVar8 != 0) && (lVar6 = FUN_1425bd330(*plVar8,6), lVar6 != 0)) {
          lVar7 = FUN_1404e6fc0();
          iVar3 = *(int *)(lVar7 + 0x90);
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar3) ||
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)iVar3 * 8)
              != lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            FUN_140da6bf0(lVar6,CONCAT71((int7)(int3)((uint)iVar3 >> 8),1),0x1a,pcVar1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140dd0830 FUN_140dd0830 body=365 status=ok
// SIG undefined FUN_140dd0830(void)

void FUN_140dd0830(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)operator_new();
  if (local_10 == (longlong *)0x0) {
    local_10 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(local_10 + 1) = 1;
    *local_10 = (longlong)&PTR_FUN_144553e50;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    local_10[3] = 0;
    *(undefined4 *)(local_10 + 4) = 0;
    *(undefined4 *)(local_10 + 5) = 2;
    local_10[6] = 0;
    local_10[2] = (longlong)&PTR_FUN_144550f10;
    *(undefined1 *)(local_10 + 7) = param_2;
  }
  local_18 = local_10 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  plVar3 = local_10;
  plVar1 = local_18;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0xd8);
  *(int *)(param_1 + 0xd8) = iVar4 + 1;
  if (*(int *)(param_1 + 0xdc) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xd0,iVar4);
  }
  plVar6 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0xd0));
  *plVar6 = (longlong)plVar1;
  plVar6[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  FUN_140dcd8b0(param_1);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar1 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
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
  return;
}



// FUNCTION 140dd09a0 FUN_140dd09a0 body=233 status=ok
// SIG undefined FUN_140dd09a0(void)

void FUN_140dd09a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar4 != '\0')) {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar1 = plVar7 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      if ((*plVar7 != 0) && (lVar5 = FUN_1425bd330(*plVar7,6), lVar5 != 0)) {
        lVar6 = FUN_1404e6fc0();
        iVar2 = *(int *)(lVar6 + 0x90);
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar2) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)iVar2 * 8)
            != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_140da6ad0(lVar5,CONCAT71((int7)(int3)((uint)iVar2 >> 8),1),0x21,param_2);
        }
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140dd0a90 FUN_140dd0a90 body=1051 status=ok
// SIG undefined FUN_140dd0a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dd0a90(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int extraout_EAX;
  int extraout_EAX_00;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  float extraout_var;
  float extraout_var_00;
  undefined8 uVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_c8;
  int iStack_c0;
  float fStack_bc;
  longlong local_b8 [2];
  undefined1 *local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_2 == (char)param_1[2]) {
    return;
  }
  cVar6 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x14);
  if (cVar6 != '\0') {
    plVar8 = (longlong *)FWeakObjectPtr::Get((longlong)param_1 + 0x14);
    lVar9 = (**(code **)(*plVar8 + 0x148))(plVar8);
    if (lVar9 != 0) {
      fVar16 = *(float *)(lVar9 + 0x798);
      goto LAB_140dd0b15;
    }
  }
  fVar16 = 0.0;
LAB_140dd0b15:
  _iStack_c0 = CONCAT71(stack0xffffffffffffff41,param_2);
  local_78 = (longlong *)0x0;
  local_68 = 0;
  local_c8 = param_1;
  fStack_bc = fVar16 - *(float *)((longlong)param_1 + 0x94);
  puVar10 = (undefined8 *)FUN_140438ef0(0x18,local_98);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar10 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar10 + 0xc) = local_c8._4_4_;
    *(int *)(puVar10 + 2) = iStack_c0;
    *(float *)((longlong)puVar10 + 0x14) = fStack_bc;
  }
  local_b8[0] = 0;
  local_a8[0] = &LAB_140db2be0;
  local_b8[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
  FGenericPlatformString::Memcpy(local_b8[0],L"set_matchmaking_state",0x2c);
  FUN_140dcdc50(param_1,local_b8,local_a8);
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    plVar8 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar8 = local_78;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (((char)param_1[2] == '\0') &&
     (((*(int *)((longlong)param_1 + 0x5c) == 0 && (int)param_1[0xb] == 0) &&
      *(int *)((longlong)param_1 + 0x54) == 0) && (int)param_1[10] == 0)) {
    puVar11 = (undefined4 *)FGuid::NewGuid(&local_c8);
    uVar2 = puVar11[1];
    uVar3 = puVar11[2];
    uVar4 = puVar11[3];
    *(undefined4 *)(param_1 + 10) = *puVar11;
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar2;
    *(undefined4 *)(param_1 + 0xb) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uVar4;
    FUN_140dc0d50(param_1);
  }
  *(float *)((longlong)param_1 + 0x94) = fVar16;
  bVar5 = false;
  *(char *)(param_1 + 2) = param_2;
  *(int *)((longlong)param_1 + 0x43c) = *(int *)((longlong)param_1 + 0x43c) + 1;
  iVar14 = *(int *)((longlong)param_1 + 0x43c);
  iVar7 = (int)param_1[0x86] + -1;
  lVar9 = (longlong)iVar7;
  if (-1 < iVar7) {
    lVar15 = lVar9 << 4;
    bVar5 = false;
    do {
      lVar1 = param_1[0x85];
      if (((*(int *)(lVar15 + 8 + lVar1) == 0) ||
          (plVar8 = *(longlong **)(lVar15 + lVar1), plVar8 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar8 + 0x40))(plVar8,param_2), cVar6 == '\0')) {
        bVar5 = true;
      }
      lVar15 = lVar15 + -0x10;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
    iVar14 = *(int *)((longlong)param_1 + 0x43c);
  }
  *(int *)((longlong)param_1 + 0x43c) = iVar14 + -1;
  if (bVar5) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x85,0);
  }
  lVar9 = param_1[2];
  plVar8 = param_1 + 0x11;
  cVar6 = FUN_140bca8a0(*plVar8);
  if (cVar6 == '\0') {
    cVar6 = FUN_140bc9f60(*plVar8);
    if ((cVar6 == '\0') && (lVar15 = FUN_140dbbc10(plVar8), lVar15 != 0)) {
      FUN_141426040(lVar15,(char)lVar9);
    }
  }
  else {
    lVar15 = FUN_140bb7870();
    if (lVar15 != 0) {
      FUN_140dd4380(lVar15,(char)lVar9);
    }
  }
  lVar9 = param_1[2];
  cVar6 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x14);
  if (cVar6 != '\0') {
    plVar8 = (longlong *)FWeakObjectPtr::Get((longlong)param_1 + 0x14);
    uVar12 = (**(code **)(*plVar8 + 0x148))(plVar8);
    lVar15 = FUN_142f6c9f0(uVar12);
    if ((char)lVar9 == '\x02') {
      if (lVar15 != 0) {
        plVar8 = (longlong *)FWeakObjectPtr::Get((longlong)param_1 + 0x14);
        local_c8 = plVar8;
        iVar14 = 0;
        fVar16 = 0.0;
        if (plVar8 != (longlong *)0x0) {
          uVar12 = FUN_142f768a0();
          UObjectBaseUtility::GetInterfaceAddress(plVar8,uVar12);
          iVar14 = extraout_EAX;
          fVar16 = extraout_var;
        }
        fStack_bc = fVar16;
        iStack_c0 = iVar14;
        FUN_142f690f0(lVar15,&local_c8,1);
      }
    }
    else if (lVar15 != 0) {
      plVar8 = (longlong *)FWeakObjectPtr::Get((longlong)param_1 + 0x14);
      local_c8 = plVar8;
      iVar14 = 0;
      fVar16 = 0.0;
      if (plVar8 != (longlong *)0x0) {
        uVar12 = FUN_142f768a0();
        UObjectBaseUtility::GetInterfaceAddress(plVar8,uVar12);
        iVar14 = extraout_EAX_00;
        fVar16 = extraout_var_00;
      }
      fStack_bc = fVar16;
      iStack_c0 = iVar14;
      FUN_142f6e000(lVar15,&local_c8);
    }
  }
  if ((char)param_1[2] == '\0') {
    if (param_1[0x10] != 0) {
      uVar12 = FUN_14164ab60();
      FUN_141597530(uVar12,param_1[0x10]);
      param_1[0x10] = 0;
    }
  }
  else if (param_1[0x10] == 0) {
    uVar12 = FUN_140da6050(&local_c8,param_1,FUN_140dd4d50);
    uVar13 = FUN_14164ab60();
    local_d8 = 0;
    plVar8 = (longlong *)FUN_14158f860(uVar13,local_b8,uVar12,L"FMatchmaker_Tick");
    param_1[0x10] = *plVar8;
    if (iStack_c0 != 0) {
      if (local_c8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_c8 + 0x28))(local_c8,0);
      if (local_c8 != (longlong *)0x0) {
        local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
      }
      iStack_c0 = 0;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  return;
}



// FUNCTION 140dd0eb0 FUN_140dd0eb0 body=31 status=ok
// SIG undefined FUN_140dd0eb0(void)

void FUN_140dd0eb0(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_140da6d40(param_1,1,0x20,local_res10);
  return;
}



// FUNCTION 140dd0ed0 FUN_140dd0ed0 body=879 status=ok
// SIG undefined FUN_140dd0ed0(void)

ulonglong FUN_140dd0ed0(longlong param_1,char param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char *pcVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  byte bVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined2 *puVar15;
  bool bVar16;
  bool bVar17;
  undefined1 local_res18 [8];
  int local_res20;
  longlong local_68 [2];
  ulonglong local_58 [2];
  longlong local_48 [2];
  
  uVar2 = FUN_1407fccd0();
  if ((uVar2 == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
    return uVar2 & 0xffffffffffffff00;
  }
  plVar3 = (longlong *)FUN_141424bc0();
  lVar6 = plVar3[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar6 = plVar3[0x1f];
  }
  iVar1 = FUN_142480900(lVar6);
  bVar16 = *(int *)(uVar2 + 0x114) != iVar1;
  if (bVar16) {
    *(int *)(uVar2 + 0x114) = iVar1;
  }
  iVar1 = FUN_140bba270(*(undefined8 *)(param_1 + 0x30));
  bVar17 = *(int *)(uVar2 + 0x110) != iVar1;
  if (bVar17) {
    *(int *)(uVar2 + 0x110) = iVar1;
  }
  puVar11 = (undefined2 *)0x0;
  bVar17 = bVar17 || bVar16;
  iVar14 = 0;
  local_res20 = 0;
  pcVar4 = (char *)FUN_140dbc5d0(*(longlong *)(param_1 + 0x30) + 0x5f0,local_res18);
  puVar13 = puVar11;
  iVar1 = iVar14;
  if (*pcVar4 == '\x02') {
    plVar3 = (longlong *)FUN_140bb7010(*(undefined8 *)(param_1 + 0x30),local_68);
    iVar1 = 0;
    if (local_48 != plVar3) {
      puVar13 = (undefined2 *)*plVar3;
      *plVar3 = 0;
      iVar1 = (int)plVar3[1];
      plVar3[1] = 0;
      local_res20 = iVar1;
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  puVar15 = &DAT_143f3eda8;
  if (1 < iVar1) {
    puVar8 = &DAT_143f3eda8;
    if (iVar1 != 0) {
      puVar8 = puVar13;
    }
    puVar10 = &DAT_143f3eda8;
    if (DAT_14629b7a8 != 0) {
      puVar10 = DAT_14629b7a0;
    }
    FString::PrintfImpl(local_68,L"%s%s",puVar10,puVar8);
    plVar3 = (longlong *)FBase64::Encode(local_58,local_68);
    if (local_48 != plVar3) {
      puVar11 = (undefined2 *)*plVar3;
      *plVar3 = 0;
      iVar14 = (int)plVar3[1];
      plVar3[1] = 0;
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  puVar10 = (undefined2 *)0x0;
  plVar3 = (longlong *)(uVar2 + 0x100);
  puVar8 = &DAT_143f3eda8;
  if (iVar14 != 0) {
    puVar8 = puVar11;
  }
  if (*(int *)(uVar2 + 0x108) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*plVar3;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
  iVar12 = 0;
  if (iVar1 != 0) {
    if (plVar3 != local_48) {
      *(int *)(uVar2 + 0x108) = iVar14;
      if ((iVar14 == 0) && (*(int *)(uVar2 + 0x10c) == 0)) {
        *(undefined4 *)(uVar2 + 0x10c) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar3,iVar14);
        _guard_xfg_dispatch_icall_nop((void *)*plVar3,puVar11,(longlong)iVar14 * 2);
      }
    }
    bVar17 = true;
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  puVar11 = puVar10;
  if (1 < local_res20) {
    puVar8 = &DAT_143f3eda8;
    if (local_res20 != 0) {
      puVar8 = puVar13;
    }
    puVar7 = &DAT_143f3eda8;
    if (DAT_14629b7b8 != 0) {
      puVar7 = DAT_14629b7b0;
    }
    FString::PrintfImpl(local_68,L"%s%s",puVar7,puVar8);
    puVar5 = (ulonglong *)FBase64::Encode(local_48,local_68);
    if (local_58 != puVar5) {
      puVar11 = (undefined2 *)*puVar5;
      *puVar5 = 0;
      puVar10 = (undefined2 *)(ulonglong)(uint)puVar5[1];
      puVar5[1] = 0;
    }
    iVar12 = (int)puVar10;
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  puVar5 = (ulonglong *)(uVar2 + 0x128);
  puVar8 = &DAT_143f3eda8;
  if (iVar12 != 0) {
    puVar8 = puVar11;
  }
  if (*(int *)(uVar2 + 0x130) != 0) {
    puVar15 = (undefined2 *)*puVar5;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar8);
  if (iVar1 == 0) {
    bVar9 = 0;
  }
  else {
    if (puVar5 != local_58) {
      *(int *)(uVar2 + 0x130) = iVar12;
      if ((iVar12 == 0) && (*(int *)(uVar2 + 0x134) == 0)) {
        *(undefined4 *)(uVar2 + 0x134) = 0;
        bVar9 = 1;
        goto LAB_140dd11db;
      }
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar5,iVar12);
      _guard_xfg_dispatch_icall_nop((void *)*puVar5,puVar11,(longlong)iVar12 * 2);
    }
    bVar9 = 1;
  }
LAB_140dd11db:
  bVar9 = bVar9 | bVar17;
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  if ((bVar9 != 0) && (param_2 == '\0')) {
    FUN_1407fd6d0(uVar2);
    bVar9 = 0;
  }
  if (puVar13 != (undefined2 *)0x0) {
    FMemory::Free(puVar13);
  }
  return (ulonglong)bVar9;
}



// FUNCTION 140dd1240 FUN_140dd1240 body=257 status=ok
// SIG undefined FUN_140dd1240(void)

void FUN_140dd1240(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined4 local_res10 [2];
  
  piVar1 = (int *)(param_1 + 0xc4);
  *piVar1 = param_2;
  if (param_2 != *(int *)(param_1 + 200)) {
    *(int *)(param_1 + 200) = param_2;
    cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x14);
    if (cVar6 != '\0') {
      uVar8 = FWeakObjectPtr::Get(param_1 + 0x14);
      lVar9 = FUN_140bb7900(uVar8);
      if (lVar9 != 0) {
        local_res10[0] = 2;
        FUN_140da7560(lVar9,1,0x1e,local_res10,piVar1);
      }
    }
    iVar2 = *piVar1;
    bVar5 = false;
    *(int *)(param_1 + 0x454) = *(int *)(param_1 + 0x454) + 1;
    iVar10 = *(int *)(param_1 + 0x454);
    iVar7 = *(int *)(param_1 + 0x448) + -1;
    lVar9 = (longlong)iVar7;
    if (-1 < iVar7) {
      lVar11 = lVar9 << 4;
      bVar5 = false;
      do {
        lVar3 = *(longlong *)(param_1 + 0x440);
        if ((*(int *)(lVar11 + 8 + lVar3) == 0) ||
           (plVar4 = *(longlong **)(lVar11 + lVar3), plVar4 == (longlong *)0x0)) {
LAB_140dd1300:
          bVar5 = true;
        }
        else {
          cVar6 = (**(code **)(*plVar4 + 0x40))(plVar4,iVar2);
          if (cVar6 == '\0') goto LAB_140dd1300;
        }
        lVar11 = lVar11 + -0x10;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
      iVar10 = *(int *)(param_1 + 0x454);
    }
    *(int *)(param_1 + 0x454) = iVar10 + -1;
    if (bVar5) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x440),0)
      ;
      return;
    }
  }
  return;
}



// FUNCTION 140dd1350 FUN_140dd1350 body=31 status=ok
// SIG undefined FUN_140dd1350(void)

void FUN_140dd1350(longlong param_1,int param_2)

{
  int local_res10 [6];
  
  if (-1 < param_2) {
    local_res10[0] = param_2;
    TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
              (param_1 + 0x10,local_res10);
  }
  return;
}



// FUNCTION 140dd1370 FUN_140dd1370 body=12 status=ok
// SIG undefined FUN_140dd1370(void)

void FUN_140dd1370(longlong param_1)

{
  FString::operator=(param_1 + 0x170);
  return;
}



// FUNCTION 140dd1380 FUN_140dd1380 body=500 status=ok
// SIG undefined FUN_140dd1380(void)

void FUN_140dd1380(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  longlong *local_68;
  int local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_1404cf2e0(&local_48,0);
  uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,L"use voice/text chat",L"OakOnlineAsync",L"ChatRestrictionSystemUI");
  puVar5 = (undefined8 *)FText::ToString(uVar4);
  local_58 = (void *)0x0;
  local_50 = *(int *)(puVar5 + 1);
  lVar7 = (longlong)local_50;
  _Src = (void *)*puVar5;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar7 * 2);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  local_68 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_60 = 3;
  local_68 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = param_1;
    *plVar6 = (longlong)&PTR_GetPoolName_144553d80;
    plVar6[2] = (longlong)FUN_140dcba00;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_144553dc8;
  }
  puVar5 = (undefined8 *)(**(code **)(*local_48 + 0x138))(local_48,local_res10,&local_68);
  *(undefined8 *)(param_1 + 0x20) = *puVar5;
  if (local_60 != 0) {
    if (local_68 == (longlong *)0x0) goto LAB_140dd14fb;
    (**(code **)(*local_68 + 0x28))(local_68,0);
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
    local_60 = 0;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
LAB_140dd14fb:
  (**(code **)(*local_48 + 0x30))
            (local_48,(longlong)*(int *)(param_1 + 0x28) * 0x10 + *(longlong *)(param_1 + 0x10),3,
             &local_58);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  plVar6 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140dd1580 FUN_140dd1580 body=2648 status=ok
// SIG undefined FUN_140dd1580(void)

void FUN_140dd1580(longlong *param_1,longlong param_2,ulonglong *param_3)

{
  void *pvVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined2 *puVar10;
  int iVar11;
  longlong *plVar12;
  short *psVar13;
  ulonglong uVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  float fVar18;
  undefined2 *puVar19;
  wchar_t *pwVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong *plVar23;
  undefined4 *puVar24;
  undefined8 local_res10;
  ulonglong *local_res18;
  undefined8 local_res20;
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  float local_d0;
  float local_cc;
  longlong local_c8;
  undefined8 local_c0;
  short *local_b8;
  int local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  short *local_90;
  int local_88;
  longlong local_80 [2];
  wchar_t *local_70;
  int local_68;
  undefined8 local_60;
  longlong *local_58;
  
  if (param_2 != 0) {
    local_res10 = local_res10 & 0xffffffff00000000;
    plVar12 = (longlong *)(param_2 + 0x98);
    local_d8 = (undefined2 *)
               CONCAT44((float)DAT_1464aa744._1_1_ * 0.003921569,
                        (float)DAT_1464aa744._2_1_ * 0.003921569);
    local_d0 = (float)(byte)DAT_1464aa744 * 0.003921569;
    local_cc = (float)DAT_1464aa744._3_1_ * 0.003921569;
    local_res18 = param_3;
    local_a8 = plVar12;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_d8);
    local_res20 = (ulonglong)local_res20._4_4_ << 0x20;
    local_e8 = (undefined2 *)0x0;
    local_e0 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    FGenericPlatformString::Memcpy(local_e8,L"==========================",0x36);
    FUN_1428a6fb0(plVar12,&local_e8,&local_res20);
    if (local_e8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res20 = local_res20 & 0xffffffff00000000;
    local_e8 = (undefined2 *)0x0;
    local_e0 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    FGenericPlatformString::Memcpy(local_e8,L"Connected Controller Info:",0x36);
    FUN_1428a6fb0(plVar12,&local_e8,&local_res20);
    if (local_e8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res20 = local_res20 & 0xffffffff00000000;
    local_e8 = (undefined2 *)0x0;
    local_e0._0_4_ = 0x1b;
    local_e0._4_4_ = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    FGenericPlatformString::Memcpy(local_e8,L"==========================",0x36);
    FUN_1428a6fb0(plVar12,&local_e8,&local_res20);
    if (local_e8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_a0 = (longlong *)*param_1;
    local_58 = local_a0 + (longlong)(int)param_1[1] * 5;
    if (local_a0 != local_58) {
      local_98 = local_a0 + 3;
      do {
        puVar16 = (undefined2 *)0x0;
        iVar15 = (int)local_98[-2];
        local_e8 = (undefined2 *)0x0;
        iVar11 = 0;
        local_e0._4_4_ = 0;
        puVar17 = puVar16;
        if (0 < iVar15) {
          local_res20 = 0;
          puVar10 = puVar16;
          puVar19 = puVar16;
          do {
            uVar21 = local_res20;
            iVar11 = 0;
            iVar6 = (int)puVar16;
            if ((int)puVar19 == iVar15 + -1) {
              FString::PrintfImpl(&local_90,&DAT_144537914,*(undefined4 *)(local_res20 + *local_a0))
              ;
              psVar13 = local_90;
              if (local_88 != 0) {
                iVar11 = local_88 + -1;
              }
              if (iVar11 != 0) {
                local_e0._0_4_ = iVar6 + (uint)(iVar6 == 0) + iVar11;
                if ((int)puVar10 < (int)(uint)local_e0) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,puVar16);
                  puVar10 = (undefined2 *)(ulonglong)local_e0._4_4_;
                  puVar17 = local_e8;
                }
                uVar22 = (uint)local_e0;
                _guard_xfg_dispatch_icall_nop
                          (puVar17 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)),psVar13,
                           (longlong)iVar11 * 2);
                (puVar17 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[iVar11] = 0;
                psVar13 = local_90;
LAB_140dd18ca:
                puVar16 = (undefined2 *)(ulonglong)uVar22;
                uVar21 = local_res20;
              }
            }
            else {
              FString::PrintfImpl(&local_b8,&DAT_14453cf48,*(undefined4 *)(local_res20 + *local_a0))
              ;
              psVar13 = local_b8;
              if (local_b0 != 0) {
                iVar11 = local_b0 + -1;
              }
              if (iVar11 != 0) {
                local_e0._0_4_ = iVar6 + (uint)(iVar6 == 0) + iVar11;
                if ((int)puVar10 < (int)(uint)local_e0) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,puVar16);
                  puVar10 = (undefined2 *)(ulonglong)local_e0._4_4_;
                  puVar17 = local_e8;
                }
                uVar22 = (uint)local_e0;
                _guard_xfg_dispatch_icall_nop
                          (puVar17 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)),psVar13,
                           (longlong)iVar11 * 2);
                (puVar17 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[iVar11] = 0;
                psVar13 = local_b8;
                goto LAB_140dd18ca;
              }
            }
            iVar11 = (int)puVar16;
            if (psVar13 != (short *)0x0) {
              FMemory::Free(psVar13);
            }
            local_res20 = uVar21 + 4;
            uVar22 = (int)puVar19 + 1;
            puVar19 = (undefined2 *)(ulonglong)uVar22;
            iVar15 = (int)local_98[-2];
          } while ((int)uVar22 < iVar15);
        }
        plVar12 = local_98;
        puVar16 = (undefined2 *)0x0;
        cVar5 = FWeakObjectPtr::IsValid(local_98);
        if (cVar5 == '\0') {
          pwVar20 = L"NULL";
          uVar22 = (uint)(float)local_res10;
        }
        else {
          uVar22 = (uint)(float)local_res10 | 1;
          local_res10 = local_res10 | 1;
          lVar7 = FWeakObjectPtr::Get(plVar12);
          local_60 = *(undefined8 *)(lVar7 + 0x18);
          FName::ToString(&local_60,&local_70);
          pwVar20 = L"";
          if (local_68 != 0) {
            pwVar20 = local_70;
          }
        }
        local_d8 = (undefined2 *)0x0;
        local_cc = 0.0;
        fVar18 = 0.0;
        if ((pwVar20 != (wchar_t *)0x0) && (fVar18 = 0.0, *pwVar20 != L'\0')) {
          lVar7 = -1;
          do {
            lVar8 = lVar7 + 1;
            lVar7 = lVar7 + 1;
          } while (pwVar20[lVar8] != L'\0');
          local_d0 = (float)((int)lVar7 + 1);
          lVar7 = (longlong)(int)local_d0;
          if (0 < (int)local_d0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
          }
          fVar18 = local_d0;
          puVar16 = local_d8;
          FGenericPlatformString::Memcpy(local_d8,pwVar20,lVar7 * 2);
        }
        if ((uVar22 & 1) != 0) {
          local_res10 = CONCAT44(local_res10._4_4_,uVar22) & 0xfffffffffffffffe;
          if (local_70 != (wchar_t *)0x0) {
            FMemory::Free();
          }
        }
        plVar12 = local_98;
        local_res20 = local_res20 & 0xffffffff00000000;
        cVar5 = FWeakObjectPtr::IsValid(local_98 + -1);
        puVar10 = &DAT_143f3eda8;
        if (fVar18 != 0.0) {
          puVar10 = puVar16;
        }
        puVar9 = &DAT_144537ab4;
        pwVar20 = L"FALSE";
        puVar19 = &DAT_143f3eda8;
        if (iVar11 != 0) {
          puVar19 = puVar17;
        }
        if (cVar5 != '\0') {
          puVar9 = &DAT_14453cf60;
        }
        if ((char)plVar12[1] != '\0') {
          pwVar20 = L"TRUE";
        }
        FString::PrintfImpl(local_80,L"{%s} bIsConnected: %s / %s / Dialog? %s",puVar19,pwVar20,
                            puVar10,puVar9);
        FUN_1428a6fb0(local_a8,local_80,&local_res20);
        if (local_80[0] != 0) {
          FMemory::Free();
        }
        if (puVar16 != (undefined2 *)0x0) {
          FMemory::Free(puVar16);
        }
        if (puVar17 != (undefined2 *)0x0) {
          FMemory::Free(puVar17);
        }
        local_98 = plVar12 + 5;
        local_a0 = local_a0 + 5;
        plVar12 = local_a8;
        param_3 = local_res18;
      } while (local_a0 != local_58);
    }
    uVar21 = 0;
    local_res10 = local_res10 & 0xffffffff00000000;
    local_e8 = (undefined2 *)0x0;
    local_e0 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    FGenericPlatformString::Memcpy(local_e8,L"==========================",0x36);
    FUN_1428a6fb0(plVar12,&local_e8,&local_res10);
    if (local_e8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res10 = local_res10 & 0xffffffff00000000;
    local_e8 = (undefined2 *)0x0;
    local_e0 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    FGenericPlatformString::Memcpy(local_e8,L"Local Players:",0x1e);
    FUN_1428a6fb0(plVar12,&local_e8,&local_res10);
    if (local_e8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res10 = local_res10 & 0xffffffff00000000;
    local_e8 = (undefined2 *)0x0;
    local_e0 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    FGenericPlatformString::Memcpy(local_e8,L"==========================",0x36);
    FUN_1428a6fb0(plVar12,&local_e8,&local_res10);
    if (local_e8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    plVar23 = (longlong *)*param_3;
    uVar14 = (longlong)(int)param_3[1] & 0x1fffffffffffffff;
    if (plVar23 + (int)param_3[1] < plVar23) {
      uVar14 = uVar21;
    }
    if (uVar14 != 0) {
      do {
        lVar7 = *plVar23;
        if (lVar7 != 0) {
          local_res20 = *(ulonglong *)(lVar7 + 0x18);
          FName::ToString(&local_res20,&local_b8);
          psVar13 = &DAT_143f3eda8;
          if (local_b0 != 0) {
            psVar13 = local_b8;
          }
          local_d8 = (undefined2 *)0x0;
          local_cc = 0.0;
          puVar17 = (undefined2 *)0x0;
          puVar16 = (undefined2 *)0x0;
          if ((psVar13 != (short *)0x0) &&
             (puVar17 = (undefined2 *)0x0, puVar16 = (undefined2 *)0x0, *psVar13 != 0)) {
            lVar8 = -1;
            do {
              lVar3 = lVar8 + 1;
              lVar8 = lVar8 + 1;
            } while (psVar13[lVar3] != 0);
            local_d0 = (float)((int)lVar8 + 1);
            local_res10 = CONCAT44(local_res10._4_4_,local_d0);
            fVar18 = local_d0;
            if (0 < (int)local_d0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
              fVar18 = (float)local_res10;
            }
            puVar17 = local_d8;
            puVar16 = (undefined2 *)(ulonglong)(uint)local_d0;
            FGenericPlatformString::Memcpy(local_d8,psVar13,(longlong)(int)fVar18 * 2);
          }
          if (local_b8 != (short *)0x0) {
            FMemory::Free();
          }
          local_res10 = local_res10 & 0xffffffff00000000;
          puVar10 = &DAT_143f3eda8;
          if ((int)puVar16 != 0) {
            puVar10 = puVar17;
          }
          FString::PrintfImpl(local_80,L"%s - ControllerId: %d",puVar10,
                              *(undefined4 *)(lVar7 + 0x108));
          plVar12 = local_a8;
          FUN_1428a6fb0(local_a8,local_80,&local_res10);
          if (local_80[0] != 0) {
            FMemory::Free();
          }
          if (puVar17 != (undefined2 *)0x0) {
            FMemory::Free(puVar17);
          }
        }
        plVar23 = plVar23 + 1;
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar14);
    }
    uVar21 = 0;
    local_res10 = local_res10 & 0xffffffff00000000;
    local_e8 = (undefined2 *)0x0;
    local_e0 = 0x27;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    FGenericPlatformString::Memcpy(local_e8,L"======================================",0x4e);
    FUN_1428a6fb0(plVar12,&local_e8,&local_res10);
    if (local_e8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res10 = local_res10 & 0xffffffff00000000;
    local_e8 = (undefined2 *)0x0;
    local_e0 = 0x27;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    FGenericPlatformString::Memcpy(local_e8,L"Controller Ids Requiring Forced Login:",0x4e);
    FUN_1428a6fb0(plVar12,&local_e8,&local_res10);
    if (local_e8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res10 = local_res10 & 0xffffffff00000000;
    local_e8 = (undefined2 *)0x0;
    local_e0 = 0x27;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    FGenericPlatformString::Memcpy(local_e8,L"======================================",0x4e);
    FUN_1428a6fb0(plVar12,&local_e8,&local_res10);
    if (local_e8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    bVar2 = true;
    local_c8 = 0;
    local_c0 = 0;
    puVar24 = (undefined4 *)param_1[2];
    uVar14 = (longlong)(int)param_1[3] & 0x3fffffffffffffff;
    if (puVar24 + (int)param_1[3] < puVar24) {
      uVar14 = uVar21;
    }
    local_res10 = uVar14;
    if (uVar14 != 0) {
      do {
        iVar15 = 0;
        if (bVar2) {
          FString::PrintfImpl(&local_b8,&DAT_144537b94,*puVar24);
          psVar13 = local_b8;
          uVar4 = local_c0;
          if (local_b0 != 0) {
            iVar15 = local_b0 + -1;
          }
          if (iVar15 != 0) {
            iVar11 = (int)local_c0;
            lVar7 = (longlong)(int)local_c0;
            iVar6 = (uint)((int)local_c0 == 0) + iVar15 + (int)local_c0;
            local_c0 = CONCAT44(local_c0._4_4_,iVar6);
            if (local_c0._4_4_ < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar4 & 0xffffffff);
            }
            pvVar1 = (void *)(local_c8 + (lVar7 - (ulonglong)(iVar11 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,psVar13,(longlong)iVar15 * 2);
            *(undefined2 *)((longlong)pvVar1 + (longlong)iVar15 * 2) = 0;
            uVar14 = local_res10;
          }
          if (local_b8 != (short *)0x0) {
            FMemory::Free(local_b8);
          }
          bVar2 = false;
        }
        else {
          FString::PrintfImpl(&local_90,L", %d",*puVar24);
          psVar13 = local_90;
          uVar4 = local_c0;
          if (local_88 != 0) {
            iVar15 = local_88 + -1;
          }
          if (iVar15 != 0) {
            iVar11 = (int)local_c0;
            lVar7 = (longlong)(int)local_c0;
            iVar6 = (uint)((int)local_c0 == 0) + iVar15 + (int)local_c0;
            local_c0 = CONCAT44(local_c0._4_4_,iVar6);
            if (local_c0._4_4_ < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar4 & 0xffffffff);
            }
            pvVar1 = (void *)(local_c8 + (lVar7 - (ulonglong)(iVar11 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,psVar13,(longlong)iVar15 * 2);
            *(undefined2 *)((longlong)pvVar1 + (longlong)iVar15 * 2) = 0;
            uVar14 = local_res10;
          }
          if (local_90 != (short *)0x0) {
            FMemory::Free(local_90);
          }
        }
        puVar24 = puVar24 + 1;
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar14);
      if (((int)local_c0 != 0) && (0 < (int)local_c0 + -1)) {
        local_res10 = local_res10 & 0xffffffff00000000;
        FUN_1428a6fb0(local_a8,&local_c8,&local_res10);
      }
      if (local_c8 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140dd1fe0 FUN_140dd1fe0 body=372 status=ok
// SIG undefined FUN_140dd1fe0(void)

void FUN_140dd1fe0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x14);
    lVar6 = FUN_14244f490(uVar5,0);
    if (lVar6 != 0) {
      lVar7 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (*(longlong *)(lVar6 + 0x1428) != 0)) {
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_20,L"Continuing search",L"Matchmaking",L"ContinuingSearch");
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_38,L"Player Declined",L"Matchmaking",L"PlayerDeclined");
        FUN_1411db4f0(*(undefined8 *)(lVar6 + 0x1428),local_res8,uVar8,uVar5,0x40a00000,0,2);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        if (local_18 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_18 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
      }
    }
  }
  return;
}



// FUNCTION 140dd2160 FUN_140dd2160 body=519 status=ok
// SIG undefined FUN_140dd2160(void)

void FUN_140dd2160(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res18 [8];
  longlong *local_68;
  int local_60;
  longlong local_58 [2];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  FUN_1404cf2e0(&local_38,0);
  if (0 < *(int *)(param_1 + 0x60)) {
    if ((local_38 != (longlong *)0x0) &&
       (cVar4 = (**(code **)(*local_38 + 0x10))(local_38,2), cVar4 != '\0')) {
      local_68 = (longlong *)0x0;
      plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
      local_60 = 3;
      local_68 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        plVar5[1] = param_1;
        *plVar5 = (longlong)&PTR_GetPoolName_144553d80;
        plVar5[2] = (longlong)FUN_140dcbac0;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[4] = lVar6;
        *plVar5 = (longlong)&PTR_GetPoolName_144553dc8;
      }
      puVar7 = (undefined8 *)(**(code **)(*local_38 + 0x138))(local_38,local_res18,&local_68);
      *(undefined8 *)(param_1 + 0x68) = *puVar7;
      if (local_60 == 0) {
LAB_140dd226d:
        if (local_68 != (longlong *)0x0) {
          FMemory::Free(local_68);
        }
      }
      else if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x28))(local_68,0);
        if (local_68 != (longlong *)0x0) {
          local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
        }
        local_60 = 0;
        goto LAB_140dd226d;
      }
      local_58[0] = 0;
      local_58[1] = 0;
      (**(code **)(*local_38 + 0x30))
                (local_38,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x30),local_58);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      goto LAB_140dd231b;
    }
    if (0 < *(int *)(param_1 + 0x60)) {
      FUN_1404cf890(&local_48,0);
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x140))
                  (local_48,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x30),
                   param_1 + 0x38);
      }
      plVar5 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
LAB_140dd231b:
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140dd2370 FUN_140dd2370 body=104 status=ok
// SIG undefined FUN_140dd2370(void)

void FUN_140dd2370(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    TBaseMulticastDelegate<void>::Remove
              (*(longlong *)(param_1 + 0x18) + 0x28,*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
    TBaseMulticastDelegate<void>::Remove
              (*(longlong *)(param_1 + 0x18) + 0x40,*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar1 = FUN_14164ab60();
    FUN_141597530(uVar1,*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 140dd23e0 FUN_140dd23e0 body=402 status=ok
// SIG undefined FUN_140dd23e0(void)

void FUN_140dd23e0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x14);
    plVar1 = *(longlong **)(lVar3 + 0xae8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,param_1 + 0x370);
      (**(code **)(*plVar1 + 0x140))(plVar1,param_1 + 0x378);
      (**(code **)(*plVar1 + 0xe0))(plVar1,param_1 + 0x380);
      (**(code **)(*plVar1 + 0x160))(plVar1,param_1 + 0x388);
      (**(code **)(*plVar1 + 0x180))(plVar1,param_1 + 0x398);
      (**(code **)(*plVar1 + 0x200))(plVar1,param_1 + 0x3a0);
      (**(code **)(*plVar1 + 0x60))(plVar1,param_1 + 0x3a8);
      (**(code **)(*plVar1 + 0x80))(plVar1,param_1 + 0x3b0);
      (**(code **)(*plVar1 + 0x300))(plVar1,param_1 + 0x3d0);
      (**(code **)(*plVar1 + 0x340))(plVar1,param_1 + 0x3d8);
      (**(code **)(*plVar1 + 0x360))(plVar1,param_1 + 0x3e0);
      (**(code **)(*plVar1 + 0x380))(plVar1,param_1 + 1000);
      (**(code **)(*plVar1 + 0x220))(plVar1,param_1 + 0x3f0);
      (**(code **)(*plVar1 + 0x240))(plVar1,param_1 + 0x3f8);
      (**(code **)(*plVar1 + 0x260))(plVar1,param_1 + 0x400);
      (**(code **)(*plVar1 + 0x280))(plVar1,param_1 + 0x408);
      (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1 + 0x410);
      (**(code **)(*plVar1 + 0x3c0))(plVar1,param_1 + 0x418);
    }
  }
  return;
}



// FUNCTION 140dd2580 FUN_140dd2580 body=227 status=ok
// SIG undefined FUN_140dd2580(void)

void FUN_140dd2580(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  lVar1 = FUN_1407fccd0();
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    iVar4 = 0;
    if (0 < *(int *)(lVar1 + 0x50)) {
      lVar6 = 0;
      do {
        plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x48) + lVar6);
        if ((((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) &&
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res10), *plVar2 == lVar3
           )) {
          if (((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar5 != 0) {
              lVar3 = FMemory::Realloc(*plVar5,0,0);
              *plVar5 = lVar3;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 0x10;
      } while (iVar4 < *(int *)(lVar1 + 0x50));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0x48,0);
    *(undefined8 *)(param_1 + 0x48) = 0;
    FUN_1407fd680(lVar1);
  }
  return;
}



// FUNCTION 140dd2690 FUN_140dd2690 body=131 status=ok
// SIG undefined FUN_140dd2690(void)

void FUN_140dd2690(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1404cf890(&local_18,0);
    if (local_18 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      FUN_140dd1380(param_1);
    }
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140dd2720 FUN_140dd2720 body=35 status=ok
// SIG undefined FUN_140dd2720(void)

void FUN_140dd2720(longlong param_1)

{
  TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=
            (param_1 + 0x40,param_1 + 0x20);
  FUN_140db43a0(param_1);
  return;
}



// FUNCTION 140dd2750 FUN_140dd2750 body=463 status=ok
// SIG undefined FUN_140dd2750(void)

void FUN_140dd2750(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  FUN_1404cf890(&local_28,0);
  if (local_28 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined1 *)(param_1 + 8) = 1;
    goto LAB_140dd28cb;
  }
  *(undefined4 *)(param_1 + 0x38) = 3;
  TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=
            (param_1 + 0x40,param_1 + 0x20);
  local_38 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_140dc9b80;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar6 = (undefined8 *)(**(code **)(*local_28 + 0x120))(local_28,local_res10,&local_38);
  *(undefined8 *)(param_1 + 0x50) = *puVar6;
  if (local_30 == 0) {
LAB_140dd2875:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140dd2875;
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar7 = (longlong)*(int *)(param_1 + 0x28) * 0x10 + lVar5;
  for (; lVar5 != lVar7; lVar5 = lVar5 + 0x10) {
    if (*(int *)(param_1 + 0x30) == 0) {
      (**(code **)(*local_28 + 0x118))(local_28);
    }
    else {
      FUN_140dc9b80(param_1,lVar5,1);
    }
  }
LAB_140dd28cb:
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 140dd2920 FUN_140dd2920 body=702 status=ok
// SIG undefined FUN_140dd2920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dd2920(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined **local_a8 [5];
  longlong local_80 [4];
  longlong local_60;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puVar5 = (undefined8 *)FName::FName(local_b8,L"SPARK",1);
  FUN_1404d0c50(&local_c8,*puVar5);
  if (local_c8 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 3) = 2;
    if ((((int)param_1[2] != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*(longlong *)param_1[1] + 0x18))(), cVar4 != '\0')) {
      if ((int)param_1[2] == 0) {
        (**(code **)(_DAT_00000000 + 0x40))(0);
      }
      else {
        (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1]);
      }
    }
    goto LAB_140dd2b83;
  }
  local_d8 = 0x11f;
  plVar7 = (longlong *)0x0;
  lVar6 = (**(code **)(*local_c8 + 0x10))(local_c8,0x11f);
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 3) = 2;
    if ((((int)param_1[2] != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*(longlong *)param_1[1] + 0x18))(), cVar4 != '\0')) {
      if ((int)param_1[2] != 0) {
        plVar7 = (longlong *)param_1[1];
      }
      (**(code **)(*plVar7 + 0x40))(plVar7);
    }
    goto LAB_140dd2b83;
  }
  FUN_1404e8890(local_a8,lVar6 + 0x28);
  cVar4 = (**(code **)(*param_1 + 0x18))(param_1,local_a8);
  if (cVar4 == '\0') {
    FUN_140bd1b90(param_1,1);
  }
  else {
    local_e8 = (longlong *)0x0;
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_e0 = 3;
    local_e8 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = (longlong)param_1;
      *plVar7 = (longlong)&DAT_143f3ed00;
      plVar7[2] = (longlong)FUN_140dccc80;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar6;
      *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    plVar7 = (longlong *)(**(code **)(*local_c8 + 0x88))(local_c8,local_b0,&local_e8);
    param_1[4] = *plVar7;
    if (local_e0 == 0) {
LAB_140dd2b14:
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free(local_e8);
      }
    }
    else if (local_e8 != (longlong *)0x0) {
      (**(code **)(*local_e8 + 0x28))(local_e8,0);
      if (local_e8 != (longlong *)0x0) {
        local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
      }
      local_e0 = 0;
      goto LAB_140dd2b14;
    }
    local_d0 = 0x11f;
    (**(code **)(*local_c8 + 0x80))(local_c8,0x11f,local_a8,1);
  }
  local_a8[0] = &PTR_FUN_143f769a0;
  local_38 = 0;
  if (local_40 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_80,0);
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80[0] != 0) {
    FMemory::Free();
  }
LAB_140dd2b83:
  plVar7 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c0 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  return;
}



// FUNCTION 140dd2be0 FUN_140dd2be0 body=125 status=ok
// SIG undefined FUN_140dd2be0(void)

void FUN_140dd2be0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 local_res8 [8];
  
  if ((*(longlong *)(param_1 + 0x50) == 0) && (0 < *(int *)(param_1 + 0x38))) {
    FUN_140dbd320();
    uVar3 = 0;
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x78);
    }
    else if (*(int *)(param_1 + 0x28) == 1) {
      uVar3 = *(undefined4 *)(param_1 + 0x94);
    }
    uVar1 = FUN_14164ab60();
    puVar2 = (undefined8 *)FUN_14158f860(uVar1,local_res8,param_1 + 0x60,L"FFriendSystemBase",uVar3)
    ;
    *(undefined8 *)(param_1 + 0x50) = *puVar2;
  }
  return;
}



// FUNCTION 140dd2c60 FUN_140dd2c60 body=644 status=ok
// SIG undefined FUN_140dd2c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dd2c60(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8 [3];
  longlong *local_a0;
  undefined1 local_98 [16];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar7 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_1;
    *puVar3 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = 0;
  local_88[0] = &LAB_140db2a60;
  local_b8[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
  FGenericPlatformString::Memcpy(local_b8[0],L"start_gameplay",0x1e);
  FUN_140dcdc50(param_1,local_b8,local_88);
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    plVar8 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_140dd0a90(param_1,4);
  local_a0 = (longlong *)0x0;
  if ((longlong *)(param_1 + 0x20) != local_b8 + 2) {
    *(longlong *)(param_1 + 0x20) = 0;
    local_b8[2] = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&local_a0);
    plVar8 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_a0 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  FUN_140db2e80(param_1 + 0x2d8);
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x14);
    plVar8 = (longlong *)(lVar4 + 0x9a0);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = param_1;
      *plVar5 = (longlong)&DAT_143f3ed00;
      plVar5[2] = (longlong)FUN_140dcbfc0;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar6;
      *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
      puVar3 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_98);
      iVar2 = *(int *)(lVar4 + 0x9a8);
      uVar7 = *puVar3;
      *(int *)(lVar4 + 0x9a8) = iVar2 + 1;
      if (*(int *)(lVar4 + 0x9ac) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar2);
      }
      puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar8);
      *puVar3 = plVar5;
      *(undefined4 *)(puVar3 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0xf0) = uVar7;
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x14);
    FUN_140ba4250(uVar7,&DAT_146297e34,0);
  }
  return;
}



// FUNCTION 140dd2ef0 FUN_140dd2ef0 body=266 status=ok
// SIG undefined FUN_140dd2ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dd2ef0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_78[0] = 0;
  local_68[0] = &LAB_140db2a60;
  local_78[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
  FGenericPlatformString::Memcpy(local_78[0],L"start_hosting",0x1c);
  FUN_140dcdc50(param_1,local_78,local_68);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
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
  FUN_140db72a0(param_1);
  return;
}



// FUNCTION 140dd3000 FUN_140dd3000 body=1265 status=ok
// SIG undefined FUN_140dd3000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140dd3000(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_218 [32];
  longlong local_1f8 [8];
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [24];
  undefined1 *local_188 [2];
  longlong local_178 [4];
  longlong *local_158;
  int local_148;
  undefined1 *local_138 [2];
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  if (*(char *)(param_1 + 0x10) == '\0') {
    puVar9 = (undefined4 *)FGuid::NewGuid(local_1a0);
    uVar2 = puVar9[1];
    uVar3 = puVar9[2];
    uVar4 = puVar9[3];
    *(undefined4 *)(param_1 + 0x50) = *puVar9;
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    FString::operator=(param_1 + 0x60,param_2);
    *(undefined1 *)(param_1 + 0x70) = param_3;
    FUN_140dc0d50(param_1);
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x14);
    if (cVar5 != '\0') {
      uVar10 = FWeakObjectPtr::Get(param_1 + 0x14);
      cVar5 = FUN_140bc9f60(uVar10);
      if (cVar5 != '\0') {
        local_108 = (longlong *)0x0;
        local_f8 = 0;
        puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_128);
        if (puVar8 != (undefined8 *)0x0) {
          puVar8[1] = param_1;
          *puVar8 = &PTR_FUN_143f77b70;
        }
        local_1f8[2] = 0;
        local_138[0] = &LAB_140db2ba0;
        local_1f8[3] = 0x12;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f8 + 2,0);
        FGenericPlatformString::Memcpy(local_1f8[2],L"start_matchmaking",0x24);
        FUN_140dcdc50(param_1,local_1f8 + 2,local_138);
        if (local_1f8[2] != 0) {
          FMemory::Free();
        }
        plVar12 = local_108;
        if (local_f8 != 0) {
          plVar13 = local_128;
          if (local_108 != (longlong *)0x0) {
            plVar13 = local_108;
          }
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x10))(plVar13,0);
            plVar12 = local_108;
          }
        }
        goto LAB_140dd31f3;
      }
    }
    cVar5 = FUN_140dd74c0(param_1,param_1 + 0x300);
    *(char *)(param_1 + 0x2f8) = cVar5;
    if (cVar5 == '\0') {
      uVar10 = FWeakObjectPtr::Get(param_1 + 0x14);
      iVar6 = FUN_140dbc300(param_1);
      iVar7 = FUN_140bba270(uVar10);
      if (iVar6 <= iVar7) {
        local_b8 = (longlong *)0x0;
        local_a8 = 0;
        puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
        if (puVar8 != (undefined8 *)0x0) {
          puVar8[1] = param_1;
          *puVar8 = &PTR_FUN_143f77b70;
        }
        local_1f8[4] = 0;
        local_e8[0] = &LAB_140db2c80;
        local_1f8[5] = 0x12;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f8 + 4,0);
        FGenericPlatformString::Memcpy(local_1f8[4],L"start_matchmaking",0x24);
        FUN_140dcdc50(param_1,local_1f8 + 4,local_e8);
        if (local_1f8[4] != 0) {
          FMemory::Free();
        }
        if (local_a8 != 0) {
          plVar12 = local_d8;
          if (local_b8 != (longlong *)0x0) {
            plVar12 = local_b8;
          }
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x10))(plVar12,0);
          }
        }
        if (local_b8 != (longlong *)0x0) {
          FMemory::Free();
        }
        FUN_140db3670(param_1,0xe);
        return 0;
      }
    }
    local_68 = (longlong *)0x0;
    local_58 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_88);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_FUN_143f77b70;
    }
    local_1f8[6] = 0;
    local_98[0] = &LAB_140db2ab0;
    local_1f8[7] = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f8 + 6,0);
    FGenericPlatformString::Memcpy(local_1f8[6],L"start_matchmaking",0x24);
    FUN_140dcdc50(param_1,local_1f8 + 6,local_98);
    if (local_1f8[6] != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      plVar12 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar12 = local_68;
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    if ((*(char *)(param_1 + 0x70) == '\0') && (cVar5 = FUN_140db2d50(param_1), cVar5 != '\0')) {
      puVar8 = (undefined8 *)FName::FName(local_1a8,L"SPARK",1);
      FUN_1404d0c50(&local_1b8,*puVar8);
      if ((local_1b8 != (longlong *)0x0) &&
         (iVar6 = (**(code **)(*local_1b8 + 0x3a8))(), iVar6 != 1)) {
        uVar10 = FWeakObjectPtr::Get(param_1 + 0x14);
        iVar6 = FUN_140dbc300(param_1);
        iVar7 = FUN_140bba270(uVar10);
        if (iVar7 < iVar6 + -1) {
          iVar6 = rand();
          lVar11 = FUN_140da64d0();
          *(bool *)(param_1 + 0x78) =
               *(float *)(lVar11 + 0x40) <= (float)iVar6 * 3.051851e-05 &&
               (float)iVar6 * 3.051851e-05 != *(float *)(lVar11 + 0x40);
        }
      }
      plVar12 = local_1b0;
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_1b0 + 1;
        lVar11 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_1b0 + 8))(local_1b0,1);
          }
        }
      }
    }
    FUN_140db46d0(param_1);
    uVar10 = 1;
  }
  else {
    local_158 = (longlong *)0x0;
    local_148 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_178);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_FUN_143f77b70;
    }
    local_1f8[0] = 0;
    local_188[0] = &LAB_140db2ac0;
    local_1f8[1] = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f8,0);
    FGenericPlatformString::Memcpy(local_1f8[0],L"start_matchmaking",0x24);
    FUN_140dcdc50(param_1,local_1f8,local_188);
    if (local_1f8[0] != 0) {
      FMemory::Free();
    }
    plVar12 = local_158;
    if (local_148 != 0) {
      plVar13 = local_178;
      if (local_158 != (longlong *)0x0) {
        plVar13 = local_158;
      }
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x10))(plVar13,0);
        plVar12 = local_158;
      }
    }
LAB_140dd31f3:
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free();
    }
    uVar10 = 0;
  }
  return uVar10;
}



// FUNCTION 140dd3500 FUN_140dd3500 body=908 status=ok
// SIG undefined FUN_140dd3500(void)

void FUN_140dd3500(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined1 local_res10 [8];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined1 local_78 [16];
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  plVar10 = *(longlong **)(param_1 + 0x20);
  if (plVar10 != (longlong *)0x0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (lVar8 = UGameInstance::GetFirstGamePlayer(plVar10), lVar8 != 0)) {
      lVar8 = FUN_142547b50(lVar8,local_68);
      plVar4 = *(longlong **)(lVar8 + 0x10);
      lVar8 = *(longlong *)(lVar8 + 8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_68[0] = &PTR_FUN_143f740c8;
      if (local_50 != 0) {
        FMemory::Free();
      }
      local_68[0] = &PTR_FUN_143f73d18;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_58 + 1;
        lVar6 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
      if (lVar8 != 0) {
        uVar9 = (**(code **)(*plVar10 + 0x148))(plVar10);
        plVar10 = (longlong *)FUN_140d3a420(uVar9);
        if (plVar10 != (longlong *)0x0) {
          local_b8 = (undefined4)lVar8;
          uStack_b4 = (undefined4)((ulonglong)lVar8 >> 0x20);
          uStack_b0 = SUB84(plVar4,0);
          uStack_ac = (undefined4)((ulonglong)plVar4 >> 0x20);
          local_a8 = local_b8;
          uStack_a4 = uStack_b4;
          uStack_a0 = uStack_b0;
          uStack_9c = uStack_ac;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          cVar7 = FUN_142d868e0(plVar10,&local_a8);
          plVar11 = (longlong *)CONCAT44(uStack_9c,uStack_a0);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar11 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
          if (cVar7 == '\0') {
            plVar11 = (longlong *)FMemory::Realloc(0,0x30);
            local_88 = plVar11;
            if (plVar11 != (longlong *)0x0) {
              *plVar11 = (longlong)&PTR_FUN_1442e8068;
              FWeakObjectPtr::operator=(plVar11 + 1,param_1);
              plVar11[2] = (longlong)FUN_140dc7040;
              lVar8 = FDelegateHandle::GenerateNewID();
              plVar11[4] = lVar8;
              *plVar11 = (longlong)&PTR_FUN_1442e80b0;
            }
            uVar9 = 0;
            if (plVar11 != (longlong *)0x0) {
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10 + 7,1);
              puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0x20))(plVar11,local_res10);
              iVar3 = (int)plVar10[8];
              uVar9 = *puVar12;
              *(int *)(plVar10 + 8) = iVar3 + 1;
              if (*(int *)((longlong)plVar10 + 0x44) < iVar3 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10 + 7,iVar3);
              }
              puVar12 = (undefined8 *)((longlong)iVar3 * 0x10 + plVar10[7]);
              *puVar12 = plVar11;
              *(undefined4 *)(puVar12 + 1) = 3;
            }
            local_98 = local_b8;
            uStack_94 = uStack_b4;
            uStack_90 = uStack_b0;
            uStack_8c = uStack_ac;
            *(undefined8 *)(param_1 + 0x28) = uVar9;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            (**(code **)(*plVar10 + 0x48))(plVar10,&local_98);
            plVar10 = (longlong *)CONCAT44(uStack_8c,uStack_90);
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar11 = plVar10 + 1;
              lVar8 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar10 + 8))(plVar10,1);
                }
              }
            }
          }
          else {
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            FUN_140dc7040(param_1,local_78,1);
            if (plVar4 == (longlong *)0x0) {
              return;
            }
            LOCK();
            plVar10 = plVar4 + 1;
            lVar8 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
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
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar4 + 1;
        lVar8 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
    }
  }
  return;
}



// FUNCTION 140dd3890 FUN_140dd3890 body=942 status=ok
// SIG undefined FUN_140dd3890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140dd3890(longlong param_1)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  float fVar12;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  longlong local_f8 [2];
  longlong *local_e8;
  int local_e0;
  longlong local_d8 [2];
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  pplVar1 = (longlong **)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    return CONCAT71((int7)(local_28 >> 8),1);
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar8 = (longlong *)0x0;
  plVar11 = plVar8;
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)((longlong)plVar5 + 0xc) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x14) = 0;
    *plVar5 = 0;
    *(undefined4 *)(plVar5 + 1) = 0;
    plVar11 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_DestroyObject_144554240;
    plVar5[2] = (longlong)plVar11;
    plVar8 = plVar5;
  }
  local_108 = plVar11;
  local_100 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_108,plVar11,plVar11);
  if (pplVar1 != &local_108) {
    *pplVar1 = plVar11;
    local_108 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&local_100);
    plVar8 = local_100;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (*pplVar1 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_68);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = param_1;
      *puVar6 = &PTR_FUN_143f77b70;
    }
    local_d8[0] = 0;
    local_78[0] = &LAB_140db2cb0;
    local_d8[1] = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
    FGenericPlatformString::Memcpy(local_d8[0],L"start_matchmaking_round",0x30);
    FUN_140dcdc50(param_1,local_d8,local_78);
    if (local_d8[0] != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      plVar8 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar8 = local_48;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    uVar10 = FUN_140db3670(param_1,2);
    return uVar10 & 0xffffffffffffff00;
  }
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_b8);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = param_1;
    *puVar6 = &PTR_FUN_143f77b70;
  }
  local_f8[0] = 0;
  local_c8[0] = &LAB_140db2ca0;
  local_f8[1] = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8,0);
  FGenericPlatformString::Memcpy(local_f8[0],L"start_matchmaking_round",0x30);
  FUN_140dcdc50(param_1,local_f8,local_c8);
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    plVar8 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar8 = local_98;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = *pplVar1;
  uVar7 = FUN_140da5810(&local_e8,param_1,FUN_140dc7e90);
  TBaseDelegate<FSlateBrush_const_*>::operator=(plVar8,uVar7);
  if (local_e0 != 0) {
    if (local_e8 == (longlong *)0x0) goto LAB_140dd3ae4;
    (**(code **)(*local_e8 + 0x28))(local_e8,0);
    if (local_e8 != (longlong *)0x0) {
      local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
    }
    local_e0 = 0;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
LAB_140dd3ae4:
  cVar4 = *(char *)(param_1 + 0x70);
  plVar8 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  lVar9 = plVar8[0x1f];
  if (cVar4 == '\0') {
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x368))(plVar8);
      lVar9 = plVar8[0x1f];
    }
    fVar12 = *(float *)(lVar9 + 0x34);
  }
  else {
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x368))(plVar8);
      lVar9 = plVar8[0x1f];
    }
    fVar12 = *(float *)(lVar9 + 0x38);
  }
  plVar8 = *pplVar1;
  if (fVar12 <= 0.0) {
    fVar12 = 999.0;
  }
  *(float *)(plVar8 + 2) = fVar12;
  return CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
}



// FUNCTION 140dd3c40 FUN_140dd3c40 body=1794 status=ok
// SIG undefined FUN_140dd3c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140dd3c40(longlong param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined1 uVar13;
  int iVar14;
  undefined1 auStack_208 [32];
  int local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8 [2];
  longlong local_1c8;
  longlong *plStack_1c0;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong local_188 [2];
  longlong *local_178;
  int local_170;
  longlong local_168 [2];
  longlong *local_158;
  longlong *local_150;
  longlong local_148;
  longlong *plStack_140;
  undefined1 local_138 [16];
  undefined1 *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  puVar6 = (undefined8 *)FName::FName(local_138,L"SPARK",1);
  FUN_1404d0c50(&local_158,*puVar6);
  if (local_158 == (longlong *)0x0) {
    local_f8 = (longlong *)0x0;
    local_e8 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_118);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = param_1;
      *puVar6 = &PTR_FUN_143f77b70;
    }
    local_1b8[0] = 0;
    local_128[0] = &LAB_140db29d0;
    local_1b8[1] = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b8,0);
    FGenericPlatformString::Memcpy(local_1b8[0],L"start_matchmaking_search",0x32);
    FUN_140dcdc50(param_1,local_1b8,local_128);
    if (local_1b8[0] != 0) {
      FMemory::Free();
    }
    if (local_e8 != 0) {
      plVar12 = local_118;
      if (local_f8 != (longlong *)0x0) {
        plVar12 = local_f8;
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12,0);
      }
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_140db3670(param_1,3);
    uVar11 = 0;
    goto LAB_140dd42d5;
  }
  FUN_140dbc950(param_1,&local_1c8);
  if (local_1c8 == 0) {
LAB_140dd4287:
    FUN_140db3670(param_1,3);
    uVar11 = 0;
    plVar12 = plStack_1c0;
  }
  else {
    iVar4 = (**(code **)(*local_158 + 0x3a8))(local_158);
    plVar12 = (longlong *)0x0;
    iVar14 = 0;
    if (iVar4 == 0) {
      puVar6 = (undefined8 *)FName::FName(local_1d8,L"SPARK",1);
      uVar11 = *puVar6;
      lVar7 = operator_new(0x90);
      plVar9 = plVar12;
      if (lVar7 != 0) {
        uVar8 = FWeakObjectPtr::Get(param_1 + 0x14);
        plVar9 = (longlong *)FUN_140d63220(lVar7,uVar8,param_1 + 0x60,uVar11);
      }
      plVar10 = (longlong *)operator_new(0x18);
      if (plVar10 != (longlong *)0x0) {
        *(undefined4 *)(plVar10 + 1) = 1;
        *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
        *plVar10 = (longlong)&PTR_FUN_143f3f2e0;
        plVar10[2] = (longlong)plVar9;
        plVar12 = plVar10;
      }
      local_1a8 = plVar9;
      local_1a0 = plVar12;
      SharedPointerInternals::EnableSharedFromThis(&local_1a8,plVar9,plVar9);
      if ((longlong **)(param_1 + 0x30) != &local_1a8) {
        *(longlong **)(param_1 + 0x30) = plVar9;
        local_1a8 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_1a0);
        plVar12 = local_1a0;
      }
LAB_140dd3fd3:
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar12 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
    }
    else {
      iVar4 = (**(code **)(*local_158 + 0x3a8))(local_158);
      if (iVar4 == 1) {
        cVar2 = FUN_140db2d50(param_1);
        local_1d8[0] = 0x120;
        if (*(char *)(param_1 + 0x70) == '\0') {
          local_1d8[0] = 0x120;
          cVar3 = FUN_140db1a20(param_1);
          if (cVar3 == '\0') goto LAB_140dd3ed1;
          uVar13 = 0;
        }
        else {
LAB_140dd3ed1:
          uVar13 = 1;
        }
        if (cVar2 != '\0') {
          uVar11 = FWeakObjectPtr::Get(param_1 + 0x14);
          cVar2 = FUN_140bca8a0(uVar11);
          if (cVar2 == '\0') {
            iVar14 = 10;
          }
          iVar4 = FUN_140dbc6f0(param_1 + 0x88);
          iVar5 = FUN_140dbbf20(param_1);
          iVar14 = iVar14 + iVar5 + iVar4;
        }
        lVar7 = operator_new(0x60);
        plVar9 = plVar12;
        if (lVar7 != 0) {
          uVar11 = FWeakObjectPtr::Get(param_1 + 0x14);
          local_1e8 = iVar14;
          local_1e0 = uVar13;
          plVar9 = (longlong *)FUN_140ddc7f0(lVar7,uVar11,param_1 + 0x60,0x120);
        }
        plVar10 = (longlong *)operator_new(0x18);
        if (plVar10 != (longlong *)0x0) {
          *(undefined4 *)(plVar10 + 1) = 1;
          *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
          *plVar10 = (longlong)&PTR_FUN_143f3f2e0;
          plVar10[2] = (longlong)plVar9;
          plVar12 = plVar10;
        }
        local_198 = plVar9;
        local_190 = plVar12;
        SharedPointerInternals::EnableSharedFromThis(&local_198,plVar9,plVar9);
        if ((longlong **)(param_1 + 0x30) != &local_198) {
          *(longlong **)(param_1 + 0x30) = plVar9;
          local_198 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_190);
          plVar12 = local_190;
        }
        goto LAB_140dd3fd3;
      }
    }
    if (*(longlong *)(param_1 + 0x30) == 0) {
      local_58 = (longlong *)0x0;
      local_48 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_78);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = param_1;
        *puVar6 = &PTR_FUN_143f77b70;
      }
      local_168[0] = 0;
      local_88[0] = &LAB_140db2b00;
      local_168[1] = 0x19;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_168,0);
      FGenericPlatformString::Memcpy(local_168[0],L"start_matchmaking_search",0x32);
      FUN_140dcdc50(param_1,local_168,local_88);
      if (local_168[0] != 0) {
        FMemory::Free();
      }
      if (local_48 != 0) {
        plVar12 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar12 = local_58;
        }
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x10))(plVar12,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      goto LAB_140dd4287;
    }
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = param_1;
      *puVar6 = &PTR_FUN_143f77b70;
    }
    local_188[0] = 0;
    local_d8[0] = &LAB_140db2ab0;
    local_188[1] = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188,0);
    FGenericPlatformString::Memcpy(local_188[0],L"start_matchmaking_search",0x32);
    FUN_140dcdc50(param_1,local_188,local_d8);
    if (local_188[0] != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      plVar12 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar12 = local_a8;
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12,0);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    FUN_140dd0a90(param_1,2);
    lVar7 = *(longlong *)(param_1 + 0x30);
    uVar11 = FUN_1405317f0(&local_178,param_1,FUN_140dc8500);
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 8,uVar11);
    if (local_170 == 0) {
LAB_140dd413e:
      if (local_178 != (longlong *)0x0) {
        FMemory::Free(local_178);
      }
    }
    else if (local_178 != (longlong *)0x0) {
      (**(code **)(*local_178 + 0x28))(local_178,0);
      if (local_178 != (longlong *)0x0) {
        local_178 = (longlong *)FMemory::Realloc(local_178,0,0);
      }
      local_170 = 0;
      goto LAB_140dd413e;
    }
    plVar12 = plStack_1c0;
    plVar9 = *(longlong **)(param_1 + 0x30);
    local_148 = local_1c8;
    plStack_140 = plStack_1c0;
    if (plStack_1c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_1c0 + 1) = (int)plStack_1c0[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar9 + 8))(plVar9,&local_148);
    plVar9 = plStack_140;
    if (plStack_140 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_140 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      plVar12 = plStack_1c0;
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_140)(plStack_140);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar12 = plStack_1c0;
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
          plVar12 = plStack_1c0;
        }
      }
    }
    uVar11 = 1;
  }
  plVar9 = plStack_1c0;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar12 + 1;
    lVar7 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_1c0)(plStack_1c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_1c0 + 8))(plStack_1c0,1);
      }
    }
  }
LAB_140dd42d5:
  plVar12 = local_150;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_150 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  return uVar11;
}



// FUNCTION 140dd4350 FUN_140dd4350 body=47 status=ok
// SIG undefined FUN_140dd4350(void)

void FUN_140dd4350(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar1 = FUN_14164ab60();
    FUN_141597530(uVar1,*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 140dd4380 FUN_140dd4380 body=696 status=ok
// SIG undefined FUN_140dd4380(void)

void FUN_140dd4380(longlong param_1,undefined1 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_148;
  longlong *local_140;
  byte local_11f;
  longlong local_b8;
  byte local_60;
  longlong local_58;
  longlong local_48;
  
  lVar8 = *(longlong *)(param_1 + 0x60);
  lVar7 = (longlong)*(int *)(param_1 + 0x68) * 0x40 + lVar8;
  local_res10[0] = param_2;
  do {
    if (lVar8 == lVar7) {
      return;
    }
    if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar3 != '\0')) {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
      plVar4 = plVar6 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
      for (; plVar6 != plVar4; plVar6 = plVar6 + 1) {
        lVar5 = *plVar6;
        if (lVar5 != 0) {
          if ((*(longlong **)(lVar5 + 0x160) == (longlong *)0x0) ||
             (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x160) + 0x20))(), cVar3 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            if ((*(longlong **)(lVar8 + 0x10) == (longlong *)0x0) ||
               (cVar3 = (**(code **)(**(longlong **)(lVar8 + 0x10) + 0x20))(), cVar3 == '\0')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) goto LAB_140dd444d;
            bVar1 = true;
          }
          else {
LAB_140dd444d:
            bVar1 = false;
          }
          if ((*(longlong **)(lVar5 + 0x160) == (longlong *)0x0) ||
             (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x160) + 0x20))(), cVar3 == '\0')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
LAB_140dd448c:
            if ((bVar1) &&
               (cVar3 = (**(code **)**(undefined8 **)(lVar8 + 0x10))
                                  (*(undefined8 **)(lVar8 + 0x10),*(undefined8 *)(lVar5 + 0x160)),
               cVar3 != '\0')) goto LAB_140dd44a4;
            bVar1 = false;
          }
          else {
            if ((*(longlong **)(lVar8 + 0x10) == (longlong *)0x0) ||
               (cVar3 = (**(code **)(**(longlong **)(lVar8 + 0x10) + 0x20))(), cVar3 == '\0')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) goto LAB_140dd448c;
LAB_140dd44a4:
            bVar1 = true;
          }
          if (bVar1) {
            plVar4 = (longlong *)FUN_1425bd330(lVar5,6);
            if (plVar4 != (longlong *)0x0) {
              lVar5 = FUN_1404e6fc0();
              if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                  lVar5 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                local_res8[0] = 0x18;
                FUN_1423e4ec0(&local_148,plVar4,0);
                local_60 = local_60 | 0x20;
                if ((undefined4 *)local_140[1] < (undefined4 *)*local_140 + 1) {
                  (**(code **)(local_148 + 0x50))(&local_148,local_res8,4);
                  if ((local_11f & 0x10) != 0) {
                    FArchive::ByteSwap(&local_148,local_res8,4);
                  }
                }
                else {
                  local_res8[0] = *(undefined4 *)*local_140;
                  *local_140 = *local_140 + 4;
                }
                if ((undefined1 *)local_140[1] < (undefined1 *)*local_140 + 1) {
                  (**(code **)(local_148 + 0x50))(&local_148,local_res10,1);
                }
                else {
                  local_res10[0] = *(undefined1 *)*local_140;
                  *local_140 = *local_140 + 1;
                }
                (**(code **)(*plVar4 + 0x2c8))(plVar4,local_res18,&local_148,0);
                if (local_48 != 0) {
                  FMemory::Free();
                }
                if (local_58 != 0) {
                  FMemory::Free();
                }
                if (local_b8 != 0) {
                  FMemory::Free();
                }
                FArchive::~FArchive(&local_148);
              }
            }
            break;
          }
        }
      }
    }
    lVar8 = lVar8 + 0x40;
  } while( true );
}



// FUNCTION 140dd4640 FUN_140dd4640 body=675 status=ok
// SIG undefined FUN_140dd4640(void)

void FUN_140dd4640(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  longlong local_138;
  longlong *local_130;
  byte local_10f;
  longlong local_a8;
  byte local_50;
  longlong local_48;
  longlong local_38;
  
  lVar6 = *(longlong *)(param_1 + 0x60);
  lVar8 = (longlong)*(int *)(param_1 + 0x68) * 0x40 + lVar6;
  do {
    if (lVar6 == lVar8) {
      return;
    }
    if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar3 != '\0')) {
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
      plVar4 = plVar7 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
      for (; plVar7 != plVar4; plVar7 = plVar7 + 1) {
        lVar5 = *plVar7;
        if (lVar5 != 0) {
          if ((*(longlong **)(lVar5 + 0x160) == (longlong *)0x0) ||
             (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x160) + 0x20))(), cVar3 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            if ((*(longlong **)(lVar6 + 0x10) == (longlong *)0x0) ||
               (cVar3 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x20))(), cVar3 == '\0')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) goto LAB_140dd470d;
            bVar1 = true;
          }
          else {
LAB_140dd470d:
            bVar1 = false;
          }
          if ((*(longlong **)(lVar5 + 0x160) == (longlong *)0x0) ||
             (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x160) + 0x20))(), cVar3 == '\0')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
LAB_140dd474c:
            if ((bVar1) &&
               (cVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))
                                  (*(undefined8 **)(lVar6 + 0x10),*(undefined8 *)(lVar5 + 0x160)),
               cVar3 != '\0')) goto LAB_140dd4764;
            bVar1 = false;
          }
          else {
            if ((*(longlong **)(lVar6 + 0x10) == (longlong *)0x0) ||
               (cVar3 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x20))(), cVar3 == '\0')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) goto LAB_140dd474c;
LAB_140dd4764:
            bVar1 = true;
          }
          if (bVar1) {
            plVar4 = (longlong *)FUN_1425bd330(lVar5,6);
            if (plVar4 != (longlong *)0x0) {
              lVar5 = FUN_1404e6fc0();
              if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                  lVar5 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                local_res8[0] = 0x17;
                FUN_1423e4ec0(&local_138,plVar4,0);
                local_50 = local_50 | 0x20;
                if ((undefined4 *)local_130[1] < (undefined4 *)*local_130 + 1) {
                  (**(code **)(local_138 + 0x50))(&local_138,local_res8,4);
                  if ((local_10f & 0x10) != 0) {
                    FArchive::ByteSwap(&local_138,local_res8,4);
                  }
                }
                else {
                  local_res8[0] = *(undefined4 *)*local_130;
                  *local_130 = *local_130 + 4;
                }
                (**(code **)(*plVar4 + 0x2c8))(plVar4,local_res10,&local_138,0);
                if (local_38 != 0) {
                  FMemory::Free();
                }
                if (local_48 != 0) {
                  FMemory::Free();
                }
                if (local_a8 != 0) {
                  FMemory::Free();
                }
                FArchive::~FArchive(&local_138);
              }
            }
            break;
          }
        }
      }
    }
    lVar6 = lVar6 + 0x40;
  } while( true );
}



// FUNCTION 140dd48f0 FUN_140dd48f0 body=675 status=ok
// SIG undefined FUN_140dd48f0(void)

void FUN_140dd48f0(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  longlong local_138;
  longlong *local_130;
  byte local_10f;
  longlong local_a8;
  byte local_50;
  longlong local_48;
  longlong local_38;
  
  lVar6 = *(longlong *)(param_1 + 0x60);
  lVar8 = (longlong)*(int *)(param_1 + 0x68) * 0x40 + lVar6;
  do {
    if (lVar6 == lVar8) {
      return;
    }
    if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar3 != '\0')) {
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
      plVar4 = plVar7 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
      for (; plVar7 != plVar4; plVar7 = plVar7 + 1) {
        lVar5 = *plVar7;
        if (lVar5 != 0) {
          if ((*(longlong **)(lVar5 + 0x160) == (longlong *)0x0) ||
             (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x160) + 0x20))(), cVar3 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            if ((*(longlong **)(lVar6 + 0x10) == (longlong *)0x0) ||
               (cVar3 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x20))(), cVar3 == '\0')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) goto LAB_140dd49bd;
            bVar1 = true;
          }
          else {
LAB_140dd49bd:
            bVar1 = false;
          }
          if ((*(longlong **)(lVar5 + 0x160) == (longlong *)0x0) ||
             (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x160) + 0x20))(), cVar3 == '\0')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
LAB_140dd49fc:
            if ((bVar1) &&
               (cVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))
                                  (*(undefined8 **)(lVar6 + 0x10),*(undefined8 *)(lVar5 + 0x160)),
               cVar3 != '\0')) goto LAB_140dd4a14;
            bVar1 = false;
          }
          else {
            if ((*(longlong **)(lVar6 + 0x10) == (longlong *)0x0) ||
               (cVar3 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x20))(), cVar3 == '\0')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) goto LAB_140dd49fc;
LAB_140dd4a14:
            bVar1 = true;
          }
          if (bVar1) {
            plVar4 = (longlong *)FUN_1425bd330(lVar5,6);
            if (plVar4 != (longlong *)0x0) {
              lVar5 = FUN_1404e6fc0();
              if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                  lVar5 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                local_res8[0] = 0x19;
                FUN_1423e4ec0(&local_138,plVar4,0);
                local_50 = local_50 | 0x20;
                if ((undefined4 *)local_130[1] < (undefined4 *)*local_130 + 1) {
                  (**(code **)(local_138 + 0x50))(&local_138,local_res8,4);
                  if ((local_10f & 0x10) != 0) {
                    FArchive::ByteSwap(&local_138,local_res8,4);
                  }
                }
                else {
                  local_res8[0] = *(undefined4 *)*local_130;
                  *local_130 = *local_130 + 4;
                }
                (**(code **)(*plVar4 + 0x2c8))(plVar4,local_res10,&local_138,0);
                if (local_38 != 0) {
                  FMemory::Free();
                }
                if (local_48 != 0) {
                  FMemory::Free();
                }
                if (local_a8 != 0) {
                  FMemory::Free();
                }
                FArchive::~FArchive(&local_138);
              }
            }
            break;
          }
        }
      }
    }
    lVar6 = lVar6 + 0x40;
  } while( true );
}



// FUNCTION 140dd4ba0 FUN_140dd4ba0 body=251 status=ok
// SIG undefined FUN_140dd4ba0(void)

void FUN_140dd4ba0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar4 != '\0')) {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar1 = plVar7 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      lVar5 = *plVar7;
      if ((lVar5 != 0) &&
         (cVar4 = FUniqueNetIdWrapper::operator==(lVar5 + 0x158,param_2), cVar4 != '\0')) {
        lVar5 = FUN_1425bd330(lVar5,6);
        if (lVar5 == 0) {
          return;
        }
        lVar6 = FUN_1404e6fc0();
        iVar2 = *(int *)(lVar6 + 0x90);
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar2) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)iVar2 * 8)
            != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          return;
        }
        FUN_140da6ad0(lVar5,CONCAT71((int7)(int3)((uint)iVar2 >> 8),1),0x1b,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140dd4ca0 FUN_140dd4ca0 body=169 status=ok
// SIG undefined FUN_140dd4ca0(void)

undefined8 FUN_140dd4ca0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    if ((char)plVar1[1] == '\0') {
      if (plVar1 != (longlong *)0x0) goto LAB_140dd4d2b;
    }
    else {
      (**(code **)(*plVar1 + 0x10))();
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *param_1 = 0;
    }
  }
  if (0 < (int)param_1[2]) {
    plVar1 = (longlong *)param_1[1];
    *param_1 = *plVar1;
    iVar3 = (int)param_1[2];
    if (iVar3 + -1 != 0) {
      _guard_xfg_dispatch_icall_nop(plVar1,plVar1 + 1,(longlong)(iVar3 + -1) << 3);
      iVar3 = (int)param_1[2];
    }
    *(int *)(param_1 + 2) = iVar3 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 1);
    (**(code **)(*(longlong *)*param_1 + 8))();
  }
LAB_140dd4d2b:
  if (*param_1 == 0) {
    param_1[3] = 0;
    return 0;
  }
  return 1;
}



// FUNCTION 140dd4d50 FUN_140dd4d50 body=700 status=ok
// SIG undefined FUN_140dd4d50(void)

undefined8 FUN_140dd4d50(longlong param_1,float param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  longlong lVar12;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (((lVar4 != 0) && (fVar1 = *(float *)(lVar4 + 0x10), 0.0 < fVar1)) && (fVar1 != 999.0)) {
    *(float *)(lVar4 + 0x10) = fVar1 - param_2;
    if (fVar1 - param_2 <= 0.0) {
      *(undefined4 *)(lVar4 + 0x10) = 0;
      TBaseDelegate<void>::ExecuteIfBound();
    }
  }
  if (*(char *)(param_1 + 0x10) == '\x03') {
    if (0.0 < *(float *)(param_1 + 0xc0)) {
      param_2 = *(float *)(param_1 + 0xc0) - param_2;
      *(float *)(param_1 + 0xc0) = param_2;
      FUN_140dd1240(param_1,-((int)ROUND(-0.5 - (param_2 + param_2)) >> 1));
      if (*(float *)(param_1 + 0xc0) <= 0.0) {
        *(undefined4 *)(param_1 + 0xc0) = 0;
        FUN_140dd1240(param_1,1);
        if (*(char *)(param_1 + 0x10) == '\x03') {
          TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty
                    (param_1 + 0xd0,0);
          FUN_140db86e0(param_1);
          return 1;
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0x10) == '\x04') {
    iVar9 = *(int *)(param_1 + 0x120);
    pfVar2 = *(float **)(param_1 + 0x118);
    pfVar3 = pfVar2 + (longlong)iVar9 * 0xc;
    if (pfVar2 != pfVar3) {
      do {
        *pfVar2 = *pfVar2 - param_2;
        pfVar2 = pfVar2 + 0xc;
      } while (pfVar2 != pfVar3);
      iVar9 = *(int *)(param_1 + 0x120);
    }
    if (iVar9 != 0) {
      iVar10 = 0;
      bVar11 = 0.0 < **(float **)(param_1 + 0x118);
      lVar12 = (longlong)iVar9;
      lVar4 = 0;
      iVar5 = 0;
      do {
        lVar4 = lVar4 + 1;
        iVar6 = iVar5 + 1;
        if (lVar4 < lVar12) {
          pfVar2 = (float *)(lVar4 * 0x30 + *(longlong *)(param_1 + 0x118));
          do {
            if (bVar11 != 0.0 < *pfVar2) break;
            iVar6 = iVar6 + 1;
            lVar4 = lVar4 + 1;
            pfVar2 = pfVar2 + 0xc;
          } while (lVar4 < lVar12);
        }
        iVar7 = iVar6 - iVar5;
        if (bVar11 == false) {
          if (iVar7 != 0) {
            lVar8 = (longlong)iVar5 * 0x30 + 8 + *(longlong *)(param_1 + 0x118);
            do {
              FUN_1404bf980(lVar8);
              lVar8 = lVar8 + 0x30;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        else {
          if (iVar10 != iVar5) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar10 * 0x30 + *(longlong *)(param_1 + 0x118)),
                       (void *)((longlong)iVar5 * 0x30 + *(longlong *)(param_1 + 0x118)),
                       (longlong)iVar7 * 0x30);
          }
          iVar10 = iVar10 + iVar7;
        }
        bVar11 = (bool)(bVar11 ^ 1);
        iVar5 = iVar6;
      } while (lVar4 < lVar12);
      *(int *)(param_1 + 0x120) = iVar10;
      if (((0 < iVar9 - iVar10) && (*(int *)(param_1 + 0x120) == 0)) &&
         (*(char *)(param_1 + 0x10) == '\x04')) {
        FUN_140dd0a90(param_1,0);
      }
    }
  }
  return 1;
}



// FUNCTION 140dd5010 FUN_140dd5010 body=64 status=ok
// SIG undefined FUN_140dd5010(void)

void FUN_140dd5010(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1407fccd0();
  if (lVar1 != 0) {
    Discord_RunCallbacks(lVar1);
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (0 < *(int *)(param_1 + 0x18) + -1)) {
    FUN_140dc5ea0(param_1 + -0x28,param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 140dd5050 FUN_140dd5050 body=356 status=ok
// SIG undefined FUN_140dd5050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140dd5050(longlong param_1,float param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(float *)(param_1 + 0x2e8) <= 0.0) {
LAB_140dd5191:
    uVar4 = 1;
  }
  else {
    param_2 = *(float *)(param_1 + 0x2e8) - param_2;
    *(float *)(param_1 + 0x2e8) = param_2;
    if (0.0 < param_2) {
      iVar1 = FUN_140bba270(*(undefined8 *)(param_1 + 0x88));
      iVar2 = FUN_14046e5c0(*(undefined8 *)(param_1 + 0x88));
      if (iVar1 != iVar2) goto LAB_140dd5191;
    }
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = param_1;
      *puVar3 = &PTR_FUN_143f77b70;
    }
    local_78[0] = 0;
    local_68[0] = &LAB_140db2d00;
    local_78[1] = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"host_travel_delay_ended",0x30);
    FUN_140dcdc50(param_1,local_78,local_68);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      plVar5 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar5 = local_38;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined4 *)(param_1 + 0x2e8) = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    FUN_140dd5920(param_1);
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 140dd51c0 FUN_140dd51c0 body=321 status=ok
// SIG undefined FUN_140dd51c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140dd51c0(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  param_2 = *(float *)(param_1 + 0xb0) - param_2;
  *(float *)(param_1 + 0xb0) = param_2;
  if (0.0 < param_2) {
    uVar2 = CONCAT71((int7)(local_18 >> 8),1);
  }
  else {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_78[0] = 0;
    local_68[0] = &LAB_140db2a60;
    local_78[1] = 0x23;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"on_retry_matchmaking_delay_expired",0x46);
    FUN_140dcdc50(param_1,local_78,local_68);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
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
    uVar2 = FUN_140db86e0(param_1);
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  return uVar2;
}



// FUNCTION 140dd5310 FUN_140dd5310 body=62 status=ok
// SIG undefined FUN_140dd5310(void)

undefined8 * FUN_140dd5310(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FCanPlayOnlineTask",0x26);
  return param_2;
}



// FUNCTION 140dd5350 FUN_140dd5350 body=62 status=ok
// SIG undefined FUN_140dd5350(void)

undefined8 * FUN_140dd5350(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FPatchCheckTask",0x20);
  return param_2;
}



// FUNCTION 140dd5390 FUN_140dd5390 body=62 status=ok
// SIG undefined FUN_140dd5390(void)

undefined8 * FUN_140dd5390(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FPrivilegeCheckTask",0x28);
  return param_2;
}



// FUNCTION 140dd53d0 ToDebugString body=385 status=ok
// SIG undefined ToDebugString(void)

longlong * FUniqueNetIdWrapper::ToDebugString(longlong param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined4 local_res8 [2];
  longlong local_58 [4];
  longlong local_38 [2];
  longlong local_28 [2];
  
  local_res8[0] = 0;
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    if (cVar5 != '\0') {
      plVar8 = *(longlong **)(param_1 + 8);
      puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,local_28);
      puVar9 = &DAT_143f3eda8;
      if (*(int *)(puVar6 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar6;
      }
      uVar7 = (**(code **)(*plVar8 + 8))(plVar8,local_res8);
      puVar6 = (undefined8 *)FName::ToString(uVar7,local_38);
      if (*(int *)(puVar6 + 1) != 0) {
        puVar9 = (undefined2 *)*puVar6;
      }
      FString::PrintfImpl(local_58 + 2,L"%s:%s",puVar9,puVar10);
      plVar8 = local_58 + 2;
      bVar4 = true;
      bVar3 = true;
      bVar2 = true;
      bVar1 = false;
      goto LAB_140dd54c6;
    }
  }
  local_58[0] = 0;
  local_58[1] = 8;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = true;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"INVALID",0x10);
  plVar8 = local_58;
LAB_140dd54c6:
  *param_2 = *plVar8;
  *plVar8 = 0;
  *(int *)(param_2 + 1) = (int)plVar8[1];
  plVar8[1] = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar8 + 0xc);
  if (bVar1) {
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  if (bVar2) {
    if (local_58[2] != 0) {
      FMemory::Free();
    }
  }
  if (bVar3) {
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  if ((bVar4) && (local_28[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140dd5560 FUN_140dd5560 body=62 status=ok
// SIG undefined FUN_140dd5560(void)

undefined8 FUN_140dd5560(undefined4 param_1)

{
  switch(param_1) {
  default:
    return 0;
  case 2:
    return 1;
  case 3:
    return 2;
  case 4:
    return 3;
  case 5:
    return 4;
  case 6:
    return 5;
  }
}



// FUNCTION 140dd55c0 FUN_140dd55c0 body=159 status=ok
// SIG undefined FUN_140dd55c0(void)

wchar_t * FUN_140dd55c0(undefined1 param_1)

{
  switch(param_1) {
  case 0:
    return L"None";
  case 1:
    return L"StartHostingFailed";
  case 2:
    return L"StartMatchmakingRoundFailed";
  case 3:
    return L"StartMatchmakingSearchFailed";
  case 4:
    return L"CreateClientMatchmakingBeaconFailed";
  case 5:
    return L"SearchFailed";
  case 6:
    return L"JoinGameFailed";
  case 7:
    return L"RateLimit";
  case 8:
    return L"NetworkFailure";
  case 9:
    return L"ClientCriticalFailure";
  case 10:
    return L"UpdateSessionFailed";
  case 0xb:
    return L"StartGameplayFailed";
  case 0xc:
    return L"SplitscreenJoinFailure";
  case 0xd:
    return L"SplitscreenLeaveFailure";
  case 0xe:
    return L"NoPlaylistContentAvailable";
  default:
    return L"";
  }
}



// FUNCTION 140dd56a0 FUN_140dd56a0 body=99 status=ok
// SIG undefined FUN_140dd56a0(void)

wchar_t * FUN_140dd56a0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return L"Idle";
  case 1:
    return L"Searching";
  case 2:
    return L"ResultFound";
  case 3:
    return L"Failed";
  case 4:
    return L"FailedRateLimit";
  case 5:
    return L"Expired";
  case 6:
    return L"Canceling";
  case 7:
    return L"Canceled";
  default:
    return L"";
  }
}



// FUNCTION 140dd5730 FUN_140dd5730 body=83 status=ok
// SIG undefined FUN_140dd5730(void)

wchar_t * FUN_140dd5730(undefined1 param_1)

{
  switch(param_1) {
  case 0:
    return L"Idle";
  case 1:
    return L"PreparingToSearch";
  case 2:
    return L"Searching";
  case 3:
    return L"ConfirmingPlayers";
  case 4:
    return L"StartingGameplay";
  case 5:
    return L"Canceling";
  default:
    return L"";
  }
}



// FUNCTION 140dd57a0 FUN_140dd57a0 body=131 status=ok
// SIG undefined FUN_140dd57a0(void)

wchar_t * FUN_140dd57a0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return L"None";
  case 1:
    return L"Success";
  case 2:
    return L"Failed";
  case 3:
    return L"FailedFullSession";
  case 4:
    return L"FailedRateLimit";
  case 5:
    return L"FailedInSession";
  case 6:
    return L"FailedExpired";
  case 7:
    return L"FailedAlreadyUsed";
  case 8:
    return L"FailedSessionNoLongerExists";
  case 9:
    return L"FailedAgeRestriction";
  case 10:
    return L"FailedNetworkError";
  case 0xb:
    return L"FailedNoPrivilege";
  default:
    return L"";
  }
}



// FUNCTION 140dd5860 FUN_140dd5860 body=131 status=ok
// SIG undefined FUN_140dd5860(void)

wchar_t * FUN_140dd5860(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return L"NoLevel";
  case 1:
    return L"LoadMapFailure";
  case 2:
    return L"InvalidURL";
  case 3:
    return L"PackageMissing";
  case 4:
    return L"PackageVersion";
  case 5:
    return L"NoDownload";
  case 6:
    return L"TravelFailure";
  case 7:
    return L"CheatCommands";
  case 8:
    return L"PendingNetGameCreateFailure";
  case 9:
    return L"CloudSaveFailure";
  case 10:
    return L"ServerTravelFailure";
  case 0xb:
    return L"ClientTravelFailure";
  default:
    return L"Unknown ETravelFailure error occurred.";
  }
}



// FUNCTION 140dd5920 FUN_140dd5920 body=95 status=ok
// SIG undefined FUN_140dd5920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dd5920(longlong param_1)

{
  char cVar1;
  
  FUN_140dd0a90(param_1,0);
  if ((*(int *)(param_1 + 0x490) != 0) && (*(longlong **)(param_1 + 0x488) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x488) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x490) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140dd5967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x488) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140dd5975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 140dd5980 FUN_140dd5980 body=84 status=ok
// SIG undefined FUN_140dd5980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dd5980(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140dd59b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                  (*(longlong **)(param_1 + 0x10),param_1 + 0x50);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140dd59ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))(0,param_1 + 0x50);
      return;
    }
  }
  return;
}



// FUNCTION 140dd59e0 FUN_140dd59e0 body=92 status=ok
// SIG undefined FUN_140dd59e0(void)

void FUN_140dd59e0(longlong param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong *plVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x18) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x10);
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,uVar2,uVar1);
    }
  }
  return;
}



// FUNCTION 140dd5a40 FUN_140dd5a40 body=92 status=ok
// SIG undefined FUN_140dd5a40(void)

void FUN_140dd5a40(longlong param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong *plVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 0x3c);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x18) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x10);
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,uVar2,uVar1);
    }
  }
  return;
}



// FUNCTION 140dd5aa0 FUN_140dd5aa0 body=164 status=ok
// SIG undefined FUN_140dd5aa0(void)

void FUN_140dd5aa0(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  
  fVar4 = 0.0;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xe8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xe8);
    lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
    if (lVar3 != 0) {
      fVar4 = *(float *)(lVar3 + 0x798) - *(float *)(param_1 + 0xf8);
    }
  }
  if ((*(int *)(param_1 + 0x20) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x20) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x18);
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2,fVar4);
    }
  }
  return;
}



// FUNCTION 140dd5b50 FUN_140dd5b50 body=156 status=ok
// SIG undefined FUN_140dd5b50(void)

void FUN_140dd5b50(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_1404e5ac0();
  if ((*(int *)(param_1 + 0x1b8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x1b0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x1b0),0,0);
      *(undefined8 *)(param_1 + 0x1b0) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  if ((*(int *)(param_1 + 0x1c8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x1c0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x1c0),0,0);
      *(undefined8 *)(param_1 + 0x1c0) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 140dd5bf0 FUN_140dd5bf0 body=88 status=ok
// SIG undefined FUN_140dd5bf0(void)

void FUN_140dd5bf0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_1404e5ce0();
  if ((*(int *)(param_1 + 400) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x188), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x188) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x188),0,0);
      *(undefined8 *)(param_1 + 0x188) = uVar2;
    }
    *(undefined4 *)(param_1 + 400) = 0;
  }
  return;
}



// FUNCTION 140dd5c50 FUN_140dd5c50 body=811 status=ok
// SIG undefined FUN_140dd5c50(void)

void FUN_140dd5c50(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  int local_40;
  
  puVar5 = (undefined8 *)FName::FName(local_78,L"SPARK",1);
  FUN_1404d0c50(&local_58,*puVar5);
  plVar9 = local_58;
  if (local_58 != (longlong *)0x0) {
    lVar6 = (**(code **)(*local_58 + 0x10))(local_58,0x120);
    if (lVar6 == 0) {
      if ((*(longlong *)(param_1 + 0x340) != 0) &&
         (cVar4 = (*(code *)**(undefined8 **)*param_2)(), cVar4 != '\0')) {
        FUN_140db5ba0(param_1);
        cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x14);
        if (cVar4 != '\0') {
          uVar7 = FWeakObjectPtr::Get(param_1 + 0x14);
          lVar6 = FUN_140bb7900(uVar7);
          if (lVar6 != 0) {
            FUN_140db86e0(param_1);
          }
        }
      }
    }
    else {
      uVar7 = *param_2;
      puVar5 = *(undefined8 **)(lVar6 + 0xf0);
      puVar8 = puVar5 + (longlong)*(int *)(lVar6 + 0xf8) * 2;
      for (; puVar5 != puVar8; puVar5 = puVar5 + 2) {
        cVar4 = (*(code *)**(undefined8 **)*puVar5)((undefined8 *)*puVar5,uVar7);
        if (cVar4 != '\0') {
          local_60 = (longlong *)param_2[1];
          local_68 = *param_2;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
            plVar9 = local_58;
          }
          if ((undefined8 *)(param_1 + 0x340) != &local_68) {
            *(undefined8 *)(param_1 + 0x340) = local_68;
            local_68 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x348,&local_60);
          }
          plVar1 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_60 + 1;
            lVar6 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            plVar9 = local_58;
            if ((int)lVar6 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar9 = local_58;
              if (iVar3 == 1) {
                (**(code **)(*local_60 + 8))(local_60,1);
                plVar9 = local_58;
              }
            }
          }
          lVar6 = *plVar9;
          uVar7 = FUN_140da5c30(&local_48,param_1,FUN_140dccb60);
          puVar5 = (undefined8 *)(**(code **)(lVar6 + 0x300))(plVar9,local_70,uVar7);
          *(undefined8 *)(param_1 + 0x350) = *puVar5;
          if (local_40 == 0) {
LAB_140dd5f4e:
            if (local_48 != (longlong *)0x0) {
              FMemory::Free(local_48);
            }
          }
          else if (local_48 != (longlong *)0x0) {
            (**(code **)(*local_48 + 0x28))(local_48,0);
            if (local_48 != (longlong *)0x0) {
              local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
            }
            local_40 = 0;
            goto LAB_140dd5f4e;
          }
          (**(code **)(*plVar9 + 0x2f8))(plVar9,0x120,param_2);
          goto LAB_140dd5dff;
        }
      }
      if ((*(longlong *)(param_1 + 0x340) != 0) &&
         (cVar4 = (*(code *)**(undefined8 **)*param_2)(), cVar4 != '\0')) {
        FUN_140db5ba0(param_1);
        cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x14);
        if (cVar4 != '\0') {
          uVar7 = FWeakObjectPtr::Get(param_1 + 0x14);
          lVar6 = FUN_140bb7900(uVar7);
          if (lVar6 != 0) {
            FUN_140db86e0(param_1);
          }
        }
      }
    }
  }
LAB_140dd5dff:
  plVar9 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 140dd5f80 FUN_140dd5f80 body=407 status=ok
// SIG undefined FUN_140dd5f80(void)

void FUN_140dd5f80(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)operator_new(0x50);
  if (local_10 != (longlong *)0x0) {
    *(undefined4 *)(local_10 + 1) = 1;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    *local_10 = (longlong)&PTR_FUN_144553e60;
    local_10[3] = 0;
    *(undefined4 *)(local_10 + 4) = 0;
    *(undefined4 *)(local_10 + 5) = 2;
    local_10[6] = 0;
    local_10[2] = (longlong)&PTR_FUN_144550f30;
    *(undefined4 *)((longlong)local_10 + 0x44) = param_5;
    *(undefined4 *)(local_10 + 9) = param_6;
    *(undefined4 *)((longlong)local_10 + 0x4c) = param_7;
    *(undefined4 *)(local_10 + 7) = param_2;
    *(undefined4 *)((longlong)local_10 + 0x3c) = param_3;
    *(undefined4 *)(local_10 + 8) = param_4;
  }
  local_18 = local_10 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  plVar3 = local_10;
  plVar1 = local_18;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0xd8);
  *(int *)(param_1 + 0xd8) = iVar4 + 1;
  if (*(int *)(param_1 + 0xdc) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xd0,iVar4);
  }
  plVar6 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0xd0));
  *plVar6 = (longlong)plVar1;
  plVar6[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  FUN_140dcd8b0(param_1);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar1 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
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
  return;
}



// FUNCTION 140dd6120 FUN_140dd6120 body=1122 status=ok
// SIG undefined FUN_140dd6120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dd6120(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined1 auStack_138 [32];
  longlong local_118;
  ulonglong local_110;
  ulonglong local_108;
  longlong *local_100;
  int local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [16];
  undefined **local_b8 [5];
  longlong local_90 [4];
  longlong local_70;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x14);
  if (cVar4 == '\0') {
    return;
  }
  uVar18 = FWeakObjectPtr::Get(param_1 + 0x14);
  lVar19 = FUN_140bb7900(uVar18);
  if (lVar19 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    *(undefined1 *)(param_1 + 0x2d8) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  puVar20 = (undefined8 *)FName::FName(local_d8,L"SPARK",1);
  FUN_1404d0c50(&local_e8,*puVar20);
  if (local_e8 == (longlong *)0x0) goto LAB_140dd651b;
  local_f0 = 0x120;
  lVar19 = (**(code **)(*local_e8 + 0x10))(local_e8,0x120);
  if (lVar19 == 0) goto LAB_140dd651b;
  local_118 = param_1;
  FUN_1404e8890(local_b8,lVar19 + 0x28);
  uVar18 = FWeakObjectPtr::Get(param_1 + 0x14);
  uVar12 = FUN_140bb91c0(uVar18);
  uVar18 = FWeakObjectPtr::Get(param_1 + 0x14);
  uVar13 = FUN_140bb9330(uVar18);
  uVar18 = FWeakObjectPtr::Get(param_1 + 0x14);
  uVar14 = FUN_140bb93e0(uVar18);
  uVar18 = FWeakObjectPtr::Get(param_1 + 0x14);
  uVar15 = FUN_140bb90b0(uVar18);
  local_110 = CONCAT44(local_110._4_4_,uVar15);
  uVar18 = FWeakObjectPtr::Get(param_1 + 0x14);
  iVar16 = FUN_140bb9430(uVar18);
  uVar18 = FWeakObjectPtr::Get(param_1 + 0x14);
  uVar15 = FUN_140bb9090(uVar18);
  local_108 = CONCAT44(local_108._4_4_,uVar15);
  if (*(int *)(param_1 + 0x74) != iVar16) {
    if ((*(char *)(param_1 + 0x70) == '\0') || (iVar17 = FUN_140dbc360(param_1), 0 < iVar17)) {
      iVar16 = *(int *)(param_1 + 0x74);
    }
    else {
      *(int *)(param_1 + 0x74) = iVar16;
      uVar18 = FUN_140dbbd70(param_1);
      FUN_1404d2e60(uVar18);
    }
  }
  bVar5 = FUN_140daab40(&local_118,local_b8,DAT_14686f260,uVar13);
  bVar6 = FUN_140daab40(&local_118,local_b8,DAT_14686f278,uVar14);
  bVar7 = FUN_140daab40(&local_118,local_b8,DAT_14686f258,uVar12);
  bVar8 = FUN_140daab40(&local_118,local_b8,DAT_14686f290,iVar16);
  bVar9 = FUN_140daab40(&local_118,local_b8,DAT_14686f250,local_110 & 0xffffffff);
  puVar20 = (undefined8 *)FName::FName(local_d0,L"SEARCHCROSSPLAY",1);
  bVar10 = FUN_140daab40(&local_118,local_b8,*puVar20,local_108 & 0xffffffff);
  bVar10 = bVar8 | bVar7 | bVar6 | bVar5 | bVar9 | bVar10;
  if (*(char *)(param_1 + 0x79) != '\0') {
    *(undefined1 *)(param_1 + 0x79) = 0;
    uVar18 = FWeakObjectPtr::Get(param_1 + 0x14);
    uVar12 = FUN_140bb8dc0(uVar18,param_1 + 0x60);
    bVar7 = FUN_140daab40(&local_118,local_b8,DAT_14686f240,uVar12);
    bVar10 = bVar10 | bVar7;
  }
  if ((*(char *)(param_1 + 0x2f8) == '\0') && ((bVar5 != 0 || (bVar6 != 0)))) {
    uVar11 = FUN_140dd74c0(param_1,param_1 + 0x300);
    *(undefined1 *)(param_1 + 0x2f8) = uVar11;
  }
  if (bVar10 == 0) {
    if (*(char *)(param_1 + 0x2d9) != '\0') {
      local_110 = 0x120;
      FUN_140dc91e0(param_1,0x120,1);
    }
  }
  else {
    lVar19 = *local_e8;
    uVar18 = FUN_140da5ad0(&local_100,param_1,FUN_140dd6590);
    puVar20 = (undefined8 *)(**(code **)(lVar19 + 0x88))(local_e8,local_c8,uVar18);
    *(undefined8 *)(param_1 + 0x2e0) = *puVar20;
    if (local_f8 == 0) {
LAB_140dd647f:
      if (local_100 != (longlong *)0x0) {
        FMemory::Free(local_100);
      }
    }
    else if (local_100 != (longlong *)0x0) {
      (**(code **)(*local_100 + 0x28))(local_100,0);
      if (local_100 != (longlong *)0x0) {
        local_100 = (longlong *)FMemory::Realloc(local_100,0,0);
      }
      local_f8 = 0;
      goto LAB_140dd647f;
    }
    local_108 = 0x120;
    (**(code **)(*local_e8 + 0x80))(local_e8,0x120,local_b8,1);
  }
  local_b8[0] = &PTR_FUN_143f769a0;
  local_48 = 0;
  if (local_50 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_90,0);
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90[0] != 0) {
    FMemory::Free();
  }
LAB_140dd651b:
  plVar3 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e0 + 1;
    lVar19 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  return;
}



// FUNCTION 140dd6590 FUN_140dd6590 body=545 status=ok
// SIG undefined FUN_140dd6590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dd6590(longlong *param_1,longlong param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  int iStack_98;
  undefined4 uStack_94;
  longlong local_90 [2];
  undefined1 local_80 [8];
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8 = 0x120;
  if (param_2 == 0x120) {
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_a0 = param_1;
    iStack_98 = param_3;
    puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_68);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar3 + 1) = (undefined4)local_a0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = local_a0._4_4_;
      *(int *)(puVar3 + 2) = iStack_98;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_94;
    }
    local_90[0] = 0;
    local_78[0] = &LAB_140db29f0;
    local_90[1] = 0x24;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_90,0);
    FGenericPlatformString::Memcpy(local_90[0],L"update_advertised_settings_complete",0x48);
    FUN_140dcdc50(param_1,local_90,local_78);
    if (local_90[0] != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      plVar5 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar5 = local_48;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    puVar3 = (undefined8 *)FName::FName(local_80,L"SPARK",1);
    FUN_1404d0c50(&local_a0,*puVar3);
    plVar5 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      (**(code **)(*local_a0 + 0x90))(local_a0,param_1 + 0x5c);
    }
    if (param_3 == 1) {
      if ((char)param_1[0x5b] == '\0') {
        if (*(char *)((longlong)param_1 + 0x2d9) == '\0') {
          if (((plVar5 != (longlong *)0x0) &&
              (iVar2 = (**(code **)(*plVar5 + 0x3a8))(plVar5), iVar2 == 1)) &&
             ((longlong *)param_1[6] != (longlong *)0x0)) {
            (**(code **)(*(longlong *)param_1[6] + 0x10))();
          }
        }
        else {
          local_a8 = 0x120;
          FUN_140dc91e0(param_1,0x120,1);
        }
      }
      else {
        FUN_140dd6120(param_1);
      }
    }
    else {
      uVar4 = 10;
      if (param_3 == 4) {
        uVar4 = 7;
      }
      FUN_140db3670(param_1,uVar4);
    }
    if (CONCAT44(uStack_94,iStack_98) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_94,iStack_98) + 8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        puVar3 = (undefined8 *)CONCAT44(uStack_94,iStack_98);
        (**(code **)*puVar3)(puVar3);
        LOCK();
        piVar1 = (int *)((longlong)puVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*(longlong *)CONCAT44(uStack_94,iStack_98) + 8))
                    ((longlong *)CONCAT44(uStack_94,iStack_98),1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140dd67c0 FUN_140dd67c0 body=985 status=ok
// SIG undefined FUN_140dd67c0(void)

void FUN_140dd67c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  longlong *local_60;
  int local_58;
  
  if (0 < *(int *)(param_1 + 0x360)) {
    if (*(longlong *)(param_1 + 0x368) != 0) {
      uVar8 = FUN_14164ab60();
      FUN_141597530(uVar8,*(undefined8 *)(param_1 + 0x368));
    }
    uVar19 = 0;
    lVar18 = *(longlong *)(param_1 + 0x358);
    lVar3 = lVar18 + (longlong)*(int *)(param_1 + 0x360) * 0x28;
    for (; lVar18 != lVar3; lVar18 = lVar18 + 0x28) {
      plVar16 = (longlong *)0x0;
      bVar5 = false;
      uVar13 = 0;
      local_80 = (longlong *)0x0;
      local_78 = 0;
      iVar7 = 0;
      if ((param_2 != DAT_14686f220) &&
         (cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x14), cVar6 != '\0')) {
        uVar8 = FWeakObjectPtr::Get(param_1 + 0x14);
        lVar9 = FUN_140bb7900(uVar8);
        iVar7 = 0;
        if (lVar9 != 0) {
          local_78 = CONCAT44(local_78._4_4_,1);
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_80,0);
          uVar13 = local_78 & 0xffffffff;
          *local_80 = lVar9;
          plVar16 = local_80;
          iVar7 = local_78._4_4_;
        }
      }
      iVar12 = (int)uVar13;
      if ((param_2 != DAT_14686f208) &&
         (cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x14), cVar6 != '\0')) {
        uVar8 = FWeakObjectPtr::Get(param_1 + 0x14);
        lVar9 = FUN_140bb7870(uVar8);
        if (lVar9 != 0) {
          lVar15 = (longlong)iVar12;
          iVar12 = iVar12 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar12);
          if (iVar7 < iVar12) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_80,uVar13);
            plVar16 = local_80;
            iVar12 = (int)local_78;
          }
          plVar16[lVar15] = lVar9;
        }
      }
      for (plVar14 = plVar16; plVar14 != plVar16 + iVar12; plVar14 = plVar14 + 1) {
        if ((*plVar14 != 0) && (iVar7 = FUN_1404cc400(), iVar7 != -1)) goto LAB_140dd6abe;
      }
      cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x14);
      if (((cVar6 != '\0') && (*(longlong **)(lVar18 + 8) != (longlong *)0x0)) &&
         (cVar6 = (**(code **)(**(longlong **)(lVar18 + 8) + 0x20))(), cVar6 != '\0')) {
        local_70 = (undefined8 *)0x0;
        local_68 = 0;
        uVar8 = FWeakObjectPtr::Get(param_1 + 0x14);
        FUN_140bb7680(uVar8);
        puVar17 = local_70 + (longlong)(int)local_68 * 2;
        for (puVar11 = local_70; puVar11 != puVar17; puVar11 = puVar11 + 2) {
          if (((*(longlong **)(lVar18 + 8) == (longlong *)0x0) ||
              (cVar6 = (**(code **)(**(longlong **)(lVar18 + 8) + 0x20))(), cVar6 == '\0')) ||
             (cVar6 = (**(code **)(*(longlong *)*puVar11 + 0x20))(), cVar6 == '\0')) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((((*(longlong **)(lVar18 + 8) == (longlong *)0x0) ||
               (cVar6 = (**(code **)(**(longlong **)(lVar18 + 8) + 0x20))(), cVar6 == '\0')) &&
              (cVar6 = (**(code **)(*(longlong *)*puVar11 + 0x20))(), cVar6 == '\0')) ||
             ((bVar4 && (cVar6 = (**(code **)**(undefined8 **)(lVar18 + 8))(), cVar6 != '\0')))) {
            bVar5 = true;
            break;
          }
        }
        if ((int)local_68 != 0) {
          plVar14 = local_70 + 1;
          iVar7 = (int)local_68;
          do {
            plVar16 = (longlong *)*plVar14;
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar16 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar16)(plVar16);
                LOCK();
                piVar2 = (int *)((longlong)plVar16 + 0xc);
                iVar12 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*plVar16 + 8))(plVar16);
                }
              }
            }
            plVar14 = plVar14 + 2;
            iVar7 = iVar7 + -1;
            plVar16 = local_80;
          } while (iVar7 != 0);
        }
        if (local_70 != (undefined8 *)0x0) {
          FMemory::Free(local_70);
        }
        if (bVar5) {
LAB_140dd6abe:
          uVar19 = 0x40000000;
          if (plVar16 != (longlong *)0x0) {
            FMemory::Free(plVar16);
          }
          break;
        }
      }
      if (plVar16 != (longlong *)0x0) {
        FMemory::Free(plVar16);
      }
    }
    uVar8 = FUN_140da6050(&local_60,param_1,FUN_140dcd580);
    uVar10 = FUN_14164ab60();
    puVar11 = (undefined8 *)
              FUN_14158f860(uVar10,local_88,uVar8,L"FMatchmaker_ProcessDisconnectedPlayers",uVar19);
    *(undefined8 *)(param_1 + 0x368) = *puVar11;
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_60 + 0x28))(local_60,0);
      if (local_60 != (longlong *)0x0) {
        local_60 = (longlong *)FMemory::Realloc(local_60,0,0);
      }
      local_58 = 0;
    }
    if (local_60 != (longlong *)0x0) {
      FMemory::Free(local_60);
    }
  }
  return;
}



// FUNCTION 140dd6ba0 FUN_140dd6ba0 body=813 status=ok
// SIG undefined FUN_140dd6ba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dd6ba0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  cVar6 = FUN_140dc18f0();
  if (cVar6 != '\0') {
    cVar6 = FUN_140daa6a0(&DAT_14686f2c0,param_1);
    if ((cVar6 == '\0') || (DAT_14686f3b0 != *(int *)(param_1 + 0xf0))) {
LAB_140dd6c27:
      FUN_140da9da0(&DAT_14686f2c0,param_1);
      FText::operator=(&DAT_14686f378,param_1 + 0xb8);
      FText::operator=(&DAT_14686f390,param_1 + 0xd0);
      uVar8 = 0;
      lVar7 = DAT_14686f3a8;
      iVar9 = DAT_14686f3b0;
      if ((longlong *)(param_1 + 0xe8) != &DAT_14686f3a8) {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          plVar4 = *(longlong **)(lVar7 + 0xd8);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
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
          plVar4 = *(longlong **)(lVar7 + 0xc0);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
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
          FUN_140b9d680(lVar7);
          lVar7 = lVar7 + 0xe8;
        }
        iVar9 = *(int *)(param_1 + 0xf0);
        lVar7 = *(longlong *)(param_1 + 0xe8);
        DAT_14686f3b0 = iVar9;
        if ((iVar9 == 0) && (DAT_14686f3b4 == 0)) {
          DAT_14686f3b4 = 0;
        }
        else {
          TArray<FDCBlueprintSessionResult,FDefaultAllocator>::ResizeForCopy(&DAT_14686f3a8,iVar9);
          if (iVar9 != 0) {
            lVar7 = lVar7 + 0xd0;
            lVar11 = DAT_14686f3a8;
            do {
              FUN_140da85c0(lVar11,lVar7 + -0xd0);
              FText::FText(lVar11 + 0xb8,lVar7 + -0x18);
              FText::FText(lVar11 + 0xd0,lVar7);
              lVar11 = lVar11 + 0xe8;
              lVar7 = lVar7 + 0xe8;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
      }
      bVar5 = false;
      DAT_14629b2dc = DAT_14629b2dc + 1;
      lVar7 = (longlong)(DAT_14629b2d0 + -1);
      if (-1 < DAT_14629b2d0 + -1) {
        lVar11 = lVar7 << 4;
        bVar5 = false;
        do {
          if (((*(int *)(lVar11 + 8 + DAT_14629b2c8) == 0) ||
              (*(longlong **)(lVar11 + DAT_14629b2c8) == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(**(longlong **)(lVar11 + DAT_14629b2c8) + 0x40))(), cVar6 == '\0'
             )) {
            bVar5 = true;
          }
          lVar11 = lVar11 + -0x10;
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
      }
      iVar9 = DAT_14629b2d0;
      DAT_14629b2dc = DAT_14629b2dc + -1;
      if ((bVar5) && (DAT_14629b2dc < 1)) {
        uVar10 = uVar8;
        if (0 < DAT_14629b2d0) {
          do {
            if (((*(int *)(uVar8 + 8 + DAT_14629b2c8) == 0) ||
                (*(longlong **)(uVar8 + DAT_14629b2c8) == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(**(longlong **)(uVar8 + DAT_14629b2c8) + 0x10))(),
               cVar6 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_14629b2c8,uVar10,1,1);
            }
            else {
              uVar10 = (ulonglong)((int)uVar10 + 1);
              uVar8 = uVar8 + 0x10;
            }
          } while ((int)uVar10 < DAT_14629b2d0);
        }
        _DAT_14629b2d8 = DAT_14629b2d0 * 2;
        if (_DAT_14629b2d8 < 3) {
          _DAT_14629b2d8 = 2;
        }
        if ((_DAT_14629b2d8 < iVar9) && (DAT_14629b2d4 != DAT_14629b2d0)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_14629b2c8);
        }
      }
    }
    else {
      lVar7 = *(longlong *)(param_1 + 0xe8);
      lVar11 = DAT_14686f3a8;
      for (iVar9 = DAT_14686f3b0; iVar9 != 0; iVar9 = iVar9 + -1) {
        cVar6 = FUN_140daa6a0(lVar11,lVar7);
        if (cVar6 == '\0') goto LAB_140dd6c27;
        lVar11 = lVar11 + 0xe8;
        lVar7 = lVar7 + 0xe8;
      }
    }
  }
  return;
}



// FUNCTION 140dd6f40 FUN_140dd6f40 body=517 status=ok
// SIG undefined FUN_140dd6f40(void)

ulonglong FUN_140dd6f40(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  int local_res8 [4];
  int local_res18 [2];
  undefined8 local_res20;
  undefined1 local_38 [16];
  
  local_res18[0] = *(int *)(param_1 + 0x28);
  local_res20 = DAT_14686f258;
  local_res8[0] = -1;
  cVar1 = FUN_1404a9610(param_2,DAT_14686f258,local_res8);
  if ((cVar1 == '\0') || (local_res8[0] != local_res18[0])) {
    FUN_1404ab210(param_2,local_res20,local_res18,2);
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  local_res18[0] = *(int *)(param_1 + 0x2c);
  local_res20 = DAT_14686f260;
  local_res8[0] = -1;
  cVar1 = FUN_1404a9610(param_2,DAT_14686f260,local_res8);
  if ((cVar1 == '\0') || (local_res8[0] != local_res18[0])) {
    FUN_1404ab210(param_2,local_res20,local_res18,2);
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  local_res18[0] = *(int *)(param_1 + 0x30);
  local_res20 = DAT_14686f278;
  bVar4 = bVar4 | bVar5;
  local_res8[0] = -1;
  cVar1 = FUN_1404a9610(param_2,DAT_14686f278,local_res8);
  if ((cVar1 == '\0') || (local_res8[0] != local_res18[0])) {
    FUN_1404ab210(param_2,local_res20,local_res18,2);
    bVar4 = 1;
  }
  local_res18[0] = *(int *)(param_1 + 0x34);
  local_res20 = DAT_14686f250;
  local_res8[0] = -1;
  cVar1 = FUN_1404a9610(param_2,DAT_14686f250,local_res8);
  if ((cVar1 == '\0') || (local_res8[0] != local_res18[0])) {
    FUN_1404ab210(param_2,local_res20,local_res18,2);
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  bVar4 = bVar4 | bVar5;
  local_res20 = DAT_14686f290;
  local_res18[0] = *(int *)(param_1 + 0x38);
  local_res8[0] = -1;
  cVar1 = FUN_1404a9610(param_2,DAT_14686f290,local_res8);
  if ((cVar1 == '\0') || (local_res8[0] != local_res18[0])) {
    FUN_1404ab210(param_2,local_res20,local_res18,2);
    bVar4 = 1;
  }
  local_res18[0] = *(int *)(param_1 + 0x3c);
  puVar2 = (undefined8 *)FName::FName(local_38,L"SEARCHCROSSPLAY",1);
  local_res8[0] = -1;
  local_res20 = *puVar2;
  cVar1 = FUN_1404a9610(param_2,local_res20,local_res8);
  if ((cVar1 != '\0') && (local_res8[0] == local_res18[0])) {
    return (ulonglong)CONCAT31((int3)((uint)local_res18[0] >> 8),bVar4);
  }
  uVar3 = FUN_1404ab210(param_2,local_res20,local_res18,2);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),bVar4) | 1;
}



// FUNCTION 140dd7150 FUN_140dd7150 body=102 status=ok
// SIG undefined FUN_140dd7150(void)

bool FUN_140dd7150(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 local_res10 [3];
  undefined2 *local_18;
  int local_10;
  
  lVar2 = FUN_14140f7b0();
  local_res10[0] = *(undefined8 *)(lVar2 + 0x18);
  FName::ToString(local_res10,&local_18);
  puVar3 = &DAT_143f3eda8;
  puVar4 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar4 = local_18;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar3 = (undefined2 *)*param_2;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return iVar1 == 0;
}



// FUNCTION 140dd71c0 FUN_140dd71c0 body=424 status=ok
// SIG undefined FUN_140dd71c0(void)

undefined8 FUN_140dd71c0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  undefined2 *local_28;
  int local_20;
  
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_141594550(param_2,&local_48,&DAT_1445328fc,1);
  if ((int)local_40 == 2) {
    lVar5 = FUN_14140f930();
    local_res18 = *(undefined8 *)(lVar5 + 0x18);
    FName::ToString(&local_res18,&local_28);
    puVar7 = &DAT_143f3eda8;
    puVar8 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar8 = local_28;
    }
    if ((int)local_48[1] != 0) {
      puVar7 = (undefined2 *)*local_48;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (iVar4 == 0) {
      puVar6 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
      FUN_1404d0c50(&local_38,*puVar6);
      if ((local_38 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*local_38 + 0x1d0))(local_38,param_1 + 0x170,local_48 + 2),
         plVar9 = local_30, cVar3 != '\0')) {
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
        uVar10 = 1;
        goto LAB_140dd7321;
      }
      plVar9 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
  }
  uVar10 = 0;
LAB_140dd7321:
  plVar9 = local_48;
  for (iVar4 = (int)local_40; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return uVar10;
}



// FUNCTION 140dd7370 FUN_140dd7370 body=300 status=ok
// SIG undefined FUN_140dd7370(void)

undefined8 FUN_140dd7370(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 local_res18 [2];
  longlong *local_28;
  undefined8 local_20;
  undefined2 *local_18;
  int local_10;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_141594550(param_2,&local_28,&DAT_144532994,1);
  if ((int)local_20 == 2) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
    local_res18[0] = *(undefined8 *)(lVar3 + 0x18);
    FName::ToString(local_res18,&local_18);
    puVar6 = &DAT_143f3eda8;
    puVar5 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar5 = local_18;
    }
    if ((int)local_28[1] == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*local_28;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x188) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = *(undefined2 **)(param_1 + 0x180);
      }
      if ((int)local_28[3] != 0) {
        puVar6 = (undefined2 *)local_28[2];
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar5);
      if (iVar2 != 0) goto LAB_140dd7435;
      bVar1 = true;
    }
    else {
LAB_140dd7435:
      bVar1 = false;
    }
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (bVar1) {
      uVar8 = 1;
      goto LAB_140dd7452;
    }
  }
  uVar8 = 0;
LAB_140dd7452:
  plVar7 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return uVar8;
}



// FUNCTION 140dd74c0 FUN_140dd74c0 body=774 status=ok
// SIG undefined FUN_140dd74c0(void)

undefined8 FUN_140dd74c0(longlong param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  longlong local_res8;
  uint local_res10;
  void *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  
  *(undefined4 *)(param_2 + 1) = 0;
  local_res8 = param_1;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  local_78 = (longlong *)0x0;
  local_70 = 0;
  lVar5 = FUN_140db9720(param_1 + 0x60);
  uVar13 = 0;
  if ((lVar5 != 0) && (uVar13 = 0, &local_78 != (longlong **)(lVar5 + 0x80))) {
    TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
              (&local_78,*(longlong **)(lVar5 + 0x80),*(undefined4 *)(lVar5 + 0x88),0,0);
    uVar13 = (ulonglong)(int)(uint)local_70;
    local_res10 = (uint)local_70;
    if (0 < (int)(uint)local_70) {
      plVar11 = local_78 + uVar13 * 2;
      for (plVar7 = local_78; plVar7 != plVar11; plVar7 = plVar7 + 2) {
        pvVar14 = (void *)0x0;
        iVar10 = (int)plVar7[1];
        local_88 = (void *)0x0;
        _Src = (void *)*plVar7;
        local_80._4_4_ = (undefined4)((ulonglong)local_80 >> 0x20);
        if (iVar10 == 0) {
          local_60 = iVar10;
          local_5c = 0;
        }
        else {
          local_80._0_4_ = iVar10;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,iVar10,0);
          pvVar14 = local_88;
          _guard_xfg_dispatch_icall_nop(local_88,_Src,(longlong)iVar10 * 2);
          local_60 = (int)local_80;
          local_5c = local_80._4_4_;
        }
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        local_88 = (void *)0x0;
        local_80 = 0;
        local_68 = pvVar14;
        FUN_1417978e0(&local_58,&local_68);
        lVar5 = FSoftObjectPath::TryLoad(&local_58);
        if (lVar5 != 0) {
          lVar6 = FUN_142f47520();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            iVar10 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar10 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar10 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
            }
            *(longlong *)(*param_2 + (longlong)iVar10 * 8) = lVar5;
          }
        }
        if (local_50 != 0) {
          FMemory::Free();
        }
        param_1 = local_res8;
      }
      if (0 < (int)param_2[1]) {
        cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x14);
        if (cVar3 != '\0') {
          plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x14);
          lVar5 = (**(code **)(*plVar7 + 0x148))(plVar7);
          iVar10 = (int)param_2[1] + -1;
          local_res8 = lVar5;
          if (-1 < iVar10) {
            lVar6 = (longlong)iVar10 * 8;
            lVar16 = (longlong)(int)param_2[1] << 3;
            lVar15 = lVar6;
            do {
              lVar1 = *(longlong *)(lVar15 + *param_2);
              if ((lVar1 != 0) &&
                 (local_res8 = lVar1, FUN_142f44bf0(&local_res8,lVar5), local_res8 != lVar1)) {
                iVar4 = (int)param_2[1];
                iVar8 = (iVar4 - iVar10) + -1;
                if (iVar8 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar6 + *param_2),(void *)(lVar16 + *param_2),
                             (longlong)iVar8 << 3);
                  iVar4 = (int)param_2[1];
                }
                *(int *)(param_2 + 1) = iVar4 + -1;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_2);
              }
              lVar16 = lVar16 + -8;
              lVar6 = lVar6 + -8;
              lVar15 = lVar15 + -8;
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
            uVar13 = (ulonglong)local_res10;
          }
        }
        if (0 < (int)param_2[1]) {
          uVar9 = 1;
          goto LAB_140dd776f;
        }
      }
      uVar9 = 0;
      goto LAB_140dd776f;
    }
  }
  uVar9 = 1;
LAB_140dd776f:
  plVar11 = local_78;
  uVar12 = (uint)uVar13;
  plVar7 = local_78;
  while (uVar12 != 0) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
    uVar12 = (int)uVar13 - 1;
    uVar13 = (ulonglong)uVar12;
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return uVar9;
}



// FUNCTION 140dd77d0 FUN_140dd77d0 body=179 status=ok
// SIG undefined FUN_140dd77d0(void)

void FUN_140dd77d0(longlong *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 local_res10 [4];
  undefined2 *local_28;
  undefined8 local_20;
  
  local_28 = (undefined2 *)0x0;
  local_20 = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  puVar1 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_143f600e4,6);
  iVar2 = (int)local_20;
  puVar5 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar5 = puVar1;
  }
  iVar4 = 0;
  while( true ) {
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar2 + -1;
    }
    if (iVar3 <= iVar4) break;
    local_res10[0] = *puVar5;
    (**(code **)(*param_1 + 0x50))(param_1,local_res10,2);
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (puVar1 != (undefined2 *)0x0) {
    FMemory::Free(puVar1);
  }
  return;
}



// FUNCTION 140dd7890 FUN_140dd7890 body=113 status=ok
// SIG undefined FUN_140dd7890(void)

undefined8 * FUN_140dd7890(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)operator_new(0x60);
  *puVar2 = &PTR_FUN_1445541a0;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[9] = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1,puVar2 + 2);
    puVar2[9] = uVar3;
  }
  *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(param_1 + 0x50);
  puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
  return puVar2;
}



// FUNCTION 140dd7960 FUN_140dd7960 body=88 status=ok
// SIG undefined FUN_140dd7960(void)

void FUN_140dd7960(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (param_2 != '\0') {
    FMemory::operator_delete(param_1,0x60);
  }
  return;
}



// FUNCTION 140dd79c0 FUN_140dd79c0 body=277 status=ok
// SIG undefined FUN_140dd79c0(void)

void FUN_140dd79c0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  undefined8 local_res8;
  
  cVar4 = FWeakObjectPtr::IsValid(param_2 + 2);
  if ((cVar4 == '\0') && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x148))();
    local_res8 = UPlayer::GetPlayerController(*(undefined8 *)(param_1 + 8),uVar5);
    plVar2 = *(longlong **)(param_1 + 0x48);
    if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop();
    }
    uVar5 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_res8);
    FWeakObjectPtr::operator=(param_2 + 2,uVar5);
  }
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 < 2) {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    if (-1 < *(int *)(param_1 + 0x50)) {
      piVar3 = (int *)*param_2;
      piVar7 = piVar3;
      if (piVar3 != piVar3 + iVar1) {
        while (*piVar7 != *(int *)(param_1 + 0x50)) {
          piVar7 = piVar7 + 1;
          if (piVar7 == piVar3 + iVar1) {
            FUN_140db55b0(uVar5);
            return;
          }
        }
        iVar6 = (int)((longlong)piVar7 - (longlong)piVar3 >> 2);
        if (iVar6 != -1) {
          _guard_xfg_dispatch_icall_nop
                    (piVar3 + iVar6,piVar3 + iVar6 + 1,(longlong)((iVar1 - iVar6) + -1) << 2);
          *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + -1;
        }
      }
      FUN_140db55b0(uVar5);
      return;
    }
  }
  return;
}



// FUNCTION 140dd7ae0 FUN_140dd7ae0 body=92 status=ok
// SIG undefined FUN_140dd7ae0(void)

void FUN_140dd7ae0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  *(bool *)(param_2 + 0x20) = *(char *)(param_1 + 9) == '\0';
  if (*(char *)(param_1 + 8) != '\0') {
    puVar1 = (undefined4 *)(param_2 + 0x10);
    cVar2 = FWeakObjectPtr::IsValid(puVar1);
    if (cVar2 != '\0') {
      uVar3 = FWeakObjectPtr::Get(puVar1);
      thunk_FUN_142eb3990(uVar3);
      FWeakObjectPtr::operator=(&local_res8,0);
      *puVar1 = local_res8;
      *(undefined4 *)(param_2 + 0x14) = local_resc;
    }
  }
  return;
}



// FUNCTION 140dd7b40 FUN_140dd7b40 body=5 status=ok
// SIG undefined FUN_140dd7b40(void)

undefined1 FUN_140dd7b40(undefined8 param_1,longlong param_2)

{
  return *(undefined1 *)(param_2 + 0x20);
}



// FUNCTION 140dd7bb0 FUN_140dd7bb0 body=58 status=ok
// SIG undefined FUN_140dd7bb0(void)

void FUN_140dd7bb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144572778;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1445727c0;
  }
  return;
}



// FUNCTION 140dd7c00 FUN_140dd7c00 body=20 status=ok
// SIG undefined FUN_140dd7c00(void)

undefined1 FUN_140dd7c00(longlong param_1)

{
  UCanvas::UpdateAllCanvasSafeZoneData(param_1 + 8);
  return 1;
}



// FUNCTION 140dd7c20 FUN_140dd7c20 body=58 status=ok
// SIG undefined FUN_140dd7c20(void)

void FUN_140dd7c20(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144572808;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144572850;
  }
  return;
}



// FUNCTION 140dd7c70 FUN_140dd7c70 body=20 status=ok
// SIG undefined FUN_140dd7c70(void)

undefined1 FUN_140dd7c70(longlong param_1)

{
  FUN_140de2cd0(param_1 + 8);
  return 1;
}



// FUNCTION 140dd7c90 FUN_140dd7c90 body=326 status=ok
// SIG undefined FUN_140dd7c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_140dd7c90(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_d8 [32];
  longlong local_b8 [6];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68 [6];
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = 0xffffffff;
  local_b8[0] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_80 = 0;
  local_70 = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_30 = 0;
  local_20 = 0;
  local_b8[1] = 0;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_84 = 0;
  local_78 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = 0;
  *param_2 = *(undefined4 *)*param_1;
  TMap<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,0>_>
  ::
  TMap<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,0>_>
            (param_2 + 2,local_b8);
  TMap<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,0>_>
  ::
  TMap<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,0>_>
            (param_2 + 0x16,local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_68,0);
  if (local_68[4] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_70 = local_70 & 0xffffffff00000000;
  if (local_78 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_b8,0);
  if (local_b8[4] != 0) {
    FMemory::Free();
  }
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140dd7de0 operator<unsigned_int,TArray<unsigned_int,FDefaultAllocator>_>_TTuple<unsigned_int,TArray<unsigned_int,FDefaultAllocator>_> body=116 status=ok
// SIG undefined operator<unsigned_int,TArray<unsigned_int,FDefaultAllocator>_>_TTuple<unsigned_int,TArray<unsigned_int,FDefaultAllocator>_>(void)

undefined4 *
TPairInitializer<unsigned_int_const_&,TArray<unsigned_int,FDefaultAllocator>_const_&>::
operator<unsigned_int,TArray<unsigned_int,FDefaultAllocator>_>_TTuple<unsigned_int,TArray<unsigned_int,FDefaultAllocator>_>
          (undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  param_2[4] = iVar1;
  if (iVar1 == 0) {
    param_2[5] = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_2 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_2 + 2),_Src,(longlong)iVar1 << 2);
  }
  return param_2;
}



// FUNCTION 140dd7e60 FUN_140dd7e60 body=677 status=ok
// SIG undefined FUN_140dd7e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dd7e60(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  bool bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  short *psVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8 [2];
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0 [4];
  short *local_90;
  int local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  if (param_2 != (longlong *)0x0) {
    local_30 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
    local_c8[0] = 0;
    FText::FText(local_68);
    FText::FText(local_80);
    local_d8 = *param_1;
    (**(code **)(*param_2 + 0x2a8))(param_2,local_68,local_80,local_c8);
    lVar6 = UListViewBase::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    bVar4 = !bVar4;
    if (bVar4) {
      local_b0[0] = 0;
      local_b0[1] = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b0,0);
      FGenericPlatformString::Memcpy(local_b0[0],&DAT_144573578,4);
      plVar7 = local_b0;
    }
    else {
      uVar5 = (**(code **)(*param_2 + 0x278))(param_2);
      FString::PrintfImpl(local_b0 + 2,&DAT_144550a50,uVar5);
      plVar7 = local_b0 + 2;
    }
    psVar3 = (short *)*plVar7;
    *plVar7 = 0;
    iVar2 = (int)plVar7[1];
    plVar7[1] = 0;
    local_90 = psVar3;
    local_88 = iVar2;
    if ((bVar4) && (local_b0[0] != 0)) {
      FMemory::Free();
    }
    if ((!bVar4) && (local_b0[2] != 0)) {
      FMemory::Free();
    }
    local_48 = *(undefined8 *)(param_1[1] + 8);
    local_50 = &local_40;
    local_38 = 0x4000000000000;
    local_40 = 0;
    FUN_142ab4f80(&local_50,local_c8[0]);
    local_c0 = 0;
    local_b8 = 0;
    psVar9 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      psVar9 = psVar3;
    }
    if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (psVar9[lVar6] != 0);
      uVar8 = (int)lVar6 + 1;
      local_b8 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c0,0);
      }
      FGenericPlatformString::Memcpy(local_c0,psVar9,(longlong)(int)uVar8 * 2);
    }
    UE4Function_Private::
    TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
    ::Call(param_1[1],&local_c0,&local_50);
    if (local_c0 != 0) {
      FMemory::Free();
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_78 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_60 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    if (local_90 != (short *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140dd8110 FUN_140dd8110 body=216 status=ok
// SIG undefined FUN_140dd8110(void)

void FUN_140dd8110(longlong *param_1,undefined8 param_2)

{
  longlong *local_58;
  undefined8 local_50;
  undefined **local_48;
  char *local_40;
  undefined1 local_38;
  undefined4 local_30;
  undefined **local_28;
  char *local_20;
  undefined1 local_18;
  undefined4 local_10;
  
  (**(code **)(*param_1 + 0x28))();
  (**(code **)(*param_1 + 0x10))(param_1,&local_58,"invitations_response",param_2);
  if (local_58 != (longlong *)0x0) {
    local_40 = "success";
    local_38 = 1;
    local_48 = &PTR_FUN_1445760c0;
    local_30 = 0;
    (**(code **)(*local_58 + 0x18))(local_58,local_50,&local_48);
    local_48 = &PTR_FUN_143f47bd8;
    local_20 = "invitations";
    local_28 = &PTR_FUN_1445761c0;
    local_18 = 1;
    local_10 = 0x18;
    (**(code **)(*local_58 + 0x18))(local_58,local_50,&local_28);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_58);
                    /* WARNING: Could not recover jumptable at 0x000140dd81e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return;
}



// FUNCTION 140dd81f0 FUN_140dd81f0 body=288 status=ok
// SIG undefined FUN_140dd81f0(void)

void FUN_140dd81f0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar3 = (**(code **)(*param_1 + 0x220))();
  iVar1 = (int)param_2[1];
  uVar5 = 0;
  iVar2 = (int)uVar3;
  if (iVar1 < iVar2) {
    *(int *)(param_2 + 1) = iVar2;
    iVar6 = iVar2 - iVar1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x58 + *param_2);
    if (iVar6 != 0) {
      lVar7 = (longlong)puVar4 + 0x1c;
      do {
        *puVar4 = 0;
        puVar4 = puVar4 + 0xb;
        *(undefined8 *)(lVar7 + -0x14) = 0;
        *(undefined8 *)(lVar7 + -0xc) = 0;
        *(undefined8 *)(lVar7 + -4) = 0;
        *(undefined8 *)(lVar7 + 4) = 0;
        *(undefined8 *)(lVar7 + 0xc) = 0;
        *(undefined8 *)(lVar7 + 0x14) = 0;
        *(undefined8 *)(lVar7 + 0x1c) = 0;
        *(undefined8 *)(lVar7 + 0x24) = 0;
        *(undefined8 *)(lVar7 + 0x2c) = 0;
        lVar7 = lVar7 + 0x58;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (iVar2 < iVar1) {
    FUN_140e04de0(param_2,uVar3 & 0xffffffff,iVar1 - iVar2,1);
  }
  if (uVar3 != 0) {
    do {
      (**(code **)(*param_1 + 0x228))(param_1,uVar5);
      lVar7 = (longlong)(int)uVar5 * 0x58 + *param_2;
      (**(code **)(*param_1 + 0x38))(param_1);
      FUN_140de5760(param_1,lVar7);
      (**(code **)(*param_1 + 0x48))(param_1,lVar7);
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dd8309. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x230))(param_1);
  return;
}



// FUNCTION 140dd8310 FUN_140dd8310 body=272 status=ok
// SIG undefined FUN_140dd8310(void)

void FUN_140dd8310(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar3 = (**(code **)(*param_1 + 0x220))();
  iVar1 = (int)param_2[1];
  uVar5 = 0;
  iVar2 = (int)uVar3;
  if (iVar1 < iVar2) {
    *(int *)(param_2 + 1) = iVar2;
    iVar6 = iVar2 - iVar1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x40 + *param_2);
    if (iVar6 != 0) {
      lVar7 = (longlong)puVar4 + 0x1c;
      do {
        *puVar4 = 0;
        puVar4 = puVar4 + 8;
        *(undefined8 *)(lVar7 + -0x14) = 0;
        *(undefined8 *)(lVar7 + -0xc) = 0;
        *(undefined8 *)(lVar7 + -4) = 0;
        *(undefined8 *)(lVar7 + 4) = 0;
        *(undefined8 *)(lVar7 + 0xc) = 0;
        *(undefined8 *)(lVar7 + 0x14) = 0;
        *(undefined8 *)(lVar7 + 0x1c) = 0;
        lVar7 = lVar7 + 0x40;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (iVar2 < iVar1) {
    TArray<Chaos::FMaterialData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (param_2,uVar3 & 0xffffffff,iVar1 - iVar2,1);
  }
  if (uVar3 != 0) {
    do {
      (**(code **)(*param_1 + 0x228))(param_1,uVar5);
      lVar7 = (longlong)(int)uVar5 * 0x40 + *param_2;
      (**(code **)(*param_1 + 0x38))(param_1);
      FUN_140de5980(param_1,lVar7);
      (**(code **)(*param_1 + 0x48))(param_1,lVar7);
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dd8419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x230))(param_1);
  return;
}



// FUNCTION 140dd8420 FUN_140dd8420 body=78 status=ok
// SIG undefined FUN_140dd8420(void)

void FUN_140dd8420(longlong *param_1,longlong param_2,longlong param_3)

{
  if (param_2 != 0) {
    param_2 = param_3 * 0x58 + param_2;
    (**(code **)(*param_1 + 0x28))();
    FUN_140de5760(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000140dd845e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140dd8467. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))();
  return;
}



// FUNCTION 140dd8470 FUN_140dd8470 body=85 status=ok
// SIG undefined FUN_140dd8470(void)

void FUN_140dd8470(longlong *param_1,longlong param_2,longlong param_3)

{
  if (param_2 != 0) {
    param_2 = param_3 * 0x40 + param_2;
    (**(code **)(*param_1 + 0x28))();
    FUN_140de5980(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000140dd84b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140dd84be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))();
  return;
}



// FUNCTION 140dd84d0 FUN_140dd84d0 body=63 status=ok
// SIG undefined FUN_140dd84d0(void)

void FUN_140dd84d0(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 * 0x58 + *param_2;
  (**(code **)(*param_1 + 0x38))();
  FUN_140de5760(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000140dd850b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,lVar1);
  return;
}



// FUNCTION 140dd8510 FUN_140dd8510 body=63 status=ok
// SIG undefined FUN_140dd8510(void)

void FUN_140dd8510(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 * 0x40 + *param_2;
  (**(code **)(*param_1 + 0x38))();
  FUN_140de5980(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000140dd854b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,lVar1);
  return;
}



// FUNCTION 140dd8580 FUN_140dd8580 body=283 status=ok
// SIG undefined FUN_140dd8580(void)

void FUN_140dd8580(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  plVar5 = (longlong *)*param_1;
  if (param_3 != 0) {
    plVar6 = (longlong *)(param_2 + 8);
    do {
      *plVar5 = plVar6[-1];
      plVar5[1] = 0;
      iVar3 = (int)plVar6[1];
      lVar4 = *plVar6;
      *(int *)(plVar5 + 2) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)((longlong)plVar5 + 0x14) = 0;
      }
      else {
        TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(plVar5 + 1,iVar3,0);
        lVar4 = lVar4 + 0x20;
        puVar2 = (undefined8 *)plVar5[1];
        do {
          *puVar2 = *(undefined8 *)(lVar4 + -0x20);
          FText::FText(puVar2 + 1,lVar4 + -0x18);
          FText::FText(puVar2 + 4,lVar4);
          *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(lVar4 + 0x18);
          puVar1 = (undefined1 *)(lVar4 + 0x1c);
          lVar4 = lVar4 + 0x40;
          *(undefined1 *)((longlong)puVar2 + 0x3c) = *puVar1;
          iVar3 = iVar3 + -1;
          puVar2 = puVar2 + 8;
        } while (iVar3 != 0);
      }
      plVar5 = plVar5 + 3;
      plVar6 = plVar6 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140dd86a0 FUN_140dd86a0 body=236 status=ok
// SIG undefined FUN_140dd86a0(void)

void FUN_140dd86a0(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  puVar2 = (undefined4 *)*param_1;
  if (param_3 != 0) {
    param_2 = param_2 + 0x10;
    do {
      *puVar2 = *(undefined4 *)(param_2 + -0x10);
      *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(param_2 + -8);
      FString::FString(puVar2 + 4,param_2);
      FString::FString(puVar2 + 8,param_2 + 0x10);
      *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(param_2 + 0x20);
      *(undefined1 *)(puVar2 + 0xe) = *(undefined1 *)(param_2 + 0x28);
      *(undefined1 *)((longlong)puVar2 + 0x39) = *(undefined1 *)(param_2 + 0x29);
      *(undefined1 *)((longlong)puVar2 + 0x3a) = *(undefined1 *)(param_2 + 0x2a);
      puVar2[0xf] = *(undefined4 *)(param_2 + 0x2c);
      puVar2[0x10] = *(undefined4 *)(param_2 + 0x30);
      puVar2[0x11] = *(undefined4 *)(param_2 + 0x34);
      puVar2[0x12] = *(undefined4 *)(param_2 + 0x38);
      FString::FString(puVar2 + 0x14,param_2 + 0x40);
      puVar1 = (undefined1 *)(param_2 + 0x50);
      param_2 = param_2 + 0x68;
      *(undefined1 *)(puVar2 + 0x18) = *puVar1;
      puVar2 = puVar2 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140dd8790 FUN_140dd8790 body=109 status=ok
// SIG undefined FUN_140dd8790(void)

undefined8 FUN_140dd8790(longlong *param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_14310e600();
  uVar1 = FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  (**(code **)(*param_1 + 0x340))(param_1,uVar1);
  return uVar1;
}



// FUNCTION 140dd8800 FUN_140dd8800 body=418 status=ok
// SIG undefined FUN_140dd8800(void)

int * FUN_140dd8800(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_28 [2];
  uint *local_20;
  
  FUN_140de4040(param_1,local_28);
  *param_2 = local_28[0];
  FUN_140ddbd50(local_20,param_3);
  local_20[0x2a] = 0xffffffff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)((longlong)iVar3 * 0xb0 + *param_1) == *local_20) goto LAB_140dd88c1;
          iVar3 = *(int *)((longlong)iVar3 * 0xb0 + 0xa8 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_140dd88c1:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0xb0 + *param_1);
      FConfigSection::~FConfigSection((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,local_20,0xa8);
      TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_140dd8977;
    }
  }
  cVar1 = TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_20;
    local_20[0x2b] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_20[0x2a] =
         *(uint *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_140dd8977:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 140dd89b0 FUN_140dd89b0 body=408 status=ok
// SIG undefined FUN_140dd89b0(void)

int * FUN_140dd89b0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_28 [2];
  uint *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *param_2 = local_28[0];
  FMovieSceneSequenceHierarchyNode::FMovieSceneSequenceHierarchyNode(local_20,param_3);
  local_20[6] = 0xffffffff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)((longlong)iVar3 * 0x20 + *param_1) == *local_20) goto LAB_140dd8a6b;
          iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_140dd8a6b:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_20,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_140dd8b1d;
    }
  }
  cVar1 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_20;
    local_20[7] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_20[6] = *(uint *)((longlong)plVar2 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_140dd8b1d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 140dd8b50 FUN_140dd8b50 body=469 status=ok
// SIG undefined FUN_140dd8b50(void)

int * FUN_140dd8b50(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int local_res8;
  uint uStackX_c;
  int local_38 [2];
  int *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar9 = false;
  uStackX_c = uStackX_c & 0xfffffff8;
  *(undefined8 *)local_30 = *(undefined8 *)*param_3;
  local_res8 = 0;
  *(ulonglong *)(local_30 + 2) = (ulonglong)uStackX_c << 0x20;
  local_30[4] = -1;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  *param_2 = local_38[0];
  if (iVar7 != 1) {
    TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(param_1,&local_res8,local_30);
    iVar1 = local_res8;
    bVar9 = local_res8 != -1;
    if (bVar9) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)local_res8 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar1;
      goto LAB_140dd8cfd;
    }
  }
  cVar2 = FUN_140de5d50(param_1,iVar7,0);
  if (cVar2 == '\0') {
    uVar5 = local_30[1];
    uVar6 = *local_30 - uVar5 ^ uVar5 >> 0xd;
    uVar4 = (-0x61c88647 - uVar6) - uVar5 ^ uVar6 << 8;
    uVar8 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xd;
    uVar6 = (uVar6 - uVar4) - uVar8 ^ uVar8 >> 0xc;
    uVar5 = (uVar4 - uVar6) - uVar8 ^ uVar6 << 0x10;
    uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 5;
    uVar4 = (uVar6 - uVar5) - uVar8 ^ uVar8 >> 3;
    uVar5 = (uVar5 - uVar4) - uVar8 ^ uVar4 << 10;
    uVar5 = ((uVar8 - uVar5) - uVar4 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    local_30[5] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[4] = *(int *)((longlong)plVar3 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_140dd8cfd:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 140dd8d30 FUN_140dd8d30 body=525 status=ok
// SIG undefined FUN_140dd8d30(void)

int * FUN_140dd8d30(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int local_res8 [2];
  int local_58 [2];
  int *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  TSparseArray<TSetElement<TTuple<FGuid,FSHAHash>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_58);
  bVar8 = false;
  local_48 = 0x3f800000;
  *(undefined8 *)local_50 = *(undefined8 *)*param_3;
  uStack_44 = 0x3f800000;
  uStack_3c = 1;
  local_38 = 4;
  uStack_34 = 1;
  *param_2 = local_58[0];
  local_50[2] = 0x3f800000;
  local_50[3] = 0x3f800000;
  local_50[4] = 0;
  local_50[5] = 1;
  local_50[6] = 4;
  local_50[7] = 1;
  local_50[8] = 0;
  local_50[9] = -1;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    FUN_140deaa70(param_1,local_res8,local_50);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0x2c + *param_1),local_50,0x24);
      TSparseArray<TSetElement<TTuple<FGuid,FSHAHash>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_58[0],1);
      *param_2 = local_res8[0];
      goto LAB_140dd8f14;
    }
  }
  cVar1 = FUN_140de5e00(param_1,iVar6,0);
  if (cVar1 == '\0') {
    uVar4 = local_50[1];
    uVar5 = *local_50 - uVar4 ^ uVar4 >> 0xd;
    uVar3 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
    uVar7 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xd;
    uVar5 = (uVar5 - uVar3) - uVar7 ^ uVar7 >> 0xc;
    uVar4 = (uVar3 - uVar5) - uVar7 ^ uVar5 << 0x10;
    uVar7 = (uVar7 - uVar4) - uVar5 ^ uVar4 >> 5;
    uVar3 = (uVar5 - uVar4) - uVar7 ^ uVar7 >> 3;
    uVar4 = (uVar4 - uVar3) - uVar7 ^ uVar3 << 10;
    uVar4 = ((uVar7 - uVar4) - uVar3 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    local_50[10] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_50[9] = *(int *)((longlong)plVar2 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_140dd8f14:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 140dd8f40 FUN_140dd8f40 body=1030 status=ok
// SIG undefined FUN_140dd8f40(void)

int * FUN_140dd8f40(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  int *_Src;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  bool bVar21;
  
  iVar11 = 1;
  iVar20 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar14 * 0x14);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x14) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar14;
  lVar6 = (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  bVar21 = false;
  puVar19 = (uint *)((longlong)plVar8 + lVar6);
  *puVar19 = *puVar19 | 1 << ((byte)iVar14 & 0x1f);
  lVar1 = (longlong)iVar14 * 0x14;
  _Src = (int *)(*param_1 + lVar1);
  uVar2 = *(undefined8 *)*param_3;
  *(undefined8 *)_Src = uVar2;
  *(undefined1 *)(_Src + 2) = 0;
  _Src[3] = -1;
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar18 != 1) {
    iVar13 = iVar20;
    if (uVar18 != 0) {
      uVar5 = _Src[1];
      iVar9 = (int)uVar2;
      uVar17 = iVar9 - uVar5 ^ uVar5 >> 0xd;
      uVar16 = (-0x61c88647 - uVar17) - uVar5 ^ uVar17 << 8;
      uVar10 = (uVar5 - uVar16) - uVar17 ^ uVar16 >> 0xd;
      uVar17 = (uVar17 - uVar16) - uVar10 ^ uVar10 >> 0xc;
      uVar16 = (uVar16 - uVar17) - uVar10 ^ uVar17 << 0x10;
      uVar10 = (uVar10 - uVar16) - uVar17 ^ uVar16 >> 5;
      uVar17 = (uVar17 - uVar16) - uVar10 ^ uVar10 >> 3;
      uVar16 = (uVar16 - uVar17) - uVar10 ^ uVar17 << 10;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar8 +
                       (((longlong)(int)((uVar10 - uVar16) - uVar17) ^ (ulonglong)(uVar16 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar12 != -1) {
        lVar3 = *param_1;
        do {
          lVar7 = (longlong)iVar12;
          if ((*(int *)(lVar3 + lVar7 * 0x14) == iVar9) &&
             (*(uint *)(lVar3 + 4 + lVar7 * 0x14) == uVar5)) {
            bVar21 = true;
          }
          else {
            bVar21 = false;
          }
          iVar13 = iVar12;
        } while ((!bVar21) &&
                (iVar12 = *(int *)(lVar3 + 0xc + lVar7 * 0x14), iVar13 = iVar20, iVar12 != -1));
      }
    }
    bVar21 = iVar13 != -1;
    if (bVar21) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar13 * 0x14),_Src,0xc);
      bVar4 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x14) = iVar14;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar20 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar20;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar13;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar19 = (uint *)((longlong)plVar8 + lVar6);
      *puVar19 = *puVar19 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_140dd931b;
    }
  }
  if (3 < uVar18) {
    uVar5 = (uVar18 >> 1) + 8;
    iVar20 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    iVar11 = 0x20;
    if (uVar5 != 0) {
      iVar11 = 0x1f - iVar20;
    }
    uVar5 = (uVar18 >> 1) + 7;
    iVar20 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar15 = '\0';
    }
    else {
      cVar15 = '\x1f' - (char)iVar20;
    }
    iVar11 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar15 & 0x1f);
  }
  if (((int)uVar18 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar18 = _Src[1];
    uVar5 = *_Src - uVar18 ^ uVar18 >> 0xd;
    uVar10 = (-0x61c88647 - uVar5) - uVar18 ^ uVar5 << 8;
    uVar16 = (uVar18 - uVar10) - uVar5 ^ uVar10 >> 0xd;
    uVar18 = (uVar5 - uVar10) - uVar16 ^ uVar16 >> 0xc;
    uVar5 = (uVar10 - uVar18) - uVar16 ^ uVar18 << 0x10;
    uVar10 = (uVar16 - uVar5) - uVar18 ^ uVar5 >> 5;
    uVar18 = (uVar18 - uVar5) - uVar10 ^ uVar10 >> 3;
    uVar5 = (uVar5 - uVar18) - uVar10 ^ uVar18 << 10;
    uVar18 = ((uVar10 - uVar5) - uVar18 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    _Src[4] = uVar18;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    _Src[3] = *(int *)((longlong)plVar8 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140dd931b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar21;
  }
  return param_2;
}



// FUNCTION 140dd9350 FUN_140dd9350 body=418 status=ok
// SIG undefined FUN_140dd9350(void)

int * FUN_140dd9350(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_28 [2];
  uint *local_20;
  
  FUN_140de4040(param_1,local_28);
  *param_2 = local_28[0];
  FUN_140dd7c90(param_3,local_20);
  local_20[0x2a] = 0xffffffff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)((longlong)iVar3 * 0xb0 + *param_1) == *local_20) goto LAB_140dd9411;
          iVar3 = *(int *)((longlong)iVar3 * 0xb0 + 0xa8 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_140dd9411:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0xb0 + *param_1);
      FConfigSection::~FConfigSection((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,local_20,0xa8);
      TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_140dd94c7;
    }
  }
  cVar1 = TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_20;
    local_20[0x2b] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_20[0x2a] =
         *(uint *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_140dd94c7:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 140dd9500 FUN_140dd9500 body=408 status=ok
// SIG undefined FUN_140dd9500(void)

int * FUN_140dd9500(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_28 [2];
  uint *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *param_2 = local_28[0];
  TPairInitializer<unsigned_int_const_&,TArray<unsigned_int,FDefaultAllocator>_const_&>::
  operator<unsigned_int,TArray<unsigned_int,FDefaultAllocator>_>_TTuple<unsigned_int,TArray<unsigned_int,FDefaultAllocator>_>
            (param_3,local_20);
  local_20[6] = 0xffffffff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)((longlong)iVar3 * 0x20 + *param_1) == *local_20) goto LAB_140dd95bb;
          iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_140dd95bb:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_20,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_140dd966d;
    }
  }
  cVar1 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_20;
    local_20[7] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_20[6] = *(uint *)((longlong)plVar2 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_140dd966d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 140dd96a0 FUN_140dd96a0 body=623 status=ok
// SIG undefined FUN_140dd96a0(void)

int * FUN_140dd96a0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined8 *_Src;
  int iVar9;
  uint uVar10;
  char cVar11;
  longlong *plVar12;
  bool bVar13;
  int local_res8 [2];
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar7 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar12 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar2 = *puVar2 | 1 << ((byte)iVar7 & 0x1f);
  puVar4 = (undefined8 *)*param_3;
  puVar5 = (undefined8 *)param_3[1];
  bVar13 = false;
  _Src = (undefined8 *)((longlong)iVar7 * 0x20 + *param_1);
  *_Src = 0;
  *_Src = *puVar4;
  *puVar4 = 0;
  *(undefined4 *)(_Src + 1) = *(undefined4 *)(puVar4 + 1);
  *(undefined4 *)((longlong)_Src + 0xc) = *(undefined4 *)((longlong)puVar4 + 0xc);
  puVar4[1] = 0;
  _Src[2] = *puVar5;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar13 = local_res8[0] != -1;
    if (bVar13) {
      plVar12 = (longlong *)((longlong)local_res8[0] * 0x20 + *param_1);
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar12,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140dd98e6;
    }
  }
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    uVar6 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar6 != 0) {
      iVar7 = 0x1f - iVar9;
    }
    uVar6 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar9 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar10 = FUN_140438070(puVar8);
    uVar10 = (int)param_1[9] - 1U & uVar10;
    *(uint *)((longlong)_Src + 0x1c) = uVar10;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Rehash(param_1);
  }
LAB_140dd98e6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 140dd9910 FUN_140dd9910 body=675 status=ok
// SIG undefined FUN_140dd9910(void)

int * FUN_140dd9910(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  bool bVar11;
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar1 = *(int *)((longlong)iVar6 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar10 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar10 = *puVar10 | 1 << ((byte)iVar6 & 0x1f);
  lVar2 = param_3[1];
  puVar10 = (uint *)((longlong)iVar6 * 0x38 + *param_1);
  *puVar10 = *(uint *)*param_3;
  *(undefined ***)(puVar10 + 2) = &PTR_FUN_143f73d18;
  *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(lVar2 + 8);
  lVar2 = *(longlong *)(lVar2 + 0x10);
  *(longlong *)(puVar10 + 6) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  bVar11 = false;
  *(undefined ***)(puVar10 + 2) = &PTR_FUN_143f740c8;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0xffffffff;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar9 != 1) {
    if (uVar9 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar10) * 4);
      if (iVar6 != -1) {
        do {
          if (*(uint *)((longlong)iVar6 * 0x38 + *param_1) == *puVar10) goto LAB_140dd9a8b;
          iVar6 = *(int *)((longlong)iVar6 * 0x38 + 0x30 + *param_1);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_140dd9a8b:
    bVar11 = iVar6 != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)iVar6 * 0x38 + *param_1);
      FUN_1404bf980((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar10,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar6;
      goto LAB_140dd9b8a;
    }
  }
  if (3 < uVar9) {
    uVar4 = (uVar9 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar7;
    }
    uVar4 = (uVar9 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar9 = (int)param_1[9] - 1U & *puVar10;
    puVar10[0xd] = uVar9;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar10[0xc] = *(uint *)((longlong)plVar5 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<int,FIndividualOcclusionHistory>,TDefaultMapHashableKeyFuncs<int,FIndividualOcclusionHistory,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140dd9b8a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 140dd9bc0 Emplace<TPairInitializer<UFlareSimulatedSector_*_const_&,float_const_&>_> body=764 status=ok
// SIG undefined Emplace<TPairInitializer<UFlareSimulatedSector_*_const_&,float_const_&>_>(void)

uint * TSet<TTuple<UFlareSimulatedSector_*,float>,TDefaultMapHashableKeyFuncs<UFlareSimulatedSector_*,float,0>,FDefaultSetAllocator>
       ::Emplace<TPairInitializer<UFlareSimulatedSector_*_const_&,float_const_&>_>
                 (longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  bool bVar18;
  uint local_res8 [2];
  ulonglong *local_res10;
  
  iVar12 = 1;
  uVar17 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)(int)uVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = uVar11;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar6 = (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar16 = (uint *)((longlong)plVar8 + lVar6);
  *puVar16 = *puVar16 | 1 << ((byte)uVar11 & 0x1f);
  puVar1 = (undefined4 *)param_3[1];
  lVar7 = (longlong)(int)uVar11;
  local_res10 = (ulonglong *)(*param_1 + lVar7 * 0x18);
  uVar2 = *(ulonglong *)*param_3;
  *local_res10 = uVar2;
  *(undefined4 *)(local_res10 + 1) = *puVar1;
  *(undefined4 *)(local_res10 + 2) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar2);
    uVar5 = local_res8[0];
    lVar10 = (longlong)(int)local_res8[0];
    bVar18 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar18);
    if (bVar18) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar10 * 0x18),local_res10,0x10);
      bVar3 = (byte)uVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = uVar11;
      }
      lVar10 = *param_1;
      *(undefined4 *)(lVar10 + lVar7 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar17 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar10 + 4 + lVar7 * 0x18) = uVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar11;
      plVar8 = (longlong *)param_1[4];
      *param_2 = uVar5;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar8 + lVar6);
      *puVar16 = *puVar16 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_140dd9e8d;
    }
  }
  if (3 < uVar15) {
    uVar5 = (uVar15 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar13 = '\0';
    if (uVar5 != 0) {
      iVar9 = 0x1f - iVar12;
    }
    uVar5 = (uVar15 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar13 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = (int)(*local_res10 >> 4);
    uVar5 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
    uVar14 = -(iVar12 + uVar5) ^ uVar5 >> 0xd;
    uVar15 = (iVar12 - uVar5) - uVar14 ^ uVar14 >> 0xc;
    uVar5 = (uVar5 - uVar15) - uVar14 ^ uVar15 << 0x10;
    uVar14 = (uVar14 - uVar5) - uVar15 ^ uVar5 >> 5;
    uVar15 = (uVar15 - uVar5) - uVar14 ^ uVar14 >> 3;
    uVar5 = (uVar5 - uVar15) - uVar14 ^ uVar15 << 10;
    uVar15 = ((uVar14 - uVar5) - uVar15 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_res10 + 0x14) = uVar15;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(local_res10 + 2) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(uint *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         uVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140dd9e8d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140dd9ec0 FUN_140dd9ec0 body=657 status=ok
// SIG undefined FUN_140dd9ec0(void)

int * FUN_140dd9ec0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong *_Src;
  void *_Dst;
  bool bVar14;
  int local_res10 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar5 = *(int *)((longlong)iVar12 * 0x20 + 4 + *param_1);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  bVar14 = false;
  *puVar3 = *puVar3 | 1 << ((byte)iVar12 & 0x1f);
  puVar6 = (ulonglong *)param_3[1];
  _Src = (ulonglong *)((longlong)iVar12 * 0x20 + *param_1);
  *_Src = *(ulonglong *)*param_3;
  _Src[1] = *puVar6;
  _Src[2] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,*_Src);
    bVar14 = local_res10[0] != -1;
    if (bVar14) {
      _Dst = (void *)((longlong)local_res10[0] * 0x20 + *param_1);
      plVar9 = *(longlong **)((longlong)_Dst + 0x10);
      iVar12 = local_res10[0];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar12 = local_res10[0];
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
            iVar12 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar12;
      goto LAB_140dda130;
    }
  }
  cVar8 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar12,0);
  if (cVar8 == '\0') {
    iVar12 = (int)(*_Src >> 4);
    uVar11 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
    uVar13 = -(uVar11 + iVar12) ^ uVar11 >> 0xd;
    uVar10 = (iVar12 - uVar11) - uVar13 ^ uVar13 >> 0xc;
    uVar11 = (uVar11 - uVar10) - uVar13 ^ uVar10 << 0x10;
    uVar13 = (uVar13 - uVar11) - uVar10 ^ uVar11 >> 5;
    uVar10 = (uVar10 - uVar11) - uVar13 ^ uVar13 >> 3;
    uVar11 = (uVar11 - uVar10) - uVar13 ^ uVar10 << 10;
    uVar10 = ((uVar13 - uVar11) - uVar10 ^ uVar11 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar10;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_140dda130:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 140dda160 FUN_140dda160 body=672 status=ok
// SIG undefined FUN_140dda160(void)

uint * FUN_140dda160(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  bool bVar14;
  uint local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar12 = (ulonglong)*(uint *)(param_1 + 1);
    iVar11 = *(uint *)(param_1 + 1) + 1;
    *(int *)(param_1 + 1) = iVar11;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar12 = (ulonglong)(int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar11 = *(int *)(*param_1 + 4 + uVar12 * 0x18);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  uVar8 = (uint)uVar12;
  *param_2 = uVar8;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 +
                   (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar12 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)(int)uVar8 * 0x18);
  puVar2 = (ulonglong *)param_3[1];
  *_Src = *(ulonglong *)*param_3;
  _Src[1] = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    uVar8 = local_res8[0];
    lVar10 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      lVar3 = *param_1;
      lVar4 = *(longlong *)(lVar3 + 8 + lVar10 * 0x18);
      if (lVar4 != 0) {
        TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(lVar4 + 0x80);
        TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(lVar4 + 0x68);
        TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(lVar4 + 0x50);
        if (*(longlong *)(lVar4 + 0x18) != 0) {
          FActorRepList::Release();
        }
        FMemory::operator_delete(lVar4,0x98);
        uVar12 = (ulonglong)*param_2;
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar3 + lVar10 * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar12 & 0xffffffff,1);
      *param_2 = uVar8;
      goto LAB_140dda3d2;
    }
  }
  cVar5 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar5 == '\0') {
    iVar11 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar13 = -(iVar11 + uVar9) ^ uVar9 >> 0xd;
    uVar8 = (iVar11 - uVar9) - uVar13 ^ uVar13 >> 0xc;
    uVar9 = (uVar9 - uVar8) - uVar13 ^ uVar8 << 0x10;
    uVar13 = (uVar13 - uVar9) - uVar8 ^ uVar9 >> 5;
    uVar8 = (uVar8 - uVar9) - uVar13 ^ uVar13 >> 3;
    uVar9 = (uVar9 - uVar8) - uVar13 ^ uVar8 << 10;
    uVar8 = ((uVar13 - uVar9) - uVar8 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar8;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(uint *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_140dda3d2:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140dda400 HeapSortInternal<StairConnectionWeight,FIdentityFunctor,TDereferenceWrapper<StairConnectionWeight,TLess<StairConnectionWeight>_>_> body=341 status=ok
// SIG undefined HeapSortInternal<StairConnectionWeight,FIdentityFunctor,TDereferenceWrapper<StairConnectionWeight,TLess<StairConnectionWeight>_>_>(void)

void AlgoImpl::
     HeapSortInternal<StairConnectionWeight,FIdentityFunctor,TDereferenceWrapper<StairConnectionWeight,TLess<StairConnectionWeight>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar4 = iVar6;
    iVar8 = iVar5;
joined_r0x000140dda42a:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if (*(int *)((longlong)param_1 + (longlong)iVar7 * 8 + 4) <
              *(int *)((longlong)param_1 + (longlong)iVar6 * 8 + 0x14)) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        puVar9 = param_1 + iVar7;
        puVar1 = param_1 + iVar5;
        if (*(int *)((longlong)puVar9 + 4) < *(int *)((longlong)puVar1 + 4)) {
          if (puVar1 != puVar9) {
            uVar3 = *puVar1;
            *puVar1 = *puVar9;
            *puVar9 = uVar3;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x000140dda42a;
        }
      }
      iVar6 = iVar4 + -2;
      iVar5 = iVar8 + -1;
      iVar4 = iVar6;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = param_1 + param_2;
    do {
      if (param_1 != puVar9) {
        uVar3 = *param_1;
        *param_1 = *puVar9;
        *puVar9 = uVar3;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar5 * 2;
          iVar6 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(int *)((longlong)param_1 + (longlong)iVar6 * 8 + 4) <
                *(int *)((longlong)param_1 + (longlong)iVar4 * 8 + 0x14)) {
              iVar6 = iVar4;
            }
            iVar6 = iVar6 + 1;
          }
          puVar1 = param_1 + iVar6;
          puVar2 = param_1 + iVar5;
          if (*(int *)((longlong)puVar2 + 4) <= *(int *)((longlong)puVar1 + 4)) break;
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar5 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = puVar9 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140dda560 FUN_140dda560 body=540 status=ok
// SIG undefined FUN_140dda560(void)

void FUN_140dda560(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  iVar11 = (param_2 + -2) / 2;
  if (-1 < iVar11) {
    iVar12 = iVar11 * 2 + 1;
    iVar1 = iVar12;
    iVar14 = iVar11;
joined_r0x000140dda58a:
    do {
      if (iVar12 < param_2) {
        iVar12 = iVar11 * 2;
        iVar13 = iVar12 + 1;
        if (iVar12 + 2 < param_2) {
          if (*(int *)((longlong)iVar12 * 0x40 + 0xa4 + (longlong)param_1) <
              *(int *)((longlong)iVar13 * 0x40 + 0x24 + (longlong)param_1)) {
            iVar13 = iVar12;
          }
          iVar13 = iVar13 + 1;
        }
        puVar15 = param_1 + (longlong)iVar13 * 8;
        puVar16 = param_1 + (longlong)iVar11 * 8;
        if (*(int *)((longlong)puVar16 + 0x24) < *(int *)((longlong)puVar15 + 0x24)) {
          if (puVar16 != puVar15) {
            uVar2 = puVar15[1];
            uVar3 = *puVar16;
            uVar4 = puVar16[1];
            uVar5 = puVar16[2];
            uVar6 = puVar16[3];
            uVar7 = puVar16[4];
            uVar8 = puVar16[5];
            uVar9 = puVar16[6];
            uVar10 = puVar16[7];
            *puVar16 = *puVar15;
            puVar16[1] = uVar2;
            uVar2 = puVar15[3];
            puVar16[2] = puVar15[2];
            puVar16[3] = uVar2;
            uVar2 = puVar15[5];
            puVar16[4] = puVar15[4];
            puVar16[5] = uVar2;
            uVar2 = puVar15[7];
            puVar16[6] = puVar15[6];
            puVar16[7] = uVar2;
            *puVar15 = uVar3;
            puVar15[1] = uVar4;
            puVar15[2] = uVar5;
            puVar15[3] = uVar6;
            puVar15[4] = uVar7;
            puVar15[5] = uVar8;
            puVar15[6] = uVar9;
            puVar15[7] = uVar10;
          }
          iVar12 = iVar13 * 2 + 1;
          iVar11 = iVar13;
          goto joined_r0x000140dda58a;
        }
      }
      iVar12 = iVar1 + -2;
      iVar11 = iVar14 + -1;
      iVar1 = iVar12;
      iVar14 = iVar11;
    } while (-1 < iVar11);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar15 = param_1 + (longlong)param_2 * 8;
    do {
      if (param_1 != puVar15) {
        uVar2 = puVar15[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar9 = param_1[6];
        uVar10 = param_1[7];
        *param_1 = *puVar15;
        param_1[1] = uVar2;
        uVar2 = puVar15[3];
        param_1[2] = puVar15[2];
        param_1[3] = uVar2;
        uVar2 = puVar15[5];
        param_1[4] = puVar15[4];
        param_1[5] = uVar2;
        uVar2 = puVar15[7];
        param_1[6] = puVar15[6];
        param_1[7] = uVar2;
        *puVar15 = uVar3;
        puVar15[1] = uVar4;
        puVar15[2] = uVar5;
        puVar15[3] = uVar6;
        puVar15[4] = uVar7;
        puVar15[5] = uVar8;
        puVar15[6] = uVar9;
        puVar15[7] = uVar10;
      }
      iVar11 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar11 * 2;
          iVar12 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)((longlong)iVar1 * 0x40 + 0xa4 + (longlong)param_1) <
                *(int *)((longlong)iVar12 * 0x40 + 0x24 + (longlong)param_1)) {
              iVar12 = iVar1;
            }
            iVar12 = iVar12 + 1;
          }
          puVar16 = param_1 + (longlong)iVar12 * 8;
          puVar17 = param_1 + (longlong)iVar11 * 8;
          if (*(int *)((longlong)puVar16 + 0x24) <= *(int *)((longlong)puVar17 + 0x24)) break;
          if (puVar17 != puVar16) {
            uVar2 = puVar16[1];
            uVar3 = *puVar17;
            uVar4 = puVar17[1];
            uVar5 = puVar17[2];
            uVar6 = puVar17[3];
            uVar7 = puVar17[4];
            uVar8 = puVar17[5];
            uVar9 = puVar17[6];
            uVar10 = puVar17[7];
            *puVar17 = *puVar16;
            puVar17[1] = uVar2;
            uVar2 = puVar16[3];
            puVar17[2] = puVar16[2];
            puVar17[3] = uVar2;
            uVar2 = puVar16[5];
            puVar17[4] = puVar16[4];
            puVar17[5] = uVar2;
            uVar2 = puVar16[7];
            puVar17[6] = puVar16[6];
            puVar17[7] = uVar2;
            *puVar16 = uVar3;
            puVar16[1] = uVar4;
            puVar16[2] = uVar5;
            puVar16[3] = uVar6;
            puVar16[4] = uVar7;
            puVar16[5] = uVar8;
            puVar16[6] = uVar9;
            puVar16[7] = uVar10;
          }
          iVar11 = iVar12;
        } while (iVar12 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar15 = puVar15 + -8;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140dda780 IntroSortInternal<StairConnectionWeight,FIdentityFunctor,TDereferenceWrapper<StairConnectionWeight,TLess<StairConnectionWeight>_>_> body=625 status=ok
// SIG undefined IntroSortInternal<StairConnectionWeight,FIdentityFunctor,TDereferenceWrapper<StairConnectionWeight,TLess<StairConnectionWeight>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<StairConnectionWeight,FIdentityFunctor,TDereferenceWrapper<StairConnectionWeight,TLess<StairConnectionWeight>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_318 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar6 = &local_328;
    do {
      puVar10 = (undefined8 *)*plVar6;
      puVar8 = (undefined8 *)plVar6[1];
      lVar2 = plVar6[2];
      local_338._0_4_ = (int)lVar2;
      lVar4 = ((longlong)puVar8 - (longlong)puVar10 >> 3) + 1;
      puVar9 = puVar10;
      if ((int)local_338 != 0) {
LAB_140dda840:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          puVar10 = puVar9 + (lVar4 >> 1);
          if (puVar10 != puVar9) {
            uVar3 = *puVar10;
            *puVar10 = *puVar9;
            *puVar9 = uVar3;
          }
          puVar7 = puVar8 + 1;
          puVar5 = puVar9;
LAB_140dda877:
          puVar10 = puVar5 + 1;
          if (puVar10 <= puVar8) goto code_r0x000140dda880;
          goto LAB_140dda890;
        }
        for (; puVar10 = puVar9, puVar7 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar5 = puVar10, puVar10 = puVar7 + 1, puVar10 <= puVar8) {
            piVar1 = (int *)((longlong)puVar7 + 0xc);
            puVar7 = puVar10;
            if (*(int *)((longlong)puVar5 + 4) <= *piVar1) {
              puVar10 = puVar5;
            }
          }
          if (puVar5 != puVar8) {
            uVar3 = *puVar5;
            *puVar5 = *puVar8;
            *puVar8 = uVar3;
          }
        }
        goto LAB_140dda963;
      }
LAB_140dda954:
      local_338 = lVar2;
      HeapSortInternal<StairConnectionWeight,FIdentityFunctor,TDereferenceWrapper<StairConnectionWeight,TLess<StairConnectionWeight>_>_>
                (puVar10,lVar4,param_3,param_4);
LAB_140dda963:
      plVar6 = plVar6 + -3;
    } while (&local_328 <= plVar6);
  }
  return;
code_r0x000140dda880:
  piVar1 = (int *)((longlong)puVar5 + 0xc);
  puVar5 = puVar10;
  if (*(int *)((longlong)puVar9 + 4) <= *piVar1) goto LAB_140dda877;
LAB_140dda890:
  do {
    puVar5 = puVar7;
    puVar7 = puVar5 + -1;
    if (puVar7 <= puVar9) break;
  } while (*(int *)((longlong)puVar5 + -4) <= *(int *)((longlong)puVar9 + 4));
  if (puVar10 <= puVar7) {
    puVar5 = puVar10;
    if (puVar10 != puVar7) {
      uVar3 = *puVar10;
      *puVar10 = *puVar7;
      *puVar7 = uVar3;
    }
    goto LAB_140dda877;
  }
  if (puVar9 != puVar7) {
    uVar3 = *puVar9;
    *puVar9 = *puVar7;
    *puVar7 = uVar3;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar7 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar8 - (longlong)puVar10 & 0xfffffffffffffff8U)) {
    if (puVar10 < puVar8) {
      *plVar6 = (longlong)puVar10;
      plVar6[1] = (longlong)puVar8;
      *(int *)(plVar6 + 2) = (int)local_338;
      plVar6 = plVar6 + 3;
    }
    if (puVar7 <= puVar9 + 1) goto LAB_140dda963;
    puVar8 = puVar5 + -2;
    puVar10 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar7) {
      *plVar6 = (longlong)puVar9;
      plVar6[1] = (longlong)(puVar5 + -2);
      *(int *)(plVar6 + 2) = (int)local_338;
      plVar6 = plVar6 + 3;
    }
    if (puVar8 <= puVar10) goto LAB_140dda963;
  }
  lVar4 = ((longlong)puVar8 - (longlong)puVar10 >> 3) + 1;
  puVar9 = puVar10;
  if ((int)local_338 == 0) goto LAB_140dda954;
  goto LAB_140dda840;
}



// FUNCTION 140ddaa00 FUN_140ddaa00 body=861 status=ok
// SIG undefined FUN_140ddaa00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ddaa00(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  float fVar27;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x40 + -0x40 + param_1;
    fVar27 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar27 = fVar27 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar27 = _guard_xfg_dispatch_icall_nop(fVar27);
    local_318 = (undefined4)(longlong)(fVar27 + fVar27);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar21 = &local_328;
    do {
      puVar26 = (undefined8 *)*plVar21;
      puVar24 = (undefined8 *)plVar21[1];
      lVar2 = plVar21[2];
      local_338._0_4_ = (int)lVar2;
      lVar19 = ((longlong)puVar24 - (longlong)puVar26 >> 6) + 1;
      puVar25 = puVar26;
      if ((int)local_338 != 0) {
LAB_140ddaad0:
        if (8 < lVar19) {
          puVar26 = puVar25 + (lVar19 / 2) * 8;
          if (puVar26 != puVar25) {
            uVar10 = puVar25[1];
            uVar3 = *(undefined4 *)puVar26;
            uVar4 = *(undefined4 *)((longlong)puVar26 + 4);
            uVar5 = *(undefined4 *)(puVar26 + 1);
            uVar6 = *(undefined4 *)((longlong)puVar26 + 0xc);
            uVar11 = puVar26[2];
            uVar12 = puVar26[3];
            uVar13 = puVar26[4];
            uVar14 = puVar26[5];
            uVar15 = puVar26[6];
            uVar16 = puVar26[7];
            *puVar26 = *puVar25;
            puVar26[1] = uVar10;
            uVar10 = puVar25[3];
            puVar26[2] = puVar25[2];
            puVar26[3] = uVar10;
            uVar7 = *(undefined4 *)((longlong)puVar25 + 0x24);
            uVar8 = *(undefined4 *)(puVar25 + 5);
            uVar9 = *(undefined4 *)((longlong)puVar25 + 0x2c);
            *(undefined4 *)(puVar26 + 4) = *(undefined4 *)(puVar25 + 4);
            *(undefined4 *)((longlong)puVar26 + 0x24) = uVar7;
            *(undefined4 *)(puVar26 + 5) = uVar8;
            *(undefined4 *)((longlong)puVar26 + 0x2c) = uVar9;
            uVar10 = puVar25[7];
            puVar26[6] = puVar25[6];
            puVar26[7] = uVar10;
            *(undefined4 *)puVar25 = uVar3;
            *(undefined4 *)((longlong)puVar25 + 4) = uVar4;
            *(undefined4 *)(puVar25 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar25 + 0xc) = uVar6;
            puVar25[2] = uVar11;
            puVar25[3] = uVar12;
            puVar25[4] = uVar13;
            puVar25[5] = uVar14;
            puVar25[6] = uVar15;
            puVar25[7] = uVar16;
          }
          puVar22 = puVar24 + 8;
          puVar26 = puVar25;
LAB_140ddab40:
          puVar20 = puVar26;
          puVar26 = puVar20 + 8;
          if (puVar26 <= puVar24) goto code_r0x000140ddab49;
          goto LAB_140ddab52;
        }
        for (; puVar26 = puVar25, puVar22 = puVar25, puVar25 < puVar24; puVar24 = puVar24 + -8) {
          while (puVar20 = puVar26, puVar26 = puVar22 + 8, puVar26 <= puVar24) {
            piVar1 = (int *)((longlong)puVar22 + 100);
            puVar22 = puVar26;
            if (*piVar1 <= *(int *)((longlong)puVar20 + 0x24)) {
              puVar26 = puVar20;
            }
          }
          if (puVar20 != puVar24) {
            uVar10 = puVar24[1];
            uVar11 = *puVar20;
            uVar12 = puVar20[1];
            uVar13 = puVar20[2];
            uVar14 = puVar20[3];
            uVar15 = puVar20[4];
            uVar16 = puVar20[5];
            uVar17 = puVar20[6];
            uVar18 = puVar20[7];
            *puVar20 = *puVar24;
            puVar20[1] = uVar10;
            uVar10 = puVar24[3];
            puVar20[2] = puVar24[2];
            puVar20[3] = uVar10;
            uVar10 = puVar24[5];
            puVar20[4] = puVar24[4];
            puVar20[5] = uVar10;
            uVar10 = puVar24[7];
            puVar20[6] = puVar24[6];
            puVar20[7] = uVar10;
            *puVar24 = uVar11;
            puVar24[1] = uVar12;
            puVar24[2] = uVar13;
            puVar24[3] = uVar14;
            puVar24[4] = uVar15;
            puVar24[5] = uVar16;
            puVar24[6] = uVar17;
            puVar24[7] = uVar18;
          }
        }
        goto LAB_140ddac8f;
      }
LAB_140ddac80:
      local_338 = lVar2;
      FUN_140dda560(puVar26,lVar19,param_3,param_4);
LAB_140ddac8f:
      plVar21 = plVar21 + -3;
    } while (&local_328 <= plVar21);
  }
  return;
code_r0x000140ddab49:
  if (*(int *)((longlong)puVar20 + 100) <= *(int *)((longlong)puVar25 + 0x24)) goto LAB_140ddab40;
LAB_140ddab52:
  do {
    puVar23 = puVar22;
    puVar22 = puVar23 + -8;
    if (puVar22 <= puVar25) break;
  } while (*(int *)((longlong)puVar25 + 0x24) <= *(int *)((longlong)puVar23 + -0x1c));
  if (puVar26 <= puVar22) {
    if (puVar26 != puVar22) {
      uVar10 = puVar23[-7];
      uVar3 = *(undefined4 *)puVar26;
      uVar4 = *(undefined4 *)((longlong)puVar20 + 0x44);
      uVar5 = *(undefined4 *)(puVar20 + 9);
      uVar6 = *(undefined4 *)((longlong)puVar20 + 0x4c);
      uVar11 = puVar20[10];
      uVar12 = puVar20[0xb];
      uVar13 = puVar20[0xc];
      uVar14 = puVar20[0xd];
      uVar15 = puVar20[0xe];
      uVar16 = puVar20[0xf];
      *puVar26 = *puVar22;
      puVar20[9] = uVar10;
      uVar10 = puVar23[-5];
      puVar20[10] = puVar23[-6];
      puVar20[0xb] = uVar10;
      uVar7 = *(undefined4 *)((longlong)puVar23 + -0x1c);
      uVar8 = *(undefined4 *)(puVar23 + -3);
      uVar9 = *(undefined4 *)((longlong)puVar23 + -0x14);
      *(undefined4 *)(puVar20 + 0xc) = *(undefined4 *)(puVar23 + -4);
      *(undefined4 *)((longlong)puVar20 + 100) = uVar7;
      *(undefined4 *)(puVar20 + 0xd) = uVar8;
      *(undefined4 *)((longlong)puVar20 + 0x6c) = uVar9;
      uVar10 = puVar23[-1];
      puVar20[0xe] = puVar23[-2];
      puVar20[0xf] = uVar10;
      *(undefined4 *)puVar22 = uVar3;
      *(undefined4 *)((longlong)puVar23 + -0x3c) = uVar4;
      *(undefined4 *)(puVar23 + -7) = uVar5;
      *(undefined4 *)((longlong)puVar23 + -0x34) = uVar6;
      puVar23[-6] = uVar11;
      puVar23[-5] = uVar12;
      puVar23[-4] = uVar13;
      puVar23[-3] = uVar14;
      puVar23[-2] = uVar15;
      puVar23[-1] = uVar16;
    }
    goto LAB_140ddab40;
  }
  if (puVar25 != puVar22) {
    uVar10 = puVar23[-7];
    uVar3 = *(undefined4 *)puVar25;
    uVar4 = *(undefined4 *)((longlong)puVar25 + 4);
    uVar5 = *(undefined4 *)(puVar25 + 1);
    uVar6 = *(undefined4 *)((longlong)puVar25 + 0xc);
    uVar11 = puVar25[2];
    uVar12 = puVar25[3];
    uVar13 = puVar25[4];
    uVar14 = puVar25[5];
    uVar15 = puVar25[6];
    uVar16 = puVar25[7];
    *puVar25 = *puVar22;
    puVar25[1] = uVar10;
    uVar10 = puVar23[-5];
    puVar25[2] = puVar23[-6];
    puVar25[3] = uVar10;
    uVar7 = *(undefined4 *)((longlong)puVar23 + -0x1c);
    uVar8 = *(undefined4 *)(puVar23 + -3);
    uVar9 = *(undefined4 *)((longlong)puVar23 + -0x14);
    *(undefined4 *)(puVar25 + 4) = *(undefined4 *)(puVar23 + -4);
    *(undefined4 *)((longlong)puVar25 + 0x24) = uVar7;
    *(undefined4 *)(puVar25 + 5) = uVar8;
    *(undefined4 *)((longlong)puVar25 + 0x2c) = uVar9;
    uVar10 = puVar23[-1];
    puVar25[6] = puVar23[-2];
    puVar25[7] = uVar10;
    *(undefined4 *)puVar22 = uVar3;
    *(undefined4 *)((longlong)puVar23 + -0x3c) = uVar4;
    *(undefined4 *)(puVar23 + -7) = uVar5;
    *(undefined4 *)((longlong)puVar23 + -0x34) = uVar6;
    puVar23[-6] = uVar11;
    puVar23[-5] = uVar12;
    puVar23[-4] = uVar13;
    puVar23[-3] = uVar14;
    puVar23[-2] = uVar15;
    puVar23[-1] = uVar16;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar22 + (-0x40 - (longlong)puVar25) & 0xffffffffffffffc0U) <
      (longlong)((longlong)puVar24 - (longlong)puVar26 & 0xffffffffffffffc0U)) {
    if (puVar26 < puVar24) {
      *plVar21 = (longlong)puVar26;
      plVar21[1] = (longlong)puVar24;
      *(int *)(plVar21 + 2) = (int)local_338;
      plVar21 = plVar21 + 3;
    }
    if (puVar22 <= puVar25 + 8) goto LAB_140ddac8f;
    puVar24 = puVar23 + -0x10;
    puVar26 = puVar25;
  }
  else {
    if (puVar25 + 8 < puVar22) {
      *plVar21 = (longlong)puVar25;
      plVar21[1] = (longlong)(puVar23 + -0x10);
      *(int *)(plVar21 + 2) = (int)local_338;
      plVar21 = plVar21 + 3;
    }
    if (puVar24 <= puVar26) goto LAB_140ddac8f;
  }
  lVar19 = ((longlong)puVar24 - (longlong)puVar26 >> 6) + 1;
  puVar25 = puVar26;
  if ((int)local_338 == 0) goto LAB_140ddac80;
  goto LAB_140ddaad0;
}



// FUNCTION 140ddad60 NewObject<UMaterialParameterCollectionInstance> body=89 status=ok
// SIG undefined NewObject<UMaterialParameterCollectionInstance>(void)

void NewObject<UMaterialParameterCollectionInstance>(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140ddadc0 NewObject<USaveGame> body=149 status=ok
// SIG undefined NewObject<USaveGame>(void)

void NewObject<USaveGame>
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  if (param_3 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  FUN_1417985e0(param_2,param_1,param_3,param_4,0,param_5,param_6,param_7,0);
  return;
}



// FUNCTION 140ddae60 FUN_140ddae60 body=437 status=ok
// SIG undefined FUN_140ddae60(void)

int FUN_140ddae60(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  byte bVar15;
  
  iVar3 = (int)param_1[1];
  lVar11 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar10 = 0;
  iVar7 = 0;
  if ((*(longlong *)*param_1 == 0) ||
     (cVar5 = (**(code **)**(undefined8 **)*param_2)(), cVar5 == '\0')) {
    bVar15 = 1;
    uVar14 = uVar10;
  }
  else {
    bVar15 = 0;
    uVar14 = uVar10;
  }
  do {
    iVar13 = (int)uVar14;
    uVar10 = uVar10 + 1;
    uVar14 = (ulonglong)(iVar13 + 1);
    if ((longlong)uVar10 < lVar11) {
      lVar8 = uVar10 * 0x30;
      do {
        if ((*(longlong *)(lVar8 + *param_1) == 0) ||
           (cVar5 = (**(code **)**(undefined8 **)*param_2)(), cVar5 == '\0')) {
          bVar6 = 1;
        }
        else {
          bVar6 = 0;
        }
        if (bVar15 != bVar6) break;
        uVar14 = (ulonglong)((int)uVar14 + 1);
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0x30;
      } while ((longlong)uVar10 < lVar11);
    }
    iVar9 = (int)uVar14 - iVar13;
    if (bVar15 == 0) {
      if (iVar9 != 0) {
        plVar12 = (longlong *)((longlong)iVar13 * 0x30 + 8 + *param_1);
        do {
          FUN_140b7a560(plVar12 + 3);
          plVar4 = (longlong *)*plVar12;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar12 = plVar12 + 6;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      if (iVar7 != iVar13) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 * 0x30 + *param_1),
                   (void *)((longlong)iVar13 * 0x30 + *param_1),(longlong)iVar9 * 0x30);
      }
      iVar7 = iVar7 + iVar9;
    }
    bVar15 = bVar15 ^ 1;
    if (lVar11 <= (longlong)uVar10) {
      *(int *)(param_1 + 1) = iVar7;
      return iVar3 - iVar7;
    }
  } while( true );
}



// FUNCTION 140ddb020 FUN_140ddb020 body=639 status=ok
// SIG undefined FUN_140ddb020(void)

int FUN_140ddb020(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  
  iVar3 = (int)param_1[1];
  if (iVar3 == 0) {
    return 0;
  }
  iVar9 = 0;
  plVar6 = *(longlong **)(*param_1 + 0x10);
  if (plVar6 != (longlong *)0x0) {
    plVar5 = (longlong *)FName::FName(local_60,L"SPARK",1);
    plVar6 = (longlong *)(**(code **)(*plVar6 + 8))(plVar6,local_58);
    if (*plVar6 != *plVar5) {
      bVar11 = 0;
      goto LAB_140ddb0ba;
    }
  }
  bVar11 = 1;
LAB_140ddb0ba:
  lVar8 = 0;
  iVar12 = 0;
  do {
    iVar13 = iVar12 + 1;
    lVar8 = lVar8 + 1;
    if (lVar8 < iVar3) {
      lVar10 = lVar8 * 0xe8;
      do {
        plVar6 = *(longlong **)(lVar10 + 0x10 + *param_1);
        if (plVar6 == (longlong *)0x0) {
LAB_140ddb135:
          bVar4 = 1;
        }
        else {
          plVar5 = (longlong *)FName::FName(local_50,L"SPARK",1);
          plVar6 = (longlong *)(**(code **)(*plVar6 + 8))(plVar6,local_48);
          if (*plVar6 == *plVar5) goto LAB_140ddb135;
          bVar4 = 0;
        }
        if (bVar11 != bVar4) break;
        iVar13 = iVar13 + 1;
        lVar8 = lVar8 + 1;
        lVar10 = lVar10 + 0xe8;
      } while (lVar8 < iVar3);
    }
    iVar7 = iVar13 - iVar12;
    if (bVar11 == 0) {
      if (iVar7 != 0) {
        plVar6 = (longlong *)((longlong)iVar12 * 0xe8 + 0x18 + *param_1);
        do {
          FUN_1404bf650(plVar6 + 1);
          plVar5 = (longlong *)*plVar6;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar12 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          plVar5 = (longlong *)plVar6[-2];
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar12 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          plVar6 = plVar6 + 0x1d;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      if (iVar9 != iVar12) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar9 * 0xe8 + *param_1),
                   (void *)((longlong)iVar12 * 0xe8 + *param_1),(longlong)iVar7 * 0xe8);
      }
      iVar9 = iVar9 + iVar7;
    }
    bVar11 = bVar11 ^ 1;
    iVar12 = iVar13;
    if (iVar3 <= lVar8) {
      *(int *)(param_1 + 1) = iVar9;
      return iVar3 - iVar9;
    }
  } while( true );
}



// FUNCTION 140ddb2a0 FUN_140ddb2a0 body=799 status=ok
// SIG undefined FUN_140ddb2a0(void)

undefined4 FUN_140ddb2a0(float *param_1,uint param_2,char param_3,longlong *param_4)

{
  float *pfVar1;
  float *pfVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  float fVar12;
  longlong lVar13;
  uint uVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong local_res20;
  int local_e8;
  uint uStack_e4;
  float fStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int iStack_c0;
  uint uStack_bc;
  float *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  float *local_a0;
  undefined8 uStack_98;
  float *pfStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  local_res20 = (ulonglong)param_2;
  lVar8 = param_4[1];
  fVar18 = *param_1;
  if (0 < (int)param_2) {
    pfVar1 = param_1 + 2;
    pfVar2 = param_1 + 6;
    do {
      iVar9 = rand();
      fVar4 = param_1[0xc];
      local_e8 = 0;
      uStack_e4 = 1;
      fVar16 = 0.0;
      fStack_d4 = 0.0;
      iStack_d0 = 0;
      fVar17 = (float)iVar9 * 3.051851e-05 * fVar18;
      if (fVar4 != 0.0) {
        pfVar15 = *(float **)(param_1 + 10);
        if (*(float **)(param_1 + 10) == (float *)0x0) {
          pfVar15 = pfVar2;
        }
        fVar5 = *pfVar15;
        iStack_d0 = 0;
        local_e8 = 0;
        while (fVar5 == 0.0) {
          lVar13 = (longlong)local_e8;
          iStack_d0 = iStack_d0 + 0x20;
          iVar9 = local_e8 + 1;
          bVar7 = (int)(((int)fVar4 - 1U) + ((int)((int)fVar4 - 1U) >> 0x1f & 0x1fU)) >> 5 <=
                  local_e8;
          local_e8 = iVar9;
          if (bVar7) goto LAB_140ddb3d0;
          fVar5 = pfVar15[lVar13 + 1];
        }
        uStack_e4 = -(int)fVar5 & (uint)fVar5;
        iVar9 = 0x1f;
        if (uStack_e4 != 0) {
          for (; uStack_e4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        if (uStack_e4 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        fStack_d4 = (float)((iStack_d0 - iVar9) + 0x1f);
        if ((int)fVar4 < (int)fStack_d4) {
LAB_140ddb3d0:
          fStack_d4 = fVar4;
        }
      }
      fVar5 = param_1[0xc];
      uStack_b0 = CONCAT44(fStack_d4,0xffffffff);
      local_a8 = CONCAT44(uStack_cc,iStack_d0);
      uStack_98 = CONCAT44(uStack_e4,local_e8);
      uVar14 = (uint)fVar5 & 0xffffffe0;
      iStack_c0 = local_e8;
      uStack_bc = uStack_e4;
      local_b8 = pfVar2;
      local_a0 = pfVar1;
      pfStack_90 = pfVar2;
      uStack_88 = uStack_b0;
      uStack_80 = local_a8;
      fStack_d4 = fVar5;
      if (fVar5 != fVar4) {
        pfVar15 = *(float **)(param_1 + 10);
        if (*(float **)(param_1 + 10) == (float *)0x0) {
          pfVar15 = pfVar2;
        }
        fVar12 = (float)((uint)pfVar15[(int)fVar5 >> 5] & -1 << (SUB41(fVar5,0) & 0x1f));
        iVar9 = (int)fVar5 >> 5;
        while (fVar12 == 0.0) {
          uVar14 = uVar14 + 0x20;
          if ((int)(((int)fVar4 - 1U) + ((int)((int)fVar4 - 1U) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
          goto LAB_140ddb496;
          fVar12 = pfVar15[(longlong)iVar9 + 1];
          iVar9 = iVar9 + 1;
        }
        uVar10 = -(int)fVar12 & (uint)fVar12;
        iVar9 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        if (uVar10 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        fStack_d4 = (float)((uVar14 - iVar9) + 0x1f);
        if ((int)fVar4 < (int)fStack_d4) {
LAB_140ddb496:
          fStack_d4 = fVar4;
        }
      }
      while( true ) {
        lVar13 = (longlong)(int)uStack_b0._4_4_;
        if ((uStack_b0._4_4_ == fStack_d4) && (local_b8 == pfVar2)) goto LAB_140ddb54e;
        lVar6 = *(longlong *)pfVar1;
        if (param_3 == '\0') {
          plVar11 = (longlong *)*param_4;
          plVar3 = plVar11 + (int)param_4[1];
          if (plVar11 != plVar3) {
            do {
              if (*plVar11 == *(longlong *)(lVar6 + lVar13 * 0x18)) goto LAB_140ddb50b;
              plVar11 = plVar11 + 1;
            } while (plVar11 != plVar3);
          }
        }
        if ((fVar16 <= fVar17) &&
           (fVar4 = *(float *)(lVar6 + 8 + lVar13 * 0x18), fVar17 <= fVar4 + fVar16)) break;
        fVar16 = fVar16 + *(float *)(lVar6 + 8 + lVar13 * 0x18);
LAB_140ddb50b:
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_bc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_c0);
      }
      if (param_3 == '\0') {
        fVar18 = fVar18 - fVar4;
      }
      iVar9 = (int)param_4[1];
      *(int *)(param_4 + 1) = iVar9 + 1;
      if (*(int *)((longlong)param_4 + 0xc) < iVar9 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_4,iVar9);
      }
      *(undefined8 *)(*param_4 + (longlong)iVar9 * 8) = *(undefined8 *)(lVar6 + lVar13 * 0x18);
LAB_140ddb54e:
      local_res20 = local_res20 - 1;
    } while (local_res20 != 0);
  }
  uVar14 = (int)param_4[1] - (int)lVar8;
  return CONCAT31((int3)(uVar14 >> 8),param_2 == uVar14);
}



// FUNCTION 140ddb5c0 FUN_140ddb5c0 body=210 status=ok
// SIG undefined FUN_140ddb5c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ddb5c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = &local_48;
  iVar1 = *(int *)(param_3 + 1);
  local_50 = *(undefined8 *)(param_2 + 8);
  local_48 = 0;
  local_40 = 0x4000000000000;
  if (0 < iVar1) {
    FUN_142ab5fa0(&local_58,iVar1);
    iVar1 = *(int *)(param_3 + 1);
  }
  puVar2 = (undefined4 *)*param_3;
  uVar4 = 0;
  uVar3 = (longlong)iVar1 & 0x3fffffffffffffff;
  if (puVar2 + iVar1 < puVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      FUN_142ab4f80(&local_58,*puVar2);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 != uVar3);
  }
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(param_2,param_1,&local_58);
  return;
}



// FUNCTION 140ddb6a0 FUN_140ddb6a0 body=415 status=ok
// SIG undefined FUN_140ddb6a0(void)

void FUN_140ddb6a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *local_98;
  undefined8 local_90;
  undefined **local_88;
  char *local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined **local_68;
  char *local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined **local_48;
  char *local_40;
  undefined1 local_38;
  undefined4 local_30;
  undefined **local_28;
  char *local_20;
  undefined1 local_18;
  undefined4 local_10;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_98,"friend_invite_response",param_3);
    if (local_98 == (longlong *)0x0) {
      cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_98);
    }
    else {
      local_80 = "success";
      local_78 = 1;
      local_88 = &PTR_FUN_1445760c0;
      local_70 = 0;
      (**(code **)(*local_98 + 0x18))(local_98,local_90,&local_88);
      local_60 = "invitation";
      local_88 = &PTR_FUN_143f47bd8;
      local_68 = &PTR_FUN_144576240;
      local_58 = 1;
      local_50 = 8;
      (**(code **)(*local_98 + 0x18))(local_98,local_90,&local_68);
      local_68 = &PTR_FUN_143f47bd8;
      local_40 = "errorMessage";
      local_38 = 1;
      local_48 = &PTR_FUN_144576140;
      local_30 = 0x48;
      (**(code **)(*local_98 + 0x18))(local_98,local_90,&local_48);
      local_48 = &PTR_FUN_143f47bd8;
      local_20 = "successMessage";
      local_18 = 1;
      local_28 = &PTR_FUN_144576140;
      local_10 = 0x58;
      (**(code **)(*local_98 + 0x18))(local_98,local_90,&local_28);
      cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_98);
    }
    (**(code **)(*plVar1 + 0x48))(plVar1,param_3);
    (**(code **)(*plVar1 + 0x58))(plVar1);
  }
  return;
}



// FUNCTION 140ddb840 FUN_140ddb840 body=340 status=ok
// SIG undefined FUN_140ddb840(void)

void FUN_140ddb840(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *local_78;
  undefined8 local_70;
  undefined **local_68;
  char *local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined **local_48;
  char *local_40;
  undefined1 local_38;
  undefined4 local_30;
  undefined **local_28;
  char *local_20;
  undefined1 local_18;
  undefined4 local_10;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_78,"friends_response",param_3);
    if (local_78 != (longlong *)0x0) {
      local_60 = "success";
      local_58 = 1;
      local_68 = &PTR_FUN_1445760c0;
      local_50 = 0;
      (**(code **)(*local_78 + 0x18))(local_78,local_70,&local_68);
      local_40 = "errorMessage";
      local_68 = &PTR_FUN_143f47bd8;
      local_48 = &PTR_FUN_144576140;
      local_38 = 1;
      local_30 = 8;
      (**(code **)(*local_78 + 0x18))(local_78,local_70,&local_48);
      local_20 = "friends";
      local_28 = &PTR_FUN_1445762c0;
      local_48 = &PTR_FUN_143f47bd8;
      local_18 = 1;
      local_10 = 0x18;
      (**(code **)(*local_78 + 0x18))(local_78,local_70,&local_28);
    }
    cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_78);
    (**(code **)(*plVar1 + 0x48))(plVar1,param_3);
    (**(code **)(*plVar1 + 0x58))(plVar1);
  }
  return;
}



// FUNCTION 140ddb9a0 FUN_140ddb9a0 body=360 status=ok
// SIG undefined FUN_140ddb9a0(void)

void FUN_140ddb9a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *local_78;
  undefined8 local_70;
  undefined **local_68;
  char *local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined **local_48;
  char *local_40;
  undefined1 local_38;
  undefined4 local_30;
  undefined **local_28;
  char *local_20;
  undefined1 local_18;
  undefined4 local_10;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_78,"response",param_3);
    if (local_78 == (longlong *)0x0) {
      cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_78);
    }
    else {
      local_60 = "success";
      local_58 = 1;
      local_68 = &PTR_FUN_1445760c0;
      local_50 = 0;
      (**(code **)(*local_78 + 0x18))(local_78,local_70,&local_68);
      local_68 = &PTR_FUN_143f47bd8;
      local_40 = "errorMessage";
      local_38 = 1;
      local_48 = &PTR_FUN_144576140;
      local_30 = 8;
      (**(code **)(*local_78 + 0x18))(local_78,local_70,&local_48);
      local_48 = &PTR_FUN_143f47bd8;
      local_20 = "successMessage";
      local_18 = 1;
      local_28 = &PTR_FUN_144576140;
      local_10 = 0x18;
      (**(code **)(*local_78 + 0x18))(local_78,local_70,&local_28);
      cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_78);
    }
    (**(code **)(*plVar1 + 0x48))(plVar1,param_3);
    (**(code **)(*plVar1 + 0x58))(plVar1);
  }
  return;
}



// FUNCTION 140ddbb10 FUN_140ddbb10 body=112 status=ok
// SIG undefined FUN_140ddbb10(void)

void FUN_140ddbb10(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,1);
    if (*(int *)(param_3 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_3;
    }
    (**(code **)(*plVar1 + 0xb0))(plVar1,puVar2);
    (**(code **)(*plVar1 + 0x58))(plVar1);
  }
  return;
}



// FUNCTION 140ddbb80 __Internal_AddDynamic<UDSMController> body=138 status=ok
// SIG undefined __Internal_AddDynamic<UDSMController>(void)

void TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 local_18 [8];
  longlong local_10;
  
  FWeakObjectPtr::operator=(local_18,0);
  local_10 = 0;
  FWeakObjectPtr::operator=(local_18,param_2);
  local_10 = param_4;
  if (param_4 != 0) {
    lVar1 = FWeakObjectPtr::Get(local_18);
    if (lVar1 != 0) {
      UObject::FindFunction(lVar1,local_10);
    }
  }
  FUN_1406a5aa0(param_1,local_18);
  return;
}



// FUNCTION 140ddbc10 FUN_140ddbc10 body=143 status=ok
// SIG undefined FUN_140ddbc10(void)

void FUN_140ddbc10(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 local_18 [8];
  longlong local_10;
  
  FWeakObjectPtr::operator=(local_18,0);
  local_10 = 0;
  FWeakObjectPtr::operator=(local_18,param_2);
  local_10 = param_4;
  if (param_4 != 0) {
    lVar1 = FWeakObjectPtr::Get(local_18);
    if (lVar1 != 0) {
      UObject::FindFunction(lVar1,local_10);
    }
  }
  FUN_1406a5aa0(param_1,local_18);
  return;
}



// FUNCTION 140ddbca0 TMap<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,0>_> body=163 status=ok
// SIG undefined TMap<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,0>_>(void)

undefined8 *
TMap<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,0>_>
::
TMap<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AITradeSource_*,FDefaultAllocator>,0>_>
          (undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  TSparseArray<TSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 7,(void *)(param_2 + 0x38),4);
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 140ddbd50 FUN_140ddbd50 body=147 status=ok
// SIG undefined FUN_140ddbd50(void)

undefined4 * FUN_140ddbd50(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,0>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,0>,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 2,param_2 + 2);
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,0>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,0>,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x16,param_2 + 0x16);
  return param_1;
}



// FUNCTION 140ddbdf0 FUN_140ddbdf0 body=169 status=ok
// SIG undefined FUN_140ddbdf0(void)

undefined8 * FUN_140ddbdf0(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1445744e0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  return param_1;
}



// FUNCTION 140ddbea0 FUN_140ddbea0 body=165 status=ok
// SIG undefined FUN_140ddbea0(void)

undefined8 *
FUN_140ddbea0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0x100;
  *param_1 = &PTR_FUN_144575be0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FWeakObjectPtr::operator=(param_1 + 9);
  param_1[10] = *param_3;
  lVar1 = param_3[1];
  param_1[0xb] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x61) = param_4;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return param_1;
}



// FUNCTION 140ddbf50 FUN_140ddbf50 body=237 status=ok
// SIG undefined FUN_140ddbf50(void)

undefined8 *
FUN_140ddbf50(undefined8 *param_1,undefined4 *param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0x100;
  *param_1 = &PTR_FUN_144575ca0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x9c) = param_2[1];
  param_1[0x14] = *param_4;
  lVar1 = param_4[1];
  param_1[0x15] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  return param_1;
}



// FUNCTION 140ddc040 FUN_140ddc040 body=211 status=ok
// SIG undefined FUN_140ddc040(void)

undefined4 * FUN_140ddc040(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  _Src = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if (iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 2,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 2),_Src,(longlong)iVar1 << 3);
  }
  FString::FString(param_1 + 6,param_2 + 6);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = 0;
  FUN_140dd8580(param_1 + 0xe,*(undefined8 *)(param_2 + 0xe),param_2[0x10],0,0);
  FString::FString(param_1 + 0x12,param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  return param_1;
}



// FUNCTION 140ddc120 FUN_140ddc120 body=526 status=ok
// SIG undefined FUN_140ddc120(void)

undefined4 * FUN_140ddc120(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 6) = 0;
  FUN_140dd86a0(param_1 + 6,*(undefined8 *)(param_2 + 6),param_2[8],0,0);
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar2 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if (iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    TArray<FVector,FDefaultAllocator>::ResizeForCopy(param_1 + 10,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1 * 0xc);
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
            (param_1 + 0xe,param_2 + 0xe);
  param_1[0x22] = param_2[0x22];
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0xffffffff;
  param_1[0x31] = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  param_1[0x36] = 0;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
            (param_1 + 0x24,param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar1 = param_2[0x3a];
  pvVar2 = *(void **)(param_2 + 0x38);
  param_1[0x3a] = iVar1;
  if (iVar1 == 0) {
    param_1[0x3b] = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x38,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x38),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0x3c) = 0;
  iVar1 = param_2[0x3e];
  pvVar2 = *(void **)(param_2 + 0x3c);
  param_1[0x3e] = iVar1;
  if (iVar1 == 0) {
    param_1[0x3f] = 0;
  }
  else {
    TArray<FVector,FDefaultAllocator>::ResizeForCopy(param_1 + 0x3c,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x3c),pvVar2,(longlong)iVar1 * 0xc);
  }
  param_1[0x40] = param_2[0x40];
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  param_1[0x4e] = 0xffffffff;
  param_1[0x4f] = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x54] = 0;
  FUN_140de1050(param_1 + 0x42,param_2 + 0x42);
  return param_1;
}



// FUNCTION 140ddc330 FUN_140ddc330 body=222 status=ok
// SIG undefined FUN_140ddc330(void)

undefined8 * FUN_140ddc330(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 140ddc410 FUN_140ddc410 body=144 status=ok
// SIG undefined FUN_140ddc410(void)

longlong * FUN_140ddc410(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = *(longlong *)(*param_2 + 0x10);
  lVar4 = *(longlong *)(*param_1 + 0x20);
  if (lVar4 != 0) {
    lVar3 = FUN_1429a0270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = ULevel::IsPersistentLevel(lVar4);
      if (cVar2 == '\0') {
        lVar4 = UObjectBaseUtility::GetOutermost(lVar4);
        param_1[1] = *(longlong *)(lVar4 + 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 140ddc4a0 FUN_140ddc4a0 body=636 status=ok
// SIG undefined FUN_140ddc4a0(void)

undefined8 * FUN_140ddc4a0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  wint_t wVar3;
  wint_t wVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  wint_t *pwVar7;
  int *piVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  *param_1 = *param_2;
  lVar11 = param_2[1];
  param_1[1] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  plVar1 = param_1 + 4;
  *plVar1 = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(*param_3 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(*param_3 + 0x1c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(*param_3 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(*param_3 + 0x24);
  lVar11 = *(longlong *)(*param_3 + 8);
  lVar10 = (longlong)*(int *)(*param_3 + 0x10) * 0x40 + lVar11;
  if (lVar11 == lVar10) {
    return param_1;
  }
  piVar8 = (int *)(lVar11 + 0x30);
LAB_140ddc540:
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0xffffffff00000000;
  local_70 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0xffffffff;
  FString::operator=(&local_78,piVar8 + -6);
  FString::operator=(&local_68,piVar8 + -10);
  if (*piVar8 == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = *(undefined2 **)(piVar8 + -2);
  }
  pwVar7 = &DAT_144558804;
  do {
    wVar3 = *(wint_t *)((longlong)(puVar9 + -0xa22ac402) + (longlong)pwVar7);
    if ((wVar3 == 0) && (*pwVar7 == 0)) goto LAB_140ddc5e1;
    if (wVar3 != *pwVar7) {
      wVar3 = towlower(wVar3);
      wVar4 = towlower(*pwVar7);
      if (wVar3 != wVar4) break;
    }
    pwVar7 = pwVar7 + 1;
  } while( true );
  if (wVar3 != wVar4) {
    if (*piVar8 == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)(piVar8 + -2);
    }
    pwVar7 = &DAT_144559624;
    do {
      wVar3 = *(wint_t *)((longlong)(puVar9 + -0xa22acb12) + (longlong)pwVar7);
      if ((wVar3 == 0) && (*pwVar7 == 0)) goto LAB_140ddc64a;
      if (wVar3 != *pwVar7) {
        wVar3 = towlower(wVar3);
        wVar4 = towlower(*pwVar7);
        if (wVar3 != wVar4) goto LAB_140ddc640;
      }
      pwVar7 = pwVar7 + 1;
    } while( true );
  }
LAB_140ddc5e1:
  uVar6 = 1;
LAB_140ddc655:
  iVar2 = *(int *)(param_1 + 5);
  *(int *)(param_1 + 5) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x2c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar2);
  }
  lVar11 = lVar11 + 0x40;
  puVar5 = (undefined8 *)((longlong)iVar2 * 0x40 + *plVar1);
  piVar8 = piVar8 + 0x10;
  *puVar5 = local_78;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_70;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_70._4_4_;
  puVar5[2] = local_68;
  *(undefined4 *)(puVar5 + 3) = (undefined4)local_60;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = local_60._4_4_;
  *(undefined4 *)((longlong)puVar5 + 0x24) = uStack_58._4_4_;
  *(undefined4 *)(puVar5 + 5) = local_50;
  *(undefined4 *)(puVar5 + 4) = uVar6;
  puVar5[6] = local_48;
  puVar5[7] = uStack_40;
  if (lVar11 == lVar10) {
    return param_1;
  }
  goto LAB_140ddc540;
LAB_140ddc640:
  if (wVar3 == wVar4) {
LAB_140ddc64a:
    uVar6 = 2;
  }
  else {
    uVar6 = (undefined4)uStack_58;
  }
  goto LAB_140ddc655;
}



// FUNCTION 140ddc720 FUN_140ddc720 body=195 status=ok
// SIG undefined FUN_140ddc720(void)

undefined8 * FUN_140ddc720(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[4] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < 0) && (*(int *)((longlong)param_1 + 0x2c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[4] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  FText::FText(param_1 + 6);
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 140ddc7f0 FUN_140ddc7f0 body=655 status=ok
// SIG undefined FUN_140ddc7f0(void)

undefined8 *
FUN_140ddc7f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined1 local_res8 [8];
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  uint local_58;
  undefined4 uStack_54;
  longlong local_50;
  uint uStack_48;
  uint uStack_44;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  puVar7 = (undefined8 *)0x0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_144573620;
  puVar6 = (undefined8 *)operator_new(0x98);
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    *puVar6 = &PTR_FUN_144531650;
    FUN_140da88b0(puVar6 + 2);
    puVar9 = puVar6;
  }
  puVar6 = puVar9 + 2;
  param_1[4] = puVar6;
  param_1[5] = puVar9;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 4,puVar6,puVar6);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_4;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_140dcd220(param_2,param_3,0,param_1 + 4);
  lVar3 = param_1[4];
  local_50 = lVar3 + 0x28;
  iVar1 = *(int *)(lVar3 + 0x50);
  puStack_40 = (uint *)(lVar3 + 0x38);
  local_78._0_4_ = 0;
  local_78._4_4_ = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar10 = *(uint **)(lVar3 + 0x48);
    if (*(uint **)(lVar3 + 0x48) == (uint *)0x0) {
      puVar10 = puStack_40;
    }
    uVar2 = *puVar10;
    puVar9 = puVar7;
    while (uVar2 == 0) {
      iVar5 = (int)puVar9;
      uStack_60 = (int)puVar7 + 0x20;
      puVar7 = (undefined8 *)(ulonglong)uStack_60;
      local_78._0_4_ = iVar5 + 1;
      puVar9 = (undefined8 *)(ulonglong)(uint)local_78;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140ddc94d;
      uVar2 = puVar10[(longlong)iVar5 + 1];
    }
    local_78._4_4_ = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (local_78._4_4_ != 0) {
      for (; local_78._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_78._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_68._4_4_ = (uStack_60 - iVar5) + 0x1f;
    if (iVar1 < local_68._4_4_) {
LAB_140ddc94d:
      local_68._4_4_ = iVar1;
    }
  }
  uStack_38 = 0xffffffff;
  iStack_34 = local_68._4_4_;
  uStack_30 = uStack_60;
  uStack_2c = iStack_5c;
  uStack_48 = (uint)local_78;
  uStack_44 = local_78._4_4_;
  iVar5 = local_68._4_4_;
  uStack_70 = (uint)local_78;
  uStack_6c = local_78._4_4_;
  local_58 = uStack_60;
  uStack_54 = iStack_5c;
  bVar4 = local_68._4_4_ < iVar1;
  local_78 = local_50;
  local_68 = puStack_40;
  uStack_60 = 0xffffffff;
  iStack_5c = iVar5;
  if (bVar4) {
    do {
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
  }
  lVar3 = param_1[4];
  puVar7 = (undefined8 *)FName::FName(local_res8,L"LIVEHOPPERNAME",1);
  uVar8 = FUN_140dbbc90(&local_78,param_3);
  FUN_1404ab360(lVar3 + 0x20,*puVar7,uVar8,0);
  if (local_78 != 0) {
    FMemory::Free();
  }
  lVar3 = param_1[4];
  puVar7 = (undefined8 *)FName::FName(local_res8,L"LIVEBACKFILL",1);
  FUN_1404ab630(lVar3 + 0x20,*puVar7,&stack0x00000030,0);
  lVar3 = param_1[4];
  puVar7 = (undefined8 *)FName::FName(local_res8,L"LIVEHOSTRATING",1);
  FUN_1404ab0b0(lVar3 + 0x20,*puVar7,&stack0x00000028,0);
  *(undefined4 *)(param_1[4] + 0x80) = 0x41f00000;
  return param_1;
}



// FUNCTION 140ddca80 FUN_140ddca80 body=1436 status=ok
// SIG undefined FUN_140ddca80(void)

undefined8 * FUN_140ddca80(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__144575960;
  FText::FText(param_1 + 6);
  FText::FText(param_1 + 9);
  FText::FText(param_1 + 0xc);
  FText::FText(param_1 + 0xf);
  FText::FText(param_1 + 0x12);
  FText::FText(param_1 + 0x15);
  FText::FText(param_1 + 0x18);
  FText::FText(param_1 + 0x1b);
  FText::FText(param_1 + 0x1e);
  FText::FText(param_1 + 0x21);
  FText::FText(param_1 + 0x24);
  FText::FText(param_1 + 0x27);
  FText::FText(param_1 + 0x2a);
  FText::FText(param_1 + 0x2d);
  FText::FText(param_1 + 0x30);
  FText::FText(param_1 + 0x33);
  FText::FText(param_1 + 0x36);
  FText::FText(param_1 + 0x39);
  FText::FText(param_1 + 0x3c);
  FText::FText(param_1 + 0x3f);
  FText::FText(param_1 + 0x42);
  FText::FText(param_1 + 0x45);
  FText::FText(param_1 + 0x48);
  FText::FText(param_1 + 0x4b);
  FText::FText(param_1 + 0x4e);
  FText::FText(param_1 + 0x51);
  FText::FText(param_1 + 0x54);
  FText::FText(param_1 + 0x57);
  FText::FText(param_1 + 0x5a);
  FText::FText(param_1 + 0x5d);
  FText::FText(param_1 + 0x60);
  FText::FText(param_1 + 99);
  FText::FText(param_1 + 0x66);
  FText::FText(param_1 + 0x69);
  FText::FText(param_1 + 0x6c);
  FText::FText(param_1 + 0x6f);
  FText::FText(param_1 + 0x72);
  FText::FText(param_1 + 0x75);
  FText::FText(param_1 + 0x78);
  FText::FText(param_1 + 0x7b);
  FText::FText(param_1 + 0x7e);
  FText::FText(param_1 + 0x81);
  FText::FText(param_1 + 0x84);
  FText::FText(param_1 + 0x87);
  FText::FText(param_1 + 0x8a);
  FText::FText(param_1 + 0x8d);
  FText::FText(param_1 + 0x90);
  FText::FText(param_1 + 0x93);
  FText::FText(param_1 + 0x96);
  FText::FText(param_1 + 0x99);
  FText::FText(param_1 + 0x9c);
  FText::FText(param_1 + 0x9f);
  FText::FText(param_1 + 0xa2);
  FText::FText(param_1 + 0xa5);
  FText::FText(param_1 + 0xa8);
  FText::FText(param_1 + 0xab);
  FText::FText(param_1 + 0xae);
  FText::FText(param_1 + 0xb1);
  FText::FText(param_1 + 0xb4);
  FText::FText(param_1 + 0xb7);
  FText::FText(param_1 + 0xba);
  FText::FText(param_1 + 0xbd);
  FText::FText(param_1 + 0xc0);
  FText::FText(param_1 + 0xc3);
  FText::FText(param_1 + 0xc6);
  FText::FText(param_1 + 0xc9);
  FText::FText(param_1 + 0xcc);
  FText::FText(param_1 + 0xcf);
  FText::FText(param_1 + 0xd2);
  FText::FText(param_1 + 0xd5);
  FText::FText(param_1 + 0xd8);
  FText::FText(param_1 + 0xdb);
  FText::FText(param_1 + 0xde);
  FText::FText(param_1 + 0xe1);
  FText::FText(param_1 + 0xe4);
  FText::FText(param_1 + 0xe7);
  FText::FText(param_1 + 0xea);
  FText::FText(param_1 + 0xed);
  FText::FText(param_1 + 0xf0);
  FText::FText(param_1 + 0xf3);
  FText::FText(param_1 + 0xf6);
  FText::FText(param_1 + 0xf9);
  FText::FText(param_1 + 0xfc);
  FText::FText(param_1 + 0xff);
  FText::FText(param_1 + 0x102);
  FText::FText(param_1 + 0x105);
  FText::FText(param_1 + 0x108);
  FText::FText(param_1 + 0x10b);
  FText::FText(param_1 + 0x10e);
  FText::FText(param_1 + 0x111);
  FText::FText(param_1 + 0x114);
  FText::FText(param_1 + 0x117);
  FText::FText(param_1 + 0x11a);
  FText::FText(param_1 + 0x11d);
  FText::FText(param_1 + 0x120);
  FText::FText(param_1 + 0x123);
  FText::FText(param_1 + 0x126);
  FText::FText(param_1 + 0x129);
  FText::FText(param_1 + 300);
  FText::FText(param_1 + 0x12f);
  FText::FText(param_1 + 0x132);
  FText::FText(param_1 + 0x135);
  FText::FText(param_1 + 0x138);
  FText::FText(param_1 + 0x13b);
  FText::FText(param_1 + 0x13e);
  FText::FText(param_1 + 0x141);
  FText::FText(param_1 + 0x144);
  FText::FText(param_1 + 0x147);
  FText::FText(param_1 + 0x14a);
  FText::FText(param_1 + 0x14d);
  FText::FText(param_1 + 0x150);
  FText::FText(param_1 + 0x153);
  FText::FText(param_1 + 0x156);
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  *(undefined4 *)((longlong)param_1 + 0xafc) = 0;
  *(undefined4 *)(param_1 + 0x15f) = 0xffffffff;
  param_1[0x161] = 0;
  *(undefined4 *)(param_1 + 0x162) = 0;
  return param_1;
}



// FUNCTION 140ddd020 UEnvQueryTest_Volume body=49 status=ok
// SIG undefined UEnvQueryTest_Volume(void)

undefined8 * UEnvQueryTest_Volume::UEnvQueryTest_Volume(undefined8 *param_1)

{
  FUN_1430f8760();
  *param_1 = &PTR_FUN_1445732c0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  return param_1;
}



// FUNCTION 140ddd060 FUN_140ddd060 body=172 status=ok
// SIG undefined FUN_140ddd060(void)

undefined8 * FUN_140ddd060(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1430f88a0();
  *param_1 = &PTR_FUN_144572ca0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  uVar1 = FUN_14146f8a0();
  param_1[5] = uVar1;
  return param_1;
}



// FUNCTION 140ddd110 FUN_140ddd110 body=48 status=ok
// SIG undefined FUN_140ddd110(void)

undefined8 * FUN_140ddd110(undefined8 *param_1)

{
  FUN_140ddde00();
  param_1[0x29] = 0;
  *param_1 = &PTR_FUN_144573000;
  *(undefined1 *)(param_1 + 9) = 1;
  return param_1;
}



// FUNCTION 140ddd140 FUN_140ddd140 body=193 status=ok
// SIG undefined FUN_140ddd140(void)

undefined8 * FUN_140ddd140(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_141781840();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR_FUN_144573c60;
  *puVar1 = &PTR_FUN_144573ed8;
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
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x41200000;
  return param_1;
}



// FUNCTION 140ddd210 FUN_140ddd210 body=475 status=ok
// SIG undefined FUN_140ddd210(void)

undefined8 * FUN_140ddd210(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  UFontFaceInterface::UFontFaceInterface();
  puVar1 = param_1 + 6;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR__scalar_deleting_destructor__144573660;
  *puVar1 = &PTR_LAB_144573958;
  param_1[7] = 0;
  param_1[8] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 7,0);
  FGenericPlatformString::Memcpy(param_1[7],L"EventType",0x14);
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  FText::FText(param_1 + 10);
  FText::FText(param_1 + 0xd);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xa4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x13,0);
  }
  if ((undefined2 *)param_1[0x13] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x13] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((*(int *)((longlong)param_1 + 0xa4) < 0) && (*(int *)((longlong)param_1 + 0xa4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x13,0);
  }
  if ((undefined2 *)param_1[0x13] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x13] = 0;
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  FText::FText(param_1 + 0x15);
  FUN_1405e1750(param_1 + 0x18);
  FText::FText(param_1 + 0x20);
  FUN_1405e1750(param_1 + 0x23);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x31] = 0;
  return param_1;
}



// FUNCTION 140ddd3f0 FUN_140ddd3f0 body=504 status=ok
// SIG undefined FUN_140ddd3f0(void)

undefined8 * FUN_140ddd3f0(undefined8 *param_1)

{
  FUN_140ddd210();
  *param_1 = &PTR_FUN_144573f20;
  param_1[6] = &PTR_FUN_144574218;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 100;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x44610000;
  *(undefined4 *)(param_1 + 0x3b) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x40000000;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  FUN_140ddc720(param_1 + 0x41);
  FText::FText(param_1 + 0x4d);
  FUN_1405e1750(param_1 + 0x50);
  FText::FText(param_1 + 0x58);
  FUN_1405e1750(param_1 + 0x5b);
  FText::FText(param_1 + 99);
  FUN_1405e1750(param_1 + 0x66);
  *(undefined4 *)(param_1 + 0x6e) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0x40400000;
  *(undefined4 *)(param_1 + 0x6f) = 4;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  FText::FText(param_1 + 0x72);
  FText::FText(param_1 + 0x75);
  FText::FText(param_1 + 0x78);
  FText::FText(param_1 + 0x7b);
  FText::FText(param_1 + 0x7e);
  FText::FText(param_1 + 0x81);
  FText::FText(param_1 + 0x84);
  FText::FText(param_1 + 0x87);
  FText::FText(param_1 + 0x8a);
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4bc) = 0;
  return param_1;
}



// FUNCTION 140ddd5f0 FUN_140ddd5f0 body=307 status=ok
// SIG undefined FUN_140ddd5f0(void)

undefined8 * FUN_140ddd5f0(undefined8 *param_1)

{
  FUN_140ddd210();
  *param_1 = &PTR_FUN_144574c48;
  param_1[6] = &PTR_FUN_144574f48;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x37) = 0x41700000;
  FText::FText(param_1 + 0x38);
  FText::FText(param_1 + 0x3b);
  FText::FText(param_1 + 0x3e);
  FText::FText(param_1 + 0x41);
  FText::FText(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = 0x3cf5c28f;
  *(undefined4 *)((longlong)param_1 + 0x244) = 10;
  *(undefined4 *)(param_1 + 0x49) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x80;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *param_1 = &PTR_FUN_144574f90;
  param_1[6] = &PTR_FUN_144575290;
  *(undefined4 *)(param_1 + 0x51) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  return param_1;
}



// FUNCTION 140ddd730 FUN_140ddd730 body=285 status=ok
// SIG undefined FUN_140ddd730(void)

undefined8 * FUN_140ddd730(undefined8 *param_1)

{
  FUN_140ddd210();
  *param_1 = &PTR_FUN_144574c48;
  param_1[6] = &PTR_FUN_144574f48;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x37) = 0x41700000;
  FText::FText(param_1 + 0x38);
  FText::FText(param_1 + 0x3b);
  FText::FText(param_1 + 0x3e);
  FText::FText(param_1 + 0x41);
  FText::FText(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = 0x3cf5c28f;
  *(undefined4 *)((longlong)param_1 + 0x244) = 10;
  *(undefined4 *)(param_1 + 0x49) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x80;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  return param_1;
}



// FUNCTION 140ddd850 FUN_140ddd850 body=664 status=ok
// SIG undefined FUN_140ddd850(void)

undefined8 * FUN_140ddd850(undefined8 *param_1)

{
  FUN_140ddd210();
  *param_1 = &PTR__scalar_deleting_destructor__1445752d8;
  param_1[6] = &PTR_FUN_1445755d8;
  FText::FText(param_1 + 0x32);
  FText::FText(param_1 + 0x35);
  FUN_1405e1750(param_1 + 0x38);
  FUN_1405e1750(param_1 + 0x40);
  FText::FText(param_1 + 0x48);
  FText::FText(param_1 + 0x4b);
  FText::FText(param_1 + 0x4e);
  FText::FText(param_1 + 0x51);
  FText::FText(param_1 + 0x54);
  FText::FText(param_1 + 0x57);
  FText::FText(param_1 + 0x5a);
  FText::FText(param_1 + 0x5d);
  FText::FText(param_1 + 0x60);
  FText::FText(param_1 + 99);
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x354)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x69,0);
  }
  if ((undefined2 *)param_1[0x69] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x69] = 0;
  }
  *(undefined4 *)(param_1 + 0x67) = 0;
  FUN_142d2e580(param_1 + 0x6b);
  *(undefined4 *)(param_1 + 0x82) = 5;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0x41700000;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x86) = 0x43480000;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x464) = 4;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  FText::FText(param_1 + 0x8f);
  FText::FText(param_1 + 0x92);
  FText::FText(param_1 + 0x95);
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4ec) = 0;
  FText::FText(param_1 + 0x9e);
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  *(undefined4 *)((longlong)param_1 + 0x574) = 0xffffffff;
  return param_1;
}



// FUNCTION 140dddaf0 FUN_140dddaf0 body=310 status=ok
// SIG undefined FUN_140dddaf0(void)

undefined8 * FUN_140dddaf0(undefined8 *param_1)

{
  FUN_140ddd210();
  *param_1 = &PTR_FUN_144575620;
  param_1[6] = &PTR_LAB_144575918;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x1b4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x35,0);
  }
  if ((undefined2 *)param_1[0x35] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x35] = 0;
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  FUN_142d2e580(param_1 + 0x37);
  *(undefined4 *)(param_1 + 0x4e) = 5;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x42700000;
  *(undefined4 *)(param_1 + 0x4f) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 4;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  FUN_140ddc720(param_1 + 0x52);
  FText::FText(param_1 + 0x5e);
  FText::FText(param_1 + 0x61);
  FText::FText(param_1 + 100);
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0xffffffff;
  return param_1;
}



// FUNCTION 140dddc30 FUN_140dddc30 body=454 status=ok
// SIG undefined FUN_140dddc30(void)

undefined8 * FUN_140dddc30(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_1417818c0();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR_FUN_1445739a0;
  *puVar1 = &PTR_FUN_144573c18;
  *(undefined4 *)(param_1 + 6) = 10;
  *(undefined8 *)((longlong)param_1 + 0x34) = 10;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 4;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 6;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_140ddc330(param_1 + 0x33);
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 1;
  return param_1;
}



// FUNCTION 140ddde00 FUN_140ddde00 body=123 status=ok
// SIG undefined FUN_140ddde00(void)

undefined8 * FUN_140ddde00(undefined8 *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  
  FUN_1430f8bd0();
  puVar1 = param_1 + 0x14;
  *param_1 = &PTR_FUN_1445729e0;
  *puVar1 = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    piVar2 = (int *)*puVar1;
    if (((piVar2 != (int *)0x0) && (*piVar2 == 1)) && (3 < piVar2[1])) {
      piVar2[2] = 0;
      *(undefined4 *)(param_1 + 0x16) = 0;
      return param_1;
    }
    FActorRepListRefView::RequestNewList(puVar1,4);
  }
  return param_1;
}



// FUNCTION 140ddde80 FUN_140ddde80 body=77 status=ok
// SIG undefined FUN_140ddde80(void)

undefined8 * FUN_140ddde80(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__144574260;
  FText::FText(param_1 + 6);
  FText::FText(param_1 + 9);
  *(undefined4 *)(param_1 + 0xc) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 100) = DAT_1468b5d88._4_4_;
  return param_1;
}



// FUNCTION 140ddded0 FUN_140ddded0 body=187 status=ok
// SIG undefined FUN_140ddded0(void)

void FUN_140ddded0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x18);
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)plVar7[-2];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar7 = plVar7 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140dddf90 FUN_140dddf90 body=224 status=ok
// SIG undefined FUN_140dddf90(void)

void FUN_140dddf90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x10);
    do {
      plVar4 = (longlong *)plVar7[3];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar4 = (longlong *)*plVar7;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar7 = plVar7 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140dde070 FUN_140dde070 body=194 status=ok
// SIG undefined FUN_140dde070(void)

void FUN_140dde070(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x38);
    do {
      if (plVar3[2] != 0) {
        FMemory::Free();
      }
      iVar4 = (int)plVar3[1];
      lVar1 = *plVar3;
      if (iVar4 != 0) {
        lVar1 = lVar1 + 8;
        do {
          FUN_140dddf90(lVar1);
          lVar1 = lVar1 + 0x18;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = *plVar3;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      if (plVar3[-4] != 0) {
        FMemory::Free();
      }
      if (plVar3[-6] != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140dde140 FUN_140dde140 body=123 status=ok
// SIG undefined FUN_140dde140(void)

void FUN_140dde140(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x20);
    do {
      if (plVar2[6] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xd;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140dde1c0 FUN_140dde1c0 body=173 status=ok
// SIG undefined FUN_140dde1c0(void)

void FUN_140dde1c0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x20);
    do {
      plVar4 = (longlong *)plVar7[3];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140dde270 FUN_140dde270 body=106 status=ok
// SIG undefined FUN_140dde270(void)

void FUN_140dde270(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  iVar4 = *(int *)(param_1 + 0x88);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1;
  }
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 8);
    do {
      if (*plVar3 != 0) {
        FActorRepList::Release();
      }
      plVar3 = plVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar1 = *(longlong *)(param_1 + 0x80);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dde2e0 ~FTTLNpcSetParamRow body=97 status=ok
// SIG undefined ~FTTLNpcSetParamRow(void)

void FTTLNpcSetParamRow::~FTTLNpcSetParamRow(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 3);
  plVar1 = (longlong *)param_1[2];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[2];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  *param_1 = IDelegateInstance::vftable;
  return;
}



// FUNCTION 140dde350 FUN_140dde350 body=268 status=ok
// SIG undefined FUN_140dde350(void)

void FUN_140dde350(longlong *param_1)

{
  longlong lVar1;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar1 = *(longlong *)(*local_38 + 8 + (longlong)local_1c * 0x18);
      if (lVar1 != 0) {
        TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(lVar1 + 0x80);
        TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(lVar1 + 0x68);
        TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(lVar1 + 0x50);
        if (*(longlong *)(lVar1 + 0x18) != 0) {
          FActorRepList::Release();
        }
        FMemory::operator_delete(lVar1,0x98);
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140dde460 FUN_140dde460 body=100 status=ok
// SIG undefined FUN_140dde460(void)

void FUN_140dde460(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dde4d0 FUN_140dde4d0 body=396 status=ok
// SIG undefined FUN_140dde4d0(void)

void FUN_140dde4d0(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_140dde591;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_140dde591:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>
                (*param_1 + ((longlong)iStack_1c * 5 + 1) * 8);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dde660 ~TSparseArray<TSetElement<TTuple<FString,UFGFactoryMaterialInstanceManager_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=200 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,UFGFactoryMaterialInstanceManager_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,UFGFactoryMaterialInstanceManager_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,UFGFactoryMaterialInstanceManager_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)((longlong)local_1c * 0x20 + *local_38) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dde730 ~TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_140dde7f1;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_140dde7f1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                ((longlong)iStack_1c * 0x30 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dde8c0 FUN_140dde8c0 body=108 status=ok
// SIG undefined FUN_140dde8c0(void)

void FUN_140dde8c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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



// FUNCTION 140dde930 FUN_140dde930 body=648 status=ok
// SIG undefined FUN_140dde930(void)

void FUN_140dde930(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong uVar9;
  
  uVar9 = 0;
  *param_1 = &PTR_FUN_144575be0;
  Online::GetIdentityInterface(&local_48,0);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x20))(local_48,param_1 + 0xd);
  }
  FUN_1404cf890(&local_58,0);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x88))(local_58,param_1 + 0xe);
  }
  puVar4 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_1404cf890(&local_68,*puVar4);
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x88))(local_68,param_1 + 0xf);
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 9);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 9);
    lVar7 = param_1[0x10];
    uVar10 = uVar9;
    if (0 < *(int *)(lVar5 + 0xbe8)) {
      do {
        plVar11 = (longlong *)(*(longlong *)(lVar5 + 0xbe0) + uVar10);
        if ((((int)plVar11[1] != 0) && (plVar6 = (longlong *)*plVar11, plVar6 != (longlong *)0x0))
           && (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res20),
              *plVar6 == lVar7)) {
          if (((int)plVar11[1] != 0) && (plVar6 = (longlong *)*plVar11, plVar6 != (longlong *)0x0))
          {
            (**(code **)(*plVar6 + 0x28))(plVar6,0);
            if (*plVar11 != 0) {
              lVar7 = FMemory::Realloc(*plVar11,0,0);
              *plVar11 = lVar7;
            }
            *(undefined4 *)(plVar11 + 1) = 0;
          }
          break;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar10 = uVar10 + 0x10;
      } while ((int)uVar8 < *(int *)(lVar5 + 0xbe8));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar5 + 0xbe0,0);
  }
  plVar11 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_60 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  plVar11 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  plVar11 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar11 = (longlong *)param_1[0xb];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar11 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 7);
  FUN_140bff520(param_1);
  return;
}



// FUNCTION 140ddebc0 FUN_140ddebc0 body=528 status=ok
// SIG undefined FUN_140ddebc0(void)

void FUN_140ddebc0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  longlong *local_18;
  longlong *local_10;
  
  *param_1 = &PTR_FUN_144575ca0;
  puVar6 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  Online::GetSessionInterface(&local_18,*puVar6);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x58))(local_18,param_1 + 0x18);
    (**(code **)(*local_18 + 0xd8))(local_18,param_1 + 0x19);
    (**(code **)(*local_18 + 0xf8))(local_18,param_1 + 0x1a);
    (**(code **)(*local_18 + 0x98))(local_18,param_1 + 0x1b);
    (**(code **)(*local_18 + 0x38))(local_18,param_1 + 0x1f);
    (**(code **)(*local_18 + 0x78))(local_18,param_1 + 0x20);
    (**(code **)(*local_18 + 0x98))(local_18,param_1 + 0x21);
    (**(code **)(*local_18 + 0xb8))(local_18,param_1 + 0x22);
  }
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x13);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x13);
    if ((*(int *)(lVar7 + 0xaa0) != 0) &&
       (plVar4 = *(longlong **)(lVar7 + 0xa98), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      if (*(longlong *)(lVar7 + 0xa98) != 0) {
        uVar8 = FMemory::Realloc(*(longlong *)(lVar7 + 0xa98),0,0);
        *(undefined8 *)(lVar7 + 0xa98) = uVar8;
      }
      *(undefined4 *)(lVar7 + 0xaa0) = 0;
    }
  }
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  FUN_140b9cb20(param_1 + 0x1d);
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0x15];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,UFGFactoryMaterialInstanceManager_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,UFGFactoryMaterialInstanceManager_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 9);
  FUN_140bff520(param_1);
  return;
}



// FUNCTION 140ddedd0 FUN_140ddedd0 body=134 status=ok
// SIG undefined FUN_140ddedd0(void)

void FUN_140ddedd0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x40);
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      FUN_140dddf90(lVar1);
      lVar1 = lVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x38);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140ddee60 FUN_140ddee60 body=227 status=ok
// SIG undefined FUN_140ddee60(void)

void FUN_140ddee60(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  FUN_140de7050(param_1 + 0x108,0);
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_140dde140(param_1 + 0x18);
  return;
}



// FUNCTION 140ddef50 FUN_140ddef50 body=129 status=ok
// SIG undefined FUN_140ddef50(void)

void FUN_140ddef50(undefined4 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
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
  FUN_1416f8340(param_1[1]);
  FUN_1416f8340(*param_1);
  return;
}



// FUNCTION 140ddefe0 FUN_140ddefe0 body=115 status=ok
// SIG undefined FUN_140ddefe0(void)

void FUN_140ddefe0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140ddf060 ~FConfigSection body=148 status=ok
// SIG undefined ~FConfigSection(void)

void FConfigSection::~FConfigSection(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 10,0);
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ddf100 FUN_140ddf100 body=398 status=ok
// SIG undefined FUN_140ddf100(void)

void FUN_140ddf100(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined8 local_18;
  longlong *local_10;
  
  *param_1 = &PTR_FUN_1445735a0;
  local_10 = (longlong *)0x0;
  if (param_1 + 7 != &local_18) {
    param_1[7] = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 8,&local_10);
    plVar6 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 8))();
    uVar5 = FName::FName(local_res8,L"WINDOWS",1);
    plVar6 = (longlong *)FUN_1419c6b80(uVar5);
    (**(code **)(*plVar6 + 0x28))(plVar6,param_1[9]);
    param_1[9] = 0;
  }
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  plVar6 = (longlong *)param_1[0xb];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  plVar6 = (longlong *)param_1[8];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144024f50;
  return;
}



// FUNCTION 140ddf290 FUN_140ddf290 body=3906 status=ok
// SIG undefined FUN_140ddf290(void)

void FUN_140ddf290(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0xb10) = 0;
  if (*(longlong *)(param_1 + 0xb08) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xac8);
  plVar4 = *(longlong **)(param_1 + 0xab8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0xaa0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0xa88);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0xa70);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0xa58);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0xa40);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0xa28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0xa10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x9f8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x9e0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x9c8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x9b0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x998);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x980);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x968);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x950);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x938);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x920);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x908);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x8f0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x8d8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x8c0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x8a8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x890);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x878);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x860);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x848);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x830);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x818);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x800);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x7e8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 2000);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x7b8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x7a0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x788);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x770);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x758);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x740);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x728);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x710);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x6f8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x6e0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x6c8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x6b0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x698);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x680);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x668);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x650);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x638);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x620);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x608);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x5f0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x5d8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x5c0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x5a0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x588);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x570);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x558);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x540);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x528);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x510);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x4f8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x4e0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x4c8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x4b0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x498);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x480);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x468);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x450);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x438);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x420);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x408);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x3f0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x3d8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x3c0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x3a8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x390);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x378);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x360);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x348);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x330);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x318);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x300);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x2e8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x2d0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x2b8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x2a0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x288);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x270);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 600);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x240);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x228);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x210);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x1f8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x1e0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x1c8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x1b0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x198);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x180);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x168);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x150);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x138);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x120);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x108);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0xf0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0xd8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0xc0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0xa8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x90);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x78);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x60);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x48);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1 + 0x30);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140de01e0 FUN_140de01e0 body=302 status=ok
// SIG undefined FUN_140de01e0(void)

void FUN_140de01e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  FUN_140dde4d0(param_1 + 0x108);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xf0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x80,0);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x30,0);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140de0310 FUN_140de0310 body=339 status=ok
// SIG undefined FUN_140de0310(void)

void FUN_140de0310(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x108);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0xb0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x70);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x58);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_1404bf750(param_1 + 0x30);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140de0470 FUN_140de0470 body=953 status=ok
// SIG undefined FUN_140de0470(void)

void FUN_140de0470(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x458);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x440);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x428);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x410);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x3f8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x3e0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x3c8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x3b0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x398);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  FUN_140dde1c0(param_1 + 0x380);
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 800);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x2c8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x270);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  FUN_140ddefe0(param_1 + 0x208);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x1f8);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x1e8);
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  FUN_140de0310(param_1);
  return;
}



// FUNCTION 140de0830 FUN_140de0830 body=377 status=ok
// SIG undefined FUN_140de0830(void)

void FUN_140de0830(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_140dde140(param_1 + 0x278);
  FUN_140dde070(param_1 + 600);
  plVar4 = *(longlong **)(param_1 + 0x228);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x210);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x1f8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x1e0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x1c8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x1a0);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 400);
  FUN_140de0310(param_1);
  return;
}



// FUNCTION 140de09b0 FUN_140de09b0 body=1066 status=ok
// SIG undefined FUN_140de09b0(void)

void FUN_140de09b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x550) != 0) {
    FMemory::Free();
  }
  FUN_1408708d0(param_1 + 0x540);
  if (*(longlong *)(param_1 + 0x530) != 0) {
    FMemory::Free();
  }
  FUN_140dde8c0(param_1 + 0x4f0);
  plVar4 = *(longlong **)(param_1 + 0x4b0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x498);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x480);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  FUN_140dde1c0(param_1 + 0x468);
  FUN_140ddded0(param_1 + 0x448);
  FUN_140dddf90(param_1 + 0x438);
  FUN_1406d8b70(param_1 + 0x358);
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 800);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x308);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x2f0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x2d8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x2c0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x2a8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x290);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x278);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x260);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x248);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x1b0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x198);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  FUN_140de0310(param_1);
  return;
}



// FUNCTION 140de0de0 FUN_140de0de0 body=314 status=ok
// SIG undefined FUN_140de0de0(void)

void FUN_140de0de0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1a0);
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  FUN_140dde460(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  FUN_140dde350(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x70);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140de0f20 FUN_140de0f20 body=164 status=ok
// SIG undefined FUN_140de0f20(void)

void FUN_140de0f20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x80);
    if (*(longlong **)(param_1 + 0x80) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x60);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x40);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140de0fd0 operator= body=123 status=ok
// SIG undefined operator=(void)

longlong TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=
                   (longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=();
    if (*(longlong *)(param_2 + 0x40) == 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x38),(void *)(param_2 + 0x38),4);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 140de1050 FUN_140de1050 body=372 status=ok
// SIG undefined FUN_140de1050(void)

longlong * FUN_140de1050(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  undefined1 local_res8 [8];
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
    ::Empty(param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
    iVar1 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    uStack_40 = 0;
    local_48._4_4_ = 0;
    if (iVar1 != 0) {
      puVar6 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar6 = puStack_20;
      }
      uVar2 = *puVar6;
      local_58 = 0;
      uStack_40 = 0;
      while (uVar2 == 0) {
        lVar4 = (longlong)local_58;
        uStack_40 = uStack_40 + 0x20;
        iVar5 = local_58 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar5;
        if (bVar3) goto LAB_140de112d;
        uVar2 = puVar6[lVar4 + 1];
      }
      uStack_54 = -uVar2 & uVar2;
      iVar5 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
      if (iVar1 < local_48._4_4_) {
LAB_140de112d:
        local_48._4_4_ = iVar1;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    iStack_10 = uStack_40;
    uStack_c = iStack_3c;
    iStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar5 = local_48._4_4_;
    iStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar3 = local_48._4_4_ < iVar1;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar5;
    if (bVar3) {
      do {
        FUN_140dd8800(param_1,local_res8,(longlong)iStack_3c * 0xb0 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 140de11d0 operator= body=465 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,0>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,0>,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140de130d;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_140de130d:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        FUN_140dd89b0(param_1,local_res8,(longlong)iStack_3c * 0x20 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 140de13b0 FUN_140de13b0 body=672 status=ok
// SIG undefined FUN_140de13b0(void)

longlong * FUN_140de13b0(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_140de148d;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_140de148d:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_140de1543;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_140de1543:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      FConfigSection::~FConfigSection((longlong)(int)uStack_3c * 0xb0 + 8 + *param_1);
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        _guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 140de1650 operator= body=117 status=ok
// SIG undefined operator=(void)

longlong *
TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_>::operator=
          (longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      lVar1 = *param_1 + 8;
      do {
        FUN_140dddf90(lVar1);
        lVar1 = lVar1 + 0x18;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_140dd8580(param_1,*param_2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  return param_1;
}



// FUNCTION 140de16d0 FUN_140de16d0 body=536 status=ok
// SIG undefined FUN_140de16d0(void)

undefined4 * FUN_140de16d0(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  plVar1 = (longlong *)(param_2 + 6);
  *param_1 = *param_2;
  plVar2 = (longlong *)(param_1 + 6);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  if (plVar2 != plVar1) {
    iVar5 = param_1[8];
    lVar3 = *plVar2;
    if (iVar5 != 0) {
      plVar4 = (longlong *)(lVar3 + 0x20);
      do {
        if (plVar4[6] != 0) {
          FMemory::Free();
        }
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        if (plVar4[-2] != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 0xd;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      lVar3 = *plVar2;
    }
    if (lVar3 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    *(undefined8 *)(param_2 + 8) = 0;
  }
  plVar1 = (longlong *)(param_2 + 10);
  plVar2 = (longlong *)(param_1 + 10);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    *(undefined8 *)(param_2 + 0xc) = 0;
  }
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=(param_1 + 0xe,param_2 + 0xe);
  param_1[0x22] = param_2[0x22];
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=
            (param_1 + 0x24,param_2 + 0x24);
  plVar1 = (longlong *)(param_2 + 0x38);
  plVar2 = (longlong *)(param_1 + 0x38);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_1[0x3a] = param_2[0x3a];
    param_1[0x3b] = param_2[0x3b];
    *(undefined8 *)(param_2 + 0x3a) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x3c);
  plVar2 = (longlong *)(param_1 + 0x3c);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_1[0x3e] = param_2[0x3e];
    param_1[0x3f] = param_2[0x3f];
    *(undefined8 *)(param_2 + 0x3e) = 0;
  }
  param_1[0x40] = param_2[0x40];
  if (param_1 + 0x42 != param_2 + 0x42) {
    FUN_140de13b0(param_1 + 0x42,param_2 + 0x42);
    if (*(longlong *)(param_2 + 0x52) == 0) {
      _guard_xfg_dispatch_icall_nop(param_1 + 0x50,param_2 + 0x50,4);
    }
    if (*(longlong *)(param_1 + 0x52) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x52) = *(undefined8 *)(param_2 + 0x52);
    *(undefined8 *)(param_2 + 0x52) = 0;
    param_1[0x54] = param_2[0x54];
    param_2[0x54] = 0;
  }
  return param_1;
}



// FUNCTION 140de18f0 FUN_140de18f0 body=504 status=ok
// SIG undefined FUN_140de18f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140de18f0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_50 = (longlong *)param_2[1];
  if (uStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_50 + 1) = (int)uStack_50[1] + 1;
    UNLOCK();
  }
  if (&local_58 != param_1) {
    local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uVar6 = *param_1;
    plVar7 = (longlong *)param_1[1];
    local_48 = (undefined4)local_58;
    uStack_44 = local_58._4_4_;
    uStack_40 = (undefined4)uStack_50;
    uStack_3c = uStack_50._4_4_;
    *(undefined4 *)param_1 = (undefined4)local_58;
    *(undefined4 *)((longlong)param_1 + 4) = local_58._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    local_58 = uVar6;
    uStack_50 = plVar7;
  }
  plVar7 = uStack_50;
  if (uStack_50 != (longlong *)0x0) {
    LOCK();
    plVar10 = uStack_50 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_50)(uStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*uStack_50 + 8))(uStack_50,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  plVar7 = param_1 + 4;
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  if (plVar7 != param_2 + 4) {
    plVar10 = (longlong *)*plVar7;
    for (iVar9 = *(int *)(param_1 + 5); iVar9 != 0; iVar9 = iVar9 + -1) {
      plVar4 = (longlong *)plVar10[7];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      if (plVar10[2] != 0) {
        FMemory::Free();
      }
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 8;
    }
    iVar9 = *(int *)(param_2 + 5);
    lVar8 = param_2[4];
    *(int *)(param_1 + 5) = iVar9;
    if ((iVar9 == 0) && (*(int *)((longlong)param_1 + 0x2c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(plVar7,iVar9);
      lVar11 = *plVar7;
      if (iVar9 != 0) {
        lVar8 = lVar8 + 0x10;
        do {
          FString::FString(lVar11,lVar8 + -0x10);
          FString::FString(lVar11 + 0x10,lVar8);
          *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(lVar8 + 0x10);
          *(undefined4 *)(lVar11 + 0x24) = *(undefined4 *)(lVar8 + 0x14);
          *(undefined4 *)(lVar11 + 0x28) = *(undefined4 *)(lVar8 + 0x18);
          *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(lVar8 + 0x20);
          lVar5 = *(longlong *)(lVar8 + 0x28);
          *(longlong *)(lVar11 + 0x38) = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          lVar11 = lVar11 + 0x40;
          lVar8 = lVar8 + 0x40;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 140de1af0 FUN_140de1af0 body=277 status=ok
// SIG undefined FUN_140de1af0(void)

void FUN_140de1af0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 uStackX_14;
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 *local_38 [3];
  
  lVar3 = param_2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*param_2 + 0x368))(param_2);
    lVar3 = param_2[0x1f];
    if (lVar3 != 0) goto LAB_140de1b27;
  }
  else {
LAB_140de1b27:
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140de1b5f;
  }
  lVar3 = 0;
LAB_140de1b5f:
  local_res8 = 0xffffffff;
  lVar2 = *param_1;
  uStackX_14 = CONCAT31(uStackX_14._1_3_,
                        (*(byte *)(lVar3 + 0x90) >> 2 & 2 | *(byte *)(lVar3 + 0x90) & 4) >> 1 |
                        (*(byte *)(lVar3 + 0x91) & 1) << 2 | (byte)uStackX_14 & 0xf8);
  local_res10 = param_3;
  FWeakObjectPtr::operator=(&local_res20,param_2);
  local_res8 = local_res20;
  local_38[0] = &local_res8;
  FUN_140dd8b50(lVar2 + 0x218,local_res18,local_38,0);
  *(ulonglong *)(*(longlong *)(lVar2 + 0x218) + 8 + (longlong)local_res18[0] * 0x18) =
       CONCAT44(uStackX_14,local_res10);
  return;
}



// FUNCTION 140de1c10 FUN_140de1c10 body=459 status=ok
// SIG undefined FUN_140de1c10(void)

void FUN_140de1c10(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  cVar2 = FWeakObjectPtr::IsValid();
  if (((cVar2 != '\0') && (lVar3 = FWeakObjectPtr::Get(param_1), lVar3 != 0)) &&
     (uVar14 = 0, uVar10 = uVar14, uVar13 = uVar14, 0 < *(int *)(lVar3 + 0x470))) {
    do {
      if ((*(longlong *)(uVar10 + *(longlong *)(lVar3 + 0x468)) == 0) &&
         (lVar6 = uVar10 + *(longlong *)(lVar3 + 0x468), *(longlong *)(lVar6 + 0x18) != 0)) {
        lVar11 = lVar6 + 8;
        uVar4 = FWeakObjectPtr::Get(lVar11);
        uVar9 = uVar14;
        if (uVar4 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar6 + 0x10)) && (*(longlong *)(lVar6 + 0x18) != 0)) {
            lVar5 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar11,lVar5);
            if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar6 + 0x10) = DAT_1464b56f4;
            }
            uVar4 = FWeakObjectPtr::Get(lVar11);
            if (uVar4 != 0) goto LAB_140de1d19;
          }
        }
        else {
LAB_140de1d19:
          lVar6 = FUN_14171bfe0();
          if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar7 = UCompositingElementInput::GetPrivateStaticClass();
            uVar8 = uVar4;
            do {
              uVar9 = uVar4;
              if (uVar8 == uVar7) break;
              uVar8 = *(ulonglong *)(uVar8 + 0x30);
              uVar9 = uVar14;
            } while (uVar8 != 0);
          }
        }
        lVar6 = NewObject<USaveGame>(lVar3,uVar9,0,0,0,0,0);
        if (lVar6 != 0) {
          *(longlong *)(uVar10 + *(longlong *)(lVar3 + 0x468)) = lVar6;
          FUN_1414d1a80(lVar6);
        }
      }
      uVar12 = (int)uVar13 + 1;
      uVar10 = uVar10 + 0x60;
      uVar13 = (ulonglong)uVar12;
    } while ((int)uVar12 < *(int *)(lVar3 + 0x470));
  }
  return;
}



// FUNCTION 140de1de0 FUN_140de1de0 body=809 status=ok
// SIG undefined FUN_140de1de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140de1de0(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  longlong *local_170 [2];
  longlong local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 *local_148 [2];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar13 = (longlong *)param_1[1];
  plVar12 = plVar13;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar13[1];
    bVar14 = iVar7 == 0;
    if (bVar14) {
      *(int *)(plVar13 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (plVar12 = (longlong *)0x0, !bVar14) {
      LOCK();
      bVar14 = iVar7 == (int)plVar13[1];
      if (bVar14) {
        *(int *)(plVar13 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar14) {
        plVar12 = plVar13;
        if ((plVar13 != (longlong *)0x0) && (lVar3 = *param_1, lVar3 != 0)) {
          puVar9 = (undefined8 *)
                   (**(code **)(*(longlong *)param_1[2] + 0x70))
                             ((longlong *)param_1[2],local_158,0,0);
          local_170[0] = (longlong *)puVar9[1];
          local_178 = *puVar9;
          if (local_170[0] != (longlong *)0x0) {
            LOCK();
            *(int *)(local_170[0] + 1) = (int)local_170[0][1] + 1;
            UNLOCK();
          }
          puVar9 = (undefined8 *)(lVar3 + 0x18);
          if (puVar9 != &local_178) {
            *puVar9 = local_178;
            local_178 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(lVar3 + 0x20,local_170);
          }
          plVar12 = local_170[0];
          if (local_170[0] != (longlong *)0x0) {
            LOCK();
            plVar10 = local_170[0] + 1;
            lVar4 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_170[0])(local_170[0]);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_170[0] + 8))(local_170[0],1);
              }
            }
          }
          if (local_150 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_150 + 1;
            lVar4 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_150)(local_150);
              LOCK();
              piVar1 = (int *)((longlong)local_150 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_150 + 8))(local_150,1);
              }
            }
          }
          uVar2 = *puVar9;
          if ((int)param_1[4] == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)param_1[3];
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,puVar11);
          uVar8 = (**(code **)(*(longlong *)param_1[2] + 0x40))
                            ((longlong *)param_1[2],local_50,uVar2);
          *(undefined4 *)(lVar3 + 0x28) = uVar8;
          plVar12 = plVar13;
          if (local_58 != 0) {
            FMemory::Free();
          }
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar13[1];
      bVar14 = iVar7 == 0;
      if (bVar14) {
        *(int *)(plVar13 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  lVar3 = *param_1;
  plVar13 = (longlong *)param_1[1];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
    UNLOCK();
  }
  local_118 = (longlong *)0x0;
  local_108 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_138);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_FUN_144575d30;
    puVar9[1] = lVar3;
    puVar9[2] = plVar13;
    plVar13 = (longlong *)0x0;
  }
  local_148[0] = &LAB_140de4d40;
  plVar10 = (longlong *)FUN_140596960(local_f8,0,0xff);
  lVar3 = *plVar10;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar3 + 0x10,local_148);
  *(undefined4 *)(lVar3 + 0x60) = 2;
  lVar3 = *plVar10;
  lVar6 = plVar10[2];
  lVar4 = plVar10[1];
  lVar5 = *(longlong *)(lVar3 + 0x78);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
  }
  local_160 = lVar5;
  FUN_1405ab110(lVar3,lVar4,(int)lVar6,1);
  if (local_108 != 0) {
    plVar10 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar10 = local_118;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    LOCK();
    piVar1 = (int *)(lVar5 + 0x48);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      FGraphEvent::Recycle(local_160);
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)(*plVar13 + 8))(plVar13,1);
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar12 + 1;
    lVar3 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return;
}



// FUNCTION 140de2110 FUN_140de2110 body=1113 status=ok
// SIG undefined FUN_140de2110(void)

void FUN_140de2110(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong in_stack_ffffffffffffff88;
  ulonglong in_stack_ffffffffffffff98;
  
  cVar2 = FWeakObjectPtr::IsValid();
  if (cVar2 == '\0') {
    return;
  }
  lVar3 = FWeakObjectPtr::Get(param_1);
  uVar14 = 0;
  uVar12 = uVar14;
  uVar7 = uVar14;
  if (0 < *(int *)(lVar3 + 0x288)) {
    do {
      lVar13 = *(longlong *)(lVar3 + 0x280);
      if ((*(longlong *)(uVar12 + lVar13) == 0) && (*(longlong *)(uVar12 + 0x18 + lVar13) != 0)) {
        lVar13 = lVar13 + 8 + uVar12;
        uVar4 = FWeakObjectPtr::Get(lVar13);
        uVar8 = uVar14;
        if (uVar4 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar13 + 8)) && (*(longlong *)(lVar13 + 0x10) != 0)) {
            lVar5 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar13,lVar5);
            if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar13 + 8) = DAT_1464b56f4;
            }
            uVar4 = FWeakObjectPtr::Get(lVar13);
            if (uVar4 != 0) goto LAB_140de221f;
          }
        }
        else {
LAB_140de221f:
          lVar13 = FUN_14171bfe0();
          if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar6 = UCompositingElementInput::GetPrivateStaticClass();
            uVar10 = uVar4;
            do {
              uVar8 = uVar4;
              if (uVar10 == uVar6) break;
              uVar10 = *(ulonglong *)(uVar10 + 0x30);
              uVar8 = uVar14;
            } while (uVar10 != 0);
          }
        }
        FUN_1417846f0(lVar3,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffffffffff00;
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000;
        lVar13 = FUN_1417985e0(uVar8,lVar3,0,0,in_stack_ffffffffffffff88,0,in_stack_ffffffffffffff98
                               ,0,0);
        if (lVar13 != 0) {
          *(longlong *)(uVar12 + *(longlong *)(lVar3 + 0x280)) = lVar13;
          FUN_1414d1a80(lVar13);
        }
      }
      uVar15 = (int)uVar7 + 1;
      uVar12 = uVar12 + 0x60;
      uVar7 = (ulonglong)uVar15;
    } while ((int)uVar15 < *(int *)(lVar3 + 0x288));
  }
  if (*(longlong *)(lVar3 + 0x290) != 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x2a8) == 0) {
    return;
  }
  lVar13 = lVar3 + 0x298;
  uVar7 = FWeakObjectPtr::Get(lVar13);
  uVar12 = uVar14;
  if (uVar7 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 0x2a0)) && (*(longlong *)(lVar3 + 0x2a8) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar13,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 0x2a0) = DAT_1464b56f4;
      }
      uVar7 = FWeakObjectPtr::Get(lVar13);
      if (uVar7 != 0) goto LAB_140de239f;
    }
  }
  else {
LAB_140de239f:
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = UCompositingElementInput::GetPrivateStaticClass();
      uVar8 = uVar7;
      do {
        uVar12 = uVar7;
        if (uVar8 == uVar4) break;
        uVar8 = *(ulonglong *)(uVar8 + 0x30);
        uVar12 = uVar14;
      } while (uVar8 != 0);
    }
  }
  FUN_1417846f0(lVar3,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar7 = 0;
  lVar5 = FUN_1417985e0(uVar12,lVar3,0,0,in_stack_ffffffffffffff88 & 0xffffffff00000000,0,
                        in_stack_ffffffffffffff98 & 0xffffffffffffff00,0,0);
  if (lVar5 == 0) {
    return;
  }
  uVar8 = FWeakObjectPtr::Get(lVar13);
  uVar12 = uVar14;
  if (uVar8 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar3 + 0x2a0)) || (*(longlong *)(lVar3 + 0x2a8) == 0))
    goto LAB_140de2515;
    lVar9 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar13,lVar9);
    if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0x2a0) = DAT_1464b56f4;
    }
    uVar8 = FWeakObjectPtr::Get(lVar13);
    if (uVar8 == 0) goto LAB_140de2515;
  }
  lVar13 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
      != lVar13 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar10 = UCompositingElementInput::GetPrivateStaticClass();
    uVar4 = uVar8;
    do {
      uVar12 = uVar8;
      if (uVar4 == uVar10) break;
      uVar4 = *(ulonglong *)(uVar4 + 0x30);
      uVar12 = uVar14;
    } while (uVar4 != 0);
  }
LAB_140de2515:
  uVar11 = NewObject<USaveGame>(lVar3,uVar12,0,0,0,uVar7 & 0xffffffffffffff00,0);
  *(undefined8 *)(lVar3 + 0x290) = uVar11;
  FUN_1414d1a80(lVar5);
  return;
}



// FUNCTION 140de2570 FUN_140de2570 body=137 status=ok
// SIG undefined FUN_140de2570(void)

void FUN_140de2570(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar6) {
      while( true ) {
        LOCK();
        bVar6 = iVar5 == (int)plVar3[1];
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar6) break;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar6 = iVar5 == 0;
        if (bVar6) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar6) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        if (*param_1 != 0) {
          *(undefined1 *)(*param_1 + 0x2c) = 1;
        }
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140de2600 FUN_140de2600 body=1114 status=ok
// SIG undefined FUN_140de2600(void)

void FUN_140de2600(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  
  cVar2 = FWeakObjectPtr::IsValid();
  if (cVar2 == '\0') {
    return;
  }
  lVar3 = FWeakObjectPtr::Get(param_1);
  uVar14 = 0;
  uVar12 = uVar14;
  uVar7 = uVar14;
  if (0 < *(int *)(lVar3 + 0x388)) {
    do {
      lVar13 = *(longlong *)(lVar3 + 0x380);
      if ((*(longlong *)(uVar12 + lVar13) == 0) && (*(longlong *)(uVar12 + 0x18 + lVar13) != 0)) {
        lVar13 = lVar13 + 8 + uVar12;
        uVar4 = FWeakObjectPtr::Get(lVar13);
        uVar11 = uVar14;
        if (uVar4 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar13 + 8)) && (*(longlong *)(lVar13 + 0x10) != 0)) {
            lVar5 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar13,lVar5);
            if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar13 + 8) = DAT_1464b56f4;
            }
            uVar4 = FWeakObjectPtr::Get(lVar13);
            if (uVar4 != 0) goto LAB_140de270f;
          }
        }
        else {
LAB_140de270f:
          lVar13 = FUN_14171bfe0();
          if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar6 = UCompositingElementInput::GetPrivateStaticClass();
            uVar10 = uVar4;
            do {
              uVar11 = uVar4;
              if (uVar10 == uVar6) break;
              uVar10 = *(ulonglong *)(uVar10 + 0x30);
              uVar11 = uVar14;
            } while (uVar10 != 0);
          }
        }
        FUN_1417846f0(lVar3,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        lVar13 = FUN_1417985e0(uVar11,lVar3,0,0,0,0,0,0,0);
        if (lVar13 != 0) {
          *(longlong *)(uVar12 + *(longlong *)(lVar3 + 0x380)) = lVar13;
          FUN_1414d1a80(lVar13);
        }
      }
      uVar15 = (int)uVar7 + 1;
      uVar12 = uVar12 + 0x60;
      uVar7 = (ulonglong)uVar15;
    } while ((int)uVar15 < *(int *)(lVar3 + 0x388));
  }
  lVar13 = lVar3 + 0x210;
  uVar7 = FWeakObjectPtr::Get(lVar13);
  uVar12 = uVar14;
  if (uVar7 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 0x218)) && (*(longlong *)(lVar3 + 0x220) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar13,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 0x218) = DAT_1464b56f4;
      }
      uVar7 = FWeakObjectPtr::Get(lVar13);
      if (uVar7 != 0) goto LAB_140de2865;
    }
  }
  else {
LAB_140de2865:
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = UCompositingElementInput::GetPrivateStaticClass();
      uVar11 = uVar7;
      do {
        uVar12 = uVar7;
        if (uVar11 == uVar4) break;
        uVar11 = *(ulonglong *)(uVar11 + 0x30);
        uVar12 = uVar14;
      } while (uVar11 != 0);
    }
  }
  FUN_1417846f0(lVar3,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar5 = FUN_1417985e0(uVar12,lVar3,0,0,0,0,0,0,0);
  if (lVar5 == 0) {
    return;
  }
  uVar7 = FWeakObjectPtr::Get(lVar13);
  uVar12 = uVar14;
  if (uVar7 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar3 + 0x218)) || (*(longlong *)(lVar3 + 0x220) == 0))
    goto LAB_140de29d8;
    lVar8 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar13,lVar8);
    if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0x218) = DAT_1464b56f4;
    }
    uVar7 = FWeakObjectPtr::Get(lVar13);
    if (uVar7 == 0) goto LAB_140de29d8;
  }
  lVar13 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
      != lVar13 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = UCompositingElementInput::GetPrivateStaticClass();
    uVar11 = uVar7;
    do {
      uVar12 = uVar7;
      if (uVar11 == uVar4) break;
      uVar11 = *(ulonglong *)(uVar11 + 0x30);
      uVar12 = uVar14;
    } while (uVar11 != 0);
  }
LAB_140de29d8:
  FUN_1417846f0(lVar3,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar9 = FUN_1417985e0(uVar12,lVar3,0,0,0,0,0,0,0);
  *(undefined8 *)(lVar3 + 0x208) = uVar9;
  FUN_1414d1a80(lVar5);
  return;
}



// FUNCTION 140de2a60 UpdateAllCanvasSafeZoneData body=188 status=ok
// SIG undefined UpdateAllCanvasSafeZoneData(void)

void UCanvas::UpdateAllCanvasSafeZoneData(void)

{
  undefined8 uVar1;
  longlong local_28;
  undefined8 local_20;
  int local_18;
  
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar1 = FUN_14146f1b0();
  FUN_1417a5560(uVar1,&local_28,1,0x10,0);
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)local_20 <= local_18)) {
        if (local_28 != 0) {
          FMemory::Free(local_28);
        }
        return;
      }
      FUN_140e02260(*(undefined8 *)(local_28 + (longlong)local_18 * 8));
      local_18 = local_18 + 1;
    } while ((int)local_20 <= local_18);
    do {
      if (*(longlong *)(local_28 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_20);
  } while( true );
}



// FUNCTION 140de2b20 FUN_140de2b20 body=427 status=ok
// SIG undefined FUN_140de2b20(void)

void FUN_140de2b20(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  if (1 < *(int *)(param_1[1] + 8)) {
    local_18[0] = 0;
    local_18[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],7,"locale",7,0x3f);
    (**(code **)(*param_3 + 8))(param_3,local_18,param_1[1]);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  local_18[0] = 0;
  local_18[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x14,"qos_server_location",0x14,0x3f);
  (**(code **)(*param_3 + 8))(param_3,local_18,*param_1 + 0x10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x10,"qos_server_ping",0x10,0x3f);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,*(undefined4 *)(*param_1 + 0x24));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x10,"qos_server_loss",0x10,0x3f);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,*(undefined4 *)(*param_1 + 0x28));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140de2cd0 FUN_140de2cd0 body=356 status=ok
// SIG undefined FUN_140de2cd0(void)

void FUN_140de2cd0(undefined8 param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  bool bVar2;
  wchar_t _C;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  wchar_t *_Str;
  longlong local_28;
  undefined8 local_20;
  int local_18;
  
  iVar4 = 1;
  if (0 < (int)param_2[1]) {
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_2;
    }
    _C = *_Str;
    if ((_C == L'-') || (pwVar6 = _Str, _C == L'+')) {
      _C = _Str[1];
      pwVar6 = _Str + 1;
    }
    bVar2 = false;
    while (_C != L'\0') {
      if (_C == L'.') {
        if (bVar2) goto LAB_140de2d70;
        bVar2 = true;
      }
      else {
        iVar3 = iswdigit(_C);
        if (iVar3 == 0) goto LAB_140de2d70;
      }
      pwVar1 = pwVar6 + 1;
      pwVar6 = pwVar6 + 1;
      _C = *pwVar1;
    }
    iVar4 = _wtoi(_Str);
  }
LAB_140de2d70:
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar5 = FUN_14310e320();
  FUN_1417a5560(uVar5,&local_28,1,0x10,0);
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)local_20 <= local_18)) {
        if (local_28 != 0) {
          FMemory::Free(local_28);
        }
        return;
      }
      FUN_14310d460(*(undefined8 *)(local_28 + (longlong)local_18 * 8),iVar4);
      local_18 = local_18 + 1;
    } while ((int)local_20 <= local_18);
    do {
      if (*(longlong *)(local_28 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_20);
  } while( true );
}



// FUNCTION 140de2ea0 FUN_140de2ea0 body=63 status=ok
// SIG undefined FUN_140de2ea0(void)

undefined8 * FUN_140de2ea0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47bd8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      cohtml::Property::operator_delete(param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140de2ee0 FUN_140de2ee0 body=52 status=ok
// SIG undefined FUN_140de2ee0(void)

undefined8 FUN_140de2ee0(undefined8 param_1,ulonglong param_2)

{
  FTTLNpcSetParamRow::~FTTLNpcSetParamRow();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140de2f20 FUN_140de2f20 body=112 status=ok
// SIG undefined FUN_140de2f20(void)

undefined8 * FUN_140de2f20(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140de2f90 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_de925132ffa90750e4d23da6f8948dfe>,0>::
_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140de3000 FUN_140de3000 body=131 status=ok
// SIG undefined FUN_140de3000(void)

longlong FUN_140de3000(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4b8);
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4f8);
  }
  return param_1;
}



// FUNCTION 140de3090 FUN_140de3090 body=52 status=ok
// SIG undefined FUN_140de3090(void)

undefined8 FUN_140de3090(undefined8 param_1,ulonglong param_2)

{
  FUN_140dde930();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 140de30d0 FUN_140de30d0 body=52 status=ok
// SIG undefined FUN_140de30d0(void)

undefined8 FUN_140de30d0(undefined8 param_1,ulonglong param_2)

{
  FUN_140ddebc0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 140de3110 FUN_140de3110 body=72 status=ok
// SIG undefined FUN_140de3110(void)

undefined8 * FUN_140de3110(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140de3160 FUN_140de3160 body=168 status=ok
// SIG undefined FUN_140de3160(void)

undefined8 * FUN_140de3160(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[4];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140de3210 FUN_140de3210 body=195 status=ok
// SIG undefined FUN_140de3210(void)

undefined8 * FUN_140de3210(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[7];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  *param_1 = &PTR__scalar_deleting_destructor__14452f9d0;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 140de32e0 FUN_140de32e0 body=52 status=ok
// SIG undefined FUN_140de32e0(void)

undefined8 FUN_140de32e0(undefined8 param_1,ulonglong param_2)

{
  FUN_140ddf100();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 140de3320 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FSearchBoxStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140ddf290();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb18);
  }
  return param_1;
}


