// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143533740 FUN_143533740 body=89 status=ok
// SIG undefined FUN_143533740(void)

undefined8 FUN_143533740(undefined8 param_1,ulonglong param_2)

{
  FUN_1435172f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1435337a0 FUN_1435337a0 body=89 status=ok
// SIG undefined FUN_1435337a0(void)

undefined8 FUN_1435337a0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435172f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 143533800 FUN_143533800 body=107 status=ok
// SIG undefined FUN_143533800(void)

longlong FUN_143533800(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435172f0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 143533870 FUN_143533870 body=122 status=ok
// SIG undefined FUN_143533870(void)

longlong FUN_143533870(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435172f0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1435338f0 FUN_1435338f0 body=89 status=ok
// SIG undefined FUN_1435338f0(void)

undefined8 FUN_1435338f0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435172f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 143533950 FUN_143533950 body=89 status=ok
// SIG undefined FUN_143533950(void)

undefined8 FUN_143533950(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b38e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1435339b0 FUN_1435339b0 body=136 status=ok
// SIG undefined FUN_1435339b0(void)

longlong FUN_1435339b0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x68);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x68) = uVar1 - 1;
    }
  }
  FUN_1435172f0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 143533a40 FUN_143533a40 body=122 status=ok
// SIG undefined FUN_143533a40(void)

longlong FUN_143533a40(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435172f0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 143533ac0 FUN_143533ac0 body=89 status=ok
// SIG undefined FUN_143533ac0(void)

undefined8 FUN_143533ac0(undefined8 param_1,ulonglong param_2)

{
  FUN_1435172f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 143533b20 FUN_143533b20 body=89 status=ok
// SIG undefined FUN_143533b20(void)

undefined8 FUN_143533b20(undefined8 param_1,ulonglong param_2)

{
  FUN_1435172f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 143533b80 FUN_143533b80 body=89 status=ok
// SIG undefined FUN_143533b80(void)

undefined8 FUN_143533b80(undefined8 param_1,ulonglong param_2)

{
  FUN_143533180();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 143533be0 FUN_143533be0 body=136 status=ok
// SIG undefined FUN_143533be0(void)

longlong FUN_143533be0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x68);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x68) = uVar1 - 1;
    }
  }
  FUN_1435172f0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 143533c70 FUN_143533c70 body=89 status=ok
// SIG undefined FUN_143533c70(void)

undefined8 FUN_143533c70(undefined8 param_1,ulonglong param_2)

{
  FUN_1435172f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 143533cd0 FUN_143533cd0 body=147 status=ok
// SIG undefined FUN_143533cd0(void)

longlong FUN_143533cd0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  
  if (9 < ((byte)*(uint *)(param_1 + 0x70) & 0x1f)) {
    if ((*(uint *)(param_1 + 0x70) >> 9 & 1) == 0) {
      FUN_1435920c0(param_1 + 0x70);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435172f0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 143533d70 FUN_143533d70 body=89 status=ok
// SIG undefined FUN_143533d70(void)

undefined8 FUN_143533d70(undefined8 param_1,ulonglong param_2)

{
  FUN_1435b9770();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 143533dd0 FUN_143533dd0 body=186 status=ok
// SIG undefined FUN_143533dd0(void)

void FUN_143533dd0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  puVar3 = *(ulonglong **)(param_1 + 0x118);
  puVar1 = (ulonglong *)(param_1 + 0x18);
  if (puVar3 == puVar1) {
    *(ulonglong **)(param_1 + 0x118) = puVar1;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  for (lVar4 = *(longlong *)(param_1 + 8); lVar4 != 0; lVar4 = lVar4 + -1) {
    uVar2 = *puVar3;
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar3 = uVar2 - 1;
      }
    }
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x118));
  *(ulonglong **)(param_1 + 0x118) = puVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 143533eb0 FUN_143533eb0 body=257 status=ok
// SIG undefined FUN_143533eb0(void)

void FUN_143533eb0(longlong *param_1,ulonglong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  void *_Src;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  uVar3 = param_1[1];
  uVar1 = uVar3 + 1;
  FUN_143534290(param_1,param_1,uVar1);
  if (uVar3 < uVar1) {
    puVar7 = (undefined4 *)(*param_1 + uVar3 * 0x28);
    for (lVar8 = uVar1 - uVar3; lVar8 != 0; lVar8 = lVar8 + -1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0;
        puVar7[2] = 0;
        *(undefined8 *)(puVar7 + 4) = 0;
      }
      puVar7 = puVar7 + 10;
    }
  }
  if (param_2 < param_1[1] - 1U) {
    _Src = (void *)(*param_1 + param_2 * 0x28);
    memmove((void *)((longlong)_Src + 0x28),_Src,(param_1[1] - param_2) * 0x28 - 0x28);
  }
  puVar7 = (undefined4 *)(*param_1 + param_2 * 0x28);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = *param_3;
    puVar7[2] = param_3[2];
    *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(param_3 + 4);
    uVar4 = param_3[7];
    uVar5 = param_3[8];
    uVar6 = param_3[9];
    puVar7[6] = param_3[6];
    puVar7[7] = uVar4;
    puVar7[8] = uVar5;
    puVar7[9] = uVar6;
    uVar2 = param_3[2];
    if (9 < ((byte)uVar2 & 0x1f)) {
      if ((uVar2 >> 9 & 1) == 0) {
        FUN_143592070();
      }
      else {
        FUN_143592140();
      }
    }
  }
  return;
}



// FUNCTION 143533fc0 FUN_143533fc0 body=555 status=ok
// SIG undefined FUN_143533fc0(void)

void FUN_143533fc0(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  
  uVar6 = param_1[1];
  if (uVar6 < 0x20) {
    param_1[1] = uVar6 + 1;
    FUN_1434e6830(param_1 + uVar6 + 3);
    return;
  }
  if (uVar6 == 0x20) {
    lVar4 = param_1[2];
    param_1[2] = lVar4 * 2;
    plVar1 = (longlong *)*param_1;
    if (plVar1 == (longlong *)0x0) {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,lVar4 << 4,0);
    }
    else {
      puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,lVar4 << 4,0);
    }
    lVar4 = param_1[2];
    uVar6 = 0;
    param_1[0x23] = (longlong)puVar3;
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 1;
    }
    if (param_1[1] != 0) {
      puVar7 = (ulonglong *)(param_1 + 3);
      do {
        puVar5 = (ulonglong *)((longlong)puVar7 + param_1[0x23] + (-0x18 - (longlong)param_1));
        if (puVar7 != puVar5) {
          uVar2 = *puVar7;
          if (uVar2 != 0) {
            *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
          }
          uVar2 = *puVar5;
          if (uVar2 != 0) {
            if ((uVar2 & 1) == 0) {
              if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
                *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *puVar5 = uVar2 - 1;
            }
          }
          *puVar5 = *puVar7;
        }
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 < (ulonglong)param_1[1]);
    }
  }
  else {
    uVar2 = param_1[2];
    if (uVar2 <= uVar6) {
      param_1[2] = uVar2 * 2;
      lVar4 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,param_1[0x23],uVar2 << 4);
      param_1[0x23] = lVar4;
      puVar3 = (undefined8 *)(lVar4 + param_1[1] * 8);
      for (lVar4 = param_1[2] - param_1[1]; lVar4 != 0; lVar4 = lVar4 + -1) {
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
        }
        puVar3 = puVar3 + 1;
      }
    }
  }
  puVar7 = (ulonglong *)(param_1[0x23] + param_1[1] * 8);
  param_1[1] = param_1[1] + 1;
  if (param_2 != puVar7) {
    uVar6 = *param_2;
    if (uVar6 != 0) {
      *(uint *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1U & 0x8fffffff;
    }
    uVar6 = *puVar7;
    if (uVar6 != 0) {
      if ((uVar6 & 1) != 0) {
        *puVar7 = uVar6 - 1;
        *puVar7 = *param_2;
        return;
      }
      if ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *puVar7 = *param_2;
  }
  return;
}



// FUNCTION 1435341f0 FUN_1435341f0 body=157 status=ok
// SIG undefined FUN_1435341f0(void)

void FUN_1435341f0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  void *_Dst;
  
  if (param_1[1] == 1) {
    FUN_143534290(param_1,param_1,0);
    return;
  }
  uVar1 = *(uint *)(*param_1 + 8 + param_2 * 0x28);
  if (9 < ((byte)uVar1 & 0x1f)) {
    if ((uVar1 >> 9 & 1) == 0) {
      FUN_1435920c0();
    }
    else {
      FUN_143592150();
    }
  }
  _Dst = (void *)(*param_1 + param_2 * 0x28);
  memmove(_Dst,(void *)((longlong)_Dst + 0x28),(param_1[1] - param_2) * 0x28 - 0x28);
  param_1[1] = param_1[1] + -1;
  return;
}



// FUNCTION 143534290 FUN_143534290 body=199 status=ok
// SIG undefined FUN_143534290(void)

void FUN_143534290(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  uint *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    if (lVar2 != 0) {
      puVar1 = (uint *)(*param_1 + -0x20 + (lVar2 + param_3) * 0x28);
      do {
        if (9 < ((byte)*puVar1 & 0x1f)) {
          if ((*puVar1 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar1);
          }
          else {
            FUN_143592150();
          }
        }
        puVar1 = puVar1 + -10;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_14337b580(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_14337b580(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 143534360 FUN_143534360 body=33 status=ok
// SIG undefined FUN_143534360(void)

undefined8 * FUN_143534360(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143534390 FUN_143534390 body=228 status=ok
// SIG undefined FUN_143534390(void)

undefined8 * FUN_143534390(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b2e770);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b2e770);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 143534480 FUN_143534480 body=33 status=ok
// SIG undefined FUN_143534480(void)

undefined8 * FUN_143534480(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 1435344e0 FUN_1435344e0 body=90 status=ok
// SIG undefined FUN_1435344e0(void)

void FUN_1435344e0(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  RefCountImpl *local_res8 [4];
  
  *param_2 = 0;
  plVar2 = (longlong *)
           Scaleform::GFx::StateBag::GetLogState
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) +
                       0x10) + 0x10,local_res8);
  lVar1 = *plVar2;
  if (local_res8[0] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_res8[0]);
  }
  if (lVar1 != 0) {
    FUN_143317390(lVar1 + 0x18,"ExternalInterface::marshallExceptions is not supported.");
  }
  return;
}



// FUNCTION 143534540 FUN_143534540 body=87 status=ok
// SIG undefined FUN_143534540(void)

void FUN_143534540(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  RefCountImpl *local_res8 [4];
  
  plVar2 = (longlong *)
           Scaleform::GFx::StateBag::GetLogState
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) +
                       0x10) + 0x10,local_res8);
  lVar1 = *plVar2;
  if (local_res8[0] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_res8[0]);
  }
  if (lVar1 != 0) {
    FUN_143317390(lVar1 + 0x18,"ExternalInterface::marshallExceptions is not supported.");
  }
  return;
}



// FUNCTION 1435345a0 FUN_1435345a0 body=151 status=ok
// SIG undefined FUN_1435345a0(void)

void FUN_1435345a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  RefCountImpl *local_res8;
  
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x10);
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  plVar3 = (longlong *)
           Scaleform::GFx::StateBag::GetLogState
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) +
                       0x10) + 0x10,&local_res8);
  lVar2 = *plVar3;
  if (local_res8 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_res8);
  }
  if (lVar2 != 0) {
    FUN_143317390(lVar2 + 0x18,"ExternalInterface::objectID is not supported.");
  }
  return;
}



// FUNCTION 143534670 FUN_143534670 body=575 status=ok
// SIG undefined FUN_143534670(void)

