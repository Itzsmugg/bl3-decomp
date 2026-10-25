// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c9f6d0 agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirect body=203 status=ok
// SIG undefined agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirect(void)

byte agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirect
               (longlong param_1,longlong param_2,int param_3,longlong param_4,undefined4 param_5,
               int param_6)

{
  int iVar1;
  
                    /* 0x3c9f6d0  547  agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirect */
  if ((((param_1 == 0) || (param_3 == 0)) || (param_4 == 0)) || (param_6 == 0)) {
    return 2;
  }
  if ((*(uint *)(param_1 + 0x118) & 0x10) != 0) {
    if ((*(uint *)(param_1 + 0x118) >> 0x15 & 1) != 0) {
      if (param_2 == 0) {
        param_2 = *(longlong *)(param_1 + 0x110);
      }
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x48))
                        (*(longlong **)(param_1 + 0x138),param_3,param_4,param_5,param_6,param_2);
      return -(iVar1 != 0) & 8;
    }
    if ((param_2 == 0) || (param_2 == *(longlong *)(param_1 + 0x110))) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x28))
                        (*(longlong **)(param_1 + 0x138),param_3,param_4,param_5,param_6);
      return -(iVar1 != 0) & 8;
    }
  }
  return 6;
}



// FUNCTION 143c9f7a0 agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirectCountIndirect body=246 status=ok
// SIG undefined agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirectCountIndirect(void)

byte agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirectCountIndirect
               (longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
               longlong param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  
                    /* 0x3c9f7a0  548
                       agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirectCountIndirect */
  if ((((param_1 == 0) || (param_3 == 0)) || (param_5 == 0)) || (param_7 == 0)) {
    return 2;
  }
  if ((*(uint *)(param_1 + 0x118) & 0x20) != 0) {
    if ((*(uint *)(param_1 + 0x118) >> 0x15 & 1) != 0) {
      if (param_2 == 0) {
        param_2 = *(longlong *)(param_1 + 0x110);
      }
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x58))
                        (*(longlong **)(param_1 + 0x138),param_3,param_4,param_5,param_6,param_7,
                         param_2);
      return -(iVar1 != 0) & 8;
    }
    if ((param_2 == 0) || (param_2 == *(longlong *)(param_1 + 0x110))) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x38))
                        (*(longlong **)(param_1 + 0x138),param_3,param_4,param_5,param_6,param_7);
      return -(iVar1 != 0) & 8;
    }
  }
  return 6;
}



// FUNCTION 143c9f8a0 agsDriverExtensionsDX11_MultiDrawInstancedIndirect body=203 status=ok
// SIG undefined agsDriverExtensionsDX11_MultiDrawInstancedIndirect(void)

byte agsDriverExtensionsDX11_MultiDrawInstancedIndirect
               (longlong param_1,longlong param_2,int param_3,longlong param_4,undefined4 param_5,
               int param_6)

{
  int iVar1;
  
                    /* 0x3c9f8a0  549  agsDriverExtensionsDX11_MultiDrawInstancedIndirect */
  if ((((param_1 == 0) || (param_3 == 0)) || (param_4 == 0)) || (param_6 == 0)) {
    return 2;
  }
  if ((*(uint *)(param_1 + 0x118) & 0x10) != 0) {
    if ((*(uint *)(param_1 + 0x118) >> 0x15 & 1) != 0) {
      if (param_2 == 0) {
        param_2 = *(longlong *)(param_1 + 0x110);
      }
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x40))
                        (*(longlong **)(param_1 + 0x138),param_3,param_4,param_5,param_6,param_2);
      return -(iVar1 != 0) & 8;
    }
    if ((param_2 == 0) || (param_2 == *(longlong *)(param_1 + 0x110))) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))
                        (*(longlong **)(param_1 + 0x138),param_3,param_4,param_5,param_6);
      return -(iVar1 != 0) & 8;
    }
  }
  return 6;
}



// FUNCTION 143c9f970 agsDriverExtensionsDX11_MultiDrawInstancedIndirectCountIndirect body=246 status=ok
// SIG undefined agsDriverExtensionsDX11_MultiDrawInstancedIndirectCountIndirect(void)

byte agsDriverExtensionsDX11_MultiDrawInstancedIndirectCountIndirect
               (longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
               longlong param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  
                    /* 0x3c9f970  550
                       agsDriverExtensionsDX11_MultiDrawInstancedIndirectCountIndirect */
  if ((((param_1 == 0) || (param_3 == 0)) || (param_5 == 0)) || (param_7 == 0)) {
    return 2;
  }
  if ((*(uint *)(param_1 + 0x118) & 0x20) != 0) {
    if ((*(uint *)(param_1 + 0x118) >> 0x15 & 1) != 0) {
      if (param_2 == 0) {
        param_2 = *(longlong *)(param_1 + 0x110);
      }
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x50))
                        (*(longlong **)(param_1 + 0x138),param_3,param_4,param_5,param_6,param_7,
                         param_2);
      return -(iVar1 != 0) & 8;
    }
    if ((param_2 == 0) || (param_2 == *(longlong *)(param_1 + 0x110))) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x30))
                        (*(longlong **)(param_1 + 0x138),param_3,param_4,param_5,param_6,param_7);
      return -(iVar1 != 0) & 8;
    }
  }
  return 6;
}



// FUNCTION 143c9fa70 agsDriverExtensionsDX11_NumPendingAsyncCompileJobs body=71 status=ok
// SIG undefined agsDriverExtensionsDX11_NumPendingAsyncCompileJobs(void)

byte agsDriverExtensionsDX11_NumPendingAsyncCompileJobs(longlong param_1,longlong param_2)

{
  int iVar1;
  
                    /* 0x3c9fa70  551  agsDriverExtensionsDX11_NumPendingAsyncCompileJobs */
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(uint *)(param_1 + 0x118) & 0x20000) == 0) {
      return 6;
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x28))();
    return -(iVar1 != 0) & 8;
  }
  return 2;
}



// FUNCTION 143c9fac0 agsDriverExtensionsDX11_SetClipRects body=409 status=ok
// SIG undefined agsDriverExtensionsDX11_SetClipRects(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte agsDriverExtensionsDX11_SetClipRects(longlong param_1,uint param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_48 [32];
  ulonglong local_28 [2];
  
                    /* 0x3c9fac0  552  agsDriverExtensionsDX11_SetClipRects */
  puVar13 = auStack_48;
  puVar12 = auStack_48;
  local_28[0] = DAT_1468387a8 ^ (ulonglong)local_28;
  uVar14 = (ulonglong)param_2;
  if ((param_1 == 0) || ((param_2 != 0 && (param_3 == 0)))) {
    bVar5 = 2;
    goto LAB_143c9fc37;
  }
  if ((*(uint *)(param_1 + 0x118) & 0x40000) == 0) {
    bVar5 = 6;
    puVar13 = auStack_48;
    goto LAB_143c9fc37;
  }
  uVar10 = uVar14 * 0x14;
  uVar8 = uVar10 + 0x10;
  uVar7 = 0;
  if (uVar10 < uVar8) {
    uVar7 = uVar8;
  }
  puVar13 = auStack_48;
  if (uVar7 != 0) {
    uVar7 = 0;
    if (uVar10 < uVar8) {
      uVar7 = uVar8;
    }
    uVar8 = uVar10 + 0x10;
    if (uVar7 < 0x401) {
      uVar7 = 0;
      if (uVar10 < uVar8) {
        uVar7 = uVar8;
      }
      uVar8 = uVar7 + 0xf;
      if (uVar8 <= uVar7) {
        uVar8 = 0xffffffffffffff0;
      }
      lVar4 = -(uVar8 & 0xfffffffffffffff0);
      puVar13 = auStack_48 + lVar4;
      puVar12 = auStack_48 + lVar4;
      puVar9 = (undefined4 *)((longlong)local_28 + lVar4);
      if (puVar9 == (undefined4 *)0x0) goto LAB_143c9fc2b;
      *puVar9 = 0xcccc;
LAB_143c9fbac:
      puVar11 = puVar9 + 4;
      puVar13 = puVar12;
    }
    else {
      uVar7 = 0;
      if (uVar10 < uVar8) {
        uVar7 = uVar8;
      }
      puVar9 = malloc(uVar7);
      puVar11 = (undefined4 *)0x0;
      puVar13 = auStack_48;
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = 0xdddd;
        goto LAB_143c9fbac;
      }
    }
    if (puVar11 != (undefined4 *)0x0) {
      if (param_2 != 0) {
        param_3 = param_3 - (longlong)puVar11;
        puVar9 = puVar11 + 2;
        uVar8 = uVar14;
        do {
          puVar1 = puVar9 + 5;
          puVar9[-2] = (uint)(*(int *)(param_3 + -8 + (longlong)puVar9) == 1);
          puVar9[-1] = *(undefined4 *)(param_3 + -0x18 + (longlong)puVar1);
          *puVar9 = *(undefined4 *)(param_3 + -0x14 + (longlong)puVar1);
          puVar9[1] = *(int *)(param_3 + -0x10 + (longlong)puVar1) +
                      *(int *)(param_3 + -0x18 + (longlong)puVar1);
          puVar9[2] = *(int *)(param_3 + -0xc + (longlong)puVar1) +
                      *(int *)(param_3 + -0x14 + (longlong)puVar1);
          uVar8 = uVar8 - 1;
          puVar9 = puVar1;
        } while (uVar8 != 0);
      }
      plVar2 = *(longlong **)(param_1 + 0x160);
      pcVar3 = *(code **)(*plVar2 + 0x30);
      *(undefined8 *)(puVar13 + -8) = 0x143c9fc0d;
      iVar6 = (*pcVar3)(plVar2,uVar14,puVar11);
      if (puVar11[-4] == 0xdddd) {
        *(undefined8 *)(puVar13 + -8) = 0x143c9fc22;
        free(puVar11 + -4);
      }
      bVar5 = -(iVar6 != 0) & 8;
      goto LAB_143c9fc37;
    }
  }
LAB_143c9fc2b:
  bVar5 = 3;
LAB_143c9fc37:
  *(undefined8 *)(puVar13 + -8) = 0x143c9fc43;
  return bVar5;
}



// FUNCTION 143c9fc60 agsDriverExtensionsDX11_SetDepthBounds body=154 status=ok
// SIG undefined agsDriverExtensionsDX11_SetDepthBounds(void)

byte agsDriverExtensionsDX11_SetDepthBounds
               (longlong param_1,longlong param_2,undefined1 param_3,undefined4 param_4,
               undefined4 param_5)

{
  longlong *plVar1;
  int iVar2;
  
                    /* 0x3c9fc60  553  agsDriverExtensionsDX11_SetDepthBounds */
  if (param_1 == 0) {
    return 2;
  }
  plVar1 = *(longlong **)(param_1 + 0x130);
  if (plVar1 != (longlong *)0x0) {
    if ((*(uint *)(param_1 + 0x118) & 0x800000) != 0) {
      if (param_2 == 0) {
        param_2 = *(longlong *)(param_1 + 0x110);
      }
      iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_3,plVar1,param_5,param_2);
      return -(iVar2 != 0) & 8;
    }
    if ((param_2 == 0) || (param_2 == *(longlong *)(param_1 + 0x110))) {
      iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_3,param_4,param_5);
      return -(iVar2 != 0) & 8;
    }
  }
  return 6;
}



// FUNCTION 143c9fd00 agsDriverExtensionsDX11_SetDiskShaderCacheEnabled body=76 status=ok
// SIG undefined agsDriverExtensionsDX11_SetDiskShaderCacheEnabled(void)

byte agsDriverExtensionsDX11_SetDiskShaderCacheEnabled(longlong param_1,int param_2)

{
  int iVar1;
  
                    /* 0x3c9fd00  554  agsDriverExtensionsDX11_SetDiskShaderCacheEnabled */
  if (param_1 == 0) {
    return 2;
  }
  if ((*(uint *)(param_1 + 0x118) & 0x20000) == 0) {
    return 6;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x30))
                    (*(longlong **)(param_1 + 0x158),param_2 == 1);
  return -(iVar1 != 0) & 8;
}



// FUNCTION 143c9fd50 agsDriverExtensionsDX11_SetMaxAsyncCompileThreadCount body=66 status=ok
// SIG undefined agsDriverExtensionsDX11_SetMaxAsyncCompileThreadCount(void)

byte agsDriverExtensionsDX11_SetMaxAsyncCompileThreadCount(longlong param_1)

{
  int iVar1;
  
                    /* 0x3c9fd50  555  agsDriverExtensionsDX11_SetMaxAsyncCompileThreadCount */
  if (param_1 == 0) {
    return 2;
  }
  if ((*(uint *)(param_1 + 0x118) & 0x20000) == 0) {
    return 6;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x20))();
  return -(iVar1 != 0) & 8;
}



// FUNCTION 143c9fda0 agsDriverExtensionsDX11_SetViewBroadcastMasks body=78 status=ok
// SIG undefined agsDriverExtensionsDX11_SetViewBroadcastMasks(void)

byte agsDriverExtensionsDX11_SetViewBroadcastMasks(longlong param_1)

{
  int iVar1;
  
                    /* 0x3c9fda0  556  agsDriverExtensionsDX11_SetViewBroadcastMasks */
  if (param_1 == 0) {
    return 2;
  }
  if ((*(uint *)(param_1 + 0x118) & 0x40000) == 0) {
    return 6;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x160) + 0x20))();
  return -(iVar1 != 0) & 8;
}



// FUNCTION 143c9fdf0 agsDriverExtensionsDX11_WriteBreadcrumb body=207 status=ok
// SIG undefined agsDriverExtensionsDX11_WriteBreadcrumb(void)

byte agsDriverExtensionsDX11_WriteBreadcrumb(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  undefined8 local_10;
  
                    /* 0x3c9fdf0  557  agsDriverExtensionsDX11_WriteBreadcrumb */
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) &&
     (*(uint *)((longlong)param_2 + 0xc) < *(uint *)(param_1 + 0x180))) {
    plVar1 = *(longlong **)(param_1 + 0x168);
    if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x170) != 0)) {
      if (*(int *)(param_2 + 1) == 0) {
        local_18 = 1;
      }
      else {
        local_18._0_4_ = 0;
        if (*(int *)(param_2 + 1) == 1) {
          local_18._0_4_ = 2;
        }
        local_18 = (ulonglong)(uint)local_18;
      }
      local_28 = *param_2;
      local_20 = (ulonglong)(*(uint *)((longlong)param_2 + 0xc) * 8);
      local_10 = *(undefined8 *)(param_1 + 0x178);
      iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,&local_28);
      return -(iVar2 != 0) & 8;
    }
    return 6;
  }
  return 2;
}



// FUNCTION 143c9fec0 FUN_143c9fec0 body=63 status=ok
// SIG undefined FUN_143c9fec0(void)

void FUN_143c9fec0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143ca0910();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  if ((undefined8 *)(lVar1 + 0x20) != (undefined8 *)0x0) {
    *(undefined8 *)(lVar1 + 0x20) = *param_2;
    *(undefined8 *)(lVar1 + 0x28) = param_2[1];
  }
  return;
}



// FUNCTION 143c9ff00 _Distance1<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_>_>_>_> body=122 status=ok
// SIG undefined _Distance1<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_>_>_>_>(void)

longlong std::
         _Distance1<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_>_>_>_>
                   (longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = 0;
  while (param_1 != param_2) {
    lVar4 = lVar4 + 1;
    if (*(char *)((longlong)param_1 + 0x19) == '\0') {
      plVar2 = (longlong *)param_1[2];
      if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x19);
        param_1 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          param_1 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_1[1] + 0x19);
        plVar3 = (longlong *)param_1[1];
        plVar2 = param_1;
        while ((param_1 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)param_1[2]))) {
          cVar1 = *(char *)(param_1[1] + 0x19);
          plVar3 = (longlong *)param_1[1];
          plVar2 = param_1;
        }
      }
    }
  }
  return lVar4;
}



// FUNCTION 143c9ff80 _Insert_at<std::pair<enum_cSecureConnection::EServer_const_,cSecureConnection_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<enum_cSecureConnection::EServer_const_,cSecureConnection_*___ptr64>,void_*___ptr64>_*___ptr64> body=678 status=ok
// SIG undefined _Insert_at<std::pair<enum_cSecureConnection::EServer_const_,cSecureConnection_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<enum_cSecureConnection::EServer_const_,cSecureConnection_*___ptr64>,void_*___ptr64>_*___ptr64>(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<enum_cSecureConnection::EServer,cSecureConnection_*___ptr64,std::less<enum_cSecureConnection::EServer>,std::allocator<std::pair<enum_cSecureConnection::EServer_const_,cSecureConnection_*___ptr64>_>,0>_>
::
_Insert_at<std::pair<enum_cSecureConnection::EServer_const_,cSecureConnection_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<enum_cSecureConnection::EServer_const_,cSecureConnection_*___ptr64>,void_*___ptr64>_*___ptr64>
          (longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 param_5
          ,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (0x555555555555553 < (ulonglong)param_1[1]) {
    FMemory::operator_delete(param_6);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar4 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_143ca0004;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_143ca0004;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_143ca0004:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar5 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar4 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar4 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar6 = (longlong *)plVar5[1];
    plVar7 = *(longlong **)plVar6[1];
    if (plVar6 == plVar7) {
      lVar4 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar4 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar4 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar5 = *(longlong **)(plVar5[1] + 8);
      }
      else {
        if (plVar5 == (longlong *)plVar6[2]) {
          plVar5 = (longlong *)plVar6[2];
          plVar6[2] = *plVar5;
          if (*(char *)(*plVar5 + 0x19) == '\0') {
            *(longlong **)(*plVar5 + 8) = plVar6;
          }
          plVar5[1] = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar5;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar5;
            }
            else {
              plVar7[2] = (longlong)plVar5;
            }
          }
          *plVar5 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar5;
          plVar5 = plVar6;
        }
        *(undefined1 *)(plVar5[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar5[1] + 8);
        plVar7 = (longlong *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(longlong **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
          plVar7[2] = (longlong)plVar6;
        }
        else {
          plVar2 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
          else {
            *plVar2 = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
        }
LAB_143ca01fe:
        plVar6[1] = (longlong)plVar7;
      }
    }
    else {
      if ((char)plVar7[3] != '\0') {
        if (plVar5 == (longlong *)*plVar6) {
          lVar4 = *plVar6;
          *plVar6 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x19) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar6;
          }
          *(longlong *)(lVar4 + 8) = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong *)(*param_1 + 8) = lVar4;
          }
          else {
            plVar5 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)plVar5[2]) {
              plVar5[2] = lVar4;
            }
            else {
              *plVar5 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar6;
          plVar6[1] = lVar4;
          plVar5 = plVar6;
        }
        *(undefined1 *)(plVar5[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar5[1] + 8);
        plVar7 = (longlong *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(longlong **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar3 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar3) {
            *puVar3 = plVar7;
          }
          else {
            puVar3[2] = plVar7;
          }
        }
        *plVar7 = (longlong)plVar6;
        goto LAB_143ca01fe;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
      plVar5 = *(longlong **)(plVar5[1] + 8);
    }
    cVar1 = *(char *)(plVar5[1] + 0x18);
  } while( true );
}



// FUNCTION 143ca0230 _Insert_nohint<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,cSocket_*___ptr64>,void_*___ptr64>_*___ptr64> body=351 status=ok
// SIG undefined _Insert_nohint<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,cSocket_*___ptr64>,void_*___ptr64>_*___ptr64>(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<unsigned___int64,cSocket_*___ptr64,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_>,0>_>
::
_Insert_nohint<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,cSocket_*___ptr64>,void_*___ptr64>_*___ptr64>
          (longlong *param_1,undefined8 *param_2,char param_3,ulonglong *param_4,undefined8 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  puVar4 = (undefined8 *)*param_1;
  bVar5 = true;
  puVar6 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0x19) == '\0') {
    puVar3 = (undefined8 *)puVar4[1];
    do {
      puVar6 = puVar3;
      if (param_3 == '\0') {
        bVar5 = *param_4 < (ulonglong)puVar6[4];
      }
      else {
        bVar5 = *param_4 <= (ulonglong)puVar6[4];
      }
      if (bVar5 == false) {
        puVar3 = (undefined8 *)puVar6[2];
      }
      else {
        puVar3 = (undefined8 *)*puVar6;
      }
    } while (*(char *)((longlong)puVar3 + 0x19) == '\0');
  }
  puVar3 = puVar6;
  if (bVar5 != false) {
    if (puVar6 == (undefined8 *)*puVar4) {
      puVar4 = (undefined8 *)
               _Tree<std::_Tmap_traits<enum_cSecureConnection::EServer,cSecureConnection_*___ptr64,std::less<enum_cSecureConnection::EServer>,std::allocator<std::pair<enum_cSecureConnection::EServer_const_,cSecureConnection_*___ptr64>_>,0>_>
               ::
               _Insert_at<std::pair<enum_cSecureConnection::EServer_const_,cSecureConnection_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<enum_cSecureConnection::EServer_const_,cSecureConnection_*___ptr64>,void_*___ptr64>_*___ptr64>
                         (param_1,local_res8,1,puVar6,param_4,param_5,0xfffffffffffffffe);
      *param_2 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
      puVar3 = (undefined8 *)*puVar6;
      if (*(char *)((longlong)puVar3 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)puVar3[2] + 0x19);
        puVar4 = (undefined8 *)puVar3[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)puVar4[2] + 0x19);
          puVar3 = puVar4;
          puVar4 = (undefined8 *)puVar4[2];
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
        puVar4 = (undefined8 *)puVar6[1];
        puVar3 = puVar6;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined8 *)*puVar2))) {
          cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
          puVar4 = (undefined8 *)puVar2[1];
          puVar3 = puVar2;
        }
        if (*(char *)((longlong)puVar3 + 0x19) == '\0') {
          puVar3 = puVar2;
        }
      }
    }
    else {
      puVar3 = (undefined8 *)puVar6[2];
    }
  }
  if ((ulonglong)puVar3[4] < *param_4) {
    puVar4 = (undefined8 *)
             _Tree<std::_Tmap_traits<enum_cSecureConnection::EServer,cSecureConnection_*___ptr64,std::less<enum_cSecureConnection::EServer>,std::allocator<std::pair<enum_cSecureConnection::EServer_const_,cSecureConnection_*___ptr64>_>,0>_>
             ::
             _Insert_at<std::pair<enum_cSecureConnection::EServer_const_,cSecureConnection_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<enum_cSecureConnection::EServer_const_,cSecureConnection_*___ptr64>,void_*___ptr64>_*___ptr64>
                       (param_1,local_res8,bVar5,puVar6,param_4,param_5,0xfffffffffffffffe);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    FMemory::operator_delete(param_5);
    *param_2 = puVar3;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143ca0390 FUN_143ca0390 body=256 status=ok
// SIG undefined FUN_143ca0390(void)

void FUN_143ca0390(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    plVar4 = (longlong *)**(longlong **)(param_1 + 0x1c0);
    if (plVar4 != *(longlong **)(param_1 + 0x1c0)) {
      do {
        if ((longlong *)plVar4[5] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar4[5] + 0x10))();
        }
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          plVar2 = (longlong *)plVar4[2];
          if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar2 + 0x19);
            plVar4 = plVar2;
            plVar2 = (longlong *)*plVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar2 + 0x19);
              plVar4 = plVar2;
              plVar2 = (longlong *)*plVar2;
            }
          }
          else {
            cVar1 = *(char *)(plVar4[1] + 0x19);
            plVar3 = (longlong *)plVar4[1];
            plVar2 = plVar4;
            while ((plVar4 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
              cVar1 = *(char *)(plVar4[1] + 0x19);
              plVar3 = (longlong *)plVar4[1];
              plVar2 = plVar4;
            }
          }
        }
      } while (plVar4 != *(longlong **)(param_1 + 0x1c0));
    }
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::clear(param_1 + 0x1c0);
  }
  if (*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x10))();
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  if (*(longlong **)(param_1 + 0x1b8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x10))();
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  if (*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x10))();
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 143ca0490 FUN_143ca0490 body=483 status=ok
// SIG undefined FUN_143ca0490(void)

void FUN_143ca0490(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  FARPROC pFVar4;
  INT_PTR IVar5;
  
  pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 400),"AmdExtD3DCreateInterface");
  if (((pFVar4 != (FARPROC)0x0) &&
      (IVar5 = (*pFVar4)(*(undefined8 *)(param_1 + 0x198),&DAT_145d471a0,param_1 + 0x1a8),
      (int)IVar5 == 0)) && (plVar2 = *(longlong **)(param_1 + 0x1a8), plVar2 != (longlong *)0x0)) {
    plVar1 = (longlong *)(param_1 + 0x1b0);
    iVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,*(undefined8 *)(param_1 + 0x198),&DAT_145d471b0,plVar1);
    if ((iVar3 == 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
      iVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,1);
      if (iVar3 == 0) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,2);
      if (iVar3 == 0) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,3);
      if (iVar3 == 0) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,4);
      if (iVar3 == 0) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,5);
      if (iVar3 == 0) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,6);
      if (iVar3 == 0) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,7);
      if (iVar3 == 0) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,8);
      if (iVar3 == 0) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x80;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,9);
      if (iVar3 == 0) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x100;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,10);
      if (iVar3 == 0) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x200;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x28))();
      if (iVar3 != 0) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffc00;
      }
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x18))
                      (*(longlong **)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x198),
                       &DAT_145d471c0,param_1 + 0x1b8);
    if ((iVar3 == 0) && (*(longlong *)(param_1 + 0x1b8) != 0)) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x80000400;
    }
  }
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 8);
  return;
}



// FUNCTION 143ca0680 FUN_143ca0680 body=126 status=ok
// SIG undefined FUN_143ca0680(void)

undefined8 FUN_143ca0680(longlong param_1,longlong param_2)

{
  HMODULE pHVar1;
  undefined8 uVar2;
  
  pHVar1 = LoadLibraryA("d3d12.dll");
  *(HMODULE *)(param_1 + 0x188) = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    return 4;
  }
  if (param_2 == 0) {
    uVar2 = FUN_143ca2dd0("amdxc64.dll","amdxc32.dll");
  }
  else {
    uVar2 = FUN_143ca0700(param_2);
  }
  *(undefined8 *)(param_1 + 400) = uVar2;
  uVar2 = 0;
  if (*(longlong *)(param_1 + 400) == 0) {
    uVar2 = 4;
  }
  return uVar2;
}



// FUNCTION 143ca0700 FUN_143ca0700 body=419 status=ok
// SIG undefined FUN_143ca0700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

HMODULE FUN_143ca0700(longlong *param_1)

{
  int iVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  INT_PTR IVar5;
  undefined1 auStack_3b8 [32];
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 *local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined1 local_368 [296];
  undefined8 local_240;
  undefined4 local_238;
  WCHAR local_234 [262];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  pHVar2 = LoadLibraryA("gdi32.dll");
  iVar1 = 0;
  _guard_xfg_dispatch_icall_nop(&local_238,0,0x20c);
  local_238 = 3;
  if (pHVar2 != (HMODULE)0x0) {
    pFVar3 = GetProcAddress(pHVar2,"D3DKMTQueryAdapterInfo");
    pFVar4 = GetProcAddress(pHVar2,"D3DKMTOpenAdapterFromLuid");
    iVar1 = 0;
    if ((pFVar3 != (FARPROC)0x0) && (pFVar4 != (FARPROC)0x0)) {
      local_380 = 0;
      local_378 = 0;
      _guard_xfg_dispatch_icall_nop(local_368,0,0x130);
      (**(code **)(*param_1 + 0x40))(param_1,local_368);
      local_380 = local_240;
      IVar5 = (*pFVar4)(&local_380);
      iVar1 = (int)IVar5;
      if (-1 < iVar1) {
        local_390 = &local_238;
        _local_398 = CONCAT44(1,local_378);
        local_388 = 0x20c;
        IVar5 = (*pFVar3)(&local_398);
        iVar1 = (int)IVar5;
      }
    }
    FreeLibrary(pHVar2);
  }
  if (iVar1 == 0) {
    pHVar2 = LoadLibraryW(local_234);
    return pHVar2;
  }
  return (HMODULE)0x0;
}



// FUNCTION 143ca08b0 FUN_143ca08b0 body=84 status=ok
// SIG undefined FUN_143ca08b0(void)

void FUN_143ca08b0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x198) = 0;
  if (*(HMODULE *)(param_1 + 0x188) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x188));
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  if (*(HMODULE *)(param_1 + 400) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 400));
    *(undefined8 *)(param_1 + 400) = 0;
  }
  return;
}



// FUNCTION 143ca0910 FUN_143ca0910 body=92 status=ok
// SIG undefined FUN_143ca0910(void)

undefined8 * FUN_143ca0910(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  *puVar1 = *param_1;
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = *param_1;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = *param_1;
  }
  return puVar1;
}



// FUNCTION 143ca0970 clear body=126 status=ok
// SIG undefined clear(void)

void std::
     _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
     ::clear(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    _Erase(param_1,plVar3[2],param_3,param_4,uVar4);
    plVar2 = (longlong *)*plVar3;
    FMemory::operator_delete(plVar3);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  *(longlong *)(*param_1 + 8) = *param_1;
  *(longlong *)*param_1 = *param_1;
  *(longlong *)(*param_1 + 0x10) = *param_1;
  param_1[1] = 0;
  return;
}



// FUNCTION 143ca09f0 erase body=218 status=ok
// SIG undefined erase(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<unsigned___int64,cSocket_*___ptr64,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_>,0>_>
::erase(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  longlong *local_res18;
  
  if ((param_3 == *(longlong **)*param_1) && (param_4 == (longlong *)*param_1)) {
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::clear();
    *param_2 = *(undefined8 *)*param_1;
    return param_2;
  }
  while (param_3 != param_4) {
    local_res18 = param_3;
    if (*(char *)((longlong)param_3 + 0x19) == '\0') {
      local_res18 = (longlong *)param_3[2];
      if (*(char *)((longlong)local_res18 + 0x19) == '\0') {
        cVar1 = *(char *)(*local_res18 + 0x19);
        plVar2 = (longlong *)*local_res18;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          local_res18 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar3 = (longlong *)param_3[1];
        plVar2 = param_3;
        while ((local_res18 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)local_res18[2]))) {
          cVar1 = *(char *)(local_res18[1] + 0x19);
          plVar3 = (longlong *)local_res18[1];
          plVar2 = local_res18;
        }
      }
    }
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::erase(param_1,local_res8,param_3);
    param_3 = local_res18;
  }
  *param_2 = param_3;
  return param_2;
}



// FUNCTION 143ca0ad0 erase body=978 status=ok
// SIG undefined erase(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
::erase(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_res18;
  
  local_res18 = param_3;
  if (*(char *)((longlong)param_3 + 0x19) == '\0') {
    local_res18 = (longlong *)param_3[2];
    if (*(char *)((longlong)local_res18 + 0x19) == '\0') {
      cVar1 = *(char *)(*local_res18 + 0x19);
      plVar7 = (longlong *)*local_res18;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x19);
        local_res18 = plVar7;
        plVar7 = (longlong *)*plVar7;
      }
    }
    else {
      cVar1 = *(char *)(param_3[1] + 0x19);
      plVar8 = (longlong *)param_3[1];
      plVar7 = param_3;
      while ((local_res18 = plVar8, cVar1 == '\0' && (plVar7 == (longlong *)local_res18[2]))) {
        cVar1 = *(char *)(local_res18[1] + 0x19);
        plVar8 = (longlong *)local_res18[1];
        plVar7 = local_res18;
      }
    }
  }
  plVar7 = (longlong *)*param_3;
  if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
    plVar8 = plVar7;
    if ((*(char *)(param_3[2] + 0x19) == '\0') &&
       (plVar8 = (longlong *)local_res18[2], local_res18 != param_3)) {
      plVar7[1] = (longlong)local_res18;
      *local_res18 = *param_3;
      plVar7 = local_res18;
      if (local_res18 != (longlong *)param_3[2]) {
        plVar7 = (longlong *)local_res18[1];
        if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
          plVar8[1] = (longlong)plVar7;
        }
        *plVar7 = (longlong)plVar8;
        local_res18[2] = param_3[2];
        *(longlong **)(param_3[2] + 8) = local_res18;
      }
      if (*(longlong **)(*param_1 + 8) == param_3) {
        *(longlong **)(*param_1 + 8) = local_res18;
      }
      else {
        puVar4 = (undefined8 *)param_3[1];
        if ((longlong *)*puVar4 == param_3) {
          *puVar4 = local_res18;
        }
        else {
          puVar4[2] = local_res18;
        }
      }
      local_res18[1] = param_3[1];
      lVar3 = local_res18[3];
      *(char *)(local_res18 + 3) = (char)param_3[3];
      *(char *)(param_3 + 3) = (char)lVar3;
      goto LAB_143ca0c92;
    }
  }
  else {
    plVar8 = (longlong *)param_3[2];
  }
  plVar7 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
    plVar8[1] = (longlong)plVar7;
  }
  if (*(longlong **)(*param_1 + 8) == param_3) {
    *(longlong **)(*param_1 + 8) = plVar8;
  }
  else if ((longlong *)*plVar7 == param_3) {
    *plVar7 = (longlong)plVar8;
  }
  else {
    plVar7[2] = (longlong)plVar8;
  }
  if (*(longlong **)*param_1 == param_3) {
    plVar6 = plVar7;
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar8 + 0x19);
      plVar2 = (longlong *)*plVar8;
      plVar6 = plVar8;
      while (plVar5 = plVar2, cVar1 == '\0') {
        plVar2 = (longlong *)*plVar5;
        cVar1 = *(char *)((longlong)plVar2 + 0x19);
        plVar6 = plVar5;
      }
    }
    *(longlong **)*param_1 = plVar6;
  }
  lVar3 = *param_1;
  if (*(longlong **)(lVar3 + 0x10) == param_3) {
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar1 = *(char *)(plVar8[2] + 0x19);
      plVar6 = (longlong *)plVar8[2];
      plVar2 = plVar8;
      while (plVar5 = plVar6, cVar1 == '\0') {
        plVar6 = (longlong *)plVar5[2];
        cVar1 = *(char *)((longlong)plVar6 + 0x19);
        plVar2 = plVar5;
      }
      *(longlong **)(lVar3 + 0x10) = plVar2;
    }
    else {
      *(longlong **)(lVar3 + 0x10) = plVar7;
    }
  }
LAB_143ca0c92:
  if ((char)param_3[3] == '\x01') {
    if (plVar8 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar6 = plVar7;
        if ((char)plVar8[3] != '\x01') break;
        plVar7 = (longlong *)*plVar6;
        if (plVar8 == plVar7) {
          plVar7 = (longlong *)plVar6[2];
          if ((char)plVar7[3] == '\0') {
            *(undefined1 *)(plVar7 + 3) = 1;
            plVar7 = (longlong *)plVar6[2];
            *(undefined1 *)(plVar6 + 3) = 0;
            plVar6[2] = *plVar7;
            if (*(char *)(*plVar7 + 0x19) == '\0') {
              *(longlong **)(*plVar7 + 8) = plVar6;
            }
            plVar7[1] = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar7;
            }
            else {
              puVar4 = (undefined8 *)plVar6[1];
              if (plVar6 == (longlong *)*puVar4) {
                *puVar4 = plVar7;
              }
              else {
                puVar4[2] = plVar7;
              }
            }
            *plVar7 = (longlong)plVar6;
            plVar6[1] = (longlong)plVar7;
            plVar7 = (longlong *)plVar6[2];
          }
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            if ((*(char *)(*plVar7 + 0x18) != '\x01') || (*(char *)(plVar7[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar7[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar7 + 0x18) = 1;
                *(undefined1 *)(plVar7 + 3) = 0;
                _Tree_val<std::_Tree_simple_types<std::pair<CefStringBase<CefStringTraitsUTF16>_const_,CefStringBase<CefStringTraitsUTF16>_>_>_>
                ::_Rrotate(param_1,plVar7);
                plVar7 = (longlong *)plVar6[2];
              }
              *(char *)(plVar7 + 3) = (char)plVar6[3];
              *(undefined1 *)(plVar6 + 3) = 1;
              *(undefined1 *)(plVar7[2] + 0x18) = 1;
              _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,tinygltf::Animation>_>_>
              ::_Lrotate(param_1,plVar6);
              break;
            }
LAB_143ca0e09:
            *(undefined1 *)(plVar7 + 3) = 0;
          }
        }
        else {
          if ((char)plVar7[3] == '\0') {
            *(undefined1 *)(plVar7 + 3) = 1;
            lVar3 = *plVar6;
            *(undefined1 *)(plVar6 + 3) = 0;
            *plVar6 = *(longlong *)(lVar3 + 0x10);
            if (*(char *)(*(longlong *)(lVar3 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar3 + 0x10) + 8) = plVar6;
            }
            *(longlong *)(lVar3 + 8) = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar3;
            }
            else {
              plVar7 = (longlong *)plVar6[1];
              if (plVar6 == (longlong *)plVar7[2]) {
                plVar7[2] = lVar3;
              }
              else {
                *plVar7 = lVar3;
              }
            }
            *(longlong **)(lVar3 + 0x10) = plVar6;
            plVar6[1] = lVar3;
            plVar7 = (longlong *)*plVar6;
          }
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            if ((*(char *)(plVar7[2] + 0x18) == '\x01') && (*(char *)(*plVar7 + 0x18) == '\x01'))
            goto LAB_143ca0e09;
            if (*(char *)(*plVar7 + 0x18) == '\x01') {
              *(undefined1 *)(plVar7[2] + 0x18) = 1;
              *(undefined1 *)(plVar7 + 3) = 0;
              _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_,tinygltf::Animation>_>_>
              ::_Lrotate(param_1,plVar7,plVar6,plVar6);
              plVar7 = (longlong *)*plVar6;
            }
            *(char *)(plVar7 + 3) = (char)plVar6[3];
            *(undefined1 *)(plVar6 + 3) = 1;
            *(undefined1 *)(*plVar7 + 0x18) = 1;
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
  FMemory::operator_delete(param_3);
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  *param_2 = local_res18;
  return param_2;
}



// FUNCTION 143ca0eb0 erase body=201 status=ok
// SIG undefined erase(void)

undefined8
std::
_Tree<std::_Tmap_traits<unsigned___int64,cSocket_*___ptr64,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_>,0>_>
::erase(longlong *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  puVar5 = (undefined8 *)*param_1;
  puVar2 = puVar5 + 1;
  puVar6 = puVar5;
  if (*(char *)((longlong)puVar5[1] + 0x19) == '\0') {
    puVar3 = (undefined8 *)puVar5[1];
    do {
      if ((ulonglong)puVar3[4] < *param_2) {
        puVar1 = (undefined8 *)puVar3[2];
      }
      else {
        if ((*(char *)((longlong)puVar6 + 0x19) != '\0') && (*param_2 < (ulonglong)puVar3[4])) {
          puVar6 = puVar3;
        }
        puVar1 = (undefined8 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar1;
    } while (*(char *)((longlong)puVar1 + 0x19) == '\0');
  }
  puVar3 = puVar6;
  if (*(char *)((longlong)puVar6 + 0x19) != '\0') {
    puVar3 = puVar2;
  }
  if (*(char *)((longlong)*puVar3 + 0x19) == '\0') {
    puVar2 = (undefined8 *)*puVar3;
    do {
      if (*param_2 < (ulonglong)puVar2[4]) {
        puVar3 = (undefined8 *)*puVar2;
        puVar6 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x19) == '\0');
  }
  uVar4 = _Distance1<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_>_>_>_>
                    (puVar5,puVar6,local_res8[0]);
  erase(param_1,local_res8,puVar5,puVar6);
  return uVar4;
}



// FUNCTION 143ca0f80 agsDriverExtensionsDX12_CreateCommandList body=287 status=ok
// SIG undefined agsDriverExtensionsDX12_CreateCommandList(void)

undefined8
agsDriverExtensionsDX12_CreateCommandList
          (longlong param_1,undefined8 param_2,int param_3,longlong param_4,undefined8 param_5,
          undefined8 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 *puVar4;
  undefined8 local_18;
  longlong local_10;
  
                    /* 0x3ca0f80  558  agsDriverExtensionsDX12_CreateCommandList */
  if (((param_1 == 0) || (param_4 == 0)) || (*(longlong **)(param_1 + 0x198) == (longlong *)0x0)) {
    return 2;
  }
  puVar4 = param_7;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x198) + 0x60))();
  if ((iVar2 != 0) || (param_7 == (undefined8 *)0x0)) {
    return 8;
  }
  if (param_3 == 0) {
    uVar1 = *param_7;
    local_res8 = 0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x18))
                      (*(longlong **)(param_1 + 0x1a8),uVar1,&DAT_145d47218,&local_res8,param_5,
                       param_6,puVar4);
    if (iVar2 != 0) {
      return 8;
    }
    if (local_res8 == 0) {
      return 8;
    }
    local_10 = local_res8;
    local_18 = uVar1;
    lVar3 = FUN_143c9fec0(param_1 + 0x1c0,&local_18);
    std::
    _Tree<std::_Tmap_traits<unsigned___int64,cSocket_*___ptr64,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_>,0>_>
    ::
    _Insert_nohint<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_&___ptr64,std::_Tree_node<std::pair<unsigned___int64_const_,cSocket_*___ptr64>,void_*___ptr64>_*___ptr64>
              (param_1 + 0x1c0,&local_18,0,lVar3 + 0x20,lVar3);
  }
  return 0;
}



