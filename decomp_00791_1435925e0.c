// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1435925e0 FUN_1435925e0 body=116 status=ok
// SIG undefined FUN_1435925e0(void)

ulonglong * FUN_1435925e0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 != param_1) {
    uVar1 = *param_2 & 0xfffffffffffffffc;
    if (uVar1 != 0) {
      *(uint *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1U & 0x8fffffff;
    }
    uVar1 = *param_1;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 0xfffffffffffffffd;
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_1 = ((ulonglong)((uint)*param_1 & 2) - 1) + uVar2;
      }
    }
    *param_1 = *param_2;
  }
  return param_1;
}



// FUNCTION 143592700 FUN_143592700 body=63 status=ok
// SIG undefined FUN_143592700(void)

bool FUN_143592700(undefined4 *param_1)

{
  longlong lVar1;
  
  if (((((byte)*param_1 & 0x1f) == 0xc) && (*(longlong *)(param_1 + 4) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 4) + 0x28), *(int *)(lVar1 + 0x90) == 0x11)) {
    return (~(*(byte *)(lVar1 + 0x88) >> 5) & 1) != 0;
  }
  return false;
}



// FUNCTION 143592750 FUN_143592750 body=50 status=ok
// SIG undefined FUN_143592750(void)

bool FUN_143592750(longlong param_1)

{
  if ((param_1 != 0) && (*(int *)(*(longlong *)(param_1 + 0x28) + 0x90) == 0x12)) {
    return (~(*(byte *)(*(longlong *)(param_1 + 0x28) + 0x88) >> 5) & 1) != 0;
  }
  return false;
}



// FUNCTION 143592790 FUN_143592790 body=50 status=ok
// SIG undefined FUN_143592790(void)

bool FUN_143592790(longlong param_1)

{
  if ((param_1 != 0) && (*(int *)(*(longlong *)(param_1 + 0x28) + 0x90) == 0x13)) {
    return (~(*(byte *)(*(longlong *)(param_1 + 0x28) + 0x88) >> 5) & 1) != 0;
  }
  return false;
}



// FUNCTION 1435927d0 FUN_1435927d0 body=476 status=ok
// SIG undefined FUN_1435927d0(void)

ulonglong FUN_1435927d0(uint *param_1,uint *param_2)

{
  ulonglong in_RAX;
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
  
  uVar3 = *param_1 & 0x1f;
  if (uVar3 == 0xc) {
    bVar5 = *(longlong *)(param_1 + 4) == 0;
LAB_1435927fc:
    in_RAX = CONCAT71((int7)(in_RAX >> 8),bVar5);
    if (bVar5 != false) {
      in_RAX = 0;
      if ((*param_2 & 0x1f) == 0xc) {
        bVar5 = *(longlong *)(param_2 + 4) == 0;
        lVar1 = 0;
      }
      else {
        if ((*param_2 & 0x1f) != 10) goto LAB_143592833;
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 4) + 8) + 0x80;
        bVar5 = *(longlong *)(param_2 + 4) == lVar1;
      }
      in_RAX = CONCAT71((int7)((ulonglong)lVar1 >> 8),bVar5);
      if (bVar5 != false) goto switchD_143592928_caseD_0;
    }
  }
  else if (uVar3 == 10) {
    in_RAX = *(longlong *)(*(ulonglong *)(param_1 + 4) + 8) + 0x80;
    bVar5 = *(ulonglong *)(param_1 + 4) == in_RAX;
    goto LAB_1435927fc;
  }
LAB_143592833:
  uVar2 = *param_2 & 0x1f;
  if (uVar3 == uVar2) goto LAB_143592909;
  in_RAX = (ulonglong)(uVar3 - 2);
  if ((2 < uVar3 - 2) || (in_RAX = (ulonglong)(uVar2 - 2), 2 < uVar2 - 2))
  goto switchD_143592928_caseD_8;
  if (uVar3 == 3) {
    if (uVar2 == 2) {
      uVar3 = param_2[4];
      in_RAX = (ulonglong)uVar3;
      if (-1 < (int)uVar3) {
        return (ulonglong)CONCAT31((int3)(uVar3 >> 8),param_1[4] == uVar3);
      }
      goto switchD_143592928_caseD_8;
    }
    if (uVar2 != 4) goto LAB_143592909;
    dVar6 = (double)param_1[4];
LAB_14359287a:
    bVar4 = NAN(dVar6) || NAN(*(double *)(param_2 + 4));
    bVar5 = dVar6 == *(double *)(param_2 + 4);
  }
  else {
    if (uVar3 == 2) {
      if (uVar2 == 3) {
        uVar3 = param_1[4];
        in_RAX = (ulonglong)uVar3;
        if (-1 < (int)uVar3) {
          return (ulonglong)CONCAT31((int3)(uVar3 >> 8),uVar3 == param_2[4]);
        }
        goto switchD_143592928_caseD_8;
      }
      if (uVar2 == 4) {
        dVar6 = (double)(int)param_1[4];
        goto LAB_14359287a;
      }
LAB_143592909:
      if (0xe < uVar3) goto switchD_143592928_caseD_8;
      in_RAX = (ulonglong)(int)uVar3;
      switch(in_RAX) {
      case 0:
switchD_143592928_caseD_0:
        return CONCAT71((int7)(in_RAX >> 8),1);
      case 1:
        return (ulonglong)((char)param_1[4] == (char)param_2[4]);
      case 2:
      case 3:
        return (ulonglong)CONCAT31((int3)(param_2[4] >> 8),param_1[4] == param_2[4]);
      case 4:
        dVar6 = *(double *)(param_1 + 4);
        goto LAB_14359287a;
      default:
        return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 4) >> 8),
                        *(longlong *)(param_1 + 4) == *(longlong *)(param_2 + 4));
      case 6:
      case 7:
        if (param_1[4] != param_2[4]) {
          return 0;
        }
        bVar5 = *(longlong *)(param_1 + 6) == *(longlong *)(param_2 + 6);
        goto LAB_14359299d;
      case 8:
      case 9:
        break;
      case 0xd:
        in_RAX = *(ulonglong *)(param_2 + 6);
        if (*(ulonglong *)(param_1 + 6) != in_RAX) break;
      case 0xc:
        in_RAX = *(ulonglong *)(param_2 + 4);
        if (*(ulonglong *)(param_1 + 4) == in_RAX) {
          return CONCAT71((int7)(in_RAX >> 8),1);
        }
        break;
      case 0xe:
        in_RAX = *(ulonglong *)(param_2 + 6);
        if (*(ulonglong *)(param_1 + 6) == in_RAX) {
          uVar3 = param_2[4];
          in_RAX = (ulonglong)uVar3;
          if (param_1[4] == uVar3) {
            return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
          }
        }
      }
switchD_143592928_caseD_8:
      return in_RAX & 0xffffffffffffff00;
    }
    if (uVar3 != 4) goto LAB_143592909;
    if (uVar2 == 2) {
      bVar4 = NAN(*(double *)(param_1 + 4)) || NAN((double)(int)param_2[4]);
      bVar5 = *(double *)(param_1 + 4) == (double)(int)param_2[4];
    }
    else {
      if (uVar2 != 3) goto LAB_143592909;
      bVar4 = NAN(*(double *)(param_1 + 4)) || NAN((double)param_2[4]);
      bVar5 = *(double *)(param_1 + 4) == (double)param_2[4];
    }
  }
  if (bVar4) {
    return 0;
  }
LAB_14359299d:
  if (!bVar5) {
    return 0;
  }
  return 1;
}



// FUNCTION 1435929f0 FUN_1435929f0 body=2820 status=ok
// SIG undefined FUN_1435929f0(void)

/* WARNING: Removing unreachable block (ram,0x0001435932a8) */
/* WARNING: Removing unreachable block (ram,0x0001435932db) */
/* WARNING: Removing unreachable block (ram,0x000143593331) */
/* WARNING: Removing unreachable block (ram,0x00014359333b) */
/* WARNING: Removing unreachable block (ram,0x0001435932e0) */
/* WARNING: Removing unreachable block (ram,0x0001435932e5) */
/* WARNING: Removing unreachable block (ram,0x000143593304) */
/* WARNING: Removing unreachable block (ram,0x00014359330d) */
/* WARNING: Removing unreachable block (ram,0x0001435932ea) */
/* WARNING: Removing unreachable block (ram,0x0001435932f2) */
/* WARNING: Removing unreachable block (ram,0x000143593316) */
/* WARNING: Removing unreachable block (ram,0x00014359331b) */
/* WARNING: Removing unreachable block (ram,0x000143593325) */
/* WARNING: Removing unreachable block (ram,0x0001435932fb) */
/* WARNING: Removing unreachable block (ram,0x000143593059) */
/* WARNING: Removing unreachable block (ram,0x000143593062) */
/* WARNING: Removing unreachable block (ram,0x00014359306f) */
/* WARNING: Removing unreachable block (ram,0x000143593051) */
/* WARNING: Removing unreachable block (ram,0x000143593084) */
/* WARNING: Removing unreachable block (ram,0x000143593089) */
/* WARNING: Removing unreachable block (ram,0x0001435930ad) */
/* WARNING: Removing unreachable block (ram,0x0001435930b6) */
/* WARNING: Removing unreachable block (ram,0x00014359308e) */
/* WARNING: Removing unreachable block (ram,0x000143593093) */
/* WARNING: Removing unreachable block (ram,0x00014359309b) */
/* WARNING: Removing unreachable block (ram,0x0001435930bf) */
/* WARNING: Removing unreachable block (ram,0x0001435930c4) */
/* WARNING: Removing unreachable block (ram,0x0001435930ce) */
/* WARNING: Removing unreachable block (ram,0x0001435930a4) */
/* WARNING: Removing unreachable block (ram,0x0001435930da) */
/* WARNING: Removing unreachable block (ram,0x0001435930e4) */
/* WARNING: Removing unreachable block (ram,0x0001435932b0) */
/* WARNING: Removing unreachable block (ram,0x0001435932b9) */
/* WARNING: Removing unreachable block (ram,0x0001435932c6) */

undefined1 * FUN_1435929f0(undefined1 *param_1,char *param_2,uint *param_3,uint *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint *puVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  char *pcVar8;
  longlong lVar9;
  double dVar10;
  uint uVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  undefined8 local_res18;
  uint *local_res20;
  undefined1 local_68 [4];
  uint local_64;
  uint local_60;
  double local_58;
  double local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40;
  uint uStack_3c;
  int *piStack_38;
  double dStack_30;
  undefined8 uStack_28;
  
  local_60 = *param_3 & 0x1f;
  local_res18 = (double *)(CONCAT44(local_res18._4_4_,*param_3) & 0xffffffff0000001f);
  local_res20 = param_4;
  if ((((local_60 == 0xc) && (lVar9 = *(longlong *)(param_3 + 4), lVar9 != 0)) &&
      (*(int *)(*(longlong *)(lVar9 + 0x28) + 0x90) == 0x13)) &&
     ((~(*(byte *)(*(longlong *)(lVar9 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(lVar9 + 0x28) + 0x98) + 0x50);
    (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2,lVar9,param_4);
    return param_1;
  }
  local_64 = *param_4 & 0x1f;
  if (((local_64 == 0xc) && (lVar9 = *(longlong *)(param_4 + 4), lVar9 != 0)) &&
     ((*(int *)(*(longlong *)(lVar9 + 0x28) + 0x90) == 0x13 &&
      ((~(*(byte *)(*(longlong *)(lVar9 + 0x28) + 0x88) >> 5) & 1) != 0)))) {
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(lVar9 + 0x28) + 0x98) + 0x50);
    (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2,lVar9,param_3);
    return param_1;
  }
  cVar12 = '\0';
  cVar5 = '\0';
  local_58 = 0.0;
  local_50 = 0.0;
  if (local_60 == 0xc) {
    local_58 = *(double *)(param_3 + 4);
  }
  else if ((local_60 == 10) &&
          (*(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80)) {
    local_60 = 0xc;
  }
  if (local_64 == 0xc) {
    local_50 = *(double *)(param_4 + 4);
  }
  else if ((local_64 == 10) &&
          (*(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80)) {
    local_64 = 0xc;
  }
  if (local_60 == local_64) {
    switch(local_60) {
    case 0:
      *param_2 = '\x01';
LAB_143592b8e:
      *param_1 = 1;
      return param_1;
    case 1:
      if ((char)param_3[4] == '\0') {
        if ((char)param_4[4] == '\0') {
LAB_143592c11:
          *param_2 = '\x01';
          *param_1 = 1;
          return param_1;
        }
      }
      else if ((char)param_4[4] != '\0') goto LAB_143592c11;
      *param_2 = '\0';
      *param_1 = 1;
      return param_1;
    case 2:
    case 3:
      *param_2 = param_3[4] == param_4[4];
      *param_1 = 1;
      return param_1;
    case 4:
      bVar14 = *(double *)(param_3 + 4) == *(double *)(param_4 + 4);
      if (!NAN(*(double *)(param_3 + 4)) && !NAN(*(double *)(param_4 + 4))) {
LAB_143592ba3:
        cVar5 = cVar12;
        if (bVar14) {
          cVar5 = '\x01';
        }
      }
      break;
    case 5:
      *param_2 = *(longlong *)(param_3 + 4) == *(longlong *)(param_4 + 4);
      *param_1 = 1;
      return param_1;
    case 6:
    case 7:
      if (param_3[4] == param_4[4]) {
        bVar14 = *(longlong *)(param_3 + 6) == *(longlong *)(param_4 + 6);
        goto LAB_143592ba3;
      }
      break;
    default:
      *param_2 = local_58 == local_50;
      if (local_58 != local_50) {
        cVar5 = FUN_1434ef480(param_3);
        puVar4 = local_res20;
        if ((cVar5 != '\0') && (cVar5 = FUN_1434ef480(local_res20), cVar5 != '\0')) {
          plVar2 = *(longlong **)
                    (*(longlong *)(*(longlong *)((longlong)local_50 + 0x28) + 0x98) + 0x50);
          (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2,local_58,local_50);
          return param_1;
        }
        cVar5 = FUN_143592700(param_3);
        if ((cVar5 != '\0') && (cVar5 = FUN_143592700(puVar4), cVar5 != '\0')) {
          plVar2 = *(longlong **)
                    (*(longlong *)(*(longlong *)((longlong)local_50 + 0x28) + 0x98) + 0x50);
          (**(code **)(*plVar2 + 0x38))(plVar2,param_1,param_2,local_58,local_50);
          return param_1;
        }
      }
      goto LAB_143592bad;
    case 10:
      *param_2 = *(longlong *)(param_3 + 4) == *(longlong *)(param_4 + 4);
      *param_1 = 1;
      return param_1;
    case 0xb:
      lVar9 = *(longlong *)(param_3 + 4);
      lVar3 = *(longlong *)(param_4 + 4);
      if (((lVar9 != 0) && (lVar3 != 0)) &&
         (*(longlong *)(lVar9 + 0x38) == *(longlong *)(lVar3 + 0x38))) {
        bVar14 = ((*(byte *)(lVar3 + 0x28) ^ *(byte *)(lVar9 + 0x28)) & 0xf) == 0;
        goto LAB_143592ba3;
      }
      break;
    case 0xd:
      cVar5 = cVar12;
      if (*(longlong *)(param_3 + 6) == *(longlong *)(param_4 + 6)) {
        bVar14 = *(longlong *)(param_3 + 4) == *(longlong *)(param_4 + 4);
        goto LAB_143592ba3;
      }
      break;
    case 0xe:
      cVar5 = cVar12;
      if (*(longlong *)(param_3 + 6) == *(longlong *)(param_4 + 6)) {
        bVar14 = param_3[4] == param_4[4];
        goto LAB_143592ba3;
      }
    }
    *param_2 = cVar5;
LAB_143592bad:
    *param_1 = 1;
    return param_1;
  }
  if (((((int)local_res18 == 0xc) && (*(longlong *)(param_3 + 4) != 0)) &&
      (lVar9 = *(longlong *)(*(longlong *)(param_3 + 4) + 0x28), *(int *)(lVar9 + 0x90) == 0x12)) &&
     ((~(*(byte *)(lVar9 + 0x88) >> 5) & 1) != 0)) {
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)((longlong)local_58 + 0x28) + 0x98) + 0x50);
    local_res18 = (double *)CONCAT71(local_res18._1_7_,1);
    pcVar8 = (char *)(**(code **)(*plVar2 + 0x20))
                               (plVar2,local_68,&local_res18,param_2,local_58,param_4);
    if (*pcVar8 == '\0') goto LAB_143592da2;
    if ((char)local_res18 != '\0') {
      *param_1 = 1;
      return param_1;
    }
  }
  else {
    cVar7 = FUN_1434ef480(param_4);
    if (cVar7 != '\0') {
      plVar2 = *(longlong **)(*(longlong *)(*(longlong *)((longlong)local_50 + 0x28) + 0x98) + 0x50)
      ;
      local_res18 = (double *)CONCAT71(local_res18._1_7_,1);
      pcVar8 = (char *)(**(code **)(*plVar2 + 0x20))
                                 (plVar2,local_68,&local_res18,param_2,local_50,param_3);
      if (*pcVar8 == '\0') goto LAB_143592da2;
      if ((char)local_res18 != '\0') goto LAB_143592b8e;
    }
  }
  uVar6 = FUN_14353ffc0(local_res20);
  local_res18 = (double *)CONCAT71(local_res18._1_7_,uVar6);
  cVar7 = FUN_14353ffc0(param_3);
  if ((cVar7 != '\0') && ((char)local_res18 != '\0')) {
    *param_2 = '\x01';
    *param_1 = 1;
    return param_1;
  }
  if (local_60 == 0) {
    if (local_64 == 0xc) {
      *param_2 = (char)local_res18;
      *param_1 = 1;
      return param_1;
    }
LAB_143592f17:
    if (local_64 - 1 < 3) {
      pcVar8 = (char *)FUN_14360f380(local_res20,&local_res18,&local_50);
      if (*pcVar8 == '\0') {
LAB_143592da2:
        *param_1 = 0;
        return param_1;
      }
      dStack_30 = local_50;
      local_40 = 4;
      piStack_38 = (int *)0x0;
      goto LAB_14359317c;
    }
    if (((local_60 != 10) && (local_60 != 4)) || (local_64 != 0xc)) {
      if (((local_60 != 0xc) || ((local_64 != 10 && (local_64 != 4)))) ||
         (cVar12 = cVar5, cVar7 != '\0')) goto LAB_143592eba;
      uVar11 = *param_3 & 0x1f;
      local_40 = 0;
      piStack_38 = (int *)0x0;
      if ((4 < uVar11) && (uVar11 != 10)) {
        if ((uVar11 - 5 & 0xfffffffd) != 0) {
          if (uVar11 == 0xb) {
            lVar9 = *(longlong *)(param_3 + 4);
            piVar1 = (int *)(*(longlong *)(lVar9 + 0x38) + 0x18);
            *piVar1 = *piVar1 + 1;
            piStack_38 = (int *)0x0;
            local_40 = 10;
            local_50 = *(double *)(lVar9 + 0x38);
            uStack_28 = (double)CONCAT44(uStack_44,uStack_48);
            dStack_30 = local_50;
            goto LAB_1435933da;
          }
          if (1 < uVar11 - 0xd) {
            lVar9 = *(longlong *)(param_3 + 4);
            if (lVar9 == 0) {
              local_40 = 4;
              local_50 = 0.0;
              dStack_30 = 0.0;
              uStack_28 = (double)CONCAT44(uStack_44,uStack_48);
            }
            else {
              pcVar8 = (char *)FUN_1435b0690(lVar9,&local_res18,&local_40,0);
              if (*pcVar8 == '\0') {
                FUN_1435cbf30(*(undefined8 *)(*(longlong *)(lVar9 + 0x28) + 0x98));
                *param_1 = 0;
                FUN_1434e64f0(&local_40);
                return param_1;
              }
            }
            goto LAB_1435933da;
          }
        }
        FUN_1434f06a0(&local_40,0);
        goto LAB_1435933da;
      }
      if (param_3 == &local_40) goto LAB_1435933da;
      if (9 < uVar11) {
        if ((*param_3 >> 9 & 1) == 0) {
          if (uVar11 == 10) {
            *(int *)(*(longlong *)(param_3 + 4) + 0x18) =
                 *(int *)(*(longlong *)(param_3 + 4) + 0x18) + 1;
          }
          else if (10 < uVar11) {
            if (uVar11 < 0xd) {
              lVar9 = *(longlong *)(param_3 + 4);
            }
            else {
              if (0xe < uVar11) goto LAB_1435933c2;
              lVar9 = *(longlong *)(param_3 + 6);
            }
            if (lVar9 != 0) {
              *(uint *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1U & 0x8fffffff;
            }
          }
        }
        else {
          **(int **)(param_3 + 2) = **(int **)(param_3 + 2) + 1;
        }
      }
LAB_1435933c2:
      FUN_143603d30(&local_40);
      local_40 = *param_3;
      uStack_3c = param_3[1];
      piStack_38 = *(int **)(param_3 + 2);
      dStack_30 = *(double *)(param_3 + 4);
      uStack_28 = *(double *)(param_3 + 6);
LAB_1435933da:
      FUN_1435929f0(param_1,param_2,&local_40,local_res20);
      FUN_1434e64f0(&local_40);
      return param_1;
    }
    if ((char)local_res18 != '\0') {
LAB_143592eba:
      *param_2 = cVar12;
      *param_1 = 1;
      return param_1;
    }
    local_40 = 0;
    piStack_38 = (int *)0x0;
    uVar11 = *local_res20 & 0x1f;
    if ((uVar11 < 5) || (uVar11 == 10)) {
      if (local_res20 == &local_40) goto LAB_14359317c;
      if (9 < uVar11) {
        if ((*local_res20 >> 9 & 1) == 0) {
          if (uVar11 == 10) {
            *(int *)(*(longlong *)(local_res20 + 4) + 0x18) =
                 *(int *)(*(longlong *)(local_res20 + 4) + 0x18) + 1;
          }
          else if (10 < uVar11) {
            if (uVar11 < 0xd) {
              lVar9 = *(longlong *)(local_res20 + 4);
            }
            else {
              if (0xe < uVar11) goto LAB_143593160;
              lVar9 = *(longlong *)(local_res20 + 6);
            }
            if (lVar9 != 0) {
              *(uint *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1U & 0x8fffffff;
            }
          }
        }
        else {
          **(int **)(local_res20 + 2) = **(int **)(local_res20 + 2) + 1;
        }
      }
LAB_143593160:
      FUN_143603d30(&local_40);
      local_40 = *local_res20;
      uStack_3c = local_res20[1];
      piStack_38 = *(int **)(local_res20 + 2);
      dStack_30 = *(double *)(local_res20 + 4);
      uStack_28 = *(double *)(local_res20 + 6);
LAB_14359317c:
      FUN_1435929f0(param_1,param_2,param_3,&local_40);
    }
    else {
      if ((uVar11 - 5 & 0xfffffffd) == 0) {
LAB_143593012:
        local_40 = 4;
        local_50 = 0.0;
        dStack_30 = 0.0;
        uStack_28 = (double)CONCAT44(uStack_44,uStack_48);
        goto LAB_14359317c;
      }
      if (uVar11 == 0xb) {
        local_res18 = (double *)(*(longlong *)(local_res20 + 4) + 0x38);
        *(int *)((longlong)*local_res18 + 0x18) = *(int *)((longlong)*local_res18 + 0x18) + 1;
        piStack_38 = (int *)0x0;
        local_40 = 10;
        local_50 = *local_res18;
        uStack_28 = (double)CONCAT44(uStack_44,uStack_48);
        dStack_30 = local_50;
        goto LAB_14359317c;
      }
      if ((uVar11 - 0xd < 2) || (lVar9 = *(longlong *)(local_res20 + 4), lVar9 == 0))
      goto LAB_143593012;
      pcVar8 = (char *)FUN_1435b0690(lVar9,&local_res18,&local_40,0);
      if (*pcVar8 != '\0') goto LAB_14359317c;
      FUN_1435cbf30(*(undefined8 *)(*(longlong *)(lVar9 + 0x28) + 0x98));
      *param_1 = 0;
    }
    uVar11 = local_40 & 0x1f;
    if (uVar11 < 10) {
      return param_1;
    }
    if ((local_40 >> 9 & 1) != 0) {
LAB_1435931ac:
      *piStack_38 = *piStack_38 + -1;
      if (*piStack_38 != 0) {
        return param_1;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))();
      return param_1;
    }
    if (uVar11 == 10) {
LAB_1435934cf:
      piVar1 = (int *)((longlong)dStack_30 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return param_1;
      }
      FUN_14335f920();
      return param_1;
    }
    if ((uVar11 != 0xb) && (uVar11 != 0xc)) {
      if (1 < uVar11 - 0xd) {
        return param_1;
      }
      bVar14 = ((ulonglong)uStack_28 & 1) == 0;
      dVar10 = uStack_28;
      goto LAB_1435934b2;
    }
  }
  else {
    if (local_60 == 0xc) {
      if (local_64 == 0) {
        *param_2 = cVar7;
        *param_1 = 1;
        return param_1;
      }
      goto LAB_143592f17;
    }
    if (local_60 == 4) {
      if (local_64 == 10) {
        pcVar8 = (char *)FUN_14360f380(local_res20,&local_res18,&local_50);
        if (*pcVar8 == '\0') goto LAB_143592da2;
        bVar13 = NAN(*(double *)(param_3 + 4)) || NAN(local_50);
        bVar14 = *(double *)(param_3 + 4) == local_50;
LAB_143592eb1:
        cVar12 = cVar5;
        if ((!bVar13) && (bVar14)) {
          cVar12 = '\x01';
        }
        goto LAB_143592eba;
      }
      goto LAB_143592f17;
    }
    if (local_60 == 10) {
      if (local_64 == 4) {
        pcVar8 = (char *)FUN_14360f380(param_3,&local_res18,&local_50);
        if (*pcVar8 == '\0') goto LAB_143592da2;
        bVar13 = NAN(local_50) || NAN(*(double *)(local_res20 + 4));
        bVar14 = local_50 == *(double *)(local_res20 + 4);
        goto LAB_143592eb1;
      }
      goto LAB_143592f17;
    }
    if ((local_60 != 1) && (1 < local_60 - 2)) goto LAB_143592f17;
    pcVar8 = (char *)FUN_14360f380(param_3,&local_res18,&local_50);
    if (*pcVar8 == '\0') goto LAB_143592da2;
    dStack_30 = local_50;
    local_40 = 4;
    piStack_38 = (int *)0x0;
    FUN_1435929f0(param_1,param_2,&local_40,local_res20);
    uVar11 = local_40 & 0x1f;
    if (uVar11 < 10) {
      return param_1;
    }
    if ((local_40 >> 9 & 1) != 0) goto LAB_1435931ac;
    if (uVar11 == 10) goto LAB_1435934cf;
    if ((uVar11 != 0xb) && (uVar11 != 0xc)) {
      if (1 < uVar11 - 0xd) {
        return param_1;
      }
      bVar14 = ((ulonglong)uStack_28 & 1) == 0;
      dVar10 = uStack_28;
      goto LAB_1435934b2;
    }
  }
  bVar14 = ((ulonglong)dStack_30 & 1) == 0;
  dVar10 = dStack_30;
LAB_1435934b2:
  if (!bVar14) {
    return param_1;
  }
  if (dVar10 == 0.0) {
    return param_1;
  }
  if ((*(uint *)((longlong)dVar10 + 8) & 0x3fffff) == 0) {
    return param_1;
  }
  *(uint *)((longlong)dVar10 + 8) = *(uint *)((longlong)dVar10 + 8) - 1;
  FUN_1434ef880();
  return param_1;
}



// FUNCTION 143593540 FUN_143593540 body=2084 status=ok
// SIG undefined FUN_143593540(void)

/* WARNING: Removing unreachable block (ram,0x00014359379f) */
/* WARNING: Removing unreachable block (ram,0x0001435937a8) */
/* WARNING: Removing unreachable block (ram,0x000143593740) */
/* WARNING: Removing unreachable block (ram,0x000143593776) */
/* WARNING: Removing unreachable block (ram,0x00014359377b) */
/* WARNING: Removing unreachable block (ram,0x000143593780) */
/* WARNING: Removing unreachable block (ram,0x000143593785) */
/* WARNING: Removing unreachable block (ram,0x00014359378d) */
/* WARNING: Removing unreachable block (ram,0x0001435937b1) */
/* WARNING: Removing unreachable block (ram,0x0001435937b6) */
/* WARNING: Removing unreachable block (ram,0x0001435937c0) */
/* WARNING: Removing unreachable block (ram,0x000143593796) */
/* WARNING: Removing unreachable block (ram,0x0001435937cc) */
/* WARNING: Removing unreachable block (ram,0x0001435937d6) */
/* WARNING: Removing unreachable block (ram,0x000143593748) */
/* WARNING: Removing unreachable block (ram,0x000143593751) */
/* WARNING: Removing unreachable block (ram,0x000143593761) */

undefined1 *
FUN_143593540(undefined1 *param_1,longlong param_2,undefined8 param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  undefined4 local_res20;
  undefined4 uStackX_24;
  undefined1 local_88 [8];
  double local_80;
  double local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  uint uStack_64;
  int *piStack_60;
  double dStack_58;
  undefined8 uStack_50;
  uint local_48;
  uint uStack_44;
  int *piStack_40;
  double local_38;
  undefined8 uStack_30;
  
  local_res20 = 0;
  if ((((((byte)*param_4 & 0x1f) == 0xc) && (((byte)*param_5 & 0x1f) == 0xc)) &&
      (*(longlong *)(param_4 + 4) != 0)) &&
     ((*(longlong *)(param_5 + 4) != 0 &&
      (plVar2 = *(longlong **)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_4 + 4) + 0x28) + 0x98) + 0x50),
      cVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,param_3), cVar3 != '\0')))) {
LAB_14359362d:
    *param_1 = 1;
    return param_1;
  }
  uVar6 = *param_4 & 0x1f;
  if ((uVar6 == 10) || ((*param_5 & 0x1f) == 10)) {
    local_78 = (double)(*(longlong *)(param_2 + 0x218) + 0x48);
    piVar1 = (int *)(*(longlong *)(param_2 + 0x218) + 0x60);
    *piVar1 = *piVar1 + 1;
    local_80 = (double)(*(longlong *)(param_2 + 0x218) + 0x48);
    piVar1 = (int *)(*(longlong *)(param_2 + 0x218) + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar4 = (char *)FUN_1435911f0(param_4,&local_res20,&local_78);
    if ((*pcVar4 == '\0') ||
       (pcVar4 = (char *)FUN_1435911f0(param_5,local_88,&local_80), *pcVar4 == '\0')) {
      *param_1 = 0;
    }
    else {
      uVar5 = Scaleform::GFx::ASString::operator+(&local_78,&local_res20,&local_80);
      FUN_143590250(param_3,uVar5);
      piVar1 = (int *)(CONCAT44(uStackX_24,local_res20) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_1 = 1;
    }
    piVar1 = (int *)((longlong)local_80 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)((longlong)local_78 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return param_1;
    }
    FUN_14335f920();
    return param_1;
  }
  if ((uVar6 < 5) && ((*param_5 & 0x1f) < 5)) {
    local_80 = 0.0;
    local_78 = 0.0;
    pcVar4 = (char *)FUN_14360f380(param_4,&local_res20,&local_80);
    if ((*pcVar4 == '\0') ||
       (pcVar4 = (char *)FUN_14360f380(param_5,local_88,&local_78), *pcVar4 == '\0')) {
      *param_1 = 0;
      return param_1;
    }
    FUN_1434f06a0(param_3,SUB84(local_78 + local_80,0));
    goto LAB_14359362d;
  }
  piStack_60 = (int *)0x0;
  local_48 = 0;
  piStack_40 = (int *)0x0;
  local_68 = 0;
  if (4 < uVar6) {
    if ((uVar6 - 5 & 0xfffffffd) == 0) {
LAB_1435937fd:
      local_78 = 0.0;
      local_48 = 4;
      local_38 = 0.0;
      uStack_30 = (double)CONCAT44(uStack_6c,uStack_70);
      goto LAB_143593811;
    }
    if (uVar6 == 0xb) {
      lVar7 = *(longlong *)(param_4 + 4);
      piVar1 = (int *)(*(longlong *)(lVar7 + 0x38) + 0x18);
      *piVar1 = *piVar1 + 1;
      piStack_40 = (int *)0x0;
      piStack_60 = (int *)0x0;
      local_68 = 0;
      local_48 = 10;
      local_78 = *(double *)(lVar7 + 0x38);
      uStack_30 = (double)CONCAT44(uStack_6c,uStack_70);
      local_38 = local_78;
      goto LAB_143593811;
    }
    if ((uVar6 - 0xd < 2) || (lVar7 = *(longlong *)(param_4 + 4), lVar7 == 0)) goto LAB_1435937fd;
    pcVar4 = (char *)FUN_1435b0690(lVar7,&local_res20,&local_48,0);
    if (*pcVar4 != '\0') goto LAB_143593811;
LAB_143593876:
    FUN_1435cbf30(*(undefined8 *)(*(longlong *)(lVar7 + 0x28) + 0x98));
    uVar6 = local_68 & 0x1f;
    *param_1 = 0;
    if (9 < uVar6) {
      if ((local_68 >> 9 & 1) == 0) {
        if (uVar6 == 10) {
          piVar1 = (int *)((longlong)dStack_58 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
            dVar8 = dStack_58;
            if (((ulonglong)dStack_58 & 1) != 0) {
              dStack_58 = (double)((longlong)dStack_58 - 1);
              goto LAB_143593936;
            }
          }
          else {
            if (1 < uVar6 - 0xd) goto LAB_143593936;
            dVar8 = uStack_50;
            if (((ulonglong)uStack_50 & 1) != 0) {
              uStack_50 = (double)((longlong)uStack_50 - 1);
              goto LAB_143593936;
            }
          }
          if ((dVar8 != 0.0) && ((*(uint *)((longlong)dVar8 + 8) & 0x3fffff) != 0)) {
            *(uint *)((longlong)dVar8 + 8) = *(uint *)((longlong)dVar8 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *piStack_60 = *piStack_60 + -1;
        if (*piStack_60 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_68 = local_68 & 0xfffffde0;
        piStack_60 = (int *)0x0;
        dStack_58 = 0.0;
        uStack_50 = 0.0;
      }
    }
LAB_143593936:
    FUN_1434e64f0(&local_48);
    return param_1;
  }
  if (param_4 == &local_48) goto LAB_143593811;
  if (9 < uVar6) {
    if ((*param_4 >> 9 & 1) == 0) {
      if (10 < uVar6) {
        if (uVar6 < 0xd) {
          lVar7 = *(longlong *)(param_4 + 4);
        }
        else {
          if (0xe < uVar6) goto LAB_1435936b2;
          lVar7 = *(longlong *)(param_4 + 6);
        }
        if (lVar7 != 0) {
          *(uint *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1U & 0x8fffffff;
        }
      }
    }
    else {
      **(int **)(param_4 + 2) = **(int **)(param_4 + 2) + 1;
    }
  }
LAB_1435936b2:
  FUN_143603d30(&local_48);
  local_48 = *param_4;
  uStack_44 = param_4[1];
  piStack_40 = *(int **)(param_4 + 2);
  local_38 = *(double *)(param_4 + 4);
  uStack_30 = *(double *)(param_4 + 6);
LAB_143593811:
  uVar6 = *param_5 & 0x1f;
  if ((uVar6 < 5) || (uVar6 == 10)) {
    if (param_5 == &local_68) goto LAB_143593b4a;
    if (9 < uVar6) {
      if ((*param_5 >> 9 & 1) == 0) {
        if (uVar6 == 10) {
          *(int *)(*(longlong *)(param_5 + 4) + 0x18) =
               *(int *)(*(longlong *)(param_5 + 4) + 0x18) + 1;
        }
        else if (10 < uVar6) {
          if (uVar6 < 0xd) {
            lVar7 = *(longlong *)(param_5 + 4);
          }
          else {
            if (0xe < uVar6) goto LAB_143593b32;
            lVar7 = *(longlong *)(param_5 + 6);
          }
          if (lVar7 != 0) {
            *(uint *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1U & 0x8fffffff;
          }
        }
      }
      else {
        **(int **)(param_5 + 2) = **(int **)(param_5 + 2) + 1;
      }
    }
LAB_143593b32:
    FUN_143603d30(&local_68);
    local_68 = *param_5;
    uStack_64 = param_5[1];
    piStack_60 = *(int **)(param_5 + 2);
    dStack_58 = *(double *)(param_5 + 4);
    uStack_50 = *(double *)(param_5 + 6);
  }
  else {
    if ((uVar6 - 5 & 0xfffffffd) == 0) {
LAB_143593a36:
      uVar6 = local_68 & 0x1f;
      if (9 < uVar6) {
        if ((local_68 >> 9 & 1) == 0) {
          if (uVar6 == 10) {
            piVar1 = (int *)((longlong)dStack_58 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else if ((((uVar6 == 0xb) || (uVar6 == 0xc)) || (dStack_58 = uStack_50, uVar6 - 0xd < 2))
                  && (((((ulonglong)dStack_58 & 1) == 0 && (dStack_58 != 0.0)) &&
                      ((*(uint *)((longlong)dStack_58 + 8) & 0x3fffff) != 0)))) {
            *(uint *)((longlong)dStack_58 + 8) = *(uint *)((longlong)dStack_58 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *piStack_60 = *piStack_60 + -1;
          if (*piStack_60 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_68 = local_68 & 0xfffffde0;
          piStack_60 = (int *)0x0;
        }
      }
    }
    else {
      if (uVar6 == 0xb) {
        lVar7 = *(longlong *)(param_5 + 4);
        piVar1 = (int *)(*(longlong *)(lVar7 + 0x38) + 0x18);
        *piVar1 = *piVar1 + 1;
        uVar6 = local_68 & 0x1f;
        if (9 < uVar6) {
          if ((local_68 >> 9 & 1) == 0) {
            if (uVar6 == 10) {
              piVar1 = (int *)((longlong)dStack_58 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
            }
            else if (((((uVar6 == 0xb) || (uVar6 == 0xc)) ||
                      (dStack_58 = uStack_50, uVar6 - 0xd < 2)) &&
                     ((((ulonglong)dStack_58 & 1) == 0 && (dStack_58 != 0.0)))) &&
                    ((*(uint *)((longlong)dStack_58 + 8) & 0x3fffff) != 0)) {
              *(uint *)((longlong)dStack_58 + 8) = *(uint *)((longlong)dStack_58 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *piStack_60 = *piStack_60 + -1;
            if (*piStack_60 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            local_68 = local_68 & 0xfffffde0;
            piStack_60 = (int *)0x0;
          }
        }
        local_68 = local_68 & 0xffffffea | 10;
        local_78 = *(double *)(lVar7 + 0x38);
        uStack_50 = (double)CONCAT44(uStack_6c,uStack_70);
        dStack_58 = local_78;
        goto LAB_143593b4a;
      }
      if (uVar6 - 0xd < 2) goto LAB_143593a36;
      lVar7 = *(longlong *)(param_5 + 4);
      if (lVar7 != 0) {
        pcVar4 = (char *)FUN_1435b0690(lVar7,&local_res20,&local_68,0);
        if (*pcVar4 == '\0') goto LAB_143593876;
        goto LAB_143593b4a;
      }
    }
    local_78 = 0.0;
    local_68 = local_68 & 0xffffffe4 | 4;
    dStack_58 = 0.0;
    uStack_50 = (double)CONCAT44(uStack_6c,uStack_70);
  }
LAB_143593b4a:
  FUN_143593540(param_1,param_2,param_3,&local_48,&local_68);
  uVar6 = local_68 & 0x1f;
  if (9 < uVar6) {
    if ((local_68 >> 9 & 1) == 0) {
      if (uVar6 == 10) {
        piVar1 = (int *)((longlong)dStack_58 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
          dVar8 = dStack_58;
          if (((ulonglong)dStack_58 & 1) != 0) {
            dStack_58 = (double)((longlong)dStack_58 - 1);
            goto LAB_143593c14;
          }
        }
        else {
          if (1 < uVar6 - 0xd) goto LAB_143593c14;
          dVar8 = uStack_50;
          if (((ulonglong)uStack_50 & 1) != 0) {
            uStack_50 = (double)((longlong)uStack_50 - 1);
            goto LAB_143593c14;
          }
        }
        if ((dVar8 != 0.0) && ((*(uint *)((longlong)dVar8 + 8) & 0x3fffff) != 0)) {
          *(uint *)((longlong)dVar8 + 8) = *(uint *)((longlong)dVar8 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *piStack_60 = *piStack_60 + -1;
      if (*piStack_60 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_68 = local_68 & 0xfffffde0;
      piStack_60 = (int *)0x0;
      dStack_58 = 0.0;
      uStack_50 = 0.0;
    }
  }
LAB_143593c14:
  uVar6 = local_48 & 0x1f;
  if (9 < uVar6) {
    if ((local_48 >> 9 & 1) == 0) {
      if (uVar6 == 10) {
        piVar1 = (int *)((longlong)local_38 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        dVar8 = local_38;
        if ((((uVar6 == 0xb) || (uVar6 == 0xc)) || (dVar8 = uStack_30, uVar6 - 0xd < 2)) &&
           (((((ulonglong)dVar8 & 1) == 0 && (dVar8 != 0.0)) &&
            ((*(uint *)((longlong)dVar8 + 8) & 0x3fffff) != 0)))) {
          *(uint *)((longlong)dVar8 + 8) = *(uint *)((longlong)dVar8 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *piStack_40 = *piStack_40 + -1;
      if (*piStack_40 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return param_1;
}



// FUNCTION 143593d70 FUN_143593d70 body=1738 status=ok
// SIG undefined FUN_143593d70(void)

undefined1 * FUN_143593d70(undefined1 *param_1,int *param_2,uint *param_3,uint *param_4)

{
  double dVar1;
  double dVar2;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong local_res18;
  longlong local_res20;
  uint local_78 [2];
  int *local_70;
  uint local_68;
  uint uStack_64;
  byte local_60;
  undefined7 uStack_5f;
  uint local_58 [2];
  int *local_50;
  uint local_48;
  uint uStack_44;
  byte local_40;
  undefined7 uStack_3f;
  double dVar3;
  
  uVar8 = *param_3 & 0x1f;
  if (uVar8 == (*param_4 & 0x1f)) {
    if (uVar8 == 2) {
      uVar8 = param_4[4];
      uVar9 = param_3[4];
      *param_1 = 1;
      *param_2 = ((int)uVar8 <= (int)uVar9) + 1;
      return param_1;
    }
    if (uVar8 == 3) {
      uVar8 = param_4[4];
      uVar9 = param_3[4];
      *param_1 = 1;
      *param_2 = 2 - (uint)(uVar9 < uVar8);
      return param_1;
    }
    if (uVar8 == 4) {
      cVar6 = FUN_143611160(param_3);
      if ((cVar6 == '\0') && (cVar6 = FUN_143611160(param_4), cVar6 == '\0')) {
        dVar1 = *(double *)(param_4 + 4);
        dVar2 = *(double *)(param_3 + 4);
        dVar3 = *(double *)(param_3 + 4);
        *param_1 = 1;
        *param_2 = (dVar1 < dVar3 || dVar1 == dVar2) + 1;
        return param_1;
      }
      *param_1 = 1;
      *param_2 = 0;
      return param_1;
    }
    if (((uVar8 == 10) && (lVar10 = *(longlong *)(param_3 + 4), lVar10 != 0)) &&
       (*(longlong *)(param_4 + 4) != 0)) {
      *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
      iVar12 = *(int *)(lVar10 + 0x18);
      *(int *)(lVar10 + 0x18) = iVar12;
      local_res20 = lVar10;
      if (iVar12 == 0) {
        FUN_14335f920();
      }
      local_res18 = *(longlong *)(param_4 + 4);
      *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
      iVar12 = *(int *)(local_res18 + 0x18);
      *(int *)(local_res18 + 0x18) = iVar12;
      if (iVar12 == 0) {
        FUN_14335f920();
      }
      cVar6 = FUN_143360290(&local_res20,&local_res18);
      *param_1 = 1;
      *param_2 = 2 - (uint)(cVar6 != '\0');
      piVar11 = (int *)(local_res18 + 0x18);
      *piVar11 = *piVar11 + -1;
      lVar10 = local_res20;
      if (*piVar11 == 0) {
        FUN_14335f920();
        lVar10 = local_res20;
      }
      goto LAB_143593e3a;
    }
  }
  iVar12 = 0;
  iVar13 = 0;
  local_58[0] = 0;
  local_50 = (int *)0x0;
  local_78[0] = 0;
  local_70 = (int *)0x0;
  pcVar7 = (char *)FUN_1435908b0(param_3,&local_res18,local_58);
  if (*pcVar7 == '\0') {
    *param_1 = 0;
  }
  else {
    pcVar7 = (char *)FUN_1435908b0(param_4,&local_res18,local_78);
    uVar8 = local_78[0];
    if (*pcVar7 != '\0') {
      uVar9 = local_58[0] & 0x1f;
      uVar14 = local_78[0] & 0x1f;
      if (uVar9 != uVar14) {
LAB_143594381:
        pcVar7 = (char *)FUN_1436147a0(local_58,&local_res18);
        if (*pcVar7 == '\0') {
          *param_1 = 0;
        }
        else {
          pcVar7 = (char *)FUN_1436147a0(local_78,&local_res18);
          if (*pcVar7 == '\0') {
            *param_1 = 0;
          }
          else {
            if ((((uStack_44 & 0x7ff00000) != 0x7ff00000) ||
                ((CONCAT44(uStack_44,local_48) & 0xfffffffffffff) == 0)) &&
               (((uStack_64 & 0x7ff00000) != 0x7ff00000 ||
                ((CONCAT44(uStack_64,local_68) & 0xfffffffffffff) == 0)))) {
              iVar13 = ((double)CONCAT44(uStack_64,local_68) <= (double)CONCAT44(uStack_44,local_48)
                       ) + 1;
            }
            *param_1 = 1;
            *param_2 = iVar13;
          }
        }
        FUN_1434e64f0(local_78);
        FUN_1434e64f0(local_58);
        return param_1;
      }
      if (uVar9 == 2) {
        bVar4 = (int)local_68 <= (int)local_48;
LAB_1435942a5:
        iVar12 = bVar4 + 1;
LAB_1435942a7:
        *param_2 = iVar12;
        *param_1 = 1;
        if (uVar14 < 10) {
          return param_1;
        }
      }
      else {
        if (uVar9 != 3) {
          if (uVar9 != 4) {
            if (((uVar9 != 10) || (lVar10 = CONCAT44(uStack_44,local_48), lVar10 == 0)) ||
               (lVar5 = CONCAT44(uStack_64,local_68), lVar5 == 0)) goto LAB_143594381;
            *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
            iVar12 = *(int *)(lVar10 + 0x18);
            *(int *)(lVar10 + 0x18) = iVar12;
            local_res20 = lVar10;
            if (iVar12 == 0) {
              FUN_14335f920(lVar10);
            }
            *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
            iVar12 = *(int *)(lVar5 + 0x18);
            *(int *)(lVar5 + 0x18) = iVar12;
            local_res18 = lVar5;
            if (iVar12 == 0) {
              FUN_14335f920(lVar5);
            }
            cVar6 = FUN_143360290(&local_res20,&local_res18);
            *param_1 = 1;
            *param_2 = 2 - (uint)(cVar6 != '\0');
            piVar11 = (int *)(local_res18 + 0x18);
            *piVar11 = *piVar11 + -1;
            if (*piVar11 == 0) {
              FUN_14335f920();
            }
            piVar11 = (int *)(local_res20 + 0x18);
            *piVar11 = *piVar11 + -1;
            if (*piVar11 == 0) {
              FUN_14335f920();
            }
            if (9 < uVar14) {
              if ((uVar8 >> 9 & 1) == 0) {
                if (uVar14 == 10) {
                  piVar11 = (int *)(lVar5 + 0x18);
                  *piVar11 = *piVar11 + -1;
                  if (*piVar11 == 0) {
                    FUN_14335f920(lVar5);
                  }
                }
                else if ((uVar14 == 0xb) || (uVar14 == 0xc)) {
                  if (((local_68 & 1) == 0) && ((*(uint *)(lVar5 + 8) & 0x3fffff) != 0)) {
                    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) - 1;
                    FUN_1434ef880(lVar5);
                  }
                }
                else if ((((uVar14 - 0xd < 2) && ((local_60 & 1) == 0)) &&
                         (lVar5 = CONCAT71(uStack_5f,local_60), lVar5 != 0)) &&
                        ((*(uint *)(lVar5 + 8) & 0x3fffff) != 0)) {
                  *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                *local_70 = *local_70 + -1;
                if (*local_70 == 0) {
                  (**(code **)(*DAT_146b62f28 + 0x60))();
                }
              }
            }
            piVar11 = local_50;
            if ((local_58[0] >> 9 & 1) == 0) {
              piVar11 = (int *)(lVar10 + 0x18);
              *piVar11 = *piVar11 + -1;
              if (*piVar11 != 0) {
                return param_1;
              }
              FUN_14335f920(lVar10);
              return param_1;
            }
            goto LAB_14359421b;
          }
          if ((((uStack_44 & 0x7ff00000) != 0x7ff00000) ||
              ((CONCAT44(uStack_44,local_48) & 0xfffffffffffff) == 0)) &&
             (((uStack_64 & 0x7ff00000) != 0x7ff00000 ||
              ((CONCAT44(uStack_64,local_68) & 0xfffffffffffff) == 0)))) {
            bVar4 = (double)CONCAT44(uStack_64,local_68) <= (double)CONCAT44(uStack_44,local_48);
            goto LAB_1435942a5;
          }
          goto LAB_1435942a7;
        }
        *param_1 = 1;
        *param_2 = 2 - (uint)(local_48 < local_68);
        if (uVar14 < 10) {
          return param_1;
        }
      }
      piVar11 = local_70;
      if ((local_78[0] >> 9 & 1) == 0) {
        if (uVar14 == 10) {
          piVar11 = (int *)(CONCAT44(uStack_64,local_68) + 0x18);
          *piVar11 = *piVar11 + -1;
          if (*piVar11 != 0) {
            return param_1;
          }
          FUN_14335f920();
          return param_1;
        }
        if ((uVar14 == 0xb) || (uVar14 == 0xc)) {
          if ((local_68 & 1) != 0) {
            return param_1;
          }
          lVar10 = CONCAT44(uStack_64,local_68);
        }
        else {
          if (1 < uVar14 - 0xd) {
            return param_1;
          }
          if ((local_60 & 1) != 0) {
            return param_1;
          }
          lVar10 = CONCAT71(uStack_5f,local_60);
        }
        if (lVar10 == 0) {
          return param_1;
        }
        if ((*(uint *)(lVar10 + 8) & 0x3fffff) == 0) {
          return param_1;
        }
        *(uint *)(lVar10 + 8) = *(uint *)(lVar10 + 8) - 1;
        FUN_1434ef880();
        return param_1;
      }
LAB_14359421b:
      *piVar11 = *piVar11 + -1;
      if (*piVar11 != 0) {
        return param_1;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))();
      return param_1;
    }
    uVar8 = local_78[0] & 0x1f;
    *param_1 = 0;
    if (9 < uVar8) {
      if ((local_78[0] >> 9 & 1) == 0) {
        if (uVar8 == 10) {
          piVar11 = (int *)(CONCAT44(uStack_64,local_68) + 0x18);
          *piVar11 = *piVar11 + -1;
          if (*piVar11 == 0) {
            FUN_14335f920();
          }
        }
        else if ((uVar8 == 0xb) || (uVar8 == 0xc)) {
          if ((local_68 & 1) == 0) {
            lVar10 = CONCAT44(uStack_64,local_68);
            goto LAB_143594064;
          }
        }
        else if ((uVar8 - 0xd < 2) && ((local_60 & 1) == 0)) {
          lVar10 = CONCAT71(uStack_5f,local_60);
LAB_143594064:
          if ((lVar10 != 0) && ((*(uint *)(lVar10 + 8) & 0x3fffff) != 0)) {
            *(uint *)(lVar10 + 8) = *(uint *)(lVar10 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_70 = *local_70 + -1;
        if (*local_70 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
  }
  uVar8 = local_58[0] & 0x1f;
  if (uVar8 < 10) {
    return param_1;
  }
  if ((local_58[0] >> 9 & 1) != 0) {
    *local_50 = *local_50 + -1;
    if (*local_50 != 0) {
      return param_1;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))();
    return param_1;
  }
  if (uVar8 != 10) {
    if ((uVar8 == 0xb) || (uVar8 == 0xc)) {
      if ((local_48 & 1) != 0) {
        return param_1;
      }
      lVar10 = CONCAT44(uStack_44,local_48);
    }
    else {
      if (1 < uVar8 - 0xd) {
        return param_1;
      }
      if ((local_40 & 1) != 0) {
        return param_1;
      }
      lVar10 = CONCAT71(uStack_3f,local_40);
    }
    if (lVar10 == 0) {
      return param_1;
    }
    if ((*(uint *)(lVar10 + 8) & 0x3fffff) == 0) {
      return param_1;
    }
    *(uint *)(lVar10 + 8) = *(uint *)(lVar10 + 8) - 1;
    FUN_1434ef880();
    return param_1;
  }
  lVar10 = CONCAT44(uStack_44,local_48);
LAB_143593e3a:
  piVar11 = (int *)(lVar10 + 0x18);
  *piVar11 = *piVar11 + -1;
  if (*piVar11 != 0) {
    return param_1;
  }
  FUN_14335f920();
  return param_1;
}



// FUNCTION 143594440 FUN_143594440 body=100 status=ok
// SIG undefined FUN_143594440(void)

uint * FUN_143594440(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uStack_10;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = (uint)param_2 & 2;
  lVar2 = param_2 - uVar1;
  if ((param_2 & 2) == 0) {
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
    }
    *param_1 = *param_1 & 0xffffffec;
    *param_1 = *param_1 | 0xc;
    *(longlong *)(param_1 + 4) = lVar2;
    *(undefined8 *)(param_1 + 6) = uStack_10;
  }
  else if (uVar1 == 2) {
    FUN_1434ae820(param_1);
    return param_1;
  }
  return param_1;
}



// FUNCTION 1435944b0 FUN_1435944b0 body=1069 status=ok
// SIG undefined FUN_1435944b0(void)

/* WARNING: Removing unreachable block (ram,0x0001435947d3) */
/* WARNING: Removing unreachable block (ram,0x00014359483f) */
/* WARNING: Removing unreachable block (ram,0x000143594845) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1435944b0(uint *param_1,uint *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 local_48;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  uint uStack_20;
  uint uStack_1c;
  
  uVar3 = *param_2;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  switch(uVar3 >> 3 & 0xf) {
  case 4:
    local_48 = CONCAT71(local_48._1_7_,(char)param_2[4]);
    *param_1 = 1;
    *(undefined8 *)(param_1 + 4) = local_48;
    *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_3c,uStack_40);
    return param_1;
  case 5:
    uVar2 = *(undefined8 *)(param_2 + 4);
    *param_1 = 4;
    *(undefined8 *)(param_1 + 4) = uVar2;
    *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_3c,uStack_40);
    return param_1;
  case 6:
    local_48 = CONCAT44(local_48._4_4_,param_2[4]);
    *param_1 = 2;
    *(undefined8 *)(param_1 + 4) = local_48;
    *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_3c,uStack_40);
    return param_1;
  case 7:
    local_48 = CONCAT44(local_48._4_4_,param_2[4]);
    *param_1 = 3;
    *(undefined8 *)(param_1 + 4) = local_48;
    *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_3c,uStack_40);
    return param_1;
  case 8:
    lVar6 = *(longlong *)(param_2 + 4);
    piVar1 = (int *)(lVar6 + 0x18);
    *piVar1 = *piVar1 + 1;
    *param_1 = *param_1 & 0xffffffea;
    *param_1 = *param_1 | 10;
    *(longlong *)(param_1 + 4) = lVar6;
    *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_3c,uStack_40);
    return param_1;
  case 9:
    uVar7 = *(ulonglong *)(param_2 + 4);
    local_38 = 0;
    uVar3 = (uint)uVar7 & 2;
    uStack_30 = (int *)0x0;
    uVar5 = uVar7 - uVar3;
    if ((uVar7 & 2) == 0) {
      if (uVar5 != 0) {
        *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
      }
      local_38 = 0xc;
      uStack_20 = uStack_40;
      uStack_1c = uStack_3c;
      local_28 = uVar5;
    }
    else if (uVar3 == 2) {
      FUN_1434ae820(&local_38,uVar5);
    }
    if (&local_38 != param_1) {
      *param_1 = local_38;
      param_1[1] = uStack_34;
      param_1[2] = (uint)uStack_30;
      param_1[3] = uStack_30._4_4_;
      *(ulonglong *)(param_1 + 4) = local_28;
      *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_1c,uStack_20);
      uVar3 = *param_1 & 0x1f;
      if (9 < uVar3) {
        if ((*param_1 >> 9 & 1) == 0) {
          if (uVar3 == 10) {
            *(int *)(*(longlong *)(param_1 + 4) + 0x18) =
                 *(int *)(*(longlong *)(param_1 + 4) + 0x18) + 1;
          }
          else if (10 < uVar3) {
            if (uVar3 < 0xd) {
              lVar6 = *(longlong *)(param_1 + 4);
            }
            else {
              if (0xe < uVar3) goto LAB_143594676;
              lVar6 = *(longlong *)(param_1 + 6);
            }
            if (lVar6 != 0) {
              *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
            }
          }
        }
        else {
          **(int **)(param_1 + 2) = **(int **)(param_1 + 2) + 1;
        }
      }
    }
LAB_143594676:
    uVar3 = local_38 & 0x1f;
    if (9 < uVar3) {
      if ((local_38 >> 9 & 1) == 0) {
        if (uVar3 == 10) {
          piVar1 = (int *)(local_28 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
            return param_1;
          }
        }
        else {
          uVar7 = local_28;
          if ((uVar3 != 0xb) && (uVar3 != 0xc)) {
            if (1 < uVar3 - 0xd) {
              return param_1;
            }
            uVar7 = CONCAT44(uStack_1c,uStack_20);
          }
          if ((((uVar7 & 1) == 0) && (uVar7 != 0)) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
            FUN_1434ef880();
            return param_1;
          }
        }
      }
      else {
        *uStack_30 = *uStack_30 + -1;
        if (*uStack_30 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
          return param_1;
        }
      }
    }
    break;
  case 10:
    if (((byte)*param_2 & 6) == 2) {
      FUN_1434f0650(param_1);
      return param_1;
    }
    uVar7 = *(ulonglong *)(param_2 + 2);
    uVar3 = *param_2 >> 1 & 3;
    iVar8 = 2;
    if (uVar3 != 0) {
      if (uVar3 == 1) {
        iVar8 = 1;
      }
      else if (uVar3 == 2) {
        iVar8 = 0;
      }
    }
    lVar6 = CONCAT44(uStack_1c,uStack_20);
    uStack_30 = (int *)0x0;
    if ((~(*(byte *)(uVar7 + 0x88) >> 5) & 1) == 0) {
      uVar3 = iVar8 << 5 | 9;
    }
    else {
      uVar3 = iVar8 << 5 | 8;
    }
    local_38 = uVar3;
    local_28 = uVar7;
    if (&local_38 != param_1) {
      uVar4 = uVar3 & 0x1f;
      if (9 < uVar4) {
        if (uVar4 == 10) {
          *(int *)(uVar7 + 0x18) = *(int *)(uVar7 + 0x18) + 1;
        }
        else if (10 < uVar4) {
          if (uVar4 < 0xd) {
            *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
          }
          else if ((uVar4 < 0xf) && (lVar6 != 0)) {
            *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
          }
        }
      }
      FUN_143603d30(param_1);
      *param_1 = local_38;
      param_1[1] = uStack_34;
      param_1[2] = (uint)uStack_30;
      param_1[3] = uStack_30._4_4_;
      param_1[4] = (uint)local_28;
      param_1[5] = local_28._4_4_;
      param_1[6] = uStack_20;
      param_1[7] = uStack_1c;
    }
    uVar3 = uVar3 & 0x1f;
    if (9 < uVar3) {
      if (uVar3 == 10) {
        piVar1 = (int *)(uVar7 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(uVar7);
        }
      }
      else if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
        if (((uVar7 & 1) == 0) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
          FUN_1434ef880(uVar7);
        }
      }
      else if ((((uVar3 - 0xd < 2) && ((uStack_20 & 1) == 0)) && (lVar6 != 0)) &&
              ((*(uint *)(lVar6 + 8) & 0x3fffff) != 0)) {
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) - 1;
        FUN_1434ef880(lVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 143594910 FUN_143594910 body=174 status=ok
// SIG undefined FUN_143594910(void)

undefined1 * FUN_143594910(undefined1 *param_1,longlong *param_2)

{
  char cVar1;
  char local_res10 [24];
  
  if (((byte)(int)param_2[2] & 0x1f) == 1) {
    *param_1 = 0;
    return param_1;
  }
  cVar1 = FUN_143610b80(param_2);
  if (cVar1 == '\0') {
    local_res10[0] = '\0';
    FUN_143616f70(local_res10,param_2);
    if (local_res10[0] == '\0') {
      FUN_143617190(local_res10,param_2);
      if ((*param_2 != -1) && (param_2[1] != -1)) {
        *(longlong *)(*param_2 + 8) = param_2[1];
        *(longlong *)param_2[1] = *param_2;
        *param_2 = -1;
        param_2[1] = -1;
      }
      *param_1 = 1;
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1435949d0 FUN_1435949d0 body=192 status=ok
// SIG undefined FUN_1435949d0(void)

undefined1 * FUN_1435949d0(undefined1 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  char local_res10 [8];
  
  if (((byte)(int)param_2[2] & 0x1f) == 1) {
    *param_1 = 0;
    return param_1;
  }
  cVar2 = FUN_143610b80(param_2);
  if (cVar2 == '\0') {
    local_res10[0] = '\0';
    FUN_143616f70(local_res10,param_2);
    if (local_res10[0] == '\0') {
      FUN_143617190(local_res10,param_2);
      lVar1 = *param_2;
      *param_1 = 1;
      *(longlong **)(lVar1 + 8) = param_3;
      *(longlong **)param_2[1] = param_3;
      *param_3 = *param_2;
      param_3[1] = param_2[1];
      *param_2 = -1;
      param_2[1] = -1;
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 143594aa0 FUN_143594aa0 body=538 status=ok
// SIG undefined FUN_143594aa0(void)

undefined1 * FUN_143594aa0(undefined1 *param_1,ulonglong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong local_res18;
  char local_res20;
  
  plVar6 = (longlong *)*param_3;
  local_res20 = param_4;
  if (((byte)(int)plVar6[2] & 0x1f) == 1) {
    FUN_1435fef90();
    return param_1;
  }
  plVar1 = param_3 + 2;
  if ((longlong *)param_3[3] == plVar1) {
    if (((byte)(int)plVar6[2] & 0x1f) == 0x14) {
      if (param_3 == plVar6 + 0xb) {
        lVar5 = plVar6[6];
        lVar3 = 0x78;
      }
      else {
        lVar5 = plVar6[10];
        lVar3 = 0x58;
      }
      FUN_143594d40(lVar3 + (longlong)plVar6,lVar5);
      local_res18 = param_2;
      FUN_143615970(&local_res18,plVar6);
    }
    else {
      local_res18 = local_res18 & 0xffffffffffffff00;
      FUN_143617040(&local_res18,plVar6);
      if ((char)local_res18 != '\0') {
        *param_1 = 0;
        return param_1;
      }
      cVar2 = FUN_143610b80(plVar6);
      if (cVar2 != '\0') {
        if (local_res20 != '\0') {
          puVar4 = (undefined8 *)FUN_143598310(param_2,2,param_3,0,0);
          *puVar4 = *(undefined8 *)plVar6[1];
          puVar4[1] = plVar6[1];
          *(undefined8 **)plVar6[1] = puVar4;
          plVar6[1] = (longlong)puVar4;
        }
        goto LAB_143594ca7;
      }
      local_res18 = param_2;
      FUN_143616d70(&local_res18,plVar6);
    }
    if ((*plVar6 == -1) || (plVar6[1] == -1)) goto LAB_143594ca7;
    *(longlong *)(*plVar6 + 8) = plVar6[1];
  }
  else {
    plVar6 = (longlong *)param_3[3];
    if ((((plVar6 == plVar1) || (plVar6 != (longlong *)*plVar1)) ||
        (plVar6 = (longlong *)plVar6[2], ((byte)(int)plVar6[2] & 0x1f) != 0xf)) ||
       ((int)plVar6[3] != 0xb)) {
      *param_1 = 0;
      return param_1;
    }
    FUN_143594d40(plVar6 + 0x11,param_3);
    lVar5 = plVar6[0xc];
    if (lVar5 != 0) {
      *(longlong *)(plVar6[9] + 8) = plVar6[10];
      *(longlong *)plVar6[10] = plVar6[9];
      plVar6[9] = -1;
      plVar6[10] = -1;
      plVar6[0xc] = 0;
      FUN_143594aa0(&local_res18,param_2,lVar5,1);
    }
    if ((*plVar6 == -1) || (plVar6[1] == -1)) goto LAB_143594ca7;
    *(longlong *)(*plVar6 + 8) = plVar6[1];
  }
  *(longlong *)plVar6[1] = *plVar6;
  *plVar6 = -1;
  plVar6[1] = -1;
LAB_143594ca7:
  *param_1 = 1;
  return param_1;
}



// FUNCTION 143594d00 Unlink body=52 status=ok
// SIG undefined Unlink(void)

void Scaleform::GFx::AS3::TR::Use::Unlink(longlong *param_1)

{
  if (param_1[3] != 0) {
    *(longlong *)(*param_1 + 8) = param_1[1];
    *(longlong *)param_1[1] = *param_1;
    *param_1 = -1;
    param_1[1] = -1;
    param_1[3] = 0;
  }
  return;
}



// FUNCTION 143594d40 FUN_143594d40 body=112 status=ok
// SIG undefined FUN_143594d40(void)

void FUN_143594d40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  while (plVar2 != (longlong *)(param_1 + 0x10)) {
    if (plVar2[3] != 0) {
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      *(longlong *)plVar2[1] = *plVar2;
      *plVar2 = -1;
      plVar2[1] = -1;
      plVar2[3] = 0;
    }
    plVar2[3] = param_2;
    if (param_2 != 0) {
      plVar1 = (longlong *)(param_2 + 0x10);
      *plVar2 = *(longlong *)(param_2 + 0x10);
      plVar2[1] = (longlong)plVar1;
      *(longlong **)(*plVar1 + 8) = plVar2;
      *plVar1 = (longlong)plVar2;
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 143594e90 FUN_143594e90 body=59 status=ok
// SIG undefined FUN_143594e90(void)

undefined1 FUN_143594e90(longlong param_1)

{
  char *pcVar1;
  char local_res8 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  local_res8[0] = '\0';
  pcVar1 = (char *)FUN_1435a1bd0(*(undefined8 *)(param_1 + 0x38),local_res20,local_res8,local_res18)
  ;
  if ((*pcVar1 != '\0') && (local_res8[0] != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143594fc0 FUN_143594fc0 body=262 status=ok
// SIG undefined FUN_143594fc0(void)

undefined8 *
FUN_143594fc0(undefined8 *param_1,uint param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  
  param_1[7] = param_9;
  puVar1 = param_1 + 8;
  *(uint *)(param_1 + 2) = param_2 & 0x1f;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  *puVar1 = puVar1;
  param_1[9] = puVar1;
  puVar1 = param_1 + 10;
  *puVar1 = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0xffffffffffffffff;
  param_1[0x15] = 0xffffffffffffffff;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = puVar1;
  param_1[0x19] = puVar1;
  *(undefined4 *)((longlong)param_1 + 0xe4) = param_5;
  *(undefined4 *)(param_1 + 0x1d) = param_7;
  param_1[0x1f] = param_6;
  param_1[0x20] = param_8;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1e] = param_4;
  param_1[0x21] = 0;
  param_1[0x23] = param_10;
  puVar1 = param_1 + 0x24;
  param_1[0x22] = param_1;
  *puVar1 = puVar1;
  param_1[0x25] = puVar1;
  return param_1;
}



// FUNCTION 143595230 FUN_143595230 body=149 status=ok
// SIG undefined FUN_143595230(void)

undefined8 FUN_143595230(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  switch(param_1) {
  case 0:
    return 0x11;
  case 1:
    return 0x12;
  case 2:
    return 0xc;
  case 3:
    return 0xd;
  case 4:
    return 0xe;
  case 5:
    return 0xf;
  case 6:
    return 0x13;
  case 7:
    return 0x14;
  case 8:
    return 0x15;
  case 9:
    return 0x16;
  case 10:
    return 0x17;
  case 0xb:
    return 0x18;
  case 0xc:
    return 0x19;
  case 0xd:
    uVar1 = 0x1a;
  }
  return uVar1;
}



// FUNCTION 143595330 FUN_143595330 body=137 status=ok
// SIG undefined FUN_143595330(void)

undefined8 FUN_143595330(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0xc:
    return 2;
  case 0xd:
    return 3;
  case 0xe:
    return 4;
  case 0xf:
    return 5;
  case 0x12:
    return 1;
  case 0x13:
    return 6;
  case 0x14:
    return 7;
  case 0x15:
    return 8;
  case 0x16:
    return 9;
  case 0x17:
    return 10;
  case 0x18:
    return 0xb;
  case 0x19:
    return 0xc;
  case 0x1a:
    uVar1 = 0xd;
  }
  return uVar1;
}



// FUNCTION 143595400 FUN_143595400 body=145 status=ok
// SIG undefined FUN_143595400(void)

void FUN_143595400(longlong param_1)

{
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    *(undefined4 *)(param_1 + 0x18) = 1;
    return;
  case 1:
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x18) = 8;
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x18) = 9;
    return;
  case 4:
    *(undefined4 *)(param_1 + 0x18) = 10;
    return;
  case 5:
    *(undefined4 *)(param_1 + 0x18) = 0xb;
    return;
  case 6:
    *(undefined4 *)(param_1 + 0x18) = 7;
    return;
  case 7:
    *(undefined4 *)(param_1 + 0x18) = 6;
    return;
  case 8:
    *(undefined4 *)(param_1 + 0x18) = 2;
    return;
  case 9:
    *(undefined4 *)(param_1 + 0x18) = 3;
    return;
  case 10:
    *(undefined4 *)(param_1 + 0x18) = 4;
    return;
  case 0xb:
    *(undefined4 *)(param_1 + 0x18) = 5;
    return;
  case 0xc:
    *(undefined4 *)(param_1 + 0x18) = 0xd;
    return;
  case 0xd:
    *(undefined4 *)(param_1 + 0x18) = 0xc;
  }
  return;
}



// FUNCTION 143595520 FUN_143595520 body=129 status=ok
// SIG undefined FUN_143595520(void)

undefined8 FUN_143595520(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  switch(param_1) {
  case 0:
    return 0x55;
  case 1:
    return 0x56;
  case 2:
    return 0x42;
  case 3:
    return 0x50;
  case 4:
    return 0x49;
  case 5:
    return 0xce;
  case 6:
    return 0x41;
  case 7:
    return 0x43;
  case 8:
    return 0xb9;
  case 9:
    return 0xba;
  case 10:
    return 0xbb;
  case 0xb:
    uVar1 = 0x53;
  }
  return uVar1;
}



// FUNCTION 143595640 FUN_143595640 body=81 status=ok
// SIG undefined FUN_143595640(void)

undefined8 FUN_143595640(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0x41:
    return 6;
  case 0x42:
    return 2;
  case 0x43:
    return 7;
  case 0x49:
    return 4;
  case 0x53:
    uVar1 = 0xb;
    break;
  case 0x56:
    return 1;
  }
  return uVar1;
}



// FUNCTION 143595700 FUN_143595700 body=97 status=ok
// SIG undefined FUN_143595700(void)

undefined1 FUN_143595700(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
  }
  local_res8 = param_2;
  lVar2 = FUN_1435d80d0(&local_res8,*(undefined4 *)(param_1 + 0x18),lVar1,uVar3);
  if (lVar1 != lVar2) {
    *(longlong *)(param_1 + 0xc0) = lVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 143595770 FUN_143595770 body=81 status=ok
// SIG undefined FUN_143595770(void)

undefined8 FUN_143595770(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  switch(param_1) {
  case 0:
    return 0x4a;
  case 1:
    return 0x4c;
  case 2:
    return 0x4f;
  case 3:
    return 0x46;
  case 4:
    return 0x45;
  case 5:
    uVar1 = 0x4e;
  }
  return uVar1;
}



// FUNCTION 143595850 FUN_143595850 body=73 status=ok
// SIG undefined FUN_143595850(void)

undefined8 FUN_143595850(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0x45:
    return 4;
  case 0x46:
    return 3;
  case 0x4c:
    return 1;
  case 0x4e:
    uVar1 = 5;
    break;
  case 0x4f:
    return 2;
  }
  return uVar1;
}



// FUNCTION 1435958e0 FUN_1435958e0 body=544 status=ok
// SIG undefined FUN_1435958e0(void)

undefined8 *
FUN_1435958e0(undefined8 *param_1,undefined4 param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_7;
  *(undefined4 *)(param_1 + 3) = param_2;
  puVar1 = param_1 + 6;
  param_1[4] = param_8;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 9;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x18);
  *puVar1 = 0xffffffffffffffff;
  param_1[7] = 0xffffffffffffffff;
  param_1[8] = param_1;
  param_1[9] = param_4;
  if (param_4 != 0) {
    plVar2 = (longlong *)(param_4 + 0x10);
    *puVar1 = *(undefined8 *)(param_4 + 0x10);
    param_1[7] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  lVar3 = *(longlong *)(param_3 + 200);
  puVar1 = param_1 + 10;
  *puVar1 = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0xc] = param_1;
  param_1[0xd] = lVar3;
  if (lVar3 != 0) {
    plVar2 = (longlong *)(lVar3 + 0x10);
    *puVar1 = *(undefined8 *)(lVar3 + 0x10);
    param_1[0xb] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  lVar3 = *(longlong *)(param_3 + 0xb8);
  puVar1 = param_1 + 0xe;
  *puVar1 = 0xffffffffffffffff;
  param_1[0xf] = 0xffffffffffffffff;
  param_1[0x10] = param_1;
  param_1[0x11] = lVar3;
  if (lVar3 != 0) {
    plVar2 = (longlong *)(lVar3 + 0x10);
    *puVar1 = *(undefined8 *)(lVar3 + 0x10);
    param_1[0xf] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  lVar3 = *(longlong *)(param_3 + 0xc0);
  puVar1 = param_1 + 0x12;
  *puVar1 = 0xffffffffffffffff;
  param_1[0x13] = 0xffffffffffffffff;
  param_1[0x14] = param_1;
  param_1[0x15] = lVar3;
  if (lVar3 != 0) {
    plVar2 = (longlong *)(lVar3 + 0x10);
    *puVar1 = *(undefined8 *)(lVar3 + 0x10);
    param_1[0x13] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  uVar5 = 0;
  param_1[0x17] = param_5;
  puVar1 = param_1 + 0x18;
  param_1[0x16] = param_1;
  *puVar1 = puVar1;
  param_1[0x19] = puVar1;
  param_1[0x1b] = param_6;
  puVar1 = param_1 + 0x1c;
  param_1[0x1a] = param_1;
  *puVar1 = puVar1;
  param_1[0x1d] = puVar1;
  param_1[0x1e] = 0xffffffffffffffff;
  param_1[0x1f] = 0xffffffffffffffff;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (*(int *)(param_1 + 5) != 0) {
    do {
      puVar1 = param_1 + uVar5 * 4 + 0x1e;
      if (puVar1 != (undefined8 *)0x0) {
        if (*(ulonglong *)(param_3 + 0x28) < (ulonglong)*(uint *)(param_3 + 0x18)) {
          lVar3 = *(longlong *)(param_3 + 0x40 + uVar5 * 8);
        }
        else {
          lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x20) + uVar5 * 8);
        }
        *puVar1 = 0xffffffffffffffff;
        puVar1[1] = 0xffffffffffffffff;
        puVar1[2] = param_1;
        puVar1[3] = lVar3;
        if (lVar3 != 0) {
          plVar2 = (longlong *)(lVar3 + 0x10);
          *puVar1 = *(undefined8 *)(lVar3 + 0x10);
          puVar1[1] = plVar2;
          *(undefined8 **)(*plVar2 + 8) = puVar1;
          *plVar2 = (longlong)puVar1;
        }
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 5));
  }
  return param_1;
}



// FUNCTION 143595b10 FUN_143595b10 body=83 status=ok
// SIG undefined FUN_143595b10(void)

undefined8 FUN_143595b10(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  switch(param_1) {
  case 1:
    return 0x5e;
  case 2:
    return 0x5d;
  case 3:
    return 0x60;
  case 4:
    return 0x58;
  case 5:
    return 0x65;
  case 6:
    uVar1 = 0x40;
  }
  return uVar1;
}



// FUNCTION 143595bc0 FUN_143595bc0 body=90 status=ok
// SIG undefined FUN_143595bc0(void)

undefined8 FUN_143595bc0(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0x40:
    uVar1 = 6;
    break;
  case 0x58:
    return 4;
  case 0x5d:
    return 2;
  case 0x5e:
    return 1;
  case 0x60:
    return 3;
  case 0x65:
    return 5;
  }
  return uVar1;
}



// FUNCTION 143595c70 FUN_143595c70 body=99 status=ok
// SIG undefined FUN_143595c70(void)

undefined8 FUN_143595c70(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = *(byte **)(param_1 + 0x58);
  if (*(int *)(param_1 + 0x18) == 5) {
    pbVar2 = *(byte **)(*(longlong *)((ulonglong)*(uint *)(param_1 + 0x1c) * 0x20 + 0x88 + param_1)
                       + 8);
    if ((*pbVar2 & 1) != 0) {
      pbVar2 = (byte *)FUN_1435d0f90(param_2,pbVar2,0);
    }
    if (pbVar1 != pbVar2) {
      *(byte **)(param_1 + 0x58) = pbVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143595ef0 FUN_143595ef0 body=388 status=ok
// SIG undefined FUN_143595ef0(void)

undefined8 *
FUN_143595ef0(undefined8 *param_1,undefined4 param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 3) = param_2;
  puVar1 = param_1 + 5;
  param_1[4] = param_7;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 0xe;
  *puVar1 = 0xffffffffffffffff;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = param_1;
  param_1[8] = param_4;
  if (param_4 != 0) {
    plVar3 = (longlong *)(param_4 + 0x10);
    *puVar1 = *(undefined8 *)(param_4 + 0x10);
    param_1[6] = plVar3;
    *(undefined8 **)(*plVar3 + 8) = puVar1;
    *plVar3 = (longlong)puVar1;
  }
  lVar2 = *(longlong *)(param_3 + 0x68);
  puVar1 = param_1 + 9;
  *puVar1 = 0xffffffffffffffff;
  param_1[10] = 0xffffffffffffffff;
  param_1[0xb] = param_1;
  param_1[0xc] = lVar2;
  if (lVar2 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x10);
    *puVar1 = *(undefined8 *)(lVar2 + 0x10);
    param_1[10] = plVar3;
    *(undefined8 **)(*plVar3 + 8) = puVar1;
    *plVar3 = (longlong)puVar1;
  }
  lVar2 = *(longlong *)(param_3 + 0x58);
  puVar1 = param_1 + 0xd;
  *puVar1 = 0xffffffffffffffff;
  param_1[0xe] = 0xffffffffffffffff;
  param_1[0xf] = param_1;
  param_1[0x10] = lVar2;
  if (lVar2 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x10);
    *puVar1 = *(undefined8 *)(lVar2 + 0x10);
    param_1[0xe] = plVar3;
    *(undefined8 **)(*plVar3 + 8) = puVar1;
    *plVar3 = (longlong)puVar1;
  }
  lVar2 = *(longlong *)(param_3 + 0x60);
  puVar1 = param_1 + 0x11;
  *puVar1 = 0xffffffffffffffff;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x13] = param_1;
  param_1[0x14] = lVar2;
  if (lVar2 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x10);
    *puVar1 = *(undefined8 *)(lVar2 + 0x10);
    param_1[0x12] = plVar3;
    *(undefined8 **)(*plVar3 + 8) = puVar1;
    *plVar3 = (longlong)puVar1;
  }
  lVar2 = *(longlong *)(param_3 + 0x18);
  puVar1 = param_1 + 0x15;
  *puVar1 = 0xffffffffffffffff;
  param_1[0x16] = 0xffffffffffffffff;
  param_1[0x17] = param_1;
  param_1[0x18] = lVar2;
  if (lVar2 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x10);
    *puVar1 = *(undefined8 *)(lVar2 + 0x10);
    param_1[0x16] = plVar3;
    *(undefined8 **)(*plVar3 + 8) = puVar1;
    *plVar3 = (longlong)puVar1;
  }
  param_1[0x1a] = param_5;
  puVar1 = param_1 + 0x1b;
  param_1[0x19] = param_1;
  *puVar1 = puVar1;
  param_1[0x1c] = puVar1;
  return param_1;
}



// FUNCTION 143596080 FUN_143596080 body=173 status=ok
// SIG undefined FUN_143596080(void)

undefined8 FUN_143596080(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  switch(param_1) {
  case 0:
    return 0x96;
  case 1:
    return 0x90;
  case 2:
    return 0xc4;
  case 3:
    return 0x91;
  case 4:
    return 0xc0;
  case 5:
    return 0x93;
  case 6:
    return 0xc1;
  case 7:
    return 0x77;
  case 8:
    return 0x70;
  case 9:
    return 0x95;
  case 10:
    return 0x97;
  case 0xb:
    return 0x2a;
  case 0xc:
    return 0x30;
  case 0xd:
    return 0x1c;
  case 0xe:
    return 0x78;
  case 0xf:
    return 0x72;
  case 0x10:
    uVar1 = 0x71;
  }
  return uVar1;
}



// FUNCTION 143596420 FUN_143596420 body=106 status=ok
// SIG undefined FUN_143596420(void)

undefined8 FUN_143596420(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  char *local_res18;
  
  pcVar1 = *(char **)(param_1 + 0x90);
  local_res10 = param_2;
  pcVar2 = (char *)FUN_1435d8230(&local_res10,local_res8,&local_res18,
                                 *(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x60));
  if ((*pcVar2 != '\0') && (pcVar1 != local_res18)) {
    *(char **)(param_1 + 0x90) = local_res18;
    return 1;
  }
  return 0;
}



// FUNCTION 143596490 FUN_143596490 body=97 status=ok
// SIG undefined FUN_143596490(void)

undefined8 FUN_143596490(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  switch(param_1) {
  case 0:
    return 0x92;
  case 1:
    return 0xc2;
  case 2:
    return 0x88;
  case 3:
    return 0x94;
  case 4:
    return 0xc3;
  case 5:
    return 0x89;
  case 6:
    return 99;
  case 7:
    uVar1 = 0x62;
  }
  return uVar1;
}



// FUNCTION 1435966d0 FUN_1435966d0 body=166 status=ok
// SIG undefined FUN_1435966d0(void)

longlong FUN_1435966d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  uint7 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  lVar5 = (longlong)*(int *)(param_1 + 0x18);
  plVar1 = (longlong *)(lVar3 + 8);
  lVar6 = *(longlong *)(*plVar1 + 8);
  if ((lVar6 == 0) ||
     (lVar3 = *(longlong *)(lVar6 + 0x98),
     *(longlong *)(*(longlong *)(lVar3 + 0x230) + 0xd8) != lVar6)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  lVar6 = 0;
  switch(*(int *)(param_1 + 0x18)) {
  case 0:
  case 3:
    lVar3 = 0xa8;
    if (bVar2) {
      lVar3 = 0xb8;
    }
    lVar6 = lVar3 + param_2;
    break;
  case 1:
  case 4:
    lVar6 = param_2 + 0xb8;
    lVar3 = lVar5;
    break;
  case 2:
  case 5:
    lVar6 = param_2 + 200;
    lVar3 = lVar5;
    break;
  case 6:
  case 7:
    lVar3 = lVar5;
    lVar6 = *plVar1;
  }
  uVar4 = (uint7)((ulonglong)lVar3 >> 8);
  if (*(longlong *)(param_1 + 0x60) == lVar6) {
    return (ulonglong)uVar4 << 8;
  }
  *(longlong *)(param_1 + 0x60) = lVar6;
  return CONCAT71(uVar4,1);
}



// FUNCTION 1435967a0 FUN_1435967a0 body=253 status=ok
// SIG undefined FUN_1435967a0(void)

undefined8 FUN_1435967a0(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  switch(param_1) {
  case 0:
    return 0xa0;
  case 1:
    return 0xc5;
  case 2:
    return 0xa1;
  case 3:
    return 0xc6;
  case 4:
    return 0xa2;
  case 5:
    return 199;
  case 6:
    return 0xa3;
  case 7:
    return 0xa4;
  case 8:
    return 0xa9;
  case 9:
    return 0xaa;
  case 10:
    return 0xa8;
  case 0xb:
    return 0xa5;
  case 0xc:
    return 0xa6;
  case 0xd:
    return 0xa7;
  case 0xe:
    return 0x23;
  case 0xf:
    return 0x87;
  case 0x10:
    return 0xab;
  case 0x11:
    return 0xac;
  case 0x12:
    return 0xad;
  case 0x13:
    return 0xae;
  case 0x14:
    return 0xaf;
  case 0x15:
    return 0xb0;
  case 0x16:
    return 0x1e;
  case 0x17:
    return 0xb4;
  case 0x18:
    return 0xb1;
  case 0x19:
    return 0xb3;
  case 0x1a:
    uVar1 = 0x1f;
  }
  return uVar1;
}



// FUNCTION 143596c40 FUN_143596c40 body=105 status=ok
// SIG undefined FUN_143596c40(void)

undefined8 FUN_143596c40(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  char *local_res18;
  
  pcVar1 = *(char **)(param_1 + 0x70);
  local_res10 = param_2;
  pcVar2 = (char *)FUN_1435d8db0(&local_res10,local_res8,&local_res18,
                                 *(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x40),
                                 *(undefined8 *)(param_1 + 0x60));
  if ((*pcVar2 != '\0') && (pcVar1 != local_res18)) {
    *(char **)(param_1 + 0x70) = local_res18;
    return 1;
  }
  return 0;
}



// FUNCTION 143596d60 FUN_143596d60 body=357 status=ok
// SIG undefined FUN_143596d60(void)

undefined8 *
FUN_143596d60(undefined8 *param_1,undefined4 param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_7;
  *(undefined4 *)(param_1 + 3) = param_2;
  puVar1 = param_1 + 5;
  param_1[4] = param_8;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 0x12;
  *puVar1 = 0xffffffffffffffff;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = param_1;
  param_1[8] = param_4;
  if (param_4 != 0) {
    plVar3 = (longlong *)(param_4 + 0x10);
    *puVar1 = *(undefined8 *)(param_4 + 0x10);
    param_1[6] = plVar3;
    *(undefined8 **)(*plVar3 + 8) = puVar1;
    *plVar3 = (longlong)puVar1;
  }
  lVar2 = *(longlong *)(param_3 + 0x60);
  puVar1 = param_1 + 9;
  *puVar1 = 0xffffffffffffffff;
  param_1[10] = 0xffffffffffffffff;
  param_1[0xb] = param_1;
  param_1[0xc] = lVar2;
  if (lVar2 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x10);
    *puVar1 = *(undefined8 *)(lVar2 + 0x10);
    param_1[10] = plVar3;
    *(undefined8 **)(*plVar3 + 8) = puVar1;
    *plVar3 = (longlong)puVar1;
  }
  lVar2 = *(longlong *)(param_3 + 0x50);
  puVar1 = param_1 + 0xd;
  *puVar1 = 0xffffffffffffffff;
  param_1[0xe] = 0xffffffffffffffff;
  param_1[0xf] = param_1;
  param_1[0x10] = lVar2;
  if (lVar2 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x10);
    *puVar1 = *(undefined8 *)(lVar2 + 0x10);
    param_1[0xe] = plVar3;
    *(undefined8 **)(*plVar3 + 8) = puVar1;
    *plVar3 = (longlong)puVar1;
  }
  lVar2 = *(longlong *)(param_3 + 0x58);
  puVar1 = param_1 + 0x11;
  *puVar1 = 0xffffffffffffffff;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x13] = param_1;
  param_1[0x14] = lVar2;
  if (lVar2 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x10);
    *puVar1 = *(undefined8 *)(lVar2 + 0x10);
    param_1[0x12] = plVar3;
    *(undefined8 **)(*plVar3 + 8) = puVar1;
    *plVar3 = (longlong)puVar1;
  }
  param_1[0x16] = param_5;
  puVar1 = param_1 + 0x17;
  param_1[0x15] = param_1;
  *puVar1 = puVar1;
  param_1[0x18] = puVar1;
  param_1[0x1a] = param_6;
  puVar1 = param_1 + 0x1b;
  param_1[0x19] = param_1;
  *puVar1 = puVar1;
  param_1[0x1c] = puVar1;
  return param_1;
}



// FUNCTION 143597060 FUN_143597060 body=113 status=ok
// SIG undefined FUN_143597060(void)

undefined8 FUN_143597060(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  char *local_res18;
  
  pcVar1 = *(char **)(param_1 + 0x60);
  local_res10 = param_2;
  pcVar2 = (char *)FUN_1435d9dd0(&local_res10,local_res8,&local_res18,
                                 *(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x50),
                                 *(undefined8 *)(param_1 + 0x20),
                                 (int)*(undefined8 *)(param_1 + 0x28));
  if ((*pcVar2 != '\0') && (pcVar1 != local_res18)) {
    *(char **)(param_1 + 0x60) = local_res18;
    return 1;
  }
  return 0;
}



// FUNCTION 143597180 FUN_143597180 body=273 status=ok
// SIG undefined FUN_143597180(void)

undefined8 *
FUN_143597180(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 3) = param_5;
  puVar1 = param_1 + 5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_6;
  param_1[4] = param_7;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 0x15;
  *puVar1 = 0xffffffffffffffff;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = param_1;
  param_1[8] = param_3;
  if (param_3 != 0) {
    plVar2 = (longlong *)(param_3 + 0x10);
    *puVar1 = *(undefined8 *)(param_3 + 0x10);
    param_1[6] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  param_1[9] = 0xffffffffffffffff;
  puVar1 = param_1 + 9;
  param_1[10] = 0xffffffffffffffff;
  param_1[0xb] = param_1;
  param_1[0xc] = param_4;
  if (param_4 != 0) {
    plVar2 = (longlong *)(param_4 + 0x10);
    *puVar1 = *(undefined8 *)(param_4 + 0x10);
    param_1[10] = plVar2;
    *(undefined8 **)(*plVar2 + 8) = puVar1;
    *plVar2 = (longlong)puVar1;
  }
  param_1[0xe] = *(undefined8 *)(param_3 + 8);
  puVar1 = param_1 + 0xf;
  param_1[0xd] = param_1;
  *puVar1 = puVar1;
  param_1[0x10] = puVar1;
  param_1[0x12] = *(undefined8 *)(param_4 + 8);
  puVar1 = param_1 + 0x13;
  param_1[0x11] = param_1;
  *puVar1 = puVar1;
  param_1[0x14] = puVar1;
  param_1[0x16] = param_2 + 0x98;
  puVar1 = param_1 + 0x17;
  param_1[0x15] = param_1;
  *puVar1 = puVar1;
  param_1[0x18] = puVar1;
  return param_1;
}



// FUNCTION 143597360 FUN_143597360 body=186 status=ok
// SIG undefined FUN_143597360(void)

longlong FUN_143597360(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  byte bVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  bVar2 = Scaleform::Alg::RoundUpToPowerOfTwo(0x20);
  uVar5 = (ulonglong)param_2;
  bVar6 = 0x40;
  if (bVar2 < 0x40) {
    bVar6 = bVar2;
  }
  if (bVar6 < 8) {
    bVar6 = 8;
  }
  lVar3 = FUN_1435ba1a0(uVar1,(ulonglong)param_2 << 5,bVar6);
  if (param_2 != 0) {
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    do {
      if (puVar4 + -2 != (undefined8 *)0x0) {
        puVar4[-2] = 0xffffffffffffffff;
        puVar4[-1] = 0xffffffffffffffff;
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      puVar4 = puVar4 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return lVar3;
}



// FUNCTION 143597420 FUN_143597420 body=178 status=ok
// SIG undefined FUN_143597420(void)

longlong FUN_143597420(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  bVar2 = Scaleform::Alg::RoundUpToPowerOfTwo(0x20);
  uVar5 = (ulonglong)param_2;
  bVar6 = 0x40;
  if (bVar2 < 0x40) {
    bVar6 = bVar2;
  }
  if (bVar6 < 8) {
    bVar6 = 8;
  }
  lVar3 = FUN_1435ba1a0(uVar1,(ulonglong)param_2 << 5,bVar6);
  if (param_2 != 0) {
    lVar4 = lVar3 + 0x10;
    do {
      if ((undefined8 *)(lVar4 + -0x10) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar4 + -0x10) = 0;
        *(undefined8 *)(lVar4 + -8) = 0;
        *(longlong *)lVar4 = lVar4;
        *(longlong *)(lVar4 + 8) = lVar4;
      }
      lVar4 = lVar4 + 0x20;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return lVar3;
}



// FUNCTION 1435974e0 FUN_1435974e0 body=109 status=ok
// SIG undefined FUN_1435974e0(void)

void FUN_1435974e0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x28,**(undefined1 **)(param_1 + 8));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0xffffffffffffffff;
    puVar1[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)(puVar1 + 3) = param_2;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = param_3;
    *(undefined4 *)(puVar1 + 4) = param_4;
    return;
  }
  return;
}



// FUNCTION 143597560 FUN_143597560 body=218 status=ok
// SIG undefined FUN_143597560(void)

void FUN_143597560(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x130,**(undefined1 **)(param_1 + 8));
  if (lVar2 != 0) {
    uVar3 = FUN_143597420(param_1,param_4);
    uVar4 = FUN_143597420(param_1,param_3);
    uVar5 = FUN_143597420(param_1,param_2);
    FUN_143594fc0(lVar2,1,param_2,uVar5,param_3,uVar4,param_4,uVar3,param_5,lVar1 + 0x58);
  }
  return;
}



// FUNCTION 143597640 FUN_143597640 body=270 status=ok
// SIG undefined FUN_143597640(void)

longlong FUN_143597640(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x88,**(undefined1 **)(param_1 + 8));
  if (lVar1 != 0) {
    uVar2 = FUN_143597360(param_1,param_6);
    uVar3 = FUN_143597360(param_1,param_5);
    uVar4 = FUN_143597360(param_1,param_4);
    FUN_14360a290(lVar1,4,param_2,param_3,param_4,uVar4,param_5,uVar3,param_6,uVar2,param_7);
    *(undefined4 *)(lVar1 + 0x80) = 1;
    return lVar1;
  }
  return 0;
}



// FUNCTION 143597760 FUN_143597760 body=93 status=ok
// SIG undefined FUN_143597760(void)

void FUN_143597760(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x78,**(undefined1 **)(param_1 + 8));
  if (lVar1 != 0) {
    FUN_14360a700(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 1435977d0 FUN_1435977d0 body=298 status=ok
// SIG undefined FUN_1435977d0(void)

longlong FUN_1435977d0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                      undefined8 param_9)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x90,**(undefined1 **)(param_1 + 8));
  if (lVar1 != 0) {
    uVar2 = FUN_143597360(param_1,param_7);
    uVar3 = FUN_143597360(param_1,param_6);
    uVar4 = FUN_143597360(param_1,param_5);
    FUN_14360a290(lVar1,0x17,param_3,param_4,param_5,uVar4,param_6,uVar3,param_7,uVar2,param_9);
    *(undefined4 *)(lVar1 + 0x80) = param_2;
    *(undefined8 *)(lVar1 + 0x88) = param_8;
    return lVar1;
  }
  return 0;
}



// FUNCTION 143597900 FUN_143597900 body=156 status=ok
// SIG undefined FUN_143597900(void)

undefined8 * FUN_143597900(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),(ulonglong)param_3 * 8 + 0x50,
                         **(undefined1 **)(param_1 + 8));
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0xffffffffffffffff;
    puVar1 = puVar3 + 5;
    puVar3[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar3 + 2) = 6;
    *(uint *)(puVar3 + 3) = param_3 + 1;
    *puVar1 = 0xffffffffffffffff;
    puVar3[6] = 0xffffffffffffffff;
    puVar3[7] = puVar3;
    puVar3[8] = param_2;
    if (param_2 != 0) {
      plVar2 = (longlong *)(param_2 + 0x10);
      *puVar1 = *(undefined8 *)(param_2 + 0x10);
      puVar3[6] = plVar2;
      *(undefined8 **)(*plVar2 + 8) = puVar1;
      *plVar2 = (longlong)puVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1435979b0 FUN_1435979b0 body=287 status=ok
// SIG undefined FUN_1435979b0(void)

undefined8 *
FUN_1435979b0(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,uint param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  byte bVar6;
  
  puVar4 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x60,**(undefined1 **)(param_1 + 8));
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0xffffffffffffffff;
    puVar1 = puVar4 + 8;
    puVar4[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar4 + 2) = 7;
    *(undefined4 *)(puVar4 + 3) = param_2;
    *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[5] = param_3;
    *puVar1 = 0xffffffffffffffff;
    puVar4[9] = 0xffffffffffffffff;
    puVar4[10] = puVar4;
    puVar4[0xb] = param_4;
    if (param_4 != 0) {
      plVar2 = (longlong *)(param_4 + 0x10);
      *puVar1 = *(undefined8 *)(param_4 + 0x10);
      puVar4[9] = plVar2;
      *(undefined8 **)(*plVar2 + 8) = puVar1;
      *plVar2 = (longlong)puVar1;
    }
  }
  if (param_5 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    bVar3 = Scaleform::Alg::RoundUpToPowerOfTwo(8);
    bVar6 = 0x40;
    if (bVar3 < 0x40) {
      bVar6 = bVar3;
    }
    if (bVar6 < 8) {
      bVar6 = 8;
    }
    uVar5 = FUN_1435ba1a0(uVar5,(ulonglong)param_5 << 3,bVar6);
    *(uint *)(puVar4 + 4) = param_5;
    puVar4[7] = uVar5;
    *(uint *)((longlong)puVar4 + 0x1c) = param_5;
    uVar5 = FUN_143597420(param_1,param_5);
    puVar4[6] = uVar5;
  }
  return puVar4;
}



// FUNCTION 143597ae0 FUN_143597ae0 body=333 status=ok
// SIG undefined FUN_143597ae0(void)

longlong FUN_143597ae0(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                      undefined4 param_9,undefined8 param_10)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar1 = *(uint *)(param_3 + 0x18);
  uVar9 = (ulonglong)uVar1;
  uVar2 = uVar1 - 1;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x10);
  lVar3 = FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),(ulonglong)uVar2 * 0x20 + 0xf8,
                        **(undefined1 **)(param_1 + 8));
  lVar8 = 0;
  lVar4 = lVar8;
  if (lVar3 != 0) {
    lVar4 = FUN_14360a7b0(lVar3,param_2,uVar1,param_4,param_5,param_6,lVar6 + 0x58,param_7,param_8,
                          param_9,param_10);
  }
  if (uVar1 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0xd8);
    do {
      if (puVar5 != (undefined8 *)0x0) {
        if (*(ulonglong *)(param_3 + 0x28) < (ulonglong)*(uint *)(param_3 + 0x18)) {
          lVar6 = *(longlong *)(param_3 + 0x40 + lVar8);
        }
        else {
          lVar6 = *(longlong *)(lVar8 + *(longlong *)(param_3 + 0x20));
        }
        *puVar5 = 0xffffffffffffffff;
        puVar5[1] = 0xffffffffffffffff;
        puVar5[2] = lVar4;
        puVar5[3] = lVar6;
        if (lVar6 != 0) {
          plVar7 = (longlong *)(lVar6 + 0x10);
          *puVar5 = *(undefined8 *)(lVar6 + 0x10);
          puVar5[1] = plVar7;
          *(undefined8 **)(*plVar7 + 8) = puVar5;
          *plVar7 = (longlong)puVar5;
        }
      }
      puVar5 = puVar5 + 4;
      lVar8 = lVar8 + 8;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return lVar4;
}



// FUNCTION 143597c40 FUN_143597c40 body=150 status=ok
// SIG undefined FUN_143597c40(void)

void FUN_143597c40(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = *(uint *)(param_3 + 0x18);
  if (uVar2 != 0) {
    uVar2 = uVar2 - 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar3 = FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),(ulonglong)uVar2 * 0x20 + 0x110,
                        **(undefined1 **)(param_1 + 8));
  if (lVar3 != 0) {
    FUN_1435958e0(lVar3,param_2,param_3,param_4,lVar1 + 0x58,param_5,param_6,param_7);
  }
  return;
}



// FUNCTION 143597ce0 FUN_143597ce0 body=336 status=ok
// SIG undefined FUN_143597ce0(void)

undefined8 *
FUN_143597ce0(longlong param_1,int param_2,longlong param_3,undefined8 param_4,int param_5,
             undefined8 param_6)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  uVar4 = *(uint *)(param_3 + 0x14);
  if (param_2 == 5) {
    uVar4 = param_5 + 1;
  }
  uVar2 = uVar4 - 1;
  if (uVar4 == 0) {
    uVar2 = 0;
  }
  puVar3 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),(ulonglong)uVar2 * 0x20 + 0x90,
                         **(undefined1 **)(param_1 + 8));
  puVar6 = (undefined8 *)0x0;
  puVar7 = puVar6;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0xffffffffffffffff;
    puVar3[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar3 + 2) = 10;
    *(int *)(puVar3 + 3) = param_2;
    *(int *)((longlong)puVar3 + 0x1c) = param_5;
    puVar3[4] = param_6;
    puVar7 = puVar3 + 0xc;
    *(uint *)(puVar3 + 5) = uVar4;
    puVar3[6] = 0xffffffffffffffff;
    puVar3[7] = 0xffffffffffffffff;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = puVar3;
    puVar3[0xb] = param_4;
    *puVar7 = puVar7;
    puVar3[0xd] = puVar7;
    puVar3[0xe] = 0xffffffffffffffff;
    puVar3[0xf] = 0xffffffffffffffff;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar7 = puVar3;
  }
  if (uVar4 != 0) {
    puVar3 = puVar7 + 0xe;
    uVar8 = (ulonglong)uVar4;
    do {
      if (puVar3 != (undefined8 *)0x0) {
        lVar1 = *(longlong *)((longlong)puVar6 + *(longlong *)(param_3 + 0x60));
        *puVar3 = 0xffffffffffffffff;
        puVar3[1] = 0xffffffffffffffff;
        puVar3[2] = puVar7;
        puVar3[3] = lVar1;
        if (lVar1 != 0) {
          plVar5 = (longlong *)(lVar1 + 0x10);
          *puVar3 = *(undefined8 *)(lVar1 + 0x10);
          puVar3[1] = plVar5;
          *(undefined8 **)(*plVar5 + 8) = puVar3;
          *plVar5 = (longlong)puVar3;
        }
      }
      puVar3 = puVar3 + 4;
      puVar6 = puVar6 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return puVar7;
}



// FUNCTION 143597e40 FUN_143597e40 body=85 status=ok
// SIG undefined FUN_143597e40(void)

void FUN_143597e40(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x38,**(undefined1 **)(param_1 + 8));
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0xffffffffffffffff;
    puVar1 = puVar2 + 5;
    puVar2[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar2 + 2) = 2;
    puVar2[3] = puVar2;
    puVar2[4] = param_2;
    *puVar1 = puVar1;
    puVar2[6] = puVar1;
    return;
  }
  return;
}



// FUNCTION 143597ea0 FUN_143597ea0 body=111 status=ok
// SIG undefined FUN_143597ea0(void)

void FUN_143597ea0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = FUN_1435d0550(*(undefined8 *)(param_1 + 0x10));
  puVar3 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x38,**(undefined1 **)(param_1 + 8));
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0xffffffffffffffff;
    puVar1 = puVar3 + 5;
    puVar3[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar3 + 2) = 2;
    puVar3[3] = puVar3;
    puVar3[4] = uVar2;
    *puVar1 = puVar1;
    puVar3[6] = puVar1;
    return;
  }
  return;
}



// FUNCTION 143597f20 FUN_143597f20 body=135 status=ok
// SIG undefined FUN_143597f20(void)

undefined8 * FUN_143597f20(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x38,**(undefined1 **)(param_1 + 8));
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = FUN_1435d0a40(*(undefined8 *)(param_1 + 0x10),param_2);
    *puVar2 = 0xffffffffffffffff;
    puVar2[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar2 + 2) = 2;
    puVar2[4] = uVar3;
    puVar1 = puVar2 + 5;
    puVar2[3] = puVar2;
    *puVar1 = puVar1;
    puVar2[6] = puVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143597fb0 FUN_143597fb0 body=135 status=ok
// SIG undefined FUN_143597fb0(void)

undefined8 * FUN_143597fb0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x38,**(undefined1 **)(param_1 + 8));
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = FUN_1435d0610(*(undefined8 *)(param_1 + 0x10),param_2);
    *puVar2 = 0xffffffffffffffff;
    puVar2[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar2 + 2) = 2;
    puVar2[4] = uVar3;
    puVar1 = puVar2 + 5;
    puVar2[3] = puVar2;
    *puVar1 = puVar1;
    puVar2[6] = puVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143598040 FUN_143598040 body=135 status=ok
// SIG undefined FUN_143598040(void)

undefined8 * FUN_143598040(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x38,**(undefined1 **)(param_1 + 8));
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = FUN_1435d0b70(*(undefined8 *)(param_1 + 0x10),param_2);
    *puVar2 = 0xffffffffffffffff;
    puVar2[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar2 + 2) = 2;
    puVar2[4] = uVar3;
    puVar1 = puVar2 + 5;
    puVar2[3] = puVar2;
    *puVar1 = puVar1;
    puVar2[6] = puVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1435980d0 FUN_1435980d0 body=133 status=ok
// SIG undefined FUN_1435980d0(void)

undefined8 * FUN_1435980d0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x38,**(undefined1 **)(param_1 + 8));
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = FUN_1435d0700(*(undefined8 *)(param_1 + 0x10),param_2);
    *puVar2 = 0xffffffffffffffff;
    puVar2[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar2 + 2) = 2;
    puVar2[4] = uVar3;
    puVar1 = puVar2 + 5;
    puVar2[3] = puVar2;
    *puVar1 = puVar1;
    puVar2[6] = puVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143598160 FUN_143598160 body=133 status=ok
// SIG undefined FUN_143598160(void)

undefined8 * FUN_143598160(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x38,**(undefined1 **)(param_1 + 8));
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = FUN_1435d0800(*(undefined8 *)(param_1 + 0x10),param_2);
    *puVar2 = 0xffffffffffffffff;
    puVar2[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar2 + 2) = 2;
    puVar2[4] = uVar3;
    puVar1 = puVar2 + 5;
    puVar2[3] = puVar2;
    *puVar1 = puVar1;
    puVar2[6] = puVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1435981f0 FUN_1435981f0 body=135 status=ok
// SIG undefined FUN_1435981f0(void)

undefined8 * FUN_1435981f0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x38,**(undefined1 **)(param_1 + 8));
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = FUN_1435d0c50(*(undefined8 *)(param_1 + 0x10),param_2);
    *puVar2 = 0xffffffffffffffff;
    puVar2[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar2 + 2) = 2;
    puVar2[4] = uVar3;
    puVar1 = puVar2 + 5;
    puVar2[3] = puVar2;
    *puVar1 = puVar1;
    puVar2[6] = puVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143598280 FUN_143598280 body=125 status=ok
// SIG undefined FUN_143598280(void)

void FUN_143598280(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x40,**(undefined1 **)(param_1 + 8));
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0xffffffffffffffff;
    puVar1 = puVar2 + 6;
    puVar2[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar2 + 2) = 3;
    *(undefined4 *)(puVar2 + 3) = param_2;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = param_4;
    puVar2[4] = puVar2;
    puVar2[5] = param_3;
    *puVar1 = puVar1;
    puVar2[7] = puVar1;
    return;
  }
  return;
}



// FUNCTION 143598310 FUN_143598310 body=178 status=ok
// SIG undefined FUN_143598310(void)

undefined8 *
FUN_143598310(longlong param_1,undefined4 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x48,**(undefined1 **)(param_1 + 8));
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0xffffffffffffffff;
    puVar3[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar3 + 2) = 0xc;
    *(undefined4 *)(puVar3 + 3) = param_2;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = param_4;
    puVar3[4] = param_5;
    puVar1 = puVar3 + 5;
    *puVar1 = 0xffffffffffffffff;
    puVar3[6] = 0xffffffffffffffff;
    puVar3[7] = puVar3;
    puVar3[8] = param_3;
    if (param_3 != 0) {
      plVar2 = (longlong *)(param_3 + 0x10);
      *puVar1 = *(undefined8 *)(param_3 + 0x10);
      puVar3[6] = plVar2;
      *(undefined8 **)(*plVar2 + 8) = puVar1;
      *plVar2 = (longlong)puVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1435983d0 FUN_1435983d0 body=93 status=ok
// SIG undefined FUN_1435983d0(void)

void FUN_1435983d0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x68,**(undefined1 **)(param_1 + 8));
  if (lVar1 != 0) {
    FUN_14360a9d0(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 143598440 FUN_143598440 body=119 status=ok
// SIG undefined FUN_143598440(void)

void FUN_143598440(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0xe8,**(undefined1 **)(param_1 + 8));
  if (lVar2 != 0) {
    FUN_143595ef0(lVar2,param_2,param_3,param_4,lVar1 + 0x58,param_5,param_6);
  }
  return;
}



// FUNCTION 1435984c0 FUN_1435984c0 body=121 status=ok
// SIG undefined FUN_1435984c0(void)

void FUN_1435984c0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0xa8,**(undefined1 **)(param_1 + 8));
  if (lVar2 != 0) {
    FUN_14360a440(lVar2,param_2,param_3,param_4,lVar1 + 0x58,param_5,param_6);
  }
  return;
}



// FUNCTION 143598540 FUN_143598540 body=125 status=ok
// SIG undefined FUN_143598540(void)

void FUN_143598540(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  
  lVar1 = FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x78,**(undefined1 **)(param_1 + 8));
  if (lVar1 != 0) {
    FUN_14360a670(lVar1,param_2,param_3,param_4,param_7,param_6,param_5);
    return;
  }
  return;
}



// FUNCTION 1435985d0 FUN_1435985d0 body=93 status=ok
// SIG undefined FUN_1435985d0(void)

void FUN_1435985d0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x88,**(undefined1 **)(param_1 + 8));
  if (lVar1 != 0) {
    FUN_14360a5b0(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 143598640 FUN_143598640 body=132 status=ok
// SIG undefined FUN_143598640(void)

void FUN_143598640(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0xe8,**(undefined1 **)(param_1 + 8));
  if (lVar2 != 0) {
    FUN_143596d60(lVar2,param_2,param_3,param_4,lVar1 + 0x58,param_5,param_6,param_7);
  }
  return;
}



// FUNCTION 1435986d0 FUN_1435986d0 body=93 status=ok
// SIG undefined FUN_1435986d0(void)

void FUN_1435986d0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x78,**(undefined1 **)(param_1 + 8));
  if (lVar1 != 0) {
    FUN_14360a520(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 143598740 FUN_143598740 body=74 status=ok
// SIG undefined FUN_143598740(void)

void FUN_143598740(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x98,**(undefined1 **)(param_1 + 8));
  if (lVar1 != 0) {
    FUN_14360aa80(lVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 143598790 FUN_143598790 body=116 status=ok
// SIG undefined FUN_143598790(void)

void FUN_143598790(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),200,**(undefined1 **)(param_1 + 8));
  if (lVar1 != 0) {
    FUN_143597180(lVar1,*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



// FUNCTION 143598810 FUN_143598810 body=110 status=ok
// SIG undefined FUN_143598810(void)

void FUN_143598810(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x28,**(undefined1 **)(param_1 + 8));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0xffffffffffffffff;
    puVar1[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 2) = 0x16;
    *(undefined4 *)(puVar1 + 3) = param_2;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = param_3;
    puVar1[4] = param_4;
    return;
  }
  return;
}



// FUNCTION 143598890 FUN_143598890 body=143 status=ok
// SIG undefined FUN_143598890(void)

void FUN_143598890(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1435ba1a0(*(undefined1 **)(param_1 + 8),0x88,**(undefined1 **)(param_1 + 8));
  if (lVar1 != 0) {
    uVar2 = FUN_143597360(param_1,param_4);
    FUN_14360a910(lVar1,param_2,param_3,param_4,uVar2,param_5,param_6);
  }
  return;
}



// FUNCTION 143598980 FUN_143598980 body=140 status=ok
// SIG undefined FUN_143598980(void)

undefined8 *
FUN_143598980(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  param_1[10] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = param_6;
  lVar1 = FUN_143597560(param_2 + 0x260,param_3,param_4,param_5,param_1);
  param_1[0xb] = lVar1;
  *(longlong *)(param_1[10] + 0x88) = lVar1 + 0x110;
  return param_1;
}



// FUNCTION 143598a20 FUN_143598a20 body=149 status=ok
// SIG undefined FUN_143598a20(void)

void FUN_143598a20(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  puVar1 = *(undefined1 **)(*(longlong *)(param_1 + 0x50) + 0x268);
  plVar2 = (longlong *)FUN_1435ba1a0(puVar1,0x28,*puVar1);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = -1;
    plVar2[1] = -1;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(undefined4 *)(plVar2 + 3) = param_2;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = param_3;
    *(undefined4 *)(plVar2 + 4) = param_4;
  }
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 143598ac0 FUN_143598ac0 body=2799 status=ok
// SIG undefined FUN_143598ac0(void)

/* WARNING: Removing unreachable block (ram,0x00014359939f) */
/* WARNING: Removing unreachable block (ram,0x0001435993a9) */
/* WARNING: Removing unreachable block (ram,0x000143599341) */
/* WARNING: Removing unreachable block (ram,0x000143599403) */
/* WARNING: Removing unreachable block (ram,0x00014359940f) */
/* WARNING: Removing unreachable block (ram,0x000143599371) */
/* WARNING: Removing unreachable block (ram,0x000143599376) */
/* WARNING: Removing unreachable block (ram,0x00014359937b) */
/* WARNING: Removing unreachable block (ram,0x000143599380) */
/* WARNING: Removing unreachable block (ram,0x000143599349) */
/* WARNING: Removing unreachable block (ram,0x000143599352) */
/* WARNING: Removing unreachable block (ram,0x00014359938c) */
/* WARNING: Removing unreachable block (ram,0x000143599396) */
/* WARNING: Removing unreachable block (ram,0x0001435993b2) */
/* WARNING: Removing unreachable block (ram,0x0001435993c0) */

undefined1 *
FUN_143598ac0(longlong param_1,undefined1 *param_2,uint param_3,undefined8 param_4,longlong param_5,
             longlong param_6)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong *puVar14;
  uint uVar15;
  ulonglong *puVar16;
  bool bVar17;
  longlong local_res8;
  undefined1 *local_res10;
  uint local_res18 [2];
  undefined8 local_res20;
  char local_a8;
  char local_a7;
  undefined8 *local_a0;
  undefined8 *local_98;
  ulonglong local_90;
  int *local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  int *local_68;
  byte local_60;
  undefined7 uStack_5f;
  byte local_58;
  undefined7 uStack_57;
  undefined8 *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  plVar9 = (longlong *)0x0;
  lVar8 = *(longlong *)(param_1 + 0x50);
  local_48 = lVar8 + 0x70;
  local_a0 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18[0] = param_3;
  local_res20 = param_4;
  if ((int)param_3 < 0) goto LAB_143599418;
  if ((int)param_3 < 2) {
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    local_50 = *(undefined8 **)
                (*(longlong *)(lVar8 + 0xb0) + (ulonglong)*(uint *)(lVar8 + 0x80) * 8);
    bVar2 = (byte)*(undefined4 *)local_50[1];
    if (((bVar2 & 0x78) < 0x50) || ((bVar2 & 6) == 2)) {
      FUN_1435944b0(&local_70,(undefined4 *)local_50[1]);
      local_a7 = FUN_1435909c0(&local_70);
      uVar5 = (uint)local_70 & 0x1f;
      if (9 < uVar5) {
        if (((uint)local_70 >> 9 & 1) == 0) {
          if (uVar5 == 10) {
            piVar1 = (int *)(CONCAT71(uStack_5f,local_60) + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else {
            if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
              if ((local_60 & 1) != 0) goto LAB_1435992dc;
              lVar8 = CONCAT71(uStack_5f,local_60);
            }
            else {
              if ((1 < uVar5 - 0xd) || ((local_58 & 1) != 0)) goto LAB_1435992dc;
              lVar8 = CONCAT71(uStack_57,local_58);
            }
            if ((lVar8 != 0) && ((*(uint *)(lVar8 + 8) & 0x3fffff) != 0)) {
              *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *local_68 = *local_68 + -1;
          if (*local_68 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
LAB_1435992dc:
      local_90 = CONCAT71(local_90._1_7_,local_a7);
      FUN_1435a9750(local_res8,local_50);
      if (local_a7 == '\0') {
        bVar17 = local_res18[0] == 1;
      }
      else {
        bVar17 = local_res18[0] == 0;
      }
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,bVar17);
      lVar8 = param_6;
      if (bVar17 != false) {
        lVar8 = param_5;
      }
      pcVar10 = (char *)FUN_143599aa0(local_res8,&local_a8,lVar8);
      if (*pcVar10 == '\0') {
        *param_2 = 0;
        return param_2;
      }
      if ((char)local_res18[0] != '\0') {
        param_5 = param_6;
      }
      FUN_1435a9390(local_res8,param_2,*(undefined8 *)(param_5 + 0x38),local_res20);
      return param_2;
    }
    plVar12 = (longlong *)*local_50;
    if ((((byte)(int)plVar12[2] & 0x1f) == 0xf) && ((int)plVar12[3] == 0)) {
      local_98 = (undefined8 *)plVar12[0xc];
      if ((undefined8 *)local_98[3] == local_98 + 2) {
        Scaleform::GFx::AS3::TR::Use::Unlink(plVar12 + 9);
        *(longlong *)(*plVar12 + 8) = plVar12[1];
        *(longlong *)plVar12[1] = *plVar12;
        *plVar12 = -1;
        plVar12[1] = -1;
        FUN_143612170(local_48,local_98);
        FUN_143598ac0(local_res8,local_res10,param_3 == 0,local_res20,param_5,param_6);
        return local_res10;
      }
    }
    else if ((((byte)(int)plVar12[2] & 0x1f) == 0x13) && ((int)plVar12[3] == 4)) {
      local_98 = (undefined8 *)plVar12[10];
      if ((undefined8 *)local_98[3] == local_98 + 2) {
        lVar8 = plVar12[4];
        Scaleform::GFx::AS3::TR::Use::Unlink(plVar12 + 7);
        *(longlong *)(*plVar12 + 8) = plVar12[1];
        *(longlong *)plVar12[1] = *plVar12;
        *plVar12 = -1;
        plVar12[1] = -1;
        FUN_143612170(local_48,local_98);
        lVar13 = param_6;
        if (local_res18[0] == 0) {
          lVar13 = param_5;
          param_5 = param_6;
        }
        FUN_1435995f0(local_res8,lVar8,lVar13,param_5);
        *local_res10 = 1;
        return local_res10;
      }
    }
    goto LAB_143599418;
  }
  if (0xd < (int)param_3) goto LAB_143599418;
  *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
  local_a0 = *(undefined8 **)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)*(uint *)(lVar8 + 0x80) * 8);
  uVar5 = *(uint *)(lVar8 + 0x80) - 1;
  *(uint *)(lVar8 + 0x80) = uVar5;
  local_50 = *(undefined8 **)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar5 * 8);
  local_98 = (undefined8 *)local_a0[1];
  uVar5 = *(uint *)local_50[1];
  uVar15 = uVar5 & 0x78;
  bVar2 = (byte)uVar5;
  bVar17 = false;
  if (((0x4f < uVar15) && ((bVar2 & 6) != 2)) ||
     ((0x4f < ((byte)*(undefined4 *)local_98 & 0x78) && (((byte)*(undefined4 *)local_98 & 6) != 2)))
     ) {
    if (uVar15 < 0x50) {
LAB_143598bbd:
      bVar17 = true;
    }
    else {
      if ((((bVar2 & 6) != 2) && (0x4f < ((byte)*(undefined4 *)local_98 & 0x78))) &&
         (((byte)*(undefined4 *)local_98 & 6) != 2)) goto LAB_143599418;
      if ((uVar15 < 0x50) || ((bVar2 & 6) == 2)) goto LAB_143598bbd;
    }
    local_98 = local_a0;
    if (bVar17) {
      local_98 = local_50;
    }
    FUN_1435944b0(&local_70,local_98[1]);
    uVar11 = CONCAT71(uStack_5f,local_60);
    uVar5 = (uint)local_70 & 0x1f;
    if (uVar5 == 1) {
      if (param_3 == 6) {
        bVar17 = local_60 == 0;
LAB_143598c11:
        param_3 = (uint)bVar17;
        local_res18[0] = param_3;
      }
      else if (param_3 == 7) {
        bVar17 = local_60 != 0;
        goto LAB_143598c11;
      }
      if (param_3 < 2) {
        FUN_1435a9750(local_res8,local_98);
        puVar7 = local_50;
        if (local_98 == local_50) {
          puVar7 = local_a0;
        }
        FUN_143612170(local_48,puVar7);
        FUN_143598ac0(local_res8,param_2,param_3,local_res20,param_5,param_6);
        return param_2;
      }
    }
    if (9 < uVar5) {
      if (((uint)local_70 >> 9 & 1) == 0) {
        if (uVar5 == 10) {
          piVar1 = (int *)(uVar11 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if ((uVar5 != 0xb) && (uVar5 != 0xc)) {
            if (1 < uVar5 - 0xd) goto LAB_143599418;
            uVar11 = CONCAT71(uStack_57,local_58);
          }
          if ((((uVar11 & 1) == 0) && (uVar11 != 0)) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_68 = *local_68 + -1;
        if (*local_68 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
LAB_143599418:
    local_30 = *(longlong *)(param_5 + 0x38);
    local_90 = *(ulonglong *)(param_6 + 0x38);
    local_a7 = *(int *)(*(longlong *)(local_30 + 0x58) + 0x30) == *(int *)(local_30 + 0x18);
    local_a8 = *(int *)(*(longlong *)(local_90 + 0x58) + 0x30) == *(int *)(local_90 + 0x18);
    local_38 = FUN_14359c100(local_res8);
    lVar8 = local_res8;
    local_40 = FUN_14359c100(local_res8,param_6);
    uVar5 = local_res18[0];
    local_48 = *(longlong *)(lVar8 + 0x50);
    iVar6 = FUN_143595230(local_res18[0]);
    if (((&DAT_145b4a5e0)[(longlong)iVar6 * 2] & 0x10) == 0) {
      local_98 = (undefined8 *)0x0;
    }
    else {
      local_98 = (undefined8 *)FUN_14359c2e0(local_res8);
    }
    lVar8 = FUN_1435ba1a0(*(undefined1 **)(local_48 + 0x268),0x78,
                          **(undefined1 **)(local_48 + 0x268));
    if (lVar8 != 0) {
      plVar9 = (longlong *)FUN_14360a700(lVar8,uVar5,local_38,local_40,local_50,local_a0,local_98);
    }
    plVar12 = (longlong *)(*(longlong *)(local_res8 + 0x58) + 0x40);
    *plVar9 = *plVar12;
    plVar9[1] = (longlong)plVar12;
    *(longlong **)(*plVar12 + 8) = plVar9;
    *plVar12 = (longlong)plVar9;
    if (((((*(byte *)(local_30 + 0x10) & 1) == 0) ||
         ((bool)local_a7 ==
          (*(int *)(*(longlong *)(local_30 + 0x58) + 0x30) == *(int *)(local_30 + 0x18)))) ||
        (pcVar10 = (char *)FUN_1435dab90(local_res18,*(longlong *)(local_30 + 0x58),
                                         *(longlong *)(local_res8 + 0x50) + 0x148), *pcVar10 != '\0'
        )) && ((((*(byte *)(local_90 + 0x10) & 1) == 0 ||
                ((bool)local_a8 ==
                 (*(int *)(*(longlong *)(local_90 + 0x58) + 0x30) == *(int *)(local_90 + 0x18)))) ||
               (pcVar10 = (char *)FUN_1435dab90(local_res18,*(longlong *)(local_90 + 0x58),
                                                *(longlong *)(local_res8 + 0x50) + 0x148),
               *pcVar10 != '\0')))) {
      *param_2 = 1;
      return param_2;
    }
    *param_2 = 0;
    return param_2;
  }
  FUN_1435944b0(&local_70,(uint *)local_50[1]);
  FUN_1435944b0(&local_90,local_98);
  local_res18[0] = local_res18[0] & 0xffffff00;
  FUN_1435a9750(local_res8,local_a0);
  FUN_1435a9750(local_res8,local_50);
  switch(param_3) {
  case 2:
    puVar16 = &local_90;
    puVar14 = &local_70;
    goto LAB_143598d68;
  case 3:
    pcVar10 = (char *)FUN_143593d70(&local_a8,&local_a0,&local_90,&local_70);
    if ((*pcVar10 != '\0') && ((int)local_a0 != 2)) {
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
      break;
    }
    goto LAB_143598d8a;
  case 4:
    puVar16 = &local_70;
    puVar14 = &local_90;
LAB_143598d68:
    pcVar10 = (char *)FUN_143593d70(&local_a8,&local_a0,puVar14,puVar16);
    if (*pcVar10 != '\0') {
      bVar17 = (int)local_a0 == 1;
LAB_143598d7e:
      if (!bVar17) {
        local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
        break;
      }
    }
LAB_143598d8a:
    local_res18[0] = local_res18[0] & 0xffffff00;
    break;
  case 5:
    pcVar10 = (char *)FUN_143593d70(&local_a8,&local_a0,&local_70,&local_90);
    if (*pcVar10 == '\0') goto LAB_143598d8a;
    bVar17 = (int)local_a0 == 2;
    goto LAB_143598d7e;
  case 6:
    FUN_1435929f0(&local_a8,local_res18,&local_70,&local_90);
    break;
  case 7:
    FUN_1435929f0(&local_a8,local_res18,&local_70,&local_90);
    bVar17 = (char)local_res18[0] == '\0';
    goto LAB_143598e88;
  case 8:
    puVar16 = &local_90;
    puVar14 = &local_70;
    goto LAB_143598e25;
  case 9:
    puVar16 = &local_70;
    puVar14 = &local_90;
    goto LAB_143598e40;
  case 10:
    puVar16 = &local_70;
    puVar14 = &local_90;
LAB_143598e25:
    FUN_143593d70(&local_a8,&local_a0,puVar14,puVar16);
    bVar17 = (int)local_a0 == 1;
    goto LAB_143598e88;
  case 0xb:
    puVar16 = &local_90;
    puVar14 = &local_70;
LAB_143598e40:
    FUN_143593d70(&local_a8,&local_a0,puVar14,puVar16);
    bVar17 = (int)local_a0 == 2;
    goto LAB_143598e88;
  case 0xc:
    uVar3 = FUN_1435927d0(&local_70,&local_90);
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,uVar3);
    break;
  case 0xd:
    cVar4 = FUN_1435927d0(&local_70,&local_90);
    bVar17 = cVar4 == '\0';
LAB_143598e88:
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,bVar17);
  }
  lVar8 = local_res8;
  lVar13 = param_6;
  if ((char)local_res18[0] != '\0') {
    lVar13 = param_5;
  }
  local_98 = *(undefined8 **)(lVar13 + 0x38);
  local_50 = (undefined8 *)
             CONCAT44(local_50._4_4_,
                      *(undefined4 *)(*(longlong *)((longlong)local_98 + 0x58) + 0x30));
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,*(undefined4 *)((longlong)local_98 + 0x18));
  plVar9 = (longlong *)FUN_14359c100(local_res8);
  plVar12 = (longlong *)(*(longlong *)(lVar8 + 0x58) + 0x40);
  *plVar9 = *plVar12;
  plVar9[1] = (longlong)plVar12;
  *(longlong **)(*plVar12 + 8) = plVar9;
  *plVar12 = (longlong)plVar9;
  if ((*(byte *)((longlong)local_98 + 0x10) & 1) == 0) {
LAB_143599093:
    if ((char)local_res18[0] != '\0') {
      param_5 = param_6;
    }
    FUN_1435a9390(lVar8,param_2,*(undefined8 *)(param_5 + 0x38),local_res20);
  }
  else {
    if ((((int)local_50 == (int)local_a0) ==
         (*(int *)(*(longlong *)((longlong)local_98 + 0x58) + 0x30) ==
         *(int *)((longlong)local_98 + 0x18))) ||
       (pcVar10 = (char *)FUN_1435dab90(&local_res8,*(longlong *)((longlong)local_98 + 0x58),
                                        *(longlong *)(lVar8 + 0x50) + 0x148), *pcVar10 != '\0'))
    goto LAB_143599093;
    *param_2 = 0;
  }
  uVar5 = (uint)local_90 & 0x1f;
  if (9 < uVar5) {
    if (((uint)local_90 >> 9 & 1) == 0) {
      if (uVar5 == 10) {
        piVar1 = (int *)(uStack_80 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
          uVar11 = uStack_80;
          if ((uStack_80 & 1) != 0) {
            uStack_80 = uStack_80 - 1;
            goto LAB_143598fd0;
          }
        }
        else {
          if (1 < uVar5 - 0xd) goto LAB_143598fd0;
          uVar11 = local_78;
          if ((local_78 & 1) != 0) {
            local_78 = local_78 - 1;
            goto LAB_143598fd0;
          }
        }
        if ((uVar11 != 0) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *local_88 = *local_88 + -1;
      if (*local_88 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_90 = local_90 & 0xfffffffffffffde0;
      local_88 = (int *)0x0;
      uStack_80 = 0;
      local_78 = 0;
    }
  }
LAB_143598fd0:
  uVar5 = (uint)local_70 & 0x1f;
  if (9 < uVar5) {
    if (((uint)local_70 >> 9 & 1) == 0) {
      if (uVar5 == 10) {
        piVar1 = (int *)(CONCAT71(uStack_5f,local_60) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
          return param_2;
        }
      }
      else {
        if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
          uVar11 = CONCAT71(uStack_5f,local_60);
        }
        else {
          if (1 < uVar5 - 0xd) {
            return param_2;
          }
          uVar11 = CONCAT71(uStack_57,local_58);
        }
        if ((((uVar11 & 1) == 0) && (uVar11 != 0)) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
          FUN_1434ef880();
          return param_2;
        }
      }
    }
    else {
      *local_68 = *local_68 + -1;
      if (*local_68 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return param_2;
      }
    }
  }
  return param_2;
}



// FUNCTION 1435995f0 FUN_1435995f0 body=222 status=ok
// SIG undefined FUN_1435995f0(void)

void FUN_1435995f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
  uVar7 = *(undefined8 *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)*(uint *)(lVar2 + 0x80) * 8);
  uVar4 = FUN_14359c100(param_1,param_4);
  uVar5 = FUN_14359c100(param_1,param_3);
  plVar6 = (longlong *)FUN_1435979b0(lVar2 + 0x260,0,uVar4,uVar7,1);
  puVar3 = (undefined8 *)plVar6[6];
  if (puVar3 != (undefined8 *)0x0) {
    uVar7 = FUN_143610830(lVar2 + 0x148,param_2,0);
    puVar1 = puVar3 + 2;
    *puVar3 = plVar6;
    puVar3[1] = uVar7;
    *puVar1 = puVar1;
    puVar3[3] = puVar1;
  }
  *(undefined8 *)plVar6[7] = uVar5;
  plVar8 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar6 = *plVar8;
  plVar6[1] = (longlong)plVar8;
  *(longlong **)(*plVar8 + 8) = plVar6;
  *plVar8 = (longlong)plVar6;
  return;
}



// FUNCTION 1435996e0 FUN_1435996e0 body=949 status=ok
// SIG undefined FUN_1435996e0(void)

void FUN_1435996e0(longlong param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 local_res10 [8];
  
  lVar4 = *(longlong *)(param_1 + 0x50);
  lVar13 = 0;
  uVar12 = 0;
  if (param_2 == 0) {
LAB_143599718:
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
    if (param_2 != 1) {
      if (param_2 != 2) goto LAB_143599725;
      goto LAB_143599718;
    }
  }
  uVar12 = uVar7;
  param_3 = *(undefined8 *)(lVar4 + 0x280);
LAB_143599725:
  uVar5 = *(undefined8 *)(lVar4 + 0x88);
  lVar11 = 2;
  if (param_2 == 0) {
    lVar11 = 3;
  }
  else if (param_2 == 1) {
    lVar11 = 0x47;
  }
  else if (param_2 == 2) {
    lVar11 = 0x48;
  }
  lVar8 = lVar13;
  if (((&DAT_145b4a5e0)[lVar11 * 2] & 0x10) != 0) {
    lVar8 = FUN_14359c2e0(param_1);
  }
  lVar11 = lVar4 + 0x260;
  plVar9 = (longlong *)
           FUN_1435977d0(lVar11,param_2,*(undefined8 *)(param_1 + 0x58),param_3,0,uVar12,0,lVar8,
                         uVar5);
  uVar1 = *(uint *)(lVar4 + 0x7c);
  uVar2 = *(uint *)(lVar4 + 0x80);
  uVar14 = (ulonglong)uVar2;
  uVar3 = *(uint *)(lVar4 + 0x84);
  uVar15 = (ulonglong)uVar3;
  if (param_2 == 0) {
    *(uint *)(lVar4 + 0x80) = uVar2 - 1;
    puVar6 = (undefined8 *)plVar9[8];
    lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)(uVar2 - 1) * 8);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0xffffffffffffffff;
      puVar6[1] = 0xffffffffffffffff;
      puVar6[2] = plVar9;
      puVar6[3] = lVar8;
      if (lVar8 != 0) {
        plVar10 = (longlong *)(lVar8 + 0x10);
        *puVar6 = *(undefined8 *)(lVar8 + 0x10);
        puVar6[1] = plVar10;
        *(undefined8 **)(*plVar10 + 8) = puVar6;
        *plVar10 = (longlong)puVar6;
      }
    }
    if (*(uint *)(lVar4 + 0x80) != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar4 + 0x80);
      lVar8 = lVar13;
      do {
        FUN_143594aa0(local_res10,lVar11,*(undefined8 *)(lVar8 + *(longlong *)(lVar4 + 0xb0)),0);
        lVar8 = lVar8 + 8;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (uVar3 != 0) {
      do {
        FUN_143594aa0(local_res10,lVar11,*(undefined8 *)(*(longlong *)(lVar4 + 0xd0) + lVar13),0);
        lVar13 = lVar13 + 8;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  else if (param_2 == 1) {
    if (1 < uVar1) {
      lVar8 = 8;
      uVar16 = (ulonglong)(uVar1 - 1);
      do {
        FUN_143594aa0(local_res10,lVar11,*(undefined8 *)(lVar8 + *(longlong *)(lVar4 + 0x90)),0);
        lVar8 = lVar8 + 8;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    lVar8 = lVar13;
    if (uVar2 != 0) {
      do {
        FUN_143594aa0(local_res10,lVar11,*(undefined8 *)(lVar8 + *(longlong *)(lVar4 + 0xb0)),0);
        uVar14 = uVar14 - 1;
        lVar8 = lVar8 + 8;
      } while (uVar14 != 0);
    }
    if (uVar3 != 0) {
      do {
        FUN_143594aa0(local_res10,lVar11,*(undefined8 *)(lVar13 + *(longlong *)(lVar4 + 0xd0)),0);
        lVar13 = lVar13 + 8;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  else if (param_2 == 2) {
    *(uint *)(lVar4 + 0x80) = uVar2 - 1;
    puVar6 = (undefined8 *)plVar9[8];
    lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)(uVar2 - 1) * 8);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0xffffffffffffffff;
      puVar6[1] = 0xffffffffffffffff;
      puVar6[2] = plVar9;
      puVar6[3] = lVar8;
      if (lVar8 != 0) {
        plVar10 = (longlong *)(lVar8 + 0x10);
        *puVar6 = *(undefined8 *)(lVar8 + 0x10);
        puVar6[1] = plVar10;
        *(undefined8 **)(*plVar10 + 8) = puVar6;
        *plVar10 = (longlong)puVar6;
      }
    }
    if (1 < uVar1) {
      lVar8 = 8;
      uVar14 = (ulonglong)(uVar1 - 1);
      do {
        FUN_143594aa0(local_res10,lVar11,*(undefined8 *)(lVar8 + *(longlong *)(lVar4 + 0x90)),0);
        lVar8 = lVar8 + 8;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (*(uint *)(lVar4 + 0x80) != 0) {
      uVar14 = (ulonglong)*(uint *)(lVar4 + 0x80);
      lVar8 = lVar13;
      do {
        FUN_143594aa0(local_res10,lVar11,*(undefined8 *)(lVar8 + *(longlong *)(lVar4 + 0xb0)),0);
        lVar8 = lVar8 + 8;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (uVar3 != 0) {
      do {
        FUN_143594aa0(local_res10,lVar11,*(undefined8 *)(lVar13 + *(longlong *)(lVar4 + 0xd0)),0);
        lVar13 = lVar13 + 8;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  plVar10 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar9 = *plVar10;
  plVar9[1] = (longlong)plVar10;
  *(longlong **)(*plVar10 + 8) = plVar9;
  *plVar10 = (longlong)plVar9;
  return;
}



// FUNCTION 143599aa0 FUN_143599aa0 body=157 status=ok
// SIG undefined FUN_143599aa0(void)

undefined1 * FUN_143599aa0(longlong param_1,undefined1 *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)(param_3 + 0x38);
  iVar1 = *(int *)(lVar3 + 0x18);
  iVar2 = *(int *)(*(longlong *)(lVar3 + 0x58) + 0x30);
  plVar4 = (longlong *)FUN_14359c100(param_1,param_3);
  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar4 = *plVar6;
  plVar4[1] = (longlong)plVar6;
  *(longlong **)(*plVar6 + 8) = plVar4;
  *plVar6 = (longlong)plVar4;
  if (((*(byte *)(lVar3 + 0x10) & 1) == 0) ||
     ((iVar2 == iVar1) == (*(int *)(*(longlong *)(lVar3 + 0x58) + 0x30) == *(int *)(lVar3 + 0x18))))
  {
    *param_2 = 1;
  }
  else {
    puVar5 = (undefined1 *)
             FUN_1435dab90(local_res8,*(longlong *)(lVar3 + 0x58),
                           *(longlong *)(param_1 + 0x50) + 0x148);
    *param_2 = *puVar5;
  }
  return param_2;
}



// FUNCTION 143599b50 FUN_143599b50 body=93 status=ok
// SIG undefined FUN_143599b50(void)

void FUN_143599b50(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + -1;
  plVar2 = (longlong *)
           FUN_143597900(*(longlong *)(param_1 + 0x50) + 0x260,
                         *(undefined8 *)
                          (*(longlong *)(lVar1 + 0xb0) + (ulonglong)*(uint *)(lVar1 + 0x80) * 8),
                         param_2);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 143599bc0 FUN_143599bc0 body=277 status=ok
// SIG undefined FUN_143599bc0(void)

void FUN_143599bc0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  iVar2 = FUN_143595520(param_2);
  lVar3 = 0;
  lVar6 = lVar3;
  if (((&DAT_145b4a5e0)[(longlong)iVar2 * 2] & 0x20) != 0) {
    lVar6 = *(longlong *)(lVar1 + 0x88);
  }
  if (((&DAT_145b4a5e0)[(longlong)iVar2 * 2] & 0x10) != 0) {
    lVar3 = FUN_14359c2e0(param_1);
  }
  plVar4 = (longlong *)
           FUN_143597ae0(*(longlong *)(param_1 + 0x50) + 0x260,param_2,param_3,lVar6,param_4,param_5
                         ,param_6,param_7,param_8,lVar3);
  if (lVar6 != 0) {
    *(longlong **)(lVar1 + 0x88) = plVar4 + 0x13;
  }
  if (param_2 != 4) {
    FUN_143612170(lVar1 + 0x70,plVar4 + 0x17);
  }
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar4 = *plVar5;
  plVar4[1] = (longlong)plVar5;
  *(longlong **)(*plVar5 + 8) = plVar4;
  *plVar5 = (longlong)plVar4;
  return;
}



// FUNCTION 143599ce0 FUN_143599ce0 body=239 status=ok
// SIG undefined FUN_143599ce0(void)

void FUN_143599ce0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  iVar2 = FUN_143595770(param_2);
  lVar3 = 0;
  lVar6 = lVar3;
  if (((&DAT_145b4a5e0)[(longlong)iVar2 * 2] & 0x20) != 0) {
    lVar6 = *(longlong *)(lVar1 + 0x88);
  }
  if (((&DAT_145b4a5e0)[(longlong)iVar2 * 2] & 0x10) != 0) {
    lVar3 = FUN_14359c2e0(param_1);
  }
  plVar4 = (longlong *)
           FUN_143597c40(*(longlong *)(param_1 + 0x50) + 0x260,param_2,param_3,lVar6,param_4,param_5
                         ,lVar3);
  if (lVar6 != 0) {
    *(longlong **)(lVar1 + 0x88) = plVar4 + 0x16;
  }
  if ((param_2 != 2) && (param_2 != 5)) {
    FUN_143612170(lVar1 + 0x70,plVar4 + 0x1a);
  }
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar4 = *plVar5;
  plVar4[1] = (longlong)plVar5;
  *(longlong **)(*plVar5 + 8) = plVar4;
  *plVar5 = (longlong)plVar4;
  return;
}



// FUNCTION 143599de0 FUN_143599de0 body=160 status=ok
// SIG undefined FUN_143599de0(void)

void FUN_143599de0(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0x45:
  case 0x46:
  case 0x4a:
  case 0x4c:
  case 0x4e:
  case 0x4f:
    uVar1 = FUN_143595850(param_2);
    FUN_143599ce0(param_1,uVar1,param_3,param_4);
    return;
  default:
    uVar1 = FUN_143595640();
    FUN_143599bc0(param_1,uVar1,param_3,*(undefined8 *)(param_3 + 200),0,param_4,param_5,0);
    return;
  }
}



// FUNCTION 143599ec0 FUN_143599ec0 body=329 status=ok
// SIG undefined FUN_143599ec0(void)

void FUN_143599ec0(longlong param_1,int param_2,byte *param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  lVar4 = 0;
  if (param_2 == 4) {
    *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
    lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)*(uint *)(lVar2 + 0x80) * 8);
  }
  else {
    lVar7 = lVar4;
    if ((param_2 == 5) &&
       (param_3 = *(byte **)(*(longlong *)(*(longlong *)(lVar2 + 0xd0) + (longlong)param_4 * 8) + 8)
       , lVar7 = 0, (*param_3 & 1) != 0)) {
      param_3 = (byte *)FUN_1435d0f90(lVar2 + 0x148,param_3,0);
    }
  }
  iVar3 = FUN_143595b10(param_2);
  if (((&DAT_145b4a5e0)[(longlong)iVar3 * 2] & 0x10) != 0) {
    lVar4 = FUN_14359c2e0(param_1);
  }
  plVar5 = (longlong *)
           FUN_143597ce0(*(longlong *)(param_1 + 0x50) + 0x260,param_2,lVar2 + 0x70,param_3,param_4,
                         lVar4);
  FUN_143612170(lVar2 + 0x70,plVar5 + 10);
  if ((param_2 == 4) && (plVar6 = plVar5 + 6, plVar6 != (longlong *)0x0)) {
    *plVar6 = -1;
    plVar5[7] = -1;
    plVar5[8] = (longlong)plVar5;
    plVar5[9] = lVar7;
    if (lVar7 != 0) {
      plVar1 = (longlong *)(lVar7 + 0x10);
      *plVar6 = *(longlong *)(lVar7 + 0x10);
      plVar5[7] = (longlong)plVar1;
      *(longlong **)(*plVar1 + 8) = plVar6;
      *plVar1 = (longlong)plVar6;
    }
  }
  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar5 = *plVar6;
  plVar5[1] = (longlong)plVar6;
  *(longlong **)(*plVar6 + 8) = plVar5;
  *plVar6 = (longlong)plVar5;
  return;
}



// FUNCTION 14359a010 FUN_14359a010 body=169 status=ok
// SIG undefined FUN_14359a010(void)

void FUN_14359a010(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  puVar2 = *(undefined1 **)(lVar1 + 0x268);
  plVar3 = (longlong *)FUN_1435ba1a0(puVar2,0x38,*puVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    *plVar3 = -1;
    plVar4 = plVar3 + 5;
    plVar3[1] = -1;
    *(undefined4 *)(plVar3 + 2) = 2;
    plVar3[3] = (longlong)plVar3;
    plVar3[4] = param_2;
    *plVar4 = (longlong)plVar4;
    plVar3[6] = (longlong)plVar4;
  }
  FUN_143612170(lVar1 + 0x70,plVar3 + 3);
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar3 = *plVar4;
  plVar3[1] = (longlong)plVar4;
  *(longlong **)(*plVar4 + 8) = plVar3;
  *plVar4 = (longlong)plVar3;
  return;
}



// FUNCTION 14359a0c0 FUN_14359a0c0 body=170 status=ok
// SIG undefined FUN_14359a0c0(void)

void FUN_14359a0c0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = (longlong *)
           FUN_1435ba1a0(*(undefined1 **)(lVar1 + 0x268),0x38,**(undefined1 **)(lVar1 + 0x268));
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = -1;
    plVar2[1] = -1;
    *(undefined4 *)(plVar2 + 2) = 2;
    plVar2[4] = lVar1 + 0x160;
    plVar3 = plVar2 + 5;
    plVar2[3] = (longlong)plVar2;
    *plVar3 = (longlong)plVar3;
    plVar2[6] = (longlong)plVar3;
  }
  FUN_143612170(lVar1 + 0x70,plVar2 + 3);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 14359a170 FUN_14359a170 body=98 status=ok
// SIG undefined FUN_14359a170(void)

void FUN_14359a170(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar3 = FUN_143597ea0(lVar1 + 0x260);
  FUN_143612170(lVar1 + 0x70,lVar3 + 0x18);
  plVar2 = *(longlong **)(lVar3 + 0x18);
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar4;
  plVar2[1] = (longlong)plVar4;
  *(longlong **)(*plVar4 + 8) = plVar2;
  *plVar4 = (longlong)plVar2;
  return;
}



// FUNCTION 14359a1e0 FUN_14359a1e0 body=170 status=ok
// SIG undefined FUN_14359a1e0(void)

void FUN_14359a1e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = (longlong *)
           FUN_1435ba1a0(*(undefined1 **)(lVar1 + 0x268),0x38,**(undefined1 **)(lVar1 + 0x268));
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = -1;
    plVar2[1] = -1;
    *(undefined4 *)(plVar2 + 2) = 2;
    plVar2[4] = lVar1 + 0x180;
    plVar3 = plVar2 + 5;
    plVar2[3] = (longlong)plVar2;
    *plVar3 = (longlong)plVar3;
    plVar2[6] = (longlong)plVar3;
  }
  FUN_143612170(lVar1 + 0x70,plVar2 + 3);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 14359a290 FUN_14359a290 body=194 status=ok
// SIG undefined FUN_14359a290(void)

void FUN_14359a290(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar4 = 0x1c8;
  if (param_2 != '\0') {
    lVar4 = 0x1b0;
  }
  plVar2 = (longlong *)
           FUN_1435ba1a0(*(undefined1 **)(lVar1 + 0x268),0x38,**(undefined1 **)(lVar1 + 0x268));
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = -1;
    plVar2[1] = -1;
    *(undefined4 *)(plVar2 + 2) = 2;
    plVar2[4] = lVar4 + lVar1;
    plVar3 = plVar2 + 5;
    plVar2[3] = (longlong)plVar2;
    *plVar3 = (longlong)plVar3;
    plVar2[6] = (longlong)plVar3;
  }
  FUN_143612170(lVar1 + 0x70,plVar2 + 3);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 14359a360 FUN_14359a360 body=94 status=ok
// SIG undefined FUN_14359a360(void)

void FUN_14359a360(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = (longlong *)FUN_143597f20(lVar1 + 0x260);
  FUN_143612170(lVar1 + 0x70,plVar2 + 3);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 14359a3d0 FUN_14359a3d0 body=94 status=ok
// SIG undefined FUN_14359a3d0(void)

void FUN_14359a3d0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = (longlong *)FUN_143597fb0(lVar1 + 0x260);
  FUN_143612170(lVar1 + 0x70,plVar2 + 3);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 14359a440 FUN_14359a440 body=94 status=ok
// SIG undefined FUN_14359a440(void)

void FUN_14359a440(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = (longlong *)FUN_143598040(lVar1 + 0x260);
  FUN_143612170(lVar1 + 0x70,plVar2 + 3);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 14359a4b0 FUN_14359a4b0 body=94 status=ok
// SIG undefined FUN_14359a4b0(void)

void FUN_14359a4b0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = (longlong *)FUN_1435980d0(lVar1 + 0x260);
  FUN_143612170(lVar1 + 0x70,plVar2 + 3);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 14359a520 FUN_14359a520 body=94 status=ok
// SIG undefined FUN_14359a520(void)

void FUN_14359a520(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = (longlong *)FUN_143598160(lVar1 + 0x260);
  FUN_143612170(lVar1 + 0x70,plVar2 + 3);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 14359a590 FUN_14359a590 body=97 status=ok
// SIG undefined FUN_14359a590(void)

void FUN_14359a590(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = (longlong *)FUN_1435981f0(lVar1 + 0x260);
  FUN_143612170(lVar1 + 0x70,plVar2 + 3);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 14359a600 FUN_14359a600 body=412 status=ok
// SIG undefined FUN_14359a600(void)

void FUN_14359a600(longlong param_1,uint *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  switch(*param_2 & 0x1f) {
  case 0:
    FUN_14359a010(param_1,lVar2 + 0x180);
    return;
  case 1:
    lVar3 = 0x80;
    if ((char)param_2[4] != '\0') {
      lVar3 = 0x68;
    }
    FUN_14359a010(param_1,lVar3 + lVar2 + 0x148);
    return;
  case 2:
    FUN_14359a4b0(param_1,param_2[4]);
    return;
  case 3:
    FUN_14359a520(param_1,param_2[4]);
    return;
  case 4:
    FUN_14359a3d0(param_1,*(undefined8 *)(param_2 + 4));
    return;
  default:
    return;
  case 10:
    break;
  case 0xc:
    if (*(longlong *)(param_2 + 4) == 0) {
      FUN_14359a010(param_1,lVar2 + 0x160);
      return;
    }
    FUN_14359a590(param_1,param_2);
    return;
  }
  lVar2 = *(longlong *)(param_2 + 4);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  lVar3 = *(longlong *)(param_1 + 0x50);
  local_res8 = lVar2;
  plVar4 = (longlong *)
           FUN_1435ba1a0(*(undefined1 **)(lVar3 + 0x268),0x38,**(undefined1 **)(lVar3 + 0x268));
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    lVar5 = FUN_1435d0a40(*(undefined8 *)(lVar3 + 0x270),&local_res8);
    *plVar4 = -1;
    plVar4[1] = -1;
    *(undefined4 *)(plVar4 + 2) = 2;
    plVar4[4] = lVar5;
    plVar6 = plVar4 + 5;
    plVar4[3] = (longlong)plVar4;
    *plVar6 = (longlong)plVar6;
    plVar4[6] = (longlong)plVar6;
  }
  FUN_143612170(lVar3 + 0x70,plVar4 + 3);
  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar4 = *plVar6;
  plVar4[1] = (longlong)plVar6;
  *(longlong **)(*plVar6 + 8) = plVar4;
  *plVar6 = (longlong)plVar4;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  FUN_14335f920(lVar2);
  return;
}



// FUNCTION 14359a7e0 FUN_14359a7e0 body=94 status=ok
// SIG undefined FUN_14359a7e0(void)

void FUN_14359a7e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = (longlong *)FUN_143598280(lVar1 + 0x260);
  FUN_143612170(lVar1 + 0x70,plVar2 + 4);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 14359a850 FUN_14359a850 body=277 status=ok
// SIG undefined FUN_14359a850(void)

void FUN_14359a850(longlong param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_res10 [8];
  
  uVar2 = 0;
  lVar4 = *(longlong *)(param_1 + 0x50);
  uVar6 = uVar2;
  if (-1 < param_2) {
    if (param_2 < 3) {
      *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
      uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)*(uint *)(lVar4 + 0x80) * 8);
    }
    else {
      uVar6 = 0;
      if (param_2 == 3) {
        *(int *)(lVar4 + 0x84) = *(int *)(lVar4 + 0x84) + -1;
        uVar6 = *(undefined8 *)
                 (*(longlong *)(lVar4 + 0xd0) + (ulonglong)*(uint *)(lVar4 + 0x84) * 8);
        pcVar1 = (char *)FUN_143594aa0(local_res10,lVar4 + 0x260,uVar6,1);
        if (*pcVar1 != '\0') {
          return;
        }
      }
    }
  }
  lVar4 = 2;
  if (param_2 == 0) {
    lVar4 = 7;
  }
  else if (param_2 == 1) {
    lVar4 = 0x6f;
  }
  else if (param_2 == 2) {
    lVar4 = 0x29;
  }
  else if (param_2 == 3) {
    lVar4 = 0x1d;
  }
  if (((&DAT_145b4a5e0)[lVar4 * 2] & 0x10) != 0) {
    uVar2 = FUN_14359c2e0(param_1);
  }
  plVar3 = (longlong *)
           FUN_143598310(*(longlong *)(param_1 + 0x50) + 0x260,param_2,uVar6,param_3,uVar2);
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar3 = *plVar5;
  plVar3[1] = (longlong)plVar5;
  *(longlong **)(*plVar5 + 8) = plVar3;
  *plVar5 = (longlong)plVar3;
  return;
}



// FUNCTION 14359a970 FUN_14359a970 body=269 status=ok
// SIG undefined FUN_14359a970(void)

void FUN_14359a970(longlong param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar6 = *(longlong *)(param_1 + 0x50);
  lVar8 = 2;
  *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
  uVar1 = *(undefined8 *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)*(uint *)(lVar6 + 0x80) * 8);
  uVar4 = *(uint *)(lVar6 + 0x80) - 1;
  *(uint *)(lVar6 + 0x80) = uVar4;
  uVar2 = *(undefined8 *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar4 * 8);
  if (param_2 == 0) {
    lVar8 = 0x6d;
  }
  else if (param_2 == 1) {
    lVar8 = 0xb7;
  }
  else if (param_2 == 2) {
    lVar8 = 0xb8;
  }
  plVar7 = (longlong *)0x0;
  plVar5 = plVar7;
  if (((&DAT_145b4a5e0)[lVar8 * 2] & 0x10) != 0) {
    plVar5 = (longlong *)FUN_14359c2e0(param_1);
  }
  puVar3 = *(undefined1 **)(*(longlong *)(param_1 + 0x50) + 0x268);
  lVar6 = FUN_1435ba1a0(puVar3,0x68,*puVar3);
  if (lVar6 != 0) {
    plVar7 = (longlong *)FUN_14360a9d0(lVar6,param_2,uVar2,uVar1,param_3,plVar5);
  }
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar7 = *plVar5;
  plVar7[1] = (longlong)plVar5;
  *(longlong **)(*plVar5 + 8) = plVar7;
  *plVar5 = (longlong)plVar7;
  return;
}



// FUNCTION 14359aa90 FUN_14359aa90 body=226 status=ok
// SIG undefined FUN_14359aa90(void)

void FUN_14359aa90(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = 2;
  if (param_2 == 0) {
    lVar4 = 0x6d;
  }
  else if (param_2 == 1) {
    lVar4 = 0xb7;
  }
  else if (param_2 == 2) {
    lVar4 = 0xb8;
  }
  plVar3 = (longlong *)0x0;
  plVar2 = plVar3;
  if (((&DAT_145b4a5e0)[lVar4 * 2] & 0x10) != 0) {
    plVar2 = (longlong *)FUN_14359c2e0();
  }
  puVar1 = *(undefined1 **)(*(longlong *)(param_1 + 0x50) + 0x268);
  lVar4 = FUN_1435ba1a0(puVar1,0x68,*puVar1);
  if (lVar4 != 0) {
    plVar3 = (longlong *)FUN_14360a9d0(lVar4,param_2,param_3,param_4,param_5,plVar2);
  }
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar3 = *plVar2;
  plVar3[1] = (longlong)plVar2;
  *(longlong **)(*plVar2 + 8) = plVar3;
  *plVar2 = (longlong)plVar3;
  return;
}



// FUNCTION 14359ab80 FUN_14359ab80 body=335 status=ok
// SIG undefined FUN_14359ab80(void)

void FUN_14359ab80(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = 2;
  lVar3 = 2;
  if (param_2 == 0) {
    lVar3 = 0x61;
  }
  else if (param_2 == 1) {
    lVar3 = 5;
  }
  else if (param_2 == 2) {
    lVar3 = 0x68;
  }
  plVar4 = (longlong *)0x0;
  plVar5 = plVar4;
  if (((&DAT_145b4a5e0)[lVar3 * 2] & 0x20) != 0) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x88);
  }
  if (param_2 == 0) {
    lVar6 = 0x61;
  }
  else if (param_2 == 1) {
    lVar6 = 5;
  }
  else if (param_2 == 2) {
    lVar6 = 0x68;
  }
  plVar2 = plVar4;
  if (((&DAT_145b4a5e0)[lVar6 * 2] & 0x10) != 0) {
    plVar2 = (longlong *)FUN_14359c2e0(param_1);
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x270);
  puVar1 = *(undefined1 **)(*(longlong *)(param_1 + 0x50) + 0x268);
  lVar3 = FUN_1435ba1a0(puVar1,0xe8,*puVar1);
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_143595ef0(lVar3,param_2,param_3,plVar5,lVar6 + 0x58,param_4,plVar2);
  }
  if (plVar5 != (longlong *)0x0) {
    *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x88) = plVar4 + 0x19;
  }
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar4 = *plVar5;
  plVar4[1] = (longlong)plVar5;
  *(longlong **)(*plVar5 + 8) = plVar4;
  *plVar5 = (longlong)plVar4;
  return;
}



// FUNCTION 14359ace0 FUN_14359ace0 body=385 status=ok
// SIG undefined FUN_14359ace0(void)

undefined1 * FUN_14359ace0(longlong param_1,undefined1 *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  longlong local_38 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + -1;
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)*(uint *)(lVar1 + 0x80) * 8);
  local_38[0] = *(longlong *)(param_1 + 0x50) + 0x148;
  pcVar4 = (char *)FUN_1435d8230(local_38,local_res8,&local_res20,param_3,lVar2);
  if (*pcVar4 == '\0') {
    *param_2 = 0;
    return param_2;
  }
  if (((2 < param_3) && (param_3 != 10)) ||
     (pcVar4 = (char *)FUN_1435a9550(param_1,local_res8,lVar2,param_3), *pcVar4 == '\0')) {
    bVar3 = (byte)**(undefined4 **)(lVar2 + 8);
    if (((bVar3 & 0x78) < 0x50) || ((bVar3 & 6) == 2)) {
      switch(param_3) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 8:
      case 9:
      case 10:
      case 0xf:
      case 0x10:
        FUN_1435a9750(param_1,lVar2);
        FUN_14359a010(param_1,local_res20);
        goto LAB_14359ae50;
      }
    }
    puVar5 = (undefined8 *)FUN_14359bd30(param_1,param_3,lVar2,local_res20);
    if (param_3 == 0xb) {
      FUN_143612170(lVar1 + 0x70,lVar2);
      plVar7 = (longlong *)*puVar5;
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
      *plVar7 = *plVar6;
      plVar7[1] = (longlong)plVar6;
      *(longlong **)(*plVar6 + 8) = plVar7;
    }
    else {
      plVar7 = (longlong *)*puVar5;
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
      *plVar7 = *plVar6;
      plVar7[1] = (longlong)plVar6;
      *(longlong **)(*plVar6 + 8) = plVar7;
    }
    *plVar6 = (longlong)plVar7;
    if (param_3 - 0xc < 2) {
      FUN_143612210();
    }
    else {
      FUN_143612170(lVar1 + 0x70,puVar5);
    }
  }
LAB_14359ae50:
  *param_2 = 1;
  return param_2;
}



// FUNCTION 14359ae90 FUN_14359ae90 body=280 status=ok
// SIG undefined FUN_14359ae90(void)

void FUN_14359ae90(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res10 [16];
  undefined4 local_res20;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = *(longlong **)((longlong)param_3 * 8 + *(longlong *)(lVar1 + 0x90));
  puVar3 = (undefined4 *)plVar2[1];
  plVar7 = plVar2;
  local_res20 = param_4;
  if (param_2 == 6) {
    *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + -1;
    plVar7 = *(longlong **)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)*(uint *)(lVar1 + 0x80) * 8);
    puVar4 = (undefined4 *)plVar7[1];
    FUN_143594aa0(local_res10,lVar1 + 0x260,plVar2,0);
    if ((((((byte)*puVar4 & 0x78) == 8) && (puVar4 == puVar3)) &&
        ((longlong *)plVar7[3] == plVar7 + 2)) &&
       ((((byte)*(undefined4 *)(*plVar7 + 0x10) & 0x1f) != 1 &&
        (pcVar5 = (char *)FUN_143594910(local_res10), *pcVar5 != '\0')))) {
      return;
    }
  }
  puVar6 = (undefined8 *)FUN_14359bf50(param_1,param_2,param_3,plVar7,local_res20);
  if (-1 < param_2) {
    if ((param_2 < 6) || (param_2 == 6)) {
      *(undefined8 **)((longlong)param_3 * 8 + *(longlong *)(lVar1 + 0x90)) = puVar6;
    }
    else if (param_2 == 7) {
      FUN_143612170(lVar1 + 0x70,puVar6);
    }
  }
  plVar2 = (longlong *)*puVar6;
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar7;
  plVar2[1] = (longlong)plVar7;
  *(longlong **)(*plVar7 + 8) = plVar2;
  *plVar7 = (longlong)plVar2;
  return;
}



// FUNCTION 14359afb0 FUN_14359afb0 body=377 status=ok
// SIG undefined FUN_14359afb0(void)

undefined1 * FUN_14359afb0(longlong param_1,undefined1 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined4 *local_res20;
  longlong local_48;
  longlong local_40;
  
  plVar10 = (longlong *)0x0;
  local_40 = *(longlong *)(param_1 + 0x50);
  local_res20 = (undefined4 *)0x0;
  lVar1 = local_40 + 0x70;
  *(int *)(local_40 + 0x80) = *(int *)(local_40 + 0x80) + -1;
  uVar2 = *(undefined8 *)
           (*(longlong *)(local_40 + 0xb0) + (ulonglong)*(uint *)(local_40 + 0x80) * 8);
  uVar5 = *(uint *)(local_40 + 0x80) - 1;
  *(uint *)(local_40 + 0x80) = uVar5;
  uVar3 = *(undefined8 *)(*(longlong *)(local_40 + 0xb0) + (ulonglong)uVar5 * 8);
  local_48 = local_40 + 0x148;
  pcVar7 = (char *)FUN_1435d8db0(&local_48,local_res8,&local_res20,param_3,uVar3,uVar2);
  puVar4 = local_res20;
  if (*pcVar7 == '\0') {
    *param_2 = 0;
  }
  else {
    if ((((byte)*local_res20 & 0x78) < 0x50) || (((byte)*local_res20 & 6) == 2)) {
      FUN_1435a9750(param_1,uVar2);
      FUN_1435a9750(param_1,uVar3);
      FUN_14359a010(param_1,puVar4);
    }
    else {
      iVar6 = FUN_1435967a0(param_3);
      plVar8 = plVar10;
      if (((&DAT_145b4a5e0)[(longlong)iVar6 * 2] & 0x10) != 0) {
        plVar8 = (longlong *)FUN_14359c2e0(param_1);
      }
      lVar9 = FUN_1435ba1a0(*(undefined1 **)(local_40 + 0x268),0x88,
                            **(undefined1 **)(local_40 + 0x268));
      if (lVar9 != 0) {
        plVar10 = (longlong *)FUN_14360a5b0(lVar9,param_3,uVar3,uVar2,puVar4,plVar8);
      }
      FUN_143612170(lVar1,plVar10 + 0xd);
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
      *plVar10 = *plVar8;
      plVar10[1] = (longlong)plVar8;
      *(longlong **)(*plVar8 + 8) = plVar10;
      *plVar8 = (longlong)plVar10;
    }
    *param_2 = 1;
  }
  return param_2;
}



// FUNCTION 14359b130 FUN_14359b130 body=815 status=ok
// SIG undefined FUN_14359b130(void)

void FUN_14359b130(longlong param_1,int param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 local_res8;
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  plVar10 = (longlong *)0x0;
  plVar11 = (longlong *)(lVar3 + 0x148);
  lVar13 = 2;
  plVar7 = plVar10;
  if (param_2 < 0) goto LAB_14359b315;
  if (param_2 < 2) {
    uVar1 = *(uint *)(param_3 + 0x20);
    if (((((uVar1 & 3) != 1) && ((uVar1 >> 2 & 1) == 0)) && ((uVar1 >> 3 & 1) == 0)) &&
       (((uVar1 & 3) != 0 || (*(longlong *)(param_3 + 0x28) != 0)))) {
      if (((param_2 == 1) && (lVar9 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x28), lVar9 != 0)
          ) || ((lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x60) + 8) + 8),
                param_2 == 1 && (lVar9 != 0)))) {
        lVar9 = *(longlong *)(lVar9 + 0xb0);
      }
      lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x18) + 0x28);
      local_res8 = 0;
      lVar6 = FUN_1435af580(lVar4,lVar9,param_3 + 0x20,&local_res8,0);
      if (lVar6 != 0) {
        uVar5 = FUN_1435d0350(plVar11,lVar9,lVar6);
        plVar7 = (longlong *)FUN_143610830(plVar11,uVar5,0);
        goto LAB_14359b315;
      }
      iVar2 = *(int *)(lVar9 + 0x90);
      if (iVar2 == 0xc) {
        plVar7 = (longlong *)(lVar3 + 0x200);
      }
      else if (iVar2 == 0xd) {
        plVar7 = (longlong *)(lVar3 + 0x210);
      }
      else if (iVar2 == 0xe) {
        plVar7 = (longlong *)(lVar3 + 0x1f0);
      }
      else {
        if (iVar2 == 0xf) {
          lVar9 = *(longlong *)(lVar4 + 0x240);
        }
        else {
          if ((iVar2 != 0x10) || ((~(*(byte *)(lVar9 + 0x88) >> 5) & 1) == 0)) goto LAB_14359b2f3;
          lVar9 = FUN_143610320(lVar9);
          lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x28) + 0xe0);
        }
        plVar7 = (longlong *)FUN_1436107c0(plVar11,*(undefined8 *)(lVar9 + 0xd8),0);
      }
      if (plVar7 != (longlong *)0x0) goto LAB_14359b315;
    }
LAB_14359b2f3:
    uVar12 = 0;
    uVar5 = *(undefined8 *)(*(longlong *)(*plVar11 + 0x200) + 0xd8);
  }
  else {
    if (param_2 != 2) {
      plVar7 = (longlong *)0x0;
      if (param_2 == 3) {
        plVar7 = (longlong *)(lVar3 + 0x1e0);
      }
      goto LAB_14359b315;
    }
    uVar5 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 0x148) + 0x50) + 0x70))();
    uVar12 = 2;
  }
  plVar7 = (longlong *)FUN_1435d0db0(plVar11,uVar5,uVar12,0);
LAB_14359b315:
  if (param_2 == 0) {
    lVar9 = 0x66;
  }
  else if (param_2 == 1) {
    lVar9 = 4;
  }
  else if (param_2 == 2) {
    lVar9 = 0x59;
  }
  else {
    lVar9 = lVar13;
    if (param_2 == 3) {
      lVar9 = 0x6a;
    }
  }
  plVar11 = plVar10;
  if (((&DAT_145b4a5e0)[lVar9 * 2] & 0x20) != 0) {
    plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x88);
  }
  if (param_2 == 0) {
    lVar13 = 0x66;
  }
  else if (param_2 == 1) {
    lVar13 = 4;
  }
  else if (param_2 == 2) {
    lVar13 = 0x59;
  }
  else if (param_2 == 3) {
    lVar13 = 0x6a;
  }
  plVar8 = plVar10;
  if (((&DAT_145b4a5e0)[lVar13 * 2] & 0x10) != 0) {
    plVar8 = (longlong *)FUN_14359c2e0(param_1);
  }
  lVar13 = *(longlong *)(lVar3 + 0x270);
  lVar9 = FUN_1435ba1a0(*(undefined1 **)(lVar3 + 0x268),0xe8,**(undefined1 **)(lVar3 + 0x268));
  if (lVar9 != 0) {
    plVar10 = (longlong *)
              FUN_143596d60(lVar9,param_2,param_3,plVar11,lVar13 + 0x58,plVar7,param_4,plVar8);
  }
  if (plVar11 != (longlong *)0x0) {
    *(longlong **)(lVar3 + 0x88) = plVar10 + 0x15;
  }
  FUN_143612170(lVar3 + 0x70,plVar10 + 0x19);
  plVar11 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar10 = *plVar11;
  plVar10[1] = (longlong)plVar11;
  *(longlong **)(*plVar11 + 8) = plVar10;
  *plVar11 = (longlong)plVar10;
  return;
}



// FUNCTION 14359b470 FUN_14359b470 body=155 status=ok
// SIG undefined FUN_14359b470(void)

undefined1 *
FUN_14359b470(longlong param_1,undefined1 *param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + -1;
  puVar3 = (undefined8 *)
           FUN_14359be20(param_1,param_3,
                         *(undefined8 *)
                          (*(longlong *)(lVar1 + 0xb0) + (ulonglong)*(uint *)(lVar1 + 0x80) * 8),
                         param_4,param_5);
  if (puVar3 == (undefined8 *)0x0) {
    *param_2 = 0;
  }
  else {
    FUN_143612170(lVar1 + 0x70,puVar3);
    plVar2 = (longlong *)*puVar3;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
    *param_2 = 1;
    *plVar2 = *plVar4;
    plVar2[1] = (longlong)plVar4;
    *(longlong **)(*plVar4 + 8) = plVar2;
    *plVar4 = (longlong)plVar2;
  }
  return param_2;
}



// FUNCTION 14359b520 FUN_14359b520 body=174 status=ok
// SIG undefined FUN_14359b520(void)

void FUN_14359b520(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + -1;
  uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)*(uint *)(lVar1 + 0x80) * 8);
  uVar4 = *(uint *)(lVar1 + 0x80) - 1;
  *(uint *)(lVar1 + 0x80) = uVar4;
  uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar4 * 8);
  lVar5 = FUN_1435ba1a0(*(undefined1 **)(lVar1 + 0x268),0x98,**(undefined1 **)(lVar1 + 0x268));
  if (lVar5 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)FUN_14360aa80(lVar5,uVar3,uVar2);
  }
  FUN_143612170(lVar1 + 0x70,plVar6 + 0xb);
  FUN_143612170(lVar1 + 0x70,plVar6 + 0xf);
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar6 = *plVar7;
  plVar6[1] = (longlong)plVar7;
  *(longlong **)(*plVar7 + 8) = plVar6;
  *plVar7 = (longlong)plVar6;
  return;
}



// FUNCTION 14359b5e0 FUN_14359b5e0 body=257 status=ok
// SIG undefined FUN_14359b5e0(void)

void FUN_14359b5e0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x90) + (longlong)param_2 * 8);
  uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x90) + (longlong)param_3 * 8);
  lVar4 = FUN_1435ba1a0(*(undefined1 **)(lVar1 + 0x268),200,**(undefined1 **)(lVar1 + 0x268));
  plVar5 = (longlong *)0x0;
  if (lVar4 != 0) {
    plVar5 = (longlong *)
             FUN_143597180(lVar4,*(undefined8 *)(lVar1 + 0x270),uVar2,uVar3,param_2,param_3,0);
  }
  *(longlong **)((longlong)param_2 * 8 + *(longlong *)(lVar1 + 0x90)) = plVar5 + 0xd;
  *(longlong **)(*(longlong *)(lVar1 + 0x90) + (longlong)param_3 * 8) = plVar5 + 0x11;
  FUN_143612170(lVar1 + 0x70,plVar5 + 0x15);
  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar5 = *plVar6;
  plVar5[1] = (longlong)plVar6;
  *(longlong **)(*plVar6 + 8) = plVar5;
  *plVar6 = (longlong)plVar5;
  return;
}



// FUNCTION 14359b6f0 FUN_14359b6f0 body=199 status=ok
// SIG undefined FUN_14359b6f0(void)

void FUN_14359b6f0(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar3 = 0xc;
  if (param_2 != 0) {
    lVar3 = 4;
  }
  if (((&DAT_145b4a5e0)[lVar3] & 0x10) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_14359c2e0(param_1);
  }
  puVar2 = *(undefined1 **)(lVar1 + 0x268);
  plVar4 = (longlong *)FUN_1435ba1a0(puVar2,0x28,*puVar2);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    *plVar4 = -1;
    plVar4[1] = -1;
    *(undefined4 *)(plVar4 + 2) = 0x16;
    *(int *)(plVar4 + 3) = param_2;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = param_3;
    plVar4[4] = lVar3;
  }
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar4 = *plVar5;
  plVar4[1] = (longlong)plVar5;
  *(longlong **)(*plVar5 + 8) = plVar4;
  *plVar5 = (longlong)plVar4;
  return;
}



// FUNCTION 14359b7c0 FUN_14359b7c0 body=230 status=ok
// SIG undefined FUN_14359b7c0(void)

longlong * FUN_14359b7c0(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    return (longlong *)0x0;
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  uVar1 = *(uint *)(lVar2 + 0x7c);
  plVar4 = (longlong *)
           FUN_143598890(lVar2 + 0x260,*(undefined8 *)(param_1 + 0x58),
                         *(undefined8 *)(param_2 + 0x58),uVar1,param_3,*(undefined8 *)(lVar2 + 0x88)
                        );
  if (uVar1 != 0) {
    lVar7 = 0;
    uVar9 = (ulonglong)uVar1;
    lVar8 = lVar7;
    do {
      lVar3 = *(longlong *)(lVar8 + *(longlong *)(lVar2 + 0x90));
      puVar5 = (undefined8 *)(plVar4[7] + lVar7);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0xffffffffffffffff;
        puVar5[1] = 0xffffffffffffffff;
        puVar5[2] = plVar4;
        puVar5[3] = lVar3;
        if (lVar3 != 0) {
          plVar6 = (longlong *)(lVar3 + 0x10);
          *puVar5 = *(undefined8 *)(lVar3 + 0x10);
          puVar5[1] = plVar6;
          *(undefined8 **)(*plVar6 + 8) = puVar5;
          *plVar6 = (longlong)puVar5;
        }
      }
      lVar8 = lVar8 + 8;
      lVar7 = lVar7 + 0x20;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar4 = *plVar6;
  plVar4[1] = (longlong)plVar6;
  *(longlong **)(*plVar6 + 8) = plVar4;
  *plVar6 = (longlong)plVar4;
  return plVar4;
}



// FUNCTION 14359b8b0 FUN_14359b8b0 body=29 status=ok
// SIG undefined FUN_14359b8b0(void)

longlong FUN_14359b8b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_143597ea0(*(longlong *)(param_1 + 0x50) + 0x260);
  return lVar1 + 0x18;
}



// FUNCTION 14359b8e0 FUN_14359b8e0 body=92 status=ok
// SIG undefined FUN_14359b8e0(void)

void FUN_14359b8e0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined1 **)(*(longlong *)(param_1 + 0x50) + 0x268);
  puVar3 = (undefined8 *)FUN_1435ba1a0(puVar2,0x38,*puVar2);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0xffffffffffffffff;
    puVar1 = puVar3 + 5;
    puVar3[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar3 + 2) = 2;
    puVar3[3] = puVar3;
    puVar3[4] = param_2;
    *puVar1 = puVar1;
    puVar3[6] = puVar1;
    return;
  }
  return;
}



// FUNCTION 14359b990 FUN_14359b990 body=364 status=ok
// SIG undefined FUN_14359b990(void)

undefined8 * FUN_14359b990(longlong param_1,uint *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong local_res8;
  
  lVar8 = *(longlong *)(param_1 + 0x50);
  puVar7 = (undefined8 *)0x0;
  lVar2 = lVar8 + 0x260;
  switch(*param_2 & 0x1f) {
  case 0:
    lVar8 = lVar8 + 0x180;
    goto LAB_14359bae1;
  case 1:
    lVar4 = 0x80;
    if ((char)param_2[4] != '\0') {
      lVar4 = 0x68;
    }
    lVar8 = lVar8 + 0x148 + lVar4;
    goto LAB_14359bae1;
  case 2:
    puVar7 = (undefined8 *)FUN_1435980d0(lVar2,param_2[4]);
    break;
  case 3:
    puVar7 = (undefined8 *)FUN_143598160(lVar2,param_2[4]);
    break;
  case 4:
    puVar7 = (undefined8 *)FUN_143597fb0(lVar2,*(undefined8 *)(param_2 + 4));
    break;
  case 10:
    lVar2 = *(longlong *)(param_2 + 4);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    lVar8 = *(longlong *)(param_1 + 0x50);
    puVar3 = *(undefined1 **)(lVar8 + 0x268);
    local_res8 = lVar2;
    puVar5 = (undefined8 *)FUN_1435ba1a0(puVar3,0x38,*puVar3);
    if (puVar5 != (undefined8 *)0x0) {
      uVar6 = FUN_1435d0a40(*(undefined8 *)(lVar8 + 0x270),&local_res8);
      *puVar5 = 0xffffffffffffffff;
      puVar5[1] = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 2) = 2;
      puVar5[4] = uVar6;
      puVar7 = puVar5 + 5;
      puVar5[3] = puVar5;
      *puVar7 = puVar7;
      puVar5[6] = puVar7;
      puVar7 = puVar5;
    }
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
      return puVar7;
    }
    break;
  case 0xc:
    if (*(longlong *)(param_2 + 4) != 0) {
      puVar7 = (undefined8 *)FUN_1435981f0(lVar8 + 0x260,param_2);
      return puVar7;
    }
    lVar8 = lVar8 + 0x160;
LAB_14359bae1:
    puVar7 = (undefined8 *)FUN_143597e40(lVar2,lVar8);
  }
  return puVar7;
}



// FUNCTION 14359bb40 FUN_14359bb40 body=413 status=ok
// SIG undefined FUN_14359bb40(void)

longlong FUN_14359bb40(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar5 = *(longlong *)(param_3 + 8);
  lVar9 = lVar1 + 0x148;
  lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) + 0x28);
  lVar6 = *(longlong *)(lVar5 + 8);
  if ((lVar6 == 0) ||
     (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x98) + 0x230) + 0xd8) != lVar6)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  switch(param_2) {
  case 0:
    lVar5 = lVar1 + 0x1e0;
    break;
  case 1:
  case 3:
  case 5:
    lVar5 = 0xa8;
    if (bVar3) {
      lVar5 = 0xb8;
    }
    lVar5 = lVar5 + lVar9;
    break;
  case 2:
  case 4:
  case 6:
  case 10:
    lVar5 = lVar1 + 0x200;
    break;
  case 7:
    lVar5 = *(longlong *)(lVar8 + 0x208);
    goto LAB_14359bc06;
  case 8:
  case 9:
  case 0xf:
  case 0x10:
    lVar5 = *(longlong *)(lVar8 + 0x240);
LAB_14359bc06:
    lVar5 = FUN_1435d0db0(lVar9,*(undefined8 *)(lVar5 + 0xd8),2);
    break;
  case 0xd:
    lVar5 = FUN_1435d0f90(lVar9,lVar5,1);
  }
  iVar4 = FUN_143596080(param_2);
  lVar8 = 0;
  lVar9 = lVar8;
  if (((&DAT_145b4a5e0)[(longlong)iVar4 * 2] & 0x20) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x88);
  }
  lVar6 = lVar8;
  if (((&DAT_145b4a5e0)[(longlong)iVar4 * 2] & 0x10) != 0) {
    lVar6 = FUN_14359c2e0(param_1);
  }
  lVar2 = *(longlong *)(lVar1 + 0x270);
  lVar7 = FUN_1435ba1a0(*(undefined1 **)(lVar1 + 0x268),0xa8,**(undefined1 **)(lVar1 + 0x268));
  if (lVar7 != 0) {
    lVar8 = FUN_14360a440(lVar7,param_2,lVar9,param_3,lVar2 + 0x58,lVar5,lVar6);
  }
  if (lVar9 != 0) {
    *(longlong *)(lVar1 + 0x88) = lVar8 + 0x68;
  }
  return lVar8 + 0x88;
}



// FUNCTION 14359bd30 FUN_14359bd30 body=231 status=ok
// SIG undefined FUN_14359bd30(void)

longlong FUN_14359bd30(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  iVar3 = FUN_143596080(param_2);
  lVar6 = 0;
  lVar7 = lVar6;
  if (((&DAT_145b4a5e0)[(longlong)iVar3 * 2] & 0x20) != 0) {
    lVar7 = *(longlong *)(lVar1 + 0x88);
  }
  lVar4 = lVar6;
  if (((&DAT_145b4a5e0)[(longlong)iVar3 * 2] & 0x10) != 0) {
    lVar4 = FUN_14359c2e0(param_1);
  }
  lVar2 = *(longlong *)(lVar1 + 0x270);
  lVar5 = FUN_1435ba1a0(*(undefined1 **)(lVar1 + 0x268),0xa8,**(undefined1 **)(lVar1 + 0x268));
  if (lVar5 != 0) {
    lVar6 = FUN_14360a440(lVar5,param_2,lVar7,param_3,lVar2 + 0x58,param_4,lVar4);
  }
  if (lVar7 != 0) {
    *(longlong *)(lVar1 + 0x88) = lVar6 + 0x68;
  }
  return lVar6 + 0x88;
}



// FUNCTION 14359be20 FUN_14359be20 body=289 status=ok
// SIG undefined FUN_14359be20(void)

longlong FUN_14359be20(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 param_5)

{
  undefined1 *puVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined8 local_38;
  longlong local_30;
  
  lVar4 = *(longlong *)(param_1 + 0x50);
  local_30 = lVar4 + 0x148;
  lVar5 = 0;
  local_38 = 0;
  pcVar2 = (char *)FUN_1435d9dd0(&local_30,local_res8,&local_38,param_2,param_3,param_4,param_5);
  if (*pcVar2 == '\0') {
    lVar5 = 0;
  }
  else {
    lVar6 = 2;
    if (param_2 == 0) {
      lVar6 = 0x86;
    }
    else if (param_2 == 1) {
      lVar6 = 0x6c;
    }
    else if (param_2 == 2) {
      lVar6 = 0x80;
    }
    else if (param_2 == 4) {
      lVar6 = 0xb2;
    }
    else if (param_2 == 5) {
      lVar6 = 0xb6;
    }
    lVar3 = lVar5;
    if (((&DAT_145b4a5e0)[lVar6 * 2] & 0x10) != 0) {
      lVar3 = FUN_14359c2e0(param_1);
    }
    puVar1 = *(undefined1 **)(lVar4 + 0x268);
    lVar4 = FUN_1435ba1a0(puVar1,0x78,*puVar1);
    if (lVar4 != 0) {
      lVar5 = FUN_14360a520(lVar4,param_2,param_3,local_38,param_4,param_5,lVar3);
    }
    lVar5 = lVar5 + 0x58;
  }
  return lVar5;
}



// FUNCTION 14359bf50 FUN_14359bf50 body=383 status=ok
// SIG undefined FUN_14359bf50(void)

longlong FUN_14359bf50(longlong param_1,int param_2,undefined4 param_3,longlong param_4,
                      undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_4 + 8);
  lVar6 = *(longlong *)(param_1 + 0x50);
  lVar5 = *(longlong *)(lVar8 + 8);
  if ((lVar5 == 0) ||
     (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x98) + 0x230) + 0xd8) != lVar5)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  lVar7 = 0;
  lVar3 = lVar7;
  lVar4 = lVar7;
  switch(param_2) {
  case 0:
  case 3:
    lVar3 = 0xa8;
    if (bVar1) {
      lVar3 = 0xb8;
    }
    lVar3 = lVar6 + 0x148 + lVar3;
    goto LAB_14359c014;
  case 1:
  case 4:
    lVar8 = lVar6 + 0x200;
    lVar4 = 0;
    break;
  case 2:
  case 5:
    lVar8 = lVar6 + 0x210;
    lVar4 = 0;
    break;
  case 6:
    lVar4 = 0;
    break;
  case 7:
    lVar3 = lVar8;
  default:
    if ((param_2 == 0) || (lVar8 = lVar3, param_2 == 3)) {
LAB_14359c014:
      lVar8 = lVar3;
      if ((lVar5 == 0) ||
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x98) + 0x230) + 0xd8) != lVar5)) {
        lVar4 = FUN_1435d19c0(lVar6,param_5);
      }
    }
  }
  iVar2 = FUN_143596490(param_2);
  lVar5 = lVar7;
  if (((&DAT_145b4a5e0)[(longlong)iVar2 * 2] & 0x10) != 0) {
    lVar5 = FUN_14359c2e0(param_1);
  }
  lVar6 = FUN_1435ba1a0(*(undefined1 **)(lVar6 + 0x268),0x78,**(undefined1 **)(lVar6 + 0x268));
  if (lVar6 != 0) {
    lVar7 = FUN_14360a670(lVar6,param_2,param_4,lVar8,lVar5,lVar4,param_3);
  }
  return lVar7 + 0x58;
}



// FUNCTION 14359c100 FUN_14359c100 body=467 status=ok
// SIG undefined FUN_14359c100(void)

longlong FUN_14359c100(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  lVar9 = 0;
  if (param_2 == 0) {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x50);
  uVar1 = *(uint *)(lVar4 + 0x7c);
  uVar2 = *(uint *)(lVar4 + 0x84);
  uVar12 = (ulonglong)uVar2;
  uVar3 = *(uint *)(lVar4 + 0x80);
  uVar14 = (ulonglong)uVar3;
  lVar6 = FUN_143597640(lVar4 + 0x260,*(undefined8 *)(param_1 + 0x58),param_2,uVar1,uVar3,uVar2,
                        *(undefined8 *)(lVar4 + 0x88));
  if (uVar1 != 0) {
    uVar13 = (ulonglong)uVar1;
    lVar10 = lVar9;
    lVar11 = lVar9;
    do {
      lVar5 = *(longlong *)(lVar11 + *(longlong *)(lVar4 + 0x90));
      puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0x38) + lVar10);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 0xffffffffffffffff;
        puVar8[1] = 0xffffffffffffffff;
        puVar8[2] = lVar6;
        puVar8[3] = lVar5;
        if (lVar5 != 0) {
          plVar7 = (longlong *)(lVar5 + 0x10);
          *puVar8 = *(undefined8 *)(lVar5 + 0x10);
          puVar8[1] = plVar7;
          *(undefined8 **)(*plVar7 + 8) = puVar8;
          *plVar7 = (longlong)puVar8;
        }
      }
      lVar11 = lVar11 + 8;
      lVar10 = lVar10 + 0x20;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  lVar10 = lVar9;
  lVar11 = lVar9;
  if (uVar3 != 0) {
    do {
      lVar5 = *(longlong *)(lVar11 + *(longlong *)(lVar4 + 0xb0));
      puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0x40) + lVar10);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 0xffffffffffffffff;
        puVar8[1] = 0xffffffffffffffff;
        puVar8[2] = lVar6;
        puVar8[3] = lVar5;
        if (lVar5 != 0) {
          plVar7 = (longlong *)(lVar5 + 0x10);
          *puVar8 = *(undefined8 *)(lVar5 + 0x10);
          puVar8[1] = plVar7;
          *(undefined8 **)(*plVar7 + 8) = puVar8;
          *plVar7 = (longlong)puVar8;
        }
      }
      uVar14 = uVar14 - 1;
      lVar10 = lVar10 + 0x20;
      lVar11 = lVar11 + 8;
    } while (uVar14 != 0);
  }
  lVar10 = lVar9;
  if (uVar2 != 0) {
    do {
      lVar11 = *(longlong *)(lVar10 + *(longlong *)(lVar4 + 0xd0));
      puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0x48) + lVar9);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 0xffffffffffffffff;
        puVar8[1] = 0xffffffffffffffff;
        puVar8[2] = lVar6;
        puVar8[3] = lVar11;
        if (lVar11 != 0) {
          plVar7 = (longlong *)(lVar11 + 0x10);
          *puVar8 = *(undefined8 *)(lVar11 + 0x10);
          puVar8[1] = plVar7;
          *(undefined8 **)(*plVar7 + 8) = puVar8;
          *plVar7 = (longlong)puVar8;
        }
      }
      lVar9 = lVar9 + 0x20;
      uVar12 = uVar12 - 1;
      lVar10 = lVar10 + 8;
    } while (uVar12 != 0);
  }
  return lVar6;
}



// FUNCTION 14359c2e0 FUN_14359c2e0 body=429 status=ok
// SIG undefined FUN_14359c2e0(void)

longlong * FUN_14359c2e0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong local_res8;
  
  local_res8 = (ulonglong)*(uint *)(param_1 + 0x20);
  plVar9 = (longlong *)0x0;
  if (*(uint *)(param_1 + 0x20) != 0) {
    lVar14 = 0;
    do {
      lVar7 = *(longlong *)(lVar14 + *(longlong *)(param_1 + 0x38));
      if (lVar7 == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x50);
        uVar3 = *(undefined8 *)(lVar7 + 0x58);
        uVar4 = *(undefined8 *)(param_1 + 0x58);
        uVar1 = *(uint *)(lVar2 + 0x7c);
        uVar13 = (ulonglong)uVar1;
        uVar5 = *(undefined8 *)(lVar2 + 0x88);
        lVar7 = FUN_1435ba1a0(*(undefined8 *)(lVar2 + 0x268),0x88);
        if (lVar7 == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          uVar8 = FUN_143597360(lVar2 + 0x260,uVar13);
          plVar9 = (longlong *)FUN_14360a910(lVar7,uVar4,uVar3,uVar1,uVar8,plVar9,uVar5);
        }
        if (uVar1 != 0) {
          lVar7 = 0;
          lVar12 = 0;
          do {
            lVar6 = *(longlong *)(lVar12 + *(longlong *)(lVar2 + 0x90));
            puVar10 = (undefined8 *)(plVar9[7] + lVar7);
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0xffffffffffffffff;
              puVar10[1] = 0xffffffffffffffff;
              puVar10[2] = plVar9;
              puVar10[3] = lVar6;
              if (lVar6 != 0) {
                plVar11 = (longlong *)(lVar6 + 0x10);
                *puVar10 = *(undefined8 *)(lVar6 + 0x10);
                puVar10[1] = plVar11;
                *(undefined8 **)(*plVar11 + 8) = puVar10;
                *plVar11 = (longlong)puVar10;
              }
            }
            lVar12 = lVar12 + 8;
            lVar7 = lVar7 + 0x20;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        plVar11 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
        lVar7 = *plVar11;
        plVar9[1] = (longlong)plVar11;
        *plVar9 = lVar7;
        *(longlong **)(*plVar11 + 8) = plVar9;
        *plVar11 = (longlong)plVar9;
      }
      lVar14 = lVar14 + 8;
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
  }
  return plVar9;
}



// FUNCTION 14359c4a0 FUN_14359c4a0 body=99 status=ok
// SIG undefined FUN_14359c4a0(void)

undefined1 * FUN_14359c4a0(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  if ((((byte)*param_3 & 0x1f) != 0xc) || (*(longlong *)(param_3 + 4) == 0)) {
    *param_2 = 0;
    return param_2;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 4) + 0x28);
  if (((*(byte *)(lVar1 + 0x88) >> 5 & 1) == 0) && (*(int *)(lVar1 + 0x90) != 0x17)) {
    *param_2 = 0;
    return param_2;
  }
  FUN_14359a590(param_1,param_3);
  *param_2 = 1;
  return param_2;
}



// FUNCTION 14359c510 FUN_14359c510 body=1830 status=ok
// SIG undefined FUN_14359c510(void)

uint FUN_14359c510(undefined8 param_1,longlong param_2,uint param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int *piVar17;
  undefined1 local_res20 [4];
  int local_res24;
  uint local_188 [2];
  int *local_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  uint local_168 [2];
  int *local_160;
  ulonglong uStack_158;
  ulonglong local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint local_110 [3];
  int local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_148 = *(longlong *)(param_2 + 0xa0) + 0xc0;
  local_130 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x30) + (ulonglong)param_3 * 8);
  local_104 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14361cce0(&local_130,local_110);
  uVar15 = *(uint *)(param_4 + 0x18);
  uVar12 = (ulonglong)(local_110[0] - local_104);
  local_140 = local_100;
  local_138 = local_f8;
  uVar3 = uVar15;
  if (uVar15 < local_110[0]) {
    uVar3 = local_110[0];
  }
  local_res20[0] = 0;
  uVar7 = local_110[0];
  if (uVar15 < local_110[0]) {
    uVar7 = uVar15;
  }
  local_res24 = -1;
  if (uVar7 != 0) {
    uVar14 = 0;
    uVar16 = (ulonglong)uVar7;
    do {
      FUN_14358f8b0(&local_140);
      if (uVar12 <= uVar14) {
        Scaleform::GFx::AS3::Abc::Read(&local_138,local_res20);
      }
      uVar14 = uVar14 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  do {
    if (local_110[0] <= uVar15) {
      return uVar3;
    }
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    lVar9 = *(longlong *)(param_2 + 0xa0);
    uVar7 = FUN_14358f8b0(&local_140);
    piVar17 = (int *)((ulonglong)uVar7 * 0x10 + *(longlong *)(lVar9 + 0x148));
    if (((piVar17[3] == 0) && (piVar17[2] == 0)) && (*piVar17 == 0)) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)FUN_1435c84e0(uVar2,param_2);
      if (plVar8 == (longlong *)0x0) {
        uVar11 = FUN_1435c8e40(&local_120,0x3f6,uVar2);
        FUN_1435ccf60(uVar2,uVar11,&DAT_145b14e70);
        uVar12 = CONCAT44(uStack_114,uStack_118);
        goto LAB_14359cbdf;
      }
    }
    if (uVar12 <= uVar15) {
      Scaleform::GFx::AS3::Abc::Read(&local_138,local_res20);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b7a928) {
      _Init_thread_header(&DAT_146b7a928);
      if (DAT_146b7a928 == -1) {
        DAT_146b7a908 = 0;
        DAT_146b7a910 = (int *)0x0;
        atexit(FUN_143ec4e30);
        _Init_thread_footer(&DAT_146b7a928);
      }
    }
    uVar5 = local_48;
    uVar4 = local_a8;
    uVar7 = DAT_146b7a908;
    uVar13 = DAT_146b7a908 & 0x1f;
    local_188[0] = DAT_146b7a908;
    local_180 = DAT_146b7a910;
    local_178._0_4_ = (undefined4)DAT_146b7a918;
    local_178._4_4_ = DAT_146b7a918._4_4_;
    uVar14 = CONCAT44(DAT_146b7a918._4_4_,(undefined4)DAT_146b7a918);
    uVar16 = CONCAT44(DAT_146b7a918._4_4_,(undefined4)DAT_146b7a918);
    uStack_170 = (undefined4)DAT_146b7a920;
    uStack_16c = DAT_146b7a920._4_4_;
    if (9 < uVar13) {
      if ((DAT_146b7a908 >> 9 & 1) == 0) {
        if (uVar13 == 10) {
          piVar17 = (int *)(CONCAT44(DAT_146b7a918._4_4_,(undefined4)DAT_146b7a918) + 0x18);
          *piVar17 = *piVar17 + 1;
        }
        else if (10 < uVar13) {
          if (uVar13 < 0xd) {
            lVar9 = CONCAT44(DAT_146b7a918._4_4_,(undefined4)DAT_146b7a918);
          }
          else {
            if (0xe < uVar13) goto LAB_14359c710;
            lVar9 = CONCAT44(DAT_146b7a920._4_4_,(undefined4)DAT_146b7a920);
          }
          if (lVar9 != 0) {
            *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
            *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) & 0x8fffffff;
          }
        }
      }
      else {
        *DAT_146b7a910 = *DAT_146b7a910 + 1;
      }
    }
LAB_14359c710:
    if (uVar15 < uVar12) {
      if (plVar8 != (longlong *)0x0) {
        iVar1 = (int)plVar8[0x12];
        if (iVar1 == 1) {
          local_a8 = local_a8 & 0xffffff00;
          uVar14 = CONCAT44(uStack_a4,uVar4) & 0xffffffffffffff00;
          local_188[0] = uVar7 & 0xffffffe1 | 1;
          uStack_170 = uStack_a0;
          uStack_16c = uStack_9c;
        }
        else if (iVar1 == 2) {
          local_b8 = 0;
          uVar14 = (ulonglong)uStack_b4 << 0x20;
          local_188[0] = uVar7 & 0xffffffe2 | 2;
          uStack_170 = uStack_b0;
          uStack_16c = uStack_ac;
        }
        else if (iVar1 == 3) {
          local_c8 = 0;
          uVar14 = (ulonglong)uStack_c4 << 0x20;
          local_188[0] = uVar7 & 0xffffffe3 | 3;
          uStack_170 = uStack_c0;
          uStack_16c = uStack_bc;
        }
        else if (iVar1 == 4) {
          local_d8 = Scaleform::GFx::NumberUtil::NaN();
          local_188[0] = local_188[0] & 0xffffffe4 | 4;
          uStack_170 = uStack_d0;
          uStack_16c = uStack_cc;
          uVar14 = local_d8;
        }
        else {
          uVar14 = uVar16;
          if (iVar1 != 5) {
            local_e8 = 0;
            uStack_170 = uStack_e0;
            uStack_16c = uStack_dc;
            goto LAB_14359c8d6;
          }
        }
        goto switchD_14359c7e1_caseD_2;
      }
LAB_14359c9b5:
      local_178 = uVar14;
      FUN_14359a600(param_1,local_188);
    }
    else {
      switch(local_res20[0]) {
      case 1:
        puVar10 = (ulonglong *)FUN_1435ba8a0(param_2,&local_128,(longlong)local_res24);
        *(int *)(*puVar10 + 0x18) = *(int *)(*puVar10 + 0x18) + 1;
        local_188[0] = local_188[0] & 0xffffffea | 10;
        uVar14 = *puVar10;
        local_68._0_4_ = (undefined4)uVar14;
        local_68._4_4_ = (undefined4)(uVar14 >> 0x20);
        local_178._0_4_ = (undefined4)local_68;
        local_178._4_4_ = local_68._4_4_;
        uStack_170 = uStack_60;
        uStack_16c = uStack_5c;
        piVar17 = (int *)(local_128 + 0x18);
        *piVar17 = *piVar17 + -1;
        local_68 = uVar14;
        if (*piVar17 == 0) {
          FUN_14335f920();
          uVar14 = CONCAT44(local_178._4_4_,(undefined4)local_178);
        }
        break;
      case 3:
        local_188[0] = uVar7 & 0xffffffe2 | 2;
        local_98 = *(undefined4 *)(*(longlong *)(local_148 + 0x10) + (longlong)local_res24 * 4);
        uVar14 = CONCAT44(uStack_94,local_98);
        uStack_170 = uStack_90;
        uStack_16c = uStack_8c;
        break;
      case 4:
        local_188[0] = uVar7 & 0xffffffe3 | 3;
        local_88 = *(undefined4 *)(*(longlong *)(local_148 + 0x28) + (longlong)local_res24 * 4);
        uVar14 = CONCAT44(uStack_84,local_88);
        uStack_170 = uStack_80;
        uStack_16c = uStack_7c;
        break;
      case 6:
        local_78 = FUN_14361cc30(local_148,(longlong)local_res24);
        local_188[0] = local_188[0] & 0xffffffe4 | 4;
        uStack_170 = uStack_70;
        uStack_16c = uStack_6c;
        uVar14 = local_78;
        break;
      case 10:
        local_48 = local_48 & 0xffffff00;
        uVar14 = CONCAT44(uStack_44,uVar5) & 0xffffffffffffff00;
        local_188[0] = uVar7 & 0xffffffe1 | 1;
        uStack_170 = uStack_40;
        uStack_16c = uStack_3c;
        break;
      case 0xb:
        local_58 = CONCAT31(local_58._1_3_,1);
        uVar14 = CONCAT44(uStack_54,local_58);
        local_188[0] = uVar7 & 0xffffffe1 | 1;
        uStack_170 = uStack_50;
        uStack_16c = uStack_4c;
        break;
      case 0xc:
        local_120 = 0;
        uStack_170 = uStack_118;
        uStack_16c = uStack_114;
LAB_14359c8d6:
        uVar14 = 0;
        local_188[0] = uVar7 & 0xffffffec | 0xc;
      }
switchD_14359c7e1_caseD_2:
      if (plVar8 == (longlong *)0x0) goto LAB_14359c9b5;
      local_168[0] = 0;
      local_160 = (int *)0x0;
      local_178 = uVar14;
      cVar6 = (**(code **)(*plVar8 + 0x58))(plVar8,local_188,local_168);
      if (cVar6 == '\0') {
        uVar15 = local_168[0] & 0x1f;
        uVar12 = local_178;
        if (9 < uVar15) {
          if ((local_168[0] >> 9 & 1) == 0) {
            if (uVar15 == 10) {
              piVar17 = (int *)(uStack_158 + 0x18);
              *piVar17 = *piVar17 + -1;
              if (*piVar17 == 0) {
                FUN_14335f920();
                uVar12 = local_178;
              }
            }
            else if ((uVar15 == 0xb) || (uVar15 == 0xc)) {
              uVar14 = uStack_158;
              if ((uStack_158 & 1) == 0) {
LAB_14359caff:
                if ((uVar14 != 0) && ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0)) {
                  *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
                  FUN_1434ef880();
                  uVar12 = local_178;
                }
              }
              else {
                uStack_158 = uStack_158 - 1;
              }
            }
            else if (uVar15 - 0xd < 2) {
              uVar14 = local_150;
              if ((local_150 & 1) == 0) goto LAB_14359caff;
              local_150 = local_150 - 1;
            }
          }
          else {
            *local_160 = *local_160 + -1;
            if (*local_160 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            local_168[0] = local_168[0] & 0xfffffde0;
            local_160 = (int *)0x0;
            uStack_158 = 0;
            local_150 = 0;
            uVar12 = local_178;
          }
        }
        uVar15 = local_188[0] & 0x1f;
        if (uVar15 < 10) {
          return 0;
        }
        local_178 = uVar12;
        if ((local_188[0] >> 9 & 1) != 0) {
          *local_180 = *local_180 + -1;
          if (*local_180 != 0) {
            return 0;
          }
          (**(code **)(*DAT_146b62f28 + 0x60))();
          return 0;
        }
        if (uVar15 != 10) {
          if ((uVar15 != 0xb) && (uVar15 != 0xc)) {
            if (1 < uVar15 - 0xd) {
              return 0;
            }
            uVar12 = CONCAT44(uStack_16c,uStack_170);
          }
          if ((uVar12 & 1) != 0) {
            return 0;
          }
          if (uVar12 == 0) {
            return 0;
          }
          if ((*(uint *)(uVar12 + 8) & 0x3fffff) == 0) {
            return 0;
          }
          *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) - 1;
          FUN_1434ef880();
          return 0;
        }
LAB_14359cbdf:
        piVar17 = (int *)(uVar12 + 0x18);
        *piVar17 = *piVar17 + -1;
        if (*piVar17 == 0) {
          FUN_14335f920();
        }
        return 0;
      }
      FUN_14359a600(param_1,local_168);
      uVar7 = local_168[0] & 0x1f;
      if (9 < uVar7) {
        if ((local_168[0] >> 9 & 1) == 0) {
          if (uVar7 == 10) {
            piVar17 = (int *)(uStack_158 + 0x18);
            *piVar17 = *piVar17 + -1;
            if (*piVar17 == 0) {
              FUN_14335f920();
            }
          }
          else {
            uVar14 = uStack_158;
            if ((((uVar7 == 0xb) || (uVar7 == 0xc)) || (uVar14 = local_150, uVar7 - 0xd < 2)) &&
               ((((uVar14 & 1) == 0 && (uVar14 != 0)) && ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0)))
               ) {
              *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *local_160 = *local_160 + -1;
          if (*local_160 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
    }
    uVar7 = local_188[0] & 0x1f;
    if (9 < uVar7) {
      if ((local_188[0] >> 9 & 1) == 0) {
        if (uVar7 == 10) {
          piVar17 = (int *)(local_178 + 0x18);
          *piVar17 = *piVar17 + -1;
          if (*piVar17 == 0) {
            FUN_14335f920();
          }
        }
        else {
          uVar14 = local_178;
          if ((uVar7 != 0xb) && (uVar7 != 0xc)) {
            if (1 < uVar7 - 0xd) goto LAB_14359ca47;
            uVar14 = CONCAT44(uStack_16c,uStack_170);
          }
          if ((((uVar14 & 1) == 0) && (uVar14 != 0)) && ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_180 = *local_180 + -1;
        if (*local_180 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
LAB_14359ca47:
    uVar15 = uVar15 + 1;
  } while( true );
}



// FUNCTION 14359cc70 FUN_14359cc70 body=1975 status=ok
// SIG undefined FUN_14359cc70(void)

ulonglong FUN_14359cc70(longlong param_1,undefined4 *param_2,longlong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  bool bVar22;
  uint local_res8 [2];
  uint local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined4 *puVar23;
  undefined4 uVar24;
  uint local_b0 [2];
  int *local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined4 local_88 [2];
  undefined8 local_80;
  longlong local_78;
  undefined4 local_68 [2];
  ulonglong local_60;
  undefined4 local_58 [2];
  ulonglong auStack_50 [2];
  
  uVar7 = 0;
  uVar8 = *(uint *)(param_3 + 0x18);
  uVar11 = (ulonglong)uVar8;
  lVar21 = *(longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  local_res10 = uVar8;
  local_res18 = lVar21;
  if (((byte)*param_2 & 0x1f) == 6) {
    uVar10 = (**(code **)(**(longlong **)(param_2 + 6) + 0x38))();
    uVar11 = FUN_14359c510(param_1,uVar10,param_2[4],param_3);
    return uVar11;
  }
  lVar13 = *(longlong *)(param_2 + 4);
  uVar20 = *(ulonglong *)(lVar13 + 0x20);
  if ((uVar20 >> 0x15 & 1) == 0) {
    uVar7 = (uint)(uVar20 >> 9) & 0xfff;
    if (uVar7 == 0xfff) {
      uVar7 = (uint)(uVar20 >> 6) & 7;
    }
    local_res8[0] = uVar7 - ((uint)(uVar20 >> 0x16) & 0x3ff);
    if (uVar8 < ((uint)(uVar20 >> 6) & 7)) {
      local_b0[0] = 0;
      local_a8 = (int *)0x0;
      local_78 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar21 + 0x10) + 0x218),
                               "Error #1063: Argument count mismatch.",0x25);
      plVar15 = (longlong *)0x0;
      *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + 1;
      local_88[0] = 10;
      local_80 = 0;
      iVar2 = *(int *)(local_78 + 0x18);
      *(int *)(local_78 + 0x18) = iVar2;
      if (iVar2 == 0) {
        FUN_14335f920(local_78);
      }
      puVar23 = local_88;
      local_60 = 0;
      local_68[0] = 2;
      local_58[0] = 0x427;
      FUN_1435cc8a0(lVar21,local_res8,local_b0,&DAT_145b15f30,2,puVar23);
      uVar24 = (undefined4)((ulonglong)puVar23 >> 0x20);
      lVar21 = *(longlong *)(param_1 + 0x50);
      plVar12 = (longlong *)
                FUN_1435ba1a0(*(undefined1 **)(lVar21 + 0x268),0x38,
                              **(undefined1 **)(lVar21 + 0x268));
      if (plVar12 != (longlong *)0x0) {
        lVar13 = FUN_1435d0c50(*(undefined8 *)(lVar21 + 0x270),local_b0);
        *plVar12 = -1;
        plVar12[1] = -1;
        *(undefined4 *)(plVar12 + 2) = 2;
        plVar12[4] = lVar13;
        plVar15 = plVar12 + 5;
        plVar12[3] = (longlong)plVar12;
        *plVar15 = (longlong)plVar15;
        plVar12[6] = (longlong)plVar15;
        plVar15 = plVar12;
      }
      FUN_143612170(lVar21 + 0x70,plVar15 + 3);
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
      lVar21 = *plVar12;
      plVar15[1] = (longlong)plVar12;
      *plVar15 = lVar21;
      *(longlong **)(*plVar12 + 8) = plVar15;
      *plVar12 = (longlong)plVar15;
      lVar21 = *(longlong *)(param_1 + 0x50);
      uVar10 = *(undefined8 *)(lVar21 + 0x280);
      uVar3 = *(undefined8 *)(lVar21 + 0x88);
      uVar14 = FUN_14359c2e0(param_1);
      plVar15 = (longlong *)
                FUN_1435977d0(lVar21 + 0x260,0,*(undefined8 *)(param_1 + 0x58),uVar10,0,
                              CONCAT44(uVar24,1),0,uVar14,uVar3);
      *(int *)(lVar21 + 0x80) = *(int *)(lVar21 + 0x80) + -1;
      uVar8 = *(uint *)(lVar21 + 0x84);
      uVar11 = (ulonglong)uVar8;
      puVar4 = (undefined8 *)plVar15[8];
      lVar13 = *(longlong *)(*(longlong *)(lVar21 + 0xb0) + (ulonglong)*(uint *)(lVar21 + 0x80) * 8)
      ;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0xffffffffffffffff;
        puVar4[1] = 0xffffffffffffffff;
        puVar4[2] = plVar15;
        puVar4[3] = lVar13;
        if (lVar13 != 0) {
          plVar12 = (longlong *)(lVar13 + 0x10);
          *puVar4 = *(undefined8 *)(lVar13 + 0x10);
          puVar4[1] = plVar12;
          *(undefined8 **)(*plVar12 + 8) = puVar4;
          *plVar12 = (longlong)puVar4;
        }
      }
      if (*(uint *)(lVar21 + 0x80) != 0) {
        lVar13 = 0;
        uVar20 = (ulonglong)*(uint *)(lVar21 + 0x80);
        do {
          FUN_143594aa0(local_res8,lVar21 + 0x260,
                        *(undefined8 *)(lVar13 + *(longlong *)(lVar21 + 0xb0)),0);
          lVar13 = lVar13 + 8;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      if (uVar8 != 0) {
        lVar13 = 0;
        do {
          FUN_143594aa0(local_res8,lVar21 + 0x260,
                        *(undefined8 *)(*(longlong *)(lVar21 + 0xd0) + lVar13),0);
          lVar13 = lVar13 + 8;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
      lVar21 = 2;
      *plVar15 = *plVar12;
      plVar15[1] = (longlong)plVar12;
      *(longlong **)(*plVar12 + 8) = plVar15;
      *plVar12 = (longlong)plVar15;
      puVar18 = (ulonglong *)&stack0xffffffffffffffc8;
      do {
        puVar1 = puVar18 + -4;
        lVar21 = lVar21 + -1;
        uVar8 = (uint)puVar18[-6] & 0x1f;
        if (9 < uVar8) {
          if (((uint)puVar18[-6] >> 9 & 1) == 0) {
            if (uVar8 == 10) {
              piVar5 = (int *)(*puVar1 + 0x18);
              *piVar5 = *piVar5 + -1;
              if (*piVar5 == 0) {
                FUN_14335f920();
              }
            }
            else if ((uVar8 == 0xb) || (uVar8 == 0xc)) {
              uVar11 = *puVar1;
              if ((uVar11 & 1) == 0) {
LAB_14359d037:
                if ((uVar11 != 0) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
                  *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                *puVar1 = uVar11 - 1;
              }
            }
            else if (uVar8 - 0xd < 2) {
              uVar11 = puVar18[-3];
              if ((uVar11 & 1) == 0) goto LAB_14359d037;
              puVar18[-3] = uVar11 - 1;
            }
          }
          else {
            piVar5 = (int *)puVar18[-5];
            *piVar5 = *piVar5 + -1;
            if (*piVar5 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            *(uint *)(puVar18 + -6) = (uint)puVar18[-6] & 0xfffffde0;
            puVar18[-5] = 0;
            *puVar1 = 0;
            puVar18[-3] = 0;
          }
        }
        puVar18 = puVar1;
        if (lVar21 == 0) {
          uVar8 = local_b0[0] & 0x1f;
          if (9 < uVar8) {
            if ((local_b0[0] >> 9 & 1) == 0) {
              if (uVar8 == 10) {
                piVar5 = (int *)(local_a0 + 0x18);
                *piVar5 = *piVar5 + -1;
                if (*piVar5 == 0) {
                  FUN_14335f920();
                }
              }
              else if (((((uVar8 == 0xb) || (uVar8 == 0xc)) ||
                        (local_a0 = local_98, uVar8 - 0xd < 2)) &&
                       (((local_a0 & 1) == 0 && (local_a0 != 0)))) &&
                      ((*(uint *)(local_a0 + 8) & 0x3fffff) != 0)) {
                *(uint *)(local_a0 + 8) = *(uint *)(local_a0 + 8) - 1;
                FUN_1434ef880();
                return (ulonglong)local_res10;
              }
            }
            else {
              *local_a8 = *local_a8 + -1;
              if (*local_a8 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))();
                return (ulonglong)local_res10;
              }
            }
          }
          return (ulonglong)local_res10;
        }
      } while( true );
    }
    bVar22 = false;
    if (uVar7 <= uVar8) goto LAB_14359d2ab;
    do {
      if (uVar8 < local_res8[0]) {
        lVar19 = *(longlong *)(*(longlong *)(lVar13 + 8) + (ulonglong)(uVar8 + 1) * 8);
        if (lVar19 == 0) goto switchD_14359d31a_caseD_0;
        if ((*(char **)(lVar19 + 0x18) == (char *)0x0) || (**(char **)(lVar19 + 0x18) == '\0')) {
          lVar16 = 0;
          do {
            lVar17 = lVar16 + 1;
            if (*(char *)(*(longlong *)(lVar19 + 0x10) + lVar16) != "Boolean"[lVar16])
            goto LAB_14359d183;
            lVar16 = lVar17;
          } while (lVar17 != 8);
          goto switchD_14359d31a_caseD_a;
        }
LAB_14359d183:
        cVar6 = FUN_143611120(lVar19);
        if (cVar6 == '\0') {
          cVar6 = FUN_143611350(lVar19);
          if (cVar6 == '\0') {
            cVar6 = FUN_1436112a0(lVar19);
            if (cVar6 != '\0') {
              lVar19 = *(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x218);
              piVar5 = (int *)(lVar19 + 0x60);
              *piVar5 = *piVar5 + 1;
              lVar19 = lVar19 + 0x48;
              lVar16 = *(longlong *)(param_1 + 0x50);
              lVar21 = lVar16 + 0x70;
              local_res20 = lVar19;
              plVar15 = (longlong *)
                        FUN_1435ba1a0(*(undefined1 **)(lVar16 + 0x268),0x38,
                                      **(undefined1 **)(lVar16 + 0x268));
              if (plVar15 == (longlong *)0x0) {
                plVar15 = (longlong *)0x0;
              }
              else {
                lVar16 = FUN_1435d0a40(*(undefined8 *)(lVar16 + 0x270),&local_res20);
                *plVar15 = -1;
                *(undefined4 *)(plVar15 + 2) = 2;
                plVar15[1] = -1;
                plVar15[4] = lVar16;
                plVar12 = plVar15 + 5;
                plVar15[3] = (longlong)plVar15;
                *plVar12 = (longlong)plVar12;
                plVar15[6] = (longlong)plVar12;
              }
              goto LAB_14359d24c;
            }
            cVar6 = FUN_1436111f0(lVar19);
            if (cVar6 == '\0') goto switchD_14359d31a_caseD_c;
            uVar10 = Scaleform::GFx::NumberUtil::NaN();
            FUN_14359a3d0(param_1,uVar10);
          }
          else {
            FUN_14359a520(param_1,0);
          }
        }
        else {
          FUN_14359a4b0(param_1,0);
        }
      }
      else {
        lVar19 = *(longlong *)(lVar13 + 0x28);
        uVar9 = uVar8 - local_res8[0];
        uVar11 = (ulonglong)uVar9;
        switch(*(undefined2 *)(lVar19 + (ulonglong)uVar9 * 4)) {
        case 0:
switchD_14359d31a_caseD_0:
          FUN_14359a1e0(param_1);
          break;
        case 1:
          lVar16 = -1;
          do {
            lVar16 = lVar16 + 1;
          } while ((&PTR_DAT_1467d0ad0)[*(ushort *)(lVar19 + 2 + uVar11 * 4)][lVar16] != '\0');
          lVar19 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar21 + 0x10) + 0x218),
                                 (&PTR_DAT_1467d0ad0)[*(ushort *)(lVar19 + 2 + uVar11 * 4)],lVar16,0
                                );
          *(int *)(lVar19 + 0x18) = *(int *)(lVar19 + 0x18) + 1;
          lVar21 = *(longlong *)(param_1 + 0x50);
          local_res20 = lVar19;
          plVar15 = (longlong *)
                    FUN_1435ba1a0(*(undefined1 **)(lVar21 + 0x268),0x38,
                                  **(undefined1 **)(lVar21 + 0x268));
          if (plVar15 == (longlong *)0x0) {
            plVar15 = (longlong *)0x0;
            lVar21 = lVar21 + 0x70;
          }
          else {
            lVar16 = FUN_1435d0a40(*(undefined8 *)(lVar21 + 0x270),&local_res20);
            *plVar15 = -1;
            lVar21 = lVar21 + 0x70;
            plVar15[1] = -1;
            *(undefined4 *)(plVar15 + 2) = 2;
            plVar15[4] = lVar16;
            plVar12 = plVar15 + 5;
            plVar15[3] = (longlong)plVar15;
            *plVar12 = (longlong)plVar12;
            plVar15[6] = (longlong)plVar12;
          }
LAB_14359d24c:
          FUN_143612170(lVar21,plVar15 + 3);
          plVar12 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
          *plVar15 = *plVar12;
          plVar15[1] = (longlong)plVar12;
          *(longlong **)(*plVar12 + 8) = plVar15;
          *plVar12 = (longlong)plVar15;
          piVar5 = (int *)(lVar19 + 0x18);
          *piVar5 = *piVar5 + -1;
          lVar21 = local_res18;
          if (*piVar5 == 0) {
            FUN_14335f920(lVar19);
            lVar21 = local_res18;
          }
          break;
        case 3:
          FUN_14359a4b0(param_1,*(undefined4 *)
                                 (&DAT_1467d08f8 +
                                 (ulonglong)*(ushort *)(lVar19 + 2 + uVar11 * 4) * 4));
          break;
        case 4:
          FUN_14359a520(param_1,*(undefined4 *)
                                 (&DAT_1467d0a48 +
                                 (ulonglong)*(ushort *)(lVar19 + 2 + uVar11 * 4) * 4));
          break;
        case 6:
          FUN_14359a3d0(param_1,*(undefined8 *)
                                 (&DAT_1467d3b60 +
                                 (ulonglong)*(ushort *)(lVar19 + 2 + uVar11 * 4) * 8));
          break;
        case 10:
switchD_14359d31a_caseD_a:
          FUN_14359a290(param_1,0);
          break;
        case 0xb:
          FUN_14359a290(param_1,CONCAT71((uint7)(uint3)(uVar9 >> 8),1));
          break;
        case 0xc:
switchD_14359d31a_caseD_c:
          FUN_14359a0c0(param_1);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
    uVar11 = (ulonglong)local_res10;
  }
  bVar22 = (uint)uVar11 < uVar7;
LAB_14359d2ab:
  if (bVar22) {
    uVar11 = (ulonglong)uVar7;
  }
  return uVar11;
}



// FUNCTION 14359d470 FUN_14359d470 body=405 status=ok
// SIG undefined FUN_14359d470(void)

undefined1 *
FUN_14359d470(undefined8 param_1,undefined1 *param_2,longlong param_3,uint param_4,longlong param_5)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 local_res18 [2];
  undefined1 local_78 [8];
  longlong local_70;
  uint local_68 [3];
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar2 = param_5;
  uVar7 = *(uint *)(param_5 + 0x18);
  param_5 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_3 + 0xa0) + 0x30) + (ulonglong)param_4 * 8);
  local_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_14361cce0(&param_5,local_68);
  uVar1 = local_68[0];
  if (uVar7 < local_68[0]) {
    uVar1 = uVar7;
  }
  local_res18[0] = local_58;
  uVar7 = 0;
  if (uVar1 != 0) {
    lVar8 = 0;
    do {
      uVar5 = *(undefined8 *)(param_3 + 0x28);
      lVar4 = *(longlong *)(param_3 + 0xa0);
      uVar3 = FUN_14358f8b0(local_res18);
      piVar9 = (int *)((ulonglong)uVar3 * 0x10 + *(longlong *)(lVar4 + 0x148));
      if (((piVar9[3] == 0) && (piVar9[2] == 0)) && (*piVar9 == 0)) {
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_1435c84e0(uVar5,param_3);
        if (lVar4 == 0) {
          uVar6 = FUN_1435c8e40(local_78,0x3f6,uVar5);
          FUN_1435ccf60(uVar5,uVar6,&DAT_145b14e70);
          piVar9 = (int *)(local_70 + 0x18);
          *piVar9 = *piVar9 + -1;
          if (*piVar9 == 0) {
            FUN_14335f920();
          }
          *param_2 = 0;
          return param_2;
        }
      }
      if (*(ulonglong *)(lVar2 + 0x28) < (ulonglong)*(uint *)(lVar2 + 0x18)) {
        uVar5 = *(undefined8 *)(lVar2 + 0x40 + lVar8);
      }
      else {
        uVar5 = *(undefined8 *)(lVar8 + *(longlong *)(lVar2 + 0x20));
      }
      uVar5 = FUN_1435a1fa0(param_1,uVar5,lVar4,(uVar1 - uVar7) + -1);
      if (*(ulonglong *)(lVar2 + 0x28) < (ulonglong)*(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x40 + lVar8) = uVar5;
      }
      else {
        *(undefined8 *)(lVar8 + *(longlong *)(lVar2 + 0x20)) = uVar5;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while (uVar7 < uVar1);
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 14359d610 FUN_14359d610 body=361 status=ok
// SIG undefined FUN_14359d610(void)

undefined1 *
FUN_14359d610(longlong param_1,undefined1 *param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar9;
  ulonglong uVar8;
  
  uVar3 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  if (((byte)*param_3 & 0x1f) != 6) {
    lVar1 = *(longlong *)(param_3 + 4);
    uVar6 = *(ulonglong *)(lVar1 + 0x20);
    if ((uVar6 >> 0x15 & 1) == 0) {
      uVar2 = (uint)(uVar6 >> 9) & 0xfff;
      if (uVar2 == 0xfff) {
        uVar2 = (uint)(uVar6 >> 6) & 7;
      }
      if (*(uint *)(param_4 + 0x18) < uVar2) {
        uVar2 = *(uint *)(param_4 + 0x18);
      }
      uVar6 = 0;
      if (uVar2 != 0) {
        lVar9 = 8;
        uVar8 = uVar6;
        do {
          if (*(longlong *)(lVar9 + *(longlong *)(lVar1 + 8)) != 0) {
            uVar4 = FUN_1435c8090(uVar3);
            if (*(ulonglong *)(param_4 + 0x28) < (ulonglong)*(uint *)(param_4 + 0x18)) {
              uVar5 = *(undefined8 *)(param_4 + 0x40 + uVar6);
            }
            else {
              uVar5 = *(undefined8 *)(uVar6 + *(longlong *)(param_4 + 0x20));
            }
            uVar4 = FUN_1435a1fa0(param_1,uVar5,uVar4,(uVar2 - (int)uVar8) + -1);
            if (*(ulonglong *)(param_4 + 0x28) < (ulonglong)*(uint *)(param_4 + 0x18)) {
              *(undefined8 *)(param_4 + 0x40 + uVar6) = uVar4;
            }
            else {
              *(undefined8 *)(uVar6 + *(longlong *)(param_4 + 0x20)) = uVar4;
            }
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          lVar9 = lVar9 + 8;
          uVar6 = uVar6 + 8;
        } while (uVar7 < uVar2);
      }
    }
    *param_2 = 1;
    return param_2;
  }
  uVar3 = (**(code **)(**(longlong **)(param_3 + 6) + 0x38))();
  FUN_14359d470(param_1,param_2,uVar3,param_3[4],param_4);
  return param_2;
}



// FUNCTION 14359d780 FUN_14359d780 body=802 status=ok
// SIG undefined FUN_14359d780(void)

undefined1 * FUN_14359d780(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 local_res8;
  undefined4 local_48 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18);
  lVar4 = *(longlong *)(lVar2 + 0x28);
  lVar2 = FUN_1435afb10(lVar4,param_3,*(undefined8 *)(lVar2 + 0x30));
  if (lVar2 == 0) {
    *param_2 = 0;
    return param_2;
  }
  lVar2 = *(longlong *)(lVar2 + 0xd8);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0xa8) == 0) {
      if (((*(byte *)(lVar2 + 0x88) >> 4 & 1) != 0) &&
         (uVar5 = FUN_1434e0ed0(lVar2), *(char *)(lVar4 + 0xb8) == '\0')) {
        plVar6 = (longlong *)0x0;
        local_res8 = 0;
        lVar2 = FUN_1435af580(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28
                               ),*(undefined8 *)(uVar5 + 0x28),param_3,&local_res8,uVar5);
        if (lVar2 != 0) {
          bVar1 = false;
          local_48[0] = 0xc;
          local_40 = 0;
          *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
          local_38 = uVar5;
          if (((*(byte *)(*(longlong *)(uVar5 + 0x28) + 0x88) >> 5 & 1) != 0) ||
             (*(int *)(*(longlong *)(uVar5 + 0x28) + 0x90) == 0x17)) {
            lVar2 = *(longlong *)(param_1 + 0x50);
            plVar3 = (longlong *)
                     FUN_1435ba1a0(*(undefined1 **)(lVar2 + 0x268),0x38,
                                   **(undefined1 **)(lVar2 + 0x268));
            if (plVar3 != (longlong *)0x0) {
              lVar4 = FUN_1435d0c50(*(undefined8 *)(lVar2 + 0x270),local_48);
              *plVar3 = -1;
              plVar3[1] = -1;
              *(undefined4 *)(plVar3 + 2) = 2;
              plVar3[4] = lVar4;
              plVar6 = plVar3 + 5;
              plVar3[3] = (longlong)plVar3;
              *plVar6 = (longlong)plVar6;
              plVar3[6] = (longlong)plVar6;
              plVar6 = plVar3;
            }
            FUN_143612170(lVar2 + 0x70,plVar6 + 3);
            plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
            *plVar6 = *plVar3;
            plVar6[1] = (longlong)plVar3;
            *(longlong **)(*plVar3 + 8) = plVar6;
            *plVar3 = (longlong)plVar6;
            bVar1 = true;
          }
          if (((uVar5 & 1) == 0) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
            FUN_1434ef880(uVar5);
          }
          if (!bVar1) {
            *param_2 = 0;
            return param_2;
          }
          FUN_14359dab0(param_1,local_res8);
          *param_2 = 1;
          return param_2;
        }
      }
    }
    else {
      uVar5 = *(ulonglong *)(lVar2 + 0xa8);
      plVar6 = (longlong *)0x0;
      local_48[0] = 0xc;
      local_40 = 0;
      local_38 = uVar5;
      if (uVar5 != 0) {
        *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
        if (((*(byte *)(*(longlong *)(uVar5 + 0x28) + 0x88) >> 5 & 1) != 0) ||
           (*(int *)(*(longlong *)(uVar5 + 0x28) + 0x90) == 0x17)) {
          lVar2 = *(longlong *)(param_1 + 0x50);
          plVar3 = (longlong *)
                   FUN_1435ba1a0(*(undefined1 **)(lVar2 + 0x268),0x38,
                                 **(undefined1 **)(lVar2 + 0x268));
          if (plVar3 != (longlong *)0x0) {
            lVar4 = FUN_1435d0c50(*(undefined8 *)(lVar2 + 0x270),local_48);
            *plVar3 = -1;
            plVar3[1] = -1;
            *(undefined4 *)(plVar3 + 2) = 2;
            plVar3[4] = lVar4;
            plVar6 = plVar3 + 5;
            plVar3[3] = (longlong)plVar3;
            *plVar6 = (longlong)plVar6;
            plVar3[6] = (longlong)plVar6;
            plVar6 = plVar3;
          }
          FUN_143612170(lVar2 + 0x70,plVar6 + 3);
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
          *param_2 = 1;
          *plVar6 = *plVar3;
          plVar6[1] = (longlong)plVar3;
          *(longlong **)(*plVar3 + 8) = plVar6;
          *plVar3 = (longlong)plVar6;
          if ((uVar5 & 1) != 0) {
            return param_2;
          }
          if ((*(uint *)(uVar5 + 8) & 0x3fffff) == 0) {
            return param_2;
          }
          *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
          FUN_1434ef880(uVar5);
          return param_2;
        }
      }
      if ((((uVar5 & 1) == 0) && (uVar5 != 0)) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
        FUN_1434ef880(uVar5);
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14359dab0 FUN_14359dab0 body=406 status=ok
// SIG undefined FUN_14359dab0(void)

void FUN_14359dab0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
  lVar3 = *(longlong *)(param_1 + 0x50);
  lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)*(uint *)(lVar2 + 0x80) * 8);
  uVar8 = 0;
  if (*(longlong *)(lVar4 + 8) != 0) {
    uVar8 = *(undefined8 *)(*(longlong *)(lVar4 + 8) + 8);
    uVar6 = FUN_143610710(uVar8,(ulonglong)(param_2 + 1U) - 1);
    lVar7 = FUN_1435d0350(lVar3 + 0x148,uVar8,uVar6);
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x148) + 0x208) + 0xd8);
    }
    uVar8 = FUN_143610830(lVar3 + 0x148,lVar7,0);
  }
  uVar6 = FUN_14359c2e0(param_1);
  puVar9 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(lVar3 + 0x268),0x78,**(undefined1 **)(lVar3 + 0x268));
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    *puVar9 = 0xffffffffffffffff;
    plVar5 = puVar9 + 7;
    puVar9[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar9 + 2) = 0x13;
    *(undefined4 *)(puVar9 + 3) = 5;
    puVar9[4] = 0;
    puVar9[6] = uVar6;
    puVar9[5] = (ulonglong)(param_2 + 1U);
    plVar10 = (longlong *)(lVar4 + 0x10);
    *plVar5 = -1;
    puVar9[8] = 0xffffffffffffffff;
    puVar9[9] = puVar9;
    puVar9[10] = lVar4;
    *plVar5 = *plVar10;
    puVar9[8] = plVar10;
    *(longlong **)(*plVar10 + 8) = plVar5;
    puVar1 = puVar9 + 0xd;
    *plVar10 = (longlong)plVar5;
    puVar9[0xb] = puVar9;
    puVar9[0xc] = uVar8;
    *puVar1 = puVar1;
    puVar9[0xe] = puVar1;
  }
  puVar9 = puVar9 + 0xb;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_143612170(lVar2 + 0x70,puVar9);
    plVar5 = (longlong *)*puVar9;
    plVar10 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
    *plVar5 = *plVar10;
    plVar5[1] = (longlong)plVar10;
    *(longlong **)(*plVar10 + 8) = plVar5;
    *plVar10 = (longlong)plVar5;
  }
  return;
}



// FUNCTION 14359dc50 FUN_14359dc50 body=169 status=ok
// SIG undefined FUN_14359dc50(void)

void FUN_14359dc50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar2 = FUN_14359c2e0();
  puVar1 = *(undefined1 **)(*(longlong *)(param_1 + 0x50) + 0x268);
  lVar3 = FUN_1435ba1a0(puVar1,0x68,*puVar1);
  if (lVar3 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)FUN_14360a9d0(lVar3,1,param_2,param_3,param_6 + 1,uVar2);
  }
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar4 = *plVar5;
  plVar4[1] = (longlong)plVar5;
  *(longlong **)(*plVar5 + 8) = plVar4;
  *plVar5 = (longlong)plVar4;
  return;
}



// FUNCTION 14359dd00 FUN_14359dd00 body=167 status=ok
// SIG undefined FUN_14359dd00(void)

void FUN_14359dd00(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar2 = FUN_14359c2e0();
  puVar1 = *(undefined1 **)(*(longlong *)(param_1 + 0x50) + 0x268);
  lVar3 = FUN_1435ba1a0(puVar1,0x68,*puVar1);
  if (lVar3 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)FUN_14360a9d0(lVar3,2,param_2,param_3,param_4 + 1,uVar2);
  }
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar4 = *plVar5;
  plVar4[1] = (longlong)plVar5;
  *(longlong **)(*plVar5 + 8) = plVar4;
  *plVar5 = (longlong)plVar4;
  return;
}



// FUNCTION 14359ddb0 FUN_14359ddb0 body=201 status=ok
// SIG undefined FUN_14359ddb0(void)

undefined8 FUN_14359ddb0(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = *param_2 & 0x1f;
  if (uVar4 - 8 < 2) {
    FUN_14359dab0(param_1,param_3);
    return 1;
  }
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      FUN_14359a290(param_1,(char)param_2[4]);
      return 1;
    }
    if (uVar4 == 4) {
      cVar2 = FUN_143611160(param_2);
      if (cVar2 != '\0') {
        uVar5 = Scaleform::GFx::NumberUtil::NaN();
        FUN_14359a3d0(param_1,uVar5);
        return 1;
      }
    }
    else if (uVar4 == 0xc) {
      uVar3 = 0;
      if ((*(longlong *)(param_2 + 4) != 0) &&
         ((lVar1 = *(longlong *)(*(longlong *)(param_2 + 4) + 0x28),
          (*(byte *)(lVar1 + 0x88) >> 5 & 1) != 0 || (*(int *)(lVar1 + 0x90) == 0x17)))) {
        FUN_14359a590(param_1);
        uVar3 = 1;
      }
      return uVar3;
    }
    return 0;
  }
  FUN_14359a1e0();
  return 1;
}



// FUNCTION 14359de80 FUN_14359de80 body=1495 status=ok
// SIG undefined FUN_14359de80(void)

undefined8 FUN_14359de80(longlong param_1,int param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  longlong *plVar13;
  uint *puVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *plVar17;
  undefined4 uVar18;
  undefined8 local_res8;
  undefined8 in_stack_fffffffffffffef8;
  uint local_e8 [2];
  int *local_e0;
  uint local_d8;
  uint uStack_d4;
  ulonglong uStack_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined1 local_b8 [32];
  undefined8 local_98;
  
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  iVar2 = *(int *)(param_3 + 0x18);
  plVar13 = (longlong *)(*(longlong *)(param_1 + 0x50) + 0x148);
  uVar3 = *(uint *)(param_3 + 0x88);
  local_c0 = plVar13;
  if (((((uVar3 & 3) != 1) && ((uVar3 >> 2 & 1) == 0)) && ((uVar3 >> 3 & 1) == 0)) &&
     (((uVar3 & 3) != 0 || (*(longlong *)(param_3 + 0x90) != 0)))) {
    local_c8 = 0;
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18);
    uVar8 = *(undefined8 *)(*(longlong *)(lVar12 + 0x18) + 0x28);
    local_res8 = uVar8;
    if ((param_2 == 0x45) || (param_2 == 0x4e)) {
      lVar12 = *(longlong *)(lVar12 + 0x28);
      bVar4 = true;
      if (lVar12 == 0) goto LAB_14359df37;
LAB_14359df53:
      lVar12 = *(longlong *)(lVar12 + 0xb0);
LAB_14359df5a:
      if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0x88) >> 2 & 1) == 0)) {
        uVar18 = 0;
        piVar6 = (int *)FUN_1435af580(uVar8,lVar12,(uint *)(param_3 + 0x88),&local_c8,0);
        if (((piVar6 != (int *)0x0) && (uVar3 = piVar6[1], -1 < (int)uVar3)) &&
           ((iVar5 = (*piVar6 << 0x15) >> 0x1b, iVar5 == 0xb || ((iVar5 - 0xcU & 0xfffffffd) == 0)))
           ) {
          puVar7 = (ulonglong *)FUN_1434ef190(lVar12);
          puVar14 = (uint *)((ulonglong)uVar3 * 0x20 + puVar7[1]);
          local_e8[0] = *puVar14;
          uVar16 = local_e8[0] & 0x1f;
          if (uVar16 == 6) {
            uStack_d0 = *puVar7;
            local_e8[0] = 7;
            local_e0 = (int *)0x0;
            local_d8 = uVar3;
          }
          else {
            local_e0 = *(int **)(puVar14 + 2);
            local_d8 = puVar14[4];
            uStack_d4 = puVar14[5];
            uStack_d0 = *(ulonglong *)(puVar14 + 6);
            if (9 < uVar16) {
              if ((local_e8[0] >> 9 & 1) == 0) {
                if (uVar16 == 10) {
                  *(int *)(*(longlong *)(puVar14 + 4) + 0x18) =
                       *(int *)(*(longlong *)(puVar14 + 4) + 0x18) + 1;
                }
                else if (10 < uVar16) {
                  if (uVar16 < 0xd) {
                    lVar10 = *(longlong *)(puVar14 + 4);
                  }
                  else {
                    if (0xe < uVar16) goto LAB_14359e062;
                    lVar10 = *(longlong *)(puVar14 + 6);
                  }
                  if (lVar10 != 0) {
                    *(uint *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1U & 0x8fffffff;
                  }
                }
              }
              else {
                *local_e0 = *local_e0 + 1;
              }
            }
          }
LAB_14359e062:
          piVar1 = local_e0;
          uVar3 = local_e8[0];
          uVar8 = FUN_1435cb7c0(local_res8,local_e8);
          uVar16 = uVar3 & 0x1f;
          if (9 < uVar16) {
            if ((uVar3 >> 9 & 1) == 0) {
              if (uVar16 == 10) {
                piVar1 = (int *)(CONCAT44(uStack_d4,local_d8) + 0x18);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_14335f920();
                }
              }
              else if ((uVar16 == 0xb) || (uVar16 == 0xc)) {
                if ((local_d8 & 1) == 0) {
                  uVar15 = CONCAT44(uStack_d4,local_d8);
                  goto LAB_14359e0d5;
                }
              }
              else if ((uVar16 - 0xd < 2) && (uVar15 = uStack_d0, (uStack_d0 & 1) == 0)) {
LAB_14359e0d5:
                if ((uVar15 != 0) && ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0)) {
                  *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
                  FUN_1434ef880();
                }
              }
            }
            else {
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
              }
            }
          }
          uVar9 = FUN_143610830(*(longlong *)(param_1 + 0x50) + 0x148,uVar8,0);
          iVar5 = (*piVar6 << 0x15) >> 0x1b;
          if (iVar5 == 0xb) {
            if ((param_2 == 0x45) || (uVar18 = 7, param_2 == 0x4e)) {
              uVar18 = 8;
            }
            uVar3 = piVar6[1];
            lVar10 = FUN_1434ef190(lVar12);
            pcVar11 = (char *)FUN_14359d610(param_1,&local_res8,
                                            (ulonglong)uVar3 * 0x20 + *(longlong *)(lVar10 + 8),
                                            param_3);
            if (*pcVar11 != '\0') {
              uVar3 = piVar6[1];
              lVar12 = FUN_1434ef190(lVar12);
              iVar5 = FUN_14359cc70(param_1,(ulonglong)uVar3 * 0x20 + *(longlong *)(lVar12 + 8),
                                    param_3);
              FUN_1435d3ed0(local_b8,param_3,iVar5 - iVar2);
              FUN_143599bc0(param_1,uVar18,local_b8,*(undefined8 *)(param_3 + 200),0,uVar9,piVar6[1]
                            ,iVar2);
              if (param_2 - 0x4eU < 2) {
                lVar12 = *(longlong *)(param_1 + 0x50);
                *(int *)(lVar12 + 0x80) = *(int *)(lVar12 + 0x80) + -1;
                plVar13 = (longlong *)
                          FUN_143598310(*(longlong *)(param_1 + 0x50) + 0x260,2,
                                        *(undefined8 *)
                                         (*(longlong *)(lVar12 + 0xb0) +
                                         (ulonglong)*(uint *)(lVar12 + 0x80) * 8),0,0);
                plVar17 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
                *plVar13 = *plVar17;
                plVar13[1] = (longlong)plVar17;
                *(longlong **)(*plVar17 + 8) = plVar13;
                *plVar17 = (longlong)plVar13;
              }
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_98);
              return 1;
            }
            return 0;
          }
          plVar13 = local_c0;
          uVar8 = local_res8;
          if ((iVar5 - 0xcU & 0xfffffffd) == 0) {
            if ((param_2 == 0x45) || (uVar8 = 9, param_2 == 0x4e)) {
              uVar8 = 10;
            }
            FUN_143599bc0(param_1,uVar8,param_3,*(undefined8 *)(param_3 + 200),0,uVar9,piVar6[1],0);
            if (1 < param_2 - 0x4eU) {
              return 1;
            }
            goto LAB_14359e2b0;
          }
        }
      }
    }
    else {
      bVar4 = false;
LAB_14359df37:
      lVar12 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 200) + 8) + 8);
      if (!bVar4) goto LAB_14359df5a;
      if (lVar12 != 0) goto LAB_14359df53;
    }
    lVar10 = FUN_1435afb10(uVar8,param_3 + 0x88,
                           *(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x30));
    if (lVar10 != 0) {
      if ((*(byte *)(lVar12 + 0x88) >> 5 & 1) != 0) {
        if (1 < param_2 - 0x4eU) {
          uVar8 = FUN_1436107c0(*(longlong *)(param_1 + 0x50) + 0x148,*(undefined8 *)(lVar10 + 0xd8)
                                ,0);
          FUN_143599bc0(param_1,5,param_3,*(undefined8 *)(param_3 + 200),0,uVar8,0,0);
          return 1;
        }
        FUN_143599bc0(param_1,5,param_3,*(undefined8 *)(param_3 + 200),0,plVar13 + 5,0,0);
LAB_14359e2b0:
        lVar12 = *(longlong *)(param_1 + 0x50);
        *(int *)(lVar12 + 0x80) = *(int *)(lVar12 + 0x80) + -1;
        plVar13 = (longlong *)
                  FUN_143598310(*(longlong *)(param_1 + 0x50) + 0x260,2,
                                *(undefined8 *)
                                 (*(longlong *)(lVar12 + 0xb0) +
                                 (ulonglong)*(uint *)(lVar12 + 0x80) * 8),0,0);
        plVar17 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
        *plVar13 = *plVar17;
        plVar13[1] = (longlong)plVar17;
        *(longlong **)(*plVar17 + 8) = plVar13;
        *plVar17 = (longlong)plVar13;
        return 1;
      }
      if (param_2 - 0x4eU < 2) {
        plVar13 = plVar13 + 5;
      }
      else {
        plVar13 = (longlong *)FUN_1436107c0(plVar13,*(undefined8 *)(lVar10 + 0xd8),0);
      }
      goto LAB_14359e425;
    }
  }
  plVar13 = (longlong *)
            FUN_1435d0db0(plVar13,*(undefined8 *)(*(longlong *)(*plVar13 + 0x200) + 0xd8),0,0);
LAB_14359e425:
  FUN_143599de0(param_1,param_2,param_3,plVar13,CONCAT44(uVar18,param_4));
  return 1;
}



// FUNCTION 14359e490 FUN_14359e490 body=1335 status=ok
// SIG undefined FUN_14359e490(void)

undefined8 FUN_14359e490(longlong param_1,int param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  int *piVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  int *local_res8;
  undefined8 local_e8;
  uint local_e0 [2];
  int *local_d8;
  uint local_d0;
  uint uStack_cc;
  ulonglong uStack_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  uVar13 = 0;
  local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
  lVar12 = *(longlong *)(param_1 + 0x50);
  lVar1 = lVar12 + 0x70;
  uVar2 = *(uint *)(param_3 + 0x20);
  if (((((uVar2 & 3) == 1) || ((uVar2 >> 2 & 1) != 0)) || ((uVar2 >> 3 & 1) != 0)) ||
     (((uVar2 & 3) == 0 && (*(longlong *)(param_3 + 0x28) == 0)))) {
LAB_14359e96f:
    if (param_2 == 4) {
      uVar13 = 1;
    }
    else if (param_2 == 0x59) {
      uVar13 = 2;
    }
    else if ((param_2 != 0x66) && (param_2 == 0x6a)) {
      uVar13 = 3;
    }
    FUN_14359b130(param_1,uVar13,param_3,param_4);
    return 1;
  }
  if (((param_2 == 4) && (lVar14 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x28), lVar14 != 0))
     || ((lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x60) + 8) + 8), param_2 == 4
         && (lVar14 != 0)))) {
    lVar14 = *(longlong *)(lVar14 + 0xb0);
  }
  local_c0 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x18) + 0x28);
  local_e8 = 0;
  if (((((*(uint *)(param_3 + 0x30) & 0x1f) - 8 < 2) || ((*(byte *)(lVar14 + 0x88) >> 2 & 1) != 0))
      || (cVar3 = FUN_1435cff80((longlong *)(lVar12 + 0x148),lVar14), cVar3 != '\0')) ||
     (lVar14 == *(longlong *)(*(longlong *)(*(longlong *)(lVar12 + 0x148) + 0x210) + 0xd8)))
  goto LAB_14359e96f;
  if ((*(int *)(lVar14 + 0x90) == 0x17) &&
     (pcVar4 = (char *)FUN_14359d780(param_1,&local_res8,param_3 + 0x20), *pcVar4 != '\0')) {
    FUN_143594aa0(&local_res8,*(longlong *)(param_1 + 0x50) + 0x260,*(undefined8 *)(param_3 + 0x60),
                  1);
    return 1;
  }
  piVar5 = (int *)FUN_1435af580(local_c0,lVar14,param_3 + 0x20,&local_e8,0);
  local_res8 = piVar5;
  if (piVar5 == (int *)0x0) goto LAB_14359e96f;
  iVar8 = (*piVar5 << 0x15) >> 0x1b;
  if (iVar8 < 0xb) {
    if ((*(uint *)(param_3 + 0x20) >> 2 & 1) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x50);
      *(int *)(lVar12 + 0x80) = *(int *)(lVar12 + 0x80) + -1;
      plVar6 = (longlong *)
               FUN_143598310(*(longlong *)(param_1 + 0x50) + 0x260,2,
                             *(undefined8 *)
                              (*(longlong *)(lVar12 + 0xb0) +
                              (ulonglong)*(uint *)(lVar12 + 0x80) * 8),0,0);
      plVar15 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
      *plVar6 = *plVar15;
      plVar6[1] = (longlong)plVar15;
      *(longlong **)(*plVar15 + 8) = plVar6;
      *plVar15 = (longlong)plVar6;
    }
    FUN_143612170(lVar1,*(undefined8 *)(param_3 + 0x60));
    FUN_14359dab0(param_1,local_e8);
    return 1;
  }
  if (piVar5[1] < 0) goto LAB_14359e96f;
  if (iVar8 == 0xb) {
    if (param_2 == 0x66) {
      if ((*(uint *)(param_3 + 0x20) >> 2 & 1) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x50);
        *(int *)(lVar12 + 0x80) = *(int *)(lVar12 + 0x80) + -1;
        plVar6 = (longlong *)
                 FUN_143598310(*(longlong *)(param_1 + 0x50) + 0x260,2,
                               *(undefined8 *)
                                (*(longlong *)(lVar12 + 0xb0) +
                                (ulonglong)*(uint *)(lVar12 + 0x80) * 8),0,0);
        plVar15 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
        *plVar6 = *plVar15;
        plVar6[1] = (longlong)plVar15;
        *(longlong **)(*plVar15 + 8) = plVar6;
        *plVar15 = (longlong)plVar6;
      }
      FUN_143612170(lVar1,*(undefined8 *)(param_3 + 0x60));
      FUN_14359dab0(param_1,local_e8);
      return 1;
    }
    goto LAB_14359e96f;
  }
  if ((*(uint *)(param_3 + 0x20) >> 2 & 1) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x50);
    *(int *)(lVar12 + 0x80) = *(int *)(lVar12 + 0x80) + -1;
    plVar6 = (longlong *)
             FUN_143598310(*(longlong *)(param_1 + 0x50) + 0x260,2,
                           *(undefined8 *)
                            (*(longlong *)(lVar12 + 0xb0) + (ulonglong)*(uint *)(lVar12 + 0x80) * 8)
                           ,0,0);
    plVar15 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
    *plVar6 = *plVar15;
    plVar6[1] = (longlong)plVar15;
    *(longlong **)(*plVar15 + 8) = plVar6;
    *plVar15 = (longlong)plVar6;
  }
  uVar2 = piVar5[1];
  puVar7 = (ulonglong *)FUN_1434ef190(lVar14);
  puVar9 = (uint *)((ulonglong)uVar2 * 0x20 + puVar7[1]);
  local_e0[0] = *puVar9;
  uVar11 = local_e0[0] & 0x1f;
  if (uVar11 == 6) {
    uStack_c8 = *puVar7;
    local_e0[0] = 7;
    local_d8 = (int *)0x0;
    local_d0 = uVar2;
  }
  else {
    local_d8 = *(int **)(puVar9 + 2);
    local_d0 = puVar9[4];
    uStack_cc = puVar9[5];
    uStack_c8 = *(ulonglong *)(puVar9 + 6);
    if (9 < uVar11) {
      if ((local_e0[0] >> 9 & 1) == 0) {
        if (uVar11 == 10) {
          *(int *)(*(longlong *)(puVar9 + 4) + 0x18) =
               *(int *)(*(longlong *)(puVar9 + 4) + 0x18) + 1;
        }
        else if (10 < uVar11) {
          if (uVar11 < 0xd) {
            lVar12 = *(longlong *)(puVar9 + 4);
          }
          else {
            if (0xe < uVar11) goto LAB_14359e7b7;
            lVar12 = *(longlong *)(puVar9 + 6);
          }
          if (lVar12 != 0) {
            *(uint *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1U & 0x8fffffff;
          }
        }
      }
      else {
        *local_d8 = *local_d8 + 1;
      }
    }
  }
LAB_14359e7b7:
  piVar5 = local_d8;
  uVar2 = local_e0[0];
  uVar13 = FUN_1435cb7c0(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18)
                          + 0x28),local_e0);
  uVar11 = uVar2 & 0x1f;
  if (9 < uVar11) {
    if ((uVar2 >> 9 & 1) == 0) {
      if (uVar11 == 10) {
        piVar5 = (int *)(CONCAT44(uStack_cc,local_d0) + 0x18);
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar11 == 0xb) || (uVar11 == 0xc)) {
          if ((local_d0 & 1) != 0) goto LAB_14359e857;
          uVar10 = CONCAT44(uStack_cc,local_d0);
        }
        else if ((1 < uVar11 - 0xd) || (uVar10 = uStack_c8, (uStack_c8 & 1) != 0))
        goto LAB_14359e857;
        if ((uVar10 != 0) && ((*(uint *)(uVar10 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar5);
      }
    }
  }
LAB_14359e857:
  uVar13 = FUN_143610830(*(longlong *)(param_1 + 0x50) + 0x148,uVar13,0);
  local_a8 = 0;
  local_b8 = *(longlong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  local_a0 = 0;
  local_98 = 0;
  local_80 = *(undefined8 *)(local_b8 + 0x48);
  local_90 = 0;
  local_88 = 0;
  local_b0 = lVar1;
  FUN_143599bc0(param_1,(param_2 == 4) + '\a',&local_b8,*(undefined8 *)(param_3 + 0x60),0,uVar13,
                local_res8[1],0);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,0);
  return 1;
}



// FUNCTION 14359e9d0 FUN_14359e9d0 body=1079 status=ok
// SIG undefined FUN_14359e9d0(void)

undefined8 FUN_14359e9d0(longlong param_1,int param_2,longlong param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  char *pcVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 local_res8;
  longlong local_res18;
  undefined4 local_res20;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 auStack_78 [8];
  
  lVar3 = *(longlong *)(param_3 + 0x18);
  puVar1 = (uint *)(param_3 + 0x28);
  lVar8 = *(longlong *)(param_3 + 0x68);
  lVar4 = *(longlong *)(param_1 + 0x50);
  uVar13 = 0;
  uVar2 = *puVar1;
  uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 8) + 8);
  local_res18 = param_3;
  local_res20 = param_4;
  if (((((uVar2 & 3) == 1) || ((uVar2 >> 2 & 1) != 0)) || ((uVar2 >> 3 & 1) != 0)) ||
     (((uVar2 & 3) == 0 && (*(longlong *)(param_3 + 0x30) == 0)))) goto LAB_14359edc0;
  if ((param_2 == 5) && (lVar14 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x28), lVar14 != 0)) {
LAB_14359ea89:
    lVar14 = *(longlong *)(lVar14 + 0xb0);
  }
  else {
    lVar14 = *(longlong *)(*(longlong *)(lVar8 + 8) + 8);
    if (param_2 == 5) {
      if (lVar14 == 0) goto LAB_14359edc0;
      goto LAB_14359ea89;
    }
  }
  if (lVar14 != 0) {
    local_res8 = 0;
    piVar6 = (int *)FUN_1435af580(*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x18) + 0x28),lVar14
                                  ,puVar1,&local_res8,0);
    if (piVar6 != (int *)0x0) {
      iVar10 = (*piVar6 << 0x15) >> 0x1b;
      if (iVar10 < 0xb) {
        if ((*puVar1 >> 2 & 1) != 0) {
          FUN_14359b520(param_1);
          lVar4 = *(longlong *)(param_1 + 0x50);
          *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
          plVar7 = (longlong *)
                   FUN_143598310(*(longlong *)(param_1 + 0x50) + 0x260,2,
                                 *(undefined8 *)
                                  (*(longlong *)(lVar4 + 0xb0) +
                                  (ulonglong)*(uint *)(lVar4 + 0x80) * 8),0,0);
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
          *plVar7 = *plVar11;
          plVar7[1] = (longlong)plVar11;
          *(longlong **)(*plVar11 + 8) = plVar7;
          *plVar11 = (longlong)plVar7;
        }
        if (param_2 == 0x68) {
          FUN_14359dd00();
          return 1;
        }
        FUN_14359dc50(param_1,lVar8,lVar3,piVar6,uVar5,local_res8);
        return 1;
      }
      if (((-1 < piVar6[1]) && ((*(byte *)(lVar14 + 0x88) >> 2 & 1) == 0)) && (0xc < iVar10)) {
        if ((*puVar1 >> 2 & 1) != 0) {
          FUN_14359b520(param_1);
          lVar3 = *(longlong *)(param_1 + 0x50);
          *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
          plVar7 = (longlong *)
                   FUN_143598310(*(longlong *)(param_1 + 0x50) + 0x260,2,
                                 *(undefined8 *)
                                  (*(longlong *)(lVar3 + 0xb0) +
                                  (ulonglong)*(uint *)(lVar3 + 0x80) * 8),0,0);
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
          *plVar7 = *plVar11;
          plVar7[1] = (longlong)plVar11;
          *(longlong **)(*plVar11 + 8) = plVar7;
          *plVar11 = (longlong)plVar7;
        }
        lVar3 = local_res18;
        FUN_143612170(lVar4 + 0x70,*(undefined8 *)(local_res18 + 0x18));
        uVar2 = *(uint *)(lVar4 + 0x80);
        local_a0 = 1;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_b8 = *(longlong *)
                    (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) +
                    0x28);
        local_80 = *(undefined8 *)(local_b8 + 0x48);
        for (uVar12 = (ulonglong)uVar2 - 1; uVar12 < uVar2; uVar12 = uVar12 + 1) {
          auStack_78[uVar13] = *(undefined8 *)(*(longlong *)(lVar4 + 0xb0) + uVar12 * 8);
          uVar13 = (ulonglong)((int)uVar13 + 1);
        }
        *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
        local_a8 = 1;
        iVar10 = piVar6[1];
        local_b0 = lVar4 + 0x70;
        lVar8 = FUN_1434ef190(lVar14);
        pcVar9 = (char *)FUN_14359d610(param_1,&local_res18,
                                       (ulonglong)(iVar10 + 1U) * 0x20 + *(longlong *)(lVar8 + 8),
                                       &local_b8);
        if (*pcVar9 != '\0') {
          FUN_143599bc0(param_1,(param_2 == 5) + '\a',&local_b8,*(undefined8 *)(lVar3 + 0x68),0,
                        lVar4 + 0x170,iVar10 + 1U,1);
          lVar3 = *(longlong *)(param_1 + 0x50);
          *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
          plVar7 = (longlong *)
                   FUN_143598310(*(longlong *)(param_1 + 0x50) + 0x260,2,
                                 *(undefined8 *)
                                  (*(longlong *)(lVar3 + 0xb0) +
                                  (ulonglong)*(uint *)(lVar3 + 0x80) * 8),0,0);
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
          lVar3 = *plVar11;
          plVar7[1] = (longlong)plVar11;
          *plVar7 = lVar3;
          *(longlong **)(*plVar11 + 8) = plVar7;
          *plVar11 = (longlong)plVar7;
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_98);
          return 1;
        }
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_98);
        return 0;
      }
    }
  }
LAB_14359edc0:
  if (param_2 == 5) {
    uVar13 = 1;
  }
  else if ((param_2 != 0x61) && (param_2 == 0x68)) {
    uVar13 = 2;
  }
  FUN_14359ab80(param_1,uVar13,local_res18,local_res20);
  return 1;
}



// FUNCTION 14359ee10 FUN_14359ee10 body=589 status=ok
// SIG undefined FUN_14359ee10(void)

undefined1 *
FUN_14359ee10(longlong param_1,undefined1 *param_2,undefined4 param_3,int param_4,undefined1 param_5
             )

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  longlong local_90;
  ulonglong local_88 [2];
  uint local_78 [2];
  int *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uint local_58 [2];
  ulonglong local_50;
  uint local_48 [2];
  int *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18);
  FUN_1435ae740(local_58,lVar2,
                (longlong)param_4 * 0x10 + *(longlong *)(*(longlong *)(lVar2 + 0xa0) + 0x148));
  uVar3 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  if ((((byte)local_58[0] & 3) == 1) || ((local_58[0] >> 2 & 1) != 0)) {
    uVar5 = FUN_1435c8e40(local_98,0x3e9,uVar3);
    FUN_1435ccf60(uVar3,uVar5,&DAT_145b15be8);
    piVar1 = (int *)(local_90 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    if (9 < ((byte)local_48[0] & 0x1f)) {
      if ((local_48[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_48);
      }
      else {
        *local_40 = *local_40 + -1;
        if (*local_40 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_48[0] = local_48[0] & 0xfffffde0;
        local_40 = (int *)0x0;
        uStack_38 = 0;
        local_30 = 0;
      }
    }
    if (local_50 == 0) {
      return param_2;
    }
    if ((local_50 & 1) != 0) {
      return param_2;
    }
    if ((*(uint *)(local_50 + 8) & 0x3fffff) == 0) {
      return param_2;
    }
    *(uint *)(local_50 + 8) = *(uint *)(local_50 + 8) - 1;
    FUN_1434ef880();
    return param_2;
  }
  local_78[0] = 0;
  local_70 = (int *)0x0;
  local_88[0] = 0;
  local_88[1] = 0;
  pcVar4 = (char *)FUN_1435a8ce0(param_1,local_res20,local_88,local_58);
  if (*pcVar4 != '\0') {
    if ((((local_78[0] & 0x1f) != 0) && (local_88[0] != 1)) &&
       ((((byte)local_88[0] >> 1 & 1) == 0 || ((local_88[0] & 0xfffffffffffffffd) != 0)))) {
      FUN_14359f760(param_1,local_88,param_3,param_4,param_5);
      *param_2 = 1;
      goto LAB_14359eebc;
    }
    uVar5 = FUN_1435c8e40(local_98,0x3f6,uVar3);
    FUN_1435ccf60(uVar3,uVar5,&DAT_145b15be8);
    piVar1 = (int *)(local_90 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  *param_2 = 0;
LAB_14359eebc:
  if (9 < ((byte)local_78[0] & 0x1f)) {
    if ((local_78[0] >> 9 & 1) != 0) {
      *local_70 = *local_70 + -1;
      if (*local_70 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_78[0] = local_78[0] & 0xfffffde0;
      local_60 = 0;
      local_70 = (int *)0x0;
      uStack_68 = 0;
      FUN_1434e6250(local_58);
      return param_2;
    }
    FUN_1435920c0(local_78);
  }
  FUN_1434e6250(local_58);
  return param_2;
}



// FUNCTION 14359f070 FUN_14359f070 body=1770 status=ok
// SIG undefined FUN_14359f070(void)

undefined1 *
FUN_14359f070(longlong param_1,undefined1 *param_2,undefined4 param_3,int param_4,char param_5)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  int *local_168;
  undefined8 uStack_160;
  uint local_158 [2];
  int *local_150;
  longlong lStack_148;
  undefined8 local_140;
  int local_138 [2];
  uint local_130 [2];
  int *local_128;
  uint local_120;
  uint uStack_11c;
  ulonglong uStack_118;
  uint local_110 [2];
  ulonglong local_108;
  uint local_100 [2];
  int *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_48;
  
  local_res20[0] = 0;
  local_d8 = *(longlong *)(param_1 + 0x50) + 0x70;
  lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18);
  FUN_1435ae740(local_110,lVar13,
                (longlong)param_4 * 0x10 + *(longlong *)(*(longlong *)(lVar13 + 0xa0) + 0x148));
  local_res8[0] = 0;
  local_158[0] = 0;
  local_150 = (int *)0x0;
  local_168 = (int *)0x0;
  uStack_160 = 0;
  if ((((byte)local_110[0] & 3) == 1) || ((local_110[0] >> 2 & 1) != 0)) goto LAB_14359f668;
  pcVar5 = (char *)FUN_1435a8920(param_1,local_res20,&local_168,local_110,local_138,local_res8);
  uVar8 = uStack_160;
  piVar3 = local_168;
  if (*pcVar5 == '\0') {
    *param_2 = 0;
    if (((byte)local_158[0] & 0x1f) < 10) goto LAB_14359f195;
    if ((local_158[0] >> 9 & 1) != 0) {
      *local_150 = *local_150 + -1;
      if (*local_150 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_158[0] = local_158[0] & 0xfffffde0;
      local_140 = 0;
      local_150 = (int *)0x0;
      lStack_148 = 0;
      FUN_1434e6250(local_110);
      return param_2;
    }
  }
  else {
    if (((((local_158[0] & 0x1f) == 0) || (local_168 == (int *)0x1)) ||
        ((((byte)local_168 >> 1 & 1) != 0 && (((ulonglong)local_168 & 0xfffffffffffffffd) == 0))))
       || (((ulonglong)local_168 & 1) != 0)) {
LAB_14359f668:
      FUN_14359fc00(param_1,param_3,param_4,param_5);
      *param_2 = 1;
      if (9 < ((byte)local_158[0] & 0x1f)) {
        if ((local_158[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_158);
        }
        else {
          *local_150 = *local_150 + -1;
          if (*local_150 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_158[0] = local_158[0] & 0xfffffde0;
          local_150 = (int *)0x0;
          lStack_148 = 0;
          local_140 = 0;
        }
      }
      if (9 < ((byte)local_100[0] & 0x1f)) {
        if ((local_100[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_100);
        }
        else {
          *local_f8 = *local_f8 + -1;
          if (*local_f8 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_100[0] = local_100[0] & 0xfffffde0;
          local_f8 = (int *)0x0;
          uStack_f0 = 0;
          local_e8 = 0;
        }
      }
      if (((local_108 != 0) && ((local_108 & 1) == 0)) &&
         ((*(uint *)(local_108 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_108 + 8) = *(uint *)(local_108 + 8) - 1;
        FUN_1434ef880();
      }
      return param_2;
    }
    lVar13 = *(longlong *)(param_1 + 0x50);
    local_e0 = FUN_1435d02e0(lVar13 + 0x148,local_158);
    if (local_138[0] < 0) goto LAB_14359f668;
    if (1 < local_138[0]) {
      if (local_138[0] != 2) goto LAB_14359f668;
      FUN_14359f760(param_1,&local_168,param_3,param_4,param_5);
      *param_2 = 1;
      if (((byte)local_158[0] & 0x1f) < 10) goto LAB_14359f195;
      if ((local_158[0] >> 9 & 1) != 0) {
        *local_150 = *local_150 + -1;
        if (*local_150 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        goto LAB_14359f279;
      }
      goto LAB_14359f18b;
    }
    cVar4 = FUN_1435ab780(piVar3);
    if ((((cVar4 == '\0') && (((byte)local_158[0] & 0x1f) == 0xc)) && (lStack_148 != 0)) &&
       (((*(byte *)(*(longlong *)(lStack_148 + 0x28) + 0x88) >> 5 & 1) != 0 ||
        (*(int *)(*(longlong *)(lStack_148 + 0x28) + 0x90) == 0x17)))) {
      FUN_14359a590(param_1,local_158);
    }
    else if (local_138[0] == 0) {
      FUN_143599ec0(param_1,5,0,local_res8[0]);
    }
    else {
      uVar6 = FUN_1435caba0(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28),
                            local_158);
      uVar6 = FUN_1436107c0(lVar13 + 0x148,uVar6,0);
      FUN_14360f6f0(param_1,uVar6,local_res8[0]);
    }
    if (param_5 != '\0') {
      iVar9 = (*piVar3 << 0x15) >> 0x1b;
      if (((10 < iVar9) && (uVar2 = piVar3[1], -1 < (int)uVar2)) &&
         ((*(byte *)(local_e0 + 0x88) >> 2 & 1) == 0)) {
        if (iVar9 == 0xb) {
          FUN_14359dab0(param_1,uVar8);
        }
        else {
          puVar7 = (ulonglong *)FUN_1434ef190(local_e0);
          puVar10 = (uint *)((ulonglong)uVar2 * 0x20 + puVar7[1]);
          local_130[0] = *puVar10;
          uVar12 = local_130[0] & 0x1f;
          if (uVar12 == 6) {
            uStack_118 = *puVar7;
            local_130[0] = 7;
            local_128 = (int *)0x0;
            local_120 = uVar2;
          }
          else {
            local_128 = *(int **)(puVar10 + 2);
            local_120 = puVar10[4];
            uStack_11c = puVar10[5];
            uStack_118 = *(ulonglong *)(puVar10 + 6);
            if (9 < uVar12) {
              if ((local_130[0] >> 9 & 1) == 0) {
                if (uVar12 == 10) {
                  *(int *)(*(longlong *)(puVar10 + 4) + 0x18) =
                       *(int *)(*(longlong *)(puVar10 + 4) + 0x18) + 1;
                }
                else if (10 < uVar12) {
                  if (uVar12 < 0xd) {
                    lVar13 = *(longlong *)(puVar10 + 4);
                  }
                  else {
                    if (0xe < uVar12) goto LAB_14359f440;
                    lVar13 = *(longlong *)(puVar10 + 6);
                  }
                  if (lVar13 != 0) {
                    *(uint *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1U & 0x8fffffff;
                  }
                }
              }
              else {
                *local_128 = *local_128 + 1;
              }
            }
          }
LAB_14359f440:
          piVar1 = local_128;
          uVar2 = local_130[0];
          uVar8 = FUN_1435cb7c0(*(undefined8 *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) +
                                 0x28),local_130);
          uVar12 = uVar2 & 0x1f;
          if (9 < uVar12) {
            if ((uVar2 >> 9 & 1) == 0) {
              if (uVar12 == 10) {
                piVar1 = (int *)(CONCAT44(uStack_11c,local_120) + 0x18);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_14335f920();
                }
              }
              else if ((uVar12 == 0xb) || (uVar12 == 0xc)) {
                if ((local_120 & 1) == 0) {
                  uVar11 = CONCAT44(uStack_11c,local_120);
                  goto LAB_14359f4b7;
                }
              }
              else if ((uVar12 - 0xd < 2) && (uVar11 = uStack_118, (uStack_118 & 1) == 0)) {
LAB_14359f4b7:
                if ((uVar11 != 0) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
                  *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
                  FUN_1434ef880();
                }
              }
            }
            else {
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
              }
            }
          }
          uVar8 = FUN_143610830(*(longlong *)(param_1 + 0x50) + 0x148,uVar8,0);
          local_c0 = local_d8;
          local_b0 = 0;
          local_a8 = 0;
          local_a0 = 0;
          local_98 = 0;
          local_b8 = 1;
          local_c8 = *(longlong *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) +
                      0x28);
          local_90 = *(undefined8 *)(local_c8 + 0x48);
          *(int *)(local_d8 + 0x10) = *(int *)(local_d8 + 0x10) + -1;
          local_48 = *(undefined8 *)
                      (*(longlong *)(local_d8 + 0x40) + (ulonglong)*(uint *)(local_d8 + 0x10) * 8);
          FUN_143599bc0(param_1,7,&local_c8,local_48,0,uVar8,piVar3[1],0);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,0);
        }
        *param_2 = 1;
        if (((byte)local_158[0] & 0x1f) < 10) goto LAB_14359f195;
        if ((local_158[0] >> 9 & 1) != 0) {
          *local_150 = *local_150 + -1;
          if (*local_150 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
            local_158[0] = local_158[0] & 0xfffffde0;
            local_140 = 0;
            local_150 = (int *)0x0;
            lStack_148 = 0;
            FUN_1434e6250(local_110);
            return param_2;
          }
          goto LAB_14359f279;
        }
        goto LAB_14359f18b;
      }
      FUN_14359dab0(param_1,uVar8);
    }
    *param_2 = 1;
    if (((byte)local_158[0] & 0x1f) < 10) goto LAB_14359f195;
    if ((local_158[0] >> 9 & 1) != 0) {
      *local_150 = *local_150 + -1;
      if (*local_150 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        local_158[0] = local_158[0] & 0xfffffde0;
        local_140 = 0;
        local_150 = (int *)0x0;
        lStack_148 = 0;
        FUN_1434e6250(local_110);
        return param_2;
      }
LAB_14359f279:
      local_158[0] = local_158[0] & 0xfffffde0;
      local_140 = 0;
      local_150 = (int *)0x0;
      lStack_148 = 0;
      FUN_1434e6250(local_110);
      return param_2;
    }
  }
LAB_14359f18b:
  FUN_1435920c0(local_158);
LAB_14359f195:
  FUN_1434e6250(local_110);
  return param_2;
}



// FUNCTION 14359f760 FUN_14359f760 body=1173 status=ok
// SIG undefined FUN_14359f760(void)

void FUN_14359f760(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  char param_5)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  uint *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 local_res8 [4];
  undefined4 local_res18;
  undefined4 local_res20;
  uint local_58 [2];
  int *local_50;
  byte local_48;
  undefined7 uStack_47;
  ulonglong local_40;
  
  local_res8[0] = 0;
  puVar1 = (uint *)(param_2 + 2);
  uVar4 = param_2[1];
  puVar5 = (uint *)*param_2;
  lVar12 = *(longlong *)(param_1 + 0x50);
  uVar15 = *puVar1 & 0x1f;
  local_res18 = param_3;
  local_res20 = param_4;
  if (uVar15 == 0) {
    lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(lVar12 + 0x148) + 0x298) + 0xd8);
  }
  else if ((uVar15 == 8) || (uVar15 == 9)) {
    lVar8 = param_2[4];
  }
  else {
    lVar8 = FUN_1435caba0(*(undefined8 *)(lVar12 + 0x148),puVar1);
  }
  if ((lVar8 != 0) && (lVar8 == *(longlong *)(*(longlong *)(lVar12 + 0x148) + 0x200))) {
    lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0x148) + 0x208);
  }
  if (param_5 == '\0') {
    cVar6 = FUN_14359ddb0(param_1,puVar1,uVar4);
    if (cVar6 != '\0') {
      return;
    }
    goto LAB_14359fbcf;
  }
  if (0x50000000 < (int)((*puVar5 & 0xffffffc0) * 0x200000)) goto LAB_14359fbcf;
  if ((((byte)*puVar1 & 0x1f) == 0xc) && (param_2[4] != 0)) {
    if (param_2[4] ==
        *(longlong *)
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x18) + 0x28) + 0x2c0)) {
      if (((longlong)uVar4 < 0) || (uVar4 < *(ulonglong *)(lVar8 + 0x28))) {
        puVar9 = (undefined8 *)
                 Scaleform::GFx::AS3::Slots::GetSlotNameNode(*(undefined8 *)(lVar8 + 0x30),uVar4);
      }
      else {
        puVar9 = *(undefined8 **)
                  (((uVar4 & 0xffffffff) - *(ulonglong *)(lVar8 + 0x28)) * 0x40 +
                  *(longlong *)(lVar8 + 0x38));
      }
      iVar3 = *(int *)(puVar9 + 3);
      pcVar10 = (char *)*puVar9;
      *(int *)(puVar9 + 3) = iVar3 + 1;
      iVar7 = _guard_xfg_dispatch_icall_nop(pcVar10,"undefined");
      if (iVar7 == 0) {
        FUN_14359a1e0(param_1);
      }
      else {
        lVar12 = 0;
        do {
          lVar8 = lVar12 + 1;
          if (pcVar10[lVar12] != (&DAT_145b01f00)[lVar12]) {
            *(int *)(puVar9 + 3) = iVar3;
            param_4 = local_res20;
            param_3 = local_res18;
            if (iVar3 == 0) {
              FUN_14335f920(puVar9);
              param_4 = local_res20;
              param_3 = local_res18;
            }
            goto LAB_14359f8fc;
          }
          lVar12 = lVar8;
        } while (lVar8 != 4);
        uVar17 = Scaleform::GFx::NumberUtil::NaN();
        FUN_14359a3d0(param_1,uVar17);
      }
      piVar2 = (int *)(puVar9 + 3);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 != 0) {
        return;
      }
      FUN_14335f920(puVar9);
      return;
    }
LAB_14359f8fc:
    cVar6 = FUN_1435ab780(puVar5);
    if (cVar6 != '\0') {
      local_58[0] = 0;
      local_50 = (int *)0x0;
      pcVar10 = (char *)FUN_1435abe90(puVar5,local_res8,local_58,param_2[4]);
      uVar14 = CONCAT71(uStack_47,local_48);
      if ((((*pcVar10 != '\0') && (((byte)local_58[0] & 0x1f) == 0xc)) && (uVar14 != 0)) &&
         (((*(byte *)(*(longlong *)(uVar14 + 0x28) + 0x88) >> 5 & 1) != 0 ||
          (*(int *)(*(longlong *)(uVar14 + 0x28) + 0x90) == 0x17)))) {
        lVar12 = *(longlong *)(param_1 + 0x50);
        plVar11 = (longlong *)
                  FUN_1435ba1a0(*(undefined1 **)(lVar12 + 0x268),0x38,
                                **(undefined1 **)(lVar12 + 0x268));
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          lVar8 = FUN_1435d0c50(*(undefined8 *)(lVar12 + 0x270),local_58);
          *plVar11 = -1;
          plVar11[1] = -1;
          *(undefined4 *)(plVar11 + 2) = 2;
          plVar11[4] = lVar8;
          plVar13 = plVar11 + 5;
          plVar11[3] = (longlong)plVar11;
          *plVar13 = (longlong)plVar13;
          plVar11[6] = (longlong)plVar13;
        }
        FUN_143612170(lVar12 + 0x70,plVar11 + 3);
        plVar13 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
        *plVar11 = *plVar13;
        plVar11[1] = (longlong)plVar13;
        *(longlong **)(*plVar13 + 8) = plVar11;
        *plVar13 = (longlong)plVar11;
        uVar15 = local_58[0] & 0x1f;
        if (uVar15 < 10) {
          return;
        }
        if ((local_58[0] >> 9 & 1) != 0) {
          *local_50 = *local_50 + -1;
          if (*local_50 != 0) {
            return;
          }
          (**(code **)(*DAT_146b62f28 + 0x60))();
          return;
        }
        if (uVar15 == 10) {
          piVar2 = (int *)(CONCAT71(uStack_47,local_48) + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 != 0) {
            return;
          }
          FUN_14335f920();
          return;
        }
        if ((uVar15 == 0xb) || (uVar15 == 0xc)) {
          local_40 = CONCAT71(uStack_47,local_48);
        }
        else if (1 < uVar15 - 0xd) {
          return;
        }
        if ((local_40 & 1) != 0) {
          return;
        }
        if (local_40 == 0) {
          return;
        }
        if ((*(uint *)(local_40 + 8) & 0x3fffff) == 0) {
          return;
        }
        *(uint *)(local_40 + 8) = *(uint *)(local_40 + 8) - 1;
        FUN_1434ef880();
        return;
      }
      uVar15 = local_58[0] & 0x1f;
      if (9 < uVar15) {
        if ((local_58[0] >> 9 & 1) == 0) {
          if (uVar15 == 10) {
            piVar2 = (int *)(uVar14 + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_14335f920();
            }
          }
          else {
            if ((uVar15 == 0xb) || (uVar15 == 0xc)) {
              bVar16 = (local_48 & 1) == 0;
            }
            else {
              if (1 < uVar15 - 0xd) goto LAB_14359fb6c;
              bVar16 = (local_40 & 1) == 0;
              uVar14 = local_40;
            }
            if (((bVar16) && (uVar14 != 0)) && ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *local_50 = *local_50 + -1;
          if (*local_50 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
    }
  }
LAB_14359fb6c:
  if (((((byte)*puVar1 & 0x1f) == 0xc) && (param_2[4] != 0)) &&
     ((lVar12 = *(longlong *)(param_2[4] + 0x28), (*(byte *)(lVar12 + 0x88) >> 5 & 1) != 0 ||
      (*(int *)(lVar12 + 0x90) == 0x17)))) {
    FUN_14359a590(param_1,puVar1);
    FUN_14359dab0(param_1,uVar4);
    return;
  }
LAB_14359fbcf:
  FUN_14359fc00(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 14359fc00 FUN_14359fc00 body=393 status=ok
// SIG undefined FUN_14359fc00(void)

void FUN_14359fc00(longlong param_1,undefined4 param_2,uint param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  undefined1 local_48 [48];
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_60 = *(longlong *)(param_1 + 0x50);
  plVar6 = (longlong *)(local_60 + 0x148);
  local_50 = *(longlong *)(*(longlong *)(local_60 + 0x18) + 0x18);
  local_68 = *(undefined8 *)(local_50 + 0x28);
  local_60 = local_60 + 0x70;
  local_58 = 0;
  FUN_1435ae740(local_48,local_50,
                (ulonglong)param_3 * 0x10 + *(longlong *)(*(longlong *)(local_50 + 0xa0) + 0x148));
  local_18 = 0;
  uStack_10 = 0;
  iVar2 = FUN_1435d3ac0(&local_68,local_48,&local_18,&uStack_10);
  local_58 = local_58 + iVar2;
  if (param_4 == '\0') {
    uVar4 = FUN_1435d0db0(plVar6,*(undefined8 *)(*(longlong *)(*plVar6 + 0x200) + 0xd8),2,0);
    uVar3 = FUN_143595bc0(param_2);
    FUN_143599ec0(param_1,uVar3,uVar4,param_3);
  }
  else {
    uVar4 = FUN_1435d0db0(plVar6,*(undefined8 *)(*(longlong *)(*plVar6 + 0x200) + 0xd8),0,0);
    lVar1 = *(longlong *)(param_1 + 0x50);
    uVar5 = FUN_14359c2e0(param_1);
    plVar6 = (longlong *)
             FUN_143597ce0(*(longlong *)(param_1 + 0x50) + 0x260,3,lVar1 + 0x70,uVar4,param_3,uVar5)
    ;
    FUN_143612170(lVar1 + 0x70,plVar6 + 10);
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
    *plVar6 = *plVar7;
    plVar6[1] = (longlong)plVar7;
    *(longlong **)(*plVar7 + 8) = plVar6;
    *plVar7 = (longlong)plVar6;
  }
  FUN_1434e6250(local_48);
  return;
}



// FUNCTION 14359fd90 FUN_14359fd90 body=472 status=ok
// SIG undefined FUN_14359fd90(void)

undefined1 *
FUN_14359fd90(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  
  lVar6 = *(longlong *)(param_1 + 0x50) + 0x148;
  if ((*(byte *)(param_3 + 0x88) >> 5 & 1) == 0) {
    uVar4 = FUN_1435d0db0(lVar6,param_3,2);
LAB_14359ff34:
    uVar7 = 2;
  }
  else {
    lVar2 = *(longlong *)(param_3 + 0xd8);
    uVar4 = FUN_1435d0db0(lVar6,lVar2,2);
    if ((*(byte *)(lVar2 + 0x88) >> 4 & 1) != 0) {
      iVar1 = *(int *)(param_4 + 0x18);
      lVar6 = FUN_1434e0eb0(lVar2);
      FUN_14358fb50(*(undefined8 *)(lVar6 + 0xa0),local_res18,*(undefined4 *)(lVar2 + 0x108));
      pcVar5 = (char *)FUN_14359d470(param_1,local_res8,lVar6,local_res18[0],param_4);
      if (*pcVar5 == '\0') {
        *param_2 = 0;
        return param_2;
      }
      iVar3 = FUN_14359c510(param_1,lVar6,local_res18[0],param_4);
      FUN_1435d3ed0(local_a8,param_4,iVar3 - iVar1);
      FUN_143599bc0(param_1,3,local_a8,param_5,0,uVar4,0,0);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_88);
      goto LAB_14359ff46;
    }
    if (param_3 ==
        *(longlong *)
         (*(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28) +
         0x200)) goto LAB_14359ff34;
    uVar7 = 3;
  }
  FUN_143599bc0(param_1,uVar7,param_4,param_5,0,uVar4,0,0);
LAB_14359ff46:
  *param_2 = 1;
  return param_2;
}



// FUNCTION 14359ff70 FUN_14359ff70 body=996 status=ok
// SIG undefined FUN_14359ff70(void)

undefined8 FUN_14359ff70(longlong param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  char cVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  ulonglong local_res18;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar17;
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar16 = (longlong)param_4;
  lVar2 = *(longlong *)(param_1 + 0x50);
  bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x48) + param_3);
  if (((bVar1 - 0x91 & 0xfffffffd) != 0) && (1 < bVar1 - 0xc0)) {
    return 0;
  }
  cVar11 = *(char *)(*(longlong *)(lVar2 + 0x48) + param_3 + 1);
  local_res18 = param_3 + 2;
  if (cVar11 == 's') {
    iVar15 = 2;
LAB_1435a001a:
    cVar11 = *(char *)(*(longlong *)(lVar2 + 0x48) + local_res18);
    local_res18 = param_3 + 3;
  }
  else {
    if (cVar11 == 't') {
      iVar15 = 3;
      goto LAB_1435a001a;
    }
    if (cVar11 == 'u') {
      iVar15 = 4;
      goto LAB_1435a001a;
    }
    if ((bVar1 < 0xc0) || (0xc1 < bVar1)) {
      iVar15 = 4;
    }
    else {
      iVar15 = 2;
    }
  }
  lVar5 = 0;
  if (cVar11 == 'c') {
    lVar2 = FUN_14358f710(*(undefined8 *)(lVar2 + 0x48),&local_res18);
  }
  else {
    lVar2 = lVar5;
    if (cVar11 != -0x2c) {
      if (cVar11 == -0x2b) {
        lVar2 = 1;
      }
      else if (cVar11 == -0x2a) {
        lVar2 = 2;
      }
      else {
        if (cVar11 != -0x29) {
          return 0;
        }
        lVar2 = 3;
      }
    }
  }
  if ((int)lVar2 != param_4) {
    return 0;
  }
  if (bVar1 == 0x91) {
LAB_1435a024b:
    if (iVar15 == 3) {
      lVar2 = *(longlong *)(param_1 + 0x50);
      uVar8 = *(undefined8 *)(lVar16 * 8 + *(longlong *)(lVar2 + 0x90));
      uVar3 = FUN_14359c2e0();
      lVar4 = FUN_1435ba1a0(*(undefined1 **)(lVar2 + 0x268),0x78,**(undefined1 **)(lVar2 + 0x268));
      if (lVar4 != 0) {
        lVar5 = FUN_14360a670(lVar4,2,uVar8,lVar2 + 0x210,uVar3,0,param_4);
      }
      *(undefined8 **)(lVar16 * 8 + *(longlong *)(lVar2 + 0x90)) = (undefined8 *)(lVar5 + 0x58);
      plVar14 = *(longlong **)(lVar5 + 0x58);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x50);
      puVar10 = (undefined8 *)
                FUN_14359bf50(param_1,iVar15 == 2,param_4,
                              *(undefined8 *)(lVar16 * 8 + *(longlong *)(lVar2 + 0x90)),
                              CONCAT44(uVar17,(int)local_res18));
      *(undefined8 **)(lVar16 * 8 + *(longlong *)(lVar2 + 0x90)) = puVar10;
      plVar14 = (longlong *)*puVar10;
    }
    goto LAB_1435a0307;
  }
  if (bVar1 != 0x93) {
    if (bVar1 == 0xc0) goto LAB_1435a024b;
    if (bVar1 != 0xc1) {
      return 0;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  lVar4 = *(longlong *)(lVar2 + 0x90);
  if (iVar15 == 3) {
    uVar8 = *(undefined8 *)(lVar16 * 8 + lVar4);
    uVar3 = FUN_14359c2e0(param_1);
    lVar4 = FUN_1435ba1a0(*(undefined1 **)(lVar2 + 0x268),0x78,**(undefined1 **)(lVar2 + 0x268));
    if (lVar4 != 0) {
      lVar5 = lVar2 + 0x210;
      uVar13 = 5;
LAB_1435a00f6:
      lVar5 = FUN_14360a670(lVar4,uVar13,uVar8,lVar5,uVar3,0,param_4);
    }
  }
  else {
    if (iVar15 != 2) {
      lVar4 = *(longlong *)(lVar16 * 8 + lVar4);
      lVar9 = *(longlong *)(*(longlong *)(lVar4 + 8) + 8);
      if ((lVar9 == 0) ||
         (lVar6 = 0xb8,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x98) + 0x230) + 0xd8) != lVar9)) {
        lVar6 = 0xa8;
      }
      if ((lVar9 == 0) ||
         (lVar7 = lVar5,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x98) + 0x230) + 0xd8) != lVar9)) {
        lVar7 = FUN_1435d19c0(lVar2,local_res18 & 0xffffffff);
      }
      uVar8 = FUN_14359c2e0(param_1);
      lVar9 = FUN_1435ba1a0(*(undefined1 **)(lVar2 + 0x268),0x78,**(undefined1 **)(lVar2 + 0x268));
      if (lVar9 != 0) {
        lVar5 = FUN_14360a670(lVar9,3,lVar4,lVar2 + lVar6 + 0x148,uVar8,lVar7,param_4);
      }
      *(undefined8 **)(lVar16 * 8 + *(longlong *)(lVar2 + 0x90)) = (undefined8 *)(lVar5 + 0x58);
      plVar14 = *(longlong **)(lVar5 + 0x58);
      goto LAB_1435a0307;
    }
    uVar8 = *(undefined8 *)(lVar16 * 8 + lVar4);
    uVar3 = FUN_14359c2e0(param_1);
    lVar4 = FUN_1435ba1a0(*(undefined1 **)(lVar2 + 0x268),0x78,**(undefined1 **)(lVar2 + 0x268));
    if (lVar4 != 0) {
      lVar5 = lVar2 + 0x200;
      uVar13 = 4;
      goto LAB_1435a00f6;
    }
  }
  *(undefined8 **)(lVar16 * 8 + *(longlong *)(lVar2 + 0x90)) = (undefined8 *)(lVar5 + 0x58);
  plVar14 = *(longlong **)(lVar5 + 0x58);
LAB_1435a0307:
  plVar12 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar14 = *plVar12;
  plVar14[1] = (longlong)plVar12;
  *(longlong **)(*plVar12 + 8) = plVar14;
  *plVar12 = (longlong)plVar14;
  *param_2 = local_res18;
  return 1;
}



// FUNCTION 1435a0360 FUN_1435a0360 body=3808 status=ok
// SIG undefined FUN_1435a0360(void)

undefined1 *
FUN_1435a0360(longlong param_1,undefined1 *param_2,undefined4 param_3,ulonglong *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  char *pcVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  undefined8 uVar23;
  ulonglong local_res8;
  undefined4 local_res18 [4];
  ulonglong in_stack_fffffffffffffdc8;
  undefined8 in_stack_fffffffffffffdd0;
  ulonglong local_218;
  uint local_210 [2];
  int *local_208;
  ulonglong uStack_200;
  ulonglong local_1f8;
  longlong *local_1f0;
  undefined8 *local_1e8;
  ulonglong local_1e0;
  longlong local_1d8;
  int local_1d0;
  uint local_1cc;
  undefined8 local_1c8;
  longlong *local_1c0;
  uint local_1b8 [2];
  int *local_1b0;
  undefined8 *local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  undefined1 local_188 [16];
  int local_178;
  undefined8 local_168;
  longlong local_108;
  uint local_100 [12];
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  int local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90 [6];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffdd0 >> 0x20);
  lVar19 = *(longlong *)(param_1 + 0x50);
  lVar2 = *(longlong *)(lVar19 + 0x48);
  local_1c0 = (longlong *)(lVar19 + 0x148);
  lVar20 = lVar19 + 0x70;
  local_res18[0] = param_3;
  local_1d8 = lVar19;
  switch(param_3) {
  case 4:
  case 0x66:
    local_res8 = *param_4;
    uVar10 = FUN_14358f710(lVar2,&local_res8);
    FUN_1435d44e0(&local_b8,
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18),lVar20
                  ,uVar10);
    cVar7 = FUN_14359e490(param_1,param_3,&local_b8,uVar10);
    plVar14 = &local_98;
    goto LAB_1435a06c4;
  case 5:
  case 0x61:
  case 0x68:
    local_res8 = *param_4;
    uVar8 = FUN_14358f710(lVar2,&local_res8);
    local_98 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18);
    local_b8 = *(undefined8 *)(local_98 + 0x28);
    *(int *)(lVar19 + 0x80) = *(int *)(lVar19 + 0x80) + -1;
    local_a0 = *(undefined8 *)
                (*(longlong *)(lVar19 + 0xb0) + (ulonglong)*(uint *)(lVar19 + 0x80) * 8);
    local_a8 = 1;
    local_b0 = lVar20;
    FUN_1435ae740(local_90,local_98,
                  (ulonglong)uVar8 * 0x10 + *(longlong *)(*(longlong *)(local_98 + 0xa0) + 0x148));
    local_60 = 0;
    local_58 = 0;
    iVar9 = FUN_1435d3ac0(&local_b8,local_90,&local_60,&local_58);
    *(int *)(lVar19 + 0x80) = *(int *)(lVar19 + 0x80) + -1;
    local_a8 = local_a8 + iVar9 + 1;
    local_50 = *(undefined8 *)
                (*(longlong *)(lVar19 + 0xb0) + (ulonglong)*(uint *)(lVar19 + 0x80) * 8);
    cVar7 = FUN_14359e9d0(param_1,param_3,&local_b8,uVar8);
    plVar14 = local_90;
LAB_1435a06c4:
    if (cVar7 != '\0') {
      *param_4 = local_res8;
      *param_2 = 1;
      FUN_1434e6250(plVar14);
      return param_2;
    }
    FUN_1434e6250(plVar14);
    break;
  case 0x45:
  case 0x46:
  case 0x4c:
  case 0x4e:
  case 0x4f:
    local_res8 = *param_4;
    uVar8 = FUN_14358f710(lVar2,&local_res8);
    uVar10 = FUN_14358f710(lVar2,&local_res8);
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18);
    FUN_1435d3d90(local_188,*(undefined8 *)(lVar2 + 0x28),lVar20,uVar10);
    local_108 = lVar2;
    FUN_1435ae740(local_100,lVar2,
                  (ulonglong)uVar8 * 0x10 + *(longlong *)(*(longlong *)(lVar2 + 0xa0) + 0x148));
    local_d0 = 0;
    local_c8 = 0;
    iVar9 = FUN_1435d3ac0(local_188,local_100,&local_d0,&local_c8);
    *(int *)(lVar19 + 0x80) = *(int *)(lVar19 + 0x80) + -1;
    local_178 = local_178 + iVar9 + 1;
    local_c0 = *(longlong **)
                (*(longlong *)(lVar19 + 0xb0) + (ulonglong)*(uint *)(lVar19 + 0x80) * 8);
    cVar7 = FUN_14359de80(param_1,local_res18[0],local_188,uVar8);
    if (cVar7 != '\0') {
      *param_4 = local_res8;
      *param_2 = 1;
      FUN_1434e6250(local_100);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_168);
      return param_2;
    }
    FUN_1434e6250(local_100);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_168);
    break;
  case 0x4a:
    local_218 = *param_4;
    uVar8 = FUN_14358f710(lVar2,&local_218);
    uVar10 = (undefined4)(in_stack_fffffffffffffdc8 >> 0x20);
    local_1cc = uVar8;
    local_1d0 = FUN_14358f710(lVar2,&local_218);
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18);
    FUN_1435d3d90(local_188,*(undefined8 *)(lVar2 + 0x28),lVar20,local_1d0);
    local_108 = lVar2;
    FUN_1435ae740(local_100,lVar2,
                  (ulonglong)uVar8 * 0x10 + *(longlong *)(*(longlong *)(lVar2 + 0xa0) + 0x148));
    puVar21 = (undefined8 *)0x0;
    local_d0 = 0;
    local_c8 = 0;
    iVar9 = FUN_1435d3ac0(local_188,local_100,&local_d0,&local_c8);
    *(int *)(lVar19 + 0x80) = *(int *)(lVar19 + 0x80) + -1;
    local_178 = local_178 + iVar9 + 1;
    local_1f0 = *(longlong **)
                 (*(longlong *)(lVar19 + 0xb0) + (ulonglong)*(uint *)(lVar19 + 0x80) * 8);
    local_c0 = local_1f0;
    if ((((byte)local_100[0] & 3) != 1) && ((local_100[0] >> 2 & 1) == 0)) {
      local_1e0 = *(ulonglong *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28
                   );
      local_1d8 = *(longlong *)(local_1f0[1] + 8);
      local_1c8 = 0xffffffffffffffff;
      FUN_1435944b0(local_1b8,local_1f0[1]);
      uVar8 = local_1b8[0] & 0x1f;
      puVar17 = puVar21;
      if (uVar8 == 0xc) {
        puVar17 = local_1a8;
      }
      local_1e8 = puVar17;
      local_198 = FUN_1435af580(local_1e0,local_1d8,local_100,&local_1c8,puVar17);
      uVar10 = (undefined4)((ulonglong)puVar17 >> 0x20);
      if (local_198 != 0) {
        local_res8 = local_res8 & 0xffffffffffffff00;
        plVar14 = local_1f0;
        if (local_1e8 != (undefined8 *)0x0) {
          local_210[0] = 0;
          local_208 = (int *)0x0;
          pcVar16 = (char *)FUN_1435abe90(local_198,local_res18,local_210);
          plVar14 = local_1f0;
          if (*pcVar16 == '\0') {
            uVar12 = local_210[0] & 0x1f;
            *param_2 = 0;
            if (9 < uVar12) {
              if ((local_210[0] >> 9 & 1) == 0) {
                if (uVar12 == 10) {
                  piVar1 = (int *)(uStack_200 + 0x18);
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    FUN_14335f920();
                  }
                }
                else if ((uVar12 == 0xb) || (uVar12 == 0xc)) {
                  uVar15 = uStack_200;
                  if ((uStack_200 & 1) == 0) {
LAB_1435a0c6e:
                    if ((uVar15 != 0) && ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0)) {
                      *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
                      FUN_1434ef880();
                    }
                  }
                  else {
                    uStack_200 = uStack_200 - 1;
                  }
                }
                else if (uVar12 - 0xd < 2) {
                  uVar15 = local_1f8;
                  if ((local_1f8 & 1) == 0) goto LAB_1435a0c6e;
                  local_1f8 = local_1f8 - 1;
                }
              }
              else {
                *local_208 = *local_208 + -1;
                if (*local_208 == 0) {
                  (**(code **)(*DAT_146b62f28 + 0x60))();
                }
                local_210[0] = local_210[0] & 0xfffffde0;
                local_208 = (int *)0x0;
                uStack_200 = 0;
                local_1f8 = 0;
              }
            }
            if (9 < uVar8) {
              if ((local_1b8[0] >> 9 & 1) == 0) {
                if (uVar8 == 10) {
                  piVar1 = (int *)(local_1a8 + 3);
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    FUN_14335f920(local_1a8);
                  }
                }
                else if ((uVar8 == 0xb) || (uVar8 == 0xc)) {
                  if ((((ulonglong)local_1a8 & 1) == 0) &&
                     ((local_1a8 != (undefined8 *)0x0 &&
                      ((*(uint *)(local_1a8 + 1) & 0x3fffff) != 0)))) {
                    *(uint *)(local_1a8 + 1) = *(uint *)(local_1a8 + 1) - 1;
                    FUN_1434ef880(local_1a8);
                  }
                }
                else if ((((uVar8 - 0xd < 2) && ((local_1a0 & 1) == 0)) && (local_1a0 != 0)) &&
                        ((*(uint *)(local_1a0 + 8) & 0x3fffff) != 0)) {
                  *(uint *)(local_1a0 + 8) = *(uint *)(local_1a0 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                *local_1b0 = *local_1b0 + -1;
                if (*local_1b0 == 0) {
                  (**(code **)(*DAT_146b62f28 + 0x60))();
                }
              }
            }
            goto LAB_1435a0d31;
          }
          if ((((((byte)local_210[0] & 0x1f) == 0xc) && (uStack_200 != 0)) &&
              (((byte)*(undefined4 *)(*local_1f0 + 0x10) & 0x1f) != 1)) &&
             (((*(byte *)(*(longlong *)(uStack_200 + 0x28) + 0x88) >> 5 & 1) != 0 ||
              (*(int *)(*(longlong *)(uStack_200 + 0x28) + 0x90) == 0x17)))) {
            local_1e8 = (undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x260);
            puVar3 = *(undefined1 **)(*(longlong *)(param_1 + 0x50) + 0x268);
            puVar17 = (undefined8 *)FUN_1435ba1a0(puVar3,0x38,*puVar3);
            if (puVar17 != (undefined8 *)0x0) {
              uVar23 = FUN_1435d0c50(local_1e8[2],local_210);
              *puVar17 = 0xffffffffffffffff;
              puVar17[1] = 0xffffffffffffffff;
              *(undefined4 *)(puVar17 + 2) = 2;
              puVar17[4] = uVar23;
              puVar21 = puVar17 + 5;
              puVar17[3] = puVar17;
              *puVar21 = puVar21;
              puVar17[6] = puVar21;
              puVar21 = puVar17;
            }
            pcVar16 = (char *)FUN_1435949d0(local_res18,*plVar14,puVar21);
            cVar7 = (char)local_res8;
            if (*pcVar16 != '\0') {
              cVar7 = '\x01';
            }
          }
          else {
            cVar7 = (char)local_res8;
          }
          uVar8 = local_210[0] & 0x1f;
          if (9 < uVar8) {
            if ((local_210[0] >> 9 & 1) == 0) {
              if (uVar8 == 10) {
                piVar1 = (int *)(uStack_200 + 0x18);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_14335f920(uStack_200);
                }
              }
              else if ((uVar8 == 0xb) || (uVar8 == 0xc)) {
                if (((uStack_200 & 1) == 0) &&
                   ((uStack_200 != 0 && ((*(uint *)(uStack_200 + 8) & 0x3fffff) != 0)))) {
                  *(uint *)(uStack_200 + 8) = *(uint *)(uStack_200 + 8) - 1;
                  FUN_1434ef880(uStack_200);
                }
              }
              else if ((((uVar8 - 0xd < 2) && ((local_1f8 & 1) == 0)) && (local_1f8 != 0)) &&
                      ((*(uint *)(local_1f8 + 8) & 0x3fffff) != 0)) {
                *(uint *)(local_1f8 + 8) = *(uint *)(local_1f8 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *local_208 = *local_208 + -1;
              if (*local_208 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))();
              }
            }
          }
          if (cVar7 == '\0') goto LAB_1435a0f07;
LAB_1435a108f:
          uVar23 = FUN_1435d0350(local_1c0,local_1d8,local_198);
          pcVar16 = (char *)FUN_14359fd90(param_1,local_res18,uVar23,local_188,local_c0);
          if (*pcVar16 == '\0') {
            *param_2 = 0;
            FUN_1434e64f0(local_1b8);
          }
          else {
            *param_4 = local_218;
            *param_2 = 1;
            FUN_1434e64f0(local_1b8);
          }
          goto LAB_1435a0d31;
        }
LAB_1435a0f07:
        plVar22 = local_1f0;
        if (((byte)*(undefined4 *)(*plVar14 + 0x10) & 0x1f) == 1) {
          if (local_1d0 == 0) {
            FUN_143612170(lVar20,local_c0);
            FUN_14359dab0(param_1,local_1c8);
            FUN_1435d3d90(&local_b8,local_1e0,lVar20,1);
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_98);
            goto LAB_1435a108f;
          }
        }
        else if (local_1f0[1] != 0) {
          uVar23 = *(undefined8 *)(local_1f0[1] + 8);
          lVar20 = (ulonglong)((int)local_1c8 + 1) - 1;
          local_1e0 = (ulonglong)((int)local_1c8 + 1);
          uVar18 = FUN_143610710(uVar23,lVar20);
          plVar14 = local_1c0;
          lVar19 = FUN_1435d0350(local_1c0,uVar23,uVar18);
          if (lVar19 == 0) {
            lVar19 = *(longlong *)(*(longlong *)(*plVar14 + 0x208) + 0xd8);
          }
          if ((*(byte *)(lVar19 + 0x88) >> 5 & 1) != 0) {
            local_1e8 = *(undefined8 **)(param_1 + 0x50);
            plVar14 = local_1e8 + 0x29;
            uVar23 = 0;
            if (plVar22[1] != 0) {
              uVar23 = *(undefined8 *)(plVar22[1] + 8);
              uVar18 = FUN_143610710(uVar23,lVar20);
              lVar20 = FUN_1435d0350(plVar14,uVar23,uVar18);
              if (lVar20 == 0) {
                lVar20 = *(longlong *)(*(longlong *)(*plVar14 + 0x208) + 0xd8);
              }
              uVar23 = FUN_143610830(plVar14,lVar20,0);
            }
            uVar18 = FUN_14359c2e0(param_1);
            lVar19 = FUN_1435986d0(local_1e8 + 0x4c,5,plVar22,uVar23,0,local_1e0,uVar18);
            lVar20 = *plVar22;
            puVar21 = *(undefined8 **)(lVar19 + 0x58);
            *puVar21 = **(undefined8 **)(lVar20 + 8);
            puVar21[1] = *(undefined8 *)(lVar20 + 8);
            **(longlong **)(lVar20 + 8) = (longlong)puVar21;
            *(undefined8 **)(lVar20 + 8) = puVar21;
            goto LAB_1435a108f;
          }
        }
      }
      FUN_1434e64f0(local_1b8);
    }
    uVar23 = FUN_1435d0db0(local_1c0,*(undefined8 *)(*(longlong *)(*local_1c0 + 0x208) + 0xd8),2);
    FUN_143599ce0(param_1,0,local_188,uVar23,CONCAT44(uVar10,local_1cc));
    *param_4 = local_218;
    *param_2 = 1;
LAB_1435a0d31:
    FUN_1434e6250(local_100);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_168);
    return param_2;
  case 0x5d:
    local_218 = *param_4;
    uVar11 = FUN_14358f710(lVar2,&local_218);
    cVar7 = *(char *)(local_218 + lVar2);
    local_res8 = local_218 + 1;
    local_res18[0] = FUN_1435d1c20(local_1d8);
    if (cVar7 != 'f') {
      pcVar16 = (char *)FUN_14359f070(param_1,local_res18,param_3,uVar11,
                                      in_stack_fffffffffffffdc8 & 0xffffffffffffff00,
                                      CONCAT44(uVar10,local_res18[0]));
      if (*pcVar16 != '\0') {
        *param_4 = local_218;
        *param_2 = 1;
        return param_2;
      }
      break;
    }
    FUN_14358f710(lVar2,&local_res8);
    uVar23 = CONCAT44(uVar10,local_res18[0]);
    goto LAB_1435a086f;
  case 0x5e:
    local_res8 = *param_4;
    uVar11 = FUN_14358f710(lVar2,&local_res8);
    uVar23 = CONCAT44(uVar10,2);
    uVar18 = 0;
    goto LAB_1435a0874;
  case 0x5f:
    local_218 = *param_4;
    uVar10 = FUN_14358f710(lVar2,&local_218);
    local_res8 = local_218 + 1;
    if (*(char *)(local_218 + lVar2) == 'f') {
      FUN_14358f710(lVar2,&local_res8);
      pcVar16 = (char *)FUN_14359ee10(param_1,local_res18,param_3,uVar10,1);
      if (*pcVar16 != '\0') {
        *param_4 = local_res8;
        *param_2 = 1;
        return param_2;
      }
    }
    else {
      pcVar16 = (char *)FUN_14359ee10(param_1,local_res18,param_3,uVar10,
                                      in_stack_fffffffffffffdc8 & 0xffffffffffffff00);
      if (*pcVar16 != '\0') {
        *param_4 = local_218;
        *param_2 = 1;
        return param_2;
      }
    }
    break;
  case 0x60:
    local_res8 = *param_4;
    uVar11 = FUN_14358f710(lVar2,&local_res8);
    uVar23 = CONCAT44(uVar10,2);
LAB_1435a086f:
    uVar18 = 1;
LAB_1435a0874:
    pcVar16 = (char *)FUN_14359f070(param_1,local_res18,param_3,uVar11,uVar18,uVar23);
    if (*pcVar16 != '\0') {
      *param_4 = local_res8;
      *param_2 = 1;
      return param_2;
    }
    break;
  case 0x62:
    local_res8 = *param_4;
    uVar10 = FUN_14358f710(lVar2,&local_res8);
    uVar6 = FUN_14359ff70(param_1,param_4,local_res8,uVar10);
    *param_2 = uVar6;
    return param_2;
  case 100:
    uVar15 = *param_4;
    local_res8 = uVar15 + 1;
    if (*(char *)(uVar15 + lVar2) == 'l') {
      FUN_143612170(lVar20,lVar19 + 0x2d0);
      uVar10 = FUN_14358f710(lVar2,&local_res8);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x80);
      *piVar1 = *piVar1 + -1;
      FUN_1435a5220(param_1,uVar10);
      *param_4 = local_res8;
      *param_2 = 1;
      return param_2;
    }
    if ((*(char *)(uVar15 + lVar2) == '+') &&
       (pcVar16 = (char *)(local_res8 + lVar2), local_res8 = uVar15 + 2, *pcVar16 == 'm')) {
      uVar10 = FUN_14358f710(lVar2,&local_res8);
      uVar23 = *(undefined8 *)
                (*(longlong *)(lVar19 + 0xb0) + (ulonglong)(*(int *)(lVar19 + 0x80) - 1) * 8);
      lVar19 = *(longlong *)(param_1 + 0x50);
      *(int *)(lVar19 + 0x80) = *(int *)(lVar19 + 0x80) + -1;
      uVar18 = *(undefined8 *)
                (*(longlong *)(lVar19 + 0xb0) + (ulonglong)*(uint *)(lVar19 + 0x80) * 8);
      uVar13 = FUN_14359c2e0(param_1);
      plVar14 = (longlong *)
                FUN_143598310(*(longlong *)(param_1 + 0x50) + 0x260,1,uVar18,uVar10,uVar13);
      plVar22 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
      *plVar14 = *plVar22;
      plVar14[1] = (longlong)plVar22;
      *(longlong **)(*plVar22 + 8) = plVar14;
      *plVar22 = (longlong)plVar14;
      FUN_143612170(lVar20,uVar23);
      FUN_143612170(*(longlong *)(param_1 + 0x50) + 0x70,*(longlong *)(param_1 + 0x50) + 0x2d0);
      lVar20 = *(longlong *)(param_1 + 0x50);
      *param_2 = 1;
      lVar19 = *(longlong *)(lVar20 + 0xb0);
      uVar15 = (ulonglong)(*(int *)(lVar20 + 0x80) - 1);
      uVar23 = *(undefined8 *)(lVar19 + uVar15 * 8);
      *(undefined8 *)(lVar19 + uVar15 * 8) =
           *(undefined8 *)(lVar19 + (ulonglong)(*(int *)(lVar20 + 0x80) - 2) * 8);
      *(undefined8 *)(*(longlong *)(lVar20 + 0xb0) + (ulonglong)(*(int *)(lVar20 + 0x80) - 2) * 8) =
           uVar23;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x80);
      *piVar1 = *piVar1 + -2;
      *param_4 = local_res8;
      return param_2;
    }
    break;
  case 0xb3:
    uVar8 = *(int *)(lVar19 + 0x80) - 1;
    lVar20 = *(longlong *)(*(longlong *)(lVar19 + 0xb0) + (ulonglong)uVar8 * 8);
    lVar2 = *(longlong *)(*(undefined4 **)(lVar20 + 8) + 2);
    if (((*(byte *)(lVar2 + 0x88) >> 5 & 1) != 0) &&
       ((bVar5 = (byte)**(undefined4 **)(lVar20 + 8), (bVar5 & 0x78) < 0x50 || ((bVar5 & 6) == 2))))
    {
      lVar4 = *(longlong *)
               (*(longlong *)(lVar19 + 0xb0) + (ulonglong)(*(int *)(lVar19 + 0x80) - 2) * 8);
      bVar5 = (byte)**(undefined4 **)(lVar4 + 8);
      if ((0x4f < (bVar5 & 0x78)) && ((bVar5 & 6) != 2)) {
        *(uint *)(lVar19 + 0x80) = uVar8;
        FUN_1435a9750(param_1,lVar20);
        FUN_14359b470(param_1,local_res18,4,lVar2,in_stack_fffffffffffffdc8 & 0xffffffff00000000);
        *param_2 = 1;
        return param_2;
      }
      FUN_1435944b0(local_1b8);
      uVar6 = FUN_1435c8c20(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28),
                            local_1b8,lVar2);
      *(int *)(lVar19 + 0x80) = *(int *)(lVar19 + 0x80) + -1;
      FUN_1435a9750(param_1,lVar20);
      *(int *)(lVar19 + 0x80) = *(int *)(lVar19 + 0x80) + -1;
      FUN_1435a9750(param_1,lVar4);
      FUN_14359a290(param_1,uVar6);
      *param_2 = 1;
      FUN_1434e64f0(local_1b8);
      return param_2;
    }
    break;
  case 0xd0:
    uVar23 = 0;
    goto LAB_1435a058f;
  case 0xd1:
    uVar23 = 1;
    goto LAB_1435a058f;
  case 0xd2:
    uVar23 = 2;
    goto LAB_1435a058f;
  case 0xd3:
    uVar23 = 3;
LAB_1435a058f:
    uVar6 = FUN_14359ff70(param_1,param_4,*param_4,uVar23);
    *param_2 = uVar6;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435a1360 FUN_1435a1360 body=509 status=ok
// SIG undefined FUN_1435a1360(void)

undefined1 * FUN_1435a1360(longlong param_1,undefined1 *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  uint uVar9;
  char *pcVar10;
  longlong *plVar11;
  longlong *plVar12;
  char cVar13;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  ulonglong local_res20;
  
  local_res20 = *(ulonglong *)(param_1 + 0x40);
  uVar9 = 2;
  lVar4 = *(longlong *)(param_1 + 0x50);
  uVar5 = *(ulonglong *)(param_1 + 0x48);
  lVar6 = *(longlong *)(param_1 + 0x58);
  lVar7 = *(longlong *)(lVar4 + 0x48);
  if ((*(int *)(lVar6 + 0x18) == 2) && (*(longlong *)(lVar6 + 200) == lVar6 + 0x50)) {
    *param_2 = 1;
    return param_2;
  }
  pcVar10 = (char *)FUN_1435a1db0(param_1,local_res8);
  if (*pcVar10 == '\0') {
    *param_2 = 0;
    return param_2;
  }
  cVar13 = '\x01';
  lVar6 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  do {
    if (uVar5 <= local_res20) {
      if (cVar13 != '\0') {
        if (((0xf < uVar9 - 0xc) && (uVar9 != 3)) && (1 < uVar9 - 0x47)) {
          if (*(char *)(lVar6 + 0xb8) != '\0') goto LAB_1435a1495;
          if (*(int *)(param_1 + 0x1c) == 1) {
            lVar4 = *(longlong *)(*(longlong *)(**(longlong **)(param_1 + 0x30) + 0x58) + 0x38);
            iVar2 = *(int *)(lVar4 + 0x18);
            iVar3 = *(int *)(*(longlong *)(lVar4 + 0x58) + 0x30);
            plVar11 = (longlong *)FUN_14359c100(param_1);
            plVar12 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
            *plVar11 = *plVar12;
            plVar11[1] = (longlong)plVar12;
            *(longlong **)(*plVar12 + 8) = plVar11;
            *plVar12 = (longlong)plVar11;
            if ((((*(byte *)(lVar4 + 0x10) & 1) != 0) &&
                ((iVar3 == iVar2) !=
                 (*(int *)(*(longlong *)(lVar4 + 0x58) + 0x30) == *(int *)(lVar4 + 0x18)))) &&
               (pcVar10 = (char *)FUN_1435dab90(local_res8,*(longlong *)(lVar4 + 0x58),
                                                *(longlong *)(param_1 + 0x50) + 0x148),
               *pcVar10 == '\0')) goto LAB_1435a1495;
          }
        }
        if (*(char *)(lVar6 + 0xb8) == '\0') {
          uVar8 = 1;
          goto LAB_1435a1478;
        }
      }
      break;
    }
    if (*(char *)(lVar6 + 0xb8) != '\0') {
LAB_1435a1495:
      *param_2 = 0;
      return param_2;
    }
    if (local_res20 < *(ulonglong *)(lVar4 + 0x40)) {
      *(ulonglong *)(lVar4 + 0x28) = local_res20;
    }
    pbVar1 = (byte *)(local_res20 + lVar7);
    local_res20 = local_res20 + 1;
    uVar9 = (uint)*pbVar1;
    pcVar10 = (char *)FUN_1435a0360(param_1,local_res8,uVar9,&local_res20);
    if (*pcVar10 == '\0') {
      if (*(char *)(lVar6 + 0xb8) != '\0') goto LAB_1435a1495;
      pcVar10 = (char *)FUN_1435a7280(param_1,local_res18,uVar9,&local_res20);
      cVar13 = *pcVar10;
    }
  } while (cVar13 != '\0');
  uVar8 = 0;
LAB_1435a1478:
  *param_2 = uVar8;
  return param_2;
}



// FUNCTION 1435a1570 FUN_1435a1570 body=130 status=ok
// SIG undefined FUN_1435a1570(void)

void FUN_1435a1570(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = *(longlong **)(param_2 + 0x18);
  while (plVar4 = plVar3, plVar4 != (longlong *)(param_2 + 0x10)) {
    plVar1 = plVar4 + 1;
    plVar3 = (longlong *)plVar4[1];
    if (plVar4[3] != 0) {
      *(longlong **)(*plVar4 + 8) = plVar3;
      *(longlong *)*plVar1 = *plVar4;
      *plVar4 = -1;
      *plVar1 = -1;
      plVar4[3] = 0;
    }
    plVar4[3] = param_3;
    if (param_3 != 0) {
      plVar2 = (longlong *)(param_3 + 0x10);
      *plVar4 = *(longlong *)(param_3 + 0x10);
      *plVar1 = (longlong)plVar2;
      *(longlong **)(*plVar2 + 8) = plVar4;
      *plVar2 = (longlong)plVar4;
    }
  }
  return;
}



// FUNCTION 1435a1600 FUN_1435a1600 body=109 status=ok
// SIG undefined FUN_1435a1600(void)

undefined1 * FUN_1435a1600(longlong param_1,undefined1 *param_2,int param_3,code *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar2 = *(longlong *)(lVar1 + 200);
  while( true ) {
    if (lVar2 == lVar1 + 0x50) {
      *param_2 = 1;
      return param_2;
    }
    iVar3 = (*param_4)(lVar2);
    if (iVar3 != param_3) break;
    lVar2 = *(longlong *)(lVar2 + 0x78);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435a1680 FUN_1435a1680 body=800 status=ok
// SIG undefined FUN_1435a1680(void)

void FUN_1435a1680(longlong param_1,undefined1 *param_2,uint param_3,longlong *param_4,
                  longlong param_5,code *param_6,undefined1 *param_7,undefined1 *param_8)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 local_res8 [8];
  undefined1 *local_res10;
  uint local_res18;
  longlong *local_res20;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76 [2];
  int local_74;
  int local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  
  uVar12 = 0;
  lVar3 = *(longlong *)(param_1 + 0x58);
  iVar9 = *(int *)(param_1 + 0x18);
  lVar1 = lVar3 + 0x50;
  iVar8 = *(int *)(lVar3 + 0x30);
  if (param_3 != 0) {
    plVar13 = (longlong *)(param_5 + 8);
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    local_74 = iVar8;
    local_70 = iVar9;
    local_58 = lVar3;
    do {
      if (((*(byte *)(param_1 + 0x10) & 1) == 0) || ((longlong *)plVar13[2] != plVar13 + 1)) {
        bVar14 = true;
        local_68 = param_4;
        if ((iVar8 == iVar9) && (param_6 != FUN_140589b80)) {
          lVar10 = *(longlong *)(lVar3 + 200);
          lVar5 = (*param_6)(lVar10,uVar12);
          lVar10 = *(longlong *)(lVar10 + 0x78);
          lVar5 = *(longlong *)(lVar5 + 0x18);
          do {
            if (lVar10 == lVar1) break;
            lVar4 = (*param_6)(lVar10,uVar12);
            lVar10 = *(longlong *)(lVar10 + 0x78);
            bVar14 = lVar5 == *(longlong *)(lVar4 + 0x18);
          } while (lVar5 == *(longlong *)(lVar4 + 0x18));
          if (bVar14) {
            if (((*(byte *)(param_1 + 0x10) & 1) != 0) &&
               (lVar10 = uVar12 * 0x20 + param_5, lVar10 != lVar5)) {
              FUN_1435a1570(param_1,lVar10,lVar5);
              *param_7 = 1;
            }
            if (local_res20 != (longlong *)0x0) {
              *local_68 = lVar5;
            }
            iVar8 = local_74;
            iVar9 = local_70;
            param_4 = local_68;
            for (lVar10 = *(longlong *)(lVar3 + 200); local_74 = iVar8, local_70 = iVar9,
                lVar10 != lVar1; lVar10 = *(longlong *)(lVar10 + 0x78)) {
              local_68 = param_4;
              plVar6 = (longlong *)(*param_6)(lVar10,uVar12);
              if (plVar6[3] != 0) {
                *(longlong *)(*plVar6 + 8) = plVar6[1];
                *(longlong *)plVar6[1] = *plVar6;
                *plVar6 = -1;
                plVar6[1] = -1;
                plVar6[3] = 0;
              }
              iVar8 = local_74;
              iVar9 = local_70;
              param_4 = local_68;
            }
            goto LAB_1435a175e;
          }
        }
        param_4 = local_68;
        pcVar7 = (char *)FUN_1435a90e0(param_1,&local_78,&local_60,uVar12,param_6,0);
        lVar10 = local_60;
        if ((*pcVar7 == '\0') ||
           ((pcVar7 = (char *)FUN_1435a2550(param_1,&local_77,uVar12,param_6,local_60),
            *pcVar7 == '\0' &&
            (pcVar7 = (char *)FUN_1435a90e0(param_1,local_76,&local_60,uVar12,param_6,1),
            lVar10 = local_60, *pcVar7 == '\0')))) {
          *local_res10 = 0;
          return;
        }
        iVar9 = local_70;
        iVar8 = local_74;
        if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
          if (param_5 != 0) {
            plVar6 = plVar13 + -1;
            if (plVar6 != (longlong *)0x0) {
              *plVar6 = local_58;
              plVar2 = plVar13 + 1;
              *plVar13 = lVar10;
              *plVar2 = (longlong)plVar2;
              plVar13[2] = (longlong)plVar2;
            }
            if (local_res20 != (longlong *)0x0) {
              *param_4 = (longlong)plVar6;
            }
          }
        }
        else if (*plVar13 != lVar10) {
          *plVar13 = lVar10;
          *param_7 = 1;
          *param_8 = 1;
        }
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x50);
        for (lVar10 = *(longlong *)(lVar3 + 200); lVar10 != lVar1;
            lVar10 = *(longlong *)(lVar10 + 0x78)) {
          local_68 = param_4;
          lVar4 = (*param_6)(lVar10,uVar12);
          if (*(longlong *)(lVar4 + 0x18) != 0) {
            FUN_143594aa0(local_res8,lVar5 + 0x260,*(longlong *)(lVar4 + 0x18),1);
          }
          param_4 = local_68;
          iVar9 = local_70;
          iVar8 = local_74;
        }
      }
LAB_1435a175e:
      param_4 = param_4 + 1;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      plVar13 = plVar13 + 4;
      param_2 = local_res10;
    } while (uVar11 < local_res18);
  }
  *param_2 = 1;
  return;
}



// FUNCTION 1435a19b0 FUN_1435a19b0 body=531 status=ok
// SIG undefined FUN_1435a19b0(void)

undefined1 * FUN_1435a19b0(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar2 = *(longlong *)(param_1 + 0x50);
  lVar3 = *(longlong *)(lVar1 + 200);
  pcVar5 = (char *)FUN_1435a1680(param_1,local_res20,1,lVar2 + 0x88,lVar1 + 0x110,FUN_140589b80,
                                 local_res18,local_res8);
  if (*pcVar5 != '\0') {
    for (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 200);
        lVar4 != *(longlong *)(param_1 + 0x58) + 0x50; lVar4 = *(longlong *)(lVar4 + 0x78)) {
      if (*(int *)(lVar4 + 0x18) != *(int *)(lVar3 + 0x18)) goto LAB_1435a1a16;
    }
    pcVar5 = (char *)FUN_1435a1680(param_1,local_res20,*(int *)(lVar3 + 0x18),
                                   *(undefined8 *)(lVar2 + 0x90),*(undefined8 *)(lVar1 + 0xf0),
                                   &LAB_143610680,local_res18,local_res8);
    if (*pcVar5 != '\0') {
      if ((*(uint *)(param_1 + 0x14) >> 2 & 1) != 0) {
        if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
          FUN_1435a9290(param_1);
        }
LAB_1435a1bb2:
        *param_2 = 1;
        return param_2;
      }
      for (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 200);
          lVar4 != *(longlong *)(param_1 + 0x58) + 0x50; lVar4 = *(longlong *)(lVar4 + 0x78)) {
        if (*(int *)(lVar4 + 0x1c) != *(int *)(lVar3 + 0x1c)) goto LAB_1435a1a16;
      }
      pcVar5 = (char *)FUN_1435a1680(param_1,local_res20,*(int *)(lVar3 + 0x1c),
                                     *(undefined8 *)(lVar2 + 0xb0),*(undefined8 *)(lVar1 + 0xf8),
                                     &LAB_1436105e0,local_res18,local_res8);
      if (*pcVar5 != '\0') {
        for (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 200);
            lVar4 != *(longlong *)(param_1 + 0x58) + 0x50; lVar4 = *(longlong *)(lVar4 + 0x78)) {
          if (*(int *)(lVar4 + 0x20) != *(int *)(lVar3 + 0x20)) goto LAB_1435a1a16;
        }
        pcVar5 = (char *)FUN_1435a1680(param_1,local_res20,*(int *)(lVar3 + 0x20),
                                       *(undefined8 *)(lVar2 + 0xd0),*(undefined8 *)(lVar1 + 0x100),
                                       &LAB_143610700,local_res18,local_res8);
        if (*pcVar5 != '\0') goto LAB_1435a1bb2;
      }
    }
  }
LAB_1435a1a16:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435a1bd0 FUN_1435a1bd0 body=464 status=ok
// SIG undefined FUN_1435a1bd0(void)

undefined1 *
FUN_1435a1bd0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar2 = *(longlong *)(lVar1 + 200);
  pcVar4 = (char *)FUN_1435a1680(param_1,local_res8,1,0,lVar1 + 0x110,FUN_140589b80,param_3,param_4)
  ;
  if (*pcVar4 != '\0') {
    for (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 200);
        lVar3 != *(longlong *)(param_1 + 0x58) + 0x50; lVar3 = *(longlong *)(lVar3 + 0x78)) {
      if (*(int *)(lVar3 + 0x18) != *(int *)(lVar2 + 0x18)) goto LAB_1435a1c35;
    }
    pcVar4 = (char *)FUN_1435a1680(param_1,local_res8,*(int *)(lVar2 + 0x18),0,
                                   *(undefined8 *)(lVar1 + 0xf0),&LAB_143610680,param_3,param_4);
    if (*pcVar4 != '\0') {
      if ((*(uint *)(param_1 + 0x14) >> 2 & 1) != 0) {
        if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
          FUN_1435a9290(param_1);
        }
LAB_1435a1d81:
        *param_2 = 1;
        return param_2;
      }
      for (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 200);
          lVar3 != *(longlong *)(param_1 + 0x58) + 0x50; lVar3 = *(longlong *)(lVar3 + 0x78)) {
        if (*(int *)(lVar3 + 0x1c) != *(int *)(lVar2 + 0x1c)) goto LAB_1435a1c35;
      }
      pcVar4 = (char *)FUN_1435a1680(param_1,local_res8,*(int *)(lVar2 + 0x1c),0,
                                     *(undefined8 *)(lVar1 + 0xf8),&LAB_1436105e0,param_3,param_4);
      if (*pcVar4 != '\0') {
        for (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 200);
            lVar3 != *(longlong *)(param_1 + 0x58) + 0x50; lVar3 = *(longlong *)(lVar3 + 0x78)) {
          if (*(int *)(lVar3 + 0x20) != *(int *)(lVar2 + 0x20)) goto LAB_1435a1c35;
        }
        pcVar4 = (char *)FUN_1435a1680(param_1,local_res8,*(int *)(lVar2 + 0x20),0,
                                       *(undefined8 *)(lVar1 + 0x100),&LAB_143610700,param_3,param_4
                                      );
        if (*pcVar4 != '\0') goto LAB_1435a1d81;
      }
    }
  }
LAB_1435a1c35:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435a1db0 FUN_1435a1db0 body=322 status=ok
// SIG undefined FUN_1435a1db0(void)

undefined1 * FUN_1435a1db0(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    *param_2 = 1;
    return param_2;
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(lVar2 + 0x278) == lVar1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    *param_2 = 1;
    return param_2;
  }
  *(undefined8 *)(lVar2 + 0x7c) = 0;
  *(undefined4 *)(lVar2 + 0x84) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  lVar1 = *(longlong *)(lVar1 + 200);
  uVar4 = *(uint *)(lVar1 + 0x18);
  if (*(ulonglong *)(lVar2 + 0x98) < (ulonglong)uVar4) {
    FUN_1433ab800(lVar2 + 0x90,(ulonglong)uVar4);
  }
  *(uint *)(lVar2 + 0x7c) = uVar4;
  if (uVar4 < *(uint *)(lVar2 + 0x70)) {
    uVar4 = *(uint *)(lVar2 + 0x70);
  }
  *(uint *)(lVar2 + 0x70) = uVar4;
  if ((*(uint *)(param_1 + 0x14) >> 2 & 1) == 0) {
    uVar4 = *(uint *)(lVar1 + 0x1c);
    if (*(ulonglong *)(lVar2 + 0xb8) < (ulonglong)uVar4) {
      FUN_1433ab800(lVar2 + 0xb0,(ulonglong)uVar4);
    }
    *(uint *)(lVar2 + 0x80) = uVar4;
    if (uVar4 < *(uint *)(lVar2 + 0x74)) {
      uVar4 = *(uint *)(lVar2 + 0x74);
    }
    *(uint *)(lVar2 + 0x74) = uVar4;
    uVar4 = *(uint *)(lVar1 + 0x20);
    if (*(ulonglong *)(lVar2 + 0xd8) < (ulonglong)uVar4) {
      FUN_1433ab800(lVar2 + 0xd0,(ulonglong)uVar4);
    }
    *(uint *)(lVar2 + 0x84) = uVar4;
    if (uVar4 < *(uint *)(lVar2 + 0x78)) {
      uVar4 = *(uint *)(lVar2 + 0x78);
    }
    *(uint *)(lVar2 + 0x78) = uVar4;
  }
  pcVar3 = (char *)FUN_1435a19b0(param_1,local_res8);
  if (*pcVar3 == '\0') {
    *param_2 = 0;
    return param_2;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435a1f00 FUN_1435a1f00 body=139 status=ok
// SIG undefined FUN_1435a1f00(void)

void FUN_1435a1f00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar2 = *(longlong *)(lVar1 + 200);
  if (*(int *)(lVar2 + 0x18) != 0) {
    FUN_1435a23e0(param_1,*(int *)(lVar2 + 0x18),*(undefined8 *)(lVar1 + 0xf0),&LAB_143610680);
  }
  if ((*(uint *)(param_1 + 0x14) >> 2 & 1) == 0) {
    if (*(int *)(lVar2 + 0x1c) != 0) {
      FUN_1435a23e0(param_1,*(int *)(lVar2 + 0x1c),*(undefined8 *)(lVar1 + 0xf8),&LAB_1436105e0);
    }
    if (*(int *)(lVar2 + 0x20) != 0) {
      FUN_1435a23e0(param_1,*(int *)(lVar2 + 0x20),*(undefined8 *)(lVar1 + 0x100),&LAB_143610700);
    }
  }
  return;
}



// FUNCTION 1435a1fa0 FUN_1435a1fa0 body=877 status=ok
// SIG undefined FUN_1435a1fa0(void)

longlong * FUN_1435a1fa0(longlong param_1,longlong *param_2,longlong *param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  undefined8 uVar12;
  uint local_48 [2];
  int *local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x50);
  puVar2 = (uint *)param_2[1];
  uVar12 = 2;
  if (param_3 == (longlong *)0x0) {
    return param_2;
  }
  plVar9 = param_3;
  if ((*(byte *)(*(longlong *)(puVar2 + 2) + 0x88) >> 5 & 1) == 0) {
    plVar9 = (longlong *)param_3[0x1b];
  }
  cVar5 = FUN_1435b5020(plVar9);
  if (cVar5 == '\0') {
    uVar11 = *puVar2 & 0x78;
    bVar6 = (byte)*puVar2;
    if ((((uVar11 < 0x50) || ((bVar6 & 6) == 2)) && ((longlong *)param_2[3] == param_2 + 2)) &&
       (plVar9 = (longlong *)*param_2, ((byte)(int)plVar9[2] & 0x1f) != 1)) {
      lVar3 = param_3[0x1b];
      if (((uVar11 == 8) || ((bVar6 & 6) == 2)) &&
         (cVar5 = FUN_1435d0090(lVar7 + 0x148,lVar3), cVar5 == '\0')) {
        lVar7 = FUN_143597ea0(*(longlong *)(param_1 + 0x50) + 0x260,lVar3);
        plVar8 = *(longlong **)(lVar7 + 0x18);
        *(longlong **)(*plVar9 + 8) = plVar8;
        *(longlong **)plVar9[1] = plVar8;
        *plVar8 = *plVar9;
        plVar8[1] = plVar9[1];
        *plVar9 = -1;
        plVar9[1] = -1;
        return (longlong *)(lVar7 + 0x18);
      }
      FUN_1435944b0(local_48,puVar2);
      cVar5 = (**(code **)(*param_3 + 0x58))(param_3,local_48,local_48);
      if (cVar5 != '\0') {
        plVar8 = (longlong *)FUN_14359b990(param_1,local_48);
        param_2 = (longlong *)*param_2;
        plVar9 = plVar8 + 3;
        *(longlong **)(*param_2 + 8) = plVar8;
        *(longlong **)param_2[1] = plVar8;
        *plVar8 = *param_2;
        plVar8[1] = param_2[1];
        *param_2 = -1;
        param_2[1] = -1;
        uVar11 = local_48[0] & 0x1f;
        if (uVar11 < 10) {
          return plVar9;
        }
        if ((local_48[0] >> 9 & 1) != 0) {
          *local_40 = *local_40 + -1;
          if (*local_40 != 0) {
            return plVar9;
          }
          (**(code **)(*DAT_146b62f28 + 0x60))();
          return plVar9;
        }
        if (uVar11 == 10) {
          piVar1 = (int *)(local_38 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return plVar9;
          }
          FUN_14335f920();
          return plVar9;
        }
        if (((uVar11 != 0xb) && (uVar11 != 0xc)) && (local_38 = local_30, 1 < uVar11 - 0xd)) {
          return plVar9;
        }
        if ((local_38 & 1) != 0) {
          return plVar9;
        }
        if (local_38 == 0) {
          return plVar9;
        }
        if ((*(uint *)(local_38 + 8) & 0x3fffff) == 0) {
          return plVar9;
        }
        *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) - 1;
        FUN_1434ef880();
        return plVar9;
      }
      uVar11 = local_48[0] & 0x1f;
      if (9 < uVar11) {
        if ((local_48[0] >> 9 & 1) == 0) {
          if (uVar11 == 10) {
            piVar1 = (int *)(local_38 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else if ((((uVar11 == 0xb) || (uVar11 == 0xc)) || (local_38 = local_30, uVar11 - 0xd < 2))
                  && ((((local_38 & 1) == 0 && (local_38 != 0)) &&
                      ((*(uint *)(local_38 + 8) & 0x3fffff) != 0)))) {
            *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *local_40 = *local_40 + -1;
          if (*local_40 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
    }
  }
  else {
    if (*(longlong **)(puVar2 + 2) == param_3) {
      return param_2;
    }
    if ((*(byte *)(param_3 + 0x11) >> 2 & 1) == 0) {
      return param_2;
    }
    uVar12 = 3;
  }
  if (((param_4 == 0) || (((byte)*(undefined4 *)(*param_2 + 0x10) & 0x1f) == 1)) ||
     (param_2[3] != param_2[2])) {
    plVar8 = (longlong *)FUN_14359be20(param_1,uVar12,param_2,param_3,param_4);
    plVar10 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
    plVar9 = (longlong *)*plVar8;
    *plVar9 = *plVar10;
    plVar9[1] = (longlong)plVar10;
    *(longlong **)(*plVar10 + 8) = plVar9;
    *plVar10 = (longlong)plVar9;
  }
  else {
    plVar8 = (longlong *)FUN_14359be20(param_1,uVar12,param_2,param_3,0);
    lVar7 = *param_2;
    puVar4 = (undefined8 *)*plVar8;
    *puVar4 = **(undefined8 **)(lVar7 + 8);
    puVar4[1] = *(undefined8 *)(lVar7 + 8);
    **(longlong **)(lVar7 + 8) = (longlong)puVar4;
    *(undefined8 **)(lVar7 + 8) = puVar4;
  }
  return plVar8;
}



// FUNCTION 1435a2320 FUN_1435a2320 body=65 status=ok
// SIG undefined FUN_1435a2320(void)

undefined1 FUN_1435a2320(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x88) >> 5 & 1) == 0) {
      param_2 = *(longlong *)(param_2 + 0xd8);
    }
    cVar1 = FUN_1435b5020(param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1435a2370 FUN_1435a2370 body=106 status=ok
// SIG undefined FUN_1435a2370(void)

undefined8 FUN_1435a2370(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_2 + 8);
  if (((lVar1 == 0) ||
      (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x98) + 0x200) + 0xd8) != lVar1)) &&
     (*(longlong *)(param_1 + 8) != param_2)) {
    if ((((*(byte *)(lVar1 + 0x88) ^ *(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x88)
          ) >> 5 & 1) == 0) && (cVar2 = FUN_1435b5020(), cVar2 != '\0')) {
      return 1;
    }
    return 0;
  }
  return 1;
}



// FUNCTION 1435a23e0 FUN_1435a23e0 body=195 status=ok
// SIG undefined FUN_1435a23e0(void)

void FUN_1435a23e0(longlong param_1,uint param_2,longlong param_3,code *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  uint local_res10;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  uVar5 = 0;
  if (param_2 != 0) {
    param_3 = param_3 + 0x10;
    local_res10 = param_2;
    do {
      if (*(longlong *)(param_3 + 8) != param_3) {
        uVar3 = *(undefined8 *)(param_3 + -8);
        for (lVar2 = *(longlong *)(lVar1 + 200); lVar2 != lVar1 + 0x50;
            lVar2 = *(longlong *)(lVar2 + 0x78)) {
          lVar4 = (*param_4)(lVar2,uVar5);
          if (*(longlong *)(lVar4 + 0x18) != 0) {
            FUN_1435a2650(param_1,local_res8,*(longlong *)(lVar4 + 0x18),uVar3,uVar5,
                          param_4 == (code *)&LAB_1436105e0);
          }
          param_2 = local_res10;
        }
      }
      uVar5 = uVar5 + 1;
      param_3 = param_3 + 0x20;
    } while (uVar5 < param_2);
  }
  return;
}



// FUNCTION 1435a24b0 FUN_1435a24b0 body=153 status=ok
// SIG undefined FUN_1435a24b0(void)

undefined1 * FUN_1435a24b0(undefined1 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_3 + 8);
  if (((lVar1 == 0) ||
      (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x98) + 0x200) + 0xd8) != lVar1)) &&
     (*(longlong *)(param_2 + 8) != param_3)) {
    if (((*(byte *)(lVar1 + 0x88) ^ *(byte *)(*(longlong *)(*(longlong *)(param_2 + 8) + 8) + 0x88))
         >> 5 & 1) == 0) {
      cVar2 = FUN_1435b5020();
      if (cVar2 != '\0') goto LAB_1435a2538;
    }
    if ((*(longlong **)(param_2 + 0x18) == (longlong *)(param_2 + 0x10)) ||
       (*(longlong **)(param_2 + 0x18) != *(longlong **)(param_2 + 0x10))) {
      *param_1 = 0;
      return param_1;
    }
  }
LAB_1435a2538:
  *param_1 = 1;
  return param_1;
}



// FUNCTION 1435a2550 FUN_1435a2550 body=250 status=ok
// SIG undefined FUN_1435a2550(void)

undefined8
FUN_1435a2550(longlong param_1,undefined8 param_2,undefined4 param_3,code *param_4,longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  bVar3 = true;
  lVar6 = *(longlong *)(lVar1 + 200);
  do {
    if (lVar6 == lVar1 + 0x50) break;
    lVar5 = (*param_4)(lVar6,param_3);
    lVar5 = *(longlong *)(lVar5 + 0x18);
    if (lVar5 != 0) {
      lVar2 = *(longlong *)(param_5 + 8);
      if (((lVar2 == 0) ||
          (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x98) + 0x200) + 0xd8) != lVar2)) &&
         (*(longlong *)(lVar5 + 8) != param_5)) {
        if (((*(byte *)(lVar2 + 0x88) ^
             *(byte *)(*(longlong *)(*(longlong *)(lVar5 + 8) + 8) + 0x88)) >> 5 & 1) == 0) {
          cVar4 = FUN_1435b5020(lVar2);
          if (cVar4 != '\0') goto LAB_1435a2619;
        }
        if ((*(longlong **)(lVar5 + 0x18) == (longlong *)(lVar5 + 0x10)) ||
           (*(longlong **)(lVar5 + 0x18) != *(longlong **)(lVar5 + 0x10))) {
          bVar3 = false;
          goto LAB_1435a261b;
        }
      }
LAB_1435a2619:
      bVar3 = true;
    }
LAB_1435a261b:
    lVar6 = *(longlong *)(lVar6 + 0x78);
  } while (bVar3);
  *(bool *)param_2 = bVar3;
  return param_2;
}



// FUNCTION 1435a2650 FUN_1435a2650 body=1796 status=ok
// SIG undefined FUN_1435a2650(void)

undefined1 *
FUN_1435a2650(longlong param_1,undefined1 *param_2,longlong *param_3,longlong param_4,
             undefined4 param_5,char param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar20;
  uint local_48 [2];
  int *local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar12 = *(longlong *)(param_4 + 8);
  lVar19 = *(longlong *)(param_1 + 0x50) + 0x148;
  if ((((lVar12 != 0) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar12 + 0x98) + 0x200) + 0xd8) == lVar12)) ||
      (param_3[1] == param_4)) ||
     ((((*(byte *)(lVar12 + 0x88) ^ *(byte *)(*(longlong *)(param_3[1] + 8) + 0x88)) >> 5 & 1) == 0
      && (cVar9 = FUN_1435b5020(), cVar9 != '\0')))) {
    *param_2 = 1;
    return param_2;
  }
  plVar3 = (longlong *)*param_3;
  puVar4 = (uint *)param_3[1];
  uVar11 = *puVar4;
  uVar18 = uVar11 & 0x78;
  bVar10 = (byte)uVar11;
  if ((uVar18 < 0x50) || ((bVar10 & 6) == 2)) {
    if (((longlong *)param_3[3] != param_3 + 2) &&
       ((longlong *)param_3[3] == (longlong *)param_3[2])) {
      if ((uVar18 == 8) || ((bVar10 & 6) == 2)) {
        uVar15 = *(undefined8 *)(param_4 + 8);
        cVar9 = FUN_1435d0090(lVar19,uVar15);
        if (cVar9 == '\0') {
          lVar12 = FUN_143597ea0(*(longlong *)(param_1 + 0x50) + 0x260,uVar15);
          plVar13 = (longlong *)(lVar12 + 0x18);
          if (((byte)*(undefined4 *)(*param_3 + 0x10) & 0x1f) == 1) {
            uVar15 = *(undefined8 *)(lVar12 + 0x20);
            puVar5 = *(undefined1 **)(*(longlong *)(param_1 + 0x50) + 0x268);
            lVar19 = FUN_1435ba1a0(puVar5,0x78,*puVar5);
            lVar12 = 0;
            if (lVar19 != 0) {
              lVar12 = FUN_14360a670(lVar19,6,plVar13,uVar15,0,0,CONCAT44(uVar20,param_5));
            }
            puVar6 = *(undefined8 **)(lVar12 + 0x58);
            puVar6[1] = plVar3[9];
            *puVar6 = plVar3 + 8;
            *(undefined8 **)plVar3[9] = puVar6;
            plVar3[9] = (longlong)puVar6;
            puVar7 = (undefined8 *)*plVar13;
            puVar7[1] = puVar6;
            *puVar7 = plVar3 + 8;
            *(undefined8 **)plVar3[9] = puVar7;
            plVar3[9] = (longlong)puVar7;
            plVar13 = (longlong *)param_3[3];
            Scaleform::GFx::AS3::TR::Use::Unlink(plVar13);
            plVar3 = (longlong *)(lVar12 + 0x68);
            plVar13[3] = lVar12 + 0x58;
            *plVar13 = *plVar3;
            plVar13[1] = (longlong)plVar3;
            *(longlong **)(*plVar3 + 8) = plVar13;
            *plVar3 = (longlong)plVar13;
          }
          else if ((((byte)(int)plVar3[2] & 0x1f) == 0x10) && ((int)plVar3[3] == 6)) {
            plVar1 = plVar3 + 7;
            plVar17 = (longlong *)*plVar13;
            plVar8 = *(longlong **)plVar3[10];
            *(longlong **)(*plVar8 + 8) = plVar17;
            *(longlong **)plVar8[1] = plVar17;
            *plVar17 = *plVar8;
            plVar17[1] = plVar8[1];
            *plVar8 = -1;
            plVar8[1] = -1;
            Scaleform::GFx::AS3::TR::Use::Unlink(plVar1);
            plVar17 = (longlong *)(lVar12 + 0x28);
            plVar3[10] = (longlong)plVar13;
            *plVar1 = *plVar17;
            plVar3[8] = (longlong)plVar17;
            *(longlong **)(*plVar17 + 8) = plVar1;
            *plVar17 = (longlong)plVar1;
            FUN_1435966d0(plVar3,lVar19);
          }
          else {
            FUN_143594d40(param_3,plVar13);
            plVar13 = (longlong *)*plVar13;
            *(longlong **)(*plVar3 + 8) = plVar13;
            *(longlong **)plVar3[1] = plVar13;
            *plVar13 = *plVar3;
            plVar13[1] = plVar3[1];
            *plVar3 = -1;
            plVar3[1] = -1;
          }
          goto LAB_1435a2834;
        }
      }
      FUN_1435944b0(local_48,puVar4);
      plVar13 = *(longlong **)(param_4 + 8);
      if ((~(*(byte *)(plVar13 + 0x11) >> 5) & 1) == 0) {
        lVar12 = *plVar13;
      }
      else {
        if (plVar13[0x15] == 0) {
          (**(code **)(*plVar13 + 0x50))(plVar13);
        }
        plVar13 = *(longlong **)(plVar13[0x15] + 0x28);
        lVar12 = *plVar13;
      }
      cVar9 = (**(code **)(lVar12 + 0x58))(plVar13,local_48,local_48);
      if (cVar9 != '\0') {
        plVar13 = (longlong *)FUN_14359b990(param_1,local_48);
        if (((byte)*(undefined4 *)(*param_3 + 0x10) & 0x1f) == 1) {
          lVar12 = plVar13[4];
          puVar5 = *(undefined1 **)(*(longlong *)(param_1 + 0x50) + 0x268);
          lVar14 = FUN_1435ba1a0(puVar5,0x78,*puVar5);
          lVar19 = 0;
          if (lVar14 != 0) {
            lVar19 = FUN_14360a670(lVar14,6,plVar13 + 3,lVar12,0,0,CONCAT44(uVar20,param_5));
          }
          puVar6 = *(undefined8 **)(lVar19 + 0x58);
          puVar6[1] = plVar3[9];
          *puVar6 = plVar3 + 8;
          *(undefined8 **)plVar3[9] = puVar6;
          plVar3[9] = (longlong)puVar6;
          plVar13[1] = (longlong)puVar6;
          *plVar13 = (longlong)(plVar3 + 8);
          *(longlong **)plVar3[9] = plVar13;
          plVar3[9] = (longlong)plVar13;
          plVar13 = (longlong *)param_3[3];
          Scaleform::GFx::AS3::TR::Use::Unlink(plVar13);
          plVar3 = (longlong *)(lVar19 + 0x68);
          plVar13[3] = lVar19 + 0x58;
          *plVar13 = *plVar3;
          plVar13[1] = (longlong)plVar3;
          *(longlong **)(*plVar3 + 8) = plVar13;
          *plVar3 = (longlong)plVar13;
        }
        else if ((((byte)(int)plVar3[2] & 0x1f) == 0x10) && ((int)plVar3[3] == 6)) {
          plVar1 = plVar3 + 7;
          plVar17 = *(longlong **)plVar3[10];
          *(longlong **)(*plVar17 + 8) = plVar13;
          *(longlong **)plVar17[1] = plVar13;
          *plVar13 = *plVar17;
          plVar13[1] = plVar17[1];
          *plVar17 = -1;
          plVar17[1] = -1;
          Scaleform::GFx::AS3::TR::Use::Unlink(plVar1);
          plVar3[10] = (longlong)(plVar13 + 3);
          if (plVar13 + 3 != (longlong *)0x0) {
            plVar17 = plVar13 + 5;
            *plVar1 = plVar13[5];
            plVar3[8] = (longlong)plVar17;
            *(longlong **)(*plVar17 + 8) = plVar1;
            *plVar17 = (longlong)plVar1;
          }
          FUN_1435966d0(plVar3,lVar19);
        }
        else {
          FUN_143594d40(param_3,plVar13 + 3);
          *(longlong **)(*plVar3 + 8) = plVar13;
          *(longlong **)plVar3[1] = plVar13;
          *plVar13 = *plVar3;
          plVar13[1] = plVar3[1];
          *plVar3 = -1;
          plVar3[1] = -1;
        }
        *param_2 = 1;
        uVar11 = local_48[0] & 0x1f;
        if (uVar11 < 10) {
          return param_2;
        }
        if ((local_48[0] >> 9 & 1) != 0) {
          *local_40 = *local_40 + -1;
          if (*local_40 != 0) {
            return param_2;
          }
          (**(code **)(*DAT_146b62f28 + 0x60))();
          return param_2;
        }
        if (uVar11 == 10) {
          piVar2 = (int *)(local_38 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 != 0) {
            return param_2;
          }
          FUN_14335f920();
          return param_2;
        }
        if (((uVar11 != 0xb) && (uVar11 != 0xc)) && (local_38 = local_30, 1 < uVar11 - 0xd)) {
          return param_2;
        }
        if ((local_38 & 1) != 0) {
          return param_2;
        }
        if (local_38 == 0) {
          return param_2;
        }
        if ((*(uint *)(local_38 + 8) & 0x3fffff) == 0) {
          return param_2;
        }
        *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) - 1;
        FUN_1434ef880();
        return param_2;
      }
      uVar11 = local_48[0] & 0x1f;
      if (9 < uVar11) {
        if ((local_48[0] >> 9 & 1) == 0) {
          if (uVar11 == 10) {
            piVar2 = (int *)(local_38 + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_14335f920();
            }
          }
          else if (((((uVar11 == 0xb) || (uVar11 == 0xc)) || (local_38 = local_30, uVar11 - 0xd < 2)
                    ) && (((local_38 & 1) == 0 && (local_38 != 0)))) &&
                  ((*(uint *)(local_38 + 8) & 0x3fffff) != 0)) {
            *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *local_40 = *local_40 + -1;
          if (*local_40 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
    }
  }
  if (((longlong *)param_3[3] == param_3 + 2) || ((longlong *)param_3[3] != (longlong *)param_3[2]))
  {
    *param_2 = 0;
    return param_2;
  }
  plVar13 = *(longlong **)(param_4 + 8);
  if ((*(byte *)(plVar13 + 0x11) >> 5 & 1) == 0) {
    if (plVar13[0x15] == 0) {
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    plVar13 = *(longlong **)(plVar13[0x15] + 0x28);
  }
  lVar12 = *(longlong *)(param_1 + 0x50);
  uVar15 = FUN_1436107c0(lVar12 + 0x148,plVar13[0x1b],0);
  uVar16 = FUN_14359c2e0(param_1);
  puVar5 = *(undefined1 **)(lVar12 + 0x268);
  lVar19 = FUN_1435ba1a0(puVar5,0x78,*puVar5);
  lVar12 = 0;
  if (lVar19 != 0) {
    lVar12 = FUN_14360a520(lVar19,2,param_3,uVar15,plVar13,0,uVar16);
  }
  plVar13 = *(longlong **)(lVar12 + 0x58);
  if (param_6 == '\0') {
    plVar13[1] = *(longlong *)plVar3[1];
    *plVar13 = *plVar3;
    *(longlong **)(*plVar3 + 8) = plVar13;
    *plVar3 = (longlong)plVar13;
  }
  else {
    *plVar13 = *(longlong *)plVar3[1];
    plVar13[1] = plVar3[1];
    *(longlong **)plVar3[1] = plVar13;
    plVar3[1] = (longlong)plVar13;
  }
LAB_1435a2834:
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435a2d60 FUN_1435a2d60 body=386 status=ok
// SIG undefined FUN_1435a2d60(void)

void FUN_1435a2d60(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(lVar2 + 0x280);
  uVar4 = *(undefined8 *)(lVar2 + 0x88);
  uVar6 = FUN_14359c2e0();
  lVar9 = 0;
  plVar7 = (longlong *)
           FUN_1435977d0(lVar2 + 0x260,0,*(undefined8 *)(param_1 + 0x58),uVar3,0,1,0,uVar6,uVar4);
  *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
  uVar1 = *(uint *)(lVar2 + 0x84);
  uVar12 = (ulonglong)uVar1;
  lVar11 = *(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)*(uint *)(lVar2 + 0x80) * 8);
  puVar5 = (undefined8 *)plVar7[8];
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0xffffffffffffffff;
    puVar5[1] = 0xffffffffffffffff;
    puVar5[2] = plVar7;
    puVar5[3] = lVar11;
    if (lVar11 != 0) {
      plVar8 = (longlong *)(lVar11 + 0x10);
      *puVar5 = *(undefined8 *)(lVar11 + 0x10);
      puVar5[1] = plVar8;
      *(undefined8 **)(*plVar8 + 8) = puVar5;
      *plVar8 = (longlong)puVar5;
    }
  }
  if (*(uint *)(lVar2 + 0x80) != 0) {
    uVar10 = (ulonglong)*(uint *)(lVar2 + 0x80);
    lVar11 = lVar9;
    do {
      FUN_143594aa0(local_res8,lVar2 + 0x260,*(undefined8 *)(lVar11 + *(longlong *)(lVar2 + 0xb0)),0
                   );
      lVar11 = lVar11 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (uVar1 != 0) {
    do {
      FUN_143594aa0(local_res8,lVar2 + 0x260,*(undefined8 *)(lVar9 + *(longlong *)(lVar2 + 0xd0)),0)
      ;
      lVar9 = lVar9 + 8;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  plVar8 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar7 = *plVar8;
  plVar7[1] = (longlong)plVar8;
  *(longlong **)(*plVar8 + 8) = plVar7;
  *plVar8 = (longlong)plVar7;
  return;
}



// FUNCTION 1435a2ef0 FUN_1435a2ef0 body=231 status=ok
// SIG undefined FUN_1435a2ef0(void)

void FUN_1435a2ef0(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined1 local_res8 [8];
  undefined8 local_res18 [2];
  undefined1 local_58 [8];
  longlong local_50;
  undefined1 local_48 [8];
  byte local_40;
  undefined4 local_3c;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x18);
  lVar4 = *(longlong *)(lVar3 + 0x28);
  if (*(char *)(*(longlong *)(lVar4 + 0x50) + 0x28) != '\0') {
    lVar3 = *(longlong *)(lVar3 + 0xa0);
    puVar6 = (uint *)FUN_14358fb50(lVar3,local_res8,*(undefined4 *)(lVar2 + 0x20));
    local_res18[0] = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + (ulonglong)*puVar6 * 8);
    local_3c = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_14361cce0(local_res18,local_48);
    if ((local_40 & 0x40) != 0) {
      FUN_14359b6f0(param_1,0,param_2);
      return;
    }
  }
  uVar5 = FUN_1435c8e40(local_58,0x3e9,lVar4);
  FUN_1435ccf60(lVar4,uVar5,&DAT_145b15be8);
  piVar1 = (int *)(local_50 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  FUN_14335f920();
  return;
}



// FUNCTION 1435a2fe0 FUN_1435a2fe0 body=319 status=ok
// SIG undefined FUN_1435a2fe0(void)

void FUN_1435a2fe0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_48 [8];
  longlong local_40;
  undefined1 local_38 [8];
  byte local_30;
  undefined4 local_2c;
  undefined8 local_20;
  undefined8 uStack_18;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x18);
  lVar4 = *(longlong *)(lVar3 + 0x28);
  if (*(char *)(*(longlong *)(lVar4 + 0x50) + 0x28) != '\0') {
    lVar3 = *(longlong *)(lVar3 + 0xa0);
    puVar6 = (uint *)FUN_14358fb50(lVar3,local_res8,*(undefined4 *)(lVar2 + 0x20));
    local_res10 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + (ulonglong)*puVar6 * 8);
    local_2c = 0;
    local_20 = 0;
    uStack_18 = 0;
    FUN_14361cce0(&local_res10,local_38);
    if ((local_30 & 0x40) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x50);
      *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
      uVar5 = *(undefined8 *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)*(uint *)(lVar2 + 0x80) * 8);
      uVar7 = FUN_14359c2e0(param_1);
      plVar8 = (longlong *)FUN_143598310(*(longlong *)(param_1 + 0x50) + 0x260,0,uVar5,0,uVar7);
      plVar9 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
      *plVar8 = *plVar9;
      plVar8[1] = (longlong)plVar9;
      *(longlong **)(*plVar9 + 8) = plVar8;
      *plVar9 = (longlong)plVar8;
      return;
    }
  }
  uVar5 = FUN_1435c8e40(local_48,0x3e9,lVar4);
  FUN_1435ccf60(lVar4,uVar5,&DAT_145b15be8);
  piVar1 = (int *)(local_40 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  FUN_14335f920();
  return;
}



// FUNCTION 1435a3130 FUN_1435a3130 body=84 status=ok
// SIG undefined FUN_1435a3130(void)

void FUN_1435a3130(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res10 [24];
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  lVar1 = (param_2 & 0xffffffff) * 8;
  FUN_143594aa0(local_res10,lVar2 + 0x260,*(undefined8 *)(*(longlong *)(lVar2 + 0x90) + lVar1),1);
  *(longlong *)(lVar1 + *(longlong *)(lVar2 + 0x90)) = lVar2 + 0x290;
  return;
}



// FUNCTION 1435a3190 FUN_1435a3190 body=144 status=ok
// SIG undefined FUN_1435a3190(void)

void FUN_1435a3190(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  *(int *)(lVar1 + 0x84) = *(int *)(lVar1 + 0x84) + -1;
  uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0xd0) + (ulonglong)*(uint *)(lVar1 + 0x84) * 8);
  pcVar3 = (char *)FUN_143594aa0(local_res8,lVar1 + 0x260,uVar2,
                                 CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
  if (*pcVar3 == '\0') {
    plVar4 = (longlong *)FUN_143598310(*(longlong *)(param_1 + 0x50) + 0x260,3,uVar2,0,0);
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
    *plVar4 = *plVar5;
    plVar4[1] = (longlong)plVar5;
    *(longlong **)(*plVar5 + 8) = plVar4;
    *plVar5 = (longlong)plVar4;
  }
  return;
}



// FUNCTION 1435a3240 FUN_1435a3240 body=97 status=ok
// SIG undefined FUN_1435a3240(void)

void FUN_1435a3240(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = (longlong *)FUN_1435980d0(lVar1 + 0x260,(int)param_2);
  FUN_143612170(lVar1 + 0x70,plVar2 + 3);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 1435a32b0 FUN_1435a32b0 body=94 status=ok
// SIG undefined FUN_1435a32b0(void)

void FUN_1435a32b0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = (longlong *)FUN_1435980d0(lVar1 + 0x260);
  FUN_143612170(lVar1 + 0x70,plVar2 + 3);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 1435a3320 FUN_1435a3320 body=102 status=ok
// SIG undefined FUN_1435a3320(void)

void FUN_1435a3320(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + -1;
  plVar2 = (longlong *)
           FUN_143598310(*(longlong *)(param_1 + 0x50) + 0x260,2,
                         *(undefined8 *)
                          (*(longlong *)(lVar1 + 0xb0) + (ulonglong)*(uint *)(lVar1 + 0x80) * 8),0,0
                        );
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 1435a33e0 FUN_1435a33e0 body=221 status=ok
// SIG undefined FUN_1435a33e0(void)

void FUN_1435a33e0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_res8;
  
  FUN_1435ba8a0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18),
                &local_res8,(longlong)param_2);
  lVar2 = *(longlong *)(param_1 + 0x50);
  plVar3 = (longlong *)
           FUN_1435ba1a0(*(undefined1 **)(lVar2 + 0x268),0x38,**(undefined1 **)(lVar2 + 0x268));
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    lVar4 = FUN_1435d0a40(*(undefined8 *)(lVar2 + 0x270),&local_res8);
    *plVar3 = -1;
    plVar3[1] = -1;
    *(undefined4 *)(plVar3 + 2) = 2;
    plVar3[4] = lVar4;
    plVar5 = plVar3 + 5;
    plVar3[3] = (longlong)plVar3;
    *plVar5 = (longlong)plVar5;
    plVar3[6] = (longlong)plVar5;
  }
  FUN_143612170(lVar2 + 0x70,plVar3 + 3);
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  lVar2 = *plVar5;
  plVar3[1] = (longlong)plVar5;
  *plVar3 = lVar2;
  *(longlong **)(*plVar5 + 8) = plVar3;
  *plVar5 = (longlong)plVar3;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435a34d0 FUN_1435a34d0 body=122 status=ok
// SIG undefined FUN_1435a34d0(void)

void FUN_1435a34d0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = (longlong *)
           FUN_1435980d0(lVar1 + 0x260,
                         *(undefined4 *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) + 0xa0)
                            + 0xd0) + (longlong)param_2 * 4));
  FUN_143612170(lVar1 + 0x70,plVar2 + 3);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 1435a3550 FUN_1435a3550 body=122 status=ok
// SIG undefined FUN_1435a3550(void)

void FUN_1435a3550(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = (longlong *)
           FUN_143598160(lVar1 + 0x260,
                         *(undefined4 *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) + 0xa0)
                            + 0xe8) + (longlong)param_2 * 4));
  FUN_143612170(lVar1 + 0x70,plVar2 + 3);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 1435a35d0 FUN_1435a35d0 body=131 status=ok
// SIG undefined FUN_1435a35d0(void)

void FUN_1435a35d0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  uVar4 = FUN_14361cc30(*(longlong *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18)
                         + 0xa0) + 0xc0,(longlong)param_2);
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = (longlong *)FUN_143597fb0(lVar1 + 0x260,uVar4);
  FUN_143612170(lVar1 + 0x70,plVar2 + 3);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 1435a3660 FUN_1435a3660 body=116 status=ok
// SIG undefined FUN_1435a3660(void)

void FUN_1435a3660(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  uVar2 = FUN_1435ba6d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18),
                        param_2);
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar3 = (longlong *)FUN_143598040(lVar1 + 0x260,uVar2);
  FUN_143612170(lVar1 + 0x70,plVar3 + 3);
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar3 = *plVar4;
  plVar3[1] = (longlong)plVar4;
  *(longlong **)(*plVar4 + 8) = plVar3;
  *plVar4 = (longlong)plVar3;
  return;
}



// FUNCTION 1435a36f0 FUN_1435a36f0 body=80 status=ok
// SIG undefined FUN_1435a36f0(void)

void FUN_1435a36f0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435ccf60(uVar2,uVar3,&DAT_145b15be8);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435a3750 FUN_1435a3750 body=80 status=ok
// SIG undefined FUN_1435a3750(void)

void FUN_1435a3750(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435ccf60(uVar2,uVar3,&DAT_145b15be8);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435a37b0 FUN_1435a37b0 body=80 status=ok
// SIG undefined FUN_1435a37b0(void)

void FUN_1435a37b0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435ccf60(uVar2,uVar3,&DAT_145b15be8);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435a3810 FUN_1435a3810 body=80 status=ok
// SIG undefined FUN_1435a3810(void)

void FUN_1435a3810(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435ccf60(uVar2,uVar3,&DAT_145b15be8);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435a3870 FUN_1435a3870 body=80 status=ok
// SIG undefined FUN_1435a3870(void)

void FUN_1435a3870(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435ccf60(uVar2,uVar3,&DAT_145b15be8);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435a38d0 FUN_1435a38d0 body=80 status=ok
// SIG undefined FUN_1435a38d0(void)

void FUN_1435a38d0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435ccf60(uVar2,uVar3,&DAT_145b15be8);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435a3930 FUN_1435a3930 body=80 status=ok
// SIG undefined FUN_1435a3930(void)

void FUN_1435a3930(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435ccf60(uVar2,uVar3,&DAT_145b15be8);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435a3990 FUN_1435a3990 body=80 status=ok
// SIG undefined FUN_1435a3990(void)

void FUN_1435a3990(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435ccf60(uVar2,uVar3,&DAT_145b15be8);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435a39f0 FUN_1435a39f0 body=80 status=ok
// SIG undefined FUN_1435a39f0(void)

void FUN_1435a39f0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435ccf60(uVar2,uVar3,&DAT_145b15be8);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435a3a50 FUN_1435a3a50 body=80 status=ok
// SIG undefined FUN_1435a3a50(void)

void FUN_1435a3a50(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435ccf60(uVar2,uVar3,&DAT_145b15be8);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435a3ab0 FUN_1435a3ab0 body=154 status=ok
// SIG undefined FUN_1435a3ab0(void)

void FUN_1435a3ab0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar2 = (longlong *)
           FUN_143597ce0(lVar1 + 0x260,6,lVar1 + 0x70,lVar1 + 0x220,
                         *(undefined4 *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) + 0xa0)
                            + 0xa8) + (ulonglong)param_2 * 4),0);
  FUN_143612170(lVar1 + 0x70,plVar2 + 10);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar3;
  plVar2[1] = (longlong)plVar3;
  *(longlong **)(*plVar3 + 8) = plVar2;
  *plVar3 = (longlong)plVar2;
  return;
}



// FUNCTION 1435a3b50 FUN_1435a3b50 body=349 status=ok
// SIG undefined FUN_1435a3b50(void)

void FUN_1435a3b50(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_a8 [16];
  int local_98;
  undefined8 local_88;
  undefined8 local_28;
  longlong local_20;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  FUN_1435d3d90(local_a8,*(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) + 0x28),
                lVar1 + 0x70,param_2);
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + -1;
  local_98 = local_98 + 2;
  uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)*(uint *)(lVar1 + 0x80) * 8);
  uVar5 = *(uint *)(lVar1 + 0x80) - 1;
  *(uint *)(lVar1 + 0x80) = uVar5;
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar5 * 8);
  local_28 = uVar2;
  local_20 = lVar1;
  uVar6 = FUN_1435cb980(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18)
                         + 0x28),*(undefined8 *)(lVar1 + 8));
  uVar6 = FUN_143610830(*(longlong *)(param_1 + 0x50) + 0x148,uVar6,0);
  lVar3 = *(longlong *)(param_1 + 0x50);
  lVar4 = *(longlong *)(lVar3 + 0x88);
  uVar7 = FUN_14359c2e0(param_1);
  plVar8 = (longlong *)
           FUN_143597ae0(*(longlong *)(param_1 + 0x50) + 0x260,6,local_a8,lVar4,uVar2,lVar1,uVar6,0,
                         0,uVar7);
  if (lVar4 != 0) {
    *(longlong **)(lVar3 + 0x88) = plVar8 + 0x13;
  }
  FUN_143612170(lVar3 + 0x70,plVar8 + 0x17);
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  lVar1 = *plVar9;
  plVar8[1] = (longlong)plVar9;
  *plVar8 = lVar1;
  *(longlong **)(*plVar9 + 8) = plVar8;
  *plVar9 = (longlong)plVar8;
                    /* WARNING: Could not recover jumptable at 0x0001435a3ca9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_88);
  return;
}



// FUNCTION 1435a3cc0 FUN_1435a3cc0 body=147 status=ok
// SIG undefined FUN_1435a3cc0(void)

void FUN_1435a3cc0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  undefined1 local_98 [16];
  int local_88;
  undefined8 local_78;
  longlong local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  FUN_1435d3d90(local_98,*(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) + 0x28),
                lVar1 + 0x70,param_2);
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + -1;
  local_88 = local_88 + 1;
  local_18 = *(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)*(uint *)(lVar1 + 0x80) * 8);
  FUN_14359fd90(param_1,local_res8,*(undefined8 *)(*(longlong *)(local_18 + 8) + 8),local_98,
                local_18);
                    /* WARNING: Could not recover jumptable at 0x0001435a3d4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_78);
  return;
}



// FUNCTION 1435a3d60 FUN_1435a3d60 body=261 status=ok
// SIG undefined FUN_1435a3d60(void)

void FUN_1435a3d60(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_98 [16];
  int local_88;
  undefined8 local_78;
  undefined8 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  FUN_1435d3d90(local_98,*(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) + 0x28),
                lVar1 + 0x70,param_2);
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + -1;
  lVar2 = *(longlong *)(param_1 + 0x50);
  local_88 = local_88 + 1;
  uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)*(uint *)(lVar1 + 0x80) * 8);
  lVar1 = *(longlong *)(lVar2 + 0x88);
  local_18 = uVar3;
  uVar4 = FUN_14359c2e0(param_1);
  plVar5 = (longlong *)
           FUN_143597ae0(*(longlong *)(param_1 + 0x50) + 0x260,4,local_98,lVar1,uVar3,0,
                         lVar2 + 0x170,0,0,uVar4);
  if (lVar1 != 0) {
    *(longlong **)(lVar2 + 0x88) = plVar5 + 0x13;
  }
  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  lVar1 = *plVar6;
  plVar5[1] = (longlong)plVar6;
  *plVar5 = lVar1;
  *(longlong **)(*plVar6 + 8) = plVar5;
  *plVar6 = (longlong)plVar5;
                    /* WARNING: Could not recover jumptable at 0x0001435a3e61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_78);
  return;
}



// FUNCTION 1435a3e70 FUN_1435a3e70 body=80 status=ok
// SIG undefined FUN_1435a3e70(void)

void FUN_1435a3e70(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435ccf60(uVar2,uVar3,&DAT_145b15be8);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435a3ed0 FUN_1435a3ed0 body=80 status=ok
// SIG undefined FUN_1435a3ed0(void)

void FUN_1435a3ed0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435ccf60(uVar2,uVar3,&DAT_145b15be8);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435a3f30 FUN_1435a3f30 body=80 status=ok
// SIG undefined FUN_1435a3f30(void)

void FUN_1435a3f30(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435ccf60(uVar2,uVar3,&DAT_145b15be8);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435a3f90 FUN_1435a3f90 body=683 status=ok
// SIG undefined FUN_1435a3f90(void)

void FUN_1435a3f90(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong local_res8;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  ulonglong local_c8;
  undefined1 local_b8 [16];
  int local_a8;
  uint local_a0;
  undefined8 *local_98;
  ulonglong local_90;
  undefined8 local_78;
  undefined8 local_38;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  FUN_1435d3d90(local_b8,*(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) + 0x28),
                lVar1 + 0x70,param_2);
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + -1;
  local_a8 = local_a8 + 1;
  uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)*(uint *)(lVar1 + 0x80) * 8);
  if (local_a0 <= local_90) {
    local_78 = *local_98;
  }
  local_res8 = *(longlong *)(param_1 + 0x50) + 0x148;
  local_38 = uVar2;
  lVar4 = FUN_1435d80d0(&local_res8,0xb,0,local_78);
  lVar1 = *(longlong *)(lVar4 + 8);
  if ((*(byte *)(lVar1 + 0x88) >> 5 & 1) != 0) {
    if ((*(longlong *)(lVar1 + 0xd8) == 0) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0xd8) + 0xa8) == 0)) {
      lVar1 = *(longlong *)(param_1 + 0x50);
      uVar6 = FUN_14359c2e0(param_1);
      plVar5 = (longlong *)
               FUN_143597ae0(*(longlong *)(param_1 + 0x50) + 0x260,0xb,local_b8,0,uVar2,0,lVar4,0,0,
                             uVar6);
      FUN_143612170(lVar1 + 0x70,plVar5 + 0x17);
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
      *plVar5 = *plVar7;
      plVar5[1] = (longlong)plVar7;
      *(longlong **)(*plVar7 + 8) = plVar5;
      *plVar7 = (longlong)plVar5;
    }
    else {
      FUN_1435a9750(param_1,local_78);
      FUN_1435a9750(param_1,uVar2);
      plVar5 = *(longlong **)(lVar1 + 0xd8);
      if (plVar5[0x15] == 0) {
        (**(code **)(*plVar5 + 0x50))(plVar5);
      }
      uVar3 = plVar5[0x15];
      local_d8[0] = 0xc;
      local_d0 = 0;
      if (uVar3 != 0) {
        *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
      }
      lVar1 = *(longlong *)(param_1 + 0x50);
      local_c8 = uVar3;
      plVar5 = (longlong *)
               FUN_1435ba1a0(*(undefined1 **)(lVar1 + 0x268),0x38,**(undefined1 **)(lVar1 + 0x268));
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        lVar4 = FUN_1435d0c50(*(undefined8 *)(lVar1 + 0x270),local_d8);
        *plVar5 = -1;
        plVar5[1] = -1;
        *(undefined4 *)(plVar5 + 2) = 2;
        plVar5[4] = lVar4;
        plVar7 = plVar5 + 5;
        plVar5[3] = (longlong)plVar5;
        *plVar7 = (longlong)plVar7;
        plVar5[6] = (longlong)plVar7;
      }
      FUN_143612170(lVar1 + 0x70,plVar5 + 3);
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
      *plVar5 = *plVar7;
      plVar5[1] = (longlong)plVar7;
      *(longlong **)(*plVar7 + 8) = plVar5;
      *plVar7 = (longlong)plVar5;
      if ((((uVar3 & 1) == 0) && (uVar3 != 0)) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
        FUN_1434ef880(uVar3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001435a4237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_98);
  return;
}



// FUNCTION 1435a4250 FUN_1435a4250 body=242 status=ok
// SIG undefined FUN_1435a4250(void)

void FUN_1435a4250(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_88 [32];
  undefined8 local_68;
  
  FUN_1435d3d90(local_88,*(undefined8 *)
                          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18)
                          + 0x28),*(longlong *)(param_1 + 0x50) + 0x70,param_2 * 2);
  uVar2 = FUN_1435d0db0(*(longlong *)(param_1 + 0x50) + 0x148,
                        *(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x148) + 0x208) + 0xd8),2)
  ;
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar3 = (longlong *)FUN_143597ae0(lVar1 + 0x260,0,local_88,0,0,0,uVar2,0,0,0);
  FUN_143612170(lVar1 + 0x70,plVar3 + 0x17);
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  lVar1 = *plVar4;
  plVar3[1] = (longlong)plVar4;
  *plVar3 = lVar1;
  *(longlong **)(*plVar4 + 8) = plVar3;
  *plVar4 = (longlong)plVar3;
                    /* WARNING: Could not recover jumptable at 0x0001435a433e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_68);
  return;
}



// FUNCTION 1435a4350 FUN_1435a4350 body=245 status=ok
// SIG undefined FUN_1435a4350(void)

void FUN_1435a4350(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_88 [32];
  undefined8 local_68;
  
  FUN_1435d3d90(local_88,*(undefined8 *)
                          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18)
                          + 0x28),*(longlong *)(param_1 + 0x50) + 0x70,param_2);
  uVar2 = FUN_1435d0db0(*(longlong *)(param_1 + 0x50) + 0x148,
                        *(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x148) + 0x248) + 0xd8),2)
  ;
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar3 = (longlong *)FUN_143597ae0(lVar1 + 0x260,1,local_88,0,0,0,uVar2,0,0,0);
  FUN_143612170(lVar1 + 0x70,plVar3 + 0x17);
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  lVar1 = *plVar4;
  plVar3[1] = (longlong)plVar4;
  *plVar3 = lVar1;
  *(longlong **)(*plVar4 + 8) = plVar3;
  *plVar4 = (longlong)plVar3;
                    /* WARNING: Could not recover jumptable at 0x0001435a4441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_68);
  return;
}



// FUNCTION 1435a4450 FUN_1435a4450 body=153 status=ok
// SIG undefined FUN_1435a4450(void)

void FUN_1435a4450(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18);
  uVar1 = *(undefined4 *)(lVar2 + 0x20);
  uVar3 = FUN_1435ba9a0(*(undefined8 *)(lVar2 + 0x18),uVar1);
  uVar3 = FUN_1435d0db0(*(longlong *)(param_1 + 0x50) + 0x148,uVar3,2);
  lVar2 = *(longlong *)(param_1 + 0x50);
  plVar4 = (longlong *)FUN_143598280(lVar2 + 0x260,2,uVar3,uVar1);
  FUN_143612170(lVar2 + 0x70,plVar4 + 4);
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar4 = *plVar5;
  plVar4[1] = (longlong)plVar5;
  *(longlong **)(*plVar5 + 8) = plVar4;
  *plVar5 = (longlong)plVar4;
  return;
}



// FUNCTION 1435a44f0 FUN_1435a44f0 body=324 status=ok
// SIG undefined FUN_1435a44f0(void)

void FUN_1435a44f0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 local_res8;
  
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18);
  lVar3 = *(longlong *)(lVar4 + 0xa0);
  local_res8 = *(undefined8 *)(*(longlong *)(lVar3 + 0x78) + (param_2 & 0xffffffff) * 8);
  uVar1 = FUN_14358f8b0(&local_res8);
  piVar6 = (int *)((ulonglong)uVar1 * 0x10 + *(longlong *)(lVar3 + 0x148));
  lVar3 = FUN_1435ba6d0(lVar4,(longlong)*piVar6);
  if (DAT_1467d9b10 <= *(uint *)(*(undefined8 **)(lVar3 + 0x38) + 4)) {
    iVar2 = strncmp((char *)**(undefined8 **)(lVar3 + 0x38),PTR_s_scaleform_gfx_1467d9b08,
                    DAT_1467d9b10);
    if (iVar2 == 0) {
      lVar4 = FUN_1435c84e0(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28),
                            lVar4,piVar6);
      goto LAB_1435a45b3;
    }
  }
  lVar4 = FUN_1435cf010(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18)
                         + 0x28),lVar4,uVar1);
LAB_1435a45b3:
  if (lVar4 == 0) {
    lVar4 = *(longlong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28) +
             0x208);
  }
  if (lVar4 == 0) {
    uVar5 = 0;
    lVar4 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x148) + 0x200) + 0xd8);
  }
  else {
    uVar5 = 2;
  }
  uVar5 = FUN_1435d0db0(*(longlong *)(param_1 + 0x50) + 0x148,lVar4,uVar5);
  FUN_143599ec0(param_1,4,uVar5,param_2 & 0xffffffff);
  return;
}



// FUNCTION 1435a4640 FUN_1435a4640 body=530 status=ok
// SIG undefined FUN_1435a4640(void)

void FUN_1435a4640(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_a8 [8];
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  undefined1 local_78 [48];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  local_80 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x18);
  lVar3 = *(longlong *)(local_80 + 0x28);
  if (*(char *)(*(longlong *)(lVar3 + 0x50) + 0x28) == '\0') {
    uVar5 = FUN_1435c8e40(local_a8,0x3e9,lVar3);
    FUN_1435ccf60(lVar3,uVar5,&DAT_145b15be8);
    piVar1 = (int *)(local_a0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    local_98 = *(undefined8 *)(local_80 + 0x28);
    local_90 = lVar2 + 0x70;
    plVar8 = (longlong *)0x0;
    local_88 = 0;
    FUN_1435ae740(local_78,local_80,
                  (ulonglong)param_2 * 0x10 + *(longlong *)(*(longlong *)(local_80 + 0xa0) + 0x148))
    ;
    local_48 = 0;
    uStack_40 = 0;
    iVar4 = FUN_1435d3ac0(&local_98,local_78,&local_48,&uStack_40);
    *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
    lVar3 = *(longlong *)(param_1 + 0x50);
    local_38 = *(undefined8 *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)*(uint *)(lVar2 + 0x80) * 8)
    ;
    local_88 = local_88 + iVar4 + 1;
    uVar5 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 0x148) + 0x50) + 0x70))();
    uVar5 = FUN_1435d0db0(lVar3 + 0x148,uVar5,2,0);
    uVar6 = FUN_14359c2e0(param_1);
    lVar2 = *(longlong *)(lVar3 + 0x270);
    lVar7 = FUN_1435ba1a0(*(undefined1 **)(lVar3 + 0x268),0xe8,**(undefined1 **)(lVar3 + 0x268));
    if (lVar7 != 0) {
      plVar8 = (longlong *)FUN_143596d60(lVar7,2,&local_98,0,lVar2 + 0x58,uVar5,param_2,uVar6);
    }
    FUN_143612170(lVar3 + 0x70,plVar8 + 0x19);
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
    lVar2 = *plVar9;
    plVar8[1] = (longlong)plVar9;
    *plVar8 = lVar2;
    *(longlong **)(*plVar9 + 8) = plVar8;
    *plVar9 = (longlong)plVar8;
    FUN_1434e6250(local_78);
  }
  return;
}



// FUNCTION 1435a4860 FUN_1435a4860 body=224 status=ok
// SIG undefined FUN_1435a4860(void)

void FUN_1435a4860(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18);
  lVar1 = *(longlong *)(lVar2 + 0x18);
  lVar2 = FUN_1435bab80(*(longlong *)(lVar1 + 0x100) +
                        ((ulonglong)
                         *(uint *)(*(longlong *)(lVar1 + 0x130) + 0x28 +
                                  (ulonglong)*(uint *)(lVar2 + 0x20) * 0x50) + (ulonglong)param_2) *
                        0x18,lVar1);
  if (lVar2 == 0) {
    uVar3 = 0;
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x148) + 0x200) + 0xd8);
  }
  else {
    uVar3 = 2;
  }
  uVar3 = FUN_1435d0db0(*(longlong *)(param_1 + 0x50) + 0x148,lVar2,uVar3);
  lVar2 = *(longlong *)(param_1 + 0x50);
  plVar4 = (longlong *)FUN_143598280(lVar2 + 0x260,4,uVar3,param_2);
  FUN_143612170(lVar2 + 0x70,plVar4 + 4);
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar4 = *plVar5;
  plVar4[1] = (longlong)plVar5;
  *(longlong **)(*plVar5 + 8) = plVar4;
  *plVar5 = (longlong)plVar4;
  return;
}



// FUNCTION 1435a4950 FUN_1435a4950 body=184 status=ok
// SIG undefined FUN_1435a4950(void)

void FUN_1435a4950(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x90) + (longlong)param_2 * 8);
  uVar3 = *(undefined8 *)(lVar2 + 8);
  lVar5 = FUN_1435ba1a0(*(undefined1 **)(lVar1 + 0x268),0x78,**(undefined1 **)(lVar1 + 0x268));
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = FUN_14360a670(lVar5,7,lVar2,uVar3,0,0,param_2);
  }
  FUN_143612170(lVar1 + 0x70,(undefined8 *)(lVar6 + 0x58));
  plVar4 = *(longlong **)(lVar6 + 0x58);
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar4 = *plVar7;
  plVar4[1] = (longlong)plVar7;
  *(longlong **)(*plVar7 + 8) = plVar4;
  *plVar7 = (longlong)plVar4;
  return;
}



// FUNCTION 1435a4a10 FUN_1435a4a10 body=294 status=ok
// SIG undefined FUN_1435a4a10(void)

void FUN_1435a4a10(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 local_res10 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar2 = *(longlong *)((longlong)param_2 * 8 + *(longlong *)(lVar1 + 0x90));
  puVar3 = *(undefined4 **)(lVar2 + 8);
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + -1;
  plVar4 = *(longlong **)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)*(uint *)(lVar1 + 0x80) * 8);
  puVar5 = (undefined4 *)plVar4[1];
  FUN_143594aa0(local_res10,lVar1 + 0x260,lVar2,0);
  if ((((((byte)*puVar5 & 0x78) == 8) && (puVar5 == puVar3)) &&
      ((longlong *)plVar4[3] == plVar4 + 2)) &&
     ((((byte)*(undefined4 *)(*plVar4 + 0x10) & 0x1f) != 1 &&
      (pcVar7 = (char *)FUN_143594910(local_res10), *pcVar7 != '\0')))) {
    return;
  }
  lVar2 = plVar4[1];
  puVar6 = *(undefined1 **)(*(longlong *)(param_1 + 0x50) + 0x268);
  lVar8 = FUN_1435ba1a0(puVar6,0x78,*puVar6);
  lVar9 = 0;
  if (lVar8 != 0) {
    lVar9 = FUN_14360a670(lVar8,6,plVar4,lVar2,0,0,param_2);
  }
  *(undefined8 **)((longlong)param_2 * 8 + *(longlong *)(lVar1 + 0x90)) =
       (undefined8 *)(lVar9 + 0x58);
  plVar4 = *(longlong **)(lVar9 + 0x58);
  plVar10 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar4 = *plVar10;
  plVar4[1] = (longlong)plVar10;
  *(longlong **)(*plVar10 + 8) = plVar4;
  *plVar10 = (longlong)plVar4;
  return;
}



// FUNCTION 1435a4b40 FUN_1435a4b40 body=305 status=ok
// SIG undefined FUN_1435a4b40(void)

void FUN_1435a4b40(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (param_2 != '\0') {
    FUN_143612170(lVar1 + 0x70,lVar1 + 0x2d0);
    return;
  }
  plVar4 = *(longlong **)(*(longlong *)(lVar1 + 0x18) + 0x30);
  puVar2 = (undefined4 *)plVar4[1];
  if (((*plVar4 - (longlong)puVar2) + 0x20U & 0xffffffffffffffe0) == 0) {
    lVar3 = *(longlong *)(lVar1 + 0x2d8);
    plVar4 = (longlong *)
             FUN_1435ba1a0(*(undefined1 **)(lVar1 + 0x268),0x40,**(undefined1 **)(lVar1 + 0x268));
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      *plVar4 = -1;
      plVar4[1] = -1;
      *(undefined4 *)(plVar4 + 2) = 3;
      plVar4[3] = 0;
      plVar4[4] = (longlong)plVar4;
      plVar4[5] = lVar3;
      plVar5 = plVar4 + 6;
      *plVar5 = (longlong)plVar5;
      plVar4[7] = (longlong)plVar5;
    }
    FUN_143612170(lVar1 + 0x70,plVar4 + 4);
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
    *plVar4 = *plVar5;
    plVar4[1] = (longlong)plVar5;
    *(longlong **)(*plVar5 + 8) = plVar4;
    *plVar5 = (longlong)plVar4;
    return;
  }
  if (((((byte)*puVar2 & 0x1f) == 0xc) && (*(longlong *)(puVar2 + 4) != 0)) &&
     ((lVar1 = *(longlong *)(*(longlong *)(puVar2 + 4) + 0x28),
      (*(byte *)(lVar1 + 0x88) >> 5 & 1) != 0 || (*(int *)(lVar1 + 0x90) == 0x17)))) {
    FUN_14359a590(param_1);
    return;
  }
  return;
}



// FUNCTION 1435a4c80 FUN_1435a4c80 body=163 status=ok
// SIG undefined FUN_1435a4c80(void)

void FUN_1435a4c80(longlong param_1,int param_2)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  pbVar2 = *(byte **)(*(longlong *)(*(longlong *)(lVar1 + 0xd0) + (longlong)param_2 * 8) + 8);
  if ((*pbVar2 & 1) != 0) {
    pbVar2 = (byte *)FUN_1435d0f90(lVar1 + 0x148,pbVar2,0);
  }
  plVar3 = (longlong *)
           FUN_143597ce0(*(longlong *)(param_1 + 0x50) + 0x260,5,lVar1 + 0x70,pbVar2,param_2,0);
  FUN_143612170(lVar1 + 0x70,plVar3 + 10);
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar3 = *plVar4;
  plVar3[1] = (longlong)plVar4;
  *(longlong **)(*plVar4 + 8) = plVar3;
  *plVar4 = (longlong)plVar3;
  return;
}



// FUNCTION 1435a4d30 FUN_1435a4d30 body=412 status=ok
// SIG undefined FUN_1435a4d30(void)

void FUN_1435a4d30(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  undefined1 local_78 [48];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar7 = (longlong *)0x0;
  local_90 = lVar1 + 0x70;
  local_80 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18);
  local_98 = *(undefined8 *)(local_80 + 0x28);
  local_88 = 0;
  FUN_1435ae740(local_78,local_80,
                (ulonglong)param_2 * 0x10 + *(longlong *)(*(longlong *)(local_80 + 0xa0) + 0x148));
  local_48 = 0;
  uStack_40 = 0;
  iVar4 = FUN_1435d3ac0(&local_98,local_78,&local_48,&uStack_40);
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + -1;
  lVar2 = *(longlong *)(param_1 + 0x50);
  local_38 = *(undefined8 *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)*(uint *)(lVar1 + 0x80) * 8);
  local_88 = local_88 + iVar4 + 1;
  lVar1 = *(longlong *)(lVar2 + 0x88);
  uVar5 = FUN_14359c2e0(param_1);
  lVar3 = *(longlong *)(lVar2 + 0x270);
  lVar6 = FUN_1435ba1a0(*(undefined1 **)(lVar2 + 0x268),0xe8,**(undefined1 **)(lVar2 + 0x268));
  if (lVar6 != 0) {
    plVar7 = (longlong *)
             FUN_143596d60(lVar6,3,&local_98,lVar1,lVar3 + 0x58,lVar2 + 0x1e0,param_2,uVar5);
  }
  if (lVar1 != 0) {
    *(longlong **)(lVar2 + 0x88) = plVar7 + 0x15;
  }
  FUN_143612170(lVar2 + 0x70,plVar7 + 0x19);
  plVar8 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  lVar1 = *plVar8;
  plVar7[1] = (longlong)plVar8;
  *plVar7 = lVar1;
  *(longlong **)(*plVar8 + 8) = plVar7;
  *plVar8 = (longlong)plVar7;
  FUN_1434e6250(local_78);
  return;
}



// FUNCTION 1435a4ee0 FUN_1435a4ee0 body=578 status=ok
// SIG undefined FUN_1435a4ee0(void)

void FUN_1435a4ee0(longlong param_1,uint param_2,char param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 local_38 [8];
  longlong local_30;
  
  uVar15 = (ulonglong)param_2;
  if (param_3 != '\0') {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x50) + 0x80);
    *piVar2 = *piVar2 + -1;
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x50);
  *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)*(uint *)(lVar4 + 0x80) * 8);
  lVar6 = *(longlong *)(param_1 + 0x50);
  plVar3 = (longlong *)(lVar6 + 0x148);
  lVar7 = *plVar3;
  uVar10 = 0;
  if (*(longlong *)(lVar5 + 8) != 0) {
    lVar11 = *(longlong *)(*(longlong *)(lVar5 + 8) + 8);
    if ((ulonglong)(*(longlong *)(lVar11 + 0x40) + *(longlong *)(lVar11 + 0x28)) < uVar15) {
      uVar10 = FUN_1435d0db0(plVar3,*(undefined8 *)(*(longlong *)(lVar7 + 0x208) + 0xd8),0,0);
    }
    else {
      uVar10 = FUN_143610710(lVar11,(uVar15 - 1) + (ulonglong)*(uint *)(lVar11 + 0x70));
      lVar11 = FUN_1435adda0(uVar10,lVar7);
      if (lVar11 == 0) {
        uVar10 = FUN_1435c8e40(local_38,0x3f6,lVar7);
        FUN_1435ccf60(lVar7,uVar10,&DAT_145b15be8);
        piVar2 = (int *)(local_30 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 != 0) {
          return;
        }
        FUN_14335f920();
        return;
      }
      uVar12 = *(undefined8 *)(lVar11 + 0xd8);
      cVar9 = FUN_1435ab780(uVar10);
      if (cVar9 == '\0') {
        uVar10 = FUN_1436107c0(plVar3,uVar12,0);
      }
      else {
        uVar10 = FUN_143610830(plVar3,lVar11);
      }
    }
  }
  uVar12 = FUN_14359c2e0(param_1);
  puVar8 = *(undefined1 **)(lVar6 + 0x268);
  puVar13 = (undefined8 *)FUN_1435ba1a0(puVar8,0x78,*puVar8);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    *puVar13 = 0xffffffffffffffff;
    plVar3 = puVar13 + 7;
    puVar13[1] = 0xffffffffffffffff;
    plVar14 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(puVar13 + 2) = 0x13;
    *(undefined4 *)(puVar13 + 3) = 1;
    puVar13[4] = 0;
    puVar13[5] = uVar15;
    puVar13[6] = uVar12;
    *plVar3 = -1;
    puVar13[8] = 0xffffffffffffffff;
    puVar13[9] = puVar13;
    puVar13[10] = lVar5;
    *plVar3 = *plVar14;
    puVar13[8] = plVar14;
    *(longlong **)(*plVar14 + 8) = plVar3;
    puVar1 = puVar13 + 0xd;
    *plVar14 = (longlong)plVar3;
    puVar13[0xb] = puVar13;
    puVar13[0xc] = uVar10;
    *puVar1 = puVar1;
    puVar13[0xe] = puVar1;
  }
  puVar13 = puVar13 + 0xb;
  if (puVar13 != (undefined8 *)0x0) {
    FUN_143612170(lVar4 + 0x70,puVar13);
    plVar3 = (longlong *)*puVar13;
    plVar14 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
    *plVar3 = *plVar14;
    plVar3[1] = (longlong)plVar14;
    *(longlong **)(*plVar14 + 8) = plVar3;
    *plVar14 = (longlong)plVar3;
  }
  return;
}



// FUNCTION 1435a5130 FUN_1435a5130 body=223 status=ok
// SIG undefined FUN_1435a5130(void)

void FUN_1435a5130(longlong param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (param_3 != '\0') {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x80);
    *piVar1 = *piVar1 + -2;
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0x50);
  *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
  uVar2 = *(undefined8 *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)*(uint *)(lVar7 + 0x80) * 8);
  uVar5 = *(uint *)(lVar7 + 0x80) - 1;
  *(uint *)(lVar7 + 0x80) = uVar5;
  uVar3 = *(undefined8 *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar5 * 8);
  uVar6 = FUN_14359c2e0(param_1);
  puVar4 = *(undefined1 **)(*(longlong *)(param_1 + 0x50) + 0x268);
  lVar7 = FUN_1435ba1a0(puVar4,0x68,*puVar4);
  if (lVar7 == 0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = (longlong *)FUN_14360a9d0(lVar7,0,uVar3,uVar2,param_2,uVar6);
  }
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar8 = *plVar9;
  plVar8[1] = (longlong)plVar9;
  *(longlong **)(*plVar9 + 8) = plVar8;
  *plVar9 = (longlong)plVar8;
  return;
}



// FUNCTION 1435a5220 FUN_1435a5220 body=272 status=ok
// SIG undefined FUN_1435a5220(void)

void FUN_1435a5220(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar1 = FUN_1435d0db0(*(longlong *)(param_1 + 0x50) + 0x148,
                        *(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x38)
                         + 0x28),2);
  lVar1 = *(longlong *)(lVar1 + 8);
  uVar5 = (ulonglong)*(uint *)(lVar1 + 0x70) + ((ulonglong)param_2 - 1);
  if (((longlong)uVar5 < 0) || (uVar5 < *(ulonglong *)(lVar1 + 0x28))) {
    lVar2 = FUN_1434ef150(*(undefined8 *)(lVar1 + 0x30));
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x38) + 0x10 +
            ((uVar5 & 0xffffffff) - *(ulonglong *)(lVar1 + 0x28)) * 0x40;
  }
  lVar1 = FUN_1435d0350(*(longlong *)(param_1 + 0x50) + 0x148,lVar1,lVar2);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x148) + 0x208) + 0xd8);
  }
  uVar3 = FUN_143610830(*(longlong *)(param_1 + 0x50) + 0x148,lVar1,0);
  lVar1 = *(longlong *)(param_1 + 0x50);
  plVar4 = (longlong *)FUN_143598280(lVar1 + 0x260,1,uVar3,param_2);
  FUN_143612170(lVar1 + 0x70,plVar4 + 4);
  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar4 = *plVar6;
  plVar4[1] = (longlong)plVar6;
  *(longlong **)(*plVar6 + 8) = plVar4;
  *plVar6 = (longlong)plVar4;
  return;
}



// FUNCTION 1435a5340 FUN_1435a5340 body=129 status=ok
// SIG undefined FUN_1435a5340(void)

void FUN_1435a5340(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + -1;
  uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)*(uint *)(lVar1 + 0x80) * 8);
  uVar3 = FUN_14359c2e0();
  plVar4 = (longlong *)FUN_143598310(*(longlong *)(param_1 + 0x50) + 0x260,1,uVar2,param_2,uVar3);
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar4 = *plVar5;
  plVar4[1] = (longlong)plVar5;
  *(longlong **)(*plVar5 + 8) = plVar4;
  *plVar5 = (longlong)plVar4;
  return;
}



// FUNCTION 1435a53d0 FUN_1435a53d0 body=81 status=ok
// SIG undefined FUN_1435a53d0(void)

void FUN_1435a53d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  uVar2 = FUN_1435a1fa0(param_1,*(undefined8 *)
                                 (*(longlong *)(lVar1 + 0xb0) +
                                 (ulonglong)(*(int *)(lVar1 + 0x80) - 1) * 8),
                        *(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) + 0x28) +
                         0x230),0);
  *(undefined8 *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)(*(int *)(lVar1 + 0x80) - 1) * 8) = uVar2
  ;
  return;
}



// FUNCTION 1435a5430 FUN_1435a5430 body=81 status=ok
// SIG undefined FUN_1435a5430(void)

void FUN_1435a5430(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  uVar2 = FUN_1435a1fa0(param_1,*(undefined8 *)
                                 (*(longlong *)(lVar1 + 0xb0) +
                                 (ulonglong)(*(int *)(lVar1 + 0x80) - 1) * 8),
                        *(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) + 0x28) +
                         0x238),0);
  *(undefined8 *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)(*(int *)(lVar1 + 0x80) - 1) * 8) = uVar2
  ;
  return;
}



// FUNCTION 1435a5490 FUN_1435a5490 body=81 status=ok
// SIG undefined FUN_1435a5490(void)

void FUN_1435a5490(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  uVar2 = FUN_1435a1fa0(param_1,*(undefined8 *)
                                 (*(longlong *)(lVar1 + 0xb0) +
                                 (ulonglong)(*(int *)(lVar1 + 0x80) - 1) * 8),
                        *(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) + 0x28) +
                         0x228),0);
  *(undefined8 *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)(*(int *)(lVar1 + 0x80) - 1) * 8) = uVar2
  ;
  return;
}



// FUNCTION 1435a54f0 FUN_1435a54f0 body=81 status=ok
// SIG undefined FUN_1435a54f0(void)

void FUN_1435a54f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  uVar2 = FUN_1435a1fa0(param_1,*(undefined8 *)
                                 (*(longlong *)(lVar1 + 0xb0) +
                                 (ulonglong)(*(int *)(lVar1 + 0x80) - 1) * 8),
                        *(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) + 0x28) +
                         0x220),0);
  *(undefined8 *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)(*(int *)(lVar1 + 0x80) - 1) * 8) = uVar2
  ;
  return;
}



// FUNCTION 1435a5550 FUN_1435a5550 body=319 status=ok
// SIG undefined FUN_1435a5550(void)

undefined1 * FUN_1435a5550(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  char *pcVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined8 local_res18;
  longlong local_res20;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar2 = *(longlong *)
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)(lVar1 + 0xb0) + (ulonglong)(*(int *)(lVar1 + 0x80) - 1) * 8) + 8) + 8)
  ;
  if ((lVar2 != 0) &&
     (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x98) + 0x240) + 0xd8) == lVar2)) {
    *param_2 = 1;
    return param_2;
  }
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + -1;
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)*(uint *)(lVar1 + 0x80) * 8);
  local_res20 = *(longlong *)(param_1 + 0x50) + 0x148;
  pcVar5 = (char *)FUN_1435d8230(&local_res20,local_res8,&local_res18,8,lVar2);
  if (*pcVar5 == '\0') {
    *param_2 = 0;
    return param_2;
  }
  bVar4 = (byte)**(undefined4 **)(lVar2 + 8);
  if (((bVar4 & 0x78) < 0x50) || ((bVar4 & 6) == 2)) {
    FUN_1435a9750(param_1,lVar2);
    FUN_14359a010(param_1,local_res18);
  }
  else {
    puVar6 = (undefined8 *)FUN_14359bd30(param_1,8,lVar2,local_res18);
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
    plVar3 = (longlong *)*puVar6;
    *plVar3 = *plVar7;
    plVar3[1] = (longlong)plVar7;
    *(longlong **)(*plVar7 + 8) = plVar3;
    *plVar7 = (longlong)plVar3;
    FUN_143612170(lVar1 + 0x70,puVar6);
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435a56a0 FUN_1435a56a0 body=212 status=ok
// SIG undefined FUN_1435a56a0(void)

void FUN_1435a56a0(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x18);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  lVar3 = FUN_1435c84e0(uVar5,*(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x18),
                        (ulonglong)param_2 * 0x10 +
                        *(longlong *)(*(longlong *)(lVar3 + 0xa0) + 0x148));
  if (lVar3 == 0) {
    uVar4 = FUN_1435c8e40(local_18,0x3f6,uVar5);
    FUN_1435ccf60(uVar5,uVar4,&DAT_145b15be8);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    uVar5 = FUN_1435a1fa0(param_1,*(undefined8 *)
                                   (*(longlong *)(lVar2 + 0xb0) +
                                   (ulonglong)(*(int *)(lVar2 + 0x80) - 1) * 8),lVar3,0);
    *(undefined8 *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)(*(int *)(lVar2 + 0x80) - 1) * 8) =
         uVar5;
  }
  return;
}



// FUNCTION 1435a5780 FUN_1435a5780 body=81 status=ok
// SIG undefined FUN_1435a5780(void)

void FUN_1435a5780(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  uVar2 = FUN_1435a1fa0(param_1,*(undefined8 *)
                                 (*(longlong *)(lVar1 + 0xb0) +
                                 (ulonglong)(*(int *)(lVar1 + 0x80) - 1) * 8),
                        *(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) + 0x28) +
                         0x240),0);
  *(undefined8 *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)(*(int *)(lVar1 + 0x80) - 1) * 8) = uVar2
  ;
  return;
}



// FUNCTION 1435a57e0 FUN_1435a57e0 body=144 status=ok
// SIG undefined FUN_1435a57e0(void)

void FUN_1435a57e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)(*(int *)(lVar1 + 0x80) - 1) * 8);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 8) + 8);
  if ((lVar3 != 0) &&
     ((*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x98) + 0x230) + 0xd8) == lVar3 ||
      ((lVar3 != 0 &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x98) + 0x238) + 0xd8) == lVar3)))))) {
    uVar4 = FUN_1435a1fa0(param_1,lVar2,
                          *(undefined8 *)
                           (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) + 0x28)
                           + 0x228),0);
    *(undefined8 *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)(*(int *)(lVar1 + 0x80) - 1) * 8) =
         uVar4;
  }
  return;
}



// FUNCTION 1435a5880 FUN_1435a5880 body=380 status=ok
// SIG undefined FUN_1435a5880(void)

void FUN_1435a5880(longlong param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 local_28 [8];
  longlong local_20;
  
  lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18);
  uVar3 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  lVar7 = FUN_1435c84e0(uVar3,lVar7,
                        (ulonglong)param_2 * 0x10 +
                        *(longlong *)(*(longlong *)(lVar7 + 0xa0) + 0x148));
  if (lVar7 == 0) {
    uVar8 = FUN_1435c8e40(local_28,0x3f6,uVar3);
    FUN_1435ccf60(uVar3,uVar8,&DAT_145b15be8);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x50);
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    lVar11 = *(longlong *)(param_1 + 0x50);
    uVar3 = *(undefined8 *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)*(uint *)(lVar4 + 0x80) * 8);
    uVar8 = FUN_1435d0db0(lVar11 + 0x148,*(undefined8 *)(lVar7 + 0xd8),0,0);
    uVar9 = FUN_14359c2e0(param_1);
    puVar5 = *(undefined1 **)(lVar11 + 0x268);
    lVar10 = FUN_1435ba1a0(puVar5,0x78,*puVar5);
    lVar11 = 0;
    if (lVar10 != 0) {
      lVar11 = FUN_14360a520(lVar10,0,uVar3,uVar8,lVar7,0,uVar9);
    }
    puVar2 = (undefined8 *)(lVar11 + 0x58);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_143612170(lVar4 + 0x70,puVar2);
      plVar6 = (longlong *)*puVar2;
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
      *plVar6 = *plVar12;
      plVar6[1] = (longlong)plVar12;
      *(longlong **)(*plVar12 + 8) = plVar6;
      *plVar12 = (longlong)plVar6;
    }
  }
  return;
}



// FUNCTION 1435a5a10 FUN_1435a5a10 body=117 status=ok
// SIG undefined FUN_1435a5a10(void)

void FUN_1435a5a10(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  puVar3 = (undefined8 *)
           FUN_14359bf50(param_1,0,param_2,
                         *(undefined8 *)((longlong)param_2 * 8 + *(longlong *)(lVar1 + 0x90)),
                         param_3);
  *(undefined8 **)((longlong)param_2 * 8 + *(longlong *)(lVar1 + 0x90)) = puVar3;
  plVar2 = (longlong *)*puVar3;
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar4;
  plVar2[1] = (longlong)plVar4;
  *(longlong **)(*plVar4 + 8) = plVar2;
  *plVar4 = (longlong)plVar2;
  return;
}



// FUNCTION 1435a5a90 FUN_1435a5a90 body=314 status=ok
// SIG undefined FUN_1435a5a90(void)

void FUN_1435a5a90(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar2 = *(longlong *)((longlong)param_2 * 8 + *(longlong *)(lVar1 + 0x90));
  lVar7 = *(longlong *)(*(longlong *)(lVar2 + 8) + 8);
  if ((lVar7 == 0) ||
     (lVar4 = 0xb8,
     *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x98) + 0x230) + 0xd8) != lVar7)) {
    lVar4 = 0xa8;
  }
  lVar8 = 0;
  if ((lVar7 == 0) ||
     (lVar5 = lVar8,
     *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x98) + 0x230) + 0xd8) != lVar7)) {
    lVar5 = FUN_1435d19c0(lVar1,param_3);
  }
  uVar6 = FUN_14359c2e0(param_1);
  lVar7 = FUN_1435ba1a0(*(undefined1 **)(lVar1 + 0x268),0x78,**(undefined1 **)(lVar1 + 0x268));
  if (lVar7 != 0) {
    lVar8 = FUN_14360a670(lVar7,3,lVar2,lVar4 + 0x148 + lVar1,uVar6,lVar5,param_2);
  }
  *(undefined8 **)((longlong)param_2 * 8 + *(longlong *)(lVar1 + 0x90)) =
       (undefined8 *)(lVar8 + 0x58);
  plVar3 = *(longlong **)(lVar8 + 0x58);
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar3 = *plVar9;
  plVar3[1] = (longlong)plVar9;
  *(longlong **)(*plVar9 + 8) = plVar3;
  *plVar9 = (longlong)plVar3;
  return;
}



// FUNCTION 1435a5bd0 FUN_1435a5bd0 body=343 status=ok
// SIG undefined FUN_1435a5bd0(void)

void FUN_1435a5bd0(longlong param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18);
  uVar3 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18) + 0x28);
  lVar8 = FUN_1435c84e0(uVar3,lVar8,
                        (ulonglong)param_2 * 0x10 +
                        *(longlong *)(*(longlong *)(lVar8 + 0xa0) + 0x148));
  if (lVar8 == 0) {
    uVar9 = FUN_1435c8e40(local_18,0x3f6,uVar3);
    FUN_1435ccf60(uVar3,uVar9,&DAT_145b15be8);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x50);
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    uVar3 = *(undefined8 *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)*(uint *)(lVar4 + 0x80) * 8);
    lVar5 = *(longlong *)(param_1 + 0x50);
    puVar6 = *(undefined1 **)(lVar5 + 0x268);
    lVar10 = FUN_1435ba1a0(puVar6,0x78,*puVar6);
    lVar11 = 0;
    if (lVar10 != 0) {
      lVar11 = FUN_14360a520(lVar10,4,uVar3,lVar5 + 0x1e0,lVar8,0,0);
    }
    puVar2 = (undefined8 *)(lVar11 + 0x58);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_143612170(lVar4 + 0x70,puVar2);
      plVar7 = (longlong *)*puVar2;
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
      *plVar7 = *plVar12;
      plVar7[1] = (longlong)plVar12;
      *(longlong **)(*plVar12 + 8) = plVar7;
      *plVar12 = (longlong)plVar7;
    }
  }
  return;
}



// FUNCTION 1435a5d30 FUN_1435a5d30 body=120 status=ok
// SIG undefined FUN_1435a5d30(void)

void FUN_1435a5d30(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  puVar3 = (undefined8 *)
           FUN_14359bf50(param_1,1,param_2,
                         *(undefined8 *)((longlong)param_2 * 8 + *(longlong *)(lVar1 + 0x90)),
                         param_3);
  *(undefined8 **)((longlong)param_2 * 8 + *(longlong *)(lVar1 + 0x90)) = puVar3;
  plVar2 = (longlong *)*puVar3;
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar2 = *plVar4;
  plVar2[1] = (longlong)plVar4;
  *(longlong **)(*plVar4 + 8) = plVar2;
  *plVar4 = (longlong)plVar2;
  return;
}



// FUNCTION 1435a5db0 FUN_1435a5db0 body=207 status=ok
// SIG undefined FUN_1435a5db0(void)

void FUN_1435a5db0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)((longlong)param_2 * 8 + *(longlong *)(lVar1 + 0x90));
  uVar4 = FUN_14359c2e0();
  lVar5 = FUN_1435ba1a0(*(undefined1 **)(lVar1 + 0x268),0x78,**(undefined1 **)(lVar1 + 0x268));
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = FUN_14360a670(lVar5,4,uVar2,lVar1 + 0x200,uVar4,0,param_2);
  }
  *(undefined8 **)((longlong)param_2 * 8 + *(longlong *)(lVar1 + 0x90)) =
       (undefined8 *)(lVar6 + 0x58);
  plVar3 = *(longlong **)(lVar6 + 0x58);
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar3 = *plVar7;
  plVar3[1] = (longlong)plVar7;
  *(longlong **)(*plVar7 + 8) = plVar3;
  *plVar7 = (longlong)plVar3;
  return;
}



// FUNCTION 1435a5e90 FUN_1435a5e90 body=265 status=ok
// SIG undefined FUN_1435a5e90(void)

void FUN_1435a5e90(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  lVar3 = **(longlong **)(lVar2 + 0x90);
  uVar4 = *(undefined8 *)(lVar3 + 8);
  puVar6 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(lVar2 + 0x268),0x78,**(undefined1 **)(lVar2 + 0x268));
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0xffffffffffffffff;
    plVar5 = puVar6 + 7;
    puVar6[1] = 0xffffffffffffffff;
    plVar7 = (longlong *)(lVar3 + 0x10);
    *(undefined4 *)(puVar6 + 2) = 0x10;
    *(undefined4 *)(puVar6 + 3) = 7;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    *plVar5 = -1;
    puVar6[8] = 0xffffffffffffffff;
    puVar6[9] = puVar6;
    puVar6[10] = lVar3;
    *plVar5 = *plVar7;
    puVar6[8] = plVar7;
    *(longlong **)(*plVar7 + 8) = plVar5;
    puVar1 = puVar6 + 0xd;
    *plVar7 = (longlong)plVar5;
    puVar6[0xb] = puVar6;
    puVar6[0xc] = uVar4;
    *puVar1 = puVar1;
    puVar6[0xe] = puVar1;
  }
  FUN_143612170(lVar2 + 0x70,puVar6 + 0xb);
  plVar5 = (longlong *)puVar6[0xb];
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar5 = *plVar7;
  plVar5[1] = (longlong)plVar7;
  *(longlong **)(*plVar7 + 8) = plVar5;
  *plVar7 = (longlong)plVar5;
  return;
}



// FUNCTION 1435a5fa0 FUN_1435a5fa0 body=275 status=ok
// SIG undefined FUN_1435a5fa0(void)

void FUN_1435a5fa0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x90) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 8);
  puVar6 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(lVar2 + 0x268),0x78,**(undefined1 **)(lVar2 + 0x268));
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = 0xffffffffffffffff;
    plVar5 = puVar6 + 7;
    puVar6[1] = 0xffffffffffffffff;
    plVar7 = (longlong *)(lVar3 + 0x10);
    *(undefined4 *)(puVar6 + 2) = 0x10;
    *(undefined4 *)(puVar6 + 3) = 7;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 1;
    *plVar5 = -1;
    puVar6[8] = 0xffffffffffffffff;
    puVar6[9] = puVar6;
    puVar6[10] = lVar3;
    *plVar5 = *plVar7;
    puVar6[8] = plVar7;
    *(longlong **)(*plVar7 + 8) = plVar5;
    puVar1 = puVar6 + 0xd;
    *plVar7 = (longlong)plVar5;
    puVar6[0xb] = puVar6;
    puVar6[0xc] = uVar4;
    *puVar1 = puVar1;
    puVar6[0xe] = puVar1;
  }
  FUN_143612170(lVar2 + 0x70,puVar6 + 0xb);
  plVar5 = (longlong *)puVar6[0xb];
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar5 = *plVar7;
  plVar5[1] = (longlong)plVar7;
  *(longlong **)(*plVar7 + 8) = plVar5;
  *plVar7 = (longlong)plVar5;
  return;
}



// FUNCTION 1435a60c0 FUN_1435a60c0 body=275 status=ok
// SIG undefined FUN_1435a60c0(void)

void FUN_1435a60c0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x10);
  uVar4 = *(undefined8 *)(lVar3 + 8);
  puVar6 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(lVar2 + 0x268),0x78,**(undefined1 **)(lVar2 + 0x268));
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = 0xffffffffffffffff;
    plVar5 = puVar6 + 7;
    puVar6[1] = 0xffffffffffffffff;
    plVar7 = (longlong *)(lVar3 + 0x10);
    *(undefined4 *)(puVar6 + 2) = 0x10;
    *(undefined4 *)(puVar6 + 3) = 7;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 2;
    *plVar5 = -1;
    puVar6[8] = 0xffffffffffffffff;
    puVar6[9] = puVar6;
    puVar6[10] = lVar3;
    *plVar5 = *plVar7;
    puVar6[8] = plVar7;
    *(longlong **)(*plVar7 + 8) = plVar5;
    puVar1 = puVar6 + 0xd;
    *plVar7 = (longlong)plVar5;
    puVar6[0xb] = puVar6;
    puVar6[0xc] = uVar4;
    *puVar1 = puVar1;
    puVar6[0xe] = puVar1;
  }
  FUN_143612170(lVar2 + 0x70,puVar6 + 0xb);
  plVar5 = (longlong *)puVar6[0xb];
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar5 = *plVar7;
  plVar5[1] = (longlong)plVar7;
  *(longlong **)(*plVar7 + 8) = plVar5;
  *plVar7 = (longlong)plVar5;
  return;
}



// FUNCTION 1435a61e0 FUN_1435a61e0 body=275 status=ok
// SIG undefined FUN_1435a61e0(void)

void FUN_1435a61e0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x18);
  uVar4 = *(undefined8 *)(lVar3 + 8);
  puVar6 = (undefined8 *)
           FUN_1435ba1a0(*(undefined1 **)(lVar2 + 0x268),0x78,**(undefined1 **)(lVar2 + 0x268));
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = 0xffffffffffffffff;
    plVar5 = puVar6 + 7;
    puVar6[1] = 0xffffffffffffffff;
    plVar7 = (longlong *)(lVar3 + 0x10);
    *(undefined4 *)(puVar6 + 2) = 0x10;
    *(undefined4 *)(puVar6 + 3) = 7;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 3;
    *plVar5 = -1;
    puVar6[8] = 0xffffffffffffffff;
    puVar6[9] = puVar6;
    puVar6[10] = lVar3;
    *plVar5 = *plVar7;
    puVar6[8] = plVar7;
    *(longlong **)(*plVar7 + 8) = plVar5;
    puVar1 = puVar6 + 0xd;
    *plVar7 = (longlong)plVar5;
    puVar6[0xb] = puVar6;
    puVar6[0xc] = uVar4;
    *puVar1 = puVar1;
    puVar6[0xe] = puVar1;
  }
  FUN_143612170(lVar2 + 0x70,puVar6 + 0xb);
  plVar5 = (longlong *)puVar6[0xb];
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar5 = *plVar7;
  plVar5[1] = (longlong)plVar7;
  *(longlong **)(*plVar7 + 8) = plVar5;
  *plVar7 = (longlong)plVar5;
  return;
}



// FUNCTION 1435a6300 FUN_1435a6300 body=371 status=ok
// SIG undefined FUN_1435a6300(void)

void FUN_1435a6300(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x90) + 8);
  puVar5 = *(undefined4 **)(lVar4 + 8);
  *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
  plVar6 = *(longlong **)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
  puVar7 = (undefined4 *)plVar6[1];
  FUN_143594aa0(local_res8,lVar3 + 0x260,lVar4,0);
  if ((((((byte)*puVar7 & 0x78) == 8) && (puVar7 == puVar5)) &&
      ((longlong *)plVar6[3] == plVar6 + 2)) &&
     ((((byte)*(undefined4 *)(*plVar6 + 0x10) & 0x1f) != 1 &&
      (pcVar9 = (char *)FUN_143594910(local_res8), *pcVar9 != '\0')))) {
    return;
  }
  lVar4 = plVar6[1];
  puVar8 = *(undefined1 **)(*(longlong *)(param_1 + 0x50) + 0x268);
  puVar10 = (undefined8 *)FUN_1435ba1a0(puVar8,0x78,*puVar8);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    *puVar10 = 0xffffffffffffffff;
    plVar11 = puVar10 + 7;
    puVar10[1] = 0xffffffffffffffff;
    plVar1 = plVar6 + 2;
    *(undefined4 *)(puVar10 + 2) = 0x10;
    *(undefined4 *)(puVar10 + 3) = 6;
    puVar10[4] = 0;
    puVar10[5] = 0;
    *(undefined4 *)(puVar10 + 6) = 1;
    *plVar11 = -1;
    puVar10[8] = 0xffffffffffffffff;
    puVar10[9] = puVar10;
    puVar10[10] = plVar6;
    *plVar11 = *plVar1;
    puVar10[8] = plVar1;
    *(longlong **)(*plVar1 + 8) = plVar11;
    puVar2 = puVar10 + 0xd;
    *plVar1 = (longlong)plVar11;
    puVar10[0xb] = puVar10;
    puVar10[0xc] = lVar4;
    *puVar2 = puVar2;
    puVar10[0xe] = puVar2;
  }
  *(undefined8 **)(*(longlong *)(lVar3 + 0x90) + 8) = puVar10 + 0xb;
  plVar6 = (longlong *)puVar10[0xb];
  plVar11 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar6 = *plVar11;
  plVar6[1] = (longlong)plVar11;
  *(longlong **)(*plVar11 + 8) = plVar6;
  *plVar11 = (longlong)plVar6;
  return;
}



// FUNCTION 1435a6480 FUN_1435a6480 body=371 status=ok
// SIG undefined FUN_1435a6480(void)

void FUN_1435a6480(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x90) + 0x10);
  puVar5 = *(undefined4 **)(lVar4 + 8);
  *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
  plVar6 = *(longlong **)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
  puVar7 = (undefined4 *)plVar6[1];
  FUN_143594aa0(local_res8,lVar3 + 0x260,lVar4,0);
  if ((((((byte)*puVar7 & 0x78) == 8) && (puVar7 == puVar5)) &&
      ((longlong *)plVar6[3] == plVar6 + 2)) &&
     ((((byte)*(undefined4 *)(*plVar6 + 0x10) & 0x1f) != 1 &&
      (pcVar9 = (char *)FUN_143594910(local_res8), *pcVar9 != '\0')))) {
    return;
  }
  lVar4 = plVar6[1];
  puVar8 = *(undefined1 **)(*(longlong *)(param_1 + 0x50) + 0x268);
  puVar10 = (undefined8 *)FUN_1435ba1a0(puVar8,0x78,*puVar8);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    *puVar10 = 0xffffffffffffffff;
    plVar11 = puVar10 + 7;
    puVar10[1] = 0xffffffffffffffff;
    plVar1 = plVar6 + 2;
    *(undefined4 *)(puVar10 + 2) = 0x10;
    *(undefined4 *)(puVar10 + 3) = 6;
    puVar10[4] = 0;
    puVar10[5] = 0;
    *(undefined4 *)(puVar10 + 6) = 2;
    *plVar11 = -1;
    puVar10[8] = 0xffffffffffffffff;
    puVar10[9] = puVar10;
    puVar10[10] = plVar6;
    *plVar11 = *plVar1;
    puVar10[8] = plVar1;
    *(longlong **)(*plVar1 + 8) = plVar11;
    puVar2 = puVar10 + 0xd;
    *plVar1 = (longlong)plVar11;
    puVar10[0xb] = puVar10;
    puVar10[0xc] = lVar4;
    *puVar2 = puVar2;
    puVar10[0xe] = puVar2;
  }
  *(undefined8 **)(*(longlong *)(lVar3 + 0x90) + 0x10) = puVar10 + 0xb;
  plVar6 = (longlong *)puVar10[0xb];
  plVar11 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar6 = *plVar11;
  plVar6[1] = (longlong)plVar11;
  *(longlong **)(*plVar11 + 8) = plVar6;
  *plVar11 = (longlong)plVar6;
  return;
}



// FUNCTION 1435a6600 FUN_1435a6600 body=371 status=ok
// SIG undefined FUN_1435a6600(void)

void FUN_1435a6600(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x90) + 0x18);
  puVar5 = *(undefined4 **)(lVar4 + 8);
  *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
  plVar6 = *(longlong **)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
  puVar7 = (undefined4 *)plVar6[1];
  FUN_143594aa0(local_res8,lVar3 + 0x260,lVar4,0);
  if ((((((byte)*puVar7 & 0x78) == 8) && (puVar7 == puVar5)) &&
      ((longlong *)plVar6[3] == plVar6 + 2)) &&
     ((((byte)*(undefined4 *)(*plVar6 + 0x10) & 0x1f) != 1 &&
      (pcVar9 = (char *)FUN_143594910(local_res8), *pcVar9 != '\0')))) {
    return;
  }
  lVar4 = plVar6[1];
  puVar8 = *(undefined1 **)(*(longlong *)(param_1 + 0x50) + 0x268);
  puVar10 = (undefined8 *)FUN_1435ba1a0(puVar8,0x78,*puVar8);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    *puVar10 = 0xffffffffffffffff;
    plVar11 = puVar10 + 7;
    puVar10[1] = 0xffffffffffffffff;
    plVar1 = plVar6 + 2;
    *(undefined4 *)(puVar10 + 2) = 0x10;
    *(undefined4 *)(puVar10 + 3) = 6;
    puVar10[4] = 0;
    puVar10[5] = 0;
    *(undefined4 *)(puVar10 + 6) = 3;
    *plVar11 = -1;
    puVar10[8] = 0xffffffffffffffff;
    puVar10[9] = puVar10;
    puVar10[10] = plVar6;
    *plVar11 = *plVar1;
    puVar10[8] = plVar1;
    *(longlong **)(*plVar1 + 8) = plVar11;
    puVar2 = puVar10 + 0xd;
    *plVar1 = (longlong)plVar11;
    puVar10[0xb] = puVar10;
    puVar10[0xc] = lVar4;
    *puVar2 = puVar2;
    puVar10[0xe] = puVar2;
  }
  *(undefined8 **)(*(longlong *)(lVar3 + 0x90) + 0x18) = puVar10 + 0xb;
  plVar6 = (longlong *)puVar10[0xb];
  plVar11 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar6 = *plVar11;
  plVar6[1] = (longlong)plVar11;
  *(longlong **)(*plVar11 + 8) = plVar6;
  *plVar11 = (longlong)plVar6;
  return;
}



// FUNCTION 1435a6780 FUN_1435a6780 body=187 status=ok
// SIG undefined FUN_1435a6780(void)

void FUN_1435a6780(longlong param_1,ulonglong *param_2,undefined4 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  iVar3 = FUN_14358f6d0(*(undefined8 *)(lVar1 + 0x48));
  uVar2 = *param_2;
  for (puVar6 = *(undefined8 **)(lVar1 + 0x100); puVar6 != (undefined8 *)(lVar1 + 0xf8);
      puVar6 = (undefined8 *)puVar6[1]) {
    if ((longlong)iVar3 + uVar2 == puVar6[8]) goto LAB_1435a67da;
    if ((longlong)iVar3 + uVar2 < (ulonglong)puVar6[8]) break;
  }
  puVar6 = (undefined8 *)*puVar6;
LAB_1435a67da:
  for (puVar5 = *(undefined8 **)(lVar1 + 0x100); puVar5 != (undefined8 *)(lVar1 + 0xf8);
      puVar5 = (undefined8 *)puVar5[1]) {
    if (uVar2 == puVar5[8]) goto LAB_1435a67fa;
    if (uVar2 < (ulonglong)puVar5[8]) break;
  }
  puVar5 = (undefined8 *)*puVar5;
LAB_1435a67fa:
  uVar4 = FUN_143595330(param_3);
  FUN_143598ac0(param_1,local_res8,uVar4,param_1,puVar6[0xb],puVar5[0xb]);
  return;
}



// FUNCTION 1435a6850 FUN_1435a6850 body=225 status=ok
// SIG undefined FUN_1435a6850(void)

undefined1 * FUN_1435a6850(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  iVar3 = FUN_14358f6d0(*(undefined8 *)(lVar2 + 0x48),param_3);
  for (puVar4 = *(undefined8 **)(lVar2 + 0x100); puVar4 != (undefined8 *)(lVar2 + 0xf8);
      puVar4 = (undefined8 *)puVar4[1]) {
    if ((longlong)iVar3 + *param_3 == puVar4[8]) goto LAB_1435a68a8;
    if ((ulonglong)((longlong)iVar3 + *param_3) < (ulonglong)puVar4[8]) break;
  }
  puVar4 = (undefined8 *)*puVar4;
LAB_1435a68a8:
  lVar2 = *(longlong *)(puVar4[0xb] + 0x38);
  iVar3 = *(int *)(lVar2 + 0x18);
  iVar1 = *(int *)(*(longlong *)(lVar2 + 0x58) + 0x30);
  plVar5 = (longlong *)FUN_14359c100(param_1);
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *plVar5 = *plVar7;
  plVar5[1] = (longlong)plVar7;
  *(longlong **)(*plVar7 + 8) = plVar5;
  *plVar7 = (longlong)plVar5;
  if (((*(byte *)(lVar2 + 0x10) & 1) == 0) ||
     ((iVar1 == iVar3) == (*(int *)(*(longlong *)(lVar2 + 0x58) + 0x30) == *(int *)(lVar2 + 0x18))))
  {
    *param_2 = 1;
  }
  else {
    puVar6 = (undefined1 *)
             FUN_1435dab90(local_res8,*(longlong *)(lVar2 + 0x58),
                           *(longlong *)(param_1 + 0x50) + 0x148);
    *param_2 = *puVar6;
  }
  return param_2;
}



// FUNCTION 1435a6940 FUN_1435a6940 body=1334 status=ok
// SIG undefined FUN_1435a6940(void)

undefined1 * FUN_1435a6940(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  char *pcVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 local_res8 [8];
  undefined1 *local_res10;
  undefined8 local_res18;
  longlong *local_res20;
  uint local_70 [2];
  int *local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  lVar5 = *(longlong *)(param_1 + 0x50);
  lVar6 = *(longlong *)(lVar5 + 0x28);
  local_res10 = param_2;
  local_res18 = param_3;
  iVar8 = FUN_14358f6d0(*(undefined8 *)(lVar5 + 0x48),param_3);
  iVar9 = FUN_14358f710(*(undefined8 *)(lVar5 + 0x48),param_3);
  puVar2 = (undefined8 *)(lVar5 + 0xf8);
  for (puVar20 = *(undefined8 **)(lVar5 + 0x100); puVar20 != puVar2;
      puVar20 = (undefined8 *)puVar20[1]) {
    if (iVar8 + lVar6 == puVar20[8]) goto LAB_1435a69c7;
    if ((ulonglong)(iVar8 + lVar6) < (ulonglong)puVar20[8]) break;
  }
  puVar20 = (undefined8 *)*puVar20;
LAB_1435a69c7:
  lVar13 = *(longlong *)(param_1 + 0x50);
  *(int *)(lVar13 + 0x80) = *(int *)(lVar13 + 0x80) + -1;
  lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)*(uint *)(lVar13 + 0x80) * 8);
  bVar7 = (byte)**(undefined4 **)(lVar13 + 8);
  if (((bVar7 & 0x78) < 0x50) || ((bVar7 & 6) == 2)) {
    lVar15 = FUN_1435944b0(local_70);
    iVar8 = *(int *)(lVar15 + 0x10);
    uVar10 = local_70[0] & 0x1f;
    if (9 < uVar10) {
      if ((local_70[0] >> 9 & 1) == 0) {
        if (uVar10 == 10) {
          piVar1 = (int *)(local_60 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else if ((((uVar10 == 0xb) || (uVar10 == 0xc)) || (local_60 = local_58, uVar10 - 0xd < 2))
                && ((((local_60 & 1) == 0 && (local_60 != 0)) &&
                    ((*(uint *)(local_60 + 8) & 0x3fffff) != 0)))) {
          *(uint *)(local_60 + 8) = *(uint *)(local_60 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *local_68 = *local_68 + -1;
        if (*local_68 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
    FUN_1435a9750(param_1,lVar13);
    if ((iVar8 < 0) || (iVar9 < iVar8)) {
      lVar13 = *(longlong *)(puVar20[0xb] + 0x38);
      iVar8 = *(int *)(lVar13 + 0x18);
      iVar11 = *(int *)(*(longlong *)(lVar13 + 0x58) + 0x30);
      plVar12 = (longlong *)FUN_14359c100(param_1);
      plVar16 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
      *plVar12 = *plVar16;
      plVar12[1] = (longlong)plVar16;
      *(longlong **)(*plVar16 + 8) = plVar12;
      *plVar16 = (longlong)plVar12;
      if (((*(byte *)(lVar13 + 0x10) & 1) != 0) &&
         (((iVar11 == iVar8) !=
           (*(int *)(*(longlong *)(lVar13 + 0x58) + 0x30) == *(int *)(lVar13 + 0x18)) &&
          (pcVar14 = (char *)FUN_1435dab90(local_res8,*(longlong *)(lVar13 + 0x58),
                                           *(longlong *)(param_1 + 0x50) + 0x148), *pcVar14 == '\0')
          ))) goto LAB_1435a6d5b;
      iVar8 = 0;
      if (-1 < iVar9) {
        do {
          iVar11 = FUN_14358f6d0(*(undefined8 *)(lVar5 + 0x48),local_res18);
          for (puVar17 = *(undefined8 **)(lVar5 + 0x100); puVar17 != puVar2;
              puVar17 = (undefined8 *)puVar17[1]) {
            if (iVar11 + lVar6 == puVar17[8]) goto LAB_1435a6e37;
            if ((ulonglong)(iVar11 + lVar6) < (ulonglong)puVar17[8]) break;
          }
          puVar17 = (undefined8 *)*puVar17;
LAB_1435a6e37:
          if ((puVar20 != puVar17) &&
             (pcVar14 = (char *)FUN_1435a9390(param_1,local_res8,puVar17,param_1), *pcVar14 == '\0')
             ) goto LAB_1435a6d5b;
          iVar8 = iVar8 + 1;
        } while (iVar8 <= iVar9);
      }
    }
    else {
      puVar19 = (undefined8 *)0x0;
      puVar17 = puVar19;
      if (-1 < iVar9) {
        do {
          iVar11 = FUN_14358f6d0(*(undefined8 *)(lVar5 + 0x48),local_res18);
          for (puVar18 = *(undefined8 **)(lVar5 + 0x100); puVar18 != puVar2;
              puVar18 = (undefined8 *)puVar18[1]) {
            if (iVar11 + lVar6 == puVar18[8]) goto LAB_1435a6c7e;
            if ((ulonglong)(iVar11 + lVar6) < (ulonglong)puVar18[8]) break;
          }
          puVar18 = (undefined8 *)*puVar18;
LAB_1435a6c7e:
          if (iVar8 == (int)puVar19) {
            lVar13 = *(longlong *)(puVar18[0xb] + 0x38);
            iVar11 = *(int *)(lVar13 + 0x18);
            iVar4 = *(int *)(*(longlong *)(lVar13 + 0x58) + 0x30);
            plVar12 = (longlong *)FUN_14359c100(param_1);
            plVar16 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
            *plVar12 = *plVar16;
            plVar12[1] = (longlong)plVar16;
            *(longlong **)(*plVar16 + 8) = plVar12;
            *plVar16 = (longlong)plVar12;
            puVar17 = puVar18;
            if (((*(byte *)(lVar13 + 0x10) & 1) != 0) &&
               ((iVar4 == iVar11) !=
                (*(int *)(*(longlong *)(lVar13 + 0x58) + 0x30) == *(int *)(lVar13 + 0x18)))) {
              pcVar14 = (char *)FUN_1435dab90(local_res8,*(longlong *)(lVar13 + 0x58),
                                              *(longlong *)(param_1 + 0x50) + 0x148);
              cVar3 = *pcVar14;
joined_r0x0001435a6d1d:
              puVar17 = puVar18;
              if (cVar3 == '\0') goto LAB_1435a6d64;
            }
          }
          else if (puVar20 != puVar18) {
            pcVar14 = (char *)FUN_1435a9390(param_1,&local_res20,puVar18,param_1);
            cVar3 = *pcVar14;
            puVar18 = puVar17;
            goto joined_r0x0001435a6d1d;
          }
          uVar10 = (int)puVar19 + 1;
          puVar19 = (undefined8 *)(ulonglong)uVar10;
          param_2 = local_res10;
        } while ((int)uVar10 <= iVar9);
      }
      if ((puVar20 != puVar17) &&
         (pcVar14 = (char *)FUN_1435a9390(param_1,local_res8,puVar20,param_1), *pcVar14 == '\0')) {
LAB_1435a6d5b:
        *param_2 = 0;
        return param_2;
      }
    }
  }
  else {
    plVar12 = (longlong *)FUN_143597900(lVar5 + 0x260,lVar13,iVar9);
    plVar16 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
    *plVar12 = *plVar16;
    plVar12[1] = (longlong)plVar16;
    *(longlong **)(*plVar16 + 8) = plVar12;
    *plVar16 = (longlong)plVar12;
    iVar8 = *(int *)(puVar20 + 3);
    iVar11 = *(int *)(puVar20[0xb] + 0x30);
    local_res20 = plVar12;
    lVar13 = FUN_14359c100(param_1);
    plVar12[4] = lVar13;
    if (((*(byte *)(puVar20 + 2) & 1) != 0) &&
       (((iVar11 == iVar8) != (*(int *)(puVar20[0xb] + 0x30) == *(int *)(puVar20 + 3)) &&
        (pcVar14 = (char *)FUN_1435dab90(local_res8,puVar20[0xb],
                                         *(longlong *)(param_1 + 0x50) + 0x148), *pcVar14 == '\0')))
       ) goto LAB_1435a6d5b;
    lVar13 = 0;
    if (-1 < iVar9) {
      plVar16 = plVar12 + 9;
      do {
        iVar8 = FUN_14358f6d0(*(undefined8 *)(lVar5 + 0x48),local_res18);
        for (puVar17 = *(undefined8 **)(lVar5 + 0x100); puVar17 != puVar2;
            puVar17 = (undefined8 *)puVar17[1]) {
          if (iVar8 + lVar6 == puVar17[8]) goto LAB_1435a6aea;
          if ((ulonglong)(iVar8 + lVar6) < (ulonglong)puVar17[8]) break;
        }
        puVar17 = (undefined8 *)*puVar17;
LAB_1435a6aea:
        if (puVar20 == puVar17) {
          *plVar16 = plVar12[4];
        }
        else {
          iVar8 = *(int *)(puVar17 + 3);
          iVar11 = *(int *)(puVar17[0xb] + 0x30);
          lVar15 = FUN_14359c100(param_1);
          *plVar16 = lVar15;
          plVar12 = local_res20;
          if ((((*(byte *)(puVar17 + 2) & 1) != 0) &&
              ((iVar11 == iVar8) != (*(int *)(puVar17[0xb] + 0x30) == *(int *)(puVar17 + 3)))) &&
             (pcVar14 = (char *)FUN_1435dab90(local_res8,puVar17[0xb],
                                              *(longlong *)(param_1 + 0x50) + 0x148),
             plVar12 = local_res20, *pcVar14 == '\0')) {
LAB_1435a6d64:
            *local_res10 = 0;
            return local_res10;
          }
        }
        lVar13 = lVar13 + 1;
        plVar16 = plVar16 + 1;
        param_2 = local_res10;
      } while (lVar13 <= iVar9);
    }
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435a6e80 FUN_1435a6e80 body=1005 status=ok
// SIG undefined FUN_1435a6e80(void)

undefined1 * FUN_1435a6e80(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong uVar12;
  undefined8 local_res8;
  uint local_res18;
  uint local_res1c;
  uint local_res20;
  undefined1 local_48 [8];
  longlong local_40;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x40) == 0) {
    lVar9 = 0;
    plVar4 = (longlong *)
             FUN_1435977d0(lVar2 + 0x260,1,*(undefined8 *)(param_1 + 0x58),
                           *(undefined8 *)(lVar2 + 0x280),0,0,0,0,*(undefined8 *)(lVar2 + 0x88));
    local_res18 = *(uint *)(lVar2 + 0x80);
    local_res20 = *(uint *)(lVar2 + 0x84);
    if (1 < *(uint *)(lVar2 + 0x7c)) {
      lVar10 = 8;
      uVar12 = (ulonglong)(*(uint *)(lVar2 + 0x7c) - 1);
      do {
        FUN_143594aa0(&local_res8,lVar2 + 0x260,
                      *(undefined8 *)(lVar10 + *(longlong *)(lVar2 + 0x90)),0);
        lVar10 = lVar10 + 8;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if (local_res18 != 0) {
      uVar12 = (ulonglong)local_res18;
      lVar10 = lVar9;
      do {
        FUN_143594aa0(&local_res8,lVar2 + 0x260,
                      *(undefined8 *)(lVar10 + *(longlong *)(lVar2 + 0xb0)),0);
        lVar10 = lVar10 + 8;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if (local_res20 != 0) {
      uVar12 = (ulonglong)local_res20;
      do {
        FUN_143594aa0(&local_res8,lVar2 + 0x260,*(undefined8 *)(lVar9 + *(longlong *)(lVar2 + 0xd0))
                      ,0);
        lVar9 = lVar9 + 8;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x18);
    lVar9 = *(longlong *)(lVar10 + 0xa0);
    uVar5 = *(undefined8 *)(lVar10 + 0x28);
    local_res8 = *(undefined8 *)
                  (*(longlong *)(lVar9 + 0x30) + (ulonglong)*(uint *)(lVar2 + 0x108) * 8);
    Scaleform::GFx::AS3::Abc::ReadMethodInfoSmallHeader(&local_res8,&local_res18);
    piVar11 = (int *)((ulonglong)local_res1c * 0x10 + *(longlong *)(lVar9 + 0x148));
    lVar9 = 0;
    if ((((piVar11[3] != 0) || (piVar11[2] != 0)) || (lVar6 = lVar9, *piVar11 != 0)) &&
       (lVar6 = FUN_1435c84e0(uVar5,lVar10), lVar6 == 0)) {
      uVar7 = FUN_1435c8e40(local_48,0x3f6,uVar5);
      FUN_1435ccf60(uVar5,uVar7,&DAT_145b14e70);
      piVar11 = (int *)(local_40 + 0x18);
      *piVar11 = *piVar11 + -1;
      if (*piVar11 == 0) {
        FUN_14335f920();
      }
      *param_2 = 0;
      return param_2;
    }
    uVar5 = FUN_1435a1fa0(param_1,*(undefined8 *)
                                   (*(longlong *)(lVar2 + 0xb0) +
                                   (ulonglong)(*(int *)(lVar2 + 0x80) - 1) * 8),lVar6,0);
    *(undefined8 *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)(*(int *)(lVar2 + 0x80) - 1) * 8) =
         uVar5;
    lVar2 = *(longlong *)(param_1 + 0x50);
    plVar4 = (longlong *)
             FUN_1435977d0(lVar2 + 0x260,2,*(undefined8 *)(param_1 + 0x58),
                           *(undefined8 *)(lVar2 + 0x280),0,1,0,0,*(undefined8 *)(lVar2 + 0x88));
    *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + -1;
    local_res18 = *(uint *)(lVar2 + 0x84);
    uVar1 = *(uint *)(lVar2 + 0x7c);
    lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)*(uint *)(lVar2 + 0x80) * 8);
    puVar3 = (undefined8 *)plVar4[8];
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0xffffffffffffffff;
      puVar3[1] = 0xffffffffffffffff;
      puVar3[2] = plVar4;
      puVar3[3] = lVar10;
      if (lVar10 != 0) {
        plVar8 = (longlong *)(lVar10 + 0x10);
        *puVar3 = *(undefined8 *)(lVar10 + 0x10);
        puVar3[1] = plVar8;
        *(undefined8 **)(*plVar8 + 8) = puVar3;
        *plVar8 = (longlong)puVar3;
      }
    }
    if (1 < uVar1) {
      lVar10 = 8;
      uVar12 = (ulonglong)(uVar1 - 1);
      do {
        FUN_143594aa0(&local_res8,lVar2 + 0x260,
                      *(undefined8 *)(lVar10 + *(longlong *)(lVar2 + 0x90)),0);
        lVar10 = lVar10 + 8;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if (*(uint *)(lVar2 + 0x80) != 0) {
      uVar12 = (ulonglong)*(uint *)(lVar2 + 0x80);
      lVar10 = lVar9;
      do {
        FUN_143594aa0(&local_res8,lVar2 + 0x260,
                      *(undefined8 *)(lVar10 + *(longlong *)(lVar2 + 0xb0)),0);
        lVar10 = lVar10 + 8;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if (local_res18 != 0) {
      uVar12 = (ulonglong)local_res18;
      do {
        FUN_143594aa0(&local_res8,lVar2 + 0x260,*(undefined8 *)(lVar9 + *(longlong *)(lVar2 + 0xd0))
                      ,0);
        lVar9 = lVar9 + 8;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  plVar8 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
  *param_2 = 1;
  *plVar4 = *plVar8;
  plVar4[1] = (longlong)plVar8;
  *(longlong **)(*plVar8 + 8) = plVar4;
  *plVar8 = (longlong)plVar4;
  return param_2;
}



// FUNCTION 1435a7280 FUN_1435a7280 body=5021 status=ok
// SIG undefined FUN_1435a7280(void)

undefined1 *
FUN_1435a7280(longlong param_1,undefined1 *param_2,undefined4 param_3,longlong *param_4)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined1 uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong local_res8;
  undefined1 *local_res10;
  undefined1 local_res18 [8];
  ulonglong in_stack_ffffffffffffff48;
  longlong *local_80;
  longlong local_78;
  undefined1 local_70 [56];
  
  local_res10 = param_2;
  FUN_1432c5960(local_70,DAT_146b62f28);
  lVar3 = *(longlong *)(param_1 + 0x50);
  uVar16 = 1;
  lVar15 = *(longlong *)(lVar3 + 0x48);
  switch(param_3) {
  case 2:
  case 4:
  case 5:
  case 9:
  case 0x45:
  case 0x46:
  case 0x4a:
  case 0x4c:
  case 0x4e:
  case 0x4f:
  case 0x5d:
  case 0x5e:
  case 0x60:
  case 0x61:
  case 0x66:
  case 0x68:
    break;
  case 3:
    FUN_1435a2d60(param_1);
    break;
  case 6:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a2ef0(param_1,uVar8);
    break;
  case 7:
    FUN_1435a2fe0(param_1);
    break;
  case 8:
    uVar5 = FUN_14358f710(lVar15,param_4);
    lVar3 = *(longlong *)(param_1 + 0x50);
    FUN_143594aa0(local_res18,lVar3 + 0x260,
                  *(undefined8 *)(*(longlong *)(lVar3 + 0x90) + (ulonglong)uVar5 * 8),1);
    *(longlong *)(*(longlong *)(lVar3 + 0x90) + (ulonglong)uVar5 * 8) = lVar3 + 0x290;
    break;
  default:
    uVar14 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x18) + 0x28);
    uVar12 = FUN_1435c8e40(&local_80,0x3e9,uVar14);
    FUN_1435ccf60(uVar14,uVar12,&DAT_145b15be8);
    piVar1 = (int *)(local_78 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    goto LAB_1435a85ef;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    FUN_1435a6780(param_1,param_4,param_3);
    break;
  case 0x10:
    puVar11 = (undefined1 *)FUN_1435a6850(param_1,local_res18,param_4);
    uVar16 = *puVar11;
    break;
  case 0x1b:
    puVar11 = (undefined1 *)FUN_1435a6940(param_1,local_res18,param_4);
    uVar16 = *puVar11;
    break;
  case 0x1c:
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    uVar14 = *(undefined8 *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
    local_res10 = (undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x148);
    pcVar10 = (char *)FUN_1435d8230(&local_res10,local_res18,&local_res8,0xd,uVar14);
    if (*pcVar10 != '\0') {
      uVar12 = 0xd;
LAB_1435a73fe:
      puVar9 = (undefined8 *)FUN_14359bd30(param_1,uVar12,uVar14,local_res8);
      plVar17 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
      plVar13 = (longlong *)*puVar9;
      *plVar13 = *plVar17;
      plVar13[1] = (longlong)plVar17;
      *(longlong **)(*plVar17 + 8) = plVar13;
      *plVar17 = (longlong)plVar13;
      FUN_143612210(lVar3 + 0x70,puVar9);
LAB_1435a7438:
      uVar16 = 1;
      break;
    }
    goto LAB_1435a85ef;
  case 0x1d:
    FUN_1435a3190(param_1);
    break;
  case 0x1e:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,0x16);
    uVar16 = *puVar11;
    break;
  case 0x1f:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,0x1a);
    uVar16 = *puVar11;
    break;
  case 0x20:
    FUN_14359a0c0(param_1);
    break;
  case 0x21:
    FUN_14359a1e0(param_1);
    break;
  case 0x23:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,0xe);
    uVar16 = *puVar11;
    break;
  case 0x24:
    uVar2 = *(undefined1 *)(*param_4 + lVar15);
    *param_4 = *param_4 + 1;
    FUN_1435a3240(param_1,uVar2);
    break;
  case 0x25:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a32b0(param_1,uVar8);
    break;
  case 0x26:
    FUN_14359a290(param_1,0x140000001);
    break;
  case 0x27:
    FUN_14359a290(param_1,0);
    break;
  case 0x28:
    uVar8 = Scaleform::GFx::NumberUtil::NaN();
    FUN_14359a3d0(param_1,uVar8);
    break;
  case 0x29:
    FUN_1435a3320(param_1);
    break;
  case 0x2a:
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    uVar14 = *(undefined8 *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
    local_res10 = (undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x148);
    pcVar10 = (char *)FUN_1435d8230(&local_res10,local_res18,&local_res8,0xb,uVar14);
    if (*pcVar10 != '\0') {
      puVar9 = (undefined8 *)FUN_14359bd30(param_1,0xb,uVar14,local_res8);
      FUN_143612170(lVar3 + 0x70,uVar14);
      plVar13 = (longlong *)*puVar9;
      plVar17 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
      *plVar13 = *plVar17;
      plVar13[1] = (longlong)plVar17;
      *(longlong **)(*plVar17 + 8) = plVar13;
      *plVar17 = (longlong)plVar13;
      FUN_143612170(lVar3 + 0x70,puVar9);
      uVar16 = 1;
      break;
    }
    goto LAB_1435a85ef;
  case 0x2b:
    FUN_14359b520(param_1);
    break;
  case 0x2c:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a33e0(param_1,uVar8);
    break;
  case 0x2d:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a34d0(param_1,uVar8);
    break;
  case 0x2e:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a3550(param_1,uVar8);
    break;
  case 0x2f:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a35d0(param_1,uVar8);
    break;
  case 0x30:
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    uVar14 = *(undefined8 *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
    local_res10 = (undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x148);
    pcVar10 = (char *)FUN_1435d8230(&local_res10,local_res18,&local_res8,0xc,uVar14);
    if (*pcVar10 != '\0') {
      uVar12 = 0xc;
      goto LAB_1435a73fe;
    }
    goto LAB_1435a85ef;
  case 0x31:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a3660(param_1,uVar8);
    break;
  case 0x32:
    uVar8 = FUN_14358f710(lVar15,param_4);
    uVar6 = FUN_14358f710(lVar15,param_4);
    FUN_14359b5e0(param_1,uVar8,uVar6);
    break;
  case 0x35:
    FUN_1435a36f0(param_1);
    break;
  case 0x36:
    FUN_1435a3750(param_1);
    break;
  case 0x37:
    FUN_1435a37b0(param_1);
    break;
  case 0x38:
    FUN_1435a3810(param_1);
    break;
  case 0x39:
    FUN_1435a3870(param_1);
    break;
  case 0x3a:
    FUN_1435a38d0(param_1);
    break;
  case 0x3b:
    FUN_1435a3930(param_1);
    break;
  case 0x3c:
    FUN_1435a3990(param_1);
    break;
  case 0x3d:
    FUN_1435a39f0(param_1);
    break;
  case 0x3e:
    FUN_1435a3a50(param_1);
    break;
  case 0x40:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a3ab0(param_1,uVar8);
    break;
  case 0x41:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a3b50(param_1,uVar8);
    break;
  case 0x42:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a3cc0(param_1,uVar8);
    break;
  case 0x43:
  case 0x44:
  case 0xd4:
    uVar14 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x18) + 0x28);
    uVar12 = FUN_1435c8e40(&local_80,0x3e9,uVar14);
    FUN_1435ccf60(uVar14,uVar12,&DAT_145b15be8);
    piVar1 = (int *)(local_78 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    break;
  case 0x47:
    lVar15 = 0;
    local_80 = (longlong *)
               FUN_1435977d0(lVar3 + 0x260,1,*(undefined8 *)(param_1 + 0x58),
                             *(undefined8 *)(lVar3 + 0x280),
                             in_stack_ffffffffffffff48 & 0xffffffff00000000,0,0,0,
                             *(undefined8 *)(lVar3 + 0x88));
    uVar5 = *(uint *)(lVar3 + 0x84);
    local_res8 = CONCAT44(local_res8._4_4_,*(uint *)(lVar3 + 0x80));
    uVar7 = *(uint *)(lVar3 + 0x80);
    if (1 < *(uint *)(lVar3 + 0x7c)) {
      lVar19 = 8;
      uVar18 = (ulonglong)(*(uint *)(lVar3 + 0x7c) - 1);
      do {
        FUN_143594aa0(local_res18,lVar3 + 0x260,
                      *(undefined8 *)(lVar19 + *(longlong *)(lVar3 + 0x90)),0);
        lVar19 = lVar19 + 8;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
      uVar7 = (uint)local_res8;
    }
    if (uVar7 != 0) {
      uVar18 = (ulonglong)uVar7;
      lVar19 = lVar15;
      do {
        FUN_143594aa0(local_res18,lVar3 + 0x260,
                      *(undefined8 *)(lVar19 + *(longlong *)(lVar3 + 0xb0)),0);
        lVar19 = lVar19 + 8;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    if (uVar5 != 0) {
      uVar18 = (ulonglong)uVar5;
      do {
        FUN_143594aa0(local_res18,lVar3 + 0x260,
                      *(undefined8 *)(lVar15 + *(longlong *)(lVar3 + 0xd0)),0);
        lVar15 = lVar15 + 8;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    plVar13 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
    *local_80 = *plVar13;
    local_80[1] = (longlong)plVar13;
    *(longlong **)(*plVar13 + 8) = local_80;
    *plVar13 = (longlong)local_80;
    param_2 = local_res10;
    break;
  case 0x48:
    puVar11 = (undefined1 *)FUN_1435a6e80(param_1,local_res18);
    uVar16 = *puVar11;
    break;
  case 0x49:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a3d60(param_1,uVar8);
    break;
  case 0x50:
    FUN_1435a3e70(param_1);
    break;
  case 0x51:
    FUN_1435a3ed0(param_1);
    break;
  case 0x52:
    FUN_1435a3f30(param_1);
    break;
  case 0x53:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a3f90(param_1,uVar8);
    break;
  case 0x55:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a4250(param_1,uVar8);
    break;
  case 0x56:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a4350(param_1,uVar8);
    break;
  case 0x57:
    FUN_1435a4450(param_1);
    break;
  case 0x58:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a44f0(param_1,uVar8);
    break;
  case 0x59:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a4640(param_1,uVar8);
    break;
  case 0x5a:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a4860(param_1,uVar8);
    break;
  case 0x62:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a4950(param_1,uVar8);
    break;
  case 99:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a4a10(param_1,uVar8);
    break;
  case 100:
    FUN_1435a4b40(param_1,0);
    break;
  case 0x65:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a4c80(param_1,uVar8);
    break;
  case 0x6a:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a4d30(param_1,uVar8);
    break;
  case 0x6c:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a4ee0(param_1,uVar8,0);
    break;
  case 0x6d:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a5130(param_1,uVar8,0);
    break;
  case 0x6e:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a5220(param_1,uVar8);
    break;
  case 0x6f:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a5340(param_1,uVar8);
    break;
  case 0x70:
    puVar11 = (undefined1 *)FUN_1435a5550(param_1,local_res18);
    uVar16 = *puVar11;
    break;
  case 0x71:
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    lVar15 = *(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
    local_res8 = *(longlong *)(param_1 + 0x50) + 0x148;
    pcVar10 = (char *)FUN_1435d8230(&local_res8,local_res18,&local_res10,0x10,lVar15);
    if (*pcVar10 != '\0') {
      bVar4 = (byte)**(undefined4 **)(lVar15 + 8);
      if (((bVar4 & 0x78) < 0x50) || ((bVar4 & 6) == 2)) {
LAB_1435a7b64:
        FUN_1435a9750(param_1,lVar15);
        FUN_14359a010(param_1,local_res10);
        uVar16 = 1;
        break;
      }
      puVar9 = (undefined8 *)FUN_14359bd30(param_1,0x10,lVar15,local_res10);
LAB_1435a7c91:
      plVar13 = (longlong *)*puVar9;
      plVar17 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
      *plVar13 = *plVar17;
      plVar13[1] = (longlong)plVar17;
      *(longlong **)(*plVar17 + 8) = plVar13;
      *plVar17 = (longlong)plVar13;
      FUN_143612170(lVar3 + 0x70,puVar9);
      uVar16 = 1;
      break;
    }
    goto LAB_1435a85ef;
  case 0x72:
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    lVar15 = *(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
    local_res8 = *(longlong *)(param_1 + 0x50) + 0x148;
    pcVar10 = (char *)FUN_1435d8230(&local_res8,local_res18,&local_res10,0xf,lVar15);
    if (*pcVar10 != '\0') {
      bVar4 = (byte)**(undefined4 **)(lVar15 + 8);
      if (((bVar4 & 0x78) < 0x50) || ((bVar4 & 6) == 2)) goto LAB_1435a7b64;
      puVar9 = (undefined8 *)FUN_14359bd30(param_1,0xf,lVar15,local_res10);
      goto LAB_1435a7c91;
    }
    goto LAB_1435a85ef;
  case 0x73:
    FUN_1435a53d0(param_1);
    break;
  case 0x74:
    FUN_1435a5430(param_1);
    break;
  case 0x75:
    FUN_1435a5490(param_1);
    break;
  case 0x76:
    FUN_1435a54f0(param_1);
    break;
  case 0x77:
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    uVar14 = *(undefined8 *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
    local_res10 = (undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x148);
    pcVar10 = (char *)FUN_1435d8230(&local_res10,local_res18,&local_res8,7,uVar14);
    if (*pcVar10 != '\0') {
      uVar12 = 7;
LAB_1435a7c7e:
      puVar9 = (undefined8 *)FUN_14359bd30(param_1,uVar12,uVar14,local_res8);
      goto LAB_1435a7c91;
    }
    goto LAB_1435a85ef;
  case 0x78:
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    uVar14 = *(undefined8 *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
    local_res10 = (undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x148);
    pcVar10 = (char *)FUN_1435d8230(&local_res10,local_res18,&local_res8,0xe,uVar14);
    if (*pcVar10 != '\0') {
      uVar12 = 0xe;
      goto LAB_1435a7c7e;
    }
    goto LAB_1435a85ef;
  case 0x80:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a56a0(param_1,uVar8);
    break;
  case 0x82:
    FUN_1435a57e0(param_1);
    break;
  case 0x85:
    FUN_1435a5780(param_1);
    break;
  case 0x86:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a5880(param_1,uVar8);
    break;
  case 0x87:
    FUN_14359afb0(param_1,local_res18,0xf);
    break;
  case 0x90:
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    lVar15 = *(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
    local_res10 = (undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x148);
    pcVar10 = (char *)FUN_1435d8230(&local_res10,local_res18,&local_res8,1,lVar15);
    if (*pcVar10 != '\0') {
      pcVar10 = (char *)FUN_1435a9550(param_1,&local_res10,lVar15,1);
      if (*pcVar10 == '\0') {
        bVar4 = (byte)**(undefined4 **)(lVar15 + 8);
        if (((bVar4 & 0x78) < 0x50) || ((bVar4 & 6) == 2)) {
LAB_1435a7e0f:
          FUN_1435a9750(param_1,lVar15);
          FUN_14359a010(param_1,local_res8);
          uVar16 = 1;
          break;
        }
        uVar14 = 1;
LAB_1435a7df8:
        puVar9 = (undefined8 *)FUN_14359bd30(param_1,uVar14,lVar15,local_res8);
        goto LAB_1435a7c91;
      }
      goto LAB_1435a7438;
    }
    goto LAB_1435a85ef;
  case 0x91:
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    lVar15 = *(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
    local_res8 = *(longlong *)(param_1 + 0x50) + 0x148;
    pcVar10 = (char *)FUN_1435d8230(&local_res8,local_res18,&local_res10,3,lVar15);
    if (*pcVar10 != '\0') {
      bVar4 = (byte)**(undefined4 **)(lVar15 + 8);
      if (((bVar4 & 0x78) < 0x50) || ((bVar4 & 6) == 2)) goto LAB_1435a7b64;
      puVar9 = (undefined8 *)FUN_14359bd30(param_1,3,lVar15,local_res10);
      goto LAB_1435a7c91;
    }
    goto LAB_1435a85ef;
  case 0x92:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a5a10(param_1,uVar8,*param_4);
    break;
  case 0x93:
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    lVar15 = *(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
    local_res8 = *(longlong *)(param_1 + 0x50) + 0x148;
    pcVar10 = (char *)FUN_1435d8230(&local_res8,local_res18,&local_res10,5,lVar15);
    if (*pcVar10 != '\0') {
      bVar4 = (byte)**(undefined4 **)(lVar15 + 8);
      if (((bVar4 & 0x78) < 0x50) || ((bVar4 & 6) == 2)) goto LAB_1435a7b64;
      puVar9 = (undefined8 *)FUN_14359bd30(param_1,5,lVar15,local_res10);
      goto LAB_1435a7c91;
    }
    goto LAB_1435a85ef;
  case 0x94:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a5a90(param_1,uVar8,*param_4);
    break;
  case 0x95:
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    lVar15 = *(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
    local_res8 = *(longlong *)(param_1 + 0x50) + 0x148;
    pcVar10 = (char *)FUN_1435d8230(&local_res8,local_res18,&local_res10,9,lVar15);
    if (*pcVar10 != '\0') {
      bVar4 = (byte)**(undefined4 **)(lVar15 + 8);
      if (((bVar4 & 0x78) < 0x50) || ((bVar4 & 6) == 2)) goto LAB_1435a7b64;
      puVar9 = (undefined8 *)FUN_14359bd30(param_1,9,lVar15,local_res10);
      goto LAB_1435a7c91;
    }
    goto LAB_1435a85ef;
  case 0x96:
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    lVar15 = *(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
    local_res10 = (undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x148);
    pcVar10 = (char *)FUN_1435d8230(&local_res10,local_res18,&local_res8,0,lVar15);
    if (*pcVar10 != '\0') {
      pcVar10 = (char *)FUN_1435a9550(param_1,&local_res10,lVar15,0);
      if (*pcVar10 == '\0') {
        bVar4 = (byte)**(undefined4 **)(lVar15 + 8);
        if (((bVar4 & 0x78) < 0x50) || ((bVar4 & 6) == 2)) goto LAB_1435a7e0f;
        uVar14 = 0;
        goto LAB_1435a7df8;
      }
      goto LAB_1435a7438;
    }
    goto LAB_1435a85ef;
  case 0x97:
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    lVar15 = *(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
    local_res10 = (undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x148);
    pcVar10 = (char *)FUN_1435d8230(&local_res10,local_res18,&local_res8,10,lVar15);
    if (*pcVar10 != '\0') {
      pcVar10 = (char *)FUN_1435a9550(param_1,&local_res10,lVar15,10);
      if (*pcVar10 == '\0') {
        bVar4 = (byte)**(undefined4 **)(lVar15 + 8);
        if (((bVar4 & 0x78) < 0x50) || ((bVar4 & 6) == 2)) goto LAB_1435a7e0f;
        uVar14 = 10;
        goto LAB_1435a7df8;
      }
      goto LAB_1435a7438;
    }
    goto LAB_1435a85ef;
  case 0xa0:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,0);
    uVar16 = *puVar11;
    break;
  case 0xa1:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,2);
    uVar16 = *puVar11;
    break;
  case 0xa2:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,4);
    uVar16 = *puVar11;
    break;
  case 0xa3:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,6);
    uVar16 = *puVar11;
    break;
  case 0xa4:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,7);
    uVar16 = *puVar11;
    break;
  case 0xa5:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,0xb);
    uVar16 = *puVar11;
    break;
  case 0xa6:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,0xc);
    uVar16 = *puVar11;
    break;
  case 0xa7:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,0xd);
    uVar16 = *puVar11;
    break;
  case 0xa8:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,10);
    uVar16 = *puVar11;
    break;
  case 0xa9:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,8);
    uVar16 = *puVar11;
    break;
  case 0xaa:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,9);
    uVar16 = *puVar11;
    break;
  case 0xab:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,0x10);
    uVar16 = *puVar11;
    break;
  case 0xac:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,0x11);
    uVar16 = *puVar11;
    break;
  case 0xad:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,0x12);
    uVar16 = *puVar11;
    break;
  case 0xae:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,0x13);
    uVar16 = *puVar11;
    break;
  case 0xaf:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,0x14);
    uVar16 = *puVar11;
    break;
  case 0xb0:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,0x15);
    uVar16 = *puVar11;
    break;
  case 0xb1:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,0x18);
    uVar16 = *puVar11;
    break;
  case 0xb2:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a5bd0(param_1,uVar8);
    break;
  case 0xb3:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,0x19);
    uVar16 = *puVar11;
    break;
  case 0xb4:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,0x17);
    uVar16 = *puVar11;
    break;
  case 0xc0:
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    lVar15 = *(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
    local_res8 = *(longlong *)(param_1 + 0x50) + 0x148;
    pcVar10 = (char *)FUN_1435d8230(&local_res8,local_res18,&local_res10,4,lVar15);
    if (*pcVar10 != '\0') {
      bVar4 = (byte)**(undefined4 **)(lVar15 + 8);
      if (((bVar4 & 0x78) < 0x50) || ((bVar4 & 6) == 2)) goto LAB_1435a7b64;
      puVar9 = (undefined8 *)FUN_14359bd30(param_1,4,lVar15,local_res10);
      goto LAB_1435a7c91;
    }
    goto LAB_1435a85ef;
  case 0xc1:
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    lVar15 = *(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
    local_res8 = *(longlong *)(param_1 + 0x50) + 0x148;
    pcVar10 = (char *)FUN_1435d8230(&local_res8,local_res18,&local_res10,6,lVar15);
    if (*pcVar10 != '\0') {
      bVar4 = (byte)**(undefined4 **)(lVar15 + 8);
      if (((bVar4 & 0x78) < 0x50) || ((bVar4 & 6) == 2)) goto LAB_1435a7b64;
      puVar9 = (undefined8 *)FUN_14359bd30(param_1,6,lVar15,local_res10);
      goto LAB_1435a7c91;
    }
    goto LAB_1435a85ef;
  case 0xc2:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a5d30(param_1,uVar8,*param_4);
    break;
  case 0xc3:
    uVar8 = FUN_14358f710(lVar15,param_4);
    FUN_1435a5db0(param_1,uVar8,*param_4);
    break;
  case 0xc4:
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    lVar15 = *(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)*(uint *)(lVar3 + 0x80) * 8);
    local_res10 = (undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x148);
    pcVar10 = (char *)FUN_1435d8230(&local_res10,local_res18,&local_res8,2,lVar15);
    if (*pcVar10 != '\0') {
      pcVar10 = (char *)FUN_1435a9550(param_1,&local_res10,lVar15,2);
      if (*pcVar10 == '\0') {
        bVar4 = (byte)**(undefined4 **)(lVar15 + 8);
        if (((bVar4 & 0x78) < 0x50) || ((bVar4 & 6) == 2)) goto LAB_1435a7e0f;
        uVar14 = 2;
        goto LAB_1435a7df8;
      }
      goto LAB_1435a7438;
    }
LAB_1435a85ef:
    uVar16 = 0;
    break;
  case 0xc5:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,1);
    uVar16 = *puVar11;
    break;
  case 0xc6:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,3);
    uVar16 = *puVar11;
    break;
  case 199:
    puVar11 = (undefined1 *)FUN_14359afb0(param_1,local_res18,5);
    uVar16 = *puVar11;
    break;
  case 0xd0:
    FUN_1435a5e90(param_1);
    break;
  case 0xd1:
    FUN_1435a5fa0(param_1);
    break;
  case 0xd2:
    FUN_1435a60c0(param_1);
    break;
  case 0xd3:
    FUN_1435a61e0(param_1);
    break;
  case 0xd5:
    FUN_1435a6300(param_1);
    break;
  case 0xd6:
    FUN_1435a6480(param_1);
    break;
  case 0xd7:
    FUN_1435a6600(param_1);
    break;
  case 0xef:
    *param_4 = *param_4 + 1;
    FUN_14358f710(lVar15,param_4);
    *param_4 = *param_4 + 1;
  case 0xf0:
  case 0xf1:
  case 0xf2:
    FUN_14358f710(lVar15,param_4);
  }
  *param_2 = uVar16;
  Scaleform::StringBuffer::~StringBuffer(local_70);
  return param_2;
}



// FUNCTION 1435a8920 FUN_1435a8920 body=942 status=ok
// SIG undefined FUN_1435a8920(void)

undefined1 *
FUN_1435a8920(longlong param_1,undefined1 *param_2,longlong *param_3,uint *param_4,
             undefined4 *param_5,uint *param_6)

{
  int *piVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined1 local_res20 [8];
  longlong local_98;
  undefined8 local_90;
  int *local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  uint local_60 [2];
  int *local_58;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  if ((((byte)*param_4 & 3) == 1) || ((*param_4 >> 2 & 1) != 0)) {
    *param_2 = 1;
    return param_2;
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  uVar8 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x18) + 0x28);
  local_98 = 0;
  uVar9 = *(uint *)(lVar2 + 0x84);
  uVar5 = (ulonglong)uVar9;
  do {
    do {
      if (uVar9 == 0) {
        plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x30);
        uVar5 = (*plVar4 - plVar4[1]) + 0x20 >> 5;
        uVar9 = (uint)uVar5;
        goto joined_r0x0001435a8a12;
      }
      uVar9 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar9;
      *param_6 = uVar9;
      pbVar3 = *(byte **)(*(longlong *)(*(longlong *)(lVar2 + 0xd0) + uVar5 * 8) + 8);
      if ((*pbVar3 & 1) != 0) goto LAB_1435a8b88;
    } while (*(longlong *)(pbVar3 + 8) == 0);
    local_70 = FUN_1435af580(uVar8,*(longlong *)(pbVar3 + 8),param_4,&local_98,0);
    local_68 = local_98;
  } while (local_70 == 0);
  *param_5 = 0;
  uVar8 = FUN_1435944b0(&local_90,pbVar3);
  FUN_14360ab50(local_60,uVar8);
  *param_3 = local_70;
  param_3[1] = local_68;
  FUN_143590140(param_3 + 2,local_60);
  if (9 < ((byte)local_60[0] & 0x1f)) {
    if ((local_60[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_60);
    }
    else {
      *local_58 = *local_58 + -1;
      if (*local_58 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  uVar9 = (uint)local_90 & 0x1f;
  if (9 < uVar9) {
    if (((uint)local_90 >> 9 & 1) == 0) {
      if (uVar9 == 10) {
        piVar1 = (int *)(local_80 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else if ((((uVar9 == 0xb) || (uVar9 == 0xc)) || (local_80 = local_78, uVar9 - 0xd < 2)) &&
              ((((local_80 & 1) == 0 && (local_80 != 0)) &&
               ((*(uint *)(local_80 + 8) & 0x3fffff) != 0)))) {
        *(uint *)(local_80 + 8) = *(uint *)(local_80 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
LAB_1435a8c93:
      *local_88 = *local_88 + -1;
      if (*local_88 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
LAB_1435a8b88:
  *param_2 = 1;
  return param_2;
joined_r0x0001435a8a12:
  if (uVar9 == 0) {
    pcVar7 = (char *)FUN_1435a8ce0(param_1,local_res20,param_3,param_4);
    *param_2 = 1;
    if (*pcVar7 == '\0') {
      return param_2;
    }
    *param_5 = 2;
    return param_2;
  }
  uVar9 = (int)uVar5 - 1;
  *param_6 = uVar9;
  puVar10 = (uint *)((ulonglong)uVar9 * 0x20 + plVar4[1]);
  uVar6 = FUN_1435caba0(uVar8,puVar10);
  if ((*puVar10 >> 8 & 1) != 0) goto LAB_1435a8b88;
  local_70 = FUN_1435af580(uVar8,uVar6,param_4,&local_98,0);
  if (local_70 != 0) {
    *param_5 = 1;
    local_60[0] = *puVar10;
    local_50 = puVar10[4];
    uStack_4c = puVar10[5];
    uStack_48 = puVar10[6];
    uStack_44 = puVar10[7];
    uVar9 = local_60[0] & 0x1f;
    local_58 = *(int **)(puVar10 + 2);
    local_68 = local_98;
    if (9 < uVar9) {
      if ((local_60[0] >> 9 & 1) == 0) {
        if (uVar9 == 10) {
          *(int *)(*(longlong *)(puVar10 + 4) + 0x18) =
               *(int *)(*(longlong *)(puVar10 + 4) + 0x18) + 1;
        }
        else if (10 < uVar9) {
          if (uVar9 < 0xd) {
            lVar2 = *(longlong *)(puVar10 + 4);
            if (lVar2 != 0) {
              *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
            }
          }
          else if ((uVar9 < 0xf) && (lVar2 = *(longlong *)(puVar10 + 6), lVar2 != 0)) {
            *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
          }
        }
      }
      else {
        *local_58 = *local_58 + 1;
      }
    }
    *param_3 = local_70;
    param_3[1] = local_98;
    FUN_143590140(param_3 + 2,local_60);
    if (((byte)local_60[0] & 0x1f) < 10) goto LAB_1435a8b88;
    local_88 = local_58;
    if ((local_60[0] >> 9 & 1) != 0) goto LAB_1435a8c93;
    FUN_1435920c0(local_60);
    goto LAB_1435a8b88;
  }
  uVar5 = (ulonglong)uVar9;
  goto joined_r0x0001435a8a12;
}



// FUNCTION 1435a8ce0 FUN_1435a8ce0 body=398 status=ok
// SIG undefined FUN_1435a8ce0(void)

undefined1 * FUN_1435a8ce0(longlong param_1,undefined1 *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  uint local_38 [2];
  int *local_30;
  longlong local_28;
  
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + 0x18);
  lVar1 = *(longlong *)(lVar2 + 0x28);
  if (1 < (*(uint *)(param_4 + 0x10) & 0x1f) - 8) {
    lVar2 = FUN_1435afb10(lVar1,param_4,*(undefined8 *)(lVar2 + 0x30));
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xd8) != 0)) {
      if ((*(byte *)(*(longlong *)(lVar2 + 0xd8) + 0x88) >> 4 & 1) == 0) {
        local_28 = *(longlong *)(lVar1 + 0x2c0);
      }
      else {
        local_28 = FUN_1434e0ed0();
        if (*(char *)(lVar1 + 0xb8) != '\0') {
          *param_2 = 0;
          return param_2;
        }
      }
      local_res8 = 0;
      lVar3 = FUN_1435af580(lVar1,*(undefined8 *)(local_28 + 0x28),param_4,&local_res8,local_28);
      if (lVar3 != 0) {
        *(uint *)(local_28 + 8) = *(int *)(local_28 + 8) + 1U & 0x8fffffff;
        *param_3 = lVar3;
        param_3[1] = local_res8;
        local_38[0] = 0xc;
        local_30 = (int *)0x0;
        FUN_143590140(param_3 + 2,local_38);
        if (9 < ((byte)local_38[0] & 0x1f)) {
          if ((local_38[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_38);
          }
          else {
            *local_30 = *local_30 + -1;
            if (*local_30 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
          }
        }
        goto LAB_1435a8e4e;
      }
    }
    FUN_1435b21f0(param_3,lVar1,lVar1 + 0xe8,param_4,lVar2);
  }
LAB_1435a8e4e:
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435a8e80 FUN_1435a8e80 body=596 status=ok
// SIG undefined FUN_1435a8e80(void)

undefined1 *
FUN_1435a8e80(longlong param_1,undefined1 *param_2,longlong *param_3,uint *param_4,char param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  byte bVar12;
  longlong *plVar13;
  uint local_res8 [2];
  undefined1 local_48 [8];
  longlong local_40;
  
  uVar2 = *param_4;
  lVar10 = *(longlong *)(param_1 + 0x50);
  puVar4 = (uint *)*param_3;
  local_res8[0] = uVar2 & 0x78;
  lVar9 = *(longlong *)(param_4 + 2);
  plVar13 = (longlong *)(lVar10 + 0x148);
  lVar5 = *(longlong *)(puVar4 + 2);
  if (local_res8[0] == 0x10) {
    *param_2 = 1;
    return param_2;
  }
  uVar3 = *puVar4;
  if ((uVar3 & 0x78) == 0x10) {
LAB_1435a8ee2:
    *param_3 = (longlong)param_4;
  }
  else {
    bVar12 = (byte)*param_4 & 1;
    if (((byte)*puVar4 & 1) != bVar12) {
      uVar6 = *(undefined8 *)(lVar5 + 0x98);
      uVar8 = FUN_1435c8e40(local_48,0x42c,uVar6);
      FUN_1435ccf60(uVar6,uVar8,&DAT_145b15be8);
      piVar1 = (int *)(local_40 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_2 = 0;
      return param_2;
    }
    if (puVar4 == param_4) goto LAB_1435a90ba;
    if (lVar5 == lVar9) {
      uVar11 = 0;
      if ((uVar3 >> 1 & 3) == (uVar2 >> 1 & 3)) {
        uVar11 = uVar2 >> 1 & 3;
      }
      if (lVar9 == 0) {
        uVar11 = 0;
LAB_1435a909e:
        bVar12 = 0;
        lVar9 = *(longlong *)(*(longlong *)(*plVar13 + 0x200) + 0xd8);
      }
      lVar10 = FUN_1435d0db0(plVar13,lVar9,uVar11,bVar12);
    }
    else {
      if ((uVar3 & 0x78) == 8) goto LAB_1435a8ee2;
      cVar7 = FUN_1435cf640(puVar4);
      if (((cVar7 != '\0') && (0x4f < ((byte)uVar3 & 0x78))) && (((byte)uVar3 & 6) != 2))
      goto LAB_1435a90ba;
      cVar7 = FUN_1435cf640(param_4);
      if (((cVar7 != '\0') && (0x4f < local_res8[0])) && (((byte)uVar2 & 6) != 2)) {
        *param_3 = (longlong)param_4;
        goto LAB_1435a90ba;
      }
      if (((param_5 != '\0') || (cVar7 = FUN_1435cf880(puVar4), cVar7 == '\0')) ||
         (cVar7 = FUN_1435cf880(param_4), cVar7 == '\0')) {
        cVar7 = FUN_1436111a0(plVar13,puVar4);
        if ((cVar7 == '\0') && (cVar7 = FUN_1436111a0(plVar13,param_4), cVar7 == '\0')) {
          local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
          FUN_143605520(lVar5,local_res8);
          lVar10 = FUN_1435b5130(lVar9);
          if (lVar10 != 0) {
            lVar9 = FUN_1436107c0(plVar13,lVar10,0);
            *param_3 = lVar9;
          }
          local_res8[0] = local_res8[0] & 0xffffff00;
          FUN_143605520(lVar5,local_res8);
          if (lVar10 != 0) goto LAB_1435a90ba;
          uVar11 = 0;
          if ((*(uint *)*param_3 >> 1 & 3) == (*param_4 >> 1 & 3)) {
            uVar11 = *param_4 >> 1 & 3;
          }
        }
        else {
          uVar11 = 0;
          if ((uVar3 >> 1 & 3) == (uVar2 >> 1 & 3)) {
            uVar11 = uVar2 >> 1 & 3;
          }
        }
        goto LAB_1435a909e;
      }
      lVar10 = lVar10 + 0x1f0;
    }
    *param_3 = lVar10;
  }
LAB_1435a90ba:
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435a90e0 FUN_1435a90e0 body=351 status=ok
// SIG undefined FUN_1435a90e0(void)

undefined1 *
FUN_1435a90e0(longlong param_1,undefined1 *param_2,undefined8 *param_3,int param_4,code *param_5,
             undefined1 param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  char *pcVar8;
  undefined1 local_res20 [8];
  
  lVar3 = *(longlong *)(param_1 + 0x58);
  iVar1 = *(int *)(lVar3 + 0x30);
  iVar2 = *(int *)(param_1 + 0x18);
  if ((param_4 == 0) && (param_5 == (code *)&LAB_143610680)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  lVar4 = *(longlong *)(lVar3 + 200);
  lVar6 = (*param_5)(lVar4,param_4);
  puVar7 = *(uint **)(*(longlong *)(lVar6 + 0x18) + 8);
  if (bVar5) {
    *param_3 = puVar7;
  }
  else {
    if (((iVar1 != iVar2) && ((*puVar7 & 0x78) != 0x10)) && ((*puVar7 & 0x78) != 0x18)) {
      puVar7 = (uint *)FUN_143610830(*(longlong *)(param_1 + 0x50) + 0x148,
                                     *(undefined8 *)(puVar7 + 2),(byte)*puVar7 & 1);
    }
    *param_3 = puVar7;
    for (lVar4 = *(longlong *)(lVar4 + 0x78); lVar4 != lVar3 + 0x50;
        lVar4 = *(longlong *)(lVar4 + 0x78)) {
      lVar6 = (*param_5)(lVar4,param_4);
      puVar7 = *(uint **)(*(longlong *)(lVar6 + 0x18) + 8);
      if (((iVar1 != iVar2) && ((*puVar7 & 0x78) != 0x10)) && ((*puVar7 & 0x78) != 0x18)) {
        puVar7 = (uint *)FUN_143610830(*(longlong *)(param_1 + 0x50) + 0x148,
                                       *(undefined8 *)(puVar7 + 2),(byte)*puVar7 & 1);
      }
      pcVar8 = (char *)FUN_1435a8e80(param_1,local_res20,param_3,puVar7,param_6);
      if (*pcVar8 == '\0') {
        *param_2 = 0;
        return param_2;
      }
    }
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435a9290 FUN_1435a9290 body=239 status=ok
// SIG undefined FUN_1435a9290(void)

void FUN_1435a9290(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x50);
  lVar5 = *(longlong *)(param_1 + 0x58);
  plVar2 = (longlong *)(lVar4 + 0x148);
  lVar7 = *(longlong *)(*(longlong *)(*plVar2 + 0x208) + 0xd8);
  lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x18);
  lVar6 = FUN_1435c84e0(*(undefined8 *)(lVar6 + 0x28),lVar6,
                        (ulonglong)*(uint *)(param_1 + 0x24) * 0x10 +
                        *(longlong *)(*(longlong *)(lVar6 + 0xa0) + 0x148));
  if (lVar6 != 0) {
    lVar7 = *(longlong *)(lVar6 + 0xd8);
  }
  if (lVar7 == 0) {
    uVar8 = 0;
    lVar7 = *(longlong *)(*(longlong *)(*plVar2 + 0x200) + 0xd8);
  }
  else {
    uVar8 = 2;
  }
  lVar6 = FUN_1435d0db0(plVar2,lVar7,uVar8);
  plVar2 = *(longlong **)(lVar5 + 0xf8);
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = lVar6;
    plVar1 = plVar2 + 2;
    *plVar2 = lVar5;
    *plVar1 = (longlong)plVar1;
    plVar2[3] = (longlong)plVar1;
  }
  FUN_143612170(lVar4 + 0x70);
  uVar3 = *(undefined4 *)(lVar4 + 0x80);
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(lVar5 + 0x34) = uVar3;
  return;
}



// FUNCTION 1435a9390 FUN_1435a9390 body=441 status=ok
// SIG undefined FUN_1435a9390(void)

undefined1 * FUN_1435a9390(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 local_38 [2];
  undefined4 *local_30;
  undefined8 local_28;
  undefined8 *local_20 [3];
  
  uVar4 = *(uint *)(param_4 + 0x1c);
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_4 + 0x30) + uVar3 * 8) == param_3) {
        *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + -1;
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        if (uVar2 < uVar4) {
          lVar5 = uVar3 * 8;
          do {
            iVar1 = (int)uVar3;
            uVar2 = iVar1 + 1;
            uVar3 = (ulonglong)uVar2;
            *(undefined8 *)(*(longlong *)(param_4 + 0x30) + (ulonglong)(iVar1 - 1) * 8) =
                 *(undefined8 *)(lVar5 + *(longlong *)(param_4 + 0x30));
            lVar5 = lVar5 + 8;
          } while (uVar2 < uVar4);
        }
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar4);
  }
  if (DAT_146b7a8d0 == 0x3fffffff) {
    local_30 = local_38;
    local_38[0] = 0;
    if ((*(uint *)(param_3 + 0x10) & 0xfffffffc) != 0) {
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) & 3;
      FUN_143614e80(&local_30,param_3);
    }
  }
  uVar4 = DAT_146b7a8d0 + 1;
  local_20[0] = &local_28;
  local_28 = CONCAT44(local_28._4_4_,uVar4);
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x278) + 0x38);
  DAT_146b7a8d0 = uVar4;
  if (*(uint *)(lVar5 + 0x10) >> 2 != uVar4) {
    *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) & 3 | uVar4 * 4;
    FUN_143614d10(local_20,lVar5);
  }
  if (DAT_146b7a8d0 == 0x3fffffff) {
    local_30 = local_38;
    local_38[0] = 0;
    if ((*(uint *)(param_3 + 0x10) & 0xfffffffc) != 0) {
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) & 3;
      FUN_143614e80(&local_30,param_3);
    }
  }
  DAT_146b7a8d0 = DAT_146b7a8d0 + 1;
  local_28 = CONCAT44(uVar4,DAT_146b7a8d0);
  local_20[0] = &local_28;
  uVar2 = *(uint *)(param_3 + 0x10) >> 2;
  if (uVar2 == uVar4) {
    *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + -1;
  }
  else if (uVar2 != DAT_146b7a8d0) {
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) & 3 | DAT_146b7a8d0 * 4;
    FUN_1436161a0(local_20,param_3);
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435a9550 FUN_1435a9550 body=500 status=ok
// SIG undefined FUN_1435a9550(void)

undefined1 * FUN_1435a9550(longlong param_1,undefined1 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  
  plVar2 = (longlong *)*param_3;
  if ((((byte)(int)plVar2[2] & 0x1f) == 0xf) && ((int)plVar2[3] == param_4)) {
    lVar3 = plVar2[0xc];
    if (*(longlong *)(lVar3 + 0x18) != lVar3 + 0x10) {
      *param_2 = 0;
      return param_2;
    }
    lVar9 = 0;
    if (lVar3 != 0) {
      *(longlong *)(plVar2[9] + 8) = plVar2[10];
      *(longlong *)plVar2[10] = plVar2[9];
      plVar2[9] = -1;
      plVar2[10] = -1;
      plVar2[0xc] = 0;
    }
    *(longlong *)(*plVar2 + 8) = plVar2[1];
    *(longlong *)plVar2[1] = *plVar2;
    *plVar2 = -1;
    plVar2[1] = -1;
    lVar4 = *(longlong *)(param_1 + 0x50);
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8);
    if ((lVar5 == 0) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x98) + 0x220) + 0xd8) != lVar5)) {
      lVar5 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x18) + 0x28) + 0x220);
      uVar6 = FUN_1436107c0(lVar4 + 0x148,*(undefined8 *)(lVar5 + 0xd8),0);
      uVar7 = FUN_14359c2e0(param_1);
      lVar8 = FUN_1435ba1a0(*(undefined1 **)(lVar4 + 0x268),0x78,**(undefined1 **)(lVar4 + 0x268));
      if (lVar8 != 0) {
        lVar9 = FUN_14360a520(lVar8,2,lVar3,uVar6,lVar5,0,uVar7);
      }
      puVar1 = (undefined8 *)(lVar9 + 0x58);
      if (puVar1 == (undefined8 *)0x0) {
        *param_2 = 0;
      }
      else {
        FUN_143612170(lVar4 + 0x70,puVar1);
        plVar2 = (longlong *)*puVar1;
        plVar10 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
        *param_2 = 1;
        *plVar2 = *plVar10;
        plVar2[1] = (longlong)plVar10;
        *(longlong **)(*plVar10 + 8) = plVar2;
        *plVar10 = (longlong)plVar2;
      }
    }
    else {
      FUN_143612170(lVar4 + 0x70,lVar3);
      *param_2 = 1;
    }
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435a9750 FUN_1435a9750 body=148 status=ok
// SIG undefined FUN_1435a9750(void)

void FUN_1435a9750(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res10 [24];
  
  pcVar2 = (char *)FUN_143594910(local_res10,*param_2);
  if (*pcVar2 == '\0') {
    FUN_143612170(*(longlong *)(param_1 + 0x50) + 0x70,param_2);
    lVar1 = *(longlong *)(param_1 + 0x50);
    *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + -1;
    plVar3 = (longlong *)
             FUN_143598310(*(longlong *)(param_1 + 0x50) + 0x260,2,
                           *(undefined8 *)
                            (*(longlong *)(lVar1 + 0xb0) + (ulonglong)*(uint *)(lVar1 + 0x80) * 8),0
                           ,0);
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x40);
    *plVar3 = *plVar4;
    plVar3[1] = (longlong)plVar4;
    *(longlong **)(*plVar4 + 8) = plVar3;
    *plVar4 = (longlong)plVar3;
  }
  return;
}



// FUNCTION 1435a97f0 FUN_1435a97f0 body=84 status=ok
// SIG undefined FUN_1435a97f0(void)

void FUN_1435a97f0(longlong param_1)

{
  undefined4 local_18 [2];
  undefined4 *local_10 [2];
  
  if (DAT_146b7a8d0 == 0x3fffffff) {
    local_10[0] = local_18;
    local_18[0] = 0;
    if ((*(uint *)(param_1 + 0x10) & 0xfffffffc) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 3;
      FUN_143614e80(local_10,param_1);
    }
  }
  DAT_146b7a8d0 = DAT_146b7a8d0 + 1;
  return;
}



// FUNCTION 1435a9850 FUN_1435a9850 body=279 status=ok
// SIG undefined FUN_1435a9850(void)

longlong * FUN_1435a9850(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  *param_1 = -0x20;
  lVar9 = 0;
  param_1[1] = 0;
  uVar7 = (longlong)((ulonglong)(uint)(*param_2 - param_2[2]) + 0x20) >> 5;
  uVar8 = uVar7 & 0xffff;
  lVar5 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,uVar8 << 5,0);
  param_1[1] = lVar5;
  *param_1 = lVar5 + -0x20;
  if ((short)uVar7 != 0) {
    do {
      lVar5 = *(longlong *)(param_2 + 2);
      *param_1 = *param_1 + 0x20;
      puVar2 = (undefined4 *)*param_1;
      if (*param_1 != 0) {
        *puVar2 = *(undefined4 *)(lVar9 + lVar5);
        *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(lVar9 + 8 + lVar5);
        puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar5);
        uVar4 = puVar1[1];
        *(undefined8 *)(puVar2 + 4) = *puVar1;
        *(undefined8 *)(puVar2 + 6) = uVar4;
        uVar6 = *(uint *)(lVar9 + lVar5) & 0x1f;
        if (9 < uVar6) {
          if ((*(uint *)(lVar9 + lVar5) >> 9 & 1) == 0) {
            if (uVar6 == 10) {
              piVar3 = (int *)(*(longlong *)(lVar9 + 0x10 + lVar5) + 0x18);
              *piVar3 = *piVar3 + 1;
            }
            else if (10 < uVar6) {
              if (uVar6 < 0xd) {
                lVar5 = *(longlong *)(lVar9 + 0x10 + lVar5);
              }
              else {
                if (0xe < uVar6) goto LAB_1435a993b;
                lVar5 = *(longlong *)(lVar9 + 0x18 + lVar5);
              }
              if (lVar5 != 0) {
                *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
              }
            }
          }
          else {
            piVar3 = *(int **)(lVar9 + 8 + lVar5);
            *piVar3 = *piVar3 + 1;
          }
        }
      }
LAB_1435a993b:
      lVar9 = lVar9 + 0x20;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return param_1;
}



// FUNCTION 1435a9970 ~PrimitiveVS body=52 status=ok
// SIG undefined ~PrimitiveVS(void)

void Scaleform::GFx::AS3::PrimitiveVS::~PrimitiveVS(longlong *param_1)

{
  FUN_143611e90(param_1,(*param_1 - param_1[1]) + 0x20 >> 5);
                    /* WARNING: Could not recover jumptable at 0x0001435a99a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[1]);
  return;
}



// FUNCTION 1435a99b0 FUN_1435a99b0 body=60 status=ok
// SIG undefined FUN_1435a99b0(void)

void FUN_1435a99b0(longlong *param_1,ushort param_2)

{
  longlong lVar1;
  
  if (param_1[1] == 0) {
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,(ulonglong)param_2 << 5,0);
    param_1[1] = lVar1;
    *param_1 = lVar1 + -0x20;
  }
  return;
}



// FUNCTION 1435a9a00 FUN_1435a9a00 body=104 status=ok
// SIG undefined FUN_1435a9a00(void)

longlong * FUN_1435a9a00(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = -0x20;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar1 = FUN_1435a9df0(param_1,0x100);
  param_1[2] = lVar1;
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(param_1[2] + 0x10) = 0;
  param_1[1] = param_1[2] + 0x20;
  *param_1 = param_1[2];
  FUN_1435a9b60(param_1,1);
  return param_1;
}



// FUNCTION 1435a9a70 FUN_1435a9a70 body=228 status=ok
// SIG undefined FUN_1435a9a70(void)

void FUN_1435a9a70(ulonglong *param_1)

{
  ulonglong uVar1;
  uint *puVar2;
  int *piVar3;
  
  uVar1 = param_1[3];
  while (uVar1 != 0) {
    uVar1 = param_1[3];
    param_1[3] = *(ulonglong *)(uVar1 + 8);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(uVar1 + 0x18));
    uVar1 = param_1[3];
  }
  if (param_1[2] != 0) {
    if (param_1[2] + 0x20 <= *param_1) {
      do {
        puVar2 = (uint *)*param_1;
        if (9 < ((byte)*puVar2 & 0x1f)) {
          if ((*puVar2 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar2);
          }
          else {
            piVar3 = *(int **)(puVar2 + 2);
            *piVar3 = *piVar3 + -1;
            if (*piVar3 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            *puVar2 = *puVar2 & 0xfffffde0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            puVar2[6] = 0;
            puVar2[7] = 0;
          }
        }
        *param_1 = *param_1 - 0x20;
      } while (param_1[2] + 0x20 <= *param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x0001435a9b4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1[2] + 0x18));
    return;
  }
  return;
}



// FUNCTION 1435a9b60 FUN_1435a9b60 body=131 status=ok
// SIG undefined FUN_1435a9b60(void)

void FUN_1435a9b60(longlong *param_1,ushort param_2)

{
  longlong lVar1;
  
  if ((ulonglong)param_2 * 0x20 + *param_1 <
      ((ulonglong)*(ushort *)(param_1[2] + 2) + 1) * 0x20 + param_1[2]) {
    param_1[1] = *param_1 + 0x20;
    *(short *)param_1[2] = *(short *)param_1[2] + 1;
    return;
  }
  lVar1 = FUN_1435a9df0(param_1);
  *(undefined8 *)(lVar1 + 8) = 0;
  *(longlong *)(lVar1 + 0x10) = param_1[2];
  *(longlong *)(param_1[2] + 8) = lVar1;
  param_1[2] = lVar1;
  param_1[1] = lVar1 + 0x20;
  *param_1 = lVar1;
  *(short *)param_1[2] = *(short *)param_1[2] + 1;
  return;
}



// FUNCTION 1435a9bf0 FUN_1435a9bf0 body=106 status=ok
// SIG undefined FUN_1435a9bf0(void)

void FUN_1435a9bf0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(short *)param_1[2] = *(short *)param_1[2] + -1;
  if ((*(short *)param_1[2] == 0) && (lVar1 = *(longlong *)((short *)param_1[2] + 8), lVar1 != 0)) {
    *(undefined8 *)(param_1[2] + 0x10) = 0;
    *(undefined8 *)(param_1[2] + 8) = param_1[3];
    if (param_1[3] != 0) {
      *(undefined8 *)(param_1[3] + 0x10) = param_1[2];
    }
    param_1[3] = param_1[2];
    param_1[2] = lVar1;
    *(undefined8 *)(lVar1 + 8) = 0;
    *param_1 = *param_2;
  }
  param_1[1] = param_2[1];
  return;
}



// FUNCTION 1435a9c60 FUN_1435a9c60 body=284 status=ok
// SIG undefined FUN_1435a9c60(void)

void FUN_1435a9c60(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar3;
  int *piVar4;
  
  uVar2 = *param_2;
  uVar1 = param_1[2] + 0x20;
  if ((uVar2 < uVar1) || ((ulonglong)*(ushort *)(param_1[2] + 2) * 0x20 + uVar1 <= uVar2)) {
    uVar2 = *param_1;
    while (uVar1 <= uVar2) {
      puVar3 = (uint *)*param_1;
      if (9 < ((byte)*puVar3 & 0x1f)) {
        if ((*puVar3 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar3);
        }
        else {
          piVar4 = *(int **)(puVar3 + 2);
          *piVar4 = *piVar4 + -1;
          if (*piVar4 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *puVar3 = *puVar3 & 0xfffffde0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          puVar3[5] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
        }
      }
      *param_1 = *param_1 - 0x20;
      uVar2 = *param_1;
    }
  }
  else {
    uVar1 = *param_1;
    while (uVar2 < uVar1) {
      puVar3 = (uint *)*param_1;
      if (9 < ((byte)*puVar3 & 0x1f)) {
        if ((*puVar3 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar3);
        }
        else {
          piVar4 = *(int **)(puVar3 + 2);
          *piVar4 = *piVar4 + -1;
          if (*piVar4 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *puVar3 = *puVar3 & 0xfffffde0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          puVar3[5] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
        }
      }
      *param_1 = *param_1 - 0x20;
      uVar1 = *param_1;
    }
  }
  return;
}



// FUNCTION 1435a9d90 FUN_1435a9d90 body=87 status=ok
// SIG undefined FUN_1435a9d90(void)

undefined2 * FUN_1435a9d90(undefined8 param_1,ushort param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  uint uVar3;
  
  uVar3 = 0x100;
  if (0x100 < param_2) {
    uVar3 = (uint)param_2;
  }
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))
                    (DAT_146b62f28,param_1,(longlong)(int)(uVar3 - 1) * 0x20 + 0x5f,0);
  puVar2 = (undefined2 *)(lVar1 + 0x1fU & 0xffffffffffffffe0);
  *(longlong *)(puVar2 + 0xc) = lVar1;
  puVar2[1] = (short)uVar3;
  *puVar2 = 0;
  return puVar2;
}



// FUNCTION 1435a9df0 FUN_1435a9df0 body=192 status=ok
// SIG undefined FUN_1435a9df0(void)

undefined2 * FUN_1435a9df0(longlong param_1,ushort param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  uint uVar3;
  
  puVar2 = *(undefined2 **)(param_1 + 0x18);
  while( true ) {
    if (puVar2 == (undefined2 *)0x0) {
      uVar3 = 0x100;
      if (0x100 < param_2) {
        uVar3 = (uint)param_2;
      }
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))
                        (DAT_146b62f28,param_1,(longlong)(int)(uVar3 - 1) * 0x20 + 0x5f,0);
      puVar2 = (undefined2 *)(lVar1 + 0x1fU & 0xffffffffffffffe0);
      puVar2[1] = (short)uVar3;
      *(longlong *)(puVar2 + 0xc) = lVar1;
      *puVar2 = 0;
      return puVar2;
    }
    if (param_2 <= (ushort)puVar2[1]) break;
    puVar2 = *(undefined2 **)(puVar2 + 4);
  }
  lVar1 = *(longlong *)(puVar2 + 4);
  if (puVar2 != *(undefined2 **)(param_1 + 0x18)) {
    *(longlong *)(*(longlong *)(puVar2 + 8) + 8) = lVar1;
    if (*(longlong *)(puVar2 + 4) != 0) {
      *(undefined8 *)(*(longlong *)(puVar2 + 4) + 0x10) = *(undefined8 *)(puVar2 + 8);
    }
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    return puVar2;
  }
  *(longlong *)(param_1 + 0x18) = lVar1;
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  *(undefined8 *)(puVar2 + 4) = 0;
  return puVar2;
}



// FUNCTION 1435a9ec0 FUN_1435a9ec0 body=57 status=ok
// SIG undefined FUN_1435a9ec0(void)

void FUN_1435a9ec0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1435a9df0();
  param_1[2] = lVar1;
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(param_1[2] + 0x10) = 0;
  param_1[1] = param_1[2] + 0x20;
  *param_1 = param_1[2];
  return;
}



// FUNCTION 1435a9f00 FUN_1435a9f00 body=75 status=ok
// SIG undefined FUN_1435a9f00(void)

longlong * FUN_1435a9f00(longlong *param_1)

{
  longlong lVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  lVar1 = FUN_1435aa2d0(param_1,0);
  param_1[2] = lVar1;
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(param_1[2] + 0x10) = 0;
  *param_1 = param_1[2] + 0x18;
  param_1[1] = param_1[2] + 0x18;
  return param_1;
}



// FUNCTION 1435a9f60 FUN_1435a9f60 body=240 status=ok
// SIG undefined FUN_1435a9f60(void)

void FUN_1435a9f60(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint *puVar3;
  longlong lVar4;
  
  lVar4 = param_1[3];
  while (lVar4 != 0) {
    param_1[3] = *(longlong *)(param_1[3] + 8);
    (**(code **)(*DAT_146b62f28 + 0x60))();
    lVar4 = param_1[3];
  }
  if (param_1[2] != 0) {
    lVar4 = 0;
    uVar2 = (param_1[1] - param_1[2]) + -0x18 >> 5;
    if ((short)uVar2 != 0) {
      uVar2 = uVar2 & 0xffff;
      do {
        puVar3 = (uint *)(*param_1 + lVar4);
        if (9 < ((byte)*puVar3 & 0x1f)) {
          if ((*puVar3 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar3);
          }
          else {
            piVar1 = *(int **)(puVar3 + 2);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            *puVar3 = *puVar3 & 0xfffffde0;
            puVar3[2] = 0;
            puVar3[3] = 0;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0;
          }
        }
        lVar4 = lVar4 + 0x20;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[2]);
  }
  return;
}



// FUNCTION 1435aa060 FUN_1435aa060 body=141 status=ok
// SIG undefined FUN_1435aa060(void)

void FUN_1435aa060(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  size_t _Size;
  
  _Size = (param_2 & 0xffff) * 0x20;
  if (param_1[2] + 0x18 + (ulonglong)*(ushort *)(param_1[2] + 2) * 0x20 < param_1[1] + _Size) {
    lVar1 = FUN_1435aa2d0(param_1);
    *(undefined8 *)(lVar1 + 8) = 0;
    *(longlong *)(lVar1 + 0x10) = param_1[2];
    *(longlong *)(param_1[2] + 8) = lVar1;
    param_1[2] = lVar1;
    *param_1 = lVar1 + 0x18;
  }
  else {
    *param_1 = param_1[1];
  }
  param_1[1] = *param_1 + _Size;
  *(short *)param_1[2] = *(short *)param_1[2] + 1;
  _guard_xfg_dispatch_icall_nop((void *)*param_1,0,_Size);
  return;
}



// FUNCTION 1435aa100 FUN_1435aa100 body=367 status=ok
// SIG undefined FUN_1435aa100(void)

void FUN_1435aa100(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = 0;
  uVar4 = (longlong)(ulonglong)(uint)((int)param_1[1] - (int)*param_1) >> 5;
  if ((short)uVar4 != 0) {
    uVar4 = uVar4 & 0xffff;
    do {
      lVar1 = *param_1;
      uVar3 = *(uint *)(lVar6 + lVar1) & 0x1f;
      if (9 < uVar3) {
        if ((*(uint *)(lVar6 + lVar1) >> 9 & 1) == 0) {
          if (uVar3 == 10) {
            piVar2 = (int *)(*(longlong *)(lVar6 + 0x10 + lVar1) + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
            uVar5 = *(ulonglong *)(lVar6 + 0x10 + lVar1);
            if ((uVar5 & 1) == 0) {
LAB_1435aa1cc:
              if ((uVar5 != 0) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *(ulonglong *)(lVar6 + 0x10 + lVar1) = uVar5 - 1;
            }
          }
          else if (uVar3 - 0xd < 2) {
            uVar5 = *(ulonglong *)(lVar6 + 0x18 + lVar1);
            if ((uVar5 & 1) == 0) goto LAB_1435aa1cc;
            *(ulonglong *)(lVar6 + 0x18 + lVar1) = uVar5 - 1;
          }
        }
        else {
          piVar2 = *(int **)(lVar6 + 8 + lVar1);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *(uint *)(lVar6 + lVar1) = *(uint *)(lVar6 + lVar1) & 0xfffffde0;
          *(undefined8 *)(lVar6 + 8 + lVar1) = 0;
          *(undefined8 *)(lVar6 + 0x10 + lVar1) = 0;
          *(undefined8 *)(lVar6 + 0x18 + lVar1) = 0;
        }
      }
      lVar6 = lVar6 + 0x20;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(short *)param_1[2] = *(short *)param_1[2] + -1;
  if ((*(short *)param_1[2] == 0) && (lVar6 = *(longlong *)((short *)param_1[2] + 8), lVar6 != 0)) {
    *(undefined8 *)(param_1[2] + 0x10) = 0;
    *(longlong *)(param_1[2] + 8) = param_1[3];
    param_1[3] = param_1[2];
    param_1[2] = lVar6;
    *(undefined8 *)(lVar6 + 8) = 0;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}



// FUNCTION 1435aa280 FUN_1435aa280 body=72 status=ok
// SIG undefined FUN_1435aa280(void)

void FUN_1435aa280(undefined8 param_1,ushort param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  
  uVar2 = 0x100;
  if (0x100 < param_2) {
    uVar2 = (uint)param_2;
  }
  puVar1 = (undefined2 *)
           (**(code **)(*DAT_146b62f28 + 0x70))
                     (DAT_146b62f28,param_1,(longlong)(int)(uVar2 - 1) * 0x20 + 0x38,0);
  puVar1[1] = (short)uVar2;
  *puVar1 = 0;
  return;
}