void FUN_143534670(longlong param_1,uint *param_2,int param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined8 *local_238;
  uint local_230 [2];
  undefined8 local_228;
  undefined8 local_208 [60];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  lVar3 = *(longlong *)(lVar2 + 0x300);
  lVar4 = *(longlong *)(lVar3 + 0x10);
  if (*(longlong *)(lVar4 + 0x248) == 0) {
    (**(code **)(**(longlong **)(lVar2 + 0x38) + 8))
              (*(longlong **)(lVar2 + 0x38),2,
               "Warning: ExternalInterface.call - handler is not installed.\n");
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) != 0) {
        FUN_143592150();
        *param_2 = *param_2 & 0xffffffe0;
        return;
      }
      FUN_1435920c0(param_2);
    }
    *param_2 = *param_2 & 0xffffffe0;
    return;
  }
  uVar8 = 0;
  local_238 = (undefined8 *)**(longlong **)(lVar2 + 0x10);
  *(int *)(local_238 + 3) = *(int *)(local_238 + 3) + 1;
  if (param_3 == 0) {
LAB_14353471f:
    puVar6 = local_208;
  }
  else {
    pcVar5 = (char *)FUN_1435911f0(param_4,local_res8,&local_238);
    if (*pcVar5 == '\0') goto LAB_143534837;
    uVar8 = param_3 - 1;
    if (uVar8 < 0xb) goto LAB_14353471f;
    puVar6 = (undefined8 *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,(ulonglong)uVar8 * 0x30,0);
  }
  if (uVar8 != 0) {
    uVar11 = (ulonglong)uVar8;
    puVar7 = puVar6;
    do {
      param_4 = param_4 + 0x20;
      if (puVar7 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        *puVar7 = 0xffffffffffffffff;
        puVar7[2] = 0;
        *(undefined4 *)(puVar7 + 3) = 0;
        puVar7[1] = 0xffffffffffffffff;
        puVar9 = puVar7;
      }
      FUN_1435ee8b0(lVar3,param_4,puVar9);
      puVar7 = puVar7 + 6;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar10 = 0;
  local_230[0] = 0;
  local_228 = 0;
  FUN_143590140(lVar3 + 0x98,local_230);
  if (9 < ((byte)local_230[0] & 0x1f)) {
    if ((local_230[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_230);
    }
    else {
      FUN_143592150();
    }
  }
  if (*(int *)(local_238 + 4) != 0) {
    uVar10 = *local_238;
  }
  (**(code **)(**(longlong **)(lVar4 + 0x248) + 8))
            (*(longlong **)(lVar4 + 0x248),lVar4,uVar10,puVar6,uVar8);
  FUN_143590140(param_2,lVar3 + 0x98);
  if (uVar8 != 0) {
    puVar7 = puVar6 + 2;
    uVar11 = (ulonglong)uVar8;
    do {
      if ((*(uint *)(puVar7 + 1) >> 6 & 1) != 0) {
        (**(code **)(*(longlong *)*puVar7 + 0x10))((longlong *)*puVar7,puVar7 + -2,puVar7[2]);
        *puVar7 = 0;
      }
      *(undefined4 *)(puVar7 + 1) = 0;
      puVar7 = puVar7 + 6;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (10 < uVar8) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar6);
  }
LAB_143534837:
  piVar1 = (int *)(local_238 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435348b0 FUN_1435348b0 body=144 status=ok
// SIG undefined FUN_1435348b0(void)

void FUN_1435348b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b77740)((longlong)DAT_146b77748 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143534940 FUN_143534940 body=144 status=ok
// SIG undefined FUN_143534940(void)

void FUN_143534940(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b77750)((longlong)DAT_146b77758 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143534a00 FUN_143534a00 body=112 status=ok
// SIG undefined FUN_143534a00(void)

void FUN_143534a00(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b77770)(DAT_146b77778 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143534a70 FUN_143534a70 body=142 status=ok
// SIG undefined FUN_143534a70(void)

void FUN_143534a70(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined4 *local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18 = *(longlong *)(param_6 + 4);
    *(int *)(local_18 + 0x18) = *(int *)(local_18 + 0x18) + 1;
  }
  local_10 = param_6 + 8;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b77780)(DAT_146b77788 + lVar2,param_4,&local_18,local_10,param_2);
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143534b20 FUN_143534b20 body=175 status=ok
// SIG undefined FUN_143534b20(void)

void FUN_143534b20(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78000)((longlong)DAT_146b78008 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143534bd0 FUN_143534bd0 body=144 status=ok
// SIG undefined FUN_143534bd0(void)

void FUN_143534bd0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b77860)((longlong)DAT_146b77868 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143534c90 FUN_143534c90 body=148 status=ok
// SIG undefined FUN_143534c90(void)

void FUN_143534c90(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77c80)(DAT_146b77c88 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143534d30 FUN_143534d30 body=41 status=ok
// SIG undefined FUN_143534d30(void)

undefined8 * FUN_143534d30(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b31118;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 143534d90 FUN_143534d90 body=33 status=ok
// SIG undefined FUN_143534d90(void)

undefined8 * FUN_143534d90(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b311d8;
  return param_1;
}



// FUNCTION 143534dc0 FUN_143534dc0 body=172 status=ok
// SIG undefined FUN_143534dc0(void)

void FUN_143534dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b31118;
    puVar1[8] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143534e80 FUN_143534e80 body=33 status=ok
// SIG undefined FUN_143534e80(void)

undefined8 * FUN_143534e80(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143534eb0 FUN_143534eb0 body=214 status=ok
// SIG undefined FUN_143534eb0(void)

undefined8 * FUN_143534eb0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b30770);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b30770);
    *puVar2 = &PTR_FUN_145b311d8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143534f90 FUN_143534f90 body=116 status=ok
// SIG undefined FUN_143534f90(void)

undefined8 * FUN_143534f90(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  uVar2 = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_145b31250;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50,0);
  if (lVar1 != 0) {
    uVar2 = FUN_143496140(lVar1,0x40800000,0x40800000,1);
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  param_1[8] = uVar2;
  return param_1;
}



// FUNCTION 143535010 FUN_143535010 body=1135 status=ok
// SIG undefined FUN_143535010(void)

void FUN_143535010(longlong *param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 local_res8 [2];
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  uint local_d8 [2];
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  uint local_90 [2];
  undefined8 local_88;
  undefined1 local_70 [8];
  longlong local_68;
  
  lVar9 = 0;
  local_res10[0] = 0;
  local_c8 = 0x4010000000000000;
  local_c0 = 0x4046800000000000;
  local_b8 = 1.0;
  local_b0 = 1.0;
  local_a8 = 4.0;
  local_a0 = 4.0;
  local_98 = 1.0;
  local_res8[0] = 0xffffff;
  local_res20[0] = 0;
  local_d8[0] = 1;
  local_d0 = (longlong *)
             FUN_143360950(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218),"inner"
                           ,5,0);
  cVar4 = '\0';
  *(int *)(local_d0 + 3) = (int)local_d0[3] + 1;
  if (0xc < param_2) {
    uVar3 = *(undefined8 *)(param_1[5] + 0x98);
    uVar5 = FUN_1435c8e40(local_70,0x427,uVar3);
    FUN_1435cbef0(uVar3,uVar5);
    piVar1 = (int *)(local_68 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    goto LAB_14353545e;
  }
  if ((((((param_2 != 0) &&
         (pcVar6 = (char *)FUN_143590af0(param_3,local_res10,&local_c8), *pcVar6 == '\0')) ||
        ((1 < param_2 &&
         (pcVar6 = (char *)FUN_143590af0(param_3 + 0x20,local_res10,&local_c0), *pcVar6 == '\0'))))
       || ((2 < param_2 &&
           (pcVar6 = (char *)FUN_143590eb0(param_3 + 0x40,local_res10,local_res8), *pcVar6 == '\0'))
          )) || (((3 < param_2 &&
                  (pcVar6 = (char *)FUN_143590af0(param_3 + 0x60,local_res10,&local_b8),
                  *pcVar6 == '\0')) ||
                 ((((4 < param_2 &&
                    (pcVar6 = (char *)FUN_143590eb0(param_3 + 0x80,local_res10,local_res20),
                    *pcVar6 == '\0')) ||
                   ((5 < param_2 &&
                    (pcVar6 = (char *)FUN_143590af0(param_3 + 0xa0,local_res10,&local_b0),
                    *pcVar6 == '\0')))) ||
                  ((6 < param_2 &&
                   (pcVar6 = (char *)FUN_143590af0(param_3 + 0xc0,local_res10,&local_a8),
                   *pcVar6 == '\0')))))))) ||
     (((7 < param_2 &&
       (pcVar6 = (char *)FUN_143590af0(param_3 + 0xe0,local_res10,&local_a0), *pcVar6 == '\0')) ||
      ((((8 < param_2 &&
         (pcVar6 = (char *)FUN_143590af0(param_3 + 0x100,local_res10,&local_98), *pcVar6 == '\0'))
        || ((9 < param_2 &&
            (pcVar6 = (char *)FUN_143590b70(param_3 + 0x120,local_res10,local_d8), *pcVar6 == '\0'))
           )) || ((10 < param_2 &&
                  (pcVar6 = (char *)FUN_1435911f0(param_3 + 0x140,local_res10,&local_d0),
                  *pcVar6 == '\0')))))))) goto LAB_14353545e;
  if (0xb < param_2) {
    cVar4 = FUN_1435909c0(param_3 + 0x160);
  }
  local_90[0] = 0;
  local_88 = 0;
  FUN_1435356d0(param_1,local_90,local_c8);
  FUN_1435354e0(param_1,local_90,local_c0);
  uVar14 = local_res8[0];
  lVar7 = (**(code **)(*param_1 + 0xc0))(param_1);
  *(undefined4 *)(lVar7 + 0x38) = uVar14;
  *(undefined1 *)(lVar7 + 0x3b) = *(undefined1 *)(lVar7 + 0x3b);
  dVar12 = local_b8 * 255.0;
  lVar7 = (**(code **)(*param_1 + 0xc0))(param_1);
  uVar14 = local_res20[0];
  *(char *)(lVar7 + 0x3b) = (char)(longlong)dVar12;
  lVar7 = (**(code **)(*param_1 + 0xc0))(param_1);
  *(undefined4 *)(lVar7 + 0x34) = uVar14;
  *(undefined1 *)(lVar7 + 0x37) = *(undefined1 *)(lVar7 + 0x37);
  dVar12 = local_b0 * 255.0;
  lVar7 = (**(code **)(*param_1 + 0xc0))(param_1);
  uVar14 = 0;
  uVar15 = 0;
  *(char *)(lVar7 + 0x37) = (char)(longlong)dVar12;
  dVar12 = 0.0;
  if (0.0 <= local_a8) {
    dVar12 = local_a8;
  }
  lVar7 = (**(code **)(*param_1 + 0xc0))(param_1);
  *(float *)(lVar7 + 0x20) = (float)dVar12 * 20.0;
  if (0.0 <= local_a0) {
    uVar14 = SUB84(local_a0,0);
    uVar15 = (undefined4)((ulonglong)local_a0 >> 0x20);
  }
  lVar7 = (**(code **)(*param_1 + 0xc0))(param_1);
  *(float *)(lVar7 + 0x24) = (float)(double)CONCAT44(uVar15,uVar14) * 20.0;
  fVar13 = (float)local_98;
  lVar7 = (**(code **)(*param_1 + 0xc0))(param_1);
  *(float *)(lVar7 + 0x30) = fVar13;
  uVar11 = 0xf;
  if (local_d8[0] < 0xf) {
    uVar11 = local_d8[0];
  }
  lVar7 = (**(code **)(*param_1 + 0xc0))(param_1);
  *(uint *)(lVar7 + 0x1c) = uVar11;
  lVar8 = (**(code **)(*param_1 + 0xc0))(param_1);
  *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) & 0xffffff5f;
  lVar7 = lVar9;
  do {
    lVar10 = lVar7 + 1;
    if (*(char *)(*local_d0 + lVar7) != "inner"[lVar7]) goto LAB_143535401;
    lVar7 = lVar10;
  } while (lVar10 != 6);
  uVar11 = *(uint *)(lVar8 + 0x18) | 0x20;
LAB_14353541b:
  *(uint *)(lVar8 + 0x18) = uVar11;
  goto LAB_14353541f;
  while (lVar9 = lVar7, lVar7 != 6) {
LAB_143535401:
    lVar7 = lVar9 + 1;
    if (*(char *)(*local_d0 + lVar9) != "outer"[lVar9]) {
      uVar11 = *(uint *)(lVar8 + 0x18) | 0x80;
      goto LAB_14353541b;
    }
  }
LAB_14353541f:
  lVar9 = (**(code **)(*param_1 + 0xc0))();
  *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) & 0xffffffef;
  *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) | -(uint)(cVar4 != '\0') & 0x10;
  if (9 < ((byte)local_90[0] & 0x1f)) {
    if ((local_90[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_90);
    }
    else {
      FUN_143592150();
    }
  }
LAB_14353545e:
  plVar2 = local_d0 + 3;
  *(int *)plVar2 = (int)*plVar2 + -1;
  if ((int)*plVar2 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143535490 FUN_143535490 body=60 status=ok
// SIG undefined FUN_143535490(void)

void FUN_143535490(longlong *param_1,double *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *param_2 = ((double)*(float *)(lVar1 + 0x4c) * 180.0) / 3.141592653589793 - 180.0;
  return;
}



// FUNCTION 1435354e0 FUN_1435354e0 body=168 status=ok
// SIG undefined FUN_1435354e0(void)

void FUN_1435354e0(longlong *param_1,undefined8 param_2,double param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = (**(code **)(*param_1 + 0xc0))();
  fVar1 = *(float *)(lVar2 + 0x48);
  fVar4 = ((float)(param_3 + 180.0) * 3.1415927) / 180.0;
  lVar2 = (**(code **)(*param_1 + 0xc0))(param_1);
  *(float *)(lVar2 + 0x4c) = fVar4;
  *(float *)(lVar2 + 0x48) = fVar1;
  fVar3 = _guard_xfg_dispatch_icall_nop(fVar4);
  fVar4 = _guard_xfg_dispatch_icall_nop(fVar4);
  *(float *)(lVar2 + 0x28) = fVar3 * fVar1;
  *(float *)(lVar2 + 0x2c) = fVar4 * fVar1;
  return;
}



// FUNCTION 143535590 FUN_143535590 body=44 status=ok
// SIG undefined FUN_143535590(void)

void FUN_143535590(longlong *param_1,double *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *param_2 = (double)(*(float *)(lVar1 + 0x20) * 0.05);
  return;
}



// FUNCTION 1435355d0 FUN_1435355d0 body=52 status=ok
// SIG undefined FUN_1435355d0(void)

void FUN_1435355d0(longlong *param_1,undefined8 param_2,double param_3)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = 0.0;
  if (0.0 <= param_3) {
    dVar2 = param_3;
  }
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *(float *)(lVar1 + 0x20) = (float)dVar2 * 20.0;
  return;
}



// FUNCTION 143535610 FUN_143535610 body=44 status=ok
// SIG undefined FUN_143535610(void)

void FUN_143535610(longlong *param_1,double *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *param_2 = (double)(*(float *)(lVar1 + 0x24) * 0.05);
  return;
}



// FUNCTION 143535650 FUN_143535650 body=52 status=ok
// SIG undefined FUN_143535650(void)

void FUN_143535650(longlong *param_1,undefined8 param_2,double param_3)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = 0.0;
  if (0.0 <= param_3) {
    dVar2 = param_3;
  }
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *(float *)(lVar1 + 0x24) = (float)dVar2 * 20.0;
  return;
}



// FUNCTION 143535690 FUN_143535690 body=44 status=ok
// SIG undefined FUN_143535690(void)

void FUN_143535690(longlong *param_1,double *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *param_2 = (double)(*(float *)(lVar1 + 0x48) * 0.05);
  return;
}



// FUNCTION 1435356d0 FUN_1435356d0 body=147 status=ok
// SIG undefined FUN_1435356d0(void)

void FUN_1435356d0(longlong *param_1,undefined8 param_2,double param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  fVar3 = *(float *)(lVar1 + 0x4c);
  fVar4 = (float)param_3 * 20.0;
  lVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
  *(float *)(lVar1 + 0x4c) = fVar3;
  *(float *)(lVar1 + 0x48) = fVar4;
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar3);
  fVar3 = _guard_xfg_dispatch_icall_nop(fVar3);
  *(float *)(lVar1 + 0x28) = fVar2 * fVar4;
  *(float *)(lVar1 + 0x2c) = fVar3 * fVar4;
  return;
}



// FUNCTION 143535770 FUN_143535770 body=48 status=ok
// SIG undefined FUN_143535770(void)

void FUN_143535770(longlong *param_1,double *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *param_2 = (double)*(byte *)(lVar1 + 0x3b) / 255.0;
  return;
}



// FUNCTION 1435357b0 FUN_1435357b0 body=37 status=ok
// SIG undefined FUN_1435357b0(void)

void FUN_1435357b0(longlong *param_1,undefined8 param_2,double param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *(char *)(lVar1 + 0x3b) = (char)(longlong)(param_3 * 255.0);
  return;
}



// FUNCTION 1435357e0 FUN_1435357e0 body=35 status=ok
// SIG undefined FUN_1435357e0(void)

void FUN_1435357e0(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *param_2 = *(uint *)(lVar1 + 0x38) & 0xffffff;
  return;
}



// FUNCTION 143535810 FUN_143535810 body=34 status=ok
// SIG undefined FUN_143535810(void)

void FUN_143535810(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *(undefined4 *)(lVar1 + 0x38) = param_3;
  *(undefined1 *)(lVar1 + 0x3b) = *(undefined1 *)(lVar1 + 0x3b);
  return;
}



// FUNCTION 143535840 FUN_143535840 body=35 status=ok
// SIG undefined FUN_143535840(void)

void FUN_143535840(longlong *param_1,byte *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *param_2 = (byte)(*(uint *)(lVar1 + 0x18) >> 4) & 1;
  return;
}



// FUNCTION 143535870 FUN_143535870 body=39 status=ok
// SIG undefined FUN_143535870(void)

void FUN_143535870(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) & 0xffffffef;
  *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | -(uint)(param_3 != '\0') & 0x10;
  return;
}



// FUNCTION 1435358a0 FUN_1435358a0 body=29 status=ok
// SIG undefined FUN_1435358a0(void)

void FUN_1435358a0(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *param_2 = *(undefined4 *)(lVar1 + 0x1c);
  return;
}



// FUNCTION 1435358d0 FUN_1435358d0 body=36 status=ok
// SIG undefined FUN_1435358d0(void)

void FUN_1435358d0(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0xf;
  if (param_3 < 0xf) {
    uVar2 = param_3;
  }
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *(uint *)(lVar1 + 0x1c) = uVar2;
  return;
}



// FUNCTION 143535900 FUN_143535900 body=48 status=ok
// SIG undefined FUN_143535900(void)

void FUN_143535900(longlong *param_1,double *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *param_2 = (double)*(byte *)(lVar1 + 0x37) / 255.0;
  return;
}



// FUNCTION 143535940 FUN_143535940 body=37 status=ok
// SIG undefined FUN_143535940(void)

void FUN_143535940(longlong *param_1,undefined8 param_2,double param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *(char *)(lVar1 + 0x37) = (char)(longlong)(param_3 * 255.0);
  return;
}



// FUNCTION 143535970 FUN_143535970 body=35 status=ok
// SIG undefined FUN_143535970(void)

void FUN_143535970(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *param_2 = *(uint *)(lVar1 + 0x34) & 0xffffff;
  return;
}



// FUNCTION 1435359a0 FUN_1435359a0 body=34 status=ok
// SIG undefined FUN_1435359a0(void)

void FUN_1435359a0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *(undefined4 *)(lVar1 + 0x34) = param_3;
  *(undefined1 *)(lVar1 + 0x37) = *(undefined1 *)(lVar1 + 0x37);
  return;
}



// FUNCTION 1435359d0 FUN_1435359d0 body=36 status=ok
// SIG undefined FUN_1435359d0(void)

void FUN_1435359d0(longlong *param_1,double *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *param_2 = (double)*(float *)(lVar1 + 0x30);
  return;
}



// FUNCTION 143535a00 FUN_143535a00 body=40 status=ok
// SIG undefined FUN_143535a00(void)

void FUN_143535a00(longlong *param_1,undefined8 param_2,double param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *(float *)(lVar1 + 0x30) = (float)param_3;
  return;
}



// FUNCTION 143535a30 FUN_143535a30 body=77 status=ok
// SIG undefined FUN_143535a30(void)

void FUN_143535a30(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char *pcVar2;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  if ((char)*(uint *)(lVar1 + 0x18) < '\0') {
    FUN_1433601c0(param_2,&DAT_145b26694);
    return;
  }
  pcVar2 = "inner";
  if ((*(uint *)(lVar1 + 0x18) & 0x20) == 0) {
    pcVar2 = "outer";
  }
  FUN_1433601c0(param_2,pcVar2);
  return;
}



// FUNCTION 143535a90 FUN_143535a90 body=137 status=ok
// SIG undefined FUN_143535a90(void)

void FUN_143535a90(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) & 0xffffff5f;
  lVar2 = 0;
  lVar3 = lVar2;
  do {
    lVar4 = lVar3 + 1;
    if (*(char *)(*(longlong *)*param_3 + lVar3) != "inner"[lVar3]) {
      do {
        lVar3 = lVar2 + 1;
        if (*(char *)(*(longlong *)*param_3 + lVar2) != "outer"[lVar2]) {
          *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | 0x80;
          return;
        }
        lVar2 = lVar3;
      } while (lVar3 != 6);
      return;
    }
    lVar3 = lVar4;
  } while (lVar4 != 6);
  *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | 0x20;
  return;
}



// FUNCTION 143535b20 FUN_143535b20 body=1318 status=ok
// SIG undefined FUN_143535b20(void)

void FUN_143535b20(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  char *pcVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  longlong *local_res8;
  double local_res10;
  double local_res18;
  double local_res20;
  uint local_e8 [2];
  undefined8 local_e0;
  
  lVar9 = param_1[5];
  lVar7 = FUN_1435b5bc0(lVar9);
  plVar12 = (longlong *)0x0;
  plVar8 = plVar12;
  if (lVar7 != 0) {
    plVar8 = (longlong *)FUN_143534f90(lVar7,lVar9);
  }
  lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  local_res8 = (longlong *)(lVar9 + 0x48);
  piVar1 = (int *)(lVar9 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar9 = (**(code **)(*param_1 + 0xc0))(param_1);
  fVar15 = *(float *)(lVar9 + 0x48);
  lVar9 = (**(code **)(*param_1 + 0xc0))(param_1);
  fVar17 = *(float *)(lVar9 + 0x4c);
  lVar9 = (**(code **)(*param_1 + 0xc0))(param_1);
  uVar14 = *(uint *)(lVar9 + 0x38);
  lVar9 = (**(code **)(*param_1 + 0xc0))(param_1);
  bVar2 = *(byte *)(lVar9 + 0x3b);
  lVar9 = (**(code **)(*param_1 + 0xc0))(param_1);
  uVar4 = *(uint *)(lVar9 + 0x34);
  lVar9 = (**(code **)(*param_1 + 0xc0))(param_1);
  bVar3 = *(byte *)(lVar9 + 0x37);
  lVar9 = (**(code **)(*param_1 + 0xc0))(param_1);
  local_res10 = (double)(*(float *)(lVar9 + 0x20) * 0.05);
  lVar9 = (**(code **)(*param_1 + 0xc0))(param_1);
  local_res18 = (double)(*(float *)(lVar9 + 0x24) * 0.05);
  lVar9 = (**(code **)(*param_1 + 0xc0))(param_1);
  local_res20 = (double)*(float *)(lVar9 + 0x30);
  lVar9 = (**(code **)(*param_1 + 0xc0))(param_1);
  uVar5 = *(uint *)(lVar9 + 0x1c);
  lVar9 = (**(code **)(*param_1 + 0xc0))(param_1);
  pcVar11 = "inner";
  if ((char)*(uint *)(lVar9 + 0x18) < '\0') {
    pcVar11 = "full";
  }
  else if ((*(uint *)(lVar9 + 0x18) & 0x20) == 0) {
    pcVar11 = "outer";
  }
  FUN_1433601c0(&local_res8,pcVar11);
  lVar9 = (**(code **)(*param_1 + 0xc0))(param_1);
  uVar6 = *(uint *)(lVar9 + 0x18);
  local_e8[0] = 0;
  local_e0 = 0;
  lVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  fVar16 = *(float *)(lVar9 + 0x4c);
  fVar21 = fVar15 * 0.05 * 20.0;
  lVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  *(float *)(lVar7 + 0x4c) = fVar16;
  *(float *)(lVar7 + 0x48) = fVar21;
  fVar15 = _guard_xfg_dispatch_icall_nop(fVar16);
  fVar16 = _guard_xfg_dispatch_icall_nop(fVar16);
  lVar9 = *plVar8;
  *(float *)(lVar7 + 0x28) = fVar15 * fVar21;
  *(float *)(lVar7 + 0x2c) = fVar16 * fVar21;
  lVar9 = (**(code **)(lVar9 + 0xc0))(plVar8);
  fVar15 = *(float *)(lVar9 + 0x48);
  fVar17 = ((((fVar17 * 180.0) / 3.1415927 - 180.0) + 180.0) * 3.1415927) / 180.0;
  lVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  *(float *)(lVar7 + 0x4c) = fVar17;
  *(float *)(lVar7 + 0x48) = fVar15;
  fVar16 = _guard_xfg_dispatch_icall_nop(fVar17);
  fVar17 = _guard_xfg_dispatch_icall_nop(fVar17);
  lVar9 = *plVar8;
  *(float *)(lVar7 + 0x28) = fVar16 * fVar15;
  *(float *)(lVar7 + 0x2c) = fVar17 * fVar15;
  lVar9 = (**(code **)(lVar9 + 0xc0))(plVar8);
  *(uint *)(lVar9 + 0x38) = uVar14 & 0xffffff;
  *(undefined1 *)(lVar9 + 0x3b) = *(undefined1 *)(lVar9 + 0x3b);
  lVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  *(char *)(lVar9 + 0x3b) = (char)(longlong)(((double)bVar2 / 255.0) * 255.0);
  lVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  *(uint *)(lVar9 + 0x34) = uVar4 & 0xffffff;
  *(undefined1 *)(lVar9 + 0x37) = *(undefined1 *)(lVar9 + 0x37);
  lVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  uVar19 = 0;
  uVar20 = 0;
  *(char *)(lVar9 + 0x37) = (char)(longlong)(((double)bVar3 / 255.0) * 255.0);
  dVar18 = 0.0;
  if (0.0 <= local_res10) {
    dVar18 = local_res10;
  }
  lVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  if (0.0 <= local_res18) {
    uVar19 = SUB84(local_res18,0);
    uVar20 = (undefined4)((ulonglong)local_res18 >> 0x20);
  }
  *(float *)(lVar9 + 0x20) = (float)dVar18 * 20.0;
  lVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  *(float *)(lVar9 + 0x24) = (float)(double)CONCAT44(uVar20,uVar19) * 20.0;
  fVar15 = (float)local_res20;
  lVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  *(float *)(lVar9 + 0x30) = fVar15;
  uVar14 = 0xf;
  if (uVar5 < 0xf) {
    uVar14 = uVar5;
  }
  lVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  *(uint *)(lVar9 + 0x1c) = uVar14;
  lVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) & 0xffffff5f;
  plVar13 = plVar12;
  do {
    plVar10 = (longlong *)((longlong)plVar13 + 1);
    if (*(char *)(*local_res8 + (longlong)plVar13) != (char)plVar13[0x28b62501]) goto LAB_143535f61;
    plVar13 = plVar10;
  } while (plVar10 != (longlong *)&DAT_00000006);
  uVar14 = *(uint *)(lVar9 + 0x18) | 0x20;
LAB_143535f7b:
  *(uint *)(lVar9 + 0x18) = uVar14;
  goto LAB_143535f7f;
  while (plVar12 = plVar13, plVar13 != (longlong *)&DAT_00000006) {
LAB_143535f61:
    plVar13 = (longlong *)((longlong)plVar12 + 1);
    if (*(char *)(*local_res8 + (longlong)plVar12) != *(char *)((longlong)plVar12 + 0x145b1281c)) {
      uVar14 = *(uint *)(lVar9 + 0x18) | 0x80;
      goto LAB_143535f7b;
    }
  }
LAB_143535f7f:
  lVar9 = (**(code **)(*plVar8 + 0xc0))();
  *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) & 0xffffffef;
  *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) | -(uint)((uVar6 >> 4 & 1) != 0) & 0x10;
  plVar12 = (longlong *)*param_2;
  if (plVar8 != plVar12) {
    if (plVar12 != (longlong *)0x0) {
      if (((ulonglong)plVar12 & 1) == 0) {
        if ((*(uint *)(plVar12 + 1) & 0x3fffff) != 0) {
          *(uint *)(plVar12 + 1) = *(uint *)(plVar12 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (undefined1 *)((longlong)plVar12 + -1);
      }
    }
    *param_2 = plVar8;
  }
  if (9 < ((byte)local_e8[0] & 0x1f)) {
    if ((local_e8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_e8);
    }
    else {
      FUN_143592150();
    }
  }
  plVar8 = local_res8 + 3;
  *(int *)plVar8 = (int)*plVar8 + -1;
  if ((int)*plVar8 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143536050 FUN_143536050 body=30 status=ok
// SIG undefined FUN_143536050(void)

undefined8 * FUN_143536050(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143535b20();
  return param_2;
}



// FUNCTION 143536080 FUN_143536080 body=33 status=ok
// SIG undefined FUN_143536080(void)

undefined8 * FUN_143536080(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b31318;
  return param_1;
}



// FUNCTION 1435360b0 FUN_1435360b0 body=141 status=ok
// SIG undefined FUN_1435360b0(void)

void FUN_1435360b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143534f90(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143536150 FUN_143536150 body=33 status=ok
// SIG undefined FUN_143536150(void)

undefined8 * FUN_143536150(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143536180 FUN_143536180 body=214 status=ok
// SIG undefined FUN_143536180(void)

undefined8 * FUN_143536180(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b2eb18);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b2eb18);
    *puVar2 = &PTR_FUN_145b31318;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143536260 FUN_143536260 body=33 status=ok
// SIG undefined FUN_143536260(void)

undefined8 * FUN_143536260(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143536290 FUN_143536290 body=249 status=ok
// SIG undefined FUN_143536290(void)

undefined8 * FUN_143536290(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b30b00);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b30b00);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *(undefined4 *)(puVar5 + 10) = 3;
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    *(undefined4 *)((longlong)puVar5 + 0x54) = 1;
    *(undefined4 *)(puVar5 + 0xb) = 2;
  }
  return param_1;
}



// FUNCTION 143536390 FUN_143536390 body=54 status=ok
// SIG undefined FUN_143536390(void)

undefined8 * FUN_143536390(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 3;
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0xb) = 2;
  return param_1;
}



// FUNCTION 1435363d0 FUN_1435363d0 body=33 status=ok
// SIG undefined FUN_1435363d0(void)

undefined8 * FUN_1435363d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143536400 FUN_143536400 body=261 status=ok
// SIG undefined FUN_143536400(void)

undefined8 * FUN_143536400(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b2e9e0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b2e9e0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = &DAT_145b26694;
    puVar5[0xb] = "inner";
    puVar5[0xc] = "outer";
  }
  return param_1;
}