// FUNCTION 143ca10a0 agsDriverExtensionsDX12_CreateDevice body=504 status=ok
// SIG undefined agsDriverExtensionsDX12_CreateDevice(void)

undefined8
agsDriverExtensionsDX12_CreateDevice
          (longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined8 uVar3;
  FARPROC pFVar4;
  INT_PTR IVar5;
  undefined8 *puVar6;
  longlong *local_res8;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 *local_38;
  ulonglong local_30;
  undefined2 *local_28;
  ulonglong local_20;
  
                    /* 0x3ca10a0  559  agsDriverExtensionsDX12_CreateDevice */
  if ((((param_1 == 0) || (param_4 == (undefined8 *)0x0)) || (param_2 == (longlong *)0x0)) ||
     (*param_2 == 0)) {
    return 2;
  }
  puVar6 = (undefined8 *)0x0;
  *param_4 = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  uVar3 = FUN_143ca0680(param_1,*param_2);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  iVar2 = -0x7fffbffb;
  pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 400),"AmdExtD3DCreateInterface");
  if (pFVar4 != (FARPROC)0x0) {
    local_res8 = (longlong *)0x0;
    (*pFVar4)(0,&DAT_145d471f0,&local_res8);
    if (local_res8 != (longlong *)0x0) {
      local_48 = 0;
      local_40 = 0;
      local_38 = (undefined2 *)0x0;
      local_30 = 0;
      local_28 = (undefined2 *)0x0;
      local_20 = 0;
      if ((param_3 != (undefined8 *)0x0) &&
         ((puVar1 = (undefined2 *)*param_3, puVar1 != (undefined2 *)0x0 || (param_3[1] != 0)))) {
        local_48 = 1;
        puVar6 = &local_48;
        local_38 = &DAT_145af7bc0;
        if (puVar1 != (undefined2 *)0x0) {
          local_38 = puVar1;
        }
        local_30 = (ulonglong)*(uint *)(param_3 + 2);
        local_28 = &DAT_145af7bc0;
        if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
          local_28 = (undefined2 *)param_3[1];
        }
        local_20 = (ulonglong)*(uint *)((longlong)param_3 + 0x14);
      }
      iVar2 = (**(code **)(*local_res8 + 0x18))
                        (local_res8,*param_2,(int)param_2[3],param_2 + 1,param_1 + 0x198,puVar6);
      if (iVar2 == 0) {
        *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) | 0x800;
      }
      (**(code **)(*local_res8 + 0x10))();
      if (iVar2 == 0) goto LAB_143ca1269;
    }
  }
  pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x188),"D3D12CreateDevice");
  if (pFVar4 != (FARPROC)0x0) {
    IVar5 = (*pFVar4)(*param_2,(ulonglong)*(uint *)(param_2 + 3),param_2 + 1,param_1 + 0x198);
    iVar2 = (int)IVar5;
  }
  if (iVar2 != 0) {
    return 1;
  }
LAB_143ca1269:
  *param_4 = *(undefined8 *)(param_1 + 0x198);
  FUN_143ca0490(param_1,param_4);
  return 0;
}



// FUNCTION 143ca12a0 agsDriverExtensionsDX12_CreateFromDevice body=161 status=ok
// SIG undefined agsDriverExtensionsDX12_CreateFromDevice(void)

undefined8
agsDriverExtensionsDX12_CreateFromDevice
          (longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  HMODULE pHVar1;
  longlong lVar2;
  
                    /* 0x3ca12a0  560  agsDriverExtensionsDX12_CreateFromDevice */
  if (((param_1 != 0) && (param_4 != (longlong *)0x0)) && (param_2 != 0)) {
    *(undefined4 *)(param_4 + 1) = 0;
    *param_4 = param_2;
    *(longlong *)(param_1 + 0x198) = param_2;
    pHVar1 = LoadLibraryA("d3d12.dll");
    *(HMODULE *)(param_1 + 0x188) = pHVar1;
    if (pHVar1 != (HMODULE)0x0) {
      lVar2 = FUN_143ca2dd0("amdxc64.dll","amdxc32.dll");
      *(longlong *)(param_1 + 400) = lVar2;
      if (lVar2 != 0) {
        FUN_143ca0490(param_1,param_4);
        return 0;
      }
    }
    return 4;
  }
  return 2;
}



// FUNCTION 143ca1350 agsDriverExtensionsDX12_CreateGraphicsPipelineState body=214 status=ok
// SIG undefined agsDriverExtensionsDX12_CreateGraphicsPipelineState(void)

byte agsDriverExtensionsDX12_CreateGraphicsPipelineState
               (longlong param_1,uint *param_2,longlong param_3,undefined8 param_4,longlong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
                    /* 0x3ca1350  561  agsDriverExtensionsDX12_CreateGraphicsPipelineState */
  if ((((param_1 != 0) && (param_3 != 0)) && (param_5 != 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x198), plVar1 != (longlong *)0x0)) {
    plVar2 = *(longlong **)(param_1 + 0x1b8);
    if (plVar2 == (longlong *)0x0) {
      iVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,param_3,param_4);
      return -(iVar3 != 0) & 8;
    }
    uVar4 = 0;
    local_28 = 1;
    local_20 = 0;
    if (param_2 != (uint *)0x0) {
      uVar4 = *param_2 & 1;
    }
    local_18 = (ulonglong)uVar4;
    iVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,&local_28,param_3,param_4,param_5);
    return -(iVar3 != 0) & 8;
  }
  return 2;
}



// FUNCTION 143ca1430 agsDriverExtensionsDX12_Destroy body=29 status=ok
// SIG undefined agsDriverExtensionsDX12_Destroy(void)

undefined4 agsDriverExtensionsDX12_Destroy(longlong param_1)

{
                    /* 0x3ca1430  562  agsDriverExtensionsDX12_Destroy */
  if (param_1 == 0) {
    return 2;
  }
  FUN_143ca0390();
  return 0;
}



// FUNCTION 143ca1450 agsDriverExtensionsDX12_DestroyCommandList body=218 status=ok
// SIG undefined agsDriverExtensionsDX12_DestroyCommandList(void)

undefined8 agsDriverExtensionsDX12_DestroyCommandList(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *local_res8;
  
                    /* 0x3ca1450  563  agsDriverExtensionsDX12_DestroyCommandList */
  if ((param_1 != 0) && (param_2 != (longlong *)0x0)) {
    local_res8 = (longlong *)0x0;
    (**(code **)*param_2)(param_2,&DAT_144da7220,&local_res8);
    if (local_res8 != (longlong *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x1c0);
      cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
      puVar4 = puVar2;
      puVar3 = (undefined8 *)puVar2[1];
      while (cVar1 == '\0') {
        if ((longlong *)puVar3[4] < local_res8) {
          puVar5 = (undefined8 *)puVar3[2];
          puVar3 = puVar4;
        }
        else {
          puVar5 = (undefined8 *)*puVar3;
        }
        puVar4 = puVar3;
        puVar3 = puVar5;
        cVar1 = *(char *)((longlong)puVar5 + 0x19);
      }
      if ((puVar4 == puVar2) || (local_res8 < (longlong *)puVar4[4])) {
        puVar4 = puVar2;
      }
      if (puVar4 != puVar2) {
        (**(code **)(*(longlong *)puVar4[5] + 0x10))();
        std::
        _Tree<std::_Tmap_traits<unsigned___int64,cSocket_*___ptr64,std::less<unsigned___int64>,std::allocator<std::pair<unsigned___int64_const_,cSocket_*___ptr64>_>,0>_>
        ::erase(param_1 + 0x1c0,&local_res8);
      }
      (**(code **)(*local_res8 + 0x10))(local_res8);
    }
    (**(code **)(*param_2 + 0x10))(param_2);
    return 0;
  }
  return 2;
}



// FUNCTION 143ca1530 agsDriverExtensionsDX12_DestroyDevice body=132 status=ok
// SIG undefined agsDriverExtensionsDX12_DestroyDevice(void)

undefined8
agsDriverExtensionsDX12_DestroyDevice(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
                    /* 0x3ca1530  564  agsDriverExtensionsDX12_DestroyDevice */
  if ((param_1 != 0) && (param_2 != (longlong *)0x0)) {
    if (*(longlong **)(param_1 + 0x198) != param_2) {
      return 1;
    }
    FUN_143ca0390();
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = uVar1;
    }
    FUN_143ca08b0(param_1);
    return 0;
  }
  return 2;
}



// FUNCTION 143ca15c0 agsDriverExtensionsDX12_PopMarker body=57 status=ok
// SIG undefined agsDriverExtensionsDX12_PopMarker(void)

undefined4 agsDriverExtensionsDX12_PopMarker(longlong param_1,longlong param_2)

{
                    /* 0x3ca15c0  565  agsDriverExtensionsDX12_PopMarker */
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(longlong **)(param_1 + 0x1b8) == (longlong *)0x0) {
      return 6;
    }
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x28))();
    return 0;
  }
  return 2;
}



// FUNCTION 143ca1600 agsDriverExtensionsDX12_PushMarker body=62 status=ok
// SIG undefined agsDriverExtensionsDX12_PushMarker(void)

undefined4 agsDriverExtensionsDX12_PushMarker(longlong param_1,longlong param_2,longlong param_3)

{
                    /* 0x3ca1600  566  agsDriverExtensionsDX12_PushMarker */
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    if (*(longlong **)(param_1 + 0x1b8) == (longlong *)0x0) {
      return 6;
    }
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x20))();
    return 0;
  }
  return 2;
}



// FUNCTION 143ca1640 agsDriverExtensionsDX12_SetDepthBounds body=163 status=ok
// SIG undefined agsDriverExtensionsDX12_SetDepthBounds(void)

undefined8
agsDriverExtensionsDX12_SetDepthBounds
          (longlong param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
                    /* 0x3ca1640  567  agsDriverExtensionsDX12_SetDepthBounds */
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(longlong *)(param_1 + 0x1b8) == 0) {
      return 6;
    }
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x1c0);
      cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
      puVar4 = puVar2;
      puVar3 = (undefined8 *)puVar2[1];
      while (cVar1 == '\0') {
        if ((ulonglong)puVar3[4] < param_2) {
          puVar5 = (undefined8 *)puVar3[2];
          puVar3 = puVar4;
        }
        else {
          puVar5 = (undefined8 *)*puVar3;
        }
        puVar4 = puVar3;
        puVar3 = puVar5;
        cVar1 = *(char *)((longlong)puVar5 + 0x19);
      }
      if ((puVar4 == puVar2) || (param_2 < (ulonglong)puVar4[4])) {
        puVar4 = puVar2;
      }
      if (puVar4 == puVar2) {
        return 1;
      }
      (**(code **)(*(longlong *)puVar4[5] + 0x18))((longlong *)puVar4[5],param_3,param_4);
      return 0;
    }
  }
  return 2;
}



// FUNCTION 143ca16f0 agsDriverExtensionsDX12_SetMarker body=62 status=ok
// SIG undefined agsDriverExtensionsDX12_SetMarker(void)

undefined4 agsDriverExtensionsDX12_SetMarker(longlong param_1,longlong param_2,longlong param_3)

{
                    /* 0x3ca16f0  568  agsDriverExtensionsDX12_SetMarker */
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    if (*(longlong **)(param_1 + 0x1b8) == (longlong *)0x0) {
      return 6;
    }
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x30))();
    return 0;
  }
  return 2;
}



// FUNCTION 143ca1730 FUN_143ca1730 body=215 status=ok
// SIG undefined FUN_143ca1730(void)

void FUN_143ca1730(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = param_3 - param_1 >> 2;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar2 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    lVar1 = lVar2 * 4 + param_1;
    FUN_143ca1af0(param_1,lVar1,lVar2 * 8 + param_1);
    FUN_143ca1af0(param_2 + lVar2 * -4,param_2,lVar2 * 4 + param_2,param_4);
    lVar3 = param_3 + lVar2 * -4;
    FUN_143ca1af0(param_3 + lVar2 * -8,lVar3,param_3,param_4);
    FUN_143ca1af0(lVar1,param_2,lVar3,param_4);
    return;
  }
  FUN_143ca1af0();
  return;
}



// FUNCTION 143ca1810 FUN_143ca1810 body=406 status=ok
// SIG undefined FUN_143ca1810(void)

void FUN_143ca1810(int *param_1,int *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  
  if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
    piVar5 = param_1;
    do {
      lVar3 = *param_3;
      piVar1 = piVar5 + 1;
      iVar2 = *piVar1;
      lVar6 = (longlong)iVar2 * 0x624;
      if ((ulonglong)
          ((longlong)*(int *)(lVar3 + 0x10c + lVar6) << 0x20 |
          (longlong)*(int *)(lVar3 + 0x108 + lVar6)) <
          (ulonglong)
          ((longlong)*(int *)((longlong)*param_1 * 0x624 + 0x10c + lVar3) << 0x20 |
          (longlong)*(int *)((longlong)*param_1 * 0x624 + 0x108 + lVar3))) {
        memmove(param_1 + 1,param_1,(4 - (longlong)param_1) + (longlong)piVar5);
        *param_1 = iVar2;
      }
      else {
        lVar9 = (longlong)*piVar5;
        piVar4 = piVar5;
        piVar8 = piVar1;
        piVar7 = piVar1;
        if ((ulonglong)
            ((longlong)*(int *)(lVar3 + 0x10c + lVar6) << 0x20 |
            (longlong)*(int *)(lVar3 + 0x108 + lVar6)) <
            (ulonglong)
            ((longlong)*(int *)(lVar9 * 0x624 + 0x10c + lVar3) << 0x20 |
            (longlong)*(int *)(lVar9 * 0x624 + 0x108 + lVar3))) {
          do {
            piVar8 = piVar4;
            *piVar7 = (int)lVar9;
            lVar3 = *param_3;
            lVar9 = (longlong)piVar8[-1];
            piVar4 = piVar8 + -1;
            piVar7 = piVar8;
          } while ((ulonglong)
                   ((longlong)*(int *)(lVar3 + lVar6 + 0x10c) << 0x20 |
                   (longlong)*(int *)(lVar3 + lVar6 + 0x108)) <
                   (ulonglong)
                   ((longlong)*(int *)(lVar9 * 0x624 + 0x10c + lVar3) << 0x20 |
                   (longlong)*(int *)(lVar9 * 0x624 + 0x108 + lVar3)));
        }
        *piVar8 = iVar2;
      }
      piVar4 = piVar5 + 2;
      piVar5 = piVar1;
    } while (piVar4 != param_2);
  }
  return;
}



// FUNCTION 143ca19b0 FUN_143ca19b0 body=315 status=ok
// SIG undefined FUN_143ca19b0(void)

void FUN_143ca19b0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res8 [2];
  
  uVar5 = param_2 - param_1 >> 2;
  if ((1 < (longlong)uVar5) &&
     (lVar2 = (longlong)(uVar5 - (param_2 - param_1 >> 0x3f)) >> 1, 0 < lVar2)) {
    lVar3 = (longlong)(uVar5 - 1) / 2;
    do {
      local_res8[0] = *(undefined4 *)(param_1 + -4 + lVar2 * 4);
      lVar2 = lVar2 + -1;
      lVar8 = lVar2;
      while (lVar8 < lVar3) {
        lVar1 = lVar8 * 2 + 2;
        lVar6 = (longlong)*(int *)(param_1 + 8 + lVar8 * 8) * 0x624 + *param_3;
        lVar4 = (longlong)*(int *)(param_1 + -4 + lVar1 * 4) * 0x624 + *param_3;
        lVar7 = lVar8 * 2 + 1;
        if ((ulonglong)
            ((longlong)*(int *)(lVar4 + 0x10c) << 0x20 | (longlong)*(int *)(lVar4 + 0x108)) <=
            (ulonglong)
            ((longlong)*(int *)(lVar6 + 0x10c) << 0x20 | (longlong)*(int *)(lVar6 + 0x108))) {
          lVar7 = lVar1;
        }
        *(undefined4 *)(param_1 + lVar8 * 4) = *(undefined4 *)(param_1 + lVar7 * 4);
        lVar8 = lVar7;
      }
      if ((lVar8 == lVar3) && ((uVar5 & 1) == 0)) {
        *(undefined4 *)(param_1 + lVar8 * 4) = *(undefined4 *)(param_1 + -4 + uVar5 * 4);
        lVar8 = uVar5 - 1;
      }
      FUN_143ca20d0(param_1,lVar8,lVar2,local_res8,param_3);
    } while (0 < lVar2);
  }
  return;
}



// FUNCTION 143ca1af0 FUN_143ca1af0 body=296 status=ok
// SIG undefined FUN_143ca1af0(void)

void FUN_143ca1af0(int *param_1,int *param_2,int *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *param_4;
  iVar1 = *param_2;
  lVar3 = (longlong)iVar1 * 0x624;
  lVar4 = (longlong)*param_1 * 0x624;
  if ((ulonglong)
      ((longlong)*(int *)(lVar3 + 0x10c + lVar2) << 0x20 | (longlong)*(int *)(lVar3 + 0x108 + lVar2)
      ) < (ulonglong)
          ((longlong)*(int *)(lVar4 + 0x10c + lVar2) << 0x20 |
          (longlong)*(int *)(lVar4 + 0x108 + lVar2))) {
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  iVar1 = *param_3;
  lVar2 = (longlong)*param_2 * 0x624 + *param_4;
  lVar3 = (longlong)iVar1 * 0x624 + *param_4;
  if ((ulonglong)((longlong)*(int *)(lVar3 + 0x10c) << 0x20 | (longlong)*(int *)(lVar3 + 0x108)) <
      (ulonglong)((longlong)*(int *)(lVar2 + 0x10c) << 0x20 | (longlong)*(int *)(lVar2 + 0x108))) {
    *param_3 = *param_2;
    *param_2 = iVar1;
    lVar2 = (longlong)*param_1 * 0x624 + *param_4;
    lVar3 = (longlong)iVar1 * 0x624 + *param_4;
    if ((ulonglong)((longlong)*(int *)(lVar3 + 0x10c) << 0x20 | (longlong)*(int *)(lVar3 + 0x108)) <
        (ulonglong)((longlong)*(int *)(lVar2 + 0x10c) << 0x20 | (longlong)*(int *)(lVar2 + 0x108)))
    {
      *param_2 = *param_1;
      *param_1 = iVar1;
    }
  }
  return;
}



// FUNCTION 143ca1c20 FUN_143ca1c20 body=914 status=ok
// SIG undefined FUN_143ca1c20(void)

ulonglong * FUN_143ca1c20(ulonglong *param_1,int *param_2,int *param_3,longlong *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  
  piVar3 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 2) -
                      ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  FUN_143ca1730(param_2,piVar3,param_3 + -1);
  piVar10 = piVar3 + 1;
  if (param_2 < piVar3) {
    do {
      piVar2 = piVar3 + -1;
      lVar7 = (longlong)piVar3[-1] * 0x624 + *param_4;
      lVar5 = (longlong)*piVar3 * 0x624 + *param_4;
      if (((ulonglong)
           ((longlong)*(int *)(lVar7 + 0x10c) << 0x20 | (longlong)*(int *)(lVar7 + 0x108)) <
           (ulonglong)
           ((longlong)*(int *)(lVar5 + 0x10c) << 0x20 | (longlong)*(int *)(lVar5 + 0x108))) ||
         ((ulonglong)((longlong)*(int *)(lVar5 + 0x10c) << 0x20 | (longlong)*(int *)(lVar5 + 0x108))
          < (ulonglong)
            ((longlong)*(int *)(lVar7 + 0x10c) << 0x20 | (longlong)*(int *)(lVar7 + 0x108)))) break;
      piVar3 = piVar2;
    } while (param_2 < piVar2);
  }
  piVar2 = piVar10;
  piVar4 = piVar3;
  if (piVar10 < param_3) {
    lVar5 = *param_4;
    lVar7 = (longlong)*piVar3 * 0x624;
    do {
      lVar8 = (longlong)*piVar10 * 0x624 + lVar5;
      piVar2 = piVar10;
      if (((ulonglong)
           ((longlong)*(int *)(lVar8 + 0x10c) << 0x20 | (longlong)*(int *)(lVar8 + 0x108)) <
           (ulonglong)
           ((longlong)*(int *)(lVar7 + 0x10c + lVar5) << 0x20 |
           (longlong)*(int *)(lVar7 + 0x108 + lVar5))) ||
         (lVar6 = (longlong)*piVar3 * 0x624,
         (ulonglong)
         ((longlong)*(int *)(lVar6 + 0x10c + lVar5) << 0x20 |
         (longlong)*(int *)(lVar6 + 0x108 + lVar5)) <
         (ulonglong)((longlong)*(int *)(lVar8 + 0x10c) << 0x20 | (longlong)*(int *)(lVar8 + 0x108)))
         ) break;
      piVar10 = piVar10 + 1;
      piVar2 = piVar10;
    } while (piVar10 < param_3);
  }
joined_r0x000143ca1db3:
  do {
    piVar9 = piVar3;
    if (param_3 <= piVar10) {
joined_r0x000143ca1e60:
      for (; param_2 < piVar3; piVar3 = piVar3 + -1) {
        piVar9 = piVar9 + -1;
        lVar7 = (longlong)*piVar4 * 0x624 + *param_4;
        lVar5 = (longlong)*piVar9 * 0x624 + *param_4;
        if ((ulonglong)
            ((longlong)*(int *)(lVar7 + 0x10c) << 0x20 | (longlong)*(int *)(lVar7 + 0x108)) <=
            (ulonglong)
            ((longlong)*(int *)(lVar5 + 0x10c) << 0x20 | (longlong)*(int *)(lVar5 + 0x108))) {
          if ((ulonglong)
              ((longlong)*(int *)(lVar7 + 0x10c) << 0x20 | (longlong)*(int *)(lVar7 + 0x108)) <
              (ulonglong)
              ((longlong)*(int *)(lVar5 + 0x10c) << 0x20 | (longlong)*(int *)(lVar5 + 0x108)))
          break;
          piVar4 = piVar4 + -1;
          if (piVar4 != piVar9) {
            iVar1 = *piVar4;
            *piVar4 = *piVar9;
            *piVar9 = iVar1;
          }
        }
      }
      if (piVar3 == param_2) {
        if (piVar10 == param_3) {
          *param_1 = (ulonglong)piVar4;
          param_1[1] = (ulonglong)piVar2;
          return param_1;
        }
        if (piVar2 != piVar10) {
          iVar1 = *piVar4;
          *piVar4 = *piVar2;
          *piVar2 = iVar1;
        }
        iVar1 = *piVar4;
        *piVar4 = *piVar10;
        *piVar10 = iVar1;
        piVar10 = piVar10 + 1;
        piVar2 = piVar2 + 1;
        piVar4 = piVar4 + 1;
      }
      else {
        piVar3 = piVar3 + -1;
        if (piVar10 == param_3) {
          piVar4 = piVar4 + -1;
          if (piVar3 != piVar4) {
            iVar1 = *piVar3;
            *piVar3 = *piVar4;
            *piVar4 = iVar1;
          }
          iVar1 = *piVar4;
          *piVar4 = piVar2[-1];
          piVar2[-1] = iVar1;
          piVar2 = piVar2 + -1;
        }
        else {
          iVar1 = *piVar10;
          *piVar10 = *piVar3;
          piVar10 = piVar10 + 1;
          *piVar3 = iVar1;
        }
      }
      goto joined_r0x000143ca1db3;
    }
    lVar5 = (longlong)*piVar4 * 0x624 + *param_4;
    lVar7 = (longlong)*piVar10 * 0x624 + *param_4;
    piVar11 = piVar2;
    if ((ulonglong)((longlong)*(int *)(lVar7 + 0x10c) << 0x20 | (longlong)*(int *)(lVar7 + 0x108))
        <= (ulonglong)
           ((longlong)*(int *)(lVar5 + 0x10c) << 0x20 | (longlong)*(int *)(lVar5 + 0x108))) {
      if ((ulonglong)((longlong)*(int *)(lVar7 + 0x10c) << 0x20 | (longlong)*(int *)(lVar7 + 0x108))
          < (ulonglong)
            ((longlong)*(int *)(lVar5 + 0x10c) << 0x20 | (longlong)*(int *)(lVar5 + 0x108)))
      goto joined_r0x000143ca1e60;
      piVar11 = piVar2 + 1;
      if (piVar2 != piVar10) {
        iVar1 = *piVar2;
        *piVar2 = *piVar10;
        *piVar10 = iVar1;
      }
    }
    piVar10 = piVar10 + 1;
    piVar2 = piVar11;
  } while( true );
}



// FUNCTION 143ca1fc0 FUN_143ca1fc0 body=259 status=ok
// SIG undefined FUN_143ca1fc0(void)

void FUN_143ca1fc0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = (longlong)(param_3 - 1) / 2;
  lVar6 = param_2;
  while (lVar6 < lVar2) {
    lVar1 = lVar6 * 2 + 2;
    lVar5 = (longlong)*(int *)(param_1 + 8 + lVar6 * 8) * 0x624 + *param_5;
    lVar3 = (longlong)*(int *)(param_1 + -4 + lVar1 * 4) * 0x624 + *param_5;
    lVar4 = lVar6 * 2 + 1;
    if ((ulonglong)((longlong)*(int *)(lVar3 + 0x10c) << 0x20 | (longlong)*(int *)(lVar3 + 0x108))
        <= (ulonglong)
           ((longlong)*(int *)(lVar5 + 0x10c) << 0x20 | (longlong)*(int *)(lVar5 + 0x108))) {
      lVar4 = lVar1;
    }
    *(undefined4 *)(param_1 + lVar6 * 4) = *(undefined4 *)(param_1 + lVar4 * 4);
    lVar6 = lVar4;
  }
  if ((lVar6 == lVar2) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + lVar6 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar6 = param_3 - 1;
  }
  FUN_143ca20d0(param_1,lVar6,param_2,param_4);
  return;
}



// FUNCTION 143ca20d0 FUN_143ca20d0 body=203 status=ok
// SIG undefined FUN_143ca20d0(void)

void FUN_143ca20d0(longlong param_1,longlong param_2,longlong param_3,int *param_4,longlong *param_5
                  )

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    lVar4 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + lVar4 * 4);
    lVar2 = (longlong)*param_4 * 0x624 + *param_5;
    lVar3 = (longlong)iVar1 * 0x624 + *param_5;
    if ((ulonglong)((longlong)*(int *)(lVar2 + 0x10c) << 0x20 | (longlong)*(int *)(lVar2 + 0x108))
        <= (ulonglong)
           ((longlong)*(int *)(lVar3 + 0x10c) << 0x20 | (longlong)*(int *)(lVar3 + 0x108))) break;
    *(int *)(param_1 + param_2 * 4) = iVar1;
    param_2 = lVar4;
  } while (param_3 < lVar4);
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}



// FUNCTION 143ca21a0 FUN_143ca21a0 body=146 status=ok
// SIG undefined FUN_143ca21a0(void)

void FUN_143ca21a0(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_res8 [2];
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  if (1 < lVar1) {
    puVar2 = (undefined4 *)(param_2 + -4);
    if (lVar1 < 2) goto LAB_143ca220a;
    do {
      local_res8[0] = *puVar2;
      *puVar2 = *param_1;
      FUN_143ca1fc0(param_1,0,(longlong)puVar2 - (longlong)param_1 >> 2,local_res8,param_3);
LAB_143ca220a:
      puVar2 = puVar2 + -1;
    } while (1 < (4 - (longlong)param_1) + (longlong)puVar2 >> 2);
  }
  return;
}



// FUNCTION 143ca2240 FUN_143ca2240 body=274 status=ok
// SIG undefined FUN_143ca2240(void)