// FUNCTION 143536510 FUN_143536510 body=66 status=ok
// SIG undefined FUN_143536510(void)

undefined8 * FUN_143536510(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = &DAT_145b26694;
  param_1[0xb] = "inner";
  param_1[0xc] = "outer";
  return param_1;
}



// FUNCTION 143536560 FUN_143536560 body=239 status=ok
// SIG undefined FUN_143536560(void)

undefined8 * FUN_143536560(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  puVar2 = (undefined8 *)0x0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_145b313d0;
  puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50,0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_144f70a50;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 1;
    *(undefined4 *)(puVar1 + 4) = 0x42c80000;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0x42c80000;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 6) = 0x3f800000;
    puVar1[8] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x35) = 0xff0000;
    *(undefined1 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x3b) = 0;
    *(uint *)(puVar1 + 3) = *(uint *)(puVar1 + 3) & 0xfffffff8;
    puVar1[9] = 0;
    *puVar1 = &PTR_FUN_145af82c0;
    *(undefined4 *)(puVar1 + 4) = 0x42a00000;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0x42a00000;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 1;
    puVar2 = puVar1;
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  param_1[8] = puVar2;
  return param_1;
}



// FUNCTION 143536660 FUN_143536660 body=357 status=ok
// SIG undefined FUN_143536660(void)

void FUN_143536660(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint uVar5;
  double dVar6;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  double local_58;
  double local_50;
  undefined1 local_48 [8];
  longlong local_40;
  uint local_38 [2];
  undefined8 local_30;
  
  local_res10[0] = 0;
  local_58 = 4.0;
  local_50 = 4.0;
  local_38[0] = 0;
  local_30 = 0;
  local_res20[0] = 1;
  if (param_2 < 4) {
    if (param_2 != 0) {
      pcVar4 = (char *)FUN_143590af0(param_3,local_res10,&local_58);
      if (*pcVar4 == '\0') goto LAB_143536783;
    }
    if (1 < param_2) {
      pcVar4 = (char *)FUN_143590af0(param_3 + 0x20,local_res10,&local_50);
      if (*pcVar4 == '\0') goto LAB_143536783;
    }
    if (2 < param_2) {
      pcVar4 = (char *)FUN_143590b70(param_3 + 0x40,local_res10,local_res20);
      if (*pcVar4 == '\0') goto LAB_143536783;
    }
    dVar6 = 0.0;
    if (0.0 <= local_58) {
      dVar6 = local_58;
    }
    *(float *)(*(longlong *)(param_1 + 0x40) + 0x20) = (float)dVar6 * 20.0;
    dVar6 = 0.0;
    if (0.0 <= local_50) {
      dVar6 = local_50;
    }
    *(float *)(*(longlong *)(param_1 + 0x40) + 0x24) = (float)dVar6 * 20.0;
    uVar5 = 0xf;
    if ((uint)(int)(short)local_res20[0] < 0xf) {
      uVar5 = (int)(short)local_res20[0];
    }
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x1c) = uVar5;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_48,0x427,uVar2);
    FUN_1435cbef0(uVar2,uVar3);
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
LAB_143536783:
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_38);
  }
  return;
}



// FUNCTION 1435368a0 FUN_1435368a0 body=303 status=ok
// SIG undefined FUN_1435368a0(void)

void FUN_1435368a0(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  uint local_28 [2];
  undefined8 local_20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = FUN_1435b5bc0(uVar1);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_143536560(lVar4,uVar1);
  }
  lVar4 = *(longlong *)(param_1 + 0x40);
  fVar7 = *(float *)(lVar4 + 0x20) * 0.05;
  uVar6 = 0xf;
  if (*(uint *)(lVar4 + 0x1c) < 0xf) {
    uVar6 = *(uint *)(lVar4 + 0x1c);
  }
  fVar8 = *(float *)(lVar4 + 0x24) * 0.05;
  local_28[0] = 0;
  local_20 = 0;
  fVar3 = 0.0;
  if (0.0 <= fVar7) {
    fVar3 = fVar7;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar8) {
    fVar7 = fVar8;
  }
  *(float *)(*(longlong *)(uVar5 + 0x40) + 0x20) = fVar3 * 20.0;
  *(float *)(*(longlong *)(uVar5 + 0x40) + 0x24) = fVar7 * 20.0;
  *(uint *)(*(longlong *)(uVar5 + 0x40) + 0x1c) = uVar6;
  uVar2 = *param_2;
  if (uVar5 != uVar2) {
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar2 - 1;
      }
    }
    *param_2 = uVar5;
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1435369e0 FUN_1435369e0 body=30 status=ok
// SIG undefined FUN_1435369e0(void)

undefined8 * FUN_1435369e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1435368a0();
  return param_2;
}



// FUNCTION 143536a10 FUN_143536a10 body=33 status=ok
// SIG undefined FUN_143536a10(void)

undefined8 * FUN_143536a10(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b31490;
  return param_1;
}



// FUNCTION 143536a40 FUN_143536a40 body=141 status=ok
// SIG undefined FUN_143536a40(void)

void FUN_143536a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143536560(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143536ae0 FUN_143536ae0 body=33 status=ok
// SIG undefined FUN_143536ae0(void)

undefined8 * FUN_143536ae0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143536b10 FUN_143536b10 body=214 status=ok
// SIG undefined FUN_143536b10(void)

undefined8 * FUN_143536b10(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b2eb78);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b2eb78);
    *puVar2 = &PTR_FUN_145b31490;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143536bf0 FUN_143536bf0 body=101 status=ok
// SIG undefined FUN_143536bf0(void)

undefined8 * FUN_143536bf0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  uVar2 = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_145b31508;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x68,0);
  if (lVar1 != 0) {
    uVar2 = FUN_1432d0910(lVar1);
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  param_1[8] = uVar2;
  return param_1;
}



// FUNCTION 143536cb0 FUN_143536cb0 body=199 status=ok
// SIG undefined FUN_143536cb0(void)

void FUN_143536cb0(longlong param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint local_28 [2];
  longlong local_20;
  
  if (param_2 < 2) {
    if ((((param_2 != 0) && (((byte)*param_3 & 0x1f) == 0xc)) && (*(longlong *)(param_3 + 4) != 0))
       && ((lVar3 = *(longlong *)(*(longlong *)(param_3 + 4) + 0x28), *(int *)(lVar3 + 0x90) == 7 &&
           ((~(*(byte *)(lVar3 + 0x88) >> 5) & 1) != 0)))) {
      local_28[0] = 0;
      local_20 = 0;
      FUN_143536f30(param_1,local_28);
      if (9 < ((byte)local_28[0] & 0x1f)) {
        if ((local_28[0] >> 9 & 1) != 0) {
          FUN_143592150();
          return;
        }
        FUN_1435920c0(local_28);
      }
    }
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_28,0x427,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 143536d80 FUN_143536d80 body=417 status=ok
// SIG undefined FUN_143536d80(void)

void FUN_143536d80(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  float fVar8;
  ulonglong local_res8;
  uint local_58 [2];
  undefined8 local_50;
  double local_48;
  
  puVar4 = (ulonglong *)
           FUN_1435ca860(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_res8);
  uVar1 = *puVar4;
  FUN_1434b4900(uVar1 + 0x40,0x14);
  lVar2 = *(longlong *)(param_1 + 0x40);
  uVar5 = 0;
  uVar7 = uVar5;
  do {
    local_50 = 0;
    iVar6 = (int)uVar7;
    iVar3 = (int)(uVar7 / 5);
    if (iVar6 + iVar3 * -5 == 4) {
      if (iVar3 + 0x10U < 0x14) {
        fVar8 = *(float *)(lVar2 + 0x18 + (ulonglong)(iVar3 + 0x10U) * 4);
      }
      else {
        fVar8 = 0.0;
      }
      local_48 = (double)fVar8 * 255.0;
    }
    else {
      if ((uint)(iVar6 - iVar3) < 0x14) {
        fVar8 = *(float *)(lVar2 + 0x18 + (ulonglong)(uint)(iVar6 - iVar3) * 4);
      }
      else {
        fVar8 = 0.0;
      }
      local_48 = (double)fVar8;
    }
    local_58[0] = 4;
    FUN_1434b4fe0(uVar1 + 0x40,uVar5,local_58);
    if (9 < ((byte)local_58[0] & 0x1f)) {
      if ((local_58[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_58);
      }
      else {
        FUN_143592150();
      }
    }
    uVar7 = (ulonglong)(iVar6 + 1U);
    uVar5 = uVar5 + 1;
  } while (iVar6 + 1U < 0x14);
  if (&local_res8 != param_2) {
    if (uVar1 != 0) {
      *(uint *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1U & 0x8fffffff;
    }
    uVar7 = *param_2;
    if (uVar7 != 0) {
      if ((uVar7 & 1) == 0) {
        if ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar7 - 1;
      }
    }
    *param_2 = uVar1;
  }
  if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
    FUN_1434ef880(uVar1);
  }
  return;
}



// FUNCTION 143536f30 FUN_143536f30 body=188 status=ok
// SIG undefined FUN_143536f30(void)

void FUN_143536f30(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 local_res18 [8];
  double local_res20;
  
  if (param_3 != 0) {
    uVar7 = 0;
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_3 + 0x40) != 0) {
      do {
        uVar4 = FUN_1434b4f50((ulonglong *)(param_3 + 0x40),uVar7);
        pcVar5 = (char *)FUN_143590af0(uVar4,local_res18,&local_res20);
        if (*pcVar5 == '\0') {
          return;
        }
        uVar6 = (uint)uVar7;
        if (uVar6 < 0x14) {
          fVar8 = (float)local_res20;
          iVar2 = (int)(uVar7 / 5);
          if (uVar6 + iVar2 * -5 == 4) {
            fVar8 = fVar8 / 255.0;
            uVar3 = iVar2 + 0x10;
          }
          else {
            uVar3 = uVar6 - iVar2;
          }
          *(float *)(lVar1 + 0x18 + (ulonglong)uVar3 * 4) = fVar8;
        }
        uVar7 = (ulonglong)(uVar6 + 1);
      } while (uVar7 < *(ulonglong *)(param_3 + 0x40));
    }
  }
  return;
}



// FUNCTION 143537000 FUN_143537000 body=263 status=ok
// SIG undefined FUN_143537000(void)

void FUN_143537000(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  uint local_28 [2];
  undefined8 local_20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = FUN_1435b5bc0(uVar1);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_143536bf0(lVar4,uVar1);
  }
  local_res8 = 0;
  local_28[0] = 0;
  local_20 = 0;
  FUN_143536d80(param_1,&local_res8);
  uVar3 = local_res8;
  FUN_143536f30(uVar5,local_28,local_res8);
  uVar2 = *param_2;
  if (uVar5 != uVar2) {
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar2 - 1;
      }
    }
    *param_2 = uVar5;
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  if (((uVar3 != 0) && ((uVar3 & 1) == 0)) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
    FUN_1434ef880(uVar3);
  }
  return;
}



// FUNCTION 143537110 FUN_143537110 body=30 status=ok
// SIG undefined FUN_143537110(void)

undefined8 * FUN_143537110(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143536d80();
  return param_2;
}



// FUNCTION 143537140 FUN_143537140 body=30 status=ok
// SIG undefined FUN_143537140(void)

undefined8 * FUN_143537140(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143537000();
  return param_2;
}



// FUNCTION 143537170 FUN_143537170 body=33 status=ok
// SIG undefined FUN_143537170(void)

undefined8 * FUN_143537170(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b315c8;
  return param_1;
}



// FUNCTION 1435371a0 FUN_1435371a0 body=141 status=ok
// SIG undefined FUN_1435371a0(void)

void FUN_1435371a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143536bf0(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143537240 FUN_143537240 body=33 status=ok
// SIG undefined FUN_143537240(void)

undefined8 * FUN_143537240(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143537270 FUN_143537270 body=214 status=ok
// SIG undefined FUN_143537270(void)

undefined8 * FUN_143537270(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b302f0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b302f0);
    *puVar2 = &PTR_FUN_145b315c8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143537350 FUN_143537350 body=33 status=ok
// SIG undefined FUN_143537350(void)

undefined8 * FUN_143537350(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143537380 FUN_143537380 body=214 status=ok
// SIG undefined FUN_143537380(void)

undefined8 * FUN_143537380(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b30260);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b30260);
    *puVar2 = &PTR_FUN_145b311d8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143537460 FUN_143537460 body=162 status=ok
// SIG undefined FUN_143537460(void)

undefined8 * FUN_143537460(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_18 [2];
  
  UInterpTrackInst::UInterpTrackInst();
  uVar2 = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_145b31640;
  param_1[9] = 0;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x40,0);
  if (lVar1 != 0) {
    local_res8[0] = 0;
    local_18[0] = 0;
    uVar2 = FUN_1432d0b20(lVar1,0,local_18,1,1,0,0,0,local_res8);
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  param_1[8] = uVar2;
  return param_1;
}



// FUNCTION 143537510 FUN_143537510 body=1088 status=ok
// SIG undefined FUN_143537510(void)

void FUN_143537510(longlong param_1,uint param_2,uint *param_3)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_a8 [2];
  longlong *local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined1 local_80 [8];
  longlong local_78;
  uint local_70 [2];
  undefined8 local_68;
  
  lVar10 = 0;
  local_res10[0] = 0;
  local_70[0] = 0;
  local_98 = 0.0;
  local_90 = 0.0;
  local_68 = 0;
  local_res8[0] = 0;
  local_res20[0] = 0;
  local_a0 = (longlong *)
             FUN_143360950(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218),
                           &DAT_145b31778,4,0);
  *(int *)(local_a0 + 3) = (int)local_a0[3] + 1;
  local_88 = 0.0;
  local_a8[0] = 0;
  lVar12 = lVar10;
  if (param_2 != 0) {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
    cVar5 = FUN_1435c8b00(lVar12,param_3,"flash.display.BitmapData",*(undefined8 *)(lVar12 + 0x1c8))
    ;
    if (cVar5 != '\0') {
LAB_1435375f8:
      lVar12 = *(longlong *)(param_3 + 4);
      goto LAB_1435375fc;
    }
    if ((*param_3 & 0x1f) == 0xc) {
      bVar13 = *(longlong *)(param_3 + 4) == 0;
LAB_1435375f1:
      if (bVar13) goto LAB_1435375f8;
    }
    else if ((*param_3 & 0x1f) == 10) {
      bVar13 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
      goto LAB_1435375f1;
    }
LAB_143537657:
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar6 = FUN_1435c8e40(local_80,0x5e4,uVar4);
    FUN_1435cbef0(uVar4,uVar6);
    piVar1 = (int *)(local_78 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    goto LAB_143537853;
  }
LAB_1435375fc:
  lVar11 = lVar10;
  if (1 < param_2) {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
    cVar5 = FUN_1435c8b00(lVar11,param_3 + 8,"flash.geom.Point",*(undefined8 *)(lVar11 + 0x1c8));
    if (cVar5 == '\0') {
      if ((param_3[8] & 0x1f) == 0xc) {
        bVar13 = *(longlong *)(param_3 + 0xc) == 0;
      }
      else {
        if ((param_3[8] & 0x1f) != 10) goto LAB_143537657;
        bVar13 = *(longlong *)(param_3 + 0xc) ==
                 *(longlong *)(*(longlong *)(param_3 + 0xc) + 8) + 0x80;
      }
      if (!bVar13) goto LAB_143537657;
    }
    lVar11 = *(longlong *)(param_3 + 0xc);
  }
  if ((((((2 < param_2) &&
         (pcVar7 = (char *)FUN_143590eb0(param_3 + 0x10,local_res10,local_res8), *pcVar7 == '\0'))
        || ((3 < param_2 &&
            (pcVar7 = (char *)FUN_143590eb0(param_3 + 0x18,local_res10,local_res20), *pcVar7 == '\0'
            )))) ||
       ((4 < param_2 &&
        (pcVar7 = (char *)FUN_143590af0(param_3 + 0x20,local_res10,&local_98), *pcVar7 == '\0'))))
      || ((5 < param_2 &&
          (pcVar7 = (char *)FUN_143590af0(param_3 + 0x28,local_res10,&local_90), *pcVar7 == '\0'))))
     || ((((6 < param_2 &&
           (pcVar7 = (char *)FUN_1435911f0(param_3 + 0x30,local_res10,&local_a0), *pcVar7 == '\0'))
          || ((7 < param_2 &&
              (pcVar7 = (char *)FUN_143590eb0(param_3 + 0x38,local_res10,local_a8), *pcVar7 == '\0')
              ))) ||
         ((8 < param_2 &&
          (pcVar7 = (char *)FUN_143590af0(param_3 + 0x40,local_res10,&local_88), *pcVar7 == '\0'))))
        )) goto LAB_143537853;
  FUN_143537ae0(param_1,local_70,lVar12);
  lVar12 = *(longlong *)(param_1 + 0x40);
  if (lVar11 == 0) {
    *(undefined8 *)(lVar12 + 0x20) = 0;
  }
  else {
    dVar3 = *(double *)(lVar11 + 0x48);
    *(float *)(lVar12 + 0x20) = (float)*(double *)(lVar11 + 0x40);
    *(float *)(lVar12 + 0x24) = (float)dVar3;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x28) = local_res8[0];
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x2c) = local_res20[0];
  *(float *)(*(longlong *)(param_1 + 0x40) + 0x34) = (float)local_98;
  *(float *)(*(longlong *)(param_1 + 0x40) + 0x38) = (float)local_90;
  lVar12 = *local_a0;
  lVar11 = lVar10;
  do {
    lVar8 = lVar11 + 1;
    lVar9 = lVar10;
    if (*(char *)(lVar12 + lVar11) != (&DAT_145b31778)[lVar11]) goto LAB_1435378a0;
    lVar11 = lVar8;
  } while (lVar8 != 5);
LAB_143537814:
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x30) = 0;
  goto LAB_14353781c;
  while (lVar9 = lVar8, lVar8 != 6) {
LAB_1435378a0:
    lVar8 = lVar9 + 1;
    lVar11 = lVar10;
    if (*(char *)(lVar12 + lVar9) != "clamp"[lVar9]) goto LAB_1435378d0;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x30) = 1;
  goto LAB_14353781c;
  while (lVar11 = lVar9, lVar9 != 7) {
LAB_1435378d0:
    lVar9 = lVar11 + 1;
    if (*(char *)(lVar12 + lVar11) != "ignore"[lVar11]) goto LAB_143537900;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x30) = 2;
  goto LAB_14353781c;
  while (lVar10 = lVar11, lVar11 != 6) {
LAB_143537900:
    lVar11 = lVar10 + 1;
    if (*(char *)(lVar12 + lVar10) != "color"[lVar10]) goto LAB_143537814;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x30) = 3;
LAB_14353781c:
  lVar12 = *(longlong *)(param_1 + 0x40);
  *(char *)(lVar12 + 0x3e) = (char)((uint)local_a8[0] >> 0x10);
  *(char *)(lVar12 + 0x3c) = (char)local_a8[0];
  *(char *)(lVar12 + 0x3d) = (char)((uint)local_a8[0] >> 8);
  *(char *)(*(longlong *)(param_1 + 0x40) + 0x3f) = (char)(longlong)((float)local_88 * 255.0);
LAB_143537853:
  plVar2 = local_a0 + 3;
  *(int *)plVar2 = (int)*plVar2 + -1;
  if ((int)*plVar2 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_70[0] & 0x1f)) {
    if ((local_70[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_70);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143537a60 FUN_143537a60 body=117 status=ok
// SIG undefined FUN_143537a60(void)

void FUN_143537a60(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x48);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 143537ae0 FUN_143537ae0 body=115 status=ok
// SIG undefined FUN_143537ae0(void)

void FUN_143537ae0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_1434f0700(param_1 + 0x48,param_3);
  plVar3 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    plVar3 = (longlong *)FUN_1434f5ac0(param_3);
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar2 = *(longlong **)(lVar1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  *(longlong **)(lVar1 + 0x18) = plVar3;
  return;
}



// FUNCTION 143537d90 FUN_143537d90 body=959 status=ok
// SIG undefined FUN_143537d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143537d90(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  char *pcVar14;
  longlong *plVar15;
  undefined4 uVar16;
  bool bVar18;
  float fVar19;
  uint local_res8;
  longlong *local_res10;
  longlong local_res18;
  uint local_88 [2];
  undefined8 local_80;
  longlong *plVar17;
  
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  lVar9 = FUN_1435b5bc0(uVar7);
  plVar17 = (longlong *)0x0;
  uVar16 = 0;
  plVar10 = plVar17;
  if (lVar9 != 0) {
    plVar10 = (longlong *)FUN_143537460(lVar9,uVar7);
  }
  lVar9 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
  local_res10 = (longlong *)(lVar9 + 0x48);
  piVar1 = (int *)(lVar9 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar9 = *(longlong *)(param_1 + 0x40);
  if (*(byte *)(lVar9 + 0x3f) == 0) {
    fVar19 = 0.0;
  }
  else {
    fVar19 = (float)*(byte *)(lVar9 + 0x3f) / 255.0;
  }
  plVar11 = (longlong *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(lVar9 + 0x28);
  uVar5 = *(undefined4 *)(lVar9 + 0x2c);
  local_res8 = *(uint *)(lVar9 + 0x3c) & 0xffffff;
  plVar15 = plVar17;
  if (plVar11 != &local_res18) {
    lVar9 = *plVar11;
    if (lVar9 != 0) {
      *(uint *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1U & 0x8fffffff;
    }
    plVar15 = (longlong *)*plVar11;
  }
  _DAT_00000040 = (double)*(float *)(*(longlong *)(param_1 + 0x40) + 0x20);
  _DAT_00000048 = (double)*(float *)(*(longlong *)(param_1 + 0x40) + 0x24);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x30);
  if (iVar6 == 0) {
LAB_143537ee0:
    pcVar14 = "wrap";
  }
  else if (iVar6 == 1) {
    pcVar14 = "clamp";
  }
  else if (iVar6 == 2) {
    pcVar14 = "ignore";
  }
  else {
    if (iVar6 != 3) goto LAB_143537ee0;
    pcVar14 = "color";
  }
  FUN_1433601c0(&local_res10,pcVar14);
  uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x34);
  uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x38);
  local_88[0] = 0;
  local_80 = 0;
  *(char *)(plVar10[8] + 0x3f) = (char)(longlong)(fVar19 * 255.0);
  lVar9 = plVar10[8];
  *(char *)(lVar9 + 0x3d) = (char)(local_res8 >> 8);
  *(char *)(lVar9 + 0x3e) = (char)(local_res8 >> 0x10);
  *(undefined1 *)(lVar9 + 0x3c) = (undefined1)local_res8;
  *(undefined4 *)(plVar10[8] + 0x28) = uVar4;
  *(undefined4 *)(plVar10[8] + 0x2c) = uVar5;
  FUN_1434f0700(plVar10 + 9,plVar15);
  plVar11 = plVar17;
  if (plVar10[9] != 0) {
    plVar11 = (longlong *)FUN_1434f5ac0(plVar15);
  }
  lVar9 = plVar10[8];
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  plVar13 = *(longlong **)(lVar9 + 0x18);
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  *(longlong **)(lVar9 + 0x18) = plVar11;
  lVar9 = plVar10[8];
  *(undefined8 *)(lVar9 + 0x20) = 0;
  lVar8 = *local_res10;
  plVar11 = plVar17;
  do {
    plVar12 = (longlong *)((longlong)plVar11 + 1);
    plVar13 = plVar17;
    if (*(char *)(lVar8 + (longlong)plVar11) != (char)plVar11[0x28b662ef]) goto LAB_143537ff0;
    plVar11 = plVar12;
  } while (plVar12 != (longlong *)0x5);
  goto LAB_143538071;
  while (plVar13 = plVar12, plVar12 != (longlong *)&DAT_00000006) {
LAB_143537ff0:
    plVar12 = (longlong *)((longlong)plVar13 + 1);
    plVar11 = plVar17;
    if (*(char *)(lVar8 + (longlong)plVar13) != (char)plVar13[0x28b6621a]) goto LAB_143538020;
  }
  *(undefined4 *)(lVar9 + 0x30) = 1;
  goto LAB_143538075;
  while (plVar11 = plVar13, plVar13 != (longlong *)0x7) {
LAB_143538020:
    plVar13 = (longlong *)((longlong)plVar11 + 1);
    if (*(char *)(lVar8 + (longlong)plVar11) != (char)plVar11[0x28b662f0]) goto LAB_143538050;
  }
  *(undefined4 *)(lVar9 + 0x30) = 2;
  goto LAB_143538075;
  while (plVar17 = (longlong *)((longlong)plVar11 + 1),
        (longlong *)((longlong)plVar11 + 1) != (longlong *)&DAT_00000006) {
LAB_143538050:
    plVar11 = plVar17;
    bVar18 = *(char *)(lVar8 + (longlong)plVar11) == *(char *)((longlong)plVar11 + 0x145b12aac);
    if (!bVar18) goto LAB_143538069;
  }
  bVar18 = *(char *)(lVar8 + (longlong)plVar11) == *(char *)((longlong)plVar11 + 0x145b12aac);
LAB_143538069:
  uVar16 = 0;
  if (bVar18) {
    uVar16 = 3;
  }
LAB_143538071:
  *(undefined4 *)(lVar9 + 0x30) = uVar16;
LAB_143538075:
  *(undefined4 *)(plVar10[8] + 0x34) = uVar2;
  *(undefined4 *)(plVar10[8] + 0x38) = uVar3;
  plVar17 = (longlong *)*param_2;
  if (plVar10 != plVar17) {
    if (plVar17 != (longlong *)0x0) {
      if (((ulonglong)plVar17 & 1) == 0) {
        if ((*(uint *)(plVar17 + 1) & 0x3fffff) != 0) {
          *(uint *)(plVar17 + 1) = *(uint *)(plVar17 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (undefined1 *)((longlong)plVar17 + -1);
      }
    }
    *param_2 = plVar10;
  }
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      FUN_143592150();
    }
  }
  plVar17 = local_res10 + 3;
  *(int *)plVar17 = (int)*plVar17 + -1;
  if ((int)*plVar17 == 0) {
    FUN_14335f920();
  }
  if (((plVar15 != (longlong *)0x0) && (((ulonglong)plVar15 & 1) == 0)) &&
     ((*(uint *)(plVar15 + 1) & 0x3fffff) != 0)) {
    *(uint *)(plVar15 + 1) = *(uint *)(plVar15 + 1) - 1;
    FUN_1434ef880(plVar15);
  }
  return;
}



// FUNCTION 143538160 FUN_143538160 body=30 status=ok
// SIG undefined FUN_143538160(void)

undefined8 * FUN_143538160(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143537a60();
  return param_2;
}



// FUNCTION 1435381d0 FUN_1435381d0 body=30 status=ok
// SIG undefined FUN_1435381d0(void)

undefined8 * FUN_1435381d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143537d90();
  return param_2;
}



// FUNCTION 143538200 FUN_143538200 body=33 status=ok
// SIG undefined FUN_143538200(void)

undefined8 * FUN_143538200(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b31700;
  return param_1;
}



// FUNCTION 143538230 FUN_143538230 body=141 status=ok
// SIG undefined FUN_143538230(void)

void FUN_143538230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143537460(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1435382d0 FUN_1435382d0 body=33 status=ok
// SIG undefined FUN_1435382d0(void)

undefined8 * FUN_1435382d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143538300 FUN_143538300 body=214 status=ok
// SIG undefined FUN_143538300(void)

undefined8 * FUN_143538300(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b2ea40);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b2ea40);
    *puVar2 = &PTR_FUN_145b31700;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435383e0 FUN_1435383e0 body=33 status=ok
// SIG undefined FUN_1435383e0(void)

undefined8 * FUN_1435383e0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143538410 FUN_143538410 body=272 status=ok
// SIG undefined FUN_143538410(void)

undefined8 * FUN_143538410(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b2f120);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b2f120);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b24fa0;
    puVar5[10] = "clamp";
    puVar5[0xb] = "color";
    puVar5[0xc] = "ignore";
    puVar5[0xd] = &DAT_145b31778;
  }
  return param_1;
}



// FUNCTION 143538530 FUN_143538530 body=77 status=ok
// SIG undefined FUN_143538530(void)

undefined8 * FUN_143538530(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b24fa0;
  param_1[10] = "clamp";
  param_1[0xb] = "color";
  param_1[0xc] = "ignore";
  param_1[0xd] = &DAT_145b31778;
  return param_1;
}



// FUNCTION 143538590 FUN_143538590 body=134 status=ok
// SIG undefined FUN_143538590(void)

undefined8 * FUN_143538590(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  uVar2 = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_145b31788;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50,0);
  if (lVar1 != 0) {
    uVar2 = FUN_143496f80(lVar1,0x3f490fdb,0x40800000,0x40800000,0x40800000,1);
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  param_1[8] = uVar2;
  return param_1;
}



// FUNCTION 143538620 FUN_143538620 body=985 status=ok
// SIG undefined FUN_143538620(void)