void FUN_143ca2240(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong local_18;
  longlong local_10;
  
  lVar1 = param_2 - param_1;
  do {
    lVar1 = lVar1 >> 2;
    if (lVar1 < 0x21) {
LAB_143ca2305:
      if (1 < lVar1) {
        FUN_143ca1810(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar1) {
        FUN_143ca19b0(param_1,param_2,param_4);
        FUN_143ca21a0(param_1,param_2,param_4);
        return;
      }
      goto LAB_143ca2305;
    }
    FUN_143ca1c20(&local_18,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)(local_18 - param_1 & 0xfffffffffffffffcU) <
        (longlong)(param_2 - local_10 & 0xfffffffffffffffcU)) {
      FUN_143ca2240(param_1,local_18,param_3,param_4);
      param_1 = local_10;
    }
    else {
      FUN_143ca2240(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar1 = param_2 - param_1;
  } while( true );
}



// FUNCTION 143ca2360 FUN_143ca2360 body=1430 status=ok
// SIG undefined FUN_143ca2360(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_143ca2360(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *_Dst;
  undefined4 *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  undefined4 *_Dst_00;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  longlong lVar20;
  uint uVar21;
  undefined1 auStack_188 [32];
  int *local_168;
  int local_158 [4];
  uint local_148 [12];
  uint local_118 [52];
  ulonglong local_48;
  
  puVar18 = auStack_188;
  puVar17 = auStack_188;
  puVar15 = auStack_188;
  puVar16 = auStack_188;
  local_48 = DAT_1468387a8 ^ (ulonglong)local_158;
  lVar20 = (longlong)*(int *)(param_2 + 0x68) * 0x624 + *(longlong *)(param_1 + 0x3e0);
  if (*(code **)(param_1 + 0x40) == (code *)0x0) goto LAB_143ca28cd;
  local_168 = local_158 + 1;
  _Dst_00 = (undefined4 *)0x0;
  iVar14 = 0;
  local_158[0] = 0;
  local_158[2] = 0;
  local_158[1] = 0;
  iVar5 = (**(code **)(param_1 + 0x40))
                    (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar20 + 4),local_158,
                     local_158 + 2);
  puVar18 = auStack_188;
  if ((iVar5 == 0) && (puVar18 = auStack_188, local_158[0] != 0)) {
    if (local_158[1] == 7) {
      pcVar2 = *(code **)(param_1 + 0x78);
      iVar5 = 0;
      if (((pcVar2 == (code *)0x0) || (*(longlong *)(param_1 + 0x80) == 0)) ||
         (*(longlong *)(param_1 + 0x88) == 0)) {
        pcVar2 = *(code **)(param_1 + 0x58);
        puVar18 = auStack_188;
        if (((pcVar2 != (code *)0x0) && (puVar18 = auStack_188, *(longlong *)(param_1 + 0x60) != 0))
           && (puVar18 = auStack_188, *(longlong *)(param_1 + 0x68) != 0)) {
          _guard_xfg_dispatch_icall_nop(local_118,0,0xa4);
          iVar6 = (*pcVar2)(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar20 + 4),local_118);
          puVar18 = auStack_188;
          if ((iVar6 == 0) && (puVar18 = auStack_188, 0 < (int)local_118[0])) {
            uVar21 = (local_118[0] + 1) * 0xc;
            puVar19 = (undefined4 *)(longlong)(int)uVar21;
            puVar8 = puVar19 + 4;
            puVar9 = _Dst_00;
            if (puVar19 < puVar8) {
              puVar9 = puVar8;
            }
            if (puVar9 == (undefined4 *)0x0) {
              puVar10 = (uint *)0x0;
            }
            else {
              puVar9 = _Dst_00;
              if (puVar19 < puVar8) {
                puVar9 = puVar8;
              }
              puVar8 = puVar19 + 4;
              if (puVar9 < (undefined4 *)0x401) {
                puVar9 = _Dst_00;
                if (puVar19 < puVar8) {
                  puVar9 = puVar8;
                }
                puVar8 = (undefined4 *)((longlong)puVar9 + 0xf);
                if (puVar8 <= puVar9) {
                  puVar8 = (undefined4 *)0xffffffffffffff0;
                }
                lVar4 = -((ulonglong)puVar8 & 0xfffffffffffffff0);
                puVar10 = (uint *)0x0;
                puVar16 = auStack_188 + lVar4;
                if ((undefined4 *)((longlong)local_158 + lVar4) != (undefined4 *)0x0) {
                  *(undefined4 *)((longlong)local_158 + lVar4) = 0xcccc;
                  puVar10 = (uint *)((longlong)local_148 + lVar4);
                  puVar16 = auStack_188 + lVar4;
                }
              }
              else {
                puVar9 = _Dst_00;
                if (puVar19 < puVar8) {
                  puVar9 = puVar8;
                }
                puVar10 = malloc((size_t)puVar9);
                puVar16 = auStack_188;
                if (puVar10 != (uint *)0x0) {
                  *puVar10 = 0xdddd;
                  puVar10 = puVar10 + 4;
                  puVar16 = auStack_188;
                }
              }
            }
            *(undefined8 *)(puVar16 + -8) = 0x143ca26a5;
            _guard_xfg_dispatch_icall_nop(puVar10,0,(size_t)puVar19);
            *puVar10 = uVar21;
            puVar10[2] = local_118[0];
            uVar1 = *(undefined4 *)(lVar20 + 4);
            uVar3 = *(undefined8 *)(param_1 + 8);
            pcVar2 = *(code **)(param_1 + 0x60);
            *(undefined8 *)(puVar16 + -8) = 0x143ca26bf;
            iVar6 = (*pcVar2)(uVar3,uVar1,puVar10);
            if ((iVar6 == 0) && (0 < (int)local_118[0])) {
              uVar13 = (ulonglong)local_118[0];
              puVar8 = _Dst_00;
              puVar12 = puVar10;
              do {
                puVar11 = puVar12 + 3;
                if ((puVar12[5] != 0) && ((int)puVar8 < (int)*puVar11)) {
                  puVar8 = (undefined4 *)(ulonglong)*puVar11;
                }
                iVar5 = (int)puVar8;
                uVar13 = uVar13 - 1;
                puVar12 = puVar11;
              } while (uVar13 != 0);
            }
            uVar1 = *(undefined4 *)(lVar20 + 4);
            uVar3 = *(undefined8 *)(param_1 + 8);
            pcVar2 = *(code **)(param_1 + 0x68);
            *(undefined8 *)(puVar16 + -8) = 0x143ca26f3;
            iVar6 = (*pcVar2)(uVar3,uVar1,puVar10);
            if ((iVar6 == 0) && (0 < (int)local_118[0])) {
              uVar13 = (ulonglong)local_118[0];
              puVar12 = puVar10;
              do {
                puVar12 = puVar12 + 3;
                if ((int)_Dst_00 < (int)*puVar12) {
                  _Dst_00 = (undefined4 *)(ulonglong)*puVar12;
                }
                iVar14 = (int)_Dst_00;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar10 = puVar10 + -4;
            *(int *)(param_2 + 0x20) = iVar5 / 100;
            *(int *)(param_2 + 0x24) = iVar14 / 100;
            goto LAB_143ca289b;
          }
        }
      }
      else {
        _guard_xfg_dispatch_icall_nop(local_118,0,0xd0);
        iVar6 = (*pcVar2)(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar20 + 4),local_118);
        puVar18 = auStack_188;
        if ((iVar6 == 0) && (puVar18 = auStack_188, 0 < (int)local_118[0])) {
          iVar6 = local_118[0] * 0x10 + 0xc;
          puVar19 = (undefined4 *)(longlong)iVar6;
          puVar8 = puVar19 + 4;
          puVar9 = _Dst_00;
          if (puVar19 < puVar8) {
            puVar9 = puVar8;
          }
          if (puVar9 == (undefined4 *)0x0) {
            _Dst = (int *)0x0;
          }
          else {
            puVar9 = _Dst_00;
            if (puVar19 < puVar8) {
              puVar9 = puVar8;
            }
            puVar8 = puVar19 + 4;
            if (puVar9 < (undefined4 *)0x401) {
              puVar9 = _Dst_00;
              if (puVar19 < puVar8) {
                puVar9 = puVar8;
              }
              puVar8 = (undefined4 *)((longlong)puVar9 + 0xf);
              if (puVar8 <= puVar9) {
                puVar8 = (undefined4 *)0xffffffffffffff0;
              }
              lVar4 = -((ulonglong)puVar8 & 0xfffffffffffffff0);
              _Dst = (int *)0x0;
              puVar15 = auStack_188 + lVar4;
              if ((undefined4 *)((longlong)local_158 + lVar4) != (undefined4 *)0x0) {
                *(undefined4 *)((longlong)local_158 + lVar4) = 0xcccc;
                _Dst = (int *)((longlong)local_148 + lVar4);
                puVar15 = auStack_188 + lVar4;
              }
            }
            else {
              puVar9 = _Dst_00;
              if (puVar19 < puVar8) {
                puVar9 = puVar8;
              }
              _Dst = malloc((size_t)puVar9);
              puVar15 = auStack_188;
              if (_Dst != (int *)0x0) {
                *_Dst = 0xdddd;
                _Dst = _Dst + 4;
                puVar15 = auStack_188;
              }
            }
          }
          *(undefined8 *)(puVar15 + -8) = 0x143ca24f5;
          _guard_xfg_dispatch_icall_nop(_Dst,0,(size_t)puVar19);
          *_Dst = iVar6;
          _Dst[2] = local_118[0];
          uVar1 = *(undefined4 *)(lVar20 + 4);
          uVar3 = *(undefined8 *)(param_1 + 8);
          pcVar2 = *(code **)(param_1 + 0x80);
          *(undefined8 *)(puVar15 + -8) = 0x143ca2512;
          iVar7 = (*pcVar2)(uVar3,uVar1,_Dst);
          iVar6 = iVar14;
          if ((iVar7 == 0) && (iVar6 = iVar5, 0 < (int)local_118[0])) {
            puVar10 = (uint *)(_Dst + 3);
            uVar13 = (ulonglong)local_118[0];
            puVar8 = _Dst_00;
            do {
              if ((puVar10[2] != 0) && ((int)puVar8 < (int)*puVar10)) {
                puVar8 = (undefined4 *)(ulonglong)*puVar10;
              }
              iVar6 = (int)puVar8;
              puVar10 = puVar10 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          uVar1 = *(undefined4 *)(lVar20 + 4);
          uVar3 = *(undefined8 *)(param_1 + 8);
          pcVar2 = *(code **)(param_1 + 0x88);
          *(undefined8 *)(puVar15 + -8) = 0x143ca2548;
          iVar5 = (*pcVar2)(uVar3,uVar1,_Dst);
          if ((iVar5 == 0) && (0 < (int)local_118[0])) {
            puVar10 = (uint *)(_Dst + 3);
            uVar13 = (ulonglong)local_118[0];
            do {
              if ((puVar10[2] != 0) && ((int)_Dst_00 < (int)*puVar10)) {
                _Dst_00 = (undefined4 *)(ulonglong)*puVar10;
              }
              iVar14 = (int)_Dst_00;
              puVar10 = puVar10 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar10 = (uint *)(_Dst + -4);
          *(int *)(param_2 + 0x20) = iVar6 / 100;
          *(int *)(param_2 + 0x24) = iVar14 / 100;
          puVar16 = puVar15;
LAB_143ca289b:
          puVar18 = puVar16;
          if (*puVar10 == 0xdddd) {
            *(undefined8 *)(puVar16 + -8) = 0x143ca28a9;
            free(puVar10);
          }
        }
      }
    }
    else {
      puVar18 = auStack_188;
      if (((local_158[1] - 5U < 2) &&
          (puVar18 = auStack_188, *(code **)(param_1 + 0x48) != (code *)0x0)) &&
         (puVar18 = auStack_188, *(longlong *)(param_1 + 0x50) != 0)) {
        local_148[0] = 0;
        local_148[1] = 0;
        local_148[2] = 0;
        local_148[3] = 0;
        local_148[4] = 0;
        local_148[5] = 0;
        local_148[6] = 0;
        local_148[7] = 0;
        local_148[8] = 0;
        local_148[9] = 0;
        local_148[10] = 0;
        iVar5 = (**(code **)(param_1 + 0x48))
                          (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar20 + 4),local_148);
        puVar18 = auStack_188;
        if ((iVar5 == 0) && (puVar18 = auStack_188, 1 < (int)local_148[2])) {
          puVar19 = (undefined4 *)(longlong)(int)(local_148[2] * 8 + 0x14);
          puVar8 = puVar19 + 4;
          puVar9 = _Dst_00;
          if (puVar19 < puVar8) {
            puVar9 = puVar8;
          }
          puVar16 = auStack_188;
          if (puVar9 != (undefined4 *)0x0) {
            puVar9 = _Dst_00;
            if (puVar19 < puVar8) {
              puVar9 = puVar8;
            }
            puVar8 = puVar19 + 4;
            if (puVar9 < (undefined4 *)0x401) {
              if (puVar19 < puVar8) {
                _Dst_00 = puVar8;
              }
              puVar8 = (undefined4 *)((longlong)_Dst_00 + 0xf);
              if (puVar8 <= _Dst_00) {
                puVar8 = (undefined4 *)0xffffffffffffff0;
              }
              lVar4 = -((ulonglong)puVar8 & 0xfffffffffffffff0);
              puVar17 = auStack_188 + lVar4;
              puVar8 = (undefined4 *)((longlong)local_158 + lVar4);
              _Dst_00 = (undefined4 *)0x0;
              puVar16 = auStack_188 + lVar4;
              if (puVar8 != (undefined4 *)0x0) {
                *puVar8 = 0xcccc;
LAB_143ca283b:
                _Dst_00 = puVar8 + 4;
                puVar16 = puVar17;
              }
            }
            else {
              if (puVar19 < puVar8) {
                _Dst_00 = puVar8;
              }
              puVar8 = malloc((size_t)_Dst_00);
              _Dst_00 = (undefined4 *)0x0;
              puVar16 = auStack_188;
              if (puVar8 != (undefined4 *)0x0) {
                *puVar8 = 0xdddd;
                goto LAB_143ca283b;
              }
            }
          }
          *(undefined8 *)(puVar16 + -8) = 0x143ca284c;
          _guard_xfg_dispatch_icall_nop(_Dst_00,0,(size_t)puVar19);
          *_Dst_00 = local_148[2];
          uVar1 = *(undefined4 *)(lVar20 + 4);
          uVar3 = *(undefined8 *)(param_1 + 8);
          pcVar2 = *(code **)(param_1 + 0x50);
          *(undefined8 *)(puVar16 + -8) = 0x143ca2865;
          iVar5 = (*pcVar2)(uVar3,uVar1,4,_Dst_00);
          if (iVar5 == 0) {
            *(int *)(param_2 + 0x20) = (int)_Dst_00[5] / 100;
            *(int *)(param_2 + 0x24) = (int)_Dst_00[6] / 100;
          }
          puVar10 = _Dst_00 + -4;
          goto LAB_143ca289b;
        }
      }
    }
  }
  *(float *)(param_2 + 0x2c) =
       (float)(*(int *)(param_2 + 0x20) * *(int *)(param_2 + 0x18) * 0x80) / 1e+06;
LAB_143ca28cd:
  *(undefined8 *)(puVar18 + -8) = 0x143ca28dc;
  return;
}



// FUNCTION 143ca2900 FUN_143ca2900 body=935 status=ok
// SIG undefined FUN_143ca2900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143ca2900(longlong param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  void *_Dst;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  int *piVar16;
  ulonglong uVar17;
  long lVar18;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  char local_50 [4];
  undefined1 local_4c;
  char local_40 [4];
  undefined1 local_3c;
  ulonglong local_30;
  
  puVar13 = auStack_78;
  local_30 = DAT_1468387a8 ^ (ulonglong)&local_58;
  piVar1 = (int *)(param_1 + 1000);
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 8),piVar1);
  uVar12 = 0;
  lVar18 = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  puVar14 = auStack_78;
  if ((*piVar1 < 1) ||
     (iVar2 = (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 8)), puVar14 = auStack_78,
     iVar2 != 0)) goto LAB_143ca2b27;
  _Dst = (void *)FUN_143c9d6d0((longlong)*piVar1 * 0x70);
  *(void **)(param_1 + 0x3d0) = _Dst;
  puVar14 = auStack_78;
  if ((*(longlong *)(param_1 + 0x3e0) == 0) || (puVar14 = auStack_78, _Dst == (void *)0x0))
  goto LAB_143ca2b27;
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)*piVar1 * 0x70);
  uVar9 = (longlong)*piVar1 * 4;
  uVar17 = uVar12;
  if (uVar9 < uVar9 + 0x10) {
    uVar17 = uVar9 + 0x10;
  }
  puVar14 = auStack_78;
  if (uVar17 == 0) goto LAB_143ca2b27;
  uVar17 = uVar12;
  if (uVar9 < uVar9 + 0x10) {
    uVar17 = uVar9 + 0x10;
  }
  uVar10 = uVar9 + 0x10;
  if (uVar17 < 0x401) {
    uVar17 = uVar12;
    if (uVar9 < uVar10) {
      uVar17 = uVar10;
    }
    uVar9 = uVar17 + 0xf;
    if (uVar9 <= uVar17) {
      uVar9 = 0xffffffffffffff0;
    }
    lVar15 = -(uVar9 & 0xfffffffffffffff0);
    puVar14 = auStack_78 + lVar15;
    puVar13 = auStack_78 + lVar15;
    pcVar6 = local_50 + lVar15 + -8;
    if (pcVar6 == (char *)0x0) goto LAB_143ca2b27;
    pcVar6[0] = -0x34;
    pcVar6[1] = -0x34;
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
LAB_143ca2a3a:
    piVar11 = (int *)(pcVar6 + 0x10);
    puVar14 = puVar13;
  }
  else {
    uVar17 = uVar12;
    if (uVar9 < uVar10) {
      uVar17 = uVar10;
    }
    pcVar6 = malloc(uVar17);
    piVar11 = (int *)0x0;
    puVar14 = auStack_78;
    if (pcVar6 != (char *)0x0) {
      pcVar6[0] = -0x23;
      pcVar6[1] = -0x23;
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      goto LAB_143ca2a3a;
    }
  }
  if (piVar11 != (int *)0x0) {
    uVar17 = uVar12;
    uVar9 = uVar12;
    piVar16 = piVar11;
    uVar10 = uVar12;
    lVar3 = lVar18;
    if (0 < *piVar1) {
      do {
        if (*(int *)(uVar9 + 0x31c + *(longlong *)(param_1 + 0x3e0)) != 0) {
          uVar10 = (ulonglong)((int)uVar10 + 1);
          *piVar16 = (int)uVar17;
          piVar16 = piVar16 + 1;
        }
        lVar3 = (long)uVar10;
        uVar7 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar7;
        uVar9 = uVar9 + 0x624;
      } while ((int)uVar7 < *piVar1);
    }
    local_58 = *(undefined8 *)(param_1 + 0x3e0);
    lVar15 = (longlong)lVar3;
    *(undefined8 *)(puVar14 + -8) = 0x143ca2aa9;
    FUN_143ca2240(piVar11,piVar11 + lVar15,lVar15,&local_58);
    uVar9 = 0xffffffff;
    uVar17 = uVar12;
    if (0 < lVar3) {
      do {
        lVar8 = (longlong)piVar11[uVar17] * 0x624 + *(longlong *)(param_1 + 0x3e0);
        uVar10 = (longlong)*(int *)(lVar8 + 0x10c) << 0x20 | (longlong)*(int *)(lVar8 + 0x108);
        if (uVar10 != uVar9) {
          *(int *)((longlong)*(int *)(param_1 + 0x3d8) * 0x70 + 0x68 +
                  *(longlong *)(param_1 + 0x3d0)) = piVar11[uVar17];
          *(int *)(param_1 + 0x3d8) = *(int *)(param_1 + 0x3d8) + 1;
          uVar9 = uVar10;
        }
        uVar17 = uVar17 + 1;
      } while ((longlong)uVar17 < lVar15);
    }
    if (piVar11[-4] == 0xdddd) {
      *(undefined8 *)(puVar14 + -8) = 0x143ca2b27;
      free(piVar11 + -4);
    }
  }
LAB_143ca2b27:
  uVar17 = uVar12;
  if (0 < *(int *)(param_1 + 0x3d8)) {
    do {
      lVar15 = *(longlong *)(param_1 + 0x3d0);
      lVar8 = (longlong)*(int *)(uVar12 + 0x68 + lVar15) * 0x624 + *(longlong *)(param_1 + 0x3e0);
      *(undefined4 *)(uVar12 + 8 + lVar15) = 0;
      pcVar6 = (char *)(lVar8 + 8);
      *(longlong *)(uVar12 + lVar15) = lVar8 + 0x118;
      lVar3 = lVar18;
      if (pcVar6 != (char *)0x0) {
        *(undefined8 *)(puVar14 + -8) = 0x143ca2b86;
        pcVar5 = strstr(pcVar6,"VEN_");
        if (pcVar5 != (char *)0x0) {
          *(undefined8 *)(puVar14 + -8) = 0x143ca2ba2;
          strncpy_s(local_50,8,pcVar5 + 4,4);
          local_4c = 0;
          *(undefined8 *)(puVar14 + -8) = 0x143ca2bb6;
          lVar3 = strtol(local_50,(char **)0x0,0x10);
        }
      }
      *(long *)(uVar12 + 0xc + lVar15) = lVar3;
      lVar4 = 0;
      lVar3 = lVar4;
      if (pcVar6 != (char *)0x0) {
        *(undefined8 *)(puVar14 + -8) = 0x143ca2bd6;
        pcVar5 = strstr(pcVar6,"DEV_");
        if (pcVar5 != (char *)0x0) {
          *(undefined8 *)(puVar14 + -8) = 0x143ca2bf2;
          strncpy_s(local_40,8,pcVar5 + 4,4);
          local_3c = 0;
          *(undefined8 *)(puVar14 + -8) = 0x143ca2c06;
          lVar3 = strtol(local_40,(char **)0x0,0x10);
        }
      }
      *(long *)(uVar12 + 0x10 + lVar15) = lVar3;
      if (pcVar6 != (char *)0x0) {
        *(undefined8 *)(puVar14 + -8) = 0x143ca2c26;
        pcVar6 = strstr(pcVar6,"REV_");
        if (pcVar6 != (char *)0x0) {
          *(undefined8 *)(puVar14 + -8) = 0x143ca2c42;
          strncpy_s((char *)&local_58,4,pcVar6 + 4,2);
          local_58._0_3_ = (uint3)(ushort)local_58;
          *(undefined8 *)(puVar14 + -8) = 0x143ca2c56;
          lVar4 = strtol((char *)&local_58,(char **)0x0,0x10);
        }
      }
      *(long *)(uVar12 + 0x14 + lVar15) = lVar4;
      uVar7 = (int)uVar17 + 1;
      *(undefined4 *)(uVar12 + 0x18 + lVar15) = 0;
      *(undefined8 *)(uVar12 + 0x20 + lVar15) = 0;
      *(undefined8 *)(uVar12 + 0x28 + lVar15) = 0;
      uVar12 = uVar12 + 0x70;
      uVar17 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(param_1 + 0x3d8));
  }
  *(undefined8 *)(puVar14 + -8) = 0x143ca2c8d;
  return;
}



// FUNCTION 143ca2cb0 FUN_143ca2cb0 body=279 status=ok
// SIG undefined FUN_143ca2cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143ca2cb0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_198 [32];
  int local_178;
  undefined4 local_174;
  undefined4 local_168;
  undefined8 local_138 [33];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if ((*(longlong *)(param_1 + 0x38) != 0) && (iVar4 = 0, 0 < *(int *)(param_1 + 0x3d8))) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x3d0) + lVar5;
      lVar3 = (longlong)*(int *)(lVar2 + 0x68) * 0x624 + *(longlong *)(param_1 + 0x3e0);
      iVar1 = (**(code **)(param_1 + 0x38))
                        (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar3 + 4),&local_178);
      if ((iVar1 == 0) && (*(int *)(lVar2 + 8) = local_178, 1 < local_178)) {
        *(undefined4 *)(lVar2 + 0x18) = local_174;
        *(undefined4 *)(lVar2 + 0x1c) = local_168;
      }
      FUN_143ca2360(param_1,lVar2);
      iVar1 = (**(code **)(param_1 + 0x30))
                        (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar3 + 4),local_138);
      if (iVar1 == 0) {
        *(undefined8 *)(lVar2 + 0x38) = local_138[0];
        *(undefined4 *)(lVar2 + 0x28) = local_30;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x70;
    } while (iVar4 < *(int *)(param_1 + 0x3d8));
  }
  return;
}



// FUNCTION 143ca2dd0 FUN_143ca2dd0 body=50 status=ok
// SIG undefined FUN_143ca2dd0(void)

longlong FUN_143ca2dd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_143ca2e10(), lVar1 != 0)) {
    return lVar1;
  }
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = FUN_143ca2e10(param_2);
  return lVar1;
}



// FUNCTION 143ca2e10 FUN_143ca2e10 body=115 status=ok
// SIG undefined FUN_143ca2e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143ca2e10(LPCSTR param_1)

{
  HMODULE hModule;
  undefined1 auStack_438 [32];
  CHAR local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_438;
  hModule = GetModuleHandleA(param_1);
  if (hModule != (HMODULE)0x0) {
    GetModuleFileNameA(hModule,local_418,0x400);
    LoadLibraryA(local_418);
    return;
  }
  return;
}



// FUNCTION 143ca2e90 FUN_143ca2e90 body=222 status=ok
// SIG undefined FUN_143ca2e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143ca2e90(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  char *_Dst;
  char *_Src;
  undefined1 auStack_438 [32];
  char local_418 [512];
  char local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_438;
  pcVar1 = *(code **)(param_1 + 0x98);
  if (pcVar1 == (code *)0x0) {
    pcVar1 = *(code **)(param_1 + 0x90);
    if (pcVar1 == (code *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(local_418,0,0x300);
    uVar2 = (*pcVar1)(*(undefined8 *)(param_1 + 8),local_418);
    if (1 < uVar2) {
      return;
    }
    _Dst = (char *)(param_1 + 0x1d0);
    _Src = local_418;
  }
  else {
    _guard_xfg_dispatch_icall_nop(local_418,0,0x400);
    uVar2 = (*pcVar1)(*(undefined8 *)(param_1 + 8),local_418);
    if (1 < uVar2) {
      return;
    }
    strcpy_s((char *)(param_1 + 0x1d0),0x100,local_418);
    _Dst = (char *)(param_1 + 0x2d0);
    _Src = local_218;
  }
  strcpy_s(_Dst,0x100,_Src);
  return;
}



// FUNCTION 143ca2f70 FUN_143ca2f70 body=53 status=ok
// SIG undefined FUN_143ca2f70(void)

HMODULE FUN_143ca2f70(LPCSTR param_1,LPCSTR param_2)

{
  HMODULE pHVar1;
  
  if ((param_1 != (LPCSTR)0x0) && (pHVar1 = LoadLibraryA(param_1), pHVar1 != (HMODULE)0x0)) {
    return pHVar1;
  }
  if (param_2 == (LPCSTR)0x0) {
    return (HMODULE)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca2f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(param_2);
  return pHVar1;
}



// FUNCTION 143ca2fb0 agsCheckDriverVersion body=178 status=ok
// SIG undefined agsCheckDriverVersion(void)

undefined1 agsCheckDriverVersion(char *param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  int local_res8 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
                    /* 0x3ca2fb0  537  agsCheckDriverVersion */
  if (param_1 != (char *)0x0) {
    local_res8[0] = 0;
    local_res18[0] = 0;
    local_res20[0] = 0;
    iVar2 = sscanf_s(param_1,"%d.%d.%d",local_res8,local_res18,local_res20);
    if (iVar2 == 2) {
      uVar1 = 2;
      if ((param_2 & 0xfffff000) < (local_res8[0] << 10 | local_res18[0]) << 0xc) {
        uVar1 = 0;
      }
      return uVar1;
    }
    if ((((2 < iVar2) && (0 < local_res8[0])) && (-1 < (int)local_res18[0])) &&
       (-1 < (int)local_res20[0])) {
      return ((local_res8[0] << 10 | local_res18[0]) << 0xc | local_res20[0]) < param_2;
    }
  }
  return 2;
}



// FUNCTION 143ca3070 sscanf_s body=83 status=ok
// SIG int sscanf_s(char * _Src, char * _Format, ...)

int __cdecl sscanf_s(char *_Src,char *_Format,...)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (ulonglong *)__local_stdio_scanf_options();
  iVar2 = __stdio_common_vsscanf(*puVar1 | 1,_Src,0xffffffffffffffff,_Format,0,&local_res18);
  return iVar2;
}



// FUNCTION 143ca30d0 FUN_143ca30d0 body=1178 status=ok
// SIG undefined FUN_143ca30d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_143ca30d0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_188 [32];
  longlong *local_168;
  longlong *local_160;
  int *local_158;
  longlong local_150;
  int *local_148;
  longlong local_140;
  int *local_138;
  longlong local_130;
  int *local_128;
  longlong local_120;
  undefined4 local_118;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8 [6];
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_98 [16];
  int local_88;
  int local_84;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  iVar9 = *(int *)(param_2 + 0x68);
  if (iVar9 < 0) {
    return;
  }
  if (*(int *)(param_1 + 1000) <= iVar9) {
    return;
  }
  uVar10 = 0;
  local_160 = &local_c8;
  local_158 = (int *)CONCAT44(local_158._4_4_,1);
  lVar14 = (longlong)iVar9 * 0x624 + *(longlong *)(param_1 + 0x3e0);
  local_168 = (longlong *)&local_104;
  iVar9 = 0;
  local_100 = 0;
  local_104 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_a0 = lVar14;
  uVar3 = (**(code **)(param_1 + 0xa0))
                    (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar14 + 4),&local_100);
  if (((1 < uVar3) ||
      (_guard_xfg_dispatch_icall_nop(local_98,0,0x50), lVar11 = local_d0, local_104 < 2)) ||
     (uVar12 = 0xffffffff, local_100 < 1)) goto LAB_143ca3468;
  puVar7 = (uint *)(local_d0 + 0x40);
  uVar5 = uVar10;
  uVar8 = uVar10;
  do {
    if ((int)uVar8 < (int)*puVar7) {
      uVar8 = (ulonglong)*puVar7;
      uVar12 = uVar5;
    }
    uVar3 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar3;
    puVar7 = puVar7 + 0x14;
  } while ((int)uVar3 < local_100);
  if ((((int)uVar8 < 2) || (iVar13 = (int)uVar12, iVar13 < 0)) || (local_100 <= iVar13))
  goto LAB_143ca3468;
  local_fc = 0;
  local_168 = (longlong *)&local_fc;
  iVar4 = (**(code **)(param_1 + 0xa8))
                    (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar14 + 4),local_104,local_c8);
  if ((iVar4 != 0) || (local_fc < 0)) goto LAB_143ca3468;
  local_120 = (longlong)&local_a8;
  local_118 = 2;
  local_128 = local_f8 + 1;
  local_130 = (longlong)&local_b0;
  local_138 = local_f8 + 2;
  local_140 = (longlong)&local_b8;
  local_148 = local_f8 + 3;
  local_150 = (longlong)&local_c0;
  local_158 = local_f8 + 4;
  local_160 = &local_d8;
  local_168 = (longlong *)&local_108;
  local_108 = 0;
  local_d8 = 0;
  local_f8[4] = 0;
  local_c0 = 0;
  local_f8[3] = 0;
  local_b8 = 0;
  local_f8[2] = 0;
  local_b0 = 0;
  local_f8[1] = 0;
  local_a8 = 0;
  iVar4 = (**(code **)(param_1 + 0xb0))
                    (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar14 + 4),local_fc,local_98);
  if (iVar4 == 0) {
    if (1 < local_108) {
      *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(lVar11 + 0x20 + (longlong)iVar13 * 0x50);
      *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(lVar11 + 0x24 + (longlong)iVar13 * 0x50);
    }
    *(undefined4 *)(param_2 + 0x50) = 1;
    *(int *)(param_2 + 0x58) = local_88;
    local_f8[5] = local_88 + -1;
    *(int *)(param_2 + 0x54) = local_84;
    if (local_84 < 3) {
LAB_143ca3320:
      iVar13 = 0;
    }
    else if (local_84 < 5) {
      iVar13 = 1;
    }
    else {
      iVar13 = 2;
      if (6 < local_84) goto LAB_143ca3320;
    }
    uVar12 = uVar10;
    uVar5 = uVar10;
    iVar4 = local_108;
    if (0 < local_108) {
      do {
        lVar14 = local_d8 + uVar5;
        if (0 < *(int *)(param_2 + 0x40)) {
          piVar6 = (int *)(*(longlong *)(param_2 + 0x48) + 0x1c8);
          uVar8 = uVar10;
          do {
            if (*piVar6 == *(int *)(lVar14 + 8)) {
              lVar11 = (longlong)(int)uVar8 * 0x1d0 + *(longlong *)(param_2 + 0x48);
              if (lVar11 != 0) {
                *(uint *)(lVar11 + 0x120) = *(uint *)(lVar11 + 0x120) | 0x20;
                iVar4 = *(int *)(lVar14 + 0x24);
                *(int *)(lVar11 + 0x154) = iVar4;
                iVar1 = *(int *)(lVar14 + 0x28);
                *(int *)(lVar11 + 0x158) = iVar1;
                if ((iVar13 == iVar4) && (local_f8[5] == iVar1)) {
                  *(uint *)(lVar11 + 0x120) = *(uint *)(lVar11 + 0x120) | 0x40;
                }
                local_168 = &local_e0;
                local_f8[0] = 0;
                local_e0 = 0;
                iVar4 = (**(code **)(param_1 + 0xb8))
                                  (*(undefined8 *)(param_1 + 8),*(undefined4 *)(local_a0 + 4),
                                   *(undefined4 *)(lVar14 + 8),local_f8);
                if ((((iVar4 == 0) && (0 < local_f8[0])) && (1 < *(int *)(local_e0 + 0x2c) + 1U)) &&
                   (*(int *)(local_e0 + 0x2c) != 0xb4)) {
                  *(uint *)(lVar11 + 0x120) = *(uint *)(lVar11 + 0x120) | 0x80;
                }
                FUN_143c9d6f0(&local_e0);
                iVar4 = local_108;
              }
              break;
            }
            uVar3 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar3;
            piVar6 = piVar6 + 0x74;
          } while ((int)uVar3 < *(int *)(param_2 + 0x40));
        }
        uVar3 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar3;
        uVar5 = uVar5 + 0x70;
      } while ((int)uVar3 < iVar4);
    }
  }
  FUN_143c9d6f0(&local_d8);
  FUN_143c9d6f0(&local_c0);
  FUN_143c9d6f0(&local_b8);
  FUN_143c9d6f0(&local_b0);
  FUN_143c9d6f0(&local_a8);
LAB_143ca3468:
  FUN_143c9d6f0(&local_d0);
  FUN_143c9d6f0(&local_c8);
  if (*(int *)(param_2 + 0x50) != 0) {
    uVar12 = uVar10;
    uVar5 = uVar10;
    if (0 < *(int *)(param_2 + 0x40)) {
      do {
        lVar14 = *(longlong *)(param_2 + 0x48) + uVar5;
        if ((*(uint *)(lVar14 + 0x120) & 0x20) != 0) {
          if ((*(uint *)(lVar14 + 0x120) & 0x80) == 0) {
            *(int *)(lVar14 + 0x138) = *(int *)(param_2 + 0x5c) / *(int *)(param_2 + 0x54);
            iVar9 = *(int *)(param_2 + 0x60);
          }
          else {
            *(int *)(lVar14 + 0x138) = *(int *)(param_2 + 0x60) / *(int *)(param_2 + 0x54);
            iVar9 = *(int *)(param_2 + 0x5c);
            uVar10 = (ulonglong)((int)uVar10 + 1);
          }
          *(int *)(lVar14 + 0x13c) = iVar9 / *(int *)(param_2 + 0x58);
          *(int *)(lVar14 + 0x130) = *(int *)(lVar14 + 0x154) * *(int *)(lVar14 + 0x138);
          *(int *)(lVar14 + 0x134) = *(int *)(lVar14 + 0x158) * *(int *)(lVar14 + 0x13c);
          *(undefined8 *)(lVar14 + 0x140) = *(undefined8 *)(lVar14 + 0x130);
          *(undefined8 *)(lVar14 + 0x148) = *(undefined8 *)(lVar14 + 0x138);
        }
        iVar9 = (int)uVar10;
        uVar3 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar3;
        uVar5 = uVar5 + 0x1d0;
      } while ((int)uVar3 < *(int *)(param_2 + 0x40));
    }
    if (iVar9 == *(int *)(param_2 + 0x54)) {
      uVar2 = *(undefined4 *)(param_2 + 0x5c);
      *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_2 + 0x60);
      *(undefined4 *)(param_2 + 0x60) = uVar2;
    }
  }
  return;
}



// FUNCTION 143ca356a DelayLoad_GFSDK_Aftermath_DX11_Initialize body=12 status=ok
// SIG undefined DelayLoad_GFSDK_Aftermath_DX11_Initialize(void)

void DelayLoad_GFSDK_Aftermath_DX11_Initialize(void)

{
  FUN_143ca357c();
  return;
}



// FUNCTION 143ca3576 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ca3576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GFSDK_Aftermath_DX11_Initialize();
  return;
}



// FUNCTION 143ca357c FUN_143ca357c body=121 status=ok
// SIG undefined FUN_143ca357c(void)