void FUN_143538620(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  char *pcVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  uint local_d8 [2];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  uint local_a0 [2];
  undefined8 local_98;
  undefined1 local_80 [8];
  longlong local_78;
  
  cVar5 = '\0';
  local_res10[0] = 0;
  cVar6 = '\0';
  cVar7 = '\0';
  local_d0 = 4.0;
  local_c8 = 45.0;
  local_c0 = 1.0;
  local_b8 = 4.0;
  local_b0 = 4.0;
  local_a8 = 1.0;
  local_res20[0] = 0;
  local_d8[0] = 1;
  if (param_2 < 0xc) {
    if ((param_2 != 0) &&
       (pcVar9 = (char *)FUN_143590af0(param_3,local_res10,&local_d0), *pcVar9 == '\0')) {
      return;
    }
    if ((1 < param_2) &&
       (pcVar9 = (char *)FUN_143590af0(param_3 + 0x20,local_res10,&local_c8), *pcVar9 == '\0')) {
      return;
    }
    if ((2 < param_2) &&
       (pcVar9 = (char *)FUN_143590eb0(param_3 + 0x40,local_res10,local_res20), *pcVar9 == '\0')) {
      return;
    }
    if ((3 < param_2) &&
       (pcVar9 = (char *)FUN_143590af0(param_3 + 0x60,local_res10,&local_c0), *pcVar9 == '\0')) {
      return;
    }
    if ((4 < param_2) &&
       (pcVar9 = (char *)FUN_143590af0(param_3 + 0x80,local_res10,&local_b8), *pcVar9 == '\0')) {
      return;
    }
    if ((5 < param_2) &&
       (pcVar9 = (char *)FUN_143590af0(param_3 + 0xa0,local_res10,&local_b0), *pcVar9 == '\0')) {
      return;
    }
    if ((6 < param_2) &&
       (pcVar9 = (char *)FUN_143590af0(param_3 + 0xc0,local_res10,&local_a8), *pcVar9 == '\0')) {
      return;
    }
    if ((7 < param_2) &&
       (pcVar9 = (char *)FUN_143590b70(param_3 + 0xe0,local_res10,local_d8), *pcVar9 == '\0')) {
      return;
    }
    if (8 < param_2) {
      cVar5 = FUN_1435909c0(param_3 + 0x100);
    }
    if (9 < param_2) {
      cVar6 = FUN_1435909c0(param_3 + 0x120);
    }
    if (10 < param_2) {
      cVar7 = FUN_1435909c0(param_3 + 0x140);
    }
    lVar4 = *(longlong *)(param_1 + 0x40);
    local_a0[0] = 0;
    local_98 = 0;
    fVar12 = *(float *)(lVar4 + 0x4c);
    fVar14 = (float)local_d0 * 20.0;
    *(float *)(lVar4 + 0x4c) = fVar12;
    *(float *)(lVar4 + 0x48) = fVar14;
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar12);
    fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
    *(float *)(lVar4 + 0x28) = fVar11 * fVar14;
    *(float *)(lVar4 + 0x2c) = fVar12 * fVar14;
    fVar12 = *(float *)(lVar4 + 0x48);
    *(float *)(lVar4 + 0x48) = fVar12;
    fVar11 = ((float)local_c8 * 3.1415927) / 180.0;
    *(float *)(lVar4 + 0x4c) = fVar11;
    fVar14 = _guard_xfg_dispatch_icall_nop(fVar11);
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
    *(float *)(lVar4 + 0x28) = fVar14 * fVar12;
    *(float *)(lVar4 + 0x2c) = fVar11 * fVar12;
    *(undefined4 *)(lVar4 + 0x34) = local_res20[0];
    *(undefined1 *)(lVar4 + 0x37) = *(undefined1 *)(lVar4 + 0x37);
    *(char *)(*(longlong *)(param_1 + 0x40) + 0x37) = (char)(longlong)(local_c0 * 255.0);
    dVar13 = 0.0;
    if (0.0 <= local_b8) {
      dVar13 = local_b8;
    }
    *(float *)(*(longlong *)(param_1 + 0x40) + 0x20) = (float)dVar13 * 20.0;
    dVar13 = 0.0;
    if (0.0 <= local_b0) {
      dVar13 = local_b0;
    }
    *(float *)(*(longlong *)(param_1 + 0x40) + 0x24) = (float)dVar13 * 20.0;
    *(float *)(*(longlong *)(param_1 + 0x40) + 0x30) = (float)local_a8;
    uVar10 = 0xf;
    if (local_d8[0] < 0xf) {
      uVar10 = local_d8[0];
    }
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x1c) = uVar10;
    lVar4 = *(longlong *)(param_1 + 0x40);
    puVar2 = (uint *)(lVar4 + 0x18);
    *puVar2 = *puVar2 & 0xffffffdf;
    puVar2 = (uint *)(lVar4 + 0x18);
    *puVar2 = *puVar2 | -(uint)(cVar5 != '\0') & 0x20;
    lVar4 = *(longlong *)(param_1 + 0x40);
    puVar2 = (uint *)(lVar4 + 0x18);
    *puVar2 = *puVar2 & 0xffffffef;
    puVar2 = (uint *)(lVar4 + 0x18);
    *puVar2 = *puVar2 | -(uint)(cVar6 != '\0') & 0x10;
    lVar4 = *(longlong *)(param_1 + 0x40);
    puVar2 = (uint *)(lVar4 + 0x18);
    *puVar2 = *puVar2 & 0xffffffbf;
    puVar2 = (uint *)(lVar4 + 0x18);
    *puVar2 = *puVar2 | -(uint)(cVar7 != '\0') & 0x40;
    if (9 < ((byte)local_a0[0] & 0x1f)) {
      if ((local_a0[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_a0);
      }
      else {
        FUN_143592150();
      }
    }
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar8 = FUN_1435c8e40(local_80,0x427,uVar3);
    FUN_1435cbef0(uVar3,uVar8);
    piVar1 = (int *)(local_78 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 143538a80 FUN_143538a80 body=134 status=ok
// SIG undefined FUN_143538a80(void)

void FUN_143538a80(longlong param_1,undefined8 param_2,double param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  fVar1 = *(float *)(lVar2 + 0x48);
  *(float *)(lVar2 + 0x48) = fVar1;
  fVar4 = ((float)param_3 * 3.1415927) / 180.0;
  *(float *)(lVar2 + 0x4c) = fVar4;
  fVar3 = _guard_xfg_dispatch_icall_nop(fVar4);
  fVar4 = _guard_xfg_dispatch_icall_nop(fVar4);
  *(float *)(lVar2 + 0x28) = fVar3 * fVar1;
  *(float *)(lVar2 + 0x2c) = fVar4 * fVar1;
  return;
}



// FUNCTION 143538c10 FUN_143538c10 body=121 status=ok
// SIG undefined FUN_143538c10(void)

void FUN_143538c10(longlong param_1,undefined8 param_2,double param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  fVar3 = *(float *)(lVar1 + 0x4c);
  *(float *)(lVar1 + 0x4c) = fVar3;
  fVar4 = (float)param_3 * 20.0;
  *(float *)(lVar1 + 0x48) = fVar4;
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar3);
  fVar3 = _guard_xfg_dispatch_icall_nop(fVar3);
  *(float *)(lVar1 + 0x28) = fVar2 * fVar4;
  *(float *)(lVar1 + 0x2c) = fVar3 * fVar4;
  return;
}



// FUNCTION 143538dc0 FUN_143538dc0 body=768 status=ok
// SIG undefined FUN_143538dc0(void)

void FUN_143538dc0(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_b8 [2];
  undefined8 local_b0;
  
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  lVar9 = FUN_1435b5bc0(uVar6);
  if (lVar9 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_143538590(lVar9,uVar6);
  }
  lVar9 = *(longlong *)(param_1 + 0x40);
  uVar4 = *(uint *)(lVar9 + 0x18);
  uVar11 = *(uint *)(lVar9 + 0x34);
  uVar2 = *(undefined4 *)(lVar9 + 0x30);
  fVar16 = *(float *)(lVar9 + 0x4c);
  bVar3 = *(byte *)(lVar9 + 0x37);
  uVar5 = *(uint *)(lVar9 + 0x1c);
  fVar12 = *(float *)(lVar9 + 0x20) * 0.05;
  fVar17 = *(float *)(lVar9 + 0x48) * 0.05 * 20.0;
  local_b8[0] = 0;
  local_b0 = 0;
  lVar7 = *(longlong *)(uVar10 + 0x40);
  fVar13 = *(float *)(lVar9 + 0x24) * 0.05;
  fVar15 = *(float *)(lVar7 + 0x4c);
  *(float *)(lVar7 + 0x4c) = fVar15;
  *(float *)(lVar7 + 0x48) = fVar17;
  fVar14 = _guard_xfg_dispatch_icall_nop(fVar15);
  fVar15 = _guard_xfg_dispatch_icall_nop(fVar15);
  *(float *)(lVar7 + 0x28) = fVar14 * fVar17;
  *(float *)(lVar7 + 0x2c) = fVar15 * fVar17;
  fVar15 = *(float *)(lVar7 + 0x48);
  *(float *)(lVar7 + 0x48) = fVar15;
  fVar16 = (((fVar16 * 180.0) / 3.1415927) * 3.1415927) / 180.0;
  *(float *)(lVar7 + 0x4c) = fVar16;
  fVar14 = _guard_xfg_dispatch_icall_nop(fVar16);
  fVar16 = _guard_xfg_dispatch_icall_nop(fVar16);
  *(float *)(lVar7 + 0x28) = fVar14 * fVar15;
  *(float *)(lVar7 + 0x2c) = fVar16 * fVar15;
  *(uint *)(lVar7 + 0x34) = uVar11 & 0xffffff;
  *(undefined1 *)(lVar7 + 0x37) = *(undefined1 *)(lVar7 + 0x37);
  fVar16 = 0.0;
  if (0.0 <= fVar12) {
    fVar16 = fVar12;
  }
  fVar15 = 0.0;
  if (0.0 <= fVar13) {
    fVar15 = fVar13;
  }
  *(char *)(*(longlong *)(uVar10 + 0x40) + 0x37) = (char)(longlong)(((double)bVar3 / 255.0) * 255.0)
  ;
  *(float *)(*(longlong *)(uVar10 + 0x40) + 0x20) = fVar16 * 20.0;
  uVar11 = 0xf;
  if (uVar5 < 0xf) {
    uVar11 = uVar5;
  }
  *(float *)(*(longlong *)(uVar10 + 0x40) + 0x24) = fVar15 * 20.0;
  *(undefined4 *)(*(longlong *)(uVar10 + 0x40) + 0x30) = uVar2;
  *(uint *)(*(longlong *)(uVar10 + 0x40) + 0x1c) = uVar11;
  lVar9 = *(longlong *)(uVar10 + 0x40);
  puVar1 = (uint *)(lVar9 + 0x18);
  *puVar1 = *puVar1 & 0xffffffdf;
  puVar1 = (uint *)(lVar9 + 0x18);
  *puVar1 = *puVar1 | -(uint)((uVar4 >> 5 & 1) != 0) & 0x20;
  lVar9 = *(longlong *)(uVar10 + 0x40);
  puVar1 = (uint *)(lVar9 + 0x18);
  *puVar1 = *puVar1 & 0xffffffef;
  puVar1 = (uint *)(lVar9 + 0x18);
  *puVar1 = *puVar1 | -(uint)((uVar4 >> 4 & 1) != 0) & 0x10;
  lVar9 = *(longlong *)(uVar10 + 0x40);
  puVar1 = (uint *)(lVar9 + 0x18);
  *puVar1 = *puVar1 & 0xffffffbf;
  puVar1 = (uint *)(lVar9 + 0x18);
  *puVar1 = *puVar1 | -(uint)((uVar4 >> 6 & 1) != 0) & 0x40;
  uVar8 = *param_2;
  if (uVar10 != uVar8) {
    if (uVar8 != 0) {
      if ((uVar8 & 1) == 0) {
        if ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar8 - 1;
      }
    }
    *param_2 = uVar10;
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 1435390d0 FUN_1435390d0 body=30 status=ok
// SIG undefined FUN_1435390d0(void)

undefined8 * FUN_1435390d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143538dc0();
  return param_2;
}



// FUNCTION 143539100 FUN_143539100 body=33 status=ok
// SIG undefined FUN_143539100(void)

undefined8 * FUN_143539100(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b31848;
  return param_1;
}



// FUNCTION 143539130 FUN_143539130 body=141 status=ok
// SIG undefined FUN_143539130(void)

void FUN_143539130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143538590(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1435391d0 FUN_1435391d0 body=33 status=ok
// SIG undefined FUN_1435391d0(void)

undefined8 * FUN_1435391d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143539200 FUN_143539200 body=214 status=ok
// SIG undefined FUN_143539200(void)

undefined8 * FUN_143539200(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b2f690);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b2f690);
    *puVar2 = &PTR_FUN_145b31848;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435392e0 FUN_1435392e0 body=268 status=ok
// SIG undefined FUN_1435392e0(void)

undefined8 * FUN_1435392e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  puVar2 = (undefined8 *)0x0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_145b318c0;
  puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50,0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_144f70a50;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)(puVar1 + 2) = 2;
    *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 1;
    *(undefined4 *)(puVar1 + 4) = 0x42c80000;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0x42c80000;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 6) = 0x3f800000;
    puVar1[8] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x35) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x37) = 0xff;
    *(undefined1 *)((longlong)puVar1 + 0x3b) = 0;
    *(uint *)(puVar1 + 3) = *(uint *)(puVar1 + 3) & 0xfffffffa;
    *(uint *)(puVar1 + 3) = *(uint *)(puVar1 + 3) | 2;
    puVar1[9] = 0;
    *puVar1 = &PTR_FUN_145af8300;
    *(undefined4 *)(puVar1 + 4) = 0x42f00000;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0x42f00000;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x36) = 0xffff;
    *(undefined1 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined4 *)(puVar1 + 6) = 0x40000000;
    puVar2 = puVar1;
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  param_1[8] = puVar2;
  return param_1;
}



// FUNCTION 143539400 FUN_143539400 body=654 status=ok
// SIG undefined FUN_143539400(void)

/* WARNING: Removing unreachable block (ram,0x00014353965f) */
/* WARNING: Removing unreachable block (ram,0x000143539672) */
/* WARNING: Removing unreachable block (ram,0x00014353966b) */

void FUN_143539400(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  char *pcVar8;
  uint uVar9;
  double dVar10;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  uint local_88 [2];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined1 local_60 [8];
  longlong local_58;
  
  local_res10[0] = 0;
  cVar5 = '\0';
  cVar6 = '\0';
  local_80 = 1.0;
  local_68 = 2.0;
  local_78 = 6.0;
  local_70 = 6.0;
  local_res20[0] = 0xff0000;
  local_88[0] = 1;
  if (param_2 < 9) {
    if ((((param_2 == 0) ||
         (pcVar8 = (char *)FUN_143590eb0(param_3,local_res10,local_res20), *pcVar8 != '\0')) &&
        ((param_2 < 2 ||
         (pcVar8 = (char *)FUN_143590af0(param_3 + 0x20,local_res10,&local_80), *pcVar8 != '\0'))))
       && ((((param_2 < 3 ||
             (pcVar8 = (char *)FUN_143590af0(param_3 + 0x40,local_res10,&local_78), *pcVar8 != '\0')
             ) && ((param_2 < 4 ||
                   (pcVar8 = (char *)FUN_143590af0(param_3 + 0x60,local_res10,&local_70),
                   *pcVar8 != '\0')))) &&
           (((param_2 < 5 ||
             (pcVar8 = (char *)FUN_143590af0(param_3 + 0x80,local_res10,&local_68), *pcVar8 != '\0')
             ) && ((param_2 < 6 ||
                   (pcVar8 = (char *)FUN_143590b70(param_3 + 0xa0,local_res10,local_88),
                   *pcVar8 != '\0')))))))) {
      if (6 < param_2) {
        cVar5 = FUN_1435909c0(param_3 + 0xc0);
      }
      if (7 < param_2) {
        cVar6 = FUN_1435909c0(param_3 + 0xe0);
      }
      lVar4 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar4 + 0x34) = local_res20[0];
      *(undefined1 *)(lVar4 + 0x37) = *(undefined1 *)(lVar4 + 0x37);
      *(char *)(*(longlong *)(param_1 + 0x40) + 0x37) = (char)(longlong)(local_80 * 255.0);
      dVar10 = 0.0;
      if (0.0 <= local_78) {
        dVar10 = local_78;
      }
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x20) = (float)dVar10 * 20.0;
      dVar10 = 0.0;
      if (0.0 <= local_70) {
        dVar10 = local_70;
      }
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x24) = (float)dVar10 * 20.0;
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x30) = (float)local_68;
      uVar9 = 0xf;
      if (local_88[0] < 0xf) {
        uVar9 = local_88[0];
      }
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x1c) = uVar9;
      lVar4 = *(longlong *)(param_1 + 0x40);
      puVar2 = (uint *)(lVar4 + 0x18);
      *puVar2 = *puVar2 & 0xffffffdf;
      puVar2 = (uint *)(lVar4 + 0x18);
      *puVar2 = *puVar2 | -(uint)(cVar5 != '\0') & 0x20;
      lVar4 = *(longlong *)(param_1 + 0x40);
      puVar2 = (uint *)(lVar4 + 0x18);
      *puVar2 = *puVar2 & 0xffffffef;
      puVar2 = (uint *)(lVar4 + 0x18);
      *puVar2 = *puVar2 | -(uint)(cVar6 != '\0') & 0x10;
    }
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar7 = FUN_1435c8e40(local_60,0x427,uVar3);
    FUN_1435cbef0(uVar3,uVar7);
    piVar1 = (int *)(local_58 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 1435398c0 FUN_1435398c0 body=454 status=ok
// SIG undefined FUN_1435398c0(void)

void FUN_1435398c0(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  uint local_28 [2];
  undefined8 local_20;
  
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  lVar10 = FUN_1435b5bc0(uVar6);
  if (lVar10 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_1435392e0(lVar10,uVar6);
  }
  lVar10 = *(longlong *)(param_1 + 0x40);
  bVar3 = *(byte *)(lVar10 + 0x37);
  uVar4 = *(uint *)(lVar10 + 0x1c);
  uVar5 = *(uint *)(lVar10 + 0x18);
  uVar2 = *(undefined4 *)(lVar10 + 0x30);
  fVar13 = *(float *)(lVar10 + 0x20) * 0.05;
  fVar14 = *(float *)(lVar10 + 0x24) * 0.05;
  local_28[0] = 0;
  local_20 = 0;
  lVar7 = *(longlong *)(uVar11 + 0x40);
  *(uint *)(lVar7 + 0x34) = *(uint *)(lVar10 + 0x34) & 0xffffff;
  *(undefined1 *)(lVar7 + 0x37) = *(undefined1 *)(lVar7 + 0x37);
  fVar9 = 0.0;
  if (0.0 <= fVar13) {
    fVar9 = fVar13;
  }
  fVar13 = 0.0;
  if (0.0 <= fVar14) {
    fVar13 = fVar14;
  }
  *(char *)(*(longlong *)(uVar11 + 0x40) + 0x37) = (char)(longlong)(((double)bVar3 / 255.0) * 255.0)
  ;
  uVar12 = 0xf;
  if (uVar4 < 0xf) {
    uVar12 = uVar4;
  }
  *(float *)(*(longlong *)(uVar11 + 0x40) + 0x20) = fVar9 * 20.0;
  *(float *)(*(longlong *)(uVar11 + 0x40) + 0x24) = fVar13 * 20.0;
  *(undefined4 *)(*(longlong *)(uVar11 + 0x40) + 0x30) = uVar2;
  *(uint *)(*(longlong *)(uVar11 + 0x40) + 0x1c) = uVar12;
  lVar10 = *(longlong *)(uVar11 + 0x40);
  puVar1 = (uint *)(lVar10 + 0x18);
  *puVar1 = *puVar1 & 0xffffffdf;
  puVar1 = (uint *)(lVar10 + 0x18);
  *puVar1 = *puVar1 | -(uint)((uVar5 >> 5 & 1) != 0) & 0x20;
  lVar10 = *(longlong *)(uVar11 + 0x40);
  puVar1 = (uint *)(lVar10 + 0x18);
  *puVar1 = *puVar1 & 0xffffffef;
  puVar1 = (uint *)(lVar10 + 0x18);
  *puVar1 = *puVar1 | -(uint)((uVar5 >> 4 & 1) != 0) & 0x10;
  uVar8 = *param_2;
  if (uVar11 != uVar8) {
    if (uVar8 != 0) {
      if ((uVar8 & 1) == 0) {
        if ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar8 - 1;
      }
    }
    *param_2 = uVar11;
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143539a90 FUN_143539a90 body=30 status=ok
// SIG undefined FUN_143539a90(void)

undefined8 * FUN_143539a90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1435398c0();
  return param_2;
}



// FUNCTION 143539ac0 FUN_143539ac0 body=33 status=ok
// SIG undefined FUN_143539ac0(void)

undefined8 * FUN_143539ac0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b31980;
  return param_1;
}



// FUNCTION 143539af0 FUN_143539af0 body=141 status=ok
// SIG undefined FUN_143539af0(void)

void FUN_143539af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1435392e0(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143539b90 FUN_143539b90 body=33 status=ok
// SIG undefined FUN_143539b90(void)

undefined8 * FUN_143539b90(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143539bc0 FUN_143539bc0 body=214 status=ok
// SIG undefined FUN_143539bc0(void)

undefined8 * FUN_143539bc0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b301d0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b301d0);
    *puVar2 = &PTR_FUN_145b31980;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143539ca0 FUN_143539ca0 body=198 status=ok
// SIG undefined FUN_143539ca0(void)

undefined8 * FUN_143539ca0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  UInterpTrackInst::UInterpTrackInst();
  uVar3 = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_145b319f8;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xc] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[0xd] = 0;
  lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x58,0);
  if (lVar2 != 0) {
    uVar3 = FUN_1432d05e0(lVar2,5,0,0x40800000,0x3f490fdb,0x40800000,0x40800000,1);
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  param_1[8] = uVar3;
  return param_1;
}