void FUN_143ca357c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de188);
                    /* WARNING: Could not recover jumptable at 0x000143ca35f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143ca35f5 DelayLoad_GFSDK_Aftermath_DX11_CreateContextHandle body=12 status=ok
// SIG undefined DelayLoad_GFSDK_Aftermath_DX11_CreateContextHandle(void)

void DelayLoad_GFSDK_Aftermath_DX11_CreateContextHandle(void)

{
  FUN_143ca357c();
  return;
}



// FUNCTION 143ca3601 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ca3601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GFSDK_Aftermath_DX11_CreateContextHandle();
  return;
}



// FUNCTION 143ca3607 DelayLoad_GFSDK_Aftermath_ReleaseContextHandle body=12 status=ok
// SIG undefined DelayLoad_GFSDK_Aftermath_ReleaseContextHandle(void)

void DelayLoad_GFSDK_Aftermath_ReleaseContextHandle(void)

{
  FUN_143ca357c();
  return;
}



// FUNCTION 143ca3613 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ca3613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GFSDK_Aftermath_ReleaseContextHandle();
  return;
}



// FUNCTION 143ca3619 DelayLoad_GFSDK_Aftermath_SetEventMarker body=12 status=ok
// SIG undefined DelayLoad_GFSDK_Aftermath_SetEventMarker(void)

void DelayLoad_GFSDK_Aftermath_SetEventMarker(void)

{
  FUN_143ca357c();
  return;
}



// FUNCTION 143ca3625 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ca3625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GFSDK_Aftermath_SetEventMarker();
  return;
}



// FUNCTION 143ca362b DelayLoad_GFSDK_Aftermath_GetData body=12 status=ok
// SIG undefined DelayLoad_GFSDK_Aftermath_GetData(void)

void DelayLoad_GFSDK_Aftermath_GetData(void)

{
  FUN_143ca357c();
  return;
}



// FUNCTION 143ca3637 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ca3637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GFSDK_Aftermath_GetData();
  return;
}



// FUNCTION 143ca363d DelayLoad_GFSDK_Aftermath_GetDeviceStatus body=12 status=ok
// SIG undefined DelayLoad_GFSDK_Aftermath_GetDeviceStatus(void)

void DelayLoad_GFSDK_Aftermath_GetDeviceStatus(void)

{
  FUN_143ca357c();
  return;
}



// FUNCTION 143ca3649 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ca3649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GFSDK_Aftermath_GetDeviceStatus();
  return;
}



// FUNCTION 143ca364f DelayLoad_Ordinal_101 body=12 status=ok
// SIG undefined DelayLoad_Ordinal_101(void)

void DelayLoad_Ordinal_101(void)

{
  FUN_143ca3661();
  return;
}



// FUNCTION 143ca365b _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ca365b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_101();
  return;
}



// FUNCTION 143ca3661 FUN_143ca3661 body=121 status=ok
// SIG undefined FUN_143ca3661(void)

void FUN_143ca3661(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de1a8);
                    /* WARNING: Could not recover jumptable at 0x000143ca36d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143ca36da DelayLoad_D3D12SerializeRootSignature body=12 status=ok
// SIG undefined DelayLoad_D3D12SerializeRootSignature(void)

void DelayLoad_D3D12SerializeRootSignature(void)

{
  FUN_143ca3661();
  return;
}



// FUNCTION 143ca36e6 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ca36e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3D12SerializeRootSignature();
  return;
}



// FUNCTION 143ca36ec DelayLoad_D3D12SerializeVersionedRootSignature body=12 status=ok
// SIG undefined DelayLoad_D3D12SerializeVersionedRootSignature(void)

void DelayLoad_D3D12SerializeVersionedRootSignature(void)

{
  FUN_143ca3661();
  return;
}



// FUNCTION 143ca36f8 D3D12SerializeVersionedRootSignature body=6 status=ok
// SIG undefined D3D12SerializeVersionedRootSignature(void)

void D3D12SerializeVersionedRootSignature(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ca36f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3D12SerializeVersionedRootSignature();
  return;
}



// FUNCTION 143ca3700 FUN_143ca3700 body=52 status=ok
// SIG undefined FUN_143ca3700(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143ca3700(void)

{
  ERR_put_error(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xe0c);
  return 0;
}



// FUNCTION 143ca3740 FUN_143ca3740 body=52 status=ok
// SIG undefined FUN_143ca3740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143ca3740(void)

{
  ERR_put_error(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xe0c);
  return 0;
}



// FUNCTION 143ca3780 OBJ_bsearch_ssl_cipher_id body=41 status=ok
// SIG undefined OBJ_bsearch_ssl_cipher_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OBJ_bsearch_ssl_cipher_id(void)

{
  OBJ_bsearch_();
  return;
}



// FUNCTION 143ca37b0 SSL_CTX_callback_ctrl body=49 status=ok
// SIG undefined SSL_CTX_callback_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_callback_ctrl(longlong *param_1,int param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0xf) {
                    /* WARNING: Could not recover jumptable at 0x000143ca37c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0xd8))();
    return uVar1;
  }
  param_1[0x28] = param_3;
  return 1;
}



// FUNCTION 143ca37f0 SSL_CTX_check_private_key body=116 status=ok
// SIG undefined SSL_CTX_check_private_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_check_private_key(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)**(longlong **)(param_1 + 0x130);
    if (lVar1 != 0) {
      if (((longlong *)**(longlong **)(param_1 + 0x130))[1] != 0) {
        uVar2 = X509_check_private_key(lVar1);
        return uVar2;
      }
      uVar3 = 0x629;
      uVar2 = 0xbe;
      goto LAB_143ca3847;
    }
  }
  uVar3 = 0x625;
  uVar2 = 0xb1;
LAB_143ca3847:
  ERR_put_error(0x14,0xa8,uVar2,"ssl\\ssl_lib.c",uVar3);
  return 0;
}



// FUNCTION 143ca3870 SSL_CTX_clear_options body=17 status=ok
// SIG undefined SSL_CTX_clear_options(void)

uint SSL_CTX_clear_options(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = ~param_2 & *(uint *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x118) = uVar1;
  return uVar1;
}



// FUNCTION 143ca3890 SSL_CTX_ct_is_enabled body=13 status=ok
// SIG undefined SSL_CTX_ct_is_enabled(void)

bool SSL_CTX_ct_is_enabled(longlong param_1)

{
  return *(longlong *)(param_1 + 0x1a8) != 0;
}



// FUNCTION 143ca38a0 FUN_143ca38a0 body=748 status=ok
// SIG undefined FUN_143ca38a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_143ca38a0(longlong *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(int)param_3;
  iVar1 = (int)param_2;
  if (param_1 == (longlong *)0x0) {
    if (iVar1 == 0x5c) {
      uVar3 = tls1_set_groups_list(0,0,param_4);
      return uVar3;
    }
    if ((iVar1 - 0x62U & 0xfffffffb) == 0) {
      uVar3 = tls1_set_sigalgs_list(0,param_4,0);
      return uVar3;
    }
  }
  else {
    switch(iVar1) {
    case 0x10:
      param_1[0x29] = param_4;
      return 1;
    default:
                    /* WARNING: Could not recover jumptable at 0x000143ca3b85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3);
      return uVar3;
    case 0x14:
      uVar3 = FUN_143cf4b00(param_1[5]);
      return uVar3;
    case 0x15:
      return (ulonglong)*(uint *)(param_1 + 0xd);
    case 0x16:
      return (ulonglong)*(uint *)(param_1 + 0xe);
    case 0x17:
      return (ulonglong)*(uint *)((longlong)param_1 + 0x6c);
    case 0x18:
      return (ulonglong)*(uint *)((longlong)param_1 + 0x74);
    case 0x19:
      return (ulonglong)*(uint *)((longlong)param_1 + 0x7c);
    case 0x1a:
      return (ulonglong)*(uint *)(param_1 + 0xf);
    case 0x1b:
      return (ulonglong)*(uint *)((longlong)param_1 + 0x8c);
    case 0x1c:
      return (ulonglong)*(uint *)(param_1 + 0x12);
    case 0x1d:
      return (ulonglong)*(uint *)(param_1 + 0x10);
    case 0x1e:
      return (ulonglong)*(uint *)((longlong)param_1 + 0x84);
    case 0x1f:
      return (ulonglong)*(uint *)(param_1 + 0x11);
    case 0x21:
      param_3 = *(uint *)((longlong)param_1 + 0x11c) | param_3;
      *(uint *)((longlong)param_1 + 0x11c) = param_3;
      return (ulonglong)param_3;
    case 0x28:
      return (ulonglong)*(uint *)(param_1 + 0x27);
    case 0x29:
      uVar2 = *(uint *)(param_1 + 0x27);
      *(uint *)(param_1 + 0x27) = param_3;
      return (ulonglong)uVar2;
    case 0x2a:
      if (-1 < (int)param_3) {
        uVar2 = *(uint *)(param_1 + 6);
        param_1[6] = uVar3;
        return (ulonglong)uVar2;
      }
      break;
    case 0x2b:
      return (ulonglong)*(uint *)(param_1 + 6);
    case 0x2c:
      uVar2 = *(uint *)(param_1 + 9);
      *(uint *)(param_1 + 9) = param_3;
      return (ulonglong)uVar2;
    case 0x2d:
      return (ulonglong)*(uint *)(param_1 + 9);
    case 0x32:
      return (ulonglong)*(uint *)(param_1 + 0x25);
    case 0x33:
      if (-1 < (int)param_3) {
        uVar2 = *(uint *)(param_1 + 0x25);
        param_1[0x25] = uVar3;
        return (ulonglong)uVar2;
      }
      break;
    case 0x34:
      if (param_3 - 0x200 < 0x3e01) {
        param_1[0x38] = uVar3;
        if (uVar3 < (ulonglong)param_1[0x37]) {
          param_1[0x37] = uVar3;
        }
        return 1;
      }
      break;
    case 0x4e:
      uVar2 = ~param_3 & *(uint *)((longlong)param_1 + 0x11c);
      *(uint *)((longlong)param_1 + 0x11c) = uVar2;
      return (ulonglong)uVar2;
    case 99:
      param_3 = *(uint *)(param_1[0x26] + 0x1c) | param_3;
      *(uint *)(param_1[0x26] + 0x1c) = param_3;
      return (ulonglong)param_3;
    case 100:
      uVar2 = ~param_3 & *(uint *)(param_1[0x26] + 0x1c);
      *(uint *)(param_1[0x26] + 0x1c) = uVar2;
      return (ulonglong)uVar2;
    case 0x7b:
      iVar1 = FUN_143ca6e90(param_3,*(undefined4 *)((longlong)param_1 + 0x124),
                            &IMAGE_DOS_HEADER_140000000,param_4,0x143ca38aa);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_143cb4c10(*(undefined4 *)*param_1,uVar3 & 0xffffffff,param_1 + 0x24),
         iVar1 != 0)) {
        return 1;
      }
      break;
    case 0x7c:
      iVar1 = FUN_143ca6e90((int)param_1[0x24],param_3,&IMAGE_DOS_HEADER_140000000,param_4,
                            0x143ca38aa);
      if ((iVar1 != 0) && (iVar1 = FUN_143cb4c10(*(undefined4 *)*param_1), iVar1 != 0)) {
        return 1;
      }
      break;
    case 0x7d:
      if ((uVar3 <= (ulonglong)param_1[0x38]) && (param_3 != 0)) {
        param_1[0x37] = uVar3;
        return 1;
      }
      break;
    case 0x7e:
      if (param_3 - 1 < 0x20) {
        param_1[0x39] = uVar3;
        return 1;
      }
      break;
    case 0x82:
      return (ulonglong)*(uint *)(param_1 + 0x24);
    case 0x83:
      return (ulonglong)*(uint *)((longlong)param_1 + 0x124);
    }
  }
  return 0;
}



// FUNCTION 143ca3c90 SSL_CTX_free body=465 status=ok
// SIG undefined SSL_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x94);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      X509_VERIFY_PARAM_free(*(undefined8 *)(param_1 + 400));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x350),"ssl\\ssl_lib.c",0xae);
      *(undefined8 *)(param_1 + 0x350) = 0;
      CRYPTO_free(*(undefined8 *)(param_1 + 0x358),"ssl\\ssl_lib.c",0xb1);
      *(undefined8 *)(param_1 + 0x358) = 0;
      *(undefined1 *)(param_1 + 0x360) = 0;
      if (*(longlong *)(param_1 + 0x28) != 0) {
        SSL_CTX_flush_sessions(param_1,0);
      }
      CRYPTO_free_ex_data(1,param_1,param_1 + 0xe0);
      OPENSSL_LH_free(*(undefined8 *)(param_1 + 0x28));
      X509_STORE_free(*(undefined8 *)(param_1 + 0x20));
      CTLOG_STORE_free(*(undefined8 *)(param_1 + 0x1a0));
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 8));
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x10));
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x18));
      ssl_cert_free(*(undefined8 *)(param_1 + 0x130));
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x110),X509_NAME_free);
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0xf8),X509_free);
      *(undefined8 *)(param_1 + 0x100) = 0;
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x368));
      SSL_CTX_SRP_CTX_free(param_1);
      ENGINE_finish(*(undefined8 *)(param_1 + 0x1d8));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x240),"ssl\\ssl_lib.c",0xc34);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x250),"ssl\\ssl_lib.c",0xc35);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x268),"ssl\\ssl_lib.c",0xc37);
      CRYPTO_secure_free(*(undefined8 *)(param_1 + 0x210),"ssl\\ssl_lib.c",0xc38);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x378));
      CRYPTO_free(param_1,"ssl\\ssl_lib.c",0xc3c);
    }
  }
  return;
}



// FUNCTION 143ca3e70 SSL_CTX_get0_certificate body=20 status=ok
// SIG undefined SSL_CTX_get0_certificate(void)

undefined8 SSL_CTX_get0_certificate(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0x130) != (undefined8 *)0x0) {
    return *(undefined8 *)**(undefined8 **)(param_1 + 0x130);
  }
  return 0;
}



// FUNCTION 143ca3e90 SSL_CTX_set_ex_data body=29 status=ok
// SIG undefined SSL_CTX_set_ex_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0xe0);
  return;
}



// FUNCTION 143ca3eb0 SSL_CTX_get_security_level body=14 status=ok
// SIG undefined SSL_CTX_get_security_level(void)

undefined4 SSL_CTX_get_security_level(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x130) + 0x200);
}



// FUNCTION 143ca3ec0 GetLODThreshold body=7 status=ok
// SIG undefined GetLODThreshold(void)

undefined4 FAnimNode_AimOffsetLookAt::GetLODThreshold(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x150);
}



// FUNCTION 143ca3ed0 FUN_143ca3ed0 body=26 status=ok
// SIG undefined FUN_143ca3ed0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143ca3ed0(longlong param_1)

{
  X509_STORE_load_locations(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143ca3ef0 SSL_CTX_new body=1011 status=ok
// SIG undefined SSL_CTX_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * SSL_CTX_new(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x143ca3f05;
  plVar3 = (longlong *)0x0;
  if (param_1 == 0) {
    ERR_put_error(0x14,0xa9,0xc4,"ssl\\ssl_lib.c",0xb3f,0x143ca3f05);
    return (longlong *)0x0;
  }
  iVar1 = OPENSSL_init_ssl(0x200000,0);
  if (iVar1 == 0) {
    return (longlong *)0x0;
  }
  iVar1 = SSL_get_ex_data_X509_STORE_CTX_idx();
  if (iVar1 < 0) {
    uVar5 = CONCAT44(uVar6,0xb47);
    ERR_put_error(0x14,0xa9,0x10d,"ssl\\ssl_lib.c",uVar5,uVar7);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  else {
    plVar3 = (longlong *)CRYPTO_zalloc(0x3e0,"ssl\\ssl_lib.c",0xb4a);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = param_1;
      plVar3[0x24] = 0;
      *(undefined4 *)((longlong)plVar3 + 0x11c) = 4;
      *(undefined4 *)(plVar3 + 9) = 2;
      plVar3[6] = 0x5000;
      uVar2 = (**(code **)(param_1 + 0xb8))();
      *(undefined4 *)((longlong)plVar3 + 0x4c) = uVar2;
      *(undefined4 *)((longlong)plVar3 + 0x94) = 1;
      lVar4 = CRYPTO_THREAD_lock_new();
      plVar3[0x6f] = lVar4;
      if (lVar4 == 0) {
        ERR_put_error(0x14,0xa9,0x41,"ssl\\ssl_lib.c",CONCAT44(uVar6,0xb59));
        CRYPTO_free(plVar3,"ssl\\ssl_lib.c",0xb5a);
        return (longlong *)0x0;
      }
      plVar3[0x25] = 0x19000;
      *(undefined4 *)(plVar3 + 0x2a) = 0;
      lVar4 = ssl_cert_new();
      plVar3[0x26] = lVar4;
      if (lVar4 != 0) {
        lVar4 = OPENSSL_LH_new(ssl_session_hash,ssl_session_cmp);
        plVar3[5] = lVar4;
        if (lVar4 != 0) {
          lVar4 = X509_STORE_new();
          plVar3[4] = lVar4;
          if (lVar4 != 0) {
            lVar4 = CTLOG_STORE_new();
            plVar3[0x34] = lVar4;
            if ((lVar4 != 0) &&
               (iVar1 = SSL_CTX_set_ciphersuites
                                  (plVar3,
                                   "TLS_AES_256_GCM_SHA384:TLS_CHACHA20_POLY1305_SHA256:TLS_AES_128_GCM_SHA256"
                                  ), iVar1 != 0)) {
              uVar6 = 1;
              lVar4 = ssl_create_cipher_list
                                (*plVar3,plVar3[3],plVar3 + 1,plVar3 + 2,
                                 "ALL:!COMPLEMENTOFDEFAULT:!eNULL",plVar3[0x26]);
              if ((lVar4 == 0) || (iVar1 = OPENSSL_sk_num(plVar3[1]), iVar1 < 1)) {
                uVar2 = 0xb76;
                uVar7 = 0xa1;
                goto LAB_143ca3f8f;
              }
              lVar4 = X509_VERIFY_PARAM_new();
              plVar3[0x32] = lVar4;
              if (lVar4 != 0) {
                lVar4 = EVP_get_digestbyname("ssl3-md5");
                plVar3[0x1d] = lVar4;
                if (lVar4 == 0) {
                  uVar2 = 0xb7f;
                  uVar7 = 0xf2;
                  goto LAB_143ca3f8f;
                }
                lVar4 = EVP_get_digestbyname("ssl3-sha1");
                plVar3[0x1e] = lVar4;
                if (lVar4 == 0) {
                  uVar2 = 0xb83;
                  uVar7 = 0xf3;
                  goto LAB_143ca3f8f;
                }
                lVar4 = OPENSSL_sk_new_null();
                plVar3[0x22] = lVar4;
                if ((lVar4 != 0) && (iVar1 = CRYPTO_new_ex_data(1,plVar3,plVar3 + 0x1c), iVar1 != 0)
                   ) {
                  lVar4 = CRYPTO_secure_zalloc(0x40,"ssl\\ssl_lib.c",0xb8d);
                  plVar3[0x42] = lVar4;
                  if (lVar4 != 0) {
                    if ((*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x60) & 8) == 0) {
                      lVar4 = SSL_COMP_get_compression_methods();
                      plVar3[0x20] = lVar4;
                    }
                    plVar3[0x38] = 0x4000;
                    plVar3[0x37] = 0x4000;
                    iVar1 = RAND_bytes(plVar3 + 0x40,0x10);
                    if (((iVar1 < 1) || (iVar1 = RAND_priv_bytes(plVar3[0x42],0x20), iVar1 < 1)) ||
                       (iVar1 = RAND_priv_bytes(plVar3[0x42] + 0x20,0x20), iVar1 < 1)) {
                      *(uint *)(plVar3 + 0x23) = *(uint *)(plVar3 + 0x23) | 0x4000;
                    }
                    iVar1 = RAND_priv_bytes(plVar3 + 0x53,0x20);
                    if ((0 < iVar1) && (iVar1 = SSL_CTX_SRP_CTX_init(plVar3), iVar1 != 0)) {
                      *(uint *)(plVar3 + 0x23) = *(uint *)(plVar3 + 0x23) | 0x120004;
                      *(undefined4 *)(plVar3 + 0x46) = 0xffffffff;
                      *(undefined4 *)(plVar3 + 0x71) = 0;
                      *(undefined4 *)((longlong)plVar3 + 0x38c) = 0x4000;
                      plVar3[0x78] = 2;
                      ssl_ctx_system_config(plVar3);
                      return plVar3;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 0xbee;
  uVar7 = 0x41;
LAB_143ca3f8f:
  ERR_put_error(0x14,0xa9,uVar7,"ssl\\ssl_lib.c",CONCAT44(uVar6,uVar2));
  SSL_CTX_free(plVar3);
  return (longlong *)0x0;
}



// FUNCTION 143ca42f0 FUN_143ca42f0 body=15 status=ok
// SIG undefined FUN_143ca42f0(void)

void FUN_143ca42f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 600) = param_2;
  *(undefined8 *)(param_1 + 0x260) = param_3;
  return;
}



// FUNCTION 143ca4300 SSL_CTX_set_block_padding body=44 status=ok
// SIG undefined SSL_CTX_set_block_padding(void)

undefined8 SSL_CTX_set_block_padding(longlong param_1,ulonglong param_2)

{
  if (param_2 == 1) {
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    return 1;
  }
  if (param_2 < 0x4001) {
    *(ulonglong *)(param_1 + 0x3a0) = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 143ca4330 SSL_CTX_set_cipher_list body=116 status=ok
// SIG undefined SSL_CTX_set_cipher_list(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_set_cipher_list(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = ssl_create_cipher_list
                    (*param_1,param_1[3],param_1 + 1,param_1 + 2,param_2,param_1[0x26],0x143ca433a);
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (lVar2 != 0) {
    iVar1 = OPENSSL_sk_num(lVar2);
    if (iVar1 != 0) {
      return 1;
    }
    ERR_put_error(0x14,0x10d,0xb9,"ssl\\ssl_lib.c",CONCAT44(uVar3,0x9dc));
  }
  return 0;
}



// FUNCTION 143ca43b0 FUN_143ca43b0 body=26 status=ok
// SIG undefined FUN_143ca43b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143ca43b0(longlong param_1)

{
  X509_STORE_set_default_paths(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143ca43d0 SSL_CTX_set_ex_data body=29 status=ok
// SIG undefined SSL_CTX_set_ex_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0xe0);
  return;
}



// FUNCTION 143ca43f0 SSL_CTX_set_num_tickets body=13 status=ok
// SIG undefined SSL_CTX_set_num_tickets(void)

undefined8 SSL_CTX_set_num_tickets(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x3c0) = param_2;
  return 1;
}



// FUNCTION 143ca4400 SSL_CTX_set_options body=15 status=ok
// SIG undefined SSL_CTX_set_options(void)

uint SSL_CTX_set_options(longlong param_1,uint param_2)

{
  param_2 = param_2 | *(uint *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x118) = param_2;
  return param_2;
}



// FUNCTION 143ca4410 SSL_CTX_set_session_id_context body=90 status=ok
// SIG undefined SSL_CTX_set_session_id_context(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_set_session_id_context(longlong param_1,void *param_2,uint param_3)

{
  if (0x20 < param_3) {
    ERR_put_error(0x14,0xdb,0x111,"ssl\\ssl_lib.c",0x364);
    return 0;
  }
  *(ulonglong *)(param_1 + 0x158) = (ulonglong)param_3;
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x160),param_2,(ulonglong)param_3);
  return 1;
}



// FUNCTION 143ca4470 SSL_CTX_set_verify body=14 status=ok
// SIG undefined SSL_CTX_set_verify(void)

void SSL_CTX_set_verify(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0x150) = param_2;
  *(undefined8 *)(param_1 + 0x180) = param_3;
  return;
}



// FUNCTION 143ca4480 SSL_SESSION_set1_master_key body=73 status=ok
// SIG undefined SSL_SESSION_set1_master_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_SESSION_set1_master_key(longlong param_1,void *param_2,size_t param_3)

{
  if (0x40 < param_3) {
    return 0;
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x50),param_2,param_3);
  *(size_t *)(param_1 + 8) = param_3;
  return 1;
}



// FUNCTION 143ca44d0 SSL_accept body=77 status=ok
// SIG undefined SSL_accept(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_accept(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x44) = 0;
    ossl_statem_clear();
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28);
    clear_ciphers(param_1);
  }
  SSL_do_handshake(param_1);
  return;
}



// FUNCTION 143ca4520 SSL_clear body=464 status=ok
// SIG undefined SSL_clear(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_clear(undefined4 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143ca452c;
  if (*(longlong *)(param_1 + 2) == 0) {
    ERR_put_error(0x14,0xa4,0xbc,"ssl\\ssl_lib.c",0x244,0x143ca452c);
    return 0;
  }
  iVar3 = ssl_clear_bad_session();
  if (iVar3 != 0) {
    SSL_SESSION_free(*(undefined8 *)(param_1 + 0x142));
    *(undefined8 *)(param_1 + 0x142) = 0;
  }
  SSL_SESSION_free(*(undefined8 *)(param_1 + 0x144));
  *(undefined8 *)(param_1 + 0x144) = 0;
  CRYPTO_free(*(undefined8 *)(param_1 + 0x146),"ssl\\ssl_lib.c",0x24e);
  *(undefined8 *)(param_1 + 0x146) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  param_1[0x136] = 0;
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  param_1[0x15c] = 0;
  param_1[0x32] = 0;
  param_1[0x11] = 0;
  if (param_1[0x1d4] == 0) {
    ossl_statem_clear(param_1);
    uVar1 = **(undefined4 **)(param_1 + 2);
    *param_1 = uVar1;
    param_1[0x179] = uVar1;
    param_1[10] = 1;
    BUF_MEM_free(*(undefined8 *)(param_1 + 0x22));
    *(undefined8 *)(param_1 + 0x22) = 0;
    clear_ciphers(param_1);
    param_1[0x178] = 0;
    param_1[0x1d5] = 0xffffffff;
    EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x1de));
    *(undefined8 *)(param_1 + 0x1de) = 0;
    *(undefined8 *)(param_1 + 0x41) = 0xffffffffffffffff;
    X509_free(*(undefined8 *)(param_1 + 0x3e));
    *(undefined8 *)(param_1 + 0x3e) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    X509_VERIFY_PARAM_move_peername(*(undefined8 *)(param_1 + 0x34),0);
    lVar2 = *(longlong *)(param_1 + 2);
    if (lVar2 == **(longlong **)(param_1 + 0x166)) {
      iVar3 = (**(code **)(lVar2 + 0x18))(param_1);
    }
    else {
      (**(code **)(lVar2 + 0x20))();
      lVar2 = **(longlong **)(param_1 + 0x166);
      *(longlong *)(param_1 + 2) = lVar2;
      iVar3 = (**(code **)(lVar2 + 0x10))(param_1);
    }
    if (iVar3 != 0) {
      RECORD_LAYER_clear(param_1 + 0x200);
      return 1;
    }
  }
  else {
    ERR_put_error(0x14,0xa4,0x44,"ssl\\ssl_lib.c",0x259,uVar4);
  }
  return 0;
}



// FUNCTION 143ca46f0 SSL_client_version body=7 status=ok
// SIG undefined SSL_client_version(void)

undefined4 SSL_client_version(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5e4);
}



// FUNCTION 143ca4700 SSL_connect body=71 status=ok
// SIG undefined SSL_connect(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_connect(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    ossl_statem_clear();
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30);
    clear_ciphers(param_1);
  }
  SSL_do_handshake(param_1);
  return;
}



// FUNCTION 143ca4750 FUN_143ca4750 body=786 status=ok
// SIG undefined FUN_143ca4750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_143ca4750(longlong param_1,undefined8 param_2,uint param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(int)param_3;
  uVar3 = 1;
  switch((int)param_2) {
  case 0x10:
    *(longlong **)(param_1 + 0xc0) = param_4;
    break;
  default:
                    /* WARNING: Could not recover jumptable at 0x000143ca4a5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x80))(param_1,param_2,param_3);
    return uVar3;
  case 0x21:
    param_3 = *(uint *)(param_1 + 0x5c8) | param_3;
    *(uint *)(param_1 + 0x5c8) = param_3;
    return (ulonglong)param_3;
  case 0x28:
    return (ulonglong)*(uint *)(param_1 + 0x808);
  case 0x29:
    uVar4 = *(uint *)(param_1 + 0x808);
    *(uint *)(param_1 + 0x808) = param_3;
    return (ulonglong)uVar4;
  case 0x32:
    return (ulonglong)*(uint *)(param_1 + 0x5d8);
  case 0x33:
    if ((int)param_3 < 0) {
      return 0;
    }
    uVar4 = *(uint *)(param_1 + 0x5d8);
    *(ulonglong *)(param_1 + 0x5d8) = uVar5;
    return (ulonglong)uVar4;
  case 0x34:
    if (0x3e00 < param_3 - 0x200) {
      return 0;
    }
    *(ulonglong *)(param_1 + 0x5f0) = uVar5;
    if (uVar5 < *(ulonglong *)(param_1 + 0x5e8)) {
      *(ulonglong *)(param_1 + 0x5e8) = uVar5;
      return 1;
    }
    break;
  case 0x4c:
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      return 0;
    }
    return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x3d8);
  case 0x4e:
    uVar4 = ~param_3 & *(uint *)(param_1 + 0x5c8);
    *(uint *)(param_1 + 0x5c8) = uVar4;
    return (ulonglong)uVar4;
  case 99:
    param_3 = *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) | param_3;
    *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) = param_3;
    return (ulonglong)param_3;
  case 100:
    uVar4 = ~param_3 & *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c);
    *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) = uVar4;
    return (ulonglong)uVar4;
  case 0x6e:
    if (param_4 == (longlong *)0x0) {
      return 2;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2a8);
    if (lVar1 == 0) {
      return 0;
    }
    *param_4 = lVar1;
    return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x2b0);
  case 0x7a:
    if (((*(longlong *)(param_1 + 0x508) == 0) ||
        (iVar2 = FSlateAccessibleWidget::GetId(param_1), iVar2 != 0)) ||
       (iVar2 = ossl_statem_get_in_handshake(param_1), iVar2 != 0)) {
      return 0xffffffff;
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x508) + 0x1d0) & 1) == 0) {
      return 0;
    }
    break;
  case 0x7b:
    iVar2 = FUN_143ca6e90(param_3,*(undefined4 *)(param_1 + 0x5d0));
    goto joined_r0x000143ca4a2b;
  case 0x7c:
    iVar2 = FUN_143ca6e90(*(undefined4 *)(param_1 + 0x5cc),param_3);
joined_r0x000143ca4a2b:
    if ((iVar2 == 0) ||
       (iVar2 = FUN_143cb4c10(*(undefined4 *)**(undefined8 **)(param_1 + 0x598)), iVar2 == 0)) {
      uVar3 = 0;
    }
    return uVar3;
  case 0x7d:
    if ((uVar5 <= *(ulonglong *)(param_1 + 0x5f0)) && (param_3 != 0)) {
      *(ulonglong *)(param_1 + 0x5e8) = uVar5;
      return 1;
    }
    return 0;
  case 0x7e:
    if (0x1f < param_3 - 1) {
      return 0;
    }
    *(ulonglong *)(param_1 + 0x5f8) = uVar5;
    if (1 < (int)param_3) {
      *(undefined4 *)(param_1 + 0x808) = 1;
      return 1;
    }
    break;
  case 0x82:
    return (ulonglong)*(uint *)(param_1 + 0x5cc);
  case 0x83:
    return (ulonglong)*(uint *)(param_1 + 0x5d0);
  }
  return 1;
}



// FUNCTION 143ca4b30 SSL_do_handshake body=203 status=ok
// SIG undefined SSL_do_handshake(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong SSL_do_handshake(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong local_38 [5];
  undefined8 uStack_10;
  
  uStack_10 = 0x143ca4b40;
  uVar4 = 1;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    ERR_put_error(0x14,0xb4,0x90,"ssl\\ssl_lib.c",0xde2);
    return 0xffffffff;
  }
  ossl_statem_check_finish_init(param_1,0xffffffff);
  (**(code **)(*(longlong *)(param_1 + 8) + 0x60))(param_1,0);
  iVar1 = FSlateAccessibleWidget::GetId(param_1);
  if (iVar1 == 0) {
    iVar1 = SSL_in_before(param_1);
    if (iVar1 == 0) goto LAB_143ca4bee;
  }
  if ((*(uint *)(param_1 + 0x5c8) & 0x100) != 0) {
    lVar2 = ASYNC_get_current_job();
    if (lVar2 == 0) {
      local_38[0] = param_1;
      uVar3 = ssl_start_async_job(param_1,local_38,ssl_do_handshake_intern);
      return uVar3;
    }
  }
  uVar4 = (**(code **)(param_1 + 0x30))(param_1);
LAB_143ca4bee:
  return (ulonglong)uVar4;
}



// FUNCTION 143ca4c00 SSL_free body=743 status=ok
// SIG undefined SSL_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x5c0);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      X509_VERIFY_PARAM_free(*(undefined8 *)(param_1 + 0xd0));
      dane_final(param_1 + 0xd8);
      CRYPTO_free_ex_data(0,param_1,param_1 + 0x5b0);
      if (*(longlong *)(param_1 + 0x20) != 0) {
        uVar3 = BIO_pop(*(undefined8 *)(param_1 + 0x18));
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        BIO_free(*(undefined8 *)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      BIO_free_all(*(undefined8 *)(param_1 + 0x18));
      BIO_free_all(*(undefined8 *)(param_1 + 0x10));
      BUF_MEM_free(*(undefined8 *)(param_1 + 0x88));
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x110));
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x118));
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x120));
      if (*(longlong *)(param_1 + 0x508) != 0) {
        ssl_clear_bad_session(param_1);
        SSL_SESSION_free(*(undefined8 *)(param_1 + 0x508));
      }
      SSL_SESSION_free(*(undefined8 *)(param_1 + 0x510));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x518),"ssl\\ssl_lib.c",0x48e);
      clear_ciphers(param_1);
      ssl_cert_free(*(undefined8 *)(param_1 + 0x488));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x630),"ssl\\ssl_lib.c",0x495);
      SSL_CTX_free(*(undefined8 *)(param_1 + 0x738));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x680),"ssl\\ssl_lib.c",0x498);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x690),"ssl\\ssl_lib.c",0x499);
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x658),FUN_143cfb600);
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x650),FUN_143cfee00);
      SCT_LIST_free(*(undefined8 *)(param_1 + 0x728));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x640),"ssl\\ssl_lib.c",0x4a1);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x660),"ssl\\ssl_lib.c",0x4a3);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x6c0),"ssl\\ssl_lib.c",0x4a4);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x6f0),"ssl\\ssl_lib.c",0x4a5);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x708),"ssl\\ssl_lib.c",0x4a6);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x760),"ssl\\ssl_lib.c",0x4a7);
      EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x778));
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x5b8),X509_NAME_free);
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x5a0),X509_free);
      if (*(longlong *)(param_1 + 8) != 0) {
        (**(code **)(*(longlong *)(param_1 + 8) + 0x20))(param_1);
      }
      RECORD_LAYER_release(param_1 + 0x800);
      SSL_CTX_free(*(undefined8 *)(param_1 + 0x598));
      ASYNC_WAIT_CTX_free(*(undefined8 *)(param_1 + 0x16d0));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x6d0),"ssl\\ssl_lib.c",0x4b8);
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x740));
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x1708));
      CRYPTO_free(param_1,"ssl\\ssl_lib.c",0x4c1);
    }
  }
  return;
}



// FUNCTION 143ca4ef0 SSL_get0_alpn_selected body=54 status=ok
// SIG undefined SSL_get0_alpn_selected(void)

void SSL_get0_alpn_selected(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  *param_2 = 0;
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3e0), *param_2 = lVar1, lVar1 != 0)) {
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 1000);
    return;
  }
  *param_3 = 0;
  return;
}



// FUNCTION 143ca4f30 SSL_get0_peer_scts body=461 status=ok
// SIG undefined SSL_get0_peer_scts(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_get0_peer_scts(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong local_res8;
  
  if (*(int *)(param_1 + 0x730) == 0) {
    if (*(longlong *)(param_1 + 0x640) != 0) {
      local_res8 = *(longlong *)(param_1 + 0x640);
      uVar3 = o2i_SCT_LIST(0,&local_res8,*(undefined2 *)(param_1 + 0x648));
      iVar1 = ct_move_scts(param_1 + 0x728,uVar3,1);
      SCT_LIST_free(uVar3);
      if (iVar1 < 0) {
        return 0;
      }
    }
    iVar8 = 0;
    lVar4 = 0;
    uVar9 = 0;
    lVar5 = 0;
    uVar3 = uVar9;
    iVar1 = 0;
    if ((((*(longlong *)(param_1 + 0x660) != 0) &&
         (iVar1 = iVar8, *(ulonglong *)(param_1 + 0x668) != 0)) &&
        (local_res8 = *(longlong *)(param_1 + 0x660),
        lVar4 = SCT_LIST_free(0,&local_res8,*(ulonglong *)(param_1 + 0x668) & 0xffffffff), lVar5 = 0
        , lVar4 != 0)) && (lVar5 = OCSP_response_get1_basic(lVar4), uVar3 = 0, lVar5 != 0)) {
      iVar7 = 0;
      iVar2 = OCSP_resp_count(lVar5);
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          uVar3 = uVar9;
          lVar6 = OCSP_resp_get0(lVar5,iVar7);
          iVar1 = iVar8;
          if (lVar6 != 0) {
            uVar3 = X509_REVOKED_get_ext_d2i(lVar6,0x3ba,0,0);
            iVar1 = ct_move_scts(param_1 + 0x728,uVar3);
            if (iVar1 < 0) break;
          }
          iVar7 = iVar7 + 1;
          iVar2 = OCSP_resp_count(lVar5);
          uVar9 = uVar3;
          iVar8 = iVar1;
        } while (iVar7 < iVar2);
      }
    }
    SCT_LIST_free(uVar3);
    SCT_LIST_free(lVar5);
    SCT_LIST_free(lVar4);
    if (iVar1 < 0) {
      return 0;
    }
    if ((*(longlong *)(param_1 + 0x508) != 0) &&
       (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0xf8), lVar5 != 0)) {
      uVar3 = X509_get_ext_d2i(lVar5,0x3b7,0,0);
      iVar1 = ct_move_scts(param_1 + 0x728,uVar3,2);
      SCT_LIST_free(uVar3);
      if (iVar1 < 0) {
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 0x730) = 1;
  }
  return *(undefined8 *)(param_1 + 0x728);
}



// FUNCTION 143ca5100 SSL_get_ciphers body=41 status=ok
// SIG undefined SSL_get_ciphers(void)

longlong SSL_get_ciphers(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 == 0) ||
     ((lVar1 = *(longlong *)(param_1 + 0x110), lVar1 == 0 &&
      ((*(longlong *)(param_1 + 0x598) == 0 ||
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 8), lVar1 == 0)))))) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143ca5130 SSL_get_default_timeout body=28 status=ok
// SIG undefined SSL_get_default_timeout(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_get_default_timeout(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ca5145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 8) + 0xb8))();
  return;
}



// FUNCTION 143ca5150 SSL_get_error body=426 status=ok
// SIG undefined SSL_get_error(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_get_error(longlong param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  
  if (0 < param_2) {
    return 0;
  }
  uVar2 = ERR_peek_error();
  if (uVar2 != 0) {
    if ((uVar2 & 0xff000000) == 0x2000000) {
      return 5;
    }
    return 1;
  }
  if (*(int *)(param_1 + 0x28) == 3) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    iVar3 = BIO_test_flags(uVar1,1);
    if (iVar3 != 0) {
      return 2;
    }
    iVar3 = BIO_test_flags(uVar1,2);
    if (iVar3 != 0) {
      return 3;
    }
    iVar3 = BIO_test_flags(uVar1,4);
    if (iVar3 == 0) goto LAB_143ca5203;
    iVar3 = FImgMediaPlayer::GetState(uVar1);
joined_r0x000143ca526b:
    if (iVar3 == 2) {
      return 7;
    }
    if (iVar3 == 3) {
      return 8;
    }
  }
  else {
LAB_143ca5203:
    if (*(int *)(param_1 + 0x28) == 2) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      iVar3 = BIO_test_flags(uVar1,2);
      if (iVar3 != 0) {
        return 3;
      }
      iVar3 = BIO_test_flags(uVar1,1);
      if (iVar3 != 0) {
        return 2;
      }
      iVar3 = BIO_test_flags(uVar1,4);
      if (iVar3 != 0) {
        iVar3 = FImgMediaPlayer::GetState(uVar1);
        goto joined_r0x000143ca526b;
      }
    }
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 == 4) {
      return 4;
    }
    if (iVar3 == 5) {
      return 9;
    }
    if (iVar3 == 6) {
      return 10;
    }
    if (iVar3 == 7) {
      return 0xb;
    }
    if (((*(byte *)(param_1 + 0x44) & 2) != 0) &&
       (*(int *)(*(longlong *)(param_1 + 0xa8) + 0xf4) == 0)) {
      return 6;
    }
  }
  return 5;
}



// FUNCTION 143ca5300 FUN_143ca5300 body=29 status=ok
// SIG undefined FUN_143ca5300(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143ca5300(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0x5b0);
  return;
}



// FUNCTION 143ca5320 SSL_get_fd body=69 status=ok
// SIG undefined SSL_get_fd(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_get_fd(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 local_res8 [8];
  
  local_res8[0] = 0xffffffff;
  lVar1 = BIO_find_type(*(undefined8 *)(param_1 + 0x10),0x100,param_3,param_4,0x143ca532a);
  if (lVar1 != 0) {
    BIO_ctrl(lVar1,0x69,0,local_res8);
  }
  return local_res8[0];
}



// FUNCTION 143ca5370 SSL_get_options body=7 status=ok
// SIG undefined SSL_get_options(void)

undefined4 SSL_get_options(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5c4);
}



// FUNCTION 143ca5380 SSL_get_peer_certificate body=69 status=ok
// SIG undefined SSL_get_peer_certificate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SSL_get_peer_certificate(longlong param_1)

{
  longlong lVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x508) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0xf8), lVar1 != 0)) {
    X509_up_ref(lVar1);
    return lVar1;
  }
  return 0;
}



// FUNCTION 143ca53d0 SSL_get_security_level body=14 status=ok
// SIG undefined SSL_get_security_level(void)

undefined4 SSL_get_security_level(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x488) + 0x200);
}



// FUNCTION 143ca53e0 SSL_get_servername body=39 status=ok
// SIG undefined SSL_get_servername(void)

undefined8 SSL_get_servername(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 200) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x158);
  }
  return *(undefined8 *)(param_1 + 0x630);
}



// FUNCTION 143ca5410 FUN_143ca5410 body=7 status=ok
// SIG undefined FUN_143ca5410(void)

undefined4 FUN_143ca5410(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5a8);
}



// FUNCTION 143ca5420 SSL_get_wbio body=43 status=ok
// SIG undefined SSL_get_wbio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_get_wbio(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = BIO_next(*(longlong *)(param_1 + 0x20));
    return uVar1;
  }
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 143ca5450 SSL_has_matching_session_id body=187 status=ok
// SIG undefined SSL_has_matching_session_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool SSL_has_matching_session_id(undefined4 *param_1,void *param_2,uint param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_218 [32];
  undefined4 local_1f8 [36];
  ulonglong local_168;
  undefined1 local_160 [328];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143ca545c;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  if (param_3 < 0x21) {
    local_1f8[0] = *param_1;
    local_168 = (ulonglong)param_3;
    _guard_xfg_dispatch_icall_nop(local_160,param_2,local_168);
    CRYPTO_THREAD_read_lock(*(undefined8 *)(*(longlong *)(param_1 + 0x1ce) + 0x378));
    lVar1 = OPENSSL_LH_retrieve(*(undefined8 *)(*(longlong *)(param_1 + 0x1ce) + 0x28),local_1f8);
    CRYPTO_THREAD_unlock(*(undefined8 *)(*(longlong *)(param_1 + 0x1ce) + 0x378));
    bVar2 = lVar1 != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 143ca5510 SSL_new body=1401 status=ok
// SIG undefined SSL_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SSL_new(longlong *param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Dst;
  undefined8 uVar7;
  
  uVar7 = 0x143ca551c;
  if (param_1 == (longlong *)0x0) {
    ERR_put_error(0x14,0xba,0xc3,"ssl\\ssl_lib.c",0x2a2,0x143ca551c);
    return 0;
  }
  if (*param_1 == 0) {
    ERR_put_error(0x14,0xba,0xe4,"ssl\\ssl_lib.c",0x2a6,0x143ca551c);
    return 0;
  }
  lVar5 = CRYPTO_zalloc(0x1740,"ssl\\ssl_lib.c",0x2aa);
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x5c0) = 1;
    lVar6 = CRYPTO_THREAD_lock_new();
    *(longlong *)(lVar5 + 0x1708) = lVar6;
    if (lVar6 == 0) {
      CRYPTO_free(lVar5,"ssl\\ssl_lib.c",0x2b1);
      lVar5 = 0;
    }
    else {
      RECORD_LAYER_init(lVar5 + 0x800,lVar5);
      *(int *)(lVar5 + 0x5c4) = (int)param_1[0x23];
      *(undefined4 *)(lVar5 + 0x10c) = *(undefined4 *)((longlong)param_1 + 0x364);
      *(int *)(lVar5 + 0x5cc) = (int)param_1[0x24];
      *(undefined4 *)(lVar5 + 0x5d0) = *(undefined4 *)((longlong)param_1 + 0x124);
      *(undefined4 *)(lVar5 + 0x5c8) = *(undefined4 *)((longlong)param_1 + 0x11c);
      *(longlong *)(lVar5 + 0x5d8) = param_1[0x25];
      *(int *)(lVar5 + 0x16e0) = (int)param_1[0x71];
      *(undefined4 *)(lVar5 + 0x16e4) = *(undefined4 *)((longlong)param_1 + 0x38c);
      *(longlong *)(lVar5 + 0x1718) = param_1[0x78];
      *(int *)(lVar5 + 0x75c) = (int)param_1[0x7b];
      lVar6 = OPENSSL_sk_dup(param_1[3]);
      *(longlong *)(lVar5 + 0x120) = lVar6;
      if (lVar6 != 0) {
        lVar6 = ssl_cert_dup(param_1[0x26]);
        *(longlong *)(lVar5 + 0x488) = lVar6;
        if (lVar6 != 0) {
          *(int *)(lVar5 + 0x808) = (int)param_1[0x27];
          *(longlong *)(lVar5 + 0xb8) = param_1[0x28];
          *(longlong *)(lVar5 + 0xc0) = param_1[0x29];
          *(int *)(lVar5 + 0x558) = (int)param_1[0x2a];
          *(longlong *)(lVar5 + 0x7f8) = param_1[0x6e];
          *(longlong *)(lVar5 + 0x16f0) = param_1[0x72];
          *(longlong *)(lVar5 + 0x16f8) = param_1[0x73];
          *(longlong *)(lVar5 + 0x1700) = param_1[0x74];
          uVar1 = param_1[0x2b];
          *(ulonglong *)(lVar5 + 0x4e0) = uVar1;
          if (uVar1 < 0x21) {
            uVar2 = *(undefined4 *)((longlong)param_1 + 0x164);
            lVar6 = param_1[0x2d];
            uVar3 = *(undefined4 *)((longlong)param_1 + 0x16c);
            *(int *)(lVar5 + 0x4e8) = (int)param_1[0x2c];
            *(undefined4 *)(lVar5 + 0x4ec) = uVar2;
            *(int *)(lVar5 + 0x4f0) = (int)lVar6;
            *(undefined4 *)(lVar5 + 0x4f4) = uVar3;
            uVar2 = *(undefined4 *)((longlong)param_1 + 0x174);
            lVar6 = param_1[0x2f];
            uVar3 = *(undefined4 *)((longlong)param_1 + 0x17c);
            *(int *)(lVar5 + 0x4f8) = (int)param_1[0x2e];
            *(undefined4 *)(lVar5 + 0x4fc) = uVar2;
            *(int *)(lVar5 + 0x500) = (int)lVar6;
            *(undefined4 *)(lVar5 + 0x504) = uVar3;
            *(longlong *)(lVar5 + 0x560) = param_1[0x30];
            *(longlong *)(lVar5 + 0x528) = param_1[0x31];
            lVar6 = X509_VERIFY_PARAM_new();
            *(longlong *)(lVar5 + 0xd0) = lVar6;
            if (lVar6 != 0) {
              X509_VERIFY_PARAM_inherit(lVar6,param_1[0x32]);
              *(int *)(lVar5 + 0x40) = (int)param_1[0x33];
              *(undefined1 *)(lVar5 + 0x704) = *(undefined1 *)((longlong)param_1 + 0x234);
              *(longlong *)(lVar5 + 0x5f0) = param_1[0x38];
              *(longlong *)(lVar5 + 0x5e8) = param_1[0x37];
              uVar1 = param_1[0x39];
              *(ulonglong *)(lVar5 + 0x5f8) = uVar1;
              if (1 < uVar1) {
                *(undefined4 *)(lVar5 + 0x808) = 1;
              }
              if (param_1[0x3a] != 0) {
                SSL_set_default_read_buffer_len(lVar5);
              }
              LOCK();
              *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
              UNLOCK();
              *(longlong **)(lVar5 + 0x598) = param_1;
              *(undefined8 *)(lVar5 + 0x620) = 0;
              *(undefined8 *)(lVar5 + 0x628) = 0;
              *(undefined4 *)(lVar5 + 0x670) = 0;
              *(int *)(lVar5 + 0x638) = (int)param_1[0x46];
              *(undefined4 *)(lVar5 + 0x64c) = 0;
              *(undefined8 *)(lVar5 + 0x650) = 0;
              *(undefined8 *)(lVar5 + 0x658) = 0;
              *(undefined8 *)(lVar5 + 0x660) = 0;
              *(undefined8 *)(lVar5 + 0x668) = 0;
              LOCK();
              *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
              UNLOCK();
              *(longlong **)(lVar5 + 0x738) = param_1;
              if (param_1[0x48] != 0) {
                lVar6 = CRYPTO_memdup(param_1[0x48],param_1[0x47],"ssl\\ssl_lib.c",0x304);
                *(longlong *)(lVar5 + 0x680) = lVar6;
                if (lVar6 == 0) goto LAB_143ca55e2;
                *(longlong *)(lVar5 + 0x678) = param_1[0x47];
              }
              if (param_1[0x4a] != 0) {
                lVar6 = CRYPTO_memdup(param_1[0x4a],param_1[0x49] * 2,"ssl\\ssl_lib.c",0x30e);
                *(longlong *)(lVar5 + 0x690) = lVar6;
                if (lVar6 == 0) goto LAB_143ca55e2;
                *(longlong *)(lVar5 + 0x688) = param_1[0x49];
              }
              *(undefined8 *)(lVar5 + 0x6d0) = 0;
              if (*(longlong *)(*(longlong *)(lVar5 + 0x598) + 0x268) != 0) {
                _Dst = (void *)CRYPTO_malloc(*(undefined8 *)(*(longlong *)(lVar5 + 0x598) + 0x270),
                                             "ssl\\ssl_lib.c",0x319);
                *(void **)(lVar5 + 0x6c0) = _Dst;
                if (_Dst == (void *)0x0) goto LAB_143ca55e2;
                _guard_xfg_dispatch_icall_nop
                          (_Dst,*(void **)(*(longlong *)(lVar5 + 0x598) + 0x268),
                           *(size_t *)(*(longlong *)(lVar5 + 0x598) + 0x270));
                *(undefined8 *)(lVar5 + 0x6c8) =
                     *(undefined8 *)(*(longlong *)(lVar5 + 0x598) + 0x270);
              }
              *(undefined8 *)(lVar5 + 0x5a0) = 0;
              *(undefined4 *)(lVar5 + 0x5a8) = 0;
              *(longlong *)(lVar5 + 0x16b8) = param_1[0x15];
              *(longlong *)(lVar5 + 0x16c0) = param_1[0x16];
              lVar6 = *param_1;
              *(longlong *)(lVar5 + 8) = lVar6;
              *(undefined4 *)(lVar5 + 0x754) = 0xffffffff;
              *(longlong *)(lVar5 + 0x1730) = param_1[0x79];
              *(longlong *)(lVar5 + 0x1738) = param_1[0x7a];
              iVar4 = (**(code **)(lVar6 + 0x10))(lVar5);
              if (iVar4 != 0) {
                *(uint *)(lVar5 + 0x38) = (uint)(*(code **)(*param_1 + 0x28) != FUN_143ca3700);
                iVar4 = SSL_clear(lVar5);
                if ((iVar4 != 0) && (iVar4 = CRYPTO_new_ex_data(0,lVar5,lVar5 + 0x5b0), iVar4 != 0))
                {
                  *(longlong *)(lVar5 + 0x578) = param_1[0x57];
                  *(longlong *)(lVar5 + 0x580) = param_1[0x58];
                  *(longlong *)(lVar5 + 0x588) = param_1[0x59];
                  *(longlong *)(lVar5 + 0x590) = param_1[0x5a];
                  *(undefined8 *)(lVar5 + 0x16c8) = 0;
                  iVar4 = SSL_set_ct_validation_callback(lVar5,param_1[0x35],param_1[0x36]);
                  if (iVar4 != 0) {
                    return lVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_143ca55e2:
  SSL_free(lVar5);
  ERR_put_error(0x14,0xba,0x41,"ssl\\ssl_lib.c",0x34a,uVar7);
  return 0;
}



// FUNCTION 143ca5a90 SSL_pending body=41 status=ok
// SIG undefined SSL_pending(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong SSL_pending(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0xa0))();
  uVar2 = 0x7fffffff;
  if (uVar1 < 0x7fffffff) {
    uVar2 = uVar1 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143ca5ac0 SSL_read body=85 status=ok
// SIG undefined SSL_read(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int SSL_read(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_res20 [2];
  
  if (param_3 < 0) {
    ERR_put_error(0x14,0xdf,0x10f,"ssl\\ssl_lib.c",0x6dd);
    return -1;
  }
  iVar1 = ssl_read_internal(param_1,param_2,(longlong)param_3,local_res20);
  if (0 < iVar1) {
    iVar1 = local_res20[0];
  }
  return iVar1;
}



// FUNCTION 143ca5b20 SSL_renegotiate body=169 status=ok
// SIG undefined SSL_renegotiate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_renegotiate(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((((*(byte *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8) == 0) && (0x303 < *piVar1)) &&
     (*piVar1 != 0x10000)) {
    ERR_put_error(0x14,0x204,0x10a,"ssl\\ssl_lib.c",0x841);
    return 0;
  }
  if ((*(uint *)(param_1 + 0x5c4) & 0x40000000) != 0) {
    ERR_put_error(0x14,0x204,0x153,"ssl\\ssl_lib.c",0x846);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x750) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 1;
                    /* WARNING: Could not recover jumptable at 0x000143ca5bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(piVar1 + 0x16))();
  return uVar2;
}



// FUNCTION 143ca5bd0 SSL_renegotiate_abbreviated body=169 status=ok
// SIG undefined SSL_renegotiate_abbreviated(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_renegotiate_abbreviated(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((((*(byte *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8) == 0) && (0x303 < *piVar1)) &&
     (*piVar1 != 0x10000)) {
    ERR_put_error(0x14,0x222,0x10a,"ssl\\ssl_lib.c",0x853);
    return 0;
  }
  if ((*(uint *)(param_1 + 0x5c4) & 0x40000000) != 0) {
    ERR_put_error(0x14,0x222,0x153,"ssl\\ssl_lib.c",0x858);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x750) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 0;
                    /* WARNING: Could not recover jumptable at 0x000143ca5c75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(piVar1 + 0x16))();
  return uVar2;
}



// FUNCTION 143ca5c80 SSL_select_next_proto body=219 status=ok
// SIG undefined SSL_select_next_proto(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
SSL_select_next_proto
          (longlong *param_1,byte *param_2,longlong param_3,uint param_4,byte *param_5,uint param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  
  uVar7 = 0;
  if (param_4 != 0) {
    do {
      uVar6 = 0;
      if (param_6 != 0) {
        pbVar8 = (byte *)(uVar7 + param_3);
        bVar1 = *pbVar8;
        do {
          bVar2 = param_5[uVar6];
          if ((bVar1 == bVar2) &&
             (iVar3 = _guard_xfg_dispatch_icall_nop
                                ((void *)((ulonglong)((int)uVar7 + 1) + param_3),
                                 param_5 + ((int)uVar6 + 1),(ulonglong)bVar1), iVar3 == 0)) {
            uVar4 = 1;
            goto LAB_143ca5d27;
          }
          uVar5 = (int)uVar6 + 1 + (uint)bVar2;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < param_6);
      }
      uVar5 = (int)uVar7 + 1 + (uint)*(byte *)(uVar7 + param_3);
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < param_4);
  }
  uVar4 = 2;
  pbVar8 = param_5;
LAB_143ca5d27:
  *param_1 = (longlong)(pbVar8 + 1);
  *param_2 = *pbVar8;
  return uVar4;
}



// FUNCTION 143ca5d60 SSL_set0_wbio body=90 status=ok
// SIG undefined SSL_set0_wbio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set0_wbio(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = BIO_pop(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  BIO_free_all(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = param_2;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = BIO_push(*(longlong *)(param_1 + 0x20),param_2);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  return;
}



// FUNCTION 143ca5dc0 SSL_set_SSL_CTX body=299 status=ok
// SIG undefined SSL_set_SSL_CTX(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SSL_set_SSL_CTX(longlong param_1,longlong param_2)

{
  ulonglong _Size;
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x598);
  if (lVar3 != param_2) {
    if (param_2 == 0) {
      param_2 = *(longlong *)(param_1 + 0x738);
    }
    lVar3 = ssl_cert_dup(*(undefined8 *)(param_2 + 0x130));
    if (lVar3 != 0) {
      iVar2 = custom_exts_copy_flags(lVar3 + 0x1e8,*(longlong *)(param_1 + 0x488) + 0x1e8);
      if (iVar2 == 0) {
        ssl_cert_free(lVar3);
      }
      else {
        ssl_cert_free(*(undefined8 *)(param_1 + 0x488));
        _Size = *(ulonglong *)(param_1 + 0x4e0);
        *(longlong *)(param_1 + 0x488) = lVar3;
        if (_Size < 0x21) {
          lVar3 = *(longlong *)(param_1 + 0x598);
          if ((lVar3 != 0) && (_Size == *(ulonglong *)(lVar3 + 0x158))) {
            iVar2 = _guard_xfg_dispatch_icall_nop
                              ((void *)(param_1 + 0x4e8),(void *)(lVar3 + 0x160),_Size);
            if (iVar2 == 0) {
              *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(param_2 + 0x158);
              uVar1 = *(undefined8 *)(param_2 + 0x168);
              *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_2 + 0x160);
              *(undefined8 *)(param_1 + 0x4f0) = uVar1;
              uVar1 = *(undefined8 *)(param_2 + 0x178);
              *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_2 + 0x170);
              *(undefined8 *)(param_1 + 0x500) = uVar1;
            }
          }
          LOCK();
          *(int *)(param_2 + 0x94) = *(int *)(param_2 + 0x94) + 1;
          UNLOCK();
          SSL_CTX_free(*(undefined8 *)(param_1 + 0x598));
          *(longlong *)(param_1 + 0x598) = param_2;
          return param_2;
        }
      }
    }
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 143ca5ef0 SSL_set_alpn_protos body=171 status=ok
// SIG undefined SSL_set_alpn_protos(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_set_alpn_protos(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143ca5f05;
  CRYPTO_free(*(undefined8 *)(param_1 + 0x6c0),"ssl\\ssl_lib.c",0xacc);
  lVar1 = CRYPTO_memdup(param_2,param_3 & 0xffffffff,"ssl\\ssl_lib.c",0xacd);
  *(longlong *)(param_1 + 0x6c0) = lVar1;
  if (lVar1 == 0) {
    ERR_put_error(0x14,0x158,0x41,"ssl\\ssl_lib.c",0xacf,uVar2);
    return 1;
  }
  *(ulonglong *)(param_1 + 0x6c8) = param_3 & 0xffffffff;
  return 0;
}



// FUNCTION 143ca5fa0 SSL_set_bio body=297 status=ok
// SIG undefined SSL_set_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set_bio(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 == *(longlong *)(param_1 + 0x10)) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar1 = *(longlong *)(param_1 + 0x18);
    }
    else {
      lVar1 = BIO_next();
    }
    if (param_3 == lVar1) {
      return;
    }
  }
  if ((param_2 != 0) && (param_2 == param_3)) {
    BIO_up_ref(param_2);
  }
  if (param_2 == *(longlong *)(param_1 + 0x10)) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar2 = BIO_pop(*(undefined8 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = uVar2;
    }
    BIO_free_all(*(undefined8 *)(param_1 + 0x18));
    *(longlong *)(param_1 + 0x18) = param_3;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar2 = BIO_push(*(longlong *)(param_1 + 0x20),param_3);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      return;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar1 = *(longlong *)(param_1 + 0x18);
    }
    else {
      lVar1 = BIO_next();
    }
    if (param_3 == lVar1) {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar3 = *(longlong *)(param_1 + 0x18);
      }
      else {
        lVar3 = BIO_next();
      }
      if (lVar1 != lVar3) {
        BIO_free_all(*(undefined8 *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = param_2;
        return;
      }
    }
    BIO_free_all(*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = param_2;
    SSL_set0_wbio(param_1,param_3);
  }
  return;
}



// FUNCTION 143ca60d0 FUN_143ca60d0 body=44 status=ok
// SIG undefined FUN_143ca60d0(void)

undefined8 FUN_143ca60d0(longlong param_1,ulonglong param_2)

{
  if (param_2 == 1) {
    *(undefined8 *)(param_1 + 0x1700) = 0;
    return 1;
  }
  if (param_2 < 0x4001) {
    *(ulonglong *)(param_1 + 0x1700) = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 143ca6100 SSL_set_cipher_list body=135 status=ok
// SIG undefined SSL_set_cipher_list(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_set_cipher_list(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = ssl_create_cipher_list
                    (**(undefined8 **)(param_1 + 0x598),*(undefined8 *)(param_1 + 0x120),
                     param_1 + 0x110,param_1 + 0x118,param_2,*(undefined8 *)(param_1 + 0x488),
                     0x143ca610a);
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (lVar2 != 0) {
    iVar1 = OPENSSL_sk_num(lVar2);
    if (iVar1 != 0) {
      return 1;
    }
    ERR_put_error(0x14,0x10f,0xb9,"ssl\\ssl_lib.c",CONCAT44(uVar3,0x9ee));
  }
  return 0;
}



// FUNCTION 143ca6190 SSL_set_ct_validation_callback body=174 status=ok
// SIG undefined SSL_set_ct_validation_callback(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_set_ct_validation_callback(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143ca61a5;
  if (param_2 != 0) {
    iVar1 = SSL_CTX_has_client_custom_ext(*(undefined8 *)(param_1 + 0x598),0x12);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x80))(param_1,0x41,1);
      if (iVar1 != 0) goto LAB_143ca621b;
    }
    else {
      ERR_put_error(0x14,399,0xce,"ssl\\ssl_lib.c",0x1293,uVar2);
    }
    return 0;
  }
LAB_143ca621b:
  *(undefined8 *)(param_1 + 0x720) = param_3;
  *(longlong *)(param_1 + 0x718) = param_2;
  return 1;
}



// FUNCTION 143ca6240 FUN_143ca6240 body=29 status=ok
// SIG undefined FUN_143ca6240(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143ca6240(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0x5b0);
  return;
}



// FUNCTION 143ca6260 SSL_set_fd body=335 status=ok
// SIG undefined SSL_set_fd(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_set_fd(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143ca6275;
  uVar1 = BIO_s_socket();
  lVar2 = BIO_new(uVar1);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xc0,7,"ssl\\ssl_lib.c",0x539,uVar5);
    return 0;
  }
  BIO_int_ctrl(lVar2,0x68,0,param_2);
  if (lVar2 == *(longlong *)(param_1 + 0x10)) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar3 = *(longlong *)(param_1 + 0x18);
    }
    else {
      lVar3 = BIO_next();
    }
    if (lVar2 == lVar3) {
      return 1;
    }
  }
  BIO_up_ref(lVar2);
  if (lVar2 == *(longlong *)(param_1 + 0x10)) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar1 = BIO_pop(*(undefined8 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = uVar1;
    }
    BIO_free_all(*(undefined8 *)(param_1 + 0x18));
    *(longlong *)(param_1 + 0x18) = lVar2;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar1 = BIO_push(*(longlong *)(param_1 + 0x20),lVar2);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar3 = *(longlong *)(param_1 + 0x18);
    }
    else {
      lVar3 = BIO_next();
    }
    if (lVar2 == lVar3) {
      lVar3 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar4 = *(longlong *)(param_1 + 0x18);
      }
      else {
        lVar4 = BIO_next();
      }
      if (lVar3 != lVar4) {
        BIO_free_all(*(undefined8 *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = lVar2;
        return 1;
      }
    }
    BIO_free_all(*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = lVar2;
    SSL_set0_wbio(param_1,lVar2);
  }
  return 1;
}



// FUNCTION 143ca63b0 FUN_143ca63b0 body=13 status=ok
// SIG undefined FUN_143ca63b0(void)

undefined8 FUN_143ca63b0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1718) = param_2;
  return 1;
}



// FUNCTION 143ca63c0 SSL_set_verify body=19 status=ok
// SIG undefined SSL_set_verify(void)

void SSL_set_verify(longlong param_1,undefined4 param_2,longlong param_3)

{
  *(undefined4 *)(param_1 + 0x558) = param_2;
  if (param_3 != 0) {
    *(longlong *)(param_1 + 0x560) = param_3;
  }
  return;
}



// FUNCTION 143ca63e0 SSL_shutdown body=187 status=ok
// SIG undefined SSL_shutdown(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_shutdown(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong local_38 [3];
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143ca63ec;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar4 = 0x807;
    uVar3 = 0x114;
  }
  else {
    iVar1 = FSlateAccessibleWidget::GetId();
    if (iVar1 == 0) {
      if ((*(uint *)(param_1 + 0x5c8) & 0x100) != 0) {
        lVar2 = ASYNC_get_current_job();
        if (lVar2 == 0) {
          local_20 = 2;
          local_18 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50);
          local_38[0] = param_1;
          uVar3 = ssl_start_async_job(param_1,local_38,ssl_io_intern);
          return uVar3;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000143ca6468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x50))(param_1);
      return uVar3;
    }
    uVar4 = 0x818;
    uVar3 = 0x197;
  }
  ERR_put_error(0x14,0xe0,uVar3,"ssl\\ssl_lib.c",uVar4);
  return 0xffffffff;
}



// FUNCTION 143ca64a0 SSL_write body=85 status=ok
// SIG undefined SSL_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int SSL_write(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_res20 [2];
  
  if (param_3 < 0) {
    ERR_put_error(0x14,0xd0,0x10f,"ssl\\ssl_lib.c",0x79c);
    return -1;
  }
  iVar1 = ssl_write_internal(param_1,param_2,(longlong)param_3,local_res20);
  if (0 < iVar1) {
    iVar1 = local_res20[0];
  }
  return iVar1;
}



// FUNCTION 143ca6500 bytes_to_cipher_list body=802 status=ok
// SIG undefined bytes_to_cipher_list(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
bytes_to_cipher_list
          (undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,int param_5,
          int param_6)

{
  ulonglong uVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  undefined4 *puVar7;
  ulonglong _Size;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  iVar2 = param_5;
  if (param_2[1] == 0) {
    if (param_6 != 0) {
      ossl_statem_fatal(param_1,0x2f,0x207,0xb7,"ssl\\ssl_lib.c",0x149f);
      return 0;
    }
    uVar9 = 0x14a1;
    uVar8 = 0xb7;
LAB_143ca65e9:
    ERR_put_error(0x14,0x207,uVar8,"ssl\\ssl_lib.c",uVar9);
    return 0;
  }
  _Size = (ulonglong)(param_5 != 0) + 2;
  if ((ulonglong)param_2[1] % _Size != 0) {
    if (param_6 != 0) {
      ossl_statem_fatal(param_1,0x32,0x207,0x97,"ssl\\ssl_lib.c",0x14a8);
      return 0;
    }
    uVar9 = 0x14ab;
    uVar8 = 0x97;
    goto LAB_143ca65e9;
  }
  lVar4 = OPENSSL_sk_new_null();
  lVar5 = OPENSSL_sk_new_null();
  if ((lVar4 == 0) || (lVar5 == 0)) {
    if (param_6 == 0) {
      uVar8 = 0x14b6;
      goto LAB_143ca67db;
    }
    uVar10 = 0x14b4;
  }
  else {
LAB_143ca6640:
    do {
      do {
        do {
          uVar1 = param_2[1];
          if (uVar1 < _Size) {
            if (uVar1 == 0) {
              if (param_3 == (longlong *)0x0) {
                OPENSSL_sk_free(lVar4);
              }
              else {
                *param_3 = lVar4;
              }
              if (param_4 != (longlong *)0x0) {
                *param_4 = lVar5;
                return 1;
              }
              OPENSSL_sk_free(lVar5);
              return 1;
            }
            if (param_6 == 0) {
              uVar8 = 0x14d6;
              uVar9 = 0x10f;
              goto LAB_143ca67e1;
            }
            ossl_statem_fatal(param_1,0x32,0x207,0x10f,"ssl\\ssl_lib.c",0x14d4);
            goto LAB_143ca67f0;
          }
          _Src = (void *)*param_2;
          _guard_xfg_dispatch_icall_nop(&param_5,_Src,_Size);
          *param_2 = (longlong)_Src + _Size;
          param_2[1] = uVar1 - _Size;
        } while ((iVar2 != 0) && ((char)param_5 != '\0'));
        puVar7 = &param_5;
        if (iVar2 != 0) {
          puVar7 = (undefined4 *)((longlong)&param_5 + 1);
        }
        piVar6 = (int *)ssl_get_cipher_by_char(param_1,puVar7,1);
      } while (piVar6 == (int *)0x0);
      if (*piVar6 != 0) {
        iVar3 = OPENSSL_sk_push(lVar4,piVar6);
        if (iVar3 == 0) break;
        if (*piVar6 != 0) goto LAB_143ca6640;
      }
      iVar3 = OPENSSL_sk_push(lVar5,piVar6);
    } while (iVar3 != 0);
    if (param_6 == 0) {
      uVar8 = 0x14cc;
LAB_143ca67db:
      uVar9 = 0x41;
LAB_143ca67e1:
      ERR_put_error(0x14,0x207,uVar9,"ssl\\ssl_lib.c",uVar8);
      goto LAB_143ca67f0;
    }
    uVar10 = 0x14ca;
  }
  ossl_statem_fatal(param_1,0x50,0x207,0x41,"ssl\\ssl_lib.c",uVar10);
LAB_143ca67f0:
  OPENSSL_sk_free(lVar4);
  OPENSSL_sk_free(lVar5);
  return 0;
}



// FUNCTION 143ca6830 clear_ciphers body=159 status=ok
// SIG undefined clear_ciphers(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void clear_ciphers(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x430) != 0) {
    EVP_CIPHER_CTX_free();
    *(undefined8 *)(param_1 + 0x430) = 0;
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    EVP_CIPHER_CTX_free();
    *(undefined8 *)(param_1 + 0x460) = 0;
  }
  COMP_CTX_free(*(undefined8 *)(param_1 + 0x458));
  *(undefined8 *)(param_1 + 0x458) = 0;
  COMP_CTX_free(*(undefined8 *)(param_1 + 0x450));
  *(undefined8 *)(param_1 + 0x450) = 0;
  EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x448));
  *(undefined8 *)(param_1 + 0x448) = 0;
  EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x478));
  *(undefined8 *)(param_1 + 0x478) = 0;
  return;
}



// FUNCTION 143ca68d0 ct_move_scts body=217 status=ok
// SIG undefined ct_move_scts(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ct_move_scts(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143ca68f0;
  iVar3 = 0;
  if (*param_1 == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      ERR_put_error(0x14,0x159,0x41,"ssl\\ssl_lib.c",0x11e7,uVar4);
      return -1;
    }
  }
  lVar2 = OPENSSL_sk_pop(param_2);
  while( true ) {
    if (lVar2 == 0) {
      return iVar3;
    }
    iVar1 = SCT_set_source(lVar2,param_3);
    if ((iVar1 != 1) || (iVar1 = OPENSSL_sk_push(*param_1,lVar2), iVar1 < 1)) break;
    iVar3 = iVar3 + 1;
    lVar2 = OPENSSL_sk_pop(param_2);
  }
  if (lVar2 != 0) {
    OPENSSL_sk_push(param_2,lVar2);
  }
  return -1;
}



// FUNCTION 143ca69b0 dane_final body=100 status=ok
// SIG undefined dane_final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dane_final(longlong param_1)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 8),tlsa_free);
  *(undefined8 *)(param_1 + 8) = 0;
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x10),X509_free);
  *(undefined8 *)(param_1 + 0x10) = 0;
  X509_free(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0xffffffffffffffff;
  return;
}



// FUNCTION 143ca6a20 nss_keylog_int body=452 status=ok
// SIG undefined nss_keylog_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
nss_keylog_int(char *param_1,longlong param_2,longlong param_3,ulonglong param_4,longlong param_5,
              ulonglong param_6)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x598) + 0x380) == 0) {
    return 1;
  }
  uVar2 = 0;
  cVar1 = *param_1;
  uVar8 = 0;
  uVar9 = uVar8;
  pcVar5 = param_1;
  while ((cVar1 != '\0' && (uVar2 = (uint)uVar9, uVar2 < 0x80000000))) {
    pcVar5 = pcVar5 + 1;
    uVar2 = uVar2 + 1;
    cVar1 = *pcVar5;
    uVar9 = (ulonglong)uVar2;
  }
  lVar3 = CRYPTO_malloc((param_4 + param_6) * 2 + 3 + (ulonglong)(uVar2 & 0x7fffffff),
                        "ssl\\ssl_lib.c",0x13fd);
  if (lVar3 == 0) {
    ossl_statem_fatal(param_2,0x50,500,0x41,"ssl\\ssl_lib.c",0x13ff);
    uVar4 = 0;
  }
  else {
    lVar6 = lVar3 - (longlong)param_1;
    do {
      cVar1 = *param_1;
      param_1[lVar6] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    puVar7 = (undefined1 *)(lVar3 + (ulonglong)(uVar2 & 0x7fffffff));
    *puVar7 = 0x20;
    pcVar5 = puVar7 + 1;
    uVar9 = uVar8;
    if (param_4 != 0) {
      do {
        sprintf(pcVar5,"%02x",(ulonglong)*(byte *)(uVar9 + param_3));
        pcVar5 = pcVar5 + 2;
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_4);
    }
    *pcVar5 = ' ';
    pcVar5 = pcVar5 + 1;
    if (param_6 != 0) {
      do {
        sprintf(pcVar5,"%02x",(ulonglong)*(byte *)(uVar8 + param_5));
        pcVar5 = pcVar5 + 2;
        uVar8 = uVar8 + 1;
      } while (uVar8 < param_6);
    }
    *pcVar5 = '\0';
    (**(code **)(*(longlong *)(param_2 + 0x598) + 0x380))(param_2,lVar3);
    CRYPTO_free(lVar3,"ssl\\ssl_lib.c",0x1414);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 143ca6bf0 ssl_cache_cipherlist body=666 status=ok
// SIG undefined ssl_cache_cipherlist(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cache_cipherlist(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (param_2[1] == 0) {
    ossl_statem_fatal(param_1,0x2f,0x208,0xb7,"ssl\\ssl_lib.c",0x1445);
    return 0;
  }
  uVar8 = (ulonglong)(param_3 != 0) + 2;
  if ((ulonglong)param_2[1] % uVar8 == 0) {
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2a8),"ssl\\ssl_lib.c",0x144f);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2a8) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b0) = 0;
    if (param_3 == 0) {
      lVar5 = *(longlong *)(param_1 + 0xa8);
      CRYPTO_free(*(undefined8 *)(lVar5 + 0x2a8),
                  "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1a4);
      *(undefined8 *)(lVar5 + 0x2a8) = 0;
      *(undefined8 *)(lVar5 + 0x2b0) = 0;
      lVar2 = param_2[1];
      if (lVar2 != 0) {
        lVar4 = CRYPTO_memdup(*param_2,lVar2,
                              "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1ad);
        *(longlong *)(lVar5 + 0x2a8) = lVar4;
        if (lVar4 == 0) {
          uVar10 = 0x147d;
          uVar9 = 0x44;
          goto LAB_143ca6e6b;
        }
        *(longlong *)(lVar5 + 0x2b0) = lVar2;
      }
    }
    else {
      pcVar6 = (char *)*param_2;
      lVar5 = param_2[1];
      puVar3 = (undefined2 *)
               CRYPTO_malloc(((ulonglong)param_2[1] / uVar8) * 2,"ssl\\ssl_lib.c",0x1460);
      *(undefined2 **)(*(longlong *)(param_1 + 0xa8) + 0x2a8) = puVar3;
      if (puVar3 == (undefined2 *)0x0) {
        uVar10 = 0x1464;
        uVar9 = 0x41;
LAB_143ca6e6b:
        uVar7 = 0x50;
        goto LAB_143ca6e73;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b0) = 0;
      for (; lVar5 != 0; lVar5 = lVar5 + -3) {
        if (lVar5 - 1U < 2) {
          ossl_statem_fatal(param_1,0x32,0x208,0xf0,"ssl\\ssl_lib.c",0x1471);
          CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2a8),"ssl\\ssl_lib.c",0x1472
                     );
          *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2a8) = 0;
          *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b0) = 0;
          return 0;
        }
        if (*pcVar6 == '\0') {
          *puVar3 = *(undefined2 *)(pcVar6 + 1);
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2b0);
          *plVar1 = *plVar1 + 2;
        }
        pcVar6 = pcVar6 + 3;
        puVar3 = puVar3 + 1;
      }
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0x32;
    uVar10 = 0x144b;
    uVar9 = 0x97;
LAB_143ca6e73:
    ossl_statem_fatal(param_1,uVar7,0x208,uVar9,"ssl\\ssl_lib.c",uVar10);
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 143ca6e90 FUN_143ca6e90 body=136 status=ok
// SIG undefined FUN_143ca6e90(void)

undefined8 FUN_143ca6e90(uint param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = false;
  bVar2 = false;
  if ((param_1 == 0x100) || ((param_1 & 0xffffff00) == 0xfe00)) {
    bVar1 = true;
  }
  if ((param_2 == 0x100) || ((param_2 & 0xffffff00) == 0xfe00)) {
    bVar2 = true;
  }
  if (bVar1) {
    param_1 = param_2;
    if (bVar2) {
      return 1;
    }
  }
  else if (!bVar2) {
    uVar3 = 0x300;
    if (param_1 != 0) {
      uVar3 = param_1;
    }
    uVar4 = 0x304;
    if (param_2 != 0) {
      uVar4 = param_2;
    }
    if (uVar3 == 0x300) {
      return 1;
    }
    if (0x300 < (int)uVar3) {
      return 1;
    }
    if (0x2ff < (int)uVar4) {
      return 0;
    }
    return 1;
  }
  if (param_1 == 0) {
    return 1;
  }
  return 0;
}



// FUNCTION 143ca6f20 ssl_check_srvr_ecc_cert_and_alg body=93 status=ok
// SIG undefined ssl_check_srvr_ecc_cert_and_alg(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_check_srvr_ecc_cert_and_alg(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0xa8) + 0x238) + 0x20) & 8) != 0) {
    cVar1 = X509_get_key_usage();
    if (-1 < cVar1) {
      ERR_put_error(0x14,0x117,0x13e,"ssl\\ssl_lib.c",0xd00);
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143ca6fc0 ssl_do_handshake_intern body=27 status=ok
// SIG undefined ssl_do_handshake_intern(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_do_handshake_intern(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ca6fd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(*param_1);
  return;
}



// FUNCTION 143ca6fe0 ssl_free_wbio_buffer body=66 status=ok
// SIG undefined ssl_free_wbio_buffer(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_free_wbio_buffer(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = BIO_pop(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    BIO_free(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return 1;
}



// FUNCTION 143ca7030 ssl_get_ciphers_by_id body=41 status=ok
// SIG undefined ssl_get_ciphers_by_id(void)

longlong ssl_get_ciphers_by_id(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 == 0) ||
     ((lVar1 = *(longlong *)(param_1 + 0x118), lVar1 == 0 &&
      ((*(longlong *)(param_1 + 0x598) == 0 ||
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x10), lVar1 == 0)))))) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143ca7060 ssl_get_max_send_fragment body=46 status=ok
// SIG undefined ssl_get_max_send_fragment(void)

int ssl_get_max_send_fragment(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x508) != 0) &&
     (cVar1 = *(char *)(*(longlong *)(param_1 + 0x508) + 0x1b0), (byte)(cVar1 - 1U) < 4)) {
    return 0x200 << (cVar1 - 1U & 0x1f);
  }
  return *(int *)(param_1 + 0x5f0);
}



// FUNCTION 143ca7090 ssl_get_server_cert_serverinfo body=54 status=ok
// SIG undefined ssl_get_server_cert_serverinfo(void)

undefined8 ssl_get_server_cert_serverinfo(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0);
  *param_3 = 0;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x18) != 0)) {
    *param_2 = *(longlong *)(lVar1 + 0x18);
    *param_3 = *(undefined8 *)(lVar1 + 0x20);
    return 1;
  }
  return 0;
}



// FUNCTION 143ca70d0 ssl_get_split_send_fragment body=71 status=ok
// SIG undefined ssl_get_split_send_fragment(void)

ulonglong ssl_get_split_send_fragment(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  if (((*(longlong *)(param_1 + 0x508) == 0) ||
      (cVar1 = *(char *)(*(longlong *)(param_1 + 0x508) + 0x1b0), 3 < (byte)(cVar1 - 1U))) ||
     (uVar2 = (ulonglong)(uint)(0x200 << (cVar1 - 1U & 0x1f)),
     *(ulonglong *)(param_1 + 0x5e8) <= uVar2)) {
    uVar2 = *(ulonglong *)(param_1 + 0x5e8) & 0xffffffff;
    if (*(ulonglong *)(param_1 + 0x5f0) < *(ulonglong *)(param_1 + 0x5e8)) {
      uVar2 = *(ulonglong *)(param_1 + 0x5f0) & 0xffffffff;
    }
  }
  return uVar2;
}



// FUNCTION 143ca7120 ssl_handshake_hash body=244 status=ok
// SIG undefined ssl_handshake_hash(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ssl_handshake_hash(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong *param_4
                           )

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar7 = 1;
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8);
  uVar3 = EVP_MD_CTX_md(uVar6);
  iVar1 = EVP_MD_size(uVar3);
  if ((iVar1 < 0) || (param_3 < (ulonglong)(longlong)iVar1)) {
    uVar6 = CONCAT44(uVar7,0x1139);
    lVar4 = 0;
  }
  else {
    lVar4 = EVP_MD_CTX_new();
    lVar5 = 0;
    if (lVar4 == 0) goto LAB_143ca71ed;
    iVar2 = EVP_MD_CTX_copy_ex(lVar4,uVar6);
    if (iVar2 != 0) {
      iVar2 = EVP_DigestFinal_ex(lVar4,param_2,0);
      if (0 < iVar2) {
        *param_4 = (longlong)iVar1;
        lVar5 = 1;
        goto LAB_143ca71ed;
      }
    }
    uVar6 = CONCAT44(uVar7,0x1144);
  }
  ossl_statem_fatal(param_1,0x50,0x230,0x44,"ssl\\ssl_lib.c",uVar6);
  lVar5 = 0;
LAB_143ca71ed:
  EVP_MD_CTX_free(lVar4);
  return lVar5;
}



// FUNCTION 143ca7220 ssl_init_wbio_buffer body=176 status=ok
// SIG undefined ssl_init_wbio_buffer(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_init_wbio_buffer(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143ca722c;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    return 1;
  }
  uVar2 = BIO_f_buffer();
  lVar3 = BIO_new(uVar2);
  if (lVar3 != 0) {
    iVar1 = BIO_int_ctrl(lVar3,0x75,1);
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 0x20) = lVar3;
      uVar4 = BIO_push(lVar3,*(undefined8 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      return 1;
    }
  }
  BIO_free(lVar3);
  ERR_put_error(0x14,0xb8,7,"ssl\\ssl_lib.c",0xf23,uVar4);
  return 0;
}



// FUNCTION 143ca72d0 ssl_io_intern body=83 status=ok
// SIG undefined ssl_io_intern(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_io_intern(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[3];
  if ((iVar1 != 0) && (iVar1 != 1)) {
    if (iVar1 != 2) {
      return 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x000143ca730d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)param_1[4])(lVar2);
    return uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000143ca731f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)param_1[4])(lVar2,param_1[1],param_1[2],lVar2 + 0x16d8);
  return uVar3;
}



// FUNCTION 143ca7330 ssl_log_rsa_client_key_exchange body=110 status=ok
// SIG undefined ssl_log_rsa_client_key_exchange(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ssl_log_rsa_client_key_exchange
          (undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_3 < 8) {
    ossl_statem_fatal(param_1,0x50,499,0x44,"ssl\\ssl_lib.c",0x1421);
    return 0;
  }
  uVar1 = nss_keylog_int(&DAT_145d473d4,param_1,param_2,8,param_4,param_5,0x143ca733a);
  return uVar1;
}



// FUNCTION 143ca73a0 ssl_log_secret body=65 status=ok
// SIG undefined ssl_log_secret(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_log_secret(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  nss_keylog_int(param_2,param_1,*(longlong *)(param_1 + 0xa8) + 0xb8,0x20,param_3,param_4,
                 0x143ca73aa);
  return;
}



// FUNCTION 143ca73f0 ssl_read_internal body=300 status=ok
// SIG undefined ssl_read_internal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ssl_read_internal(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143ca740a;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    ERR_put_error(0x14,0x20b,0x114,"ssl\\ssl_lib.c",0x6b1);
    uVar1 = 0xffffffff;
  }
  else {
    if ((*(byte *)(param_1 + 0x44) & 2) == 0) {
      if ((*(int *)(param_1 + 0x84) != 1) && (*(int *)(param_1 + 0x84) != 8)) {
        ossl_statem_check_finish_init(param_1,0);
        if (((*(uint *)(param_1 + 0x5c8) & 0x100) != 0) &&
           (lVar2 = ASYNC_get_current_job(), lVar2 == 0)) {
          local_20 = 0;
          local_18 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x38);
          local_38 = param_1;
          local_30 = param_2;
          local_28 = param_3;
          uVar1 = ssl_start_async_job(param_1,&local_38,ssl_io_intern);
          *param_4 = *(undefined8 *)(param_1 + 0x16d8);
          return uVar1;
        }
        uVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x38))(param_1,param_2,param_3,param_4);
        return uVar1;
      }
      ERR_put_error(0x14,0x20b,0x42,"ssl\\ssl_lib.c",0x6bc);
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143ca7520 ssl_replace_hash body=118 status=ok
// SIG undefined ssl_replace_hash(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ssl_replace_hash(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  EVP_MD_CTX_free(*param_1);
  *param_1 = 0;
  lVar2 = EVP_MD_CTX_new();
  *param_1 = lVar2;
  if (lVar2 != 0) {
    if (param_2 != 0) {
      iVar1 = EVP_DigestInit_ex(lVar2,param_2,0);
      if (iVar1 < 1) goto LAB_143ca757a;
    }
    return *param_1;
  }
LAB_143ca757a:
  EVP_MD_CTX_free(*param_1);
  *param_1 = 0;
  return 0;
}



// FUNCTION 143ca75a0 ssl_session_cmp body=68 status=ok
// SIG undefined ssl_session_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ssl_session_cmp(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_1 == *param_2) && (*(size_t *)(param_1 + 0x24) == *(size_t *)(param_2 + 0x24))) {
    iVar1 = _guard_xfg_dispatch_icall_nop(param_1 + 0x26,param_2 + 0x26,*(size_t *)(param_1 + 0x24))
    ;
    return iVar1;
  }
  return 1;
}



// FUNCTION 143ca75f0 ssl_session_hash body=91 status=ok
// SIG undefined ssl_session_hash(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ssl_session_hash(longlong param_1)

{
  undefined4 *_Src;
  undefined4 local_res8 [8];
  
  _Src = (undefined4 *)(param_1 + 0x98);
  if (*(ulonglong *)(param_1 + 0x90) < 4) {
    local_res8[0] = 0;
    _guard_xfg_dispatch_icall_nop(local_res8,_Src,*(ulonglong *)(param_1 + 0x90));
    _Src = local_res8;
  }
  return *_Src;
}



// FUNCTION 143ca7650 ssl_set_masks body=639 status=ok
// SIG undefined ssl_set_masks(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_set_masks(uint *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  lVar1 = *(longlong *)(param_1 + 0x2a);
  lVar2 = *(longlong *)(param_1 + 0x122);
  if (lVar2 == 0) {
    return;
  }
  uVar5 = 0;
  if (((*(longlong *)(lVar2 + 8) != 0) || (*(longlong *)(lVar2 + 0x10) != 0)) ||
     (bVar4 = false, *(int *)(lVar2 + 0x18) != 0)) {
    bVar4 = true;
  }
  uVar7 = *(uint *)(lVar1 + 0x310) & 1;
  uVar11 = 0;
  uVar6 = uVar11;
  uVar10 = uVar5;
  if ((*(longlong *)(lVar2 + 0x110) != 0) && (*(longlong *)(lVar2 + 0x118) != 0)) {
    uVar6 = 0x80;
    uVar10 = 0x10;
  }
  if ((*(longlong *)(lVar2 + 0xe8) == 0) || (uVar9 = 1, *(longlong *)(lVar2 + 0xf0) == 0)) {
    uVar9 = uVar11;
  }
  uVar8 = 0x10;
  uVar3 = 0x80;
  if (uVar9 == 0) {
    uVar8 = uVar10;
    uVar3 = uVar6;
  }
  if ((*(longlong *)(lVar2 + 0xc0) == 0) || (uVar6 = 1, *(longlong *)(lVar2 + 200) == 0)) {
    uVar6 = uVar11;
  }
  uVar9 = uVar3 | 0x20;
  uVar10 = 0x10;
  if (uVar6 == 0) {
    uVar9 = uVar3;
    uVar10 = uVar8;
  }
  uVar6 = uVar10 | 1;
  if (uVar7 == 0) {
    uVar6 = uVar10;
  }
  uVar10 = uVar6 | 2;
  if (!bVar4) {
    uVar10 = uVar6;
  }
  if (uVar7 == 0) {
    if (((*(longlong *)(lVar2 + 0x48) == 0) || (*(longlong *)(lVar2 + 0x50) == 0)) ||
       ((*(uint *)(lVar1 + 0x314) & 0x100) == 0)) goto LAB_143ca77a9;
    uVar6 = *param_1;
    if ((*param_1 & 0xffffff00) != 0x300) {
      uVar6 = uVar11;
    }
    if (uVar6 != 0x303) goto LAB_143ca77a9;
  }
  uVar9 = uVar9 | 1;
LAB_143ca77a9:
  uVar6 = uVar9 | 2;
  if ((*(uint *)(lVar1 + 0x318) & 1) == 0) {
    uVar6 = uVar9;
  }
  uVar7 = uVar6 | 4;
  if ((*(uint *)(lVar1 + 0x31c) & 1) != 0) {
    uVar9 = X509_get_key_usage(*(undefined8 *)(lVar2 + 0x98));
    if ((*(byte *)(lVar1 + 0x31c) & 2) != 0) {
      uVar11 = uVar9 & 0x80;
    }
    if (uVar11 != 0) {
      uVar7 = uVar6 | 0xc;
    }
  }
  if ((uVar7 & 8) == 0) {
    if (((*(longlong *)(*(longlong *)(param_1 + 0x122) + 0x138) != 0) &&
        (*(longlong *)(*(longlong *)(param_1 + 0x122) + 0x140) != 0)) &&
       ((*(uint *)(lVar1 + 0x32c) & 0x100) != 0)) {
      uVar6 = *param_1;
      if ((*param_1 & 0xffffff00) != 0x300) {
        uVar6 = uVar5;
      }
      if (uVar6 == 0x303) {
        uVar7 = uVar7 | 8;
      }
    }
    if ((((uVar7 & 8) == 0) && (*(longlong *)(*(longlong *)(param_1 + 0x122) + 0x160) != 0)) &&
       ((*(longlong *)(*(longlong *)(param_1 + 0x122) + 0x168) != 0 &&
        ((*(uint *)(lVar1 + 0x330) & 0x100) != 0)))) {
      uVar6 = *param_1;
      if ((*param_1 & 0xffffff00) != 0x300) {
        uVar6 = uVar5;
      }
      if (uVar6 == 0x303) {
        uVar7 = uVar7 | 8;
      }
    }
  }
  uVar6 = (uVar10 & 1) * 0x40 + 0xc | uVar10;
  uVar5 = uVar6 | 0x100;
  if ((uVar10 & 2) == 0) {
    uVar5 = uVar6;
  }
  *(uint *)(*(longlong *)(param_1 + 0x2a) + 0x334) = uVar5 | 0x80;
  *(uint *)(*(longlong *)(param_1 + 0x2a) + 0x338) = uVar7 | 0x10;
  return;
}



// FUNCTION 143ca78d0 ssl_start_async_job body=264 status=ok
// SIG undefined ssl_start_async_job(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ssl_start_async_job(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  undefined8 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x16d0);
  if (lVar2 == 0) {
    lVar2 = ASYNC_WAIT_CTX_new();
    *(longlong *)(param_1 + 0x16d0) = lVar2;
    if (lVar2 == 0) {
      return 0xffffffff;
    }
  }
  iVar1 = ASYNC_start_job(param_1 + 0x16c8,lVar2,local_res8,param_3,param_2,0x28);
  if (iVar1 == 0) {
    uVar4 = 0x685;
    uVar3 = 0x195;
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x28) = 6;
      return 0xffffffff;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x28) = 5;
      return 0xffffffff;
    }
    if (iVar1 == 3) {
      *(undefined8 *)(param_1 + 0x16c8) = 0;
      return local_res8[0];
    }
    uVar4 = 0x692;
    uVar3 = 0x44;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  ERR_put_error(0x14,0x185,uVar3,"ssl\\ssl_lib.c",uVar4);
  return 0xffffffff;
}



// FUNCTION 143ca79e0 ssl_undefined_void_function body=52 status=ok
// SIG undefined ssl_undefined_void_function(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_undefined_void_function(void)

{
  ERR_put_error(0x14,0xf4,0x42,"ssl\\ssl_lib.c",0xe13);
  return 0;
}



// FUNCTION 143ca7a20 ssl_update_cache body=404 status=ok
// SIG undefined ssl_update_cache(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_update_cache(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if ((*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x90) != 0) &&
     (((*(int *)(param_1 + 0x38) == 0 || (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0xb8) != 0)
       ) || ((*(byte *)(param_1 + 0x558) & 1) == 0)))) {
    lVar4 = *(longlong *)(param_1 + 0x738);
    uVar1 = *(uint *)(lVar4 + 0x48);
    if (((uVar1 & param_2) != 0) &&
       ((*(int *)(param_1 + 200) == 0 ||
        ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0 &&
          (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)))))) {
      if (((uVar1 >> 9 & 1) == 0) &&
         ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
           (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) ||
          (((iVar2 == 0x10000 || (*(int *)(param_1 + 0x38) == 0)) ||
           ((((*(int *)(param_1 + 0x16e0) != 0 && ((*(uint *)(param_1 + 0x5c4) & 0x1000000) == 0))
             || (*(longlong *)(lVar4 + 0x58) != 0)) || ((*(uint *)(param_1 + 0x5c4) & 0x4000) != 0))
           )))))) {
        SSL_CTX_add_session();
        lVar4 = *(longlong *)(param_1 + 0x738);
      }
      if (*(longlong *)(lVar4 + 0x50) != 0) {
        SSL_SESSION_up_ref(*(undefined8 *)(param_1 + 0x508));
        iVar2 = (**(code **)(*(longlong *)(param_1 + 0x738) + 0x50))
                          (param_1,*(undefined8 *)(param_1 + 0x508));
        if (iVar2 == 0) {
          SSL_SESSION_free(*(undefined8 *)(param_1 + 0x508));
        }
      }
    }
    if ((-1 < (char)uVar1) && ((uVar1 & param_2) == param_2)) {
      lVar4 = 0x70;
      if ((param_2 & 1) == 0) {
        lVar4 = 0x7c;
      }
      if ((char)*(undefined4 *)(lVar4 + *(longlong *)(param_1 + 0x738)) == -1) {
        uVar3 = _time64((__time64_t *)0x0);
        SSL_CTX_flush_sessions(*(undefined8 *)(param_1 + 0x738),uVar3 & 0xffffffff);
      }
    }
  }
  return;
}



// FUNCTION 143ca7bc0 ssl_validate_ct body=482 status=ok
// SIG undefined ssl_validate_ct(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ssl_validate_ct(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  uVar6 = 1;
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x508) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0xf8);
  }
  if (((((*(longlong *)(param_1 + 0x718) == 0) || (lVar7 == 0)) || (*(int *)(param_1 + 0x5a8) != 0))
      || ((*(longlong *)(param_1 + 0x5a0) == 0 || (iVar1 = OPENSSL_sk_num(), iVar1 < 2)))) ||
     (((param_1 != -0xd8 &&
       ((iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0xe0)), 0 < iVar1 &&
        (*(char **)(param_1 + 0xf0) != (char *)0x0)))) &&
      ((byte)(**(char **)(param_1 + 0xf0) - 2U) < 2)))) {
    return 1;
  }
  lVar3 = CT_POLICY_EVAL_CTX_new();
  if (lVar3 == 0) {
    uVar4 = CONCAT44(uVar6,0x12eb);
    uVar5 = 0x50;
    uVar6 = 0x41;
  }
  else {
    uVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x5a0),1);
    CT_POLICY_EVAL_CTX_set1_cert(lVar3,lVar7);
    CT_POLICY_EVAL_CTX_set1_issuer(lVar3,uVar4);
    FStringTable::SetOwnerAsset(lVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x1a0));
    uVar4 = USkinnedMeshComponent::GetRefPoseOverride(param_1);
    iVar2 = SSL_SESSION_get_time(uVar4);
    FNULLSceneInterface::SetFXSystem(lVar3,(longlong)iVar2 * 1000);
    uVar4 = SSL_get0_peer_scts(param_1);
    iVar2 = SCT_LIST_validate(uVar4,lVar3);
    if (iVar2 < 0) {
      uVar4 = CONCAT44(uVar6,0x1308);
      uVar6 = 0xd0;
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x718))(lVar3,uVar4,*(undefined8 *)(param_1 + 0x720));
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (iVar2 != 0) goto LAB_143ca7d68;
      uVar4 = CONCAT44(uVar6,0x1311);
      uVar6 = 0xea;
    }
    uVar5 = 0x28;
  }
  ossl_statem_fatal(param_1,uVar5,400,uVar6,"ssl\\ssl_lib.c",uVar4);
LAB_143ca7d68:
  CT_POLICY_EVAL_CTX_free(lVar3);
  if (iVar2 < 1) {
    *(undefined4 *)(param_1 + 0x5a8) = 0x47;
  }
  return iVar2;
}



// FUNCTION 143ca7db0 ssl_write_internal body=356 status=ok
// SIG undefined ssl_write_internal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ssl_write_internal(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143ca7dca;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    ERR_put_error(0x14,0x20c,0x114,"ssl\\ssl_lib.c",0x771);
    uVar1 = 0xffffffff;
  }
  else if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x84) < 0xb) &&
       ((0x502U >> (*(uint *)(param_1 + 0x84) & 0x1f) & 1) != 0)) {
      ERR_put_error(0x14,0x20c,0x42,"ssl\\ssl_lib.c",0x77e);
      uVar1 = 0;
    }
    else {
      ossl_statem_check_finish_init(param_1,1);
      if (((*(uint *)(param_1 + 0x5c8) & 0x100) != 0) &&
         (lVar2 = ASYNC_get_current_job(), lVar2 == 0)) {
        local_20 = 1;
        local_18 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48);
        local_38 = param_1;
        local_30 = param_2;
        local_28 = param_3;
        uVar1 = ssl_start_async_job(param_1,&local_38,ssl_io_intern);
        *param_4 = *(undefined8 *)(param_1 + 0x16d8);
        return uVar1;
      }
      uVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x48))(param_1,param_2,param_3,param_4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 1;
    ERR_put_error(0x14,0x20c,0xcf,"ssl\\ssl_lib.c",0x777);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143ca7f20 tlsa_free body=80 status=ok
// SIG undefined tlsa_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tlsa_free(longlong param_1)

{
  if (param_1 != 0) {
    CRYPTO_free(*(undefined8 *)(param_1 + 8),"ssl\\ssl_lib.c",0xba);
    EVP_PKEY_free(*(undefined8 *)(param_1 + 0x18));
    CRYPTO_free(param_1,"ssl\\ssl_lib.c",0xbc);
  }
  return;
}



// FUNCTION 143ca7f70 FUN_143ca7f70 body=8 status=ok
// SIG undefined FUN_143ca7f70(void)

undefined * FUN_143ca7f70(void)

{
  return &DAT_145d482c0;
}



// FUNCTION 143ca7f80 TLS_client_method body=8 status=ok
// SIG undefined TLS_client_method(void)

undefined * TLS_client_method(void)

{
  return &DAT_145d47ca0;
}



// FUNCTION 143ca7f90 FUN_143ca7f90 body=8 status=ok
// SIG undefined FUN_143ca7f90(void)

undefined * FUN_143ca7f90(void)

{
  return &DAT_145d473e0;
}



// FUNCTION 143ca7fa0 FUN_143ca7fa0 body=8 status=ok
// SIG undefined FUN_143ca7fa0(void)

undefined * FUN_143ca7fa0(void)

{
  return &DAT_145d47840;
}



// FUNCTION 143ca7fc0 FUN_143ca7fc0 body=8 status=ok
// SIG undefined FUN_143ca7fc0(void)

undefined * FUN_143ca7fc0(void)

{
  return &DAT_145d48800;
}



// FUNCTION 143ca7fd0 FUN_143ca7fd0 body=8 status=ok
// SIG undefined FUN_143ca7fd0(void)

undefined * FUN_143ca7fd0(void)

{
  return &DAT_145d48480;
}



// FUNCTION 143ca7fe0 FUN_143ca7fe0 body=8 status=ok
// SIG undefined FUN_143ca7fe0(void)

undefined * FUN_143ca7fe0(void)

{
  return &DAT_145d48640;
}



// FUNCTION 143ca8030 FUN_143ca8030 body=8 status=ok
// SIG undefined FUN_143ca8030(void)

undefined * FUN_143ca8030(void)

{
  return &DAT_145d47a00;
}



// FUNCTION 143ca8050 FUN_143ca8050 body=8 status=ok
// SIG undefined FUN_143ca8050(void)

undefined * FUN_143ca8050(void)

{
  return &DAT_145d47920;
}



// FUNCTION 143ca8080 OPENSSL_init_ssl body=244 status=ok
// SIG undefined OPENSSL_init_ssl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_init_ssl(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_146bc9728 == 0) {
    iVar1 = OPENSSL_init_crypto(param_1 | 0x4c);
    if (iVar1 != 0) {
      iVar2 = CRYPTO_THREAD_run_once(&DAT_146bc972c,ossl_init_ssl_base_ossl_);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = DAT_146bc9734;
      }
      if (iVar1 != 0) {
        if ((param_1 >> 0x14 & 1) != 0) {
          iVar2 = CRYPTO_THREAD_run_once(&DAT_146bc9738,&LAB_143ca81b0);
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = DAT_146bc9744;
          }
          if (iVar1 == 0) {
            return 0;
          }
        }
        if ((param_1 >> 0x15 & 1) != 0) {
          iVar2 = CRYPTO_THREAD_run_once(&DAT_146bc9738,ossl_init_load_ssl_strings_ossl_);
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = DAT_146bc9740;
          }
          if (iVar1 == 0) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  else if (DAT_146bc9748 == 0) {
    DAT_146bc9748 = 1;
    ERR_put_error(0x14,0x156,0x46,"ssl\\ssl_init.c",0xc0,0x143ca8090);
  }
  return 0;
}



// FUNCTION 143ca8180 ossl_init_load_ssl_strings_ossl_ body=43 status=ok
// SIG undefined ossl_init_load_ssl_strings_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_init_load_ssl_strings_ossl_(void)

{
  ERR_load_SSL_strings();
  DAT_146bc973c = 1;
  DAT_146bc9740 = 1;
  return;
}



// FUNCTION 143ca81c0 ossl_init_ssl_base body=539 status=ok
// SIG undefined ossl_init_ssl_base(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_init_ssl_base(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143d003a0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d01010();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d02000();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d013a0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d01b60();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d02730();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d02710();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_aes_256_cbc();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d068e0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d06900();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d08070();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d080d0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a290();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0a3b0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0ac90();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0ad70();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0b8f0();
  EVP_add_cipher(uVar1);
  uVar1 = FUN_143d0c000();
  EVP_add_cipher(uVar1);
  uVar1 = EVP_md5();
  EVP_add_digest(uVar1);
  OBJ_NAME_add("ssl3-md5",0x8001,&DAT_145d489c0);
  uVar1 = FUN_143cffbe0();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha1();
  EVP_add_digest(uVar1);
  OBJ_NAME_add("ssl3-sha1",0x8001,&DAT_145d489c4);
  OBJ_NAME_add("RSA-SHA1-2",0x8001,"RSA-SHA1");
  uVar1 = FUN_143cf0fb0();
  EVP_add_digest(uVar1);
  uVar1 = EVP_sha256();
  EVP_add_digest(uVar1);
  uVar1 = FUN_143cf0fd0();
  EVP_add_digest(uVar1);
  uVar1 = FUN_143cf0fe0();
  EVP_add_digest(uVar1);
  SSL_COMP_get_compression_methods();
  uVar1 = FUN_143cb0420();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  OPENSSL_atexit(ssl_library_stop);
  DAT_146bc9730 = 1;
  return 1;
}



// FUNCTION 143ca83e0 ossl_init_ssl_base_ossl_ body=29 status=ok
// SIG undefined ossl_init_ssl_base_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_init_ssl_base_ossl_(void)

{
  DAT_146bc9734 = ossl_init_ssl_base();
  return;
}



// FUNCTION 143ca8400 ssl_library_stop body=69 status=ok
// SIG undefined ssl_library_stop(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_library_stop(void)

{
  if (DAT_146bc9728 == 0) {
    DAT_146bc9728 = 1;
    if (DAT_146bc9730 != 0) {
      ssl_comp_free_compression_methods_int();
    }
    if (DAT_146bc973c != 0) {
      err_free_strings_int();
      return;
    }
  }
  return;
}



// FUNCTION 143ca8450 SSL_CTX_set0_CA_list body=62 status=ok
// SIG undefined SSL_CTX_set0_CA_list(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set0_CA_list(longlong param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x110),X509_NAME_free);
  *(undefined8 *)(param_1 + 0x110) = param_2;
  return;
}



// FUNCTION 143ca8490 SSL_add_dir_cert_subjects_to_stack body=807 status=ok
// SIG undefined SSL_add_dir_cert_subjects_to_stack(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint SSL_add_dir_cert_subjects_to_stack(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  DWORD DVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_478 [32];
  char *local_458;
  undefined8 local_448;
  longlong local_440;
  undefined1 local_438 [1024];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  uVar14 = 0;
  local_440 = 0;
  pcVar6 = (char *)OPENSSL_DIR_read(&local_440);
  bVar3 = false;
  do {
    if (pcVar6 == (char *)0x0) {
      piVar11 = _errno();
      if (*piVar11 == 0) {
        uVar14 = 1;
      }
      else {
        DVar5 = GetLastError();
        local_458._0_4_ = 0x303;
        ERR_put_error(2,10,DVar5,"ssl\\ssl_cert.c");
        ERR_add_error_data(3,"OPENSSL_DIR_read(&ctx, \'",param_2,&DAT_145d48aac);
        local_458 = (char *)CONCAT44(local_458._4_4_,0x305);
        ERR_put_error(0x14,0xd7,2,"ssl\\ssl_cert.c");
      }
LAB_143ca8758:
      if (local_440 != 0) {
        OPENSSL_DIR_end(&local_440);
      }
      return uVar14;
    }
    cVar1 = *pcVar6;
    pcVar7 = pcVar6;
    for (uVar13 = uVar14; (cVar1 != '\0' && (uVar13 < 0x80000000)); uVar13 = uVar13 + 1) {
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar7;
    }
    iVar4 = _strlen31(param_2);
    if (0x400 < iVar4 + 2 + (uVar13 & 0x7fffffff)) {
      local_458 = (char *)CONCAT44(local_458._4_4_,0x2f4);
      ERR_put_error(0x14,0xd7,0x10e,"ssl\\ssl_cert.c");
      uVar14 = 0;
      goto LAB_143ca8758;
    }
    local_458 = pcVar6;
    iVar4 = BIO_snprintf(local_438,0x400,"%s/%s",param_2);
    if (0x3fe < iVar4 - 1U) goto LAB_143ca8758;
    local_448 = 0;
    uVar8 = OPENSSL_sk_set_cmp_func(param_1,X509_REVOKED_cmp);
    uVar9 = BIO_s_file();
    lVar10 = BIO_new(uVar9);
    bVar2 = bVar3;
    if (lVar10 == 0) {
      local_458 = (char *)CONCAT44(local_458._4_4_,0x2b6);
      ERR_put_error(0x14,0xd8,0x41,"ssl\\ssl_cert.c");
    }
    else {
      iVar4 = BIO_ctrl(lVar10,0x6c,3,local_438);
      if (iVar4 != 0) {
        lVar12 = PEM_read_bio_X509(lVar10,&local_448,0,0);
        while (lVar12 != 0) {
          lVar12 = FBackChannelConnection::GetSocket(local_448);
          if ((lVar12 == 0) || (lVar12 = X509_NAME_dup(lVar12), lVar12 == 0)) goto LAB_143ca85c1;
          iVar4 = OPENSSL_sk_find(param_1,lVar12);
          if (iVar4 < 0) {
            iVar4 = OPENSSL_sk_push(param_1,lVar12);
            if (iVar4 == 0) {
              X509_NAME_free(lVar12);
              goto LAB_143ca85c1;
            }
          }
          else {
            X509_NAME_free(lVar12);
          }
          lVar12 = PEM_read_bio_X509(lVar10,&local_448,0,0);
        }
        ERR_clear_error();
        bVar2 = true;
      }
    }
LAB_143ca85c1:
    BIO_free(lVar10);
    X509_free(local_448);
    OPENSSL_sk_set_cmp_func(param_1,uVar8);
    if (!bVar2) goto LAB_143ca8758;
    pcVar6 = (char *)OPENSSL_DIR_read(&local_440,param_2);
  } while( true );
}



// FUNCTION 143ca87c0 SSL_add_file_cert_subjects_to_stack body=335 status=ok
// SIG undefined SSL_add_file_cert_subjects_to_stack(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_add_file_cert_subjects_to_stack(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 local_res18 [2];
  undefined8 uVar7;
  
  uVar7 = 0x143ca87d8;
  local_res18[0] = 0;
  uVar6 = 1;
  uVar2 = OPENSSL_sk_set_cmp_func(param_1,X509_REVOKED_cmp);
  uVar3 = BIO_s_file();
  lVar4 = BIO_new(uVar3);
  if (lVar4 == 0) {
    ERR_put_error(0x14,0xd8,0x41,"ssl\\ssl_cert.c",0x2b6,uVar7);
  }
  else {
    iVar1 = BIO_ctrl(lVar4,0x6c,3,param_2);
    if (iVar1 != 0) {
      lVar5 = PEM_read_bio_X509(lVar4,local_res18,0,0);
      while (lVar5 != 0) {
        lVar5 = FBackChannelConnection::GetSocket(local_res18[0]);
        if ((lVar5 == 0) || (lVar5 = X509_NAME_dup(lVar5), lVar5 == 0)) goto LAB_143ca8831;
        iVar1 = OPENSSL_sk_find(param_1,lVar5);
        if (iVar1 < 0) {
          iVar1 = OPENSSL_sk_push(param_1,lVar5);
          if (iVar1 == 0) {
            X509_NAME_free(lVar5);
            goto LAB_143ca8831;
          }
        }
        else {
          X509_NAME_free(lVar5);
        }
        lVar5 = PEM_read_bio_X509(lVar4,local_res18,0,0);
      }
      ERR_clear_error();
      goto LAB_143ca8833;
    }
  }
LAB_143ca8831:
  uVar6 = 0;
LAB_143ca8833:
  BIO_free(lVar4);
  X509_free(local_res18[0]);
  OPENSSL_sk_set_cmp_func(param_1,uVar2);
  return uVar6;
}



// FUNCTION 143ca8910 SSL_get0_CA_list body=27 status=ok
// SIG undefined SSL_get0_CA_list(void)

longlong SSL_get0_CA_list(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x5b8);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x110);
  }
  return lVar1;
}



// FUNCTION 143ca8930 SSL_get_client_CA_list body=54 status=ok
// SIG undefined SSL_get_client_CA_list(void)

longlong SSL_get_client_CA_list(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x5b8);
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x110);
    }
    return lVar1;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    return *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x260);
  }
  return 0;
}



// FUNCTION 143ca8970 SSL_get_ex_data_X509_STORE_CTX_idx body=63 status=ok
// SIG undefined SSL_get_ex_data_X509_STORE_CTX_idx(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
SSL_get_ex_data_X509_STORE_CTX_idx
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = CRYPTO_THREAD_run_once
                    (&DAT_146bc974c,ssl_x509_store_ctx_init_ossl_,param_3,param_4,0x143ca897a);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = DAT_146bc9750;
  }
  uVar2 = 0xffffffff;
  if (iVar3 != 0) {
    uVar2 = DAT_146832d50;
  }
  return uVar2;
}



// FUNCTION 143ca89b0 SSL_set0_CA_list body=62 status=ok
// SIG undefined SSL_set0_CA_list(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set0_CA_list(longlong param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x5b8),X509_NAME_free);
  *(undefined8 *)(param_1 + 0x5b8) = param_2;
  return;
}



// FUNCTION 143ca89f0 _strlen31 body=28 status=ok
// SIG undefined _strlen31(void)

uint _strlen31(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *param_1;
  for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return uVar2 & 0x7fffffff;
}



// FUNCTION 143ca8a10 ssl_build_cert_chain body=821 status=ok
// SIG undefined ssl_build_cert_chain(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ssl_build_cert_chain(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  
  uVar15 = 0x143ca8a2f;
  if (param_1 == 0) {
    plVar14 = *(longlong **)(param_2 + 0x130);
  }
  else {
    plVar14 = *(longlong **)(param_1 + 0x488);
  }
  plVar1 = (longlong *)*plVar14;
  lVar6 = 0;
  uVar13 = 0;
  uVar12 = 0;
  iVar5 = 0;
  iVar11 = 0;
  uVar8 = uVar13;
  iVar3 = iVar5;
  if (*plVar1 == 0) {
    ERR_put_error(0x14,0x14c,0xb3,"ssl\\ssl_cert.c",0x31e,0x143ca8a2f);
    goto LAB_143ca8cdf;
  }
  if ((param_3 & 4) == 0) {
    lVar6 = plVar14[0x3b];
    if (lVar6 == 0) {
      if (param_1 == 0) {
        lVar6 = *(longlong *)(param_2 + 0x20);
      }
      else {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x20);
      }
    }
    uVar13 = uVar12;
    if ((param_3 & 1) != 0) {
      uVar13 = plVar1[2];
    }
  }
  else {
    lVar6 = X509_STORE_new();
    if (lVar6 == 0) goto LAB_143ca8cdf;
    iVar2 = OPENSSL_sk_num(plVar1[2]);
    if (0 < iVar2) {
      do {
        uVar7 = OPENSSL_sk_value(plVar1[2],uVar12);
        iVar2 = X509_STORE_add_cert(lVar6,uVar7);
        if (iVar2 == 0) goto LAB_143ca8cdf;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
        iVar2 = OPENSSL_sk_num(plVar1[2]);
      } while ((int)uVar10 < iVar2);
    }
    iVar2 = X509_STORE_add_cert(lVar6,*plVar1);
    uVar8 = 0;
    iVar3 = iVar11;
    if (iVar2 == 0) goto LAB_143ca8cdf;
  }
  uVar8 = X509_STORE_CTX_new();
  if (uVar8 == 0) {
    ERR_put_error(0x14,0x14c,0x41,"ssl\\ssl_cert.c",0x33c,uVar15);
    iVar3 = iVar11;
    goto LAB_143ca8cdf;
  }
  iVar3 = X509_STORE_CTX_init(uVar8,lVar6,*plVar1,uVar13);
  if (iVar3 == 0) {
    ERR_put_error(0x14,0x14c,0xb,"ssl\\ssl_cert.c",0x340,uVar15);
    iVar3 = iVar11;
    goto LAB_143ca8cdf;
  }
  X509_STORE_CTX_set_flags(uVar8,*(uint *)((longlong)plVar14 + 0x1c) & 0x30000);
  iVar3 = X509_verify_cert(uVar8);
  if (iVar3 < 1) {
    if ((param_3 & 8) != 0) {
      if ((param_3 & 0x10) != 0) {
        ERR_clear_error();
      }
      iVar3 = 1;
      iVar5 = 2;
      goto LAB_143ca8bca;
    }
  }
  else {
LAB_143ca8bca:
    lVar9 = X509_STORE_CTX_get1_chain(uVar8);
    if (0 < iVar3) {
      uVar15 = OPENSSL_sk_shift(lVar9);
      X509_free(uVar15);
      if (((param_3 & 2) != 0) && (iVar3 = OPENSSL_sk_num(lVar9), 0 < iVar3)) {
        iVar3 = OPENSSL_sk_num(lVar9);
        uVar15 = OPENSSL_sk_value(lVar9,iVar3 + -1);
        uVar10 = X509_get_extension_flags(uVar15);
        if ((uVar10 >> 0xd & 1) != 0) {
          uVar15 = OPENSSL_sk_pop(lVar9);
          X509_free(uVar15);
        }
      }
      iVar11 = 0;
      iVar3 = OPENSSL_sk_num(lVar9);
      if (0 < iVar3) {
        do {
          uVar15 = OPENSSL_sk_value(lVar9,iVar11);
          iVar5 = ssl_security_cert(param_1,param_2,uVar15,0,0);
          if (iVar5 != 1) {
            ERR_put_error(0x14,0x14c,iVar5,"ssl\\ssl_cert.c",0x36d);
            OPENSSL_sk_pop_free(lVar9,X509_free);
            iVar3 = 0;
            goto LAB_143ca8cdf;
          }
          iVar11 = iVar11 + 1;
          iVar3 = OPENSSL_sk_num(lVar9);
          iVar5 = 1;
        } while (iVar11 < iVar3);
      }
      OPENSSL_sk_pop_free(plVar1[2],X509_free);
      plVar1[2] = lVar9;
      iVar3 = iVar5;
      if (iVar5 == 0) {
        iVar3 = 1;
      }
      goto LAB_143ca8cdf;
    }
  }
  ERR_put_error(0x14,0x14c,0x86,"ssl\\ssl_cert.c",0x351);
  uVar4 = UWheeledVehicleMovementComponent::GetAvoidanceGroupMask(uVar8);
  uVar15 = FUN_143d0e200(uVar4);
  ERR_add_error_data(2,"Verify error:",uVar15);
  iVar3 = iVar5;
LAB_143ca8cdf:
  if ((param_3 & 4) != 0) {
    X509_STORE_free(lVar6);
  }
  X509_STORE_CTX_free(uVar8);
  return iVar3;
}



// FUNCTION 143ca8d50 ssl_cert_add0_chain_cert body=172 status=ok
// SIG undefined ssl_cert_add0_chain_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cert_add0_chain_cert(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143ca8d60;
  if (param_1 == 0) {
    plVar4 = *(longlong **)(param_2 + 0x130);
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x488);
  }
  lVar1 = *plVar4;
  if (lVar1 != 0) {
    iVar2 = ssl_security_cert();
    if (iVar2 == 1) {
      lVar3 = *(longlong *)(lVar1 + 0x10);
      if (lVar3 == 0) {
        lVar3 = OPENSSL_sk_new_null();
        *(longlong *)(lVar1 + 0x10) = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
      }
      iVar2 = OPENSSL_sk_push(lVar3,param_3);
      if (iVar2 != 0) {
        return 1;
      }
    }
    else {
      ERR_put_error(0x14,0x15a,iVar2,"ssl\\ssl_cert.c",0x128,uVar5);
    }
  }
  return 0;
}



// FUNCTION 143ca8e00 ssl_cert_add1_chain_cert body=180 status=ok
// SIG undefined ssl_cert_add1_chain_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cert_add1_chain_cert(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143ca8e10;
  if (param_1 == 0) {
    plVar4 = *(longlong **)(param_2 + 0x130);
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x488);
  }
  lVar1 = *plVar4;
  if (lVar1 != 0) {
    iVar2 = ssl_security_cert();
    if (iVar2 == 1) {
      lVar3 = *(longlong *)(lVar1 + 0x10);
      if (lVar3 == 0) {
        lVar3 = OPENSSL_sk_new_null();
        *(longlong *)(lVar1 + 0x10) = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
      }
      iVar2 = OPENSSL_sk_push(lVar3,param_3);
      if (iVar2 != 0) {
        X509_up_ref(param_3);
        return 1;
      }
    }
    else {
      ERR_put_error(0x14,0x15a,iVar2,"ssl\\ssl_cert.c",0x128,uVar5);
    }
  }
  return 0;
}



// FUNCTION 143ca8ec0 ssl_cert_dup body=1345 status=ok
// SIG undefined ssl_cert_dup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * ssl_cert_dup(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  
  plVar2 = (longlong *)CRYPTO_zalloc(0x228,"ssl\\ssl_cert.c",0x4c);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x14,0xdd,0x41,"ssl\\ssl_cert.c",0x50);
    return (longlong *)0x0;
  }
  *(undefined4 *)(plVar2 + 0x43) = 1;
  *plVar2 = (longlong)(plVar2 + (((*param_1 - (longlong)param_1) + -0x20) / 0x28) * 5 + 4);
  lVar3 = CRYPTO_THREAD_lock_new();
  plVar2[0x44] = lVar3;
  if (lVar3 == 0) {
    ERR_put_error(0x14,0xdd,0x41,"ssl\\ssl_cert.c",0x58);
    CRYPTO_free(plVar2,"ssl\\ssl_cert.c",0x59);
    return (longlong *)0x0;
  }
  if (param_1[1] != 0) {
    plVar2[1] = param_1[1];
    EVP_PKEY_up_ref();
  }
  lVar3 = 0;
  plVar2[2] = param_1[2];
  *(int *)(plVar2 + 3) = (int)param_1[3];
  lVar8 = (longlong)plVar2 - (longlong)param_1;
  plVar7 = param_1;
  do {
    plVar6 = plVar7 + 5;
    if (plVar7[4] != 0) {
      *(longlong *)(lVar8 + -8 + (longlong)plVar6) = plVar7[4];
      X509_up_ref();
    }
    if (*plVar6 != 0) {
      *(longlong *)(lVar8 + (longlong)plVar6) = *plVar6;
      EVP_PKEY_up_ref(*plVar6);
    }
    if (plVar7[6] != 0) {
      lVar4 = X509_chain_up_ref();
      *(longlong *)(lVar8 + 8 + (longlong)plVar6) = lVar4;
      if (lVar4 != 0) goto LAB_143ca9033;
      uVar9 = 0x75;
LAB_143ca90f0:
      ERR_put_error(0x14,0xdd,0x41,"ssl\\ssl_cert.c",uVar9);
      goto LAB_143ca910a;
    }
LAB_143ca9033:
    if (plVar7[7] != 0) {
      pvVar5 = (void *)CRYPTO_malloc(plVar7[8],"ssl\\ssl_cert.c",0x7c);
      *(void **)(lVar8 + 0x10 + (longlong)plVar6) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        uVar9 = 0x7e;
        goto LAB_143ca90f0;
      }
      *(longlong *)(lVar8 + 0x18 + (longlong)plVar6) = plVar7[8];
      _guard_xfg_dispatch_icall_nop(pvVar5,(void *)plVar7[7],plVar7[8]);
    }
    lVar3 = lVar3 + 1;
    plVar7 = plVar6;
  } while (lVar3 < 9);
  if (param_1[0x33] == 0) {
    plVar2[0x33] = 0;
  }
  else {
    pvVar5 = (void *)CRYPTO_malloc(param_1[0x34] * 2,"ssl\\ssl_cert.c",0x8a);
    plVar2[0x33] = (longlong)pvVar5;
    if (pvVar5 == (void *)0x0) goto LAB_143ca910a;
    _guard_xfg_dispatch_icall_nop(pvVar5,(void *)param_1[0x33],param_1[0x34] * 2);
    plVar2[0x34] = param_1[0x34];
  }
  if (param_1[0x35] == 0) {
    plVar2[0x35] = 0;
  }
  else {
    pvVar5 = (void *)CRYPTO_malloc(param_1[0x36] * 2,"ssl\\ssl_cert.c",0x95);
    plVar2[0x35] = (longlong)pvVar5;
    if (pvVar5 == (void *)0x0) goto LAB_143ca910a;
    _guard_xfg_dispatch_icall_nop(pvVar5,(void *)param_1[0x35],param_1[0x36] * 2);
    plVar2[0x36] = param_1[0x36];
  }
  plVar2[0x37] = 0;
  if (param_1[0x31] != 0) {
    lVar3 = CRYPTO_memdup(param_1[0x31],param_1[0x32],"ssl\\ssl_cert.c",0xa1);
    plVar2[0x31] = lVar3;
    if (lVar3 == 0) goto LAB_143ca910a;
    plVar2[0x32] = param_1[0x32];
  }
  *(undefined4 *)((longlong)plVar2 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x1c);
  plVar2[0x39] = param_1[0x39];
  plVar2[0x3a] = param_1[0x3a];
  if (param_1[0x3c] != 0) {
    X509_STORE_up_ref();
    plVar2[0x3c] = param_1[0x3c];
  }
  if (param_1[0x3b] != 0) {
    X509_STORE_up_ref();
    plVar2[0x3b] = param_1[0x3b];
  }
  plVar2[0x3f] = param_1[0x3f];
  *(int *)(plVar2 + 0x40) = (int)param_1[0x40];
  plVar2[0x41] = param_1[0x41];
  iVar1 = custom_exts_copy(plVar2 + 0x3d,param_1 + 0x3d);
  if (iVar1 != 0) {
    if (param_1[0x42] == 0) {
      return plVar2;
    }
    lVar3 = CRYPTO_strdup(param_1[0x42],"ssl\\ssl_cert.c",0xbe);
    plVar2[0x42] = lVar3;
    if (lVar3 != 0) {
      return plVar2;
    }
  }
LAB_143ca910a:
  LOCK();
  plVar7 = plVar2 + 0x43;
  lVar3 = *plVar7;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)lVar3 < 2) {
    EVP_PKEY_free(plVar2[1]);
    plVar7 = plVar2 + 6;
    lVar3 = 9;
    do {
      X509_free(plVar7[-2]);
      plVar7[-2] = 0;
      EVP_PKEY_free(plVar7[-1]);
      plVar7[-1] = 0;
      OPENSSL_sk_pop_free(*plVar7,X509_free);
      *plVar7 = 0;
      CRYPTO_free(plVar7[1],"ssl\\ssl_cert.c",0xda);
      plVar7[1] = 0;
      plVar7[2] = 0;
      plVar7 = plVar7 + 5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    CRYPTO_free(plVar2[0x33],"ssl\\ssl_cert.c",0xf1);
    CRYPTO_free(plVar2[0x35],"ssl\\ssl_cert.c",0xf2);
    CRYPTO_free(plVar2[0x37],"ssl\\ssl_cert.c",0xf3);
    CRYPTO_free(plVar2[0x31],"ssl\\ssl_cert.c",0xf4);
    X509_STORE_free(plVar2[0x3c]);
    X509_STORE_free(plVar2[0x3b]);
    custom_exts_free(plVar2 + 0x3d);
    CRYPTO_free(plVar2[0x42],"ssl\\ssl_cert.c",0xf9);
    CRYPTO_THREAD_lock_free(plVar2[0x44]);
    CRYPTO_free(plVar2,"ssl\\ssl_cert.c",0xfc);
  }
  return (longlong *)0x0;
}



// FUNCTION 143ca9410 ssl_cert_free body=382 status=ok
// SIG undefined ssl_cert_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_cert_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x218);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      EVP_PKEY_free(*(undefined8 *)(param_1 + 8));
      puVar3 = (undefined8 *)(param_1 + 0x30);
      lVar4 = 9;
      do {
        X509_free(puVar3[-2]);
        puVar3[-2] = 0;
        EVP_PKEY_free(puVar3[-1]);
        puVar3[-1] = 0;
        OPENSSL_sk_pop_free(*puVar3,X509_free);
        *puVar3 = 0;
        CRYPTO_free(puVar3[1],"ssl\\ssl_cert.c",0xda);
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3 = puVar3 + 5;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x198),"ssl\\ssl_cert.c",0xf1);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x1a8),"ssl\\ssl_cert.c",0xf2);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x1b8),"ssl\\ssl_cert.c",0xf3);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x188),"ssl\\ssl_cert.c",0xf4);
      X509_STORE_free(*(undefined8 *)(param_1 + 0x1e0));
      X509_STORE_free(*(undefined8 *)(param_1 + 0x1d8));
      custom_exts_free(param_1 + 0x1e8);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x210),"ssl\\ssl_cert.c",0xf9);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x220));
      CRYPTO_free(param_1,"ssl\\ssl_cert.c",0xfc);
    }
  }
  return;
}



// FUNCTION 143ca9590 ssl_cert_lookup_by_idx body=21 status=ok
// SIG undefined ssl_cert_lookup_by_idx(void)

undefined4 * ssl_cert_lookup_by_idx(ulonglong param_1)

{
  if (8 < param_1) {
    return (undefined4 *)0x0;
  }
  return &DAT_145d48a00 + param_1 * 2;
}



// FUNCTION 143ca95b0 ssl_cert_lookup_by_nid body=43 status=ok
// SIG undefined ssl_cert_lookup_by_nid(void)

undefined8 ssl_cert_lookup_by_nid(int param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  do {
    if ((&DAT_145d48a00)[uVar1 * 2] == param_1) {
      *param_2 = uVar1;
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 9);
  return 0;
}



// FUNCTION 143ca95e0 ssl_cert_lookup_by_pkey body=76 status=ok
// SIG undefined ssl_cert_lookup_by_pkey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * ssl_cert_lookup_by_pkey(undefined8 param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FRollingHash::GetWindowSize();
  if (iVar1 != 0) {
    uVar2 = 0;
    do {
      if ((&DAT_145d48a00)[uVar2 * 2] == iVar1) {
        if (param_2 != (ulonglong *)0x0) {
          *param_2 = uVar2;
        }
        return &DAT_145d48a00 + uVar2 * 2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 9);
  }
  return (undefined4 *)0x0;
}



// FUNCTION 143ca9630 ssl_cert_new body=223 status=ok
// SIG undefined ssl_cert_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * ssl_cert_new(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143ca963c;
  plVar1 = (longlong *)CRYPTO_zalloc(0x228,"ssl\\ssl_cert.c",0x34);
  if (plVar1 == (longlong *)0x0) {
    ERR_put_error(0x14,0xa2,0x41,"ssl\\ssl_cert.c",0x37,uVar3);
    return (longlong *)0x0;
  }
  *(undefined4 *)(plVar1 + 0x40) = 1;
  *plVar1 = (longlong)(plVar1 + 4);
  plVar1[0x3f] = (longlong)ssl_security_default_callback;
  *(undefined4 *)(plVar1 + 0x43) = 1;
  plVar1[0x41] = 0;
  lVar2 = CRYPTO_THREAD_lock_new();
  plVar1[0x44] = lVar2;
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xa2,0x41,"ssl\\ssl_cert.c",0x42,uVar3);
    CRYPTO_free(plVar1,"ssl\\ssl_cert.c",0x43);
    return (longlong *)0x0;
  }
  return plVar1;
}



// FUNCTION 143ca9710 ssl_cert_select_current body=164 status=ok
// SIG undefined ssl_cert_select_current(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cert_select_current(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    lVar4 = 0;
    plVar3 = param_1 + 4;
    plVar2 = plVar3;
    lVar5 = lVar4;
    do {
      if ((*plVar2 == param_2) && (plVar2[1] != 0)) {
        *param_1 = plVar2;
        return 1;
      }
      lVar5 = lVar5 + 1;
      plVar2 = plVar2 + 5;
    } while (lVar5 < 9);
    do {
      if (((plVar3[1] != 0) && (*plVar3 != 0)) && (iVar1 = X509_cmp(*plVar3,param_2), iVar1 == 0)) {
        *param_1 = plVar3;
        return 1;
      }
      lVar4 = lVar4 + 1;
      plVar3 = plVar3 + 5;
    } while (lVar4 < 9);
  }
  return 0;
}



// FUNCTION 143ca97c0 ssl_cert_set0_chain body=249 status=ok
// SIG undefined ssl_cert_set0_chain(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cert_set0_chain(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143ca97d3;
  if (param_1 == 0) {
    plVar3 = *(longlong **)(param_2 + 0x130);
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x488);
  }
  lVar1 = *plVar3;
  if (lVar1 != 0) {
    iVar5 = 0;
    iVar2 = OPENSSL_sk_num(param_3);
    if (0 < iVar2) {
      do {
        uVar4 = OPENSSL_sk_value(param_3,iVar5);
        iVar2 = ssl_security_cert(param_1,param_2,uVar4,0,0,uVar6);
        if (iVar2 != 1) {
          ERR_put_error(0x14,0x154,iVar2,"ssl\\ssl_cert.c",0x108);
          return 0;
        }
        iVar5 = iVar5 + 1;
        iVar2 = OPENSSL_sk_num(param_3);
      } while (iVar5 < iVar2);
    }
    OPENSSL_sk_pop_free(*(undefined8 *)(lVar1 + 0x10),X509_free);
    *(undefined8 *)(lVar1 + 0x10) = param_3;
    return 1;
  }
  return 0;
}



// FUNCTION 143ca98c0 ssl_cert_set1_chain body=138 status=ok
// SIG undefined ssl_cert_set1_chain(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cert_set1_chain(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    uVar2 = ssl_cert_set0_chain();
    return uVar2;
  }
  lVar3 = X509_chain_up_ref(param_3);
  if (lVar3 != 0) {
    iVar1 = ssl_cert_set0_chain(param_1,param_2,lVar3);
    if (iVar1 != 0) {
      return 1;
    }
    OPENSSL_sk_pop_free(lVar3,X509_free);
  }
  return 0;
}



// FUNCTION 143ca9950 ssl_cert_set_cert_store body=98 status=ok
// SIG undefined ssl_cert_set_cert_store(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cert_set_cert_store(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = 0x1d8;
  if (param_3 == 0) {
    lVar1 = 0x1e0;
  }
  X509_STORE_free(*(longlong *)(lVar1 + param_1));
  *(longlong *)(lVar1 + param_1) = param_2;
  if ((param_4 != 0) && (param_2 != 0)) {
    X509_STORE_up_ref(param_2);
  }
  return 1;
}



// FUNCTION 143ca99c0 FUN_143ca99c0 body=125 status=ok
// SIG undefined FUN_143ca99c0(void)

undefined8 FUN_143ca99c0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if (param_2 == 1) {
    iVar3 = 0;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    iVar3 = (int)(((*param_1 - (longlong)param_1) + -0x20) / 0x28) + 1;
    if (8 < iVar3) {
      return 0;
    }
  }
  lVar2 = (longlong)iVar3;
  if (lVar2 < 9) {
    plVar1 = param_1 + lVar2 * 5 + 4;
    do {
      if ((*plVar1 != 0) && (plVar1[1] != 0)) {
        *param_1 = (longlong)plVar1;
        return 1;
      }
      lVar2 = lVar2 + 1;
      plVar1 = plVar1 + 5;
    } while (lVar2 < 9);
  }
  return 0;
}



// FUNCTION 143ca9a40 ssl_ctx_security body=70 status=ok
// SIG undefined ssl_ctx_security(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_ctx_security(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined8 param_5)

{
  (**(code **)(*(longlong *)(param_1 + 0x130) + 0x1f8))
            (0,param_1,param_2,param_3,param_4,param_5,
             *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x208));
  return;
}



// FUNCTION 143ca9a90 ssl_security body=67 status=ok
// SIG undefined ssl_security(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_security(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  (**(code **)(*(longlong *)(param_1 + 0x488) + 0x1f8))
            (param_1,0,param_2,param_3,param_4,param_5,
             *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x208));
  return;
}



// FUNCTION 143ca9ae0 ssl_security_default_callback body=424 status=ok
// SIG undefined ssl_security_default_callback(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ssl_security_default_callback
          (longlong param_1,longlong param_2,int param_3,int param_4,int param_5,longlong param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  if (param_2 == 0) {
    iVar2 = SSL_get_security_level();
  }
  else {
    iVar2 = SSL_CTX_get_security_level(param_2);
  }
  if (iVar2 < 1) {
    if (param_3 != 0x40007) {
      return 1;
    }
    if (0x4f < param_4) {
      return 1;
    }
    return 0;
  }
  if (5 < iVar2) {
    iVar2 = 5;
  }
  iVar1 = *(int *)(&DAT_145d48a44 + (longlong)iVar2 * 4);
  if (param_3 == 9) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      if ((param_5 < 0x301) && (1 < iVar2)) {
        return 0;
      }
      if ((param_5 < 0x302) && (2 < iVar2)) {
        return 0;
      }
      if (0x302 < param_5) {
        return 1;
      }
    }
    else {
      if (param_5 == 0x100) {
        param_5 = 0xff00;
      }
      if (param_5 < 0xfefe) {
        return 1;
      }
    }
    bVar4 = SBORROW4(iVar2,4);
    bVar3 = iVar2 + -4 < 0;
  }
  else if (param_3 == 10) {
    bVar4 = SBORROW4(iVar2,3);
    bVar3 = iVar2 + -3 < 0;
  }
  else {
    if (param_3 != 0xf) {
      if (2 < param_3 - 0x10001U) {
        if (iVar1 <= param_4) {
          return 1;
        }
        return 0;
      }
      if (param_4 < iVar1) {
        return 0;
      }
      if ((*(byte *)(param_6 + 0x20) & 4) != 0) {
        return 0;
      }
      if ((*(uint *)(param_6 + 0x28) & 1) != 0) {
        return 0;
      }
      if ((0xa0 < iVar1) && ((*(uint *)(param_6 + 0x28) & 2) != 0)) {
        return 0;
      }
      if ((1 < iVar2) && (*(int *)(param_6 + 0x24) == 4)) {
        return 0;
      }
      if (iVar2 < 3) {
        return 1;
      }
      if (*(int *)(param_6 + 0x2c) == 0x304) {
        if ((*(byte *)(param_6 + 0x1c) & 6) != 0) {
          return 1;
        }
        return 0;
      }
      return 0;
    }
    bVar4 = SBORROW4(iVar2,2);
    bVar3 = iVar2 + -2 < 0;
  }
  if (bVar4 != bVar3) {
    return 1;
  }
  return 0;
}



// FUNCTION 143ca9c90 ssl_verify_cert_chain body=664 status=ok
// SIG undefined ssl_verify_cert_chain(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ssl_verify_cert_chain(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 uVar10;
  
  uVar10 = 0x143ca9ca5;
  uVar5 = 0;
  if (param_2 != 0) {
    iVar2 = OPENSSL_sk_num(param_2);
    if (iVar2 != 0) {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 0x1e0);
      if (lVar8 == 0) {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x20);
      }
      lVar6 = X509_STORE_CTX_new();
      if (lVar6 == 0) {
        ERR_put_error(0x14,0xcf,0x41,"ssl\\ssl_cert.c",0x180,uVar10);
        uVar5 = 0;
      }
      else {
        uVar7 = OPENSSL_sk_value(param_2,0);
        iVar2 = X509_STORE_CTX_init(lVar6,lVar8,uVar7,param_2);
        if (iVar2 == 0) {
          ERR_put_error(0x14,0xcf,0xb,"ssl\\ssl_cert.c",0x186,uVar10);
          X509_STORE_CTX_free(lVar6);
        }
        else {
          uVar10 = USignificanceManager::GetWorld(lVar6);
          uVar3 = SSL_get_security_level(param_1);
          BIO_set_shutdown(uVar10,uVar3);
          X509_STORE_CTX_set_flags(lVar6,*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000)
          ;
          iVar4 = CRYPTO_THREAD_run_once(&DAT_146bc974c,ssl_x509_store_ctx_init_ossl_);
          iVar2 = 0;
          if (iVar4 != 0) {
            iVar2 = DAT_146bc9750;
          }
          uVar3 = 0xffffffff;
          if (iVar2 != 0) {
            uVar3 = DAT_146832d50;
          }
          iVar2 = SSL_CTX_set_ex_data(lVar6,uVar3,param_1);
          if (iVar2 != 0) {
            if (param_1 + 0xd8 != 0) {
              iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0xe0));
              if (0 < iVar2) {
                X509_STORE_CTX_set0_dane(lVar6,param_1 + 0xd8);
              }
            }
            pcVar9 = "ssl_server";
            if (*(int *)(param_1 + 0x38) != 0) {
              pcVar9 = "ssl_client";
            }
            X509_STORE_CTX_set_default(lVar6,pcVar9);
            X509_VERIFY_PARAM_set1(uVar10,*(undefined8 *)(param_1 + 0xd0));
            if (*(longlong *)(param_1 + 0x560) != 0) {
              FMemFileIn::seekg(lVar6);
            }
            pcVar1 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x98);
            if (pcVar1 == (code *)0x0) {
              uVar5 = X509_verify_cert(lVar6);
            }
            else {
              uVar5 = (*pcVar1)(lVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0xa0));
            }
            uVar3 = UWheeledVehicleMovementComponent::GetAvoidanceGroupMask(lVar6);
            *(undefined4 *)(param_1 + 0x5a8) = uVar3;
            OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x5a0),X509_free);
            *(undefined8 *)(param_1 + 0x5a0) = 0;
            lVar8 = FBufferReaderBase::Tell(lVar6);
            if (lVar8 != 0) {
              lVar8 = X509_STORE_CTX_get1_chain(lVar6);
              *(longlong *)(param_1 + 0x5a0) = lVar8;
              if (lVar8 == 0) {
                ERR_put_error(0x14,0xcf,0x41,"ssl\\ssl_cert.c",0x1b6);
                uVar5 = 0;
              }
            }
            X509_VERIFY_PARAM_move_peername(*(undefined8 *)(param_1 + 0xd0),uVar10);
          }
          X509_STORE_CTX_free(lVar6);
        }
      }
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 143ca9f30 ssl_x509_store_ctx_init_ossl_ body=76 status=ok
// SIG undefined ssl_x509_store_ctx_init_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_x509_store_ctx_init_ossl_(void)

{
  DAT_146832d50 = CRYPTO_get_ex_new_index(5,0,"SSL for verify callback",0,0,0);
  DAT_146bc9750 = (uint)(-1 < DAT_146832d50);
  return;
}



// FUNCTION 143ca9f80 xname_cmp body=163 status=ok
// SIG undefined xname_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int xname_cmp(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  void *local_res18;
  void *local_res20;
  
  local_res20 = (void *)0x0;
  local_res18 = (void *)0x0;
  iVar2 = i2d_X509_NAME(param_1,&local_res20);
  iVar3 = i2d_X509_NAME(param_2,&local_res18);
  pvVar1 = local_res20;
  if ((iVar2 < 0) || (iVar3 < 0)) {
    iVar2 = -2;
  }
  else if (iVar2 == iVar3) {
    iVar2 = _guard_xfg_dispatch_icall_nop(local_res20,local_res18,(longlong)iVar2);
  }
  else {
    iVar2 = iVar2 - iVar3;
  }
  CRYPTO_free(pvVar1,"ssl\\ssl_cert.c",0x24e);
  CRYPTO_free(local_res18,"ssl\\ssl_cert.c",0x24f);
  return iVar2;
}



// FUNCTION 143caa030 X509_REVOKED_cmp body=28 status=ok
// SIG undefined X509_REVOKED_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REVOKED_cmp(undefined8 *param_1,undefined8 *param_2)

{
  xname_cmp(*param_1,*param_2);
  return;
}



// FUNCTION 143caa050 SRP_Calc_A_param body=179 status=ok
// SIG undefined SRP_Calc_A_param(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 SRP_Calc_A_param(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143caa05c;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  iVar1 = RAND_priv_bytes(local_48,0x30);
  if (0 < iVar1) {
    uVar2 = BN_bin2bn(local_48,0x30,*(undefined8 *)(param_1 + 2000));
    *(undefined8 *)(param_1 + 2000) = uVar2;
    FUN_14004ff40(local_48,0x30);
    lVar3 = SRP_Calc_A(*(undefined8 *)(param_1 + 2000),*(undefined8 *)(param_1 + 0x7a8),
                       *(undefined8 *)(param_1 + 0x7b0));
    *(longlong *)(param_1 + 0x7c8) = lVar3;
    if (lVar3 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143caa110 SSL_CTX_SRP_CTX_free body=216 status=ok
// SIG undefined SSL_CTX_SRP_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_SRP_CTX_free(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  CRYPTO_free(*(undefined8 *)(param_1 + 0x2f8),"ssl\\tls_srp.c",0x1a);
  CRYPTO_free(*(undefined8 *)(param_1 + 0x340),"ssl\\tls_srp.c",0x1b);
  BN_free(*(undefined8 *)(param_1 + 0x300));
  BN_free(*(undefined8 *)(param_1 + 0x308));
  BN_free(*(undefined8 *)(param_1 + 0x310));
  BN_free(*(undefined8 *)(param_1 + 0x318));
  BN_free(*(undefined8 *)(param_1 + 800));
  BN_free(*(undefined8 *)(param_1 + 0x328));
  BN_free(*(undefined8 *)(param_1 + 0x330));
  BN_free(*(undefined8 *)(param_1 + 0x338));
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x2d8),0,0x78);
  *(undefined4 *)(param_1 + 0x348) = 0x400;
  return 1;
}



// FUNCTION 143caa1f0 SSL_CTX_SRP_CTX_init body=70 status=ok
// SIG undefined SSL_CTX_SRP_CTX_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_SRP_CTX_init(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x2d8),0,0x78);
  *(undefined4 *)(param_1 + 0x348) = 0x400;
  return 1;
}



// FUNCTION 143caa240 SSL_SRP_CTX_free body=216 status=ok
// SIG undefined SSL_SRP_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_SRP_CTX_free(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  CRYPTO_free(*(undefined8 *)(param_1 + 0x7a0),"ssl\\tls_srp.c",0x2d);
  CRYPTO_free(*(undefined8 *)(param_1 + 0x7e8),"ssl\\tls_srp.c",0x2e);
  BN_free(*(undefined8 *)(param_1 + 0x7a8));
  BN_free(*(undefined8 *)(param_1 + 0x7b0));
  BN_free(*(undefined8 *)(param_1 + 0x7b8));
  BN_free(*(undefined8 *)(param_1 + 0x7c0));
  BN_free(*(undefined8 *)(param_1 + 0x7c8));
  BN_free(*(undefined8 *)(param_1 + 2000));
  BN_free(*(undefined8 *)(param_1 + 0x7d8));
  BN_free(*(undefined8 *)(param_1 + 0x7e0));
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x780),0,0x78);
  *(undefined4 *)(param_1 + 0x7f0) = 0x400;
  return 1;
}



// FUNCTION 143caa320 SSL_SRP_CTX_init body=757 status=ok
// SIG undefined SSL_SRP_CTX_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_SRP_CTX_init(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143caa330;
  if ((param_1 == 0) || (lVar1 = *(longlong *)(param_1 + 0x598), lVar1 == 0)) {
    return 0;
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x780),0,0x78);
  *(undefined8 *)(param_1 + 0x780) = *(undefined8 *)(lVar1 + 0x2d8);
  *(undefined8 *)(param_1 + 0x788) = *(undefined8 *)(lVar1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x790) = *(undefined8 *)(lVar1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x798) = *(undefined8 *)(lVar1 + 0x2f0);
  *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(lVar1 + 0x348);
  if (*(longlong *)(lVar1 + 0x300) != 0) {
    lVar3 = BN_dup();
    *(longlong *)(param_1 + 0x7a8) = lVar3;
    if (lVar3 != 0) goto LAB_143caa3cb;
LAB_143caa49e:
    uVar2 = 0x62;
    uVar4 = 3;
    goto LAB_143caa517;
  }
LAB_143caa3cb:
  if (*(longlong *)(lVar1 + 0x308) != 0) {
    lVar3 = BN_dup();
    *(longlong *)(param_1 + 0x7b0) = lVar3;
    if (lVar3 == 0) goto LAB_143caa49e;
  }
  if (*(longlong *)(lVar1 + 0x310) != 0) {
    lVar3 = BN_dup();
    *(longlong *)(param_1 + 0x7b8) = lVar3;
    if (lVar3 == 0) goto LAB_143caa49e;
  }
  if (*(longlong *)(lVar1 + 0x318) != 0) {
    lVar3 = BN_dup();
    *(longlong *)(param_1 + 0x7c0) = lVar3;
    if (lVar3 == 0) goto LAB_143caa49e;
  }
  if (*(longlong *)(lVar1 + 800) != 0) {
    lVar3 = BN_dup();
    *(longlong *)(param_1 + 0x7c8) = lVar3;
    if (lVar3 == 0) goto LAB_143caa49e;
  }
  if (*(longlong *)(lVar1 + 0x328) != 0) {
    lVar3 = BN_dup();
    *(longlong *)(param_1 + 2000) = lVar3;
    if (lVar3 == 0) goto LAB_143caa49e;
  }
  if (*(longlong *)(lVar1 + 0x338) != 0) {
    lVar3 = BN_dup();
    *(longlong *)(param_1 + 0x7e0) = lVar3;
    if (lVar3 == 0) goto LAB_143caa49e;
  }
  if (*(longlong *)(lVar1 + 0x330) != 0) {
    lVar3 = BN_dup();
    *(longlong *)(param_1 + 0x7d8) = lVar3;
    if (lVar3 == 0) goto LAB_143caa49e;
  }
  if (*(longlong *)(lVar1 + 0x2f8) == 0) {
LAB_143caa4da:
    if (*(longlong *)(lVar1 + 0x340) == 0) {
LAB_143caa5e7:
      *(undefined4 *)(param_1 + 0x7f4) = *(undefined4 *)(lVar1 + 0x34c);
      return 1;
    }
    lVar3 = CRYPTO_strdup(*(longlong *)(lVar1 + 0x340),"ssl\\tls_srp.c",0x6b);
    *(longlong *)(param_1 + 0x7e8) = lVar3;
    if (lVar3 != 0) goto LAB_143caa5e7;
    uVar2 = 0x6c;
  }
  else {
    lVar3 = CRYPTO_strdup(*(longlong *)(lVar1 + 0x2f8),"ssl\\tls_srp.c",0x66);
    *(longlong *)(param_1 + 0x7a0) = lVar3;
    if (lVar3 != 0) goto LAB_143caa4da;
    uVar2 = 0x67;
  }
  uVar4 = 0x44;
LAB_143caa517:
  ERR_put_error(0x14,0x139,uVar4,"ssl\\tls_srp.c",uVar2,uVar5);
  CRYPTO_free(*(undefined8 *)(param_1 + 0x7a0),"ssl\\tls_srp.c",0x73);
  CRYPTO_free(*(undefined8 *)(param_1 + 0x7e8),"ssl\\tls_srp.c",0x74);
  BN_free(*(undefined8 *)(param_1 + 0x7a8));
  BN_free(*(undefined8 *)(param_1 + 0x7b0));
  BN_free(*(undefined8 *)(param_1 + 0x7b8));
  BN_free(*(undefined8 *)(param_1 + 0x7c0));
  BN_free(*(undefined8 *)(param_1 + 0x7c8));
  BN_free(*(undefined8 *)(param_1 + 2000));
  BN_free(*(undefined8 *)(param_1 + 0x7d8));
  BN_free(*(undefined8 *)(param_1 + 0x7e0));
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x780),0,0x78);
  return 0;
}



// FUNCTION 143caa620 SSL_srp_server_param_with_username body=276 status=ok
// SIG undefined SSL_srp_server_param_with_username(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong SSL_srp_server_param_with_username(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143caa630;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *param_2 = 0x73;
  if ((*(code **)(param_1 + 0x788) != (code *)0x0) &&
     (uVar2 = (**(code **)(param_1 + 0x788))(param_1,param_2,*(undefined8 *)(param_1 + 0x780)),
     (int)uVar2 != 0)) {
    return uVar2;
  }
  *param_2 = 0x50;
  if ((((*(longlong *)(param_1 + 0x7a8) != 0) && (*(longlong *)(param_1 + 0x7b0) != 0)) &&
      (*(longlong *)(param_1 + 0x7b8) != 0)) &&
     ((*(longlong *)(param_1 + 0x7e0) != 0 && (iVar1 = RAND_priv_bytes(local_48,0x30), 0 < iVar1))))
  {
    uVar3 = BN_bin2bn(local_48,0x30);
    *(undefined8 *)(param_1 + 0x7d8) = uVar3;
    FUN_14004ff40(local_48,0x30);
    lVar4 = SRP_Calc_B(*(undefined8 *)(param_1 + 0x7d8),*(undefined8 *)(param_1 + 0x7a8),
                       *(undefined8 *)(param_1 + 0x7b0),*(undefined8 *)(param_1 + 0x7e0));
    *(longlong *)(param_1 + 0x7c0) = lVar4;
    uVar5 = 2;
    if (lVar4 != 0) {
      uVar5 = 0;
    }
    return (ulonglong)uVar5;
  }
  return 2;
}



// FUNCTION 143caa740 srp_generate_client_master_secret body=576 status=ok
// SIG undefined srp_generate_client_master_secret(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 srp_generate_client_master_secret(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  
  uVar14 = 1;
  uVar12 = 0xffffffff;
  uVar10 = 0;
  lVar3 = 0;
  lVar6 = 0;
  lVar5 = 0;
  pcVar4 = (char *)0x0;
  iVar2 = SRP_Verify_B_mod_N(*(undefined8 *)(param_1 + 0x7c0),*(undefined8 *)(param_1 + 0x7a8));
  if (((iVar2 == 0) ||
      (lVar3 = SRP_Calc_u(*(undefined8 *)(param_1 + 0x7c8),*(undefined8 *)(param_1 + 0x7c0),
                          *(undefined8 *)(param_1 + 0x7a8)), lVar3 == 0)) ||
     (*(code **)(param_1 + 0x798) == (code *)0x0)) {
    uVar13 = CONCAT44(uVar14,0x126);
LAB_143caa8e9:
    uVar11 = 0x44;
  }
  else {
    pcVar4 = (char *)(**(code **)(param_1 + 0x798))(param_1,*(undefined8 *)(param_1 + 0x780));
    if (pcVar4 != (char *)0x0) {
      lVar5 = SRP_Calc_x(*(undefined8 *)(param_1 + 0x7b8),*(undefined8 *)(param_1 + 0x7a0),pcVar4);
      if (lVar5 != 0) {
        lVar7 = lVar3;
        lVar6 = SRP_Calc_client_key(*(undefined8 *)(param_1 + 0x7a8),
                                    *(undefined8 *)(param_1 + 0x7c0),
                                    *(undefined8 *)(param_1 + 0x7b0),lVar5,
                                    *(undefined8 *)(param_1 + 2000),lVar3);
        uVar14 = (undefined4)((ulonglong)lVar7 >> 0x20);
        if (lVar6 != 0) {
          iVar2 = BN_num_bits(lVar6);
          lVar7 = (longlong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3);
          lVar8 = CRYPTO_malloc(lVar7,"ssl\\tls_srp.c",0x13b);
          if (lVar8 == 0) {
            ossl_statem_fatal(param_1,0x50,0x253,0x41,"ssl\\tls_srp.c",CONCAT44(uVar14,0x13d));
            uVar12 = 0xffffffff;
          }
          else {
            BN_bn2bin(lVar6,lVar8);
            uVar12 = ssl_generate_master_secret(param_1,lVar8,lVar7,1);
          }
          goto LAB_143caa90e;
        }
      }
      uVar13 = CONCAT44(uVar14,0x136);
      goto LAB_143caa8e9;
    }
    uVar13 = CONCAT44(uVar14,0x12e);
    uVar11 = 0xea;
  }
  ossl_statem_fatal(param_1,0x50,0x253,uVar11,"ssl\\tls_srp.c",uVar13);
LAB_143caa90e:
  BN_clear_free(lVar6);
  BN_clear_free(lVar5);
  if (pcVar4 != (char *)0x0) {
    cVar1 = *pcVar4;
    pcVar9 = pcVar4;
    for (; (cVar1 != '\0' && (uVar10 < 0x80000000)); uVar10 = uVar10 + 1) {
      pcVar9 = pcVar9 + 1;
      cVar1 = *pcVar9;
    }
    CRYPTO_clear_free(pcVar4,uVar10 & 0x7fffffff,"ssl\\tls_srp.c",0x147);
  }
  BN_clear_free(lVar3);
  return uVar12;
}



// FUNCTION 143caa980 srp_generate_server_master_secret body=334 status=ok
// SIG undefined srp_generate_server_master_secret(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 srp_generate_server_master_secret(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  uVar7 = 0x143caa992;
  uVar5 = 0xffffffff;
  lVar3 = 0;
  iVar1 = SRP_Verify_A_mod_N(*(undefined8 *)(param_1 + 0x7c8),*(undefined8 *)(param_1 + 0x7a8));
  lVar2 = lVar3;
  if ((iVar1 != 0) &&
     (lVar2 = SRP_Calc_u(*(undefined8 *)(param_1 + 0x7c8),*(undefined8 *)(param_1 + 0x7c0),
                         *(undefined8 *)(param_1 + 0x7a8)), lVar2 != 0)) {
    lVar3 = SRP_Calc_server_key(*(undefined8 *)(param_1 + 0x7c8),*(undefined8 *)(param_1 + 0x7e0),
                                lVar2,*(undefined8 *)(param_1 + 0x7d8),
                                *(undefined8 *)(param_1 + 0x7a8),uVar7);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (lVar3 != 0) {
      iVar1 = BN_num_bits(lVar3);
      lVar6 = (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
      lVar4 = CRYPTO_malloc(lVar6,"ssl\\tls_srp.c",0x108);
      if (lVar4 == 0) {
        ossl_statem_fatal(param_1,0x50,0x24d,0x41,"ssl\\tls_srp.c",CONCAT44(uVar8,0x10a));
      }
      else {
        BN_bn2bin(lVar3,lVar4);
        uVar5 = ssl_generate_master_secret(param_1,lVar4,lVar6,1);
      }
    }
  }
  BN_clear_free(lVar3);
  BN_clear_free(lVar2);
  return uVar5;
}



// FUNCTION 143caaad0 srp_verify_server_param body=289 status=ok
// SIG undefined srp_verify_server_param(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 srp_verify_server_param(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = 1;
  iVar1 = BN_ucmp(*(undefined8 *)(param_1 + 0x7b0),*(undefined8 *)(param_1 + 0x7a8));
  if (((iVar1 < 0) &&
      (iVar1 = BN_ucmp(*(undefined8 *)(param_1 + 0x7c0),*(undefined8 *)(param_1 + 0x7a8)), iVar1 < 0
      )) && (iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x7c0)), iVar1 == 0)) {
    iVar1 = BN_num_bits(*(undefined8 *)(param_1 + 0x7a8));
    if (iVar1 < *(int *)(param_1 + 0x7f0)) {
      uVar5 = CONCAT44(uVar3,0x15c);
      uVar3 = 0x47;
      uVar4 = 0xf1;
    }
    else if (*(code **)(param_1 + 0x790) == (code *)0x0) {
      lVar2 = SRP_check_known_gN_param
                        (*(undefined8 *)(param_1 + 0x7b0),*(undefined8 *)(param_1 + 0x7a8));
      if (lVar2 != 0) {
        return 1;
      }
      uVar5 = CONCAT44(uVar3,0x169);
      uVar3 = 0x47;
      uVar4 = 0xf1;
    }
    else {
      iVar1 = (**(code **)(param_1 + 0x790))(param_1,*(undefined8 *)(param_1 + 0x780));
      if (0 < iVar1) {
        return 1;
      }
      uVar5 = CONCAT44(uVar3,0x164);
      uVar3 = 0x47;
      uVar4 = 0xea;
    }
  }
  else {
    uVar5 = CONCAT44(uVar3,0x156);
    uVar3 = 0x2f;
    uVar4 = 0x186;
  }
  ossl_statem_fatal(param_1,uVar3,0x254,uVar4,"ssl\\tls_srp.c",uVar5);
  return 0;
}



// FUNCTION 143caac00 SSL_CTX_add_custom_ext body=91 status=ok
// SIG undefined SSL_CTX_add_custom_ext(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_add_custom_ext
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_143caad10(param_1,2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



// FUNCTION 143caac60 SSL_CTX_add_server_custom_ext body=86 status=ok
// SIG undefined SSL_CTX_add_server_custom_ext(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_add_server_custom_ext
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  add_old_custom_ext(param_1,1,param_2,0x1d0,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 143caacc0 SSL_CTX_has_client_custom_ext body=74 status=ok
// SIG undefined SSL_CTX_has_client_custom_ext(void)

bool SSL_CTX_has_client_custom_ext(longlong param_1,uint param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)0x0;
  puVar1 = *(ushort **)(*(longlong *)(param_1 + 0x130) + 0x1f0);
  puVar2 = *(ushort **)(*(longlong *)(param_1 + 0x130) + 0x1e8);
  puVar3 = puVar5;
  puVar4 = puVar5;
  if (puVar1 != (ushort *)0x0) {
    do {
      if ((param_2 == *puVar2) && (puVar3 = puVar2, (*(uint *)(puVar2 + 2) & 0xfffffffd) == 0))
      break;
      puVar4 = (ushort *)((longlong)puVar4 + 1);
      puVar2 = puVar2 + 0x1c;
      puVar3 = puVar5;
    } while (puVar4 < puVar1);
  }
  return puVar3 != (ushort *)0x0;
}



// FUNCTION 143caad10 FUN_143caad10 body=399 status=ok
// SIG undefined FUN_143caad10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Instruction at (ram,0x000140010002) overlaps instruction at (ram,0x000140010001)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_143caad10(longlong param_1,uint param_2,ulonglong param_3,uint param_4,longlong param_5,
                     undefined8 *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                     undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  uint *puVar1;
  int *piVar2;
  short *psVar3;
  float *pfVar4;
  byte bVar5;
  short sVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  undefined8 uVar20;
  char *pcVar21;
  undefined8 *puVar22;
  longlong lVar23;
  char *pcVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  short *psVar28;
  IMAGE_DOS_HEADER *pIVar29;
  ushort *puVar30;
  longlong *unaff_RBX;
  char *pcVar31;
  undefined1 *puVar32;
  undefined8 *puVar33;
  ulonglong unaff_RSI;
  byte *pbVar34;
  int unaff_EDI;
  uint uVar35;
  longlong *plVar36;
  ulonglong uVar37;
  float *in_R10;
  longlong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  longlong *plVar38;
  float fVar39;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  undefined8 uStack_20;
  
  uStack_20 = 0x143caad34;
  puVar33 = (undefined8 *)auStack_38;
  puVar32 = auStack_38;
  lVar25 = *(longlong *)(param_1 + 0x130);
  plVar36 = (longlong *)(ulonglong)param_4;
  pbVar34 = (byte *)(lVar25 + 0x1e8);
  uVar26 = (ulonglong)param_2;
  uVar35 = (uint)param_3;
  pcVar31 = (char *)(param_3 & 0xffffffff);
  if ((param_5 == 0) && (param_6 != (undefined8 *)0x0)) {
    return (float *)0x0;
  }
  if (uVar35 != 0x12) {
    if (uVar35 < 0x3375) {
      if (uVar35 != 0x3374) {
        if (0x33 < uVar35) goto switchD_143caadbd_caseD_1;
        goto LAB_143caada4;
      }
    }
    else if (uVar35 != 0xff01) goto switchD_143caadbd_caseD_1;
switchD_143caadbd_caseD_0:
    if (uVar35 != 0x12) {
      return (float *)0x0;
    }
    goto switchD_143caadbd_caseD_1;
  }
  if ((char)param_4 < '\0') {
    uStack_40 = 0x143caad70;
    iVar17 = SSL_CTX_ct_is_enabled();
    if (iVar17 != 0) {
      return (float *)0x0;
    }
  }
LAB_143caada4:
  pIVar29 = &IMAGE_DOS_HEADER_140000000;
  bVar5 = pcVar31[0x143caaea8];
  pcVar21 = (char *)(ulonglong)bVar5;
  pcVar24 = IMAGE_DOS_HEADER_140000000.e_magic +
            (&switchD_143caadbd::switchdataD_143caaea0)[(longlong)pcVar21];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar5) {
  case 0:
    goto switchD_143caadbd_caseD_0;
  case 1:
    break;
  case 2:
    goto switchD_143caadbd_caseD_2;
  case 3:
    goto switchD_143caadbd_caseD_3;
  case 4:
    *(int *)(lVar25 + 0x192) = *(int *)(lVar25 + 0x192) + 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    do {
      uStack_40 = 0x141000008;
      FMemory::Free(plVar36);
      do {
        if (unaff_R13 != 0) {
          uStack_40 = 0x14100001d;
          FString::operator=(unaff_R13 + 0x180,param_6 + -6);
          *(byte **)(unaff_R13 + 0x178) = pbVar34;
          *(undefined4 *)(unaff_R13 + 0x170) = *(undefined4 *)(lVar25 + 0x908);
          iVar17 = *(int *)(lVar25 + 0x908);
          *(int *)(lVar25 + 0x908) = iVar17 + 1;
          if (*(int *)(lVar25 + 0x90c) < iVar17 + 1) {
            uStack_40 = 0x141000059;
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar25 + 0x900,iVar17)
            ;
          }
          *(ulonglong *)(*(longlong *)(lVar25 + 0x900) + (longlong)iVar17 * 8) = unaff_R13;
        }
        if (param_6[-6] != 0) {
          uStack_40 = 0x141000072;
          FMemory::Free();
        }
        uVar15 = (int)unaff_R12 + 1;
        unaff_R12 = (ulonglong)uVar15;
        if (uVar15 == 7) {
          param_6[0x36] = pcVar31;
          *(uint *)(param_6 + 0x38) = uVar35;
          uStack_40 = 0x1410000a5;
          puVar22 = (undefined8 *)FUN_140438ef0(0x10,param_6 + 0x32);
          if (puVar22 != (undefined8 *)0x0) {
            puVar22[1] = pbVar34;
            *puVar22 = &PTR_FUN_143f77b70;
          }
          param_6[0x30] = &LAB_140ff1bd0;
          uStack_40 = 0x1410000e4;
          uVar20 = FUN_1420849a0(pbVar34,param_6 + 0x3a,param_6 + 0x30);
          uStack_40 = 0x1410000ef;
          FUN_14208c260(pbVar34,uVar20);
          pcVar24 = (char *)param_6[0x40];
          puVar22 = (undefined8 *)auStack_38;
          if (*(uint *)(param_6 + 0x42) != uVar35) goto code_r0x000141000101;
          goto LAB_141000123;
        }
        uStack_40 = 0x140ffffa3;
        FString::PrintfImpl(param_6 + -6,PTR_u_taskLine_d_14629f0a0,unaff_R12);
        uVar20 = *(undefined8 *)(lVar25 + 0x888);
        param_6[-0xc] = pcVar31;
        param_6[-0xb] = pcVar31;
        uStack_40 = 0x140ffffca;
        unaff_R13 = FUN_140fe33c0(uVar20,param_6 + -6,pcVar31,6);
        iVar17 = *(int *)(param_6 + -0xb);
        plVar36 = (longlong *)param_6[-0xc];
        if (iVar17 != 0) {
          do {
            if (*plVar36 != 0) {
              uStack_40 = 0x140ffffed;
              FMemory::Free();
            }
            plVar36 = plVar36 + 2;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
          plVar36 = (longlong *)param_6[-0xc];
        }
      } while (plVar36 == (longlong *)0x0);
    } while( true );
  case 6:
    puVar22 = param_6 + 1;
    param_6 = (undefined8 *)*param_6;
code_r0x000141000101:
    puVar32 = (undefined1 *)puVar22;
    pcVar21 = (char *)(param_6 + 0x3c);
    if (pcVar24 != (char *)0x0) {
      pcVar21 = pcVar31;
    }
    plVar36 = (longlong *)((ulonglong)pcVar21 | (ulonglong)pcVar24);
    if (plVar36 != (longlong *)0x0) {
      pcVar7 = *(code **)(*plVar36 + 0x10);
      *(undefined8 *)(puVar32 + -8) = 0x14100011c;
      (*pcVar7)(plVar36,0);
      pcVar24 = (char *)param_6[0x40];
    }
LAB_141000123:
    if (pcVar24 != (char *)0x0) {
      *(undefined8 *)(puVar32 + -8) = 0x14100012d;
      FMemory::Free();
    }
    uVar26 = param_6[0x36];
    if (*(uint *)(param_6 + 0x38) != uVar35) {
      pcVar24 = (char *)(param_6 + 0x32);
      if (uVar26 != 0) {
        pcVar24 = pcVar31;
      }
      plVar36 = (longlong *)((ulonglong)pcVar24 | uVar26);
      if (plVar36 != (longlong *)0x0) {
        pcVar7 = *(code **)(*plVar36 + 0x10);
        *(undefined8 *)(puVar32 + -8) = 0x14100015a;
        (*pcVar7)(plVar36,0);
        uVar26 = param_6[0x36];
      }
    }
    if (uVar26 != 0) {
      *(undefined8 *)(puVar32 + -8) = 0x14100016b;
      FMemory::Free();
    }
    *(undefined8 *)(puVar32 + -8) = 0x141000177;
    lVar25 = FWeakObjectPtr::Get(lVar25 + 0x7c0);
    if (lVar25 != 0) {
      *(undefined8 *)(puVar32 + -8) = 0x141000188;
      lVar23 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar25 + 0x10) + 0x90) < *(int *)(lVar23 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar23 + 0x90) * 8) != lVar23 + 0x88)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (bVar11) {
        *(uint *)(param_6 + -3) = uVar35;
        param_6[-4] = FUN_140ff0c60;
        plVar38 = (longlong *)(lVar25 + 0xb88);
        *(undefined8 *)(puVar32 + -8) = 0x1410001dc;
        plVar36 = (longlong *)FMemory::Realloc(0,0x30);
        param_6[-2] = plVar36;
        if (plVar36 != (longlong *)0x0) {
          *plVar36 = (longlong)&PTR_FUN_14465fa00;
          *(undefined8 *)(puVar32 + -8) = 0x1410001fe;
          FWeakObjectPtr::operator=(plVar36 + 1,pbVar34);
          lVar23 = param_6[-3];
          plVar36[2] = param_6[-4];
          plVar36[3] = lVar23;
          *(undefined8 *)(puVar32 + -8) = 0x14100020c;
          lVar23 = FDelegateHandle::GenerateNewID();
          plVar36[5] = lVar23;
          *plVar36 = (longlong)&PTR_FUN_14465fa48;
        }
        if (param_6 + -2 != plVar38) {
          if (plVar36 == (longlong *)0x0) {
            if ((*(uint *)(lVar25 + 0xb90) != uVar35) &&
               (plVar36 = (longlong *)*plVar38, plVar36 != (longlong *)0x0)) {
              pcVar7 = *(code **)(*plVar36 + 0x28);
              *(undefined8 *)(puVar32 + -8) = 0x141000309;
              (*pcVar7)(plVar36,0);
              lVar23 = *plVar38;
              if (lVar23 != 0) {
                *(undefined8 *)(puVar32 + -8) = 0x14100031b;
                lVar23 = FMemory::Realloc(lVar23,0,0);
                *plVar38 = lVar23;
              }
              *(uint *)(lVar25 + 0xb90) = uVar35;
            }
            goto LAB_141000266;
          }
          pcVar7 = *(code **)(*plVar36 + 0x30);
          *(undefined8 *)(puVar32 + -8) = 0x141000238;
          (*pcVar7)(plVar36,plVar38);
        }
        if (plVar36 != (longlong *)0x0) {
          pcVar7 = *(code **)(*plVar36 + 0x28);
          *(undefined8 *)(puVar32 + -8) = 0x141000248;
          (*pcVar7)(plVar36,0);
          *(undefined8 *)(puVar32 + -8) = 0x141000255;
          lVar25 = FMemory::Realloc(plVar36,0,0);
          param_6[-2] = lVar25;
          if (lVar25 != 0) {
            *(undefined8 *)(puVar32 + -8) = 0x141000266;
            FMemory::Free(lVar25);
          }
        }
      }
    }
LAB_141000266:
    *(undefined8 *)(puVar32 + -8) = 0x141000272;
    pfVar18 = (float *)FUN_140ad4c90(pbVar34,param_6 + -10);
    lVar25 = param_6[-10];
    if (lVar25 != 0) {
      *(undefined8 *)(puVar32 + -8) = 0x14100029a;
      pfVar18 = (float *)FUN_142056520(lVar25,0);
    }
    if (param_6[-9] != 0) {
      LOCK();
      puVar1 = (uint *)(param_6[-9] + 8);
      uVar35 = *puVar1;
      pfVar18 = (float *)(ulonglong)uVar35;
      *puVar1 = *puVar1 + param_2;
      UNLOCK();
      if (uVar35 == 1) {
        puVar22 = (undefined8 *)param_6[-9];
        pcVar7 = *(code **)*puVar22;
        *(undefined8 *)(puVar32 + -8) = 0x1410002bb;
        pfVar18 = (float *)(*pcVar7)(puVar22);
        LOCK();
        piVar2 = (int *)((longlong)puVar22 + 0xc);
        iVar17 = *piVar2;
        *piVar2 = *piVar2 + param_2;
        UNLOCK();
        if (iVar17 == 1) {
          plVar36 = (longlong *)param_6[-9];
          pcVar7 = *(code **)(*plVar36 + 8);
          *(undefined8 *)(puVar32 + -8) = 0x1410002d1;
          pfVar18 = (float *)(*pcVar7)(plVar36,1);
        }
      }
    }
    *(undefined8 *)(puVar32 + -8) = 0x1410002e0;
    return pfVar18;
  case 7:
  case 0xc:
    *pcVar31 = *pcVar31 + bVar5;
    *pcVar21 = *pcVar21 + bVar5;
    *(char *)((longlong)pcVar21 * 2) = *(char *)((longlong)pcVar21 * 2) + bVar5;
    *pcVar21 = *pcVar21 + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    pcVar21 = (char *)((ulonglong)*pbVar34 & 0xffffffffffffffa0);
    cVar14 = (char)pcVar21;
    *pcVar21 = *pcVar21 + cVar14;
    pcVar21[-0x77] = pcVar21[-0x77] + (char)pcVar24;
    *(char *)(ulonglong)CONCAT11(0x24,cVar14) = *(char *)(ulonglong)CONCAT11(0x24,cVar14) + cVar14;
    uStack_40 = 0x14101011e;
    FWeakObjectPtr::operator=();
    uStack_40 = 0x14101012e;
    FWeakObjectPtr::operator=(&param_11,pcVar31);
    uVar13 = (undefined4)param_12;
    uVar12 = (undefined4)param_11;
    uStack_40 = 0x141010163;
    puVar22 = (undefined8 *)FUN_140438ef0(0x20,&stack0xfffffffffffffff8);
    if (puVar22 != (undefined8 *)0x0) {
      *puVar22 = &PTR_FUN_144605c80;
      puVar22[1] = pcVar31;
      *(undefined4 *)(puVar22 + 2) = uVar12;
      *(undefined4 *)((longlong)puVar22 + 0x14) = param_11._4_4_;
      *(undefined4 *)(puVar22 + 3) = uVar13;
      *(undefined4 *)((longlong)puVar22 + 0x1c) = param_12._4_4_;
    }
    uStack_40 = 0x14101019c;
    pfVar18 = (float *)FUN_14208c5d0(pcVar31,&stack0xffffffffffffffe8);
    return pfVar18;
  case 10:
    do {
      lVar25 = unaff_R13 - (longlong)pcVar24;
      psVar28 = (short *)((longlong)plVar36 +
                         (longlong)((longlong)pcVar24 * (longlong)pbVar34 + (longlong)in_R10) * 2);
      lVar23 = ((ulonglong)(pcVar31 + -4) >> 2) + 1;
      uVar37 = lVar23 * 4;
      pfVar19 = (float *)(in_R11 + 8);
      do {
        pfVar19[-2] = (float)(int)psVar28[(longlong)pbVar34 * lVar25] + pfVar19[-2];
        pfVar19[-1] = (float)(int)*psVar28 + pfVar19[-1];
        *pfVar19 = (float)(int)psVar28[(lVar25 + 2) * (longlong)pbVar34] + *pfVar19;
        psVar3 = psVar28 + (lVar25 + 3) * (longlong)pbVar34;
        pfVar18 = (float *)(ulonglong)(uint)(int)*psVar3;
        psVar28 = psVar28 + (longlong)pbVar34 * 4;
        pfVar19[1] = (float)(int)*psVar3 + pfVar19[1];
        lVar23 = lVar23 + -1;
        pfVar19 = pfVar19 + 4;
      } while (lVar23 != 0);
      do {
        if ((longlong)uVar37 < (longlong)pcVar31) {
          psVar28 = (short *)((longlong)unaff_RBX +
                             (longlong)((uVar37 + unaff_R13) * (longlong)pbVar34 + (longlong)in_R10)
                             * 2);
          do {
            sVar6 = *psVar28;
            pfVar18 = (float *)(ulonglong)(uint)(int)sVar6;
            uVar37 = uVar37 + 1;
            psVar28 = psVar28 + (longlong)pbVar34;
            *(float *)(in_R11 + -4 + uVar37 * 4) =
                 (float)(int)sVar6 + *(float *)(in_R11 + -4 + uVar37 * 4);
          } while ((longlong)uVar37 < (longlong)pcVar31);
        }
        in_R10 = (float *)((longlong)in_R10 + 1);
        if ((longlong)pbVar34 <= (longlong)in_R10) {
          unaff_R13 = unaff_RSI & 0xffffffff;
          goto LAB_140010211;
        }
        uVar37 = uVar26;
      } while (pcVar31 < &DAT_00000004);
      pcVar24 = (char *)(unaff_R13 + 1);
      plVar36 = unaff_RBX;
    } while( true );
  case 0xd:
    *pcVar21 = *pcVar21 + bVar5;
    *pcVar21 = *pcVar21 + bVar5;
    goto LAB_140010010;
  case 0xe:
    *pcVar21 = *pcVar21 + bVar5;
    *(undefined1 *)(lVar25 + 0x24e) = *(undefined1 *)(lVar25 + 0x24e);
LAB_140010010:
    do {
      in_R10[-2] = (float)(int)*(short *)(pcVar24 + (longlong)param_6 * 2) + in_R10[-2];
      in_R10[-1] = (float)(int)*(short *)pcVar24 + in_R10[-1];
      *in_R10 = (float)(int)*(short *)(pcVar24 + (longlong)plVar36 * 2) + *in_R10;
      pcVar21 = pcVar24 + param_5 * 2;
      pfVar18 = (float *)(ulonglong)(uint)(int)*(short *)pcVar21;
      pcVar24 = pcVar24 + unaff_R12;
      in_R10[1] = (float)(int)*(short *)pcVar21 + in_R10[1];
      param_3 = param_3 - 1;
      in_R10 = in_R10 + 4;
    } while (param_3 != 0);
    if (IMAGE_DOS_HEADER_140000000.e_magic + 1 <= pcVar31) {
      psVar28 = (short *)((longlong)unaff_RBX +
                         (longlong)
                         (pbVar34 +
                         (longlong)(IMAGE_DOS_HEADER_140000000.e_magic + unaff_EDI) *
                         (longlong)(int)param_7) * 2);
      do {
        sVar6 = *psVar28;
        pfVar18 = (float *)(ulonglong)(uint)(int)sVar6;
        pIVar29 = (IMAGE_DOS_HEADER *)(pIVar29->e_magic + 1);
        psVar28 = psVar28 + (int)param_7;
        *(float *)(in_R11 + -4 + (longlong)pIVar29 * 4) =
             (float)(int)sVar6 + *(float *)(in_R11 + -4 + (longlong)pIVar29 * 4);
      } while ((longlong)pIVar29 < (longlong)pcVar31);
    }
LAB_140010211:
    if ((int)param_7 == -2) {
      fVar39 = -1.5258789e-05;
    }
    else {
      fVar39 = 1.5258789e-05;
    }
    uVar35 = (uint)unaff_R13;
    if ((0 < (int)uVar35) && (7 < uVar35)) {
      uVar15 = uVar35 & 0x80000007;
      if ((int)uVar15 < 0) {
        uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
      }
      do {
        iVar17 = (int)uVar26;
        pfVar18 = (float *)(in_R11 + (longlong)iVar17 * 4);
        fVar8 = pfVar18[1];
        fVar9 = pfVar18[2];
        fVar10 = pfVar18[3];
        pfVar19 = (float *)(in_R11 + (longlong)iVar17 * 4);
        *pfVar19 = *pfVar18 * fVar39;
        pfVar19[1] = fVar8 * fVar39;
        pfVar19[2] = fVar9 * fVar39;
        pfVar19[3] = fVar10 * fVar39;
        uVar16 = iVar17 + 4;
        pfVar18 = (float *)(ulonglong)uVar16;
        param_2 = iVar17 + 8;
        uVar26 = (ulonglong)param_2;
        pfVar19 = (float *)(in_R11 + (longlong)(int)uVar16 * 4);
        fVar8 = pfVar19[1];
        fVar9 = pfVar19[2];
        fVar10 = pfVar19[3];
        pfVar4 = (float *)(in_R11 + (longlong)(int)uVar16 * 4);
        *pfVar4 = *pfVar19 * fVar39;
        pfVar4[1] = fVar8 * fVar39;
        pfVar4[2] = fVar9 * fVar39;
        pfVar4[3] = fVar10 * fVar39;
      } while ((int)param_2 < (int)(uVar35 - uVar15));
    }
    lVar25 = (longlong)(int)param_2;
    if (lVar25 < (longlong)pcVar31) {
      pfVar18 = (float *)(pcVar31 + -lVar25);
      if (3 < (longlong)pfVar18) {
        lVar23 = lVar25 * 4;
        lVar27 = ((ulonglong)(pcVar31 + (-4 - lVar25)) >> 2) + 1;
        lVar25 = lVar25 + lVar27 * 4;
        pfVar19 = (float *)(in_R11 + 8 + lVar23);
        do {
          pfVar18 = pfVar19 + 4;
          pfVar19[-2] = fVar39 * pfVar19[-2];
          pfVar19[-1] = fVar39 * pfVar19[-1];
          *pfVar19 = fVar39 * *pfVar19;
          pfVar19[1] = fVar39 * pfVar19[1];
          lVar27 = lVar27 + -1;
          pfVar19 = pfVar18;
        } while (lVar27 != 0);
      }
      while (lVar25 < (longlong)pcVar31) {
        lVar25 = lVar25 + 1;
        *(float *)(in_R11 + -4 + lVar25 * 4) = fVar39 * *(float *)(in_R11 + -4 + lVar25 * 4);
      }
    }
    return pfVar18;
  }
switchD_143caadbd_caseD_1:
  if (uVar35 < 0x10000) {
    uVar26 = *(ulonglong *)(lVar25 + 0x1f0);
    uVar37 = 0;
    puVar30 = *(ushort **)pbVar34;
    if (uVar26 != 0) {
      do {
        if (uVar35 == *puVar30) {
          if (param_2 == 2) {
            return (float *)0x0;
          }
          if (param_2 == *(uint *)(puVar30 + 2)) {
            return (float *)0x0;
          }
          if (*(uint *)(puVar30 + 2) == 2) {
            return (float *)0x0;
          }
        }
        uVar37 = uVar37 + 1;
        puVar30 = puVar30 + 0x1c;
      } while (uVar37 < uVar26);
    }
    uStack_40 = 0x143caae3a;
    lVar23 = CRYPTO_realloc(*(ushort **)pbVar34,(uVar26 + 1) * 0x38,"ssl\\statem\\extensions_cust.c"
                            ,0x184);
    if (lVar23 != 0) {
      lVar27 = *(longlong *)(lVar25 + 0x1f0) * 0x38;
      *(longlong *)pbVar34 = lVar23;
      *(undefined2 *)(lVar27 + 2 + lVar23) = 0;
      *(undefined4 *)(lVar27 + 0xc + lVar23) = 0;
      *(uint *)(lVar27 + 4 + lVar23) = param_2;
      *(uint *)(lVar27 + 8 + lVar23) = param_4;
      *(undefined8 *)(lVar27 + 0x28 + lVar23) = param_8;
      *(undefined8 *)(lVar27 + 0x20 + lVar23) = param_7;
      *(undefined8 *)(lVar27 + 0x30 + lVar23) = param_9;
      *(longlong *)(lVar27 + 0x10 + lVar23) = param_5;
      *(undefined8 **)(lVar27 + 0x18 + lVar23) = param_6;
      *(short *)(lVar27 + lVar23) = (short)pcVar31;
      *(longlong *)(lVar25 + 0x1f0) = *(longlong *)(lVar25 + 0x1f0) + 1;
      return (float *)0x1;
    }
  }
  return (float *)0x0;
switchD_143caadbd_caseD_2:
  puVar33 = &uStack_40;
  uStack_40 = 0x48;
switchD_143caadbd_caseD_3:
  if (param_6 == (undefined8 *)0x0) goto LAB_14101006b;
  *(undefined8 *)((longlong)puVar33 + -8) = 0x14101000e;
  lVar25 = FUN_140fe2a00(param_5);
  if (lVar25 == 0) {
    uVar20 = param_6[0x7b];
    *(undefined8 *)((longlong)puVar33 + -8) = 0x141010025;
    lVar25 = FUN_142ee1f00(param_5,uVar20);
    if (lVar25 == 0) goto LAB_14101006b;
    *(undefined8 *)((longlong)puVar33 + -8) = 0x141010032;
    lVar23 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar25 + 0x10) + 0x90) < *(int *)(lVar23 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x88) + (longlong)*(int *)(lVar23 + 0x90) * 8
         ) != lVar23 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (!bVar11) goto LAB_14101006b;
  }
  *(undefined8 *)((longlong)puVar33 + -8) = 0x14101006b;
  FUN_141014050(lVar25);
LAB_14101006b:
  *(undefined8 *)((longlong)puVar33 + -8) = 0x14101007d;
  lVar25 = FUN_140fe2a00(plVar36);
  uVar20 = *(undefined8 *)(uVar26 + 0x3d0);
  *(undefined8 *)((longlong)puVar33 + -8) = 0x14101008f;
  pfVar18 = (float *)FUN_142f02280(plVar36,uVar20);
  pcVar31[0x1aa8] = '\x01';
  if (lVar25 != 0) {
    *(undefined8 *)((longlong)puVar33 + -8) = 0x1410100a3;
    pfVar18 = (float *)FUN_141014050(lVar25);
  }
  return pfVar18;
}



// FUNCTION 143caaee0 add_old_custom_ext body=358 status=ok
// SIG undefined add_old_custom_ext(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int add_old_custom_ext(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143caaefe;
  puVar2 = (undefined8 *)CRYPTO_malloc(0x18,"ssl\\statem\\extensions_cust.c",0x1a0);
  puVar3 = (undefined8 *)CRYPTO_malloc(0x10,"ssl\\statem\\extensions_cust.c",0x1a2);
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 == (undefined8 *)0x0)) {
    CRYPTO_free(puVar2,"ssl\\statem\\extensions_cust.c",0x1a6);
    CRYPTO_free(puVar3,"ssl\\statem\\extensions_cust.c",0x1a7);
    iVar1 = 0;
  }
  else {
    *puVar2 = param_7;
    puVar2[1] = param_5;
    puVar2[2] = param_6;
    *puVar3 = param_9;
    puVar3[1] = param_8;
    iVar1 = FUN_143caad10(param_1,param_2,param_3,param_4,custom_ext_add_old_cb_wrap,
                          custom_ext_free_old_cb_wrap,puVar2,custom_ext_add_old_cb_wrap,puVar3,uVar4
                         );
    if (iVar1 == 0) {
      CRYPTO_free(puVar2,"ssl\\statem\\extensions_cust.c",0x1ba);
      CRYPTO_free(puVar3,"ssl\\statem\\extensions_cust.c",0x1bb);
    }
  }
  return iVar1;
}



// FUNCTION 143cab050 custom_ext_add body=583 status=ok
// SIG undefined custom_ext_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
custom_ext_add(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined4 param_6)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 local_res8 [2];
  undefined8 uVar8;
  undefined8 local_48;
  longlong local_40;
  
  lVar2 = *(longlong *)(param_1 + 0x488);
  uVar6 = 0;
  uVar7 = uVar6;
  if (*(longlong *)(lVar2 + 0x1f0) != 0) {
    do {
      lVar3 = *(longlong *)(lVar2 + 0x1e8);
      local_48 = 0;
      local_40 = 0;
      iVar5 = should_add_extension(param_1,*(undefined4 *)(uVar7 + 8 + lVar3),param_2,param_6);
      if (((iVar5 != 0) &&
          (((param_2 & 0x1f00) == 0 || ((*(byte *)(uVar7 + 0xc + lVar3) & 1) != 0)))) &&
         (((param_2 & 0x80) != 0 || (*(longlong *)(uVar7 + 0x10 + lVar3) != 0)))) {
        pcVar4 = *(code **)(uVar7 + 0x10 + lVar3);
        if (pcVar4 != (code *)0x0) {
          iVar5 = (*pcVar4)(param_1,*(undefined2 *)(uVar7 + lVar3),param_2,&local_48,&local_40,
                            param_4,param_5,local_res8,*(undefined8 *)(uVar7 + 0x20 + lVar3));
          if (iVar5 < 0) {
            ossl_statem_fatal(param_1,local_res8[0],0x22a,0xea,"ssl\\statem\\extensions_cust.c",0xd4
                             );
            return 0;
          }
          if (iVar5 == 0) goto LAB_143cab1f7;
        }
        iVar5 = WPACKET_put_bytes__(param_3,*(undefined2 *)(uVar7 + lVar3),2);
        if ((((iVar5 == 0) || (iVar5 = WPACKET_start_sub_packet_len__(param_3,2), iVar5 == 0)) ||
            ((local_40 != 0 && (iVar5 = WPACKET_memcpy(param_3,local_48), iVar5 == 0)))) ||
           (iVar5 = WPACKET_close(param_3), iVar5 == 0)) {
          uVar8 = 0xe0;
LAB_143cab253:
          ossl_statem_fatal(param_1,0x50,0x22a,0x44,"ssl\\statem\\extensions_cust.c",uVar8);
          return 0;
        }
        if ((param_2 & 0x80) != 0) {
          uVar1 = *(uint *)(uVar7 + 0xc + lVar3);
          if ((~(uVar1 >> 1) & 1) == 0) {
            uVar8 = 0xe9;
            goto LAB_143cab253;
          }
          *(uint *)(uVar7 + 0xc + lVar3) = uVar1 | 2;
        }
        pcVar4 = *(code **)(uVar7 + 0x18 + lVar3);
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(param_1,*(undefined2 *)(uVar7 + lVar3),param_2,local_48,
                    *(undefined8 *)(uVar7 + 0x20 + lVar3));
        }
      }
LAB_143cab1f7:
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + 0x38;
    } while (uVar6 < *(ulonglong *)(lVar2 + 0x1f0));
  }
  return 1;
}



// FUNCTION 143cab2a0 custom_ext_add_old_cb_wrap body=76 status=ok
// SIG undefined custom_ext_add_old_cb_wrap(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
custom_ext_add_old_cb_wrap
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack0000000000000030;
  undefined8 *in_stack_00000048;
  
  if ((code *)in_stack_00000048[1] == (code *)0x0) {
    return 1;
  }
  uStack0000000000000030 = *in_stack_00000048;
                    /* WARNING: Could not recover jumptable at 0x000143cab2e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)in_stack_00000048[1])(param_1,param_2,param_4,param_5);
  return uVar1;
}



// FUNCTION 143cab2f0 custom_ext_find body=65 status=ok
// SIG undefined custom_ext_find(void)

ushort * custom_ext_find(undefined8 *param_1,int param_2,uint param_3,ulonglong *param_4)

{
  ushort *puVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  puVar1 = (ushort *)*param_1;
  if (param_1[1] != 0) {
    do {
      if ((param_3 == *puVar1) &&
         (((param_2 == 2 || (param_2 == *(int *)(puVar1 + 2))) || (*(int *)(puVar1 + 2) == 2)))) {
        if (param_4 == (ulonglong *)0x0) {
          return puVar1;
        }
        *param_4 = uVar2;
        return puVar1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x1c;
    } while (uVar2 < (ulonglong)param_1[1]);
  }
  return (ushort *)0x0;
}



// FUNCTION 143cab340 custom_ext_free_old_cb_wrap body=48 status=ok
// SIG undefined custom_ext_free_old_cb_wrap(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void custom_ext_free_old_cb_wrap
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  if ((code *)param_5[2] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cab368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_5[2])(param_1,param_2,param_4,*param_5);
    return;
  }
  return;
}



// FUNCTION 143cab370 custom_ext_init body=49 status=ok
// SIG undefined custom_ext_init(void)

void custom_ext_init(longlong *param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_1[1] != 0) {
    puVar1 = (undefined4 *)(*param_1 + 0xc);
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 0xe;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong)param_1[1]);
  }
  return;
}



// FUNCTION 143cab3b0 custom_ext_parse body=388 status=ok
// SIG undefined custom_ext_parse(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
custom_ext_parse(longlong param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  ulonglong uVar1;
  int iVar2;
  ushort *puVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 local_res10 [2];
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  uVar7 = 0x143cab3c8;
  uVar4 = 0;
  uVar5 = 2;
  if ((param_2 & 0x180) != 0) {
    uVar5 = (uint)(*(int *)(param_1 + 0x38) != 0);
  }
  puVar3 = *(ushort **)(*(longlong *)(param_1 + 0x488) + 0x1e8);
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x488) + 0x1f0);
  if (uVar1 != 0) {
    do {
      if ((param_3 == *puVar3) &&
         (((uVar5 == 2 || (uVar5 == *(uint *)(puVar3 + 2))) || (*(uint *)(puVar3 + 2) == 2)))) {
        iVar2 = extension_is_relevant(param_1,*(undefined4 *)(puVar3 + 4),param_2);
        if (iVar2 == 0) {
          return 1;
        }
        if (((param_2 & 0x700) != 0) && ((puVar3[6] & 2) == 0)) {
          ossl_statem_fatal(param_1,0x6e,0x22b,0x6e,"ssl\\statem\\extensions_cust.c",
                            CONCAT44(uVar6,0x8f));
          return 0;
        }
        if ((char)param_2 < '\0') {
          *(uint *)(puVar3 + 6) = *(uint *)(puVar3 + 6) | 1;
        }
        if (*(code **)(puVar3 + 0x14) == (code *)0x0) {
          return 1;
        }
        iVar2 = (**(code **)(puVar3 + 0x14))
                          (param_1,param_3,param_2,param_4,param_5,param_6,param_7,local_res10,
                           *(undefined8 *)(puVar3 + 0x18),uVar7);
        if (0 < iVar2) {
          return 1;
        }
        ossl_statem_fatal(param_1,local_res10[0],0x22b,0x6e,"ssl\\statem\\extensions_cust.c",0xa2);
        return 0;
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 0x1c;
    } while (uVar4 < uVar1);
  }
  return 1;
}



// FUNCTION 143cab540 custom_exts_copy body=425 status=ok
// SIG undefined custom_exts_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 custom_exts_copy(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  if (param_2[1] != 0) {
    lVar1 = CRYPTO_memdup(*param_2,param_2[1] * 0x38,"ssl\\statem\\extensions_cust.c",0x116);
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    param_1[1] = param_2[1];
    uVar3 = uVar6;
    uVar7 = uVar6;
    uVar8 = uVar6;
    if (param_2[1] != 0) {
      do {
        lVar1 = *param_2;
        lVar5 = *param_1 + uVar3;
        if (*(code **)(lVar1 + 0x10 + uVar3) == custom_ext_add_old_cb_wrap) {
          if ((int)uVar7 == 0) {
            uVar2 = CRYPTO_memdup(*(undefined8 *)(lVar1 + 0x20 + uVar3),0x18,
                                  "ssl\\statem\\extensions_cust.c",0x12e);
            *(undefined8 *)(lVar5 + 0x20) = uVar2;
            lVar1 = CRYPTO_memdup(*(undefined8 *)(lVar1 + 0x30 + uVar3),0x10,
                                  "ssl\\statem\\extensions_cust.c",0x130);
            *(longlong *)(lVar5 + 0x30) = lVar1;
            if ((*(longlong *)(lVar5 + 0x20) == 0) || (lVar1 == 0)) {
              uVar7 = 1;
            }
          }
          else {
            *(undefined8 *)(lVar5 + 0x20) = 0;
            *(undefined8 *)(lVar5 + 0x30) = 0;
          }
        }
        uVar8 = uVar8 + 1;
        uVar3 = uVar3 + 0x38;
      } while (uVar8 < (ulonglong)param_2[1]);
      if ((int)uVar7 != 0) {
        lVar1 = *param_1;
        if (param_1[1] != 0) {
          puVar4 = (undefined8 *)(lVar1 + 0x20);
          do {
            if ((code *)puVar4[-2] == custom_ext_add_old_cb_wrap) {
              CRYPTO_free(*puVar4,"ssl\\statem\\extensions_cust.c",0x149);
              CRYPTO_free(puVar4[2],"ssl\\statem\\extensions_cust.c",0x14a);
            }
            uVar6 = uVar6 + 1;
            puVar4 = puVar4 + 7;
          } while (uVar6 < (ulonglong)param_1[1]);
          lVar1 = *param_1;
        }
        CRYPTO_free(lVar1,"ssl\\statem\\extensions_cust.c",0x14c);
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 143cab6f0 custom_exts_copy_flags body=129 status=ok
// SIG undefined custom_exts_copy_flags(void)

undefined8 custom_exts_copy_flags(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  ulonglong uVar2;
  short *psVar3;
  ulonglong uVar4;
  
  psVar3 = (short *)*param_2;
  uVar4 = 0;
  if (param_2[1] != 0) {
    do {
      uVar2 = 0;
      psVar1 = (short *)*param_1;
      if (param_1[1] != 0) {
        do {
          if ((*psVar3 == *psVar1) &&
             (((*(int *)(psVar3 + 2) == 2 || (*(int *)(psVar3 + 2) == *(int *)(psVar1 + 2))) ||
              (*(int *)(psVar1 + 2) == 2)))) {
            *(undefined4 *)(psVar1 + 6) = *(undefined4 *)(psVar3 + 6);
            break;
          }
          uVar2 = uVar2 + 1;
          psVar1 = psVar1 + 0x1c;
        } while (uVar2 < (ulonglong)param_1[1]);
      }
      uVar4 = uVar4 + 1;
      psVar3 = psVar3 + 0x1c;
    } while (uVar4 < (ulonglong)param_2[1]);
  }
  return 1;
}



// FUNCTION 143cab780 custom_exts_free body=157 status=ok
// SIG undefined custom_exts_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void custom_exts_free(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  lVar1 = *param_1;
  if (param_1[1] != 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x20);
    do {
      if ((code *)puVar2[-2] == custom_ext_add_old_cb_wrap) {
        CRYPTO_free(*puVar2,"ssl\\statem\\extensions_cust.c",0x149);
        CRYPTO_free(puVar2[2],"ssl\\statem\\extensions_cust.c",0x14a);
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 7;
    } while (uVar3 < (ulonglong)param_1[1]);
    lVar1 = *param_1;
  }
  CRYPTO_free(lVar1,"ssl\\statem\\extensions_cust.c",0x14c);
  return;
}



// FUNCTION 143cab820 SSL_in_before body=21 status=ok
// SIG undefined SSL_in_before(void)

undefined8 SSL_in_before(longlong param_1)

{
  if ((*(int *)(param_1 + 0x5c) == 0) && (*(int *)(param_1 + 0x48) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143cab840 SSL_is_init_finished body=21 status=ok
// SIG undefined SSL_is_init_finished(void)

undefined8 SSL_is_init_finished(longlong param_1)

{
  if ((*(int *)(param_1 + 100) == 0) && (*(int *)(param_1 + 0x5c) == 1)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143cab860 ossl_statem_accept body=25 status=ok
// SIG undefined ossl_statem_accept(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_statem_accept(undefined8 param_1)

{
  state_machine(param_1,1);
  return;
}



// FUNCTION 143cab880 ossl_statem_app_data_allowed body=63 status=ok
// SIG undefined ossl_statem_app_data_allowed(void)

undefined8 ossl_statem_app_data_allowed(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  if (((*(int *)(param_1 + 0x48) != 0) && (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x110) != 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x108) != 0)) {
    iVar1 = *(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x38) == 0) {
      bVar2 = iVar1 == 0xc;
    }
    else {
      if (iVar1 == 0) {
        return 1;
      }
      bVar2 = iVar1 == 0x14;
    }
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cab8c0 ossl_statem_check_finish_init body=115 status=ok
// SIG undefined ossl_statem_check_finish_init(void)

void ossl_statem_check_finish_init(longlong param_1,int param_2)

{
  if (param_2 == -1) {
    if (1 < *(int *)(param_1 + 0x5c) - 0x2eU) {
      return;
    }
    *(undefined4 *)(param_1 + 100) = 1;
  }
  else {
    if (*(int *)(param_1 + 0x38) != 0) {
      if (*(int *)(param_1 + 0x84) != 0xc) {
        return;
      }
      if (*(int *)(param_1 + 0x5c) != 0x2e) {
        return;
      }
      *(undefined4 *)(param_1 + 100) = 1;
      return;
    }
    if (param_2 == 0) {
      if (*(int *)(param_1 + 0x5c) != 0x2e) {
        return;
      }
    }
    else {
      if (1 < *(int *)(param_1 + 0x5c) - 0x2eU) {
        return;
      }
      if (*(int *)(param_1 + 0x84) == 4) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 100) = 1;
    if (param_2 == 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x84) != 3) {
    return;
  }
  *(undefined4 *)(param_1 + 0x84) = 7;
  return;
}



// FUNCTION 143cab940 ossl_statem_clear body=19 status=ok
// SIG undefined ossl_statem_clear(void)

void ossl_statem_clear(longlong param_1)

{
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}



// FUNCTION 143cab960 ossl_statem_connect body=24 status=ok
// SIG undefined ossl_statem_connect(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_statem_connect(undefined8 param_1)

{
  state_machine(param_1,0);
  return;
}



// FUNCTION 143cab980 ossl_statem_export_allowed body=32 status=ok
// SIG undefined ossl_statem_export_allowed(void)

undefined8 ossl_statem_export_allowed(longlong param_1)

{
  if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3d0) != 0) &&
     (*(int *)(param_1 + 0x5c) != 0x24)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143cab9a0 ossl_statem_fatal body=111 status=ok
// SIG undefined ossl_statem_fatal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_statem_fatal(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,
                      undefined8 param_5,undefined4 param_6)

{
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x48) = 1;
  ERR_put_error(0x14,param_3,param_4,param_5,param_6,0x143cab9b0);
  if ((param_2 != -1) && (*(int *)(param_1 + 0x7c) != 1)) {
    ssl3_send_alert(param_1,2,param_2);
  }
  return;
}



// FUNCTION 143caba10 ossl_statem_in_error body=10 status=ok
// SIG undefined ossl_statem_in_error(void)

bool ossl_statem_in_error(longlong param_1)

{
  return *(int *)(param_1 + 0x48) == 1;
}



// FUNCTION 143caba20 ossl_statem_set_in_handshake body=21 status=ok
// SIG undefined ossl_statem_set_in_handshake(void)

void ossl_statem_set_in_handshake(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_2 == 0) {
    iVar1 = -1;
  }
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar1;
  return;
}



// FUNCTION 143caba40 ossl_statem_set_in_init body=4 status=ok
// SIG undefined ossl_statem_set_in_init(void)

void ossl_statem_set_in_init(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}



// FUNCTION 143caba50 ossl_statem_set_renegotiate body=15 status=ok
// SIG undefined ossl_statem_set_renegotiate(void)

void ossl_statem_set_renegotiate(longlong param_1)

{
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0x13;
  return;
}



// FUNCTION 143caba60 ossl_statem_skip_early_data body=39 status=ok
// SIG undefined ossl_statem_skip_early_data(void)

undefined8 ossl_statem_skip_early_data(longlong param_1)

{
  if ((((*(int *)(param_1 + 0x6e8) == 1) && (*(int *)(param_1 + 0x38) != 0)) &&
      (*(int *)(param_1 + 0x5c) == 0x2e)) && (*(int *)(param_1 + 0x4d8) != 2)) {
    return 1;
  }
  return 0;
}