// FUNCTION 143539d70 FUN_143539d70 body=257 status=ok
// SIG undefined FUN_143539d70(void)

void FUN_143539d70(longlong param_1)

{
  char cVar1;
  RefCountImpl *this;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar3 = 0;
  lVar2 = lVar3;
  do {
    lVar4 = lVar2;
    cVar1 = *(char *)(**(longlong **)(param_1 + 0x60) + lVar4);
    bVar5 = cVar1 == "radial"[lVar4];
    if (!bVar5) goto LAB_143539db9;
    lVar2 = lVar4 + 1;
  } while (lVar4 + 1 != 7);
  bVar5 = cVar1 == "radial"[lVar4];
LAB_143539db9:
  if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  if ((*(longlong *)(param_1 + 0x58) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
    if (lVar2 != 0) {
      lVar3 = FUN_143321870(lVar2,bVar5,*(undefined2 *)(*(longlong *)(param_1 + 0x58) + 0x40),0);
    }
    if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x68));
    }
    *(longlong *)(param_1 + 0x68) = lVar3;
    FUN_143501080(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x48),
                  *(undefined8 *)(param_1 + 0x50),lVar3);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x68));
  }
  this = *(RefCountImpl **)(lVar2 + 0x40);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(param_1 + 0x68);
  return;
}



// FUNCTION 143539e80 FUN_143539e80 body=1219 status=ok
// SIG undefined FUN_143539e80(void)

void FUN_143539e80(longlong param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  undefined4 local_res10 [4];
  uint local_res20 [2];
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  uint local_88 [2];
  undefined8 local_80;
  
  lVar10 = 0;
  local_res10[0] = 0;
  if (0xb < param_2) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar6 = FUN_1435c8e40(local_c0,0x427,uVar2);
    FUN_1435cbef0(uVar2,uVar6);
    plVar9 = local_b8;
    goto LAB_14353a32a;
  }
  local_a8 = 45.0;
  local_90 = 1.0;
  local_b0 = 4.0;
  local_a0 = 4.0;
  local_98 = 4.0;
  local_res20[0] = 1;
  cVar5 = '\0';
  local_c8 = (longlong *)
             FUN_143360950(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218),
                           "inner",5);
  *(int *)(local_c8 + 3) = (int)local_c8[3] + 1;
  if (((param_2 != 0) &&
      (pcVar7 = (char *)FUN_143590af0(param_3,local_res10,&local_b0), plVar9 = local_c8,
      *pcVar7 == '\0')) ||
     ((1 < param_2 &&
      (pcVar7 = (char *)FUN_143590af0(param_3 + 0x20,local_res10,&local_a8), plVar9 = local_c8,
      *pcVar7 == '\0')))) goto LAB_14353a32a;
  if (2 < param_2) {
    cVar4 = FUN_14353ffc0(param_3 + 0x40);
    if ((cVar4 != '\0') ||
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98),
       cVar4 = FUN_1435c8b00(lVar3,param_3 + 0x40,"Array",*(undefined8 *)(lVar3 + 0x1c8)),
       cVar4 != '\0')) {
      FUN_1434f0700(param_1 + 0x58,*(undefined8 *)(param_3 + 0x50));
      goto LAB_143539fdd;
    }
LAB_14353a064:
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar6 = FUN_1435c8e40(local_c0,0x40a,uVar2);
    FUN_1435cbe70(uVar2,uVar6);
    local_b8 = local_b8 + 3;
    *(int *)local_b8 = (int)*local_b8 + -1;
    plVar9 = local_c8;
    if ((int)*local_b8 == 0) {
      FUN_14335f920();
      plVar9 = local_c8;
    }
    goto LAB_14353a32a;
  }
LAB_143539fdd:
  if (3 < param_2) {
    cVar4 = FUN_14353ffc0(param_3 + 0x60);
    if ((cVar4 == '\0') &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98),
       cVar4 = FUN_1435c8b00(lVar3,param_3 + 0x60,"Array",*(undefined8 *)(lVar3 + 0x1c8)),
       cVar4 == '\0')) goto LAB_14353a064;
    FUN_1434f0700(param_1 + 0x48,*(undefined8 *)(param_3 + 0x70));
  }
  if (4 < param_2) {
    cVar4 = FUN_14353ffc0(param_3 + 0x80);
    if ((cVar4 == '\0') &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98),
       cVar4 = FUN_1435c8b00(lVar3,param_3 + 0x80,"Array",*(undefined8 *)(lVar3 + 0x1c8)),
       cVar4 == '\0')) goto LAB_14353a064;
    FUN_1434f0700(param_1 + 0x50,*(undefined8 *)(param_3 + 0x90));
  }
  if ((((((5 < param_2) &&
         (pcVar7 = (char *)FUN_143590af0(param_3 + 0xa0,local_res10,&local_a0), plVar9 = local_c8,
         *pcVar7 == '\0')) ||
        ((6 < param_2 &&
         (pcVar7 = (char *)FUN_143590af0(param_3 + 0xc0,local_res10,&local_98), plVar9 = local_c8,
         *pcVar7 == '\0')))) ||
       ((7 < param_2 &&
        (pcVar7 = (char *)FUN_143590af0(param_3 + 0xe0,local_res10,&local_90), plVar9 = local_c8,
        *pcVar7 == '\0')))) ||
      ((8 < param_2 &&
       (pcVar7 = (char *)FUN_143590b70(param_3 + 0x100,local_res10,local_res20), plVar9 = local_c8,
       *pcVar7 == '\0')))) ||
     ((9 < param_2 &&
      (pcVar7 = (char *)FUN_1435911f0(param_3 + 0x120,local_res10,&local_c8), plVar9 = local_c8,
      *pcVar7 == '\0')))) goto LAB_14353a32a;
  if (10 < param_2) {
    cVar5 = FUN_1435909c0(param_3 + 0x140);
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  local_88[0] = 0;
  local_80 = 0;
  fVar14 = *(float *)(lVar3 + 0x4c);
  fVar16 = (float)local_b0 * 20.0;
  *(float *)(lVar3 + 0x4c) = fVar14;
  *(float *)(lVar3 + 0x48) = fVar16;
  fVar13 = _guard_xfg_dispatch_icall_nop(fVar14);
  fVar14 = _guard_xfg_dispatch_icall_nop(fVar14);
  *(float *)(lVar3 + 0x28) = fVar13 * fVar16;
  *(float *)(lVar3 + 0x2c) = fVar14 * fVar16;
  *(char *)(*(longlong *)(param_1 + 0x40) + 0x37) = (char)(longlong)(local_a8 * 255.0);
  dVar15 = 0.0;
  if (0.0 <= local_a0) {
    dVar15 = local_a0;
  }
  *(float *)(*(longlong *)(param_1 + 0x40) + 0x20) = (float)dVar15 * 20.0;
  dVar15 = 0.0;
  if (0.0 <= local_98) {
    dVar15 = local_98;
  }
  *(float *)(*(longlong *)(param_1 + 0x40) + 0x24) = (float)dVar15 * 20.0;
  *(float *)(*(longlong *)(param_1 + 0x40) + 0x30) = (float)local_90;
  uVar12 = 0xf;
  if (local_res20[0] < 0xf) {
    uVar12 = local_res20[0];
  }
  *(uint *)(*(longlong *)(param_1 + 0x40) + 0x1c) = uVar12;
  lVar3 = *(longlong *)(param_1 + 0x40);
  *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) & 0xffffff5f;
  lVar11 = lVar10;
  do {
    lVar8 = lVar11 + 1;
    if (*(char *)(*local_c8 + lVar11) != "inner"[lVar11]) goto LAB_14353a2b1;
    lVar11 = lVar8;
  } while (lVar8 != 6);
  uVar12 = *(uint *)(lVar3 + 0x18) | 0x20;
LAB_14353a2cb:
  *(uint *)(lVar3 + 0x18) = uVar12;
  goto LAB_14353a2cf;
  while (lVar10 = lVar11, lVar11 != 6) {
LAB_14353a2b1:
    lVar11 = lVar10 + 1;
    if (*(char *)(*local_c8 + lVar10) != "outer"[lVar10]) {
      uVar12 = *(uint *)(lVar3 + 0x18) | 0x80;
      goto LAB_14353a2cb;
    }
  }
LAB_14353a2cf:
  lVar10 = *(longlong *)(param_1 + 0x40);
  puVar1 = (uint *)(lVar10 + 0x18);
  *puVar1 = *puVar1 & 0xffffffef;
  puVar1 = (uint *)(lVar10 + 0x18);
  *puVar1 = *puVar1 | -(uint)(cVar5 != '\0') & 0x10;
  FUN_143539d70(param_1);
  plVar9 = local_c8;
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
      plVar9 = local_c8;
    }
    else {
      FUN_143592150();
      plVar9 = local_c8;
    }
  }
LAB_14353a32a:
  plVar9 = plVar9 + 3;
  *(int *)plVar9 = (int)*plVar9 + -1;
  if ((int)*plVar9 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14353a350 FUN_14353a350 body=117 status=ok
// SIG undefined FUN_14353a350(void)

void FUN_14353a350(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x48);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 14353a3d0 alphasSet body=34 status=ok
// SIG undefined alphasSet(void)

void Scaleform::GFx::AS3::Instances::fl_filters::GradientBevelFilter::alphasSet
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1434f0700(param_1 + 0x48,param_3);
  FUN_143539d70(param_1);
  return;
}



// FUNCTION 14353a4f0 FUN_14353a4f0 body=117 status=ok
// SIG undefined FUN_14353a4f0(void)

void FUN_14353a4f0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x58);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 14353a570 colorsSet body=34 status=ok
// SIG undefined colorsSet(void)

void Scaleform::GFx::AS3::Instances::fl_filters::GradientBevelFilter::colorsSet
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1434f0700(param_1 + 0x58,param_3);
  FUN_143539d70(param_1);
  return;
}



// FUNCTION 14353a5c0 FUN_14353a5c0 body=121 status=ok
// SIG undefined FUN_14353a5c0(void)

void FUN_14353a5c0(longlong param_1,undefined8 param_2,double param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  fVar3 = *(float *)(lVar1 + 0x4c);
  *(float *)(lVar1 + 0x4c) = fVar3;
  fVar4 = (float)param_3 * 20.0;
  *(float *)(lVar1 + 0x48) = fVar4;
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar3);
  fVar3 = _guard_xfg_dispatch_icall_nop(fVar3);
  *(float *)(lVar1 + 0x28) = fVar2 * fVar4;
  *(float *)(lVar1 + 0x2c) = fVar3 * fVar4;
  return;
}



// FUNCTION 14353a6b0 FUN_14353a6b0 body=117 status=ok
// SIG undefined FUN_14353a6b0(void)

void FUN_14353a6b0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x50);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 14353a730 FUN_14353a730 body=34 status=ok
// SIG undefined FUN_14353a730(void)

void FUN_14353a730(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1434f0700(param_1 + 0x50,param_3);
  FUN_143539d70(param_1);
  return;
}



// FUNCTION 14353a7a0 FUN_14353a7a0 body=62 status=ok
// SIG undefined FUN_14353a7a0(void)

void FUN_14353a7a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 14353a870 FUN_14353a870 body=1061 status=ok
// SIG undefined FUN_14353a870(void)

void FUN_14353a870(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint local_res8 [2];
  uint local_res10;
  uint local_c8 [2];
  undefined8 local_c0;
  
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  lVar10 = FUN_1435b5bc0(uVar7);
  uVar17 = 0;
  uVar11 = uVar17;
  if (lVar10 != 0) {
    uVar11 = FUN_143539ca0(lVar10,uVar7);
  }
  puVar1 = (ulonglong *)(param_1 + 0x58);
  lVar10 = *(longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
  piVar2 = (int *)(lVar10 + 0x60);
  *piVar2 = *piVar2 + 1;
  fVar22 = *(float *)(*(longlong *)(param_1 + 0x40) + 0x48);
  bVar6 = *(byte *)(*(longlong *)(param_1 + 0x40) + 0x37);
  uVar13 = uVar17;
  if (puVar1 != (ulonglong *)local_res8) {
    uVar13 = *puVar1;
    if (uVar13 != 0) {
      *(uint *)(uVar13 + 8) = *(int *)(uVar13 + 8) + 1U & 0x8fffffff;
    }
    uVar13 = *puVar1;
  }
  puVar1 = (ulonglong *)(param_1 + 0x48);
  uVar15 = uVar17;
  if (puVar1 != (ulonglong *)local_res8) {
    uVar15 = *puVar1;
    if (uVar15 != 0) {
      *(uint *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1U & 0x8fffffff;
    }
    uVar15 = *puVar1;
  }
  puVar1 = (ulonglong *)(param_1 + 0x50);
  uVar14 = uVar17;
  if (puVar1 != (ulonglong *)local_res8) {
    uVar14 = *puVar1;
    if (uVar14 != 0) {
      *(uint *)(uVar14 + 8) = *(int *)(uVar14 + 8) + 1U & 0x8fffffff;
    }
    uVar14 = *puVar1;
  }
  lVar8 = *(longlong *)(param_1 + 0x40);
  plVar9 = *(longlong **)(param_1 + 0x60);
  fVar20 = *(float *)(lVar8 + 0x20);
  fVar23 = *(float *)(lVar8 + 0x24);
  uVar5 = *(undefined4 *)(lVar8 + 0x30);
  local_res10 = *(uint *)(lVar8 + 0x1c);
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  piVar2 = (int *)(lVar10 + 0x60);
  *piVar2 = *piVar2 + -1;
  fVar20 = fVar20 * 0.05;
  fVar23 = fVar23 * 0.05;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_c8[0] = 0;
  local_c0 = 0;
  lVar10 = *(longlong *)(uVar11 + 0x40);
  fVar24 = fVar22 * 0.05 * 20.0;
  local_res8[0] = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x18) >> 4 & 0xffffff01;
  fVar22 = *(float *)(lVar10 + 0x4c);
  *(float *)(lVar10 + 0x4c) = fVar22;
  *(float *)(lVar10 + 0x48) = fVar24;
  fVar21 = _guard_xfg_dispatch_icall_nop(fVar22);
  fVar22 = _guard_xfg_dispatch_icall_nop(fVar22);
  *(float *)(lVar10 + 0x28) = fVar21 * fVar24;
  *(float *)(lVar10 + 0x2c) = fVar22 * fVar24;
  *(char *)(lVar10 + 0x37) = (char)(longlong)(((double)bVar6 / 255.0) * 255.0);
  FUN_1434f0700(uVar11 + 0x58,uVar13);
  FUN_143539d70(uVar11);
  FUN_1434f0700(uVar11 + 0x48,uVar15);
  FUN_143539d70(uVar11);
  FUN_1434f0700(uVar11 + 0x50,uVar14);
  FUN_143539d70(uVar11);
  fVar22 = 0.0;
  if (0.0 <= fVar20) {
    fVar22 = fVar20;
  }
  uVar16 = 0xf;
  if (local_res10 < 0xf) {
    uVar16 = local_res10;
  }
  fVar20 = 0.0;
  if (0.0 <= fVar23) {
    fVar20 = fVar23;
  }
  *(float *)(*(longlong *)(uVar11 + 0x40) + 0x20) = fVar22 * 20.0;
  *(float *)(*(longlong *)(uVar11 + 0x40) + 0x24) = fVar20 * 20.0;
  *(undefined4 *)(*(longlong *)(uVar11 + 0x40) + 0x30) = uVar5;
  *(uint *)(*(longlong *)(uVar11 + 0x40) + 0x1c) = uVar16;
  lVar10 = *(longlong *)(uVar11 + 0x40);
  *(uint *)(lVar10 + 0x18) = *(uint *)(lVar10 + 0x18) & 0xffffff5f;
  uVar18 = uVar17;
  do {
    uVar12 = uVar18 + 1;
    if (*(char *)(*plVar9 + uVar18) != "inner"[uVar18]) goto LAB_14353ab51;
    uVar18 = uVar12;
  } while (uVar12 != 6);
  uVar16 = *(uint *)(lVar10 + 0x18) | 0x20;
LAB_14353ab6d:
  *(uint *)(lVar10 + 0x18) = uVar16;
  goto LAB_14353ab71;
  while (uVar17 = uVar18, uVar18 != 6) {
LAB_14353ab51:
    uVar18 = uVar17 + 1;
    if (*(char *)(*plVar9 + uVar17) != "outer"[uVar17]) {
      uVar16 = *(uint *)(lVar10 + 0x18) | 0x80;
      goto LAB_14353ab6d;
    }
  }
LAB_14353ab71:
  lVar10 = *(longlong *)(uVar11 + 0x40);
  puVar3 = (uint *)(lVar10 + 0x18);
  *puVar3 = *puVar3 & 0xffffffef;
  bVar19 = (char)local_res8[0] != '\0';
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,-(char)local_res8[0]);
  puVar3 = (uint *)(lVar10 + 0x18);
  *puVar3 = *puVar3 | -(uint)bVar19 & 0x10;
  uVar17 = *param_2;
  if (uVar11 != uVar17) {
    if (uVar17 != 0) {
      if ((uVar17 & 1) == 0) {
        if ((*(uint *)(uVar17 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar17 + 8) = *(uint *)(uVar17 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar17 - 1;
      }
    }
    *param_2 = uVar11;
  }
  if (9 < ((byte)local_c8[0] & 0x1f)) {
    if ((local_c8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_c8);
    }
    else {
      FUN_143592150();
    }
  }
  plVar4 = plVar9 + 3;
  *(int *)plVar4 = (int)*plVar4 + -1;
  if ((int)*plVar4 == 0) {
    FUN_14335f920(plVar9);
  }
  if (((uVar14 != 0) && ((uVar14 & 1) == 0)) && ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
    FUN_1434ef880(uVar14);
  }
  if (((uVar15 != 0) && ((uVar15 & 1) == 0)) && ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
    FUN_1434ef880(uVar15);
  }
  if (((uVar13 != 0) && ((uVar13 & 1) == 0)) && ((*(uint *)(uVar13 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar13 + 8) = *(uint *)(uVar13 + 8) - 1;
    FUN_1434ef880(uVar13);
  }
  return;
}



// FUNCTION 14353aca0 FUN_14353aca0 body=30 status=ok
// SIG undefined FUN_14353aca0(void)

undefined8 * FUN_14353aca0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14353a350();
  return param_2;
}



// FUNCTION 14353acd0 FUN_14353acd0 body=30 status=ok
// SIG undefined FUN_14353acd0(void)

undefined8 * FUN_14353acd0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14353a4f0();
  return param_2;
}



// FUNCTION 14353ad00 FUN_14353ad00 body=30 status=ok
// SIG undefined FUN_14353ad00(void)

undefined8 * FUN_14353ad00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14353a6b0();
  return param_2;
}



// FUNCTION 14353ad30 FUN_14353ad30 body=30 status=ok
// SIG undefined FUN_14353ad30(void)

undefined8 * FUN_14353ad30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14353a870();
  return param_2;
}



// FUNCTION 14353ad60 FUN_14353ad60 body=33 status=ok
// SIG undefined FUN_14353ad60(void)

undefined8 * FUN_14353ad60(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b31ab8;
  return param_1;
}



// FUNCTION 14353ad90 FUN_14353ad90 body=141 status=ok
// SIG undefined FUN_14353ad90(void)

void FUN_14353ad90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143539ca0(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14353ae30 FUN_14353ae30 body=33 status=ok
// SIG undefined FUN_14353ae30(void)

undefined8 * FUN_14353ae30(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14353ae60 FUN_14353ae60 body=214 status=ok
// SIG undefined FUN_14353ae60(void)

undefined8 * FUN_14353ae60(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b30290);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b30290);
    *puVar2 = &PTR_FUN_145b31ab8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14353af40 FUN_14353af40 body=198 status=ok
// SIG undefined FUN_14353af40(void)

undefined8 * FUN_14353af40(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  UInterpTrackInst::UInterpTrackInst();
  uVar3 = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_145b31b30;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xc] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[0xd] = 0;
  lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x58,0);
  if (lVar2 != 0) {
    uVar3 = FUN_1432d05e0(lVar2,4,0,0x40800000,0x3f490fdb,0x40800000,0x40800000,1);
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  param_1[8] = uVar3;
  return param_1;
}



// FUNCTION 14353b010 FUN_14353b010 body=257 status=ok
// SIG undefined FUN_14353b010(void)

void FUN_14353b010(longlong param_1)

{
  char cVar1;
  RefCountImpl *this;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar3 = 0;
  lVar2 = lVar3;
  do {
    lVar4 = lVar2;
    cVar1 = *(char *)(**(longlong **)(param_1 + 0x60) + lVar4);
    bVar5 = cVar1 == "radial"[lVar4];
    if (!bVar5) goto LAB_14353b059;
    lVar2 = lVar4 + 1;
  } while (lVar4 + 1 != 7);
  bVar5 = cVar1 == "radial"[lVar4];
LAB_14353b059:
  if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  if ((*(longlong *)(param_1 + 0x58) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
    if (lVar2 != 0) {
      lVar3 = FUN_143321870(lVar2,bVar5,*(undefined2 *)(*(longlong *)(param_1 + 0x58) + 0x40),0);
    }
    if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x68));
    }
    *(longlong *)(param_1 + 0x68) = lVar3;
    FUN_143501080(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x48),
                  *(undefined8 *)(param_1 + 0x50),lVar3);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x68));
  }
  this = *(RefCountImpl **)(lVar2 + 0x40);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(param_1 + 0x68);
  return;
}



// FUNCTION 14353b120 FUN_14353b120 body=1219 status=ok
// SIG undefined FUN_14353b120(void)

void FUN_14353b120(longlong param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  undefined4 local_res10 [4];
  uint local_res20 [2];
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  uint local_88 [2];
  undefined8 local_80;
  
  lVar10 = 0;
  local_res10[0] = 0;
  if (0xb < param_2) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar6 = FUN_1435c8e40(local_c0,0x427,uVar2);
    FUN_1435cbef0(uVar2,uVar6);
    plVar9 = local_b8;
    goto LAB_14353b5ca;
  }
  local_a8 = 45.0;
  local_90 = 1.0;
  local_b0 = 4.0;
  local_a0 = 4.0;
  local_98 = 4.0;
  local_res20[0] = 1;
  cVar5 = '\0';
  local_c8 = (longlong *)
             FUN_143360950(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218),
                           "inner",5);
  *(int *)(local_c8 + 3) = (int)local_c8[3] + 1;
  if (((param_2 != 0) &&
      (pcVar7 = (char *)FUN_143590af0(param_3,local_res10,&local_b0), plVar9 = local_c8,
      *pcVar7 == '\0')) ||
     ((1 < param_2 &&
      (pcVar7 = (char *)FUN_143590af0(param_3 + 0x20,local_res10,&local_a8), plVar9 = local_c8,
      *pcVar7 == '\0')))) goto LAB_14353b5ca;
  if (2 < param_2) {
    cVar4 = FUN_14353ffc0(param_3 + 0x40);
    if ((cVar4 != '\0') ||
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98),
       cVar4 = FUN_1435c8b00(lVar3,param_3 + 0x40,"Array",*(undefined8 *)(lVar3 + 0x1c8)),
       cVar4 != '\0')) {
      FUN_1434f0700(param_1 + 0x58,*(undefined8 *)(param_3 + 0x50));
      goto LAB_14353b27d;
    }
LAB_14353b304:
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar6 = FUN_1435c8e40(local_c0,0x40a,uVar2);
    FUN_1435cbe70(uVar2,uVar6);
    local_b8 = local_b8 + 3;
    *(int *)local_b8 = (int)*local_b8 + -1;
    plVar9 = local_c8;
    if ((int)*local_b8 == 0) {
      FUN_14335f920();
      plVar9 = local_c8;
    }
    goto LAB_14353b5ca;
  }
LAB_14353b27d:
  if (3 < param_2) {
    cVar4 = FUN_14353ffc0(param_3 + 0x60);
    if ((cVar4 == '\0') &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98),
       cVar4 = FUN_1435c8b00(lVar3,param_3 + 0x60,"Array",*(undefined8 *)(lVar3 + 0x1c8)),
       cVar4 == '\0')) goto LAB_14353b304;
    FUN_1434f0700(param_1 + 0x48,*(undefined8 *)(param_3 + 0x70));
  }
  if (4 < param_2) {
    cVar4 = FUN_14353ffc0(param_3 + 0x80);
    if ((cVar4 == '\0') &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98),
       cVar4 = FUN_1435c8b00(lVar3,param_3 + 0x80,"Array",*(undefined8 *)(lVar3 + 0x1c8)),
       cVar4 == '\0')) goto LAB_14353b304;
    FUN_1434f0700(param_1 + 0x50,*(undefined8 *)(param_3 + 0x90));
  }
  if ((((((5 < param_2) &&
         (pcVar7 = (char *)FUN_143590af0(param_3 + 0xa0,local_res10,&local_a0), plVar9 = local_c8,
         *pcVar7 == '\0')) ||
        ((6 < param_2 &&
         (pcVar7 = (char *)FUN_143590af0(param_3 + 0xc0,local_res10,&local_98), plVar9 = local_c8,
         *pcVar7 == '\0')))) ||
       ((7 < param_2 &&
        (pcVar7 = (char *)FUN_143590af0(param_3 + 0xe0,local_res10,&local_90), plVar9 = local_c8,
        *pcVar7 == '\0')))) ||
      ((8 < param_2 &&
       (pcVar7 = (char *)FUN_143590b70(param_3 + 0x100,local_res10,local_res20), plVar9 = local_c8,
       *pcVar7 == '\0')))) ||
     ((9 < param_2 &&
      (pcVar7 = (char *)FUN_1435911f0(param_3 + 0x120,local_res10,&local_c8), plVar9 = local_c8,
      *pcVar7 == '\0')))) goto LAB_14353b5ca;
  if (10 < param_2) {
    cVar5 = FUN_1435909c0(param_3 + 0x140);
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  local_88[0] = 0;
  local_80 = 0;
  fVar14 = *(float *)(lVar3 + 0x4c);
  fVar16 = (float)local_b0 * 20.0;
  *(float *)(lVar3 + 0x4c) = fVar14;
  *(float *)(lVar3 + 0x48) = fVar16;
  fVar13 = _guard_xfg_dispatch_icall_nop(fVar14);
  fVar14 = _guard_xfg_dispatch_icall_nop(fVar14);
  *(float *)(lVar3 + 0x28) = fVar13 * fVar16;
  *(float *)(lVar3 + 0x2c) = fVar14 * fVar16;
  *(char *)(*(longlong *)(param_1 + 0x40) + 0x37) = (char)(longlong)(local_a8 * 255.0);
  dVar15 = 0.0;
  if (0.0 <= local_a0) {
    dVar15 = local_a0;
  }
  *(float *)(*(longlong *)(param_1 + 0x40) + 0x20) = (float)dVar15 * 20.0;
  dVar15 = 0.0;
  if (0.0 <= local_98) {
    dVar15 = local_98;
  }
  *(float *)(*(longlong *)(param_1 + 0x40) + 0x24) = (float)dVar15 * 20.0;
  *(float *)(*(longlong *)(param_1 + 0x40) + 0x30) = (float)local_90;
  uVar12 = 0xf;
  if (local_res20[0] < 0xf) {
    uVar12 = local_res20[0];
  }
  *(uint *)(*(longlong *)(param_1 + 0x40) + 0x1c) = uVar12;
  lVar3 = *(longlong *)(param_1 + 0x40);
  *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) & 0xffffff5f;
  lVar11 = lVar10;
  do {
    lVar8 = lVar11 + 1;
    if (*(char *)(*local_c8 + lVar11) != "inner"[lVar11]) goto LAB_14353b551;
    lVar11 = lVar8;
  } while (lVar8 != 6);
  uVar12 = *(uint *)(lVar3 + 0x18) | 0x20;
LAB_14353b56b:
  *(uint *)(lVar3 + 0x18) = uVar12;
  goto LAB_14353b56f;
  while (lVar10 = lVar11, lVar11 != 6) {
LAB_14353b551:
    lVar11 = lVar10 + 1;
    if (*(char *)(*local_c8 + lVar10) != "outer"[lVar10]) {
      uVar12 = *(uint *)(lVar3 + 0x18) | 0x80;
      goto LAB_14353b56b;
    }
  }
LAB_14353b56f:
  lVar10 = *(longlong *)(param_1 + 0x40);
  puVar1 = (uint *)(lVar10 + 0x18);
  *puVar1 = *puVar1 & 0xffffffef;
  puVar1 = (uint *)(lVar10 + 0x18);
  *puVar1 = *puVar1 | -(uint)(cVar5 != '\0') & 0x10;
  FUN_14353b010(param_1);
  plVar9 = local_c8;
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
      plVar9 = local_c8;
    }
    else {
      FUN_143592150();
      plVar9 = local_c8;
    }
  }
LAB_14353b5ca:
  plVar9 = plVar9 + 3;
  *(int *)plVar9 = (int)*plVar9 + -1;
  if ((int)*plVar9 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14353b5f0 FUN_14353b5f0 body=117 status=ok
// SIG undefined FUN_14353b5f0(void)

void FUN_14353b5f0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x48);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 14353b670 alphasSet body=34 status=ok
// SIG undefined alphasSet(void)

void Scaleform::GFx::AS3::Instances::fl_filters::GradientBevelFilter::alphasSet
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1434f0700(param_1 + 0x48,param_3);
  FUN_14353b010(param_1);
  return;
}



// FUNCTION 14353b790 FUN_14353b790 body=117 status=ok
// SIG undefined FUN_14353b790(void)

void FUN_14353b790(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x58);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 14353b810 colorsSet body=34 status=ok
// SIG undefined colorsSet(void)

void Scaleform::GFx::AS3::Instances::fl_filters::GradientBevelFilter::colorsSet
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1434f0700(param_1 + 0x58,param_3);
  FUN_14353b010(param_1);
  return;
}



// FUNCTION 14353b860 FUN_14353b860 body=121 status=ok
// SIG undefined FUN_14353b860(void)

void FUN_14353b860(longlong param_1,undefined8 param_2,double param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  fVar3 = *(float *)(lVar1 + 0x4c);
  *(float *)(lVar1 + 0x4c) = fVar3;
  fVar4 = (float)param_3 * 20.0;
  *(float *)(lVar1 + 0x48) = fVar4;
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar3);
  fVar3 = _guard_xfg_dispatch_icall_nop(fVar3);
  *(float *)(lVar1 + 0x28) = fVar2 * fVar4;
  *(float *)(lVar1 + 0x2c) = fVar3 * fVar4;
  return;
}



// FUNCTION 14353b950 FUN_14353b950 body=117 status=ok
// SIG undefined FUN_14353b950(void)

void FUN_14353b950(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x50);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 14353b9d0 FUN_14353b9d0 body=34 status=ok
// SIG undefined FUN_14353b9d0(void)

void FUN_14353b9d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1434f0700(param_1 + 0x50,param_3);
  FUN_14353b010(param_1);
  return;
}



// FUNCTION 14353ba40 FUN_14353ba40 body=62 status=ok
// SIG undefined FUN_14353ba40(void)

void FUN_14353ba40(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 14353bb10 FUN_14353bb10 body=1061 status=ok
// SIG undefined FUN_14353bb10(void)

void FUN_14353bb10(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint local_res8 [2];
  uint local_res10;
  uint local_c8 [2];
  undefined8 local_c0;
  
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  lVar10 = FUN_1435b5bc0(uVar7);
  uVar17 = 0;
  uVar11 = uVar17;
  if (lVar10 != 0) {
    uVar11 = FUN_14353af40(lVar10,uVar7);
  }
  puVar1 = (ulonglong *)(param_1 + 0x58);
  lVar10 = *(longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
  piVar2 = (int *)(lVar10 + 0x60);
  *piVar2 = *piVar2 + 1;
  fVar22 = *(float *)(*(longlong *)(param_1 + 0x40) + 0x48);
  bVar6 = *(byte *)(*(longlong *)(param_1 + 0x40) + 0x37);
  uVar13 = uVar17;
  if (puVar1 != (ulonglong *)local_res8) {
    uVar13 = *puVar1;
    if (uVar13 != 0) {
      *(uint *)(uVar13 + 8) = *(int *)(uVar13 + 8) + 1U & 0x8fffffff;
    }
    uVar13 = *puVar1;
  }
  puVar1 = (ulonglong *)(param_1 + 0x48);
  uVar15 = uVar17;
  if (puVar1 != (ulonglong *)local_res8) {
    uVar15 = *puVar1;
    if (uVar15 != 0) {
      *(uint *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1U & 0x8fffffff;
    }
    uVar15 = *puVar1;
  }
  puVar1 = (ulonglong *)(param_1 + 0x50);
  uVar14 = uVar17;
  if (puVar1 != (ulonglong *)local_res8) {
    uVar14 = *puVar1;
    if (uVar14 != 0) {
      *(uint *)(uVar14 + 8) = *(int *)(uVar14 + 8) + 1U & 0x8fffffff;
    }
    uVar14 = *puVar1;
  }
  lVar8 = *(longlong *)(param_1 + 0x40);
  plVar9 = *(longlong **)(param_1 + 0x60);
  fVar20 = *(float *)(lVar8 + 0x20);
  fVar23 = *(float *)(lVar8 + 0x24);
  uVar5 = *(undefined4 *)(lVar8 + 0x30);
  local_res10 = *(uint *)(lVar8 + 0x1c);
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  piVar2 = (int *)(lVar10 + 0x60);
  *piVar2 = *piVar2 + -1;
  fVar20 = fVar20 * 0.05;
  fVar23 = fVar23 * 0.05;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
  local_c8[0] = 0;
  local_c0 = 0;
  lVar10 = *(longlong *)(uVar11 + 0x40);
  fVar24 = fVar22 * 0.05 * 20.0;
  local_res8[0] = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x18) >> 4 & 0xffffff01;
  fVar22 = *(float *)(lVar10 + 0x4c);
  *(float *)(lVar10 + 0x4c) = fVar22;
  *(float *)(lVar10 + 0x48) = fVar24;
  fVar21 = _guard_xfg_dispatch_icall_nop(fVar22);
  fVar22 = _guard_xfg_dispatch_icall_nop(fVar22);
  *(float *)(lVar10 + 0x28) = fVar21 * fVar24;
  *(float *)(lVar10 + 0x2c) = fVar22 * fVar24;
  *(char *)(lVar10 + 0x37) = (char)(longlong)(((double)bVar6 / 255.0) * 255.0);
  FUN_1434f0700(uVar11 + 0x58,uVar13);
  FUN_14353b010(uVar11);
  FUN_1434f0700(uVar11 + 0x48,uVar15);
  FUN_14353b010(uVar11);
  FUN_1434f0700(uVar11 + 0x50,uVar14);
  FUN_14353b010(uVar11);
  fVar22 = 0.0;
  if (0.0 <= fVar20) {
    fVar22 = fVar20;
  }
  uVar16 = 0xf;
  if (local_res10 < 0xf) {
    uVar16 = local_res10;
  }
  fVar20 = 0.0;
  if (0.0 <= fVar23) {
    fVar20 = fVar23;
  }
  *(float *)(*(longlong *)(uVar11 + 0x40) + 0x20) = fVar22 * 20.0;
  *(float *)(*(longlong *)(uVar11 + 0x40) + 0x24) = fVar20 * 20.0;
  *(undefined4 *)(*(longlong *)(uVar11 + 0x40) + 0x30) = uVar5;
  *(uint *)(*(longlong *)(uVar11 + 0x40) + 0x1c) = uVar16;
  lVar10 = *(longlong *)(uVar11 + 0x40);
  *(uint *)(lVar10 + 0x18) = *(uint *)(lVar10 + 0x18) & 0xffffff5f;
  uVar18 = uVar17;
  do {
    uVar12 = uVar18 + 1;
    if (*(char *)(*plVar9 + uVar18) != "inner"[uVar18]) goto LAB_14353bdf1;
    uVar18 = uVar12;
  } while (uVar12 != 6);
  uVar16 = *(uint *)(lVar10 + 0x18) | 0x20;
LAB_14353be0d:
  *(uint *)(lVar10 + 0x18) = uVar16;
  goto LAB_14353be11;
  while (uVar17 = uVar18, uVar18 != 6) {
LAB_14353bdf1:
    uVar18 = uVar17 + 1;
    if (*(char *)(*plVar9 + uVar17) != "outer"[uVar17]) {
      uVar16 = *(uint *)(lVar10 + 0x18) | 0x80;
      goto LAB_14353be0d;
    }
  }
LAB_14353be11:
  lVar10 = *(longlong *)(uVar11 + 0x40);
  puVar3 = (uint *)(lVar10 + 0x18);
  *puVar3 = *puVar3 & 0xffffffef;
  bVar19 = (char)local_res8[0] != '\0';
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,-(char)local_res8[0]);
  puVar3 = (uint *)(lVar10 + 0x18);
  *puVar3 = *puVar3 | -(uint)bVar19 & 0x10;
  uVar17 = *param_2;
  if (uVar11 != uVar17) {
    if (uVar17 != 0) {
      if ((uVar17 & 1) == 0) {
        if ((*(uint *)(uVar17 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar17 + 8) = *(uint *)(uVar17 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar17 - 1;
      }
    }
    *param_2 = uVar11;
  }
  if (9 < ((byte)local_c8[0] & 0x1f)) {
    if ((local_c8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_c8);
    }
    else {
      FUN_143592150();
    }
  }
  plVar4 = plVar9 + 3;
  *(int *)plVar4 = (int)*plVar4 + -1;
  if ((int)*plVar4 == 0) {
    FUN_14335f920(plVar9);
  }
  if (((uVar14 != 0) && ((uVar14 & 1) == 0)) && ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
    FUN_1434ef880(uVar14);
  }
  if (((uVar15 != 0) && ((uVar15 & 1) == 0)) && ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
    FUN_1434ef880(uVar15);
  }
  if (((uVar13 != 0) && ((uVar13 & 1) == 0)) && ((*(uint *)(uVar13 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar13 + 8) = *(uint *)(uVar13 + 8) - 1;
    FUN_1434ef880(uVar13);
  }
  return;
}



// FUNCTION 14353bf40 FUN_14353bf40 body=30 status=ok
// SIG undefined FUN_14353bf40(void)

undefined8 * FUN_14353bf40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14353b5f0();
  return param_2;
}



// FUNCTION 14353bf70 FUN_14353bf70 body=30 status=ok
// SIG undefined FUN_14353bf70(void)

undefined8 * FUN_14353bf70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14353b790();
  return param_2;
}



// FUNCTION 14353bfa0 FUN_14353bfa0 body=30 status=ok
// SIG undefined FUN_14353bfa0(void)

undefined8 * FUN_14353bfa0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14353b950();
  return param_2;
}



// FUNCTION 14353bfd0 FUN_14353bfd0 body=30 status=ok
// SIG undefined FUN_14353bfd0(void)

undefined8 * FUN_14353bfd0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14353bb10();
  return param_2;
}



// FUNCTION 14353c000 FUN_14353c000 body=33 status=ok
// SIG undefined FUN_14353c000(void)

undefined8 * FUN_14353c000(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b31bf0;
  return param_1;
}



// FUNCTION 14353c030 FUN_14353c030 body=141 status=ok
// SIG undefined FUN_14353c030(void)

void FUN_14353c030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_14353af40(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14353c0d0 FUN_14353c0d0 body=33 status=ok
// SIG undefined FUN_14353c0d0(void)

undefined8 * FUN_14353c0d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14353c100 FUN_14353c100 body=214 status=ok
// SIG undefined FUN_14353c100(void)

undefined8 * FUN_14353c100(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b2ebd8);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b2ebd8);
    *puVar2 = &PTR_FUN_145b31bf0;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14353c1e0 FUN_14353c1e0 body=33 status=ok
// SIG undefined FUN_14353c1e0(void)

undefined8 * FUN_14353c1e0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14353c210 FUN_14353c210 body=214 status=ok
// SIG undefined FUN_14353c210(void)

undefined8 * FUN_14353c210(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b2fb40);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b2fb40);
    *puVar2 = &PTR_FUN_145b311d8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14353c350 FUN_14353c350 body=148 status=ok
// SIG undefined FUN_14353c350(void)

void FUN_14353c350(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77bb0)(DAT_146b77bb8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353c420 FUN_14353c420 body=148 status=ok
// SIG undefined FUN_14353c420(void)

void FUN_14353c420(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b78020)(DAT_146b78028 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353c4c0 FUN_14353c4c0 body=145 status=ok
// SIG undefined FUN_14353c4c0(void)

void FUN_14353c4c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b77880)((longlong)DAT_146b77888 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353c590 FUN_14353c590 body=148 status=ok
// SIG undefined FUN_14353c590(void)

void FUN_14353c590(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77ca0)(DAT_146b77ca8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353c690 FUN_14353c690 body=144 status=ok
// SIG undefined FUN_14353c690(void)

void FUN_14353c690(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b77bd0)((longlong)DAT_146b77bd8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353c750 FUN_14353c750 body=112 status=ok
// SIG undefined FUN_14353c750(void)

void FUN_14353c750(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b78040)(DAT_146b78048 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14353c7c0 FUN_14353c7c0 body=148 status=ok
// SIG undefined FUN_14353c7c0(void)

void FUN_14353c7c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b778a0)(DAT_146b778a8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353c890 FUN_14353c890 body=148 status=ok
// SIG undefined FUN_14353c890(void)

void FUN_14353c890(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77cc0)(DAT_146b77cc8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353c930 FUN_14353c930 body=132 status=ok
// SIG undefined FUN_14353c930(void)

void FUN_14353c930(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78050)(DAT_146b78058 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14353c9f0 FUN_14353c9f0 body=144 status=ok
// SIG undefined FUN_14353c9f0(void)

void FUN_14353c9f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b77bf0)((longlong)DAT_146b77bf8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353cab0 FUN_14353cab0 body=175 status=ok
// SIG undefined FUN_14353cab0(void)

void FUN_14353cab0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b77d90)((longlong)DAT_146b77d98 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353cb60 FUN_14353cb60 body=175 status=ok
// SIG undefined FUN_14353cb60(void)

void FUN_14353cb60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78060)((longlong)DAT_146b78068 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353cc10 FUN_14353cc10 body=145 status=ok
// SIG undefined FUN_14353cc10(void)

void FUN_14353cc10(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b778c0)((longlong)DAT_146b778c8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353cce0 FUN_14353cce0 body=145 status=ok
// SIG undefined FUN_14353cce0(void)

void FUN_14353cce0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b77ce0)((longlong)DAT_146b77ce8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353cde0 FUN_14353cde0 body=144 status=ok
// SIG undefined FUN_14353cde0(void)

void FUN_14353cde0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b77c10)((longlong)DAT_146b77c18 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353cea0 FUN_14353cea0 body=148 status=ok
// SIG undefined FUN_14353cea0(void)

void FUN_14353cea0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77db0)(DAT_146b77db8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353cf40 FUN_14353cf40 body=148 status=ok
// SIG undefined FUN_14353cf40(void)

void FUN_14353cf40(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b778e0)(DAT_146b778e8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353d010 FUN_14353d010 body=144 status=ok
// SIG undefined FUN_14353d010(void)

void FUN_14353d010(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b77d00)((longlong)DAT_146b77d08 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353d100 FUN_14353d100 body=145 status=ok
// SIG undefined FUN_14353d100(void)

void FUN_14353d100(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b77c30)((longlong)DAT_146b77c38 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353d1d0 FUN_14353d1d0 body=148 status=ok
// SIG undefined FUN_14353d1d0(void)

void FUN_14353d1d0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77dd0)(DAT_146b77dd8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353d270 FUN_14353d270 body=112 status=ok
// SIG undefined FUN_14353d270(void)

void FUN_14353d270(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b77900)(DAT_146b77908 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14353d310 FUN_14353d310 body=144 status=ok
// SIG undefined FUN_14353d310(void)

void FUN_14353d310(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b77d20)((longlong)DAT_146b77d28 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353d3d0 FUN_14353d3d0 body=132 status=ok
// SIG undefined FUN_14353d3d0(void)

void FUN_14353d3d0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b77910)(DAT_146b77918 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14353d460 FUN_14353d460 body=148 status=ok
// SIG undefined FUN_14353d460(void)

void FUN_14353d460(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77c50)(DAT_146b77c58 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353d530 FUN_14353d530 body=148 status=ok
// SIG undefined FUN_14353d530(void)

void FUN_14353d530(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77df0)(DAT_146b77df8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353d5d0 FUN_14353d5d0 body=175 status=ok
// SIG undefined FUN_14353d5d0(void)

void FUN_14353d5d0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b77920)((longlong)DAT_146b77928 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353d6b0 FUN_14353d6b0 body=145 status=ok
// SIG undefined FUN_14353d6b0(void)

void FUN_14353d6b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b77d40)((longlong)DAT_146b77d48 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353d780 FUN_14353d780 body=148 status=ok
// SIG undefined FUN_14353d780(void)

void FUN_14353d780(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77940)(DAT_146b77948 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353d820 FUN_14353d820 body=175 status=ok
// SIG undefined FUN_14353d820(void)

void FUN_14353d820(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b77c70)((longlong)DAT_146b77c78 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353d900 FUN_14353d900 body=175 status=ok
// SIG undefined FUN_14353d900(void)

void FUN_14353d900(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b77e10)((longlong)DAT_146b77e18 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353d9e0 FUN_14353d9e0 body=148 status=ok
// SIG undefined FUN_14353d9e0(void)

void FUN_14353d9e0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77d60)(DAT_146b77d68 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353dab0 FUN_14353dab0 body=148 status=ok
// SIG undefined FUN_14353dab0(void)

void FUN_14353dab0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b779e0)(DAT_146b779e8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353db50 FUN_14353db50 body=148 status=ok
// SIG undefined FUN_14353db50(void)

void FUN_14353db50(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77960)(DAT_146b77968 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353dc20 FUN_14353dc20 body=148 status=ok
// SIG undefined FUN_14353dc20(void)

void FUN_14353dc20(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77e30)(DAT_146b77e38 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353dd20 FUN_14353dd20 body=175 status=ok
// SIG undefined FUN_14353dd20(void)

void FUN_14353dd20(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b77d80)((longlong)DAT_146b77d88 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353ddd0 FUN_14353ddd0 body=175 status=ok
// SIG undefined FUN_14353ddd0(void)

void FUN_14353ddd0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b779b0)((longlong)DAT_146b779b8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353deb0 FUN_14353deb0 body=145 status=ok
// SIG undefined FUN_14353deb0(void)

void FUN_14353deb0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b77a00)((longlong)DAT_146b77a08 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353df50 FUN_14353df50 body=145 status=ok
// SIG undefined FUN_14353df50(void)

void FUN_14353df50(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b77980)((longlong)DAT_146b77988 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353e020 FUN_14353e020 body=144 status=ok
// SIG undefined FUN_14353e020(void)

void FUN_14353e020(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b77e50)((longlong)DAT_146b77e58 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353e110 FUN_14353e110 body=175 status=ok
// SIG undefined FUN_14353e110(void)

void FUN_14353e110(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b77f00)((longlong)DAT_146b77f08 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353e1c0 FUN_14353e1c0 body=175 status=ok
// SIG undefined FUN_14353e1c0(void)

void FUN_14353e1c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b779d0)((longlong)DAT_146b779d8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353e2a0 FUN_14353e2a0 body=145 status=ok
// SIG undefined FUN_14353e2a0(void)

void FUN_14353e2a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b77a20)((longlong)DAT_146b77a28 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353e340 FUN_14353e340 body=175 status=ok
// SIG undefined FUN_14353e340(void)

void FUN_14353e340(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b779a0)((longlong)DAT_146b779a8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353e420 FUN_14353e420 body=145 status=ok
// SIG undefined FUN_14353e420(void)

void FUN_14353e420(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b77e70)((longlong)DAT_146b77e78 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353e4f0 FUN_14353e4f0 body=148 status=ok
// SIG undefined FUN_14353e4f0(void)

void FUN_14353e4f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77f20)(DAT_146b77f28 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353e5c0 FUN_14353e5c0 body=145 status=ok
// SIG undefined FUN_14353e5c0(void)

void FUN_14353e5c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b77a40)((longlong)DAT_146b77a48 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353e690 FUN_14353e690 body=148 status=ok
// SIG undefined FUN_14353e690(void)

void FUN_14353e690(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b777a0)(DAT_146b777a8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353e730 FUN_14353e730 body=175 status=ok
// SIG undefined FUN_14353e730(void)

void FUN_14353e730(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b77e90)((longlong)DAT_146b77e98 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353e810 FUN_14353e810 body=148 status=ok
// SIG undefined FUN_14353e810(void)

void FUN_14353e810(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77f40)(DAT_146b77f48 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353e8e0 FUN_14353e8e0 body=175 status=ok
// SIG undefined FUN_14353e8e0(void)

void FUN_14353e8e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b77a60)((longlong)DAT_146b77a68 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353e9f0 FUN_14353e9f0 body=148 status=ok
// SIG undefined FUN_14353e9f0(void)

void FUN_14353e9f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77eb0)(DAT_146b77eb8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353eac0 FUN_14353eac0 body=148 status=ok
// SIG undefined FUN_14353eac0(void)

void FUN_14353eac0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77f60)(DAT_146b77f68 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353eb60 FUN_14353eb60 body=148 status=ok
// SIG undefined FUN_14353eb60(void)

void FUN_14353eb60(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b777c0)(DAT_146b777c8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353ec30 FUN_14353ec30 body=175 status=ok
// SIG undefined FUN_14353ec30(void)

void FUN_14353ec30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b77a80)((longlong)DAT_146b77a88 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353ed40 FUN_14353ed40 body=148 status=ok
// SIG undefined FUN_14353ed40(void)

void FUN_14353ed40(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77b10)(DAT_146b77b18 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353ede0 FUN_14353ede0 body=112 status=ok
// SIG undefined FUN_14353ede0(void)

void FUN_14353ede0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b77ed0)(DAT_146b77ed8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14353ee80 FUN_14353ee80 body=175 status=ok
// SIG undefined FUN_14353ee80(void)

void FUN_14353ee80(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b77f80)((longlong)DAT_146b77f88 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353ef30 FUN_14353ef30 body=148 status=ok
// SIG undefined FUN_14353ef30(void)

void FUN_14353ef30(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b777e0)(DAT_146b777e8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353efd0 FUN_14353efd0 body=175 status=ok
// SIG undefined FUN_14353efd0(void)

void FUN_14353efd0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b77930)((longlong)DAT_146b77938 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353f0b0 FUN_14353f0b0 body=132 status=ok
// SIG undefined FUN_14353f0b0(void)

void FUN_14353f0b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b77ee0)(DAT_146b77ee8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14353f140 FUN_14353f140 body=112 status=ok
// SIG undefined FUN_14353f140(void)

void FUN_14353f140(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b77aa0)(DAT_146b77aa8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14353f210 FUN_14353f210 body=148 status=ok
// SIG undefined FUN_14353f210(void)

void FUN_14353f210(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77b30)(DAT_146b77b38 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353f2b0 FUN_14353f2b0 body=175 status=ok
// SIG undefined FUN_14353f2b0(void)

void FUN_14353f2b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b77ef0)((longlong)DAT_146b77ef8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353f360 FUN_14353f360 body=132 status=ok
// SIG undefined FUN_14353f360(void)

void FUN_14353f360(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 4);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b77ab0)(DAT_146b77ab8 + lVar2,param_4,local_18,param_4,param_2);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14353f3f0 FUN_14353f3f0 body=148 status=ok
// SIG undefined FUN_14353f3f0(void)

void FUN_14353f3f0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77fa0)(DAT_146b77fa8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353f490 FUN_14353f490 body=148 status=ok
// SIG undefined FUN_14353f490(void)

void FUN_14353f490(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77800)(DAT_146b77808 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353f560 FUN_14353f560 body=148 status=ok
// SIG undefined FUN_14353f560(void)

void FUN_14353f560(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77ac0)(DAT_146b77ac8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353f660 FUN_14353f660 body=148 status=ok
// SIG undefined FUN_14353f660(void)

void FUN_14353f660(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77b50)(DAT_146b77b58 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353f730 FUN_14353f730 body=144 status=ok
// SIG undefined FUN_14353f730(void)

void FUN_14353f730(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b77fc0)((longlong)DAT_146b77fc8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353f7c0 FUN_14353f7c0 body=148 status=ok
// SIG undefined FUN_14353f7c0(void)

void FUN_14353f7c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77820)(DAT_146b77828 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353f890 FUN_14353f890 body=148 status=ok
// SIG undefined FUN_14353f890(void)

void FUN_14353f890(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77ae0)(DAT_146b77ae8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353f990 FUN_14353f990 body=148 status=ok
// SIG undefined FUN_14353f990(void)

void FUN_14353f990(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b77b70)(DAT_146b77b78 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14353fa60 FUN_14353fa60 body=145 status=ok
// SIG undefined FUN_14353fa60(void)

void FUN_14353fa60(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b77fe0)((longlong)DAT_146b77fe8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353fb00 FUN_14353fb00 body=145 status=ok
// SIG undefined FUN_14353fb00(void)

void FUN_14353fb00(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b77840)((longlong)DAT_146b77848 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353fbd0 FUN_14353fbd0 body=175 status=ok
// SIG undefined FUN_14353fbd0(void)

void FUN_14353fbd0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b77b00)((longlong)DAT_146b77b08 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14353fce0 FUN_14353fce0 body=145 status=ok
// SIG undefined FUN_14353fce0(void)

void FUN_14353fce0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b77b90)((longlong)DAT_146b77b98 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14353fd80 FUN_14353fd80 body=197 status=ok
// SIG undefined FUN_14353fd80(void)

void FUN_14353fd80(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x68));
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar2 = *(ulonglong *)(param_1 + 0x58);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x58) = uVar2 - 1;
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x50);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x50) = uVar2 - 1;
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x48);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x48) = uVar2 - 1;
    }
  }
  if (*(RefCountImpl **)(param_1 + 0x40) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x40));
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 14353fe50 FUN_14353fe50 body=106 status=ok
// SIG undefined FUN_14353fe50(void)

longlong FUN_14353fe50(longlong param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x40) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x40));
  }
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}


