// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1434ae120 Finalize_GC body=118 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::Prototype<Scaleform::GFx::AS2::XmlObject,Scaleform::GFx::AS2::Environment>
     ::Finalize_GC(longlong param_1)

{
  longlong lVar1;
  
  if (*(undefined8 **)(param_1 + 0xc0) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xc0));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xc0));
  }
  if ((*(longlong *)(param_1 + 0x70) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x38), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x68) != (RefCountNTSImpl *)0x0) {
    RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_143416210(param_1);
  return;
}



// FUNCTION 1434ae1a0 FUN_1434ae1a0 body=265 status=ok
// SIG undefined FUN_1434ae1a0(void)

void FUN_1434ae1a0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  
  bVar1 = *(byte *)(param_2 + 1);
  lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
  if (bVar1 < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    bVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x280) + 0x10) == *(longlong *)(*param_3 + 0x10);
  }
  else {
    bVar3 = *(longlong *)(lVar2 + 0x280) == *param_3;
  }
  if (bVar3 == false) {
    bVar1 = *(byte *)(param_2 + 1);
    lVar2 = Scaleform::GFx::AS2::GlobalContext::GetStringManager(*param_2);
    if (bVar1 < 7) {
      if (*(longlong *)(*param_3 + 0x10) == 0) {
        FUN_14335f970();
      }
      bVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x278) + 0x10) == *(longlong *)(*param_3 + 0x10);
    }
    else {
      bVar4 = *(longlong *)(lVar2 + 0x278) == *param_3;
    }
    if (!bVar4) {
      FUN_1434158c0(param_1,param_2,param_3,param_4);
      return;
    }
  }
  FUN_143423590(param_1 + 0x68,param_1 + -0x20,param_2,param_3,param_4,bVar3);
  return;
}



// FUNCTION 1434ae2b0 FUN_1434ae2b0 body=780 status=ok
// SIG undefined FUN_1434ae2b0(void)

void FUN_1434ae2b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  RefCountNTSImpl *this;
  undefined8 uVar5;
  RefCountImpl *this_00;
  longlong *plVar6;
  RefCountNTSImpl *pRVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 local_res8;
  undefined4 uStackX_c;
  RefCountImpl *local_res10;
  RefCountNTSImpl *local_res18;
  RefCountNTSImpl *local_res20;
  ulonglong in_stack_fffffffffffffed8;
  undefined1 local_118 [32];
  undefined1 local_f8 [200];
  
  lVar2 = FUN_143414210();
  lVar3 = Scaleform::GFx::AS2::Environment::GetMovieImpl(*(undefined8 *)(param_1 + 0x30));
  lVar4 = *(longlong *)(lVar3 + 0x260);
  if (lVar4 == 0) {
    plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar4 = (**(code **)(*plVar6 + 0x50))(plVar6,0x78);
    this = (RefCountNTSImpl *)0x0;
    if (lVar4 != 0) {
      this = (RefCountNTSImpl *)FUN_143df5110(lVar4,lVar3);
    }
    pRVar7 = this + 0x10;
    if (this == (RefCountNTSImpl *)0x0) {
      pRVar7 = (RefCountNTSImpl *)0x0;
    }
    *(RefCountNTSImpl **)(lVar3 + 0x260) = pRVar7;
  }
  else {
    this = (RefCountNTSImpl *)(lVar4 + -0x10);
    if (lVar4 == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
  }
  puVar9 = (undefined8 *)0x0;
  local_118[0] = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    uVar5 = FUN_1434141c0(param_1,0);
    FUN_143411240(local_118,uVar5);
    lVar4 = Scaleform::GFx::AS2::Environment::GetMovieImpl(*(undefined8 *)(param_1 + 0x30));
    this_00 = (RefCountImpl *)(**(code **)(*(longlong *)(lVar4 + 0x10) + 0x18))(lVar4 + 0x10,0x1c);
    if (this_00 == (RefCountImpl *)0x0) {
      if (lVar2 != 0) {
        local_res8 = 0x34000;
        FUN_1432c19d0(lVar2,&local_res8,"No XML parser state set for movie!");
      }
    }
    else {
      Scaleform::RefCountImpl::Release(this_00);
      Scaleform::RefCountImpl::AddRef(this_00);
      local_res10 = this_00;
      FUN_143df68c0(local_f8,&local_res10,1);
      FUN_143411540(local_118,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                    in_stack_fffffffffffffed8 & 0xffffffffffffff00);
      if (this != (RefCountNTSImpl *)0x0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      local_res18 = this;
      plVar6 = (longlong *)
               FUN_143df6af0(local_f8,&local_res20,*(undefined8 *)CONCAT44(uStackX_c,local_res8),
                             *(undefined4 *)((undefined8 *)CONCAT44(uStackX_c,local_res8) + 4),
                             &local_res18);
      if (*plVar6 != 0) {
        piVar1 = (int *)(*plVar6 + 8);
        *piVar1 = *piVar1 + 1;
      }
      pRVar7 = (RefCountNTSImpl *)*plVar6;
      if (local_res20 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(local_res20);
      }
      FUN_1434abb10(param_2,*(undefined8 *)(param_1 + 0x30),pRVar7);
      piVar1 = (int *)(CONCAT44(uStackX_c,local_res8) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      FUN_1434add40(local_f8);
      if (pRVar7 != (RefCountNTSImpl *)0x0) goto LAB_1434ae4a1;
    }
  }
  pRVar7 = (RefCountNTSImpl *)FUN_143df51d0(this);
LAB_1434ae4a1:
  uVar5 = FUN_143df4c20(this + 0x20,&DAT_145af9634,4);
  FUN_143df4940(&local_res10,uVar5);
  FUN_143df49b0(pRVar7 + 0x18,local_res10);
  FUN_143df4970(&local_res10);
  *(RefCountNTSImpl **)(param_2 + 0x70) = pRVar7;
  uVar5 = FUN_143df5430(this,pRVar7);
  if (*(RefCountNTSImpl **)(param_2 + 0x68) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_2 + 0x68));
  }
  *(undefined8 *)(param_2 + 0x68) = uVar5;
  puVar8 = (undefined8 *)
           (**(code **)(**(longlong **)(this + 0x70) + 0x50))(*(longlong **)(this + 0x70),0x18);
  puVar10 = puVar9;
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_145b14138;
    puVar8[2] = 0;
    puVar10 = puVar8;
  }
  *(undefined8 **)(pRVar7 + 0x38) = puVar10;
  plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
  lVar4 = (**(code **)(*plVar6 + 0x50))(plVar6,0x78);
  if (lVar4 != 0) {
    puVar9 = (undefined8 *)FUN_1434a7b90(lVar4,*(undefined8 *)(param_1 + 0x30));
  }
  lVar4 = puVar10[2];
  if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
    FUN_1434a2b80();
  }
  puVar10[2] = puVar9;
  puVar10[1] = param_2;
  FUN_143411120(local_118);
  Scaleform::RefCountNTSImpl::Release(pRVar7);
  Scaleform::RefCountNTSImpl::Release(this);
  return;
}



// FUNCTION 1434ae5c0 FUN_1434ae5c0 body=266 status=ok
// SIG undefined FUN_1434ae5c0(void)

void FUN_1434ae5c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_18;
  longlong local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_18 = 0;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10 = *(longlong *)(param_6 + 4);
    *(int *)(local_10 + 0x18) = *(int *)(local_10 + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b74ea0)(DAT_146b74ea8 + lVar2,&local_18,&local_10);
  }
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar4 != 0) && ((uVar4 & 1) == 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
      FUN_1434ef880(uVar4);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434ae6d0 FUN_1434ae6d0 body=175 status=ok
// SIG undefined FUN_1434ae6d0(void)

void FUN_1434ae6d0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b75450)((longlong)DAT_146b75458 + *(longlong *)(param_3 + 0x10),local_18);
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



// FUNCTION 1434ae780 FUN_1434ae780 body=40 status=ok
// SIG undefined FUN_1434ae780(void)

undefined4 * FUN_1434ae780(undefined4 *param_1,longlong param_2)

{
  *param_1 = 0xb;
  *(undefined8 *)(param_1 + 2) = 0;
  *(longlong *)(param_1 + 4) = param_2;
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  return param_1;
}



// FUNCTION 1434ae7b0 FUN_1434ae7b0 body=99 status=ok
// SIG undefined FUN_1434ae7b0(void)

void FUN_1434ae7b0(uint *param_1,longlong param_2)

{
  undefined8 uStack_10;
  
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  if (9 < ((byte)*param_1 & 0x1f)) {
    if ((*param_1 >> 9 & 1) == 0) {
      FUN_1435920c0(param_1);
    }
    else {
      FUN_143592150();
    }
  }
  *param_1 = *param_1 & 0xffffffeb;
  *param_1 = *param_1 | 0xb;
  *(longlong *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 6) = uStack_10;
  return;
}



// FUNCTION 1434ae820 FUN_1434ae820 body=45 status=ok
// SIG undefined FUN_1434ae820(void)

void FUN_1434ae820(uint *param_1,longlong param_2)

{
  undefined8 uStack_10;
  
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  *param_1 = *param_1 & 0xffffffeb;
  *param_1 = *param_1 | 0xb;
  *(longlong *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 6) = uStack_10;
  return;
}



// FUNCTION 1434ae860 FUN_1434ae860 body=27 status=ok
// SIG undefined FUN_1434ae860(void)

void FUN_1434ae860(uint *param_1,undefined8 param_2)

{
  undefined8 uStack_10;
  
  *param_1 = *param_1 & 0xffffffeb;
  *param_1 = *param_1 | 0xb;
  *(undefined8 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 6) = uStack_10;
  return;
}



// FUNCTION 1434ae890 UInterpTrackInst body=33 status=ok
// SIG undefined UInterpTrackInst(void)

undefined8 * UInterpTrackInst::UInterpTrackInst(undefined8 *param_1)

{
  FUN_1435b9d40();
  *param_1 = &PTR_FUN_145b17510;
  return param_1;
}



// FUNCTION 1434ae8c0 FUN_1434ae8c0 body=33 status=ok
// SIG undefined FUN_1434ae8c0(void)

undefined8 * FUN_1434ae8c0(undefined8 *param_1)

{
  FUN_1435aff10();
  *param_1 = &PTR_FUN_145b17510;
  return param_1;
}



// FUNCTION 1434ae8f0 FUN_1434ae8f0 body=363 status=ok
// SIG undefined FUN_1434ae8f0(void)

void FUN_1434ae8f0(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                  int param_5,uint *param_6)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar3 = *param_3 & 0x1f;
  if (uVar3 == 0) goto LAB_1434aea23;
  if (uVar3 == 0xc) {
    bVar7 = *(longlong *)(param_3 + 4) == 0;
LAB_1434ae92c:
    if (bVar7) {
LAB_1434aea23:
      uVar4 = FUN_1435c8e40(local_18,0x3f1,param_2);
      FUN_1435cbe70(param_2,uVar4);
      piVar1 = (int *)(local_10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  else if (uVar3 == 10) {
    bVar7 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
    goto LAB_1434ae92c;
  }
  if (param_5 == 0) {
    uVar4 = FUN_1435c8e40(local_18,0x427,param_2);
    FUN_1435cbef0(param_2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar3 = *param_6 & 0x1f;
  if (uVar3 != 0) {
    if (uVar3 == 0xc) {
      bVar7 = *(longlong *)(param_6 + 4) == 0;
    }
    else {
      if (uVar3 != 10) goto LAB_1434ae9b1;
      bVar7 = *(longlong *)(param_6 + 4) == *(longlong *)(*(longlong *)(param_6 + 4) + 8) + 0x80;
    }
    if (!bVar7) {
LAB_1434ae9b1:
      lVar2 = *(longlong *)(param_3 + 4);
      lVar5 = FUN_1435caba0(param_2);
      do {
        if (lVar5 == 0) {
          uVar4 = 0;
LAB_1434ae9f3:
          FUN_1434f05f0(param_4,uVar4);
          return;
        }
        uVar4 = FUN_1435b4fa0(lVar5);
        lVar6 = FUN_1435b3ae0(uVar4);
        if (lVar6 == lVar2) {
          uVar4 = 1;
          goto LAB_1434ae9f3;
        }
        lVar5 = *(longlong *)(lVar5 + 0xb0);
      } while( true );
    }
  }
  FUN_1434f05f0(param_4,0);
  return;
}



// FUNCTION 1434aea70 FUN_1434aea70 body=507 status=ok
// SIG undefined FUN_1434aea70(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1434aea70(undefined8 param_1,longlong param_2,uint *param_3,undefined8 param_4,int param_5,
                  undefined8 param_6)

{
  int *piVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 local_res18 [8];
  longlong local_58 [3];
  undefined1 local_40 [8];
  ulonglong local_38;
  uint local_30 [10];
  
  uVar7 = *param_3 & 0x1f;
  if (uVar7 == 0) {
LAB_1434aec29:
    uVar3 = FUN_1435c8e40(local_58 + 1,0x3f1,param_2);
    FUN_1435cbe70(param_2,uVar3);
  }
  else {
    if (uVar7 == 0xc) {
      bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_1434aeaba:
      if (bVar8) goto LAB_1434aec29;
    }
    else if (uVar7 == 10) {
      bVar8 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
      goto LAB_1434aeaba;
    }
    if (param_5 == 0) {
      uVar3 = FUN_1435c8e40(local_58 + 1,0x427,param_2);
      FUN_1435cbef0(param_2,uVar3);
    }
    else {
      if (uVar7 == 0xc) {
        FUN_1435ae6b0(local_40,*(undefined8 *)(param_2 + 0x1d8),param_6);
        uVar2 = (**(code **)(**(longlong **)(param_3 + 4) + 0x38))
                          (*(longlong **)(param_3 + 4),local_40,0);
        FUN_1434f05f0(param_4,uVar2);
        if (9 < ((byte)local_30[0] & 0x1f)) {
          if ((local_30[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_30);
          }
          else {
            FUN_143592150();
          }
        }
        if (local_38 == 0) {
          return;
        }
        if ((local_38 & 1) != 0) {
          return;
        }
        if ((*(uint *)(local_38 + 8) & 0x3fffff) == 0) {
          return;
        }
        *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) - 1;
        FUN_1434ef880();
        return;
      }
      lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
      local_58[0] = lVar6 + 0x48;
      piVar1 = (int *)(lVar6 + 0x60);
      *piVar1 = *piVar1 + 1;
      pcVar4 = (char *)FUN_1435911f0(param_6,local_res18,local_58);
      local_58[2] = local_58[0];
      if (*pcVar4 != '\0') {
        uVar3 = *(undefined8 *)(param_2 + 0x1d8);
        local_58[1] = 0;
        uVar5 = FUN_1435caba0(param_2,param_3);
        lVar6 = FUN_1435af3f0(uVar5,local_58,uVar3,local_58 + 1,0);
        FUN_1434f05f0(param_4,lVar6 != 0);
        local_58[2] = local_58[0];
      }
    }
  }
  piVar1 = (int *)(local_58[2] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434aec80 FUN_1434aec80 body=838 status=ok
// SIG undefined FUN_1434aec80(void)

void FUN_1434aec80(undefined8 param_1,longlong param_2,uint *param_3,uint *param_4,int param_5,
                  uint *param_6)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined4 local_38 [2];
  longlong *local_30;
  ulonglong local_28;
  longlong lStack_20;
  
  plVar12 = (longlong *)0x0;
  local_38[0] = 0;
  if (param_5 == 0) {
    uVar4 = FUN_1435c8e40(&local_28,0x427,param_2);
    FUN_1435cbef0(param_2,uVar4);
    piVar1 = (int *)(lStack_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  if (((*param_3 & 0x1f) == 0xc) && (*(longlong *)(param_3 + 4) != 0)) {
    local_38[0] = 0;
    lVar5 = FUN_1435caba0(param_2,param_3);
    puVar3 = param_6;
    if (((*(int *)(lVar5 + 0x90) == 7) && ((~(*(byte *)(lVar5 + 0x88) >> 5) & 1) != 0)) &&
       (((*param_6 & 0x1f) - 2 < 3 ||
        (((*param_6 & 0x1f) == 10 &&
         (pcVar6 = (char *)Scaleform::GFx::AS3::GetArrayInd
                                     (&param_5,*(undefined8 *)(param_6 + 4),local_38),
         *pcVar6 != '\0')))))) {
      FUN_1434f05f0(param_4,1);
      return;
    }
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_30 = (longlong *)(lVar5 + 0x48);
    piVar1 = (int *)(lVar5 + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar6 = (char *)FUN_1435911f0(puVar3,&param_5,&local_30);
    if (*pcVar6 != '\0') {
      local_28 = 0;
      pbVar7 = (byte *)FUN_1435af3f0(*(undefined8 *)(*(longlong *)(param_3 + 4) + 0x28),&local_30,
                                     *(undefined8 *)(param_2 + 0x1d8),&local_28,
                                     *(longlong *)(param_3 + 4));
      if (pbVar7 == (byte *)0x0) {
        lVar5 = *(longlong *)(param_3 + 4);
        *(int *)(local_30 + 3) = (int)local_30[3] + 1;
        lVar5 = *(longlong *)(lVar5 + 0x30);
        uVar15 = *(uint *)((longlong)local_30 + 0x1c) & 0xffffff;
        if (*(int *)(lVar5 + 8) == 0) {
          lVar11 = -1;
        }
        else {
          uVar8 = (ulonglong)(uVar15 & *(uint *)(lVar5 + 0x30));
          plVar10 = (longlong *)(uVar8 * 0x10 + *(longlong *)(lVar5 + 0x38));
          if (*plVar10 == -1) {
            lVar11 = -1;
          }
          else {
            while( true ) {
              plVar13 = plVar10;
              lVar11 = *plVar13;
              plVar10 = *(longlong **)(*(longlong *)(lVar5 + 0x20) + 8 + lVar11 * 0x10);
              uVar14 = *(uint *)((longlong)plVar10 + 0x1c) & 0xffffff;
              if ((plVar12 == (longlong *)0x0) && (uVar8 != (uVar14 & *(uint *)(lVar5 + 0x30))))
              break;
              if ((uVar14 == uVar15) && (plVar10 == local_30)) goto LAB_1434aeea6;
              uVar8 = plVar13[1];
              if (uVar8 == 0xffffffffffffffff) break;
              plVar10 = (longlong *)(uVar8 * 0x10 + *(longlong *)(lVar5 + 0x38));
              plVar12 = plVar13;
            }
            lVar11 = -1;
          }
        }
LAB_1434aeea6:
        plVar12 = local_30 + 3;
        *(int *)plVar12 = (int)*plVar12 + -1;
        if ((int)*plVar12 == 0) {
          FUN_14335f920(local_30);
        }
        if (lVar11 == -1) {
          plVar12 = local_30 + 3;
          *(int *)plVar12 = (int)*plVar12 + -1;
          iVar2 = (int)*plVar12;
          plVar10 = local_30;
joined_r0x0001434aef71:
          if (iVar2 == 0) {
            FUN_14335f920(plVar10);
          }
          goto LAB_1434aef7b;
        }
        bVar16 = (bool)(~*(byte *)(*(longlong *)(lVar5 + 0x20) + lVar11 * 0x10) & 1);
      }
      else {
        bVar16 = (*pbVar7 & 0xc) == 0;
      }
      FUN_1434f05f0(param_4,bVar16);
    }
    plVar12 = local_30 + 3;
    *(int *)plVar12 = (int)*plVar12 + -1;
    if ((int)*plVar12 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  if (((*param_3 & 0x1f) != 0xb) || (((byte)*param_6 & 0x1f) != 10)) {
LAB_1434aef7b:
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
    local_28 = local_28 & 0xffffffffffffff00;
    *(ulonglong *)(param_4 + 4) = local_28;
    *(longlong *)(param_4 + 6) = lStack_20;
    return;
  }
  plVar10 = *(longlong **)(param_6 + 4);
  plVar13 = plVar10 + 3;
  *(int *)plVar13 = (int)*plVar13 + 1;
  if ((int)*plVar13 == 0) {
    FUN_14335f920(plVar10);
  }
  lVar5 = *plVar10;
  plVar13 = plVar12;
  do {
    plVar9 = (longlong *)((longlong)plVar13 + 1);
    if (*(char *)(lVar5 + (longlong)plVar13) != *(char *)((longlong)plVar13 + 0x145b1407c))
    goto LAB_1434aef40;
    plVar13 = plVar9;
  } while (plVar9 != (longlong *)0x7);
  goto LAB_1434aef53;
  while (plVar12 = plVar13, plVar13 != (longlong *)&DAT_00000004) {
LAB_1434aef40:
    plVar13 = (longlong *)((longlong)plVar12 + 1);
    if (*(char *)(lVar5 + (longlong)plVar12) != (char)plVar12[0x28b62d9e]) {
      plVar12 = plVar10 + 3;
      *(int *)plVar12 = (int)*plVar12 + -1;
      iVar2 = (int)*plVar12;
      goto joined_r0x0001434aef71;
    }
  }
LAB_1434aef53:
  FUN_1434f05f0(param_4,CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
  plVar12 = plVar10 + 3;
  *(int *)plVar12 = (int)*plVar12 + -1;
  if ((int)*plVar12 == 0) {
    FUN_14335f920(plVar10);
  }
  return;
}



// FUNCTION 1434aeff0 FUN_1434aeff0 body=611 status=ok
// SIG undefined FUN_1434aeff0(void)

void FUN_1434aeff0(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  uint param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [8];
  longlong local_30;
  
  lVar2 = param_6;
  uVar12 = param_5;
  if (param_5 == 0) {
    uVar5 = FUN_1435c8e40(&local_48,0x427,param_2);
    FUN_1435cbef0(param_2,uVar5);
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else if ((((byte)*param_3 & 0x1f) == 0xc) && (*(longlong *)(param_3 + 4) != 0)) {
    lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    cVar4 = '\x01';
    local_48 = lVar10 + 0x48;
    piVar1 = (int *)(lVar10 + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar6 = (char *)FUN_1435911f0(param_6,&param_5,&local_48);
    if (*pcVar6 == '\0') {
      piVar1 = (int *)(local_48 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      if (1 < uVar12) {
        cVar4 = FUN_1435909c0(lVar2 + 0x20);
      }
      lVar2 = *(longlong *)(param_3 + 4);
      *(int *)(local_48 + 0x18) = *(int *)(local_48 + 0x18) + 1;
      lVar2 = *(longlong *)(lVar2 + 0x30);
      uVar12 = *(uint *)(local_48 + 0x1c) & 0xffffff;
      if (*(int *)(lVar2 + 8) == 0) {
        lVar10 = -1;
      }
      else {
        uVar7 = (ulonglong)(*(uint *)(lVar2 + 0x30) & uVar12);
        plVar8 = (longlong *)(uVar7 * 0x10 + *(longlong *)(lVar2 + 0x38));
        if (*plVar8 == -1) {
          lVar10 = -1;
        }
        else {
          plVar14 = (longlong *)0x0;
          while( true ) {
            plVar9 = plVar8;
            lVar10 = *plVar9;
            lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar10 * 0x10);
            uVar13 = *(uint *)(lVar3 + 0x1c) & 0xffffff;
            if ((plVar14 == (longlong *)0x0) && (uVar7 != (*(uint *)(lVar2 + 0x30) & uVar13)))
            break;
            if ((uVar13 == uVar12) && (lVar3 == local_48)) goto LAB_1434af19b;
            uVar7 = plVar9[1];
            if (uVar7 == 0xffffffffffffffff) break;
            plVar8 = (longlong *)(uVar7 * 0x10 + *(longlong *)(lVar2 + 0x38));
            plVar14 = plVar9;
          }
          lVar10 = -1;
        }
      }
LAB_1434af19b:
      piVar1 = (int *)(local_48 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(local_48);
      }
      if (lVar10 == -1) {
        uVar5 = FUN_1435c8e40(local_38,0x420,param_2);
        FUN_1435cbe10(param_2,uVar5);
        piVar1 = (int *)(local_30 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        puVar11 = (uint *)(lVar10 * 0x10 + *(longlong *)(lVar2 + 0x20));
        *puVar11 = *puVar11 & 0xfffffffe;
        *puVar11 = *puVar11 | (uint)(cVar4 == '\0');
      }
      piVar1 = (int *)(local_48 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
  }
  else {
    uVar5 = FUN_1435c8e40(local_38,0x3f1,param_2);
    FUN_1435cbe70(param_2,uVar5);
    piVar1 = (int *)(local_30 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434af270 FUN_1434af270 body=278 status=ok
// SIG undefined FUN_1434af270(void)

void FUN_1434af270(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong local_res10;
  longlong local_18 [2];
  
  plVar3 = (longlong *)FUN_1435caba0(param_2,param_3);
  lVar2 = *(longlong *)(param_2 + 0x218);
  local_res10 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x98);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  if (((int)plVar3[0x12] == 10) && ((~(*(byte *)(plVar3 + 0x11) >> 5) & 1) != 0)) {
    if (plVar3 == *(longlong **)(lVar2 + 0xe0)) {
      uVar4 = FUN_1434b0f10(plVar3,local_18,param_3);
    }
    else if (plVar3 == *(longlong **)(lVar2 + 0xe8)) {
      uVar4 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x78))();
    }
    else if (plVar3 == *(longlong **)(lVar2 + 0xf0)) {
      uVar4 = FUN_1434b10e0();
    }
    else {
      uVar4 = FUN_1434b15b0(plVar3,local_18,param_3);
    }
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,local_18);
  }
  FUN_143360170(&local_res10,uVar4);
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143360170(&local_res10,*(longlong *)(param_2 + 0x10) + 0xa0);
  FUN_143590250(param_4,&local_res10);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434af3c0 UMaterialExpression body=33 status=ok
// SIG undefined UMaterialExpression(void)

undefined8 * UMaterialExpression::UMaterialExpression(undefined8 *param_1)

{
  FUN_1435b93d0();
  *param_1 = &PTR_FUN_145b175d0;
  return param_1;
}



// FUNCTION 1434af3f0 FUN_1434af3f0 body=173 status=ok
// SIG undefined FUN_1434af3f0(void)

void FUN_1434af3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b9d40(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b17510;
  }
  local_28[0] = 0;
  local_20 = 0;
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



// FUNCTION 1434af4b0 UMaterialExpression body=33 status=ok
// SIG undefined UMaterialExpression(void)

undefined8 * UMaterialExpression::UMaterialExpression(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434af4e0 FUN_1434af4e0 body=227 status=ok
// SIG undefined FUN_1434af4e0(void)

undefined8 * FUN_1434af4e0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b14f60);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b14f60);
    *puVar3 = &PTR_FUN_145b175d0;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b176a8;
  }
  return param_1;
}



// FUNCTION 1434af5d0 FUN_1434af5d0 body=33 status=ok
// SIG undefined FUN_1434af5d0(void)

undefined8 * FUN_1434af5d0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b176a8;
  return param_1;
}



// FUNCTION 1434af600 FUN_1434af600 body=116 status=ok
// SIG undefined FUN_1434af600(void)

void FUN_1434af600(longlong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 200))();
  }
  ppuVar1 = &PTR_LAB_145b156d0;
  lVar2 = 7;
  do {
    FUN_1434e7f40(param_2,ppuVar1);
    ppuVar1 = ppuVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1435b3fb0(param_1,param_2);
  return;
}



// FUNCTION 1434af680 FUN_1434af680 body=38 status=ok
// SIG undefined FUN_1434af680(void)

void FUN_1434af680(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001434af6a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 1434af6b0 FUN_1434af6b0 body=378 status=ok
// SIG undefined FUN_1434af6b0(void)

void FUN_1434af6b0(longlong param_1,undefined8 param_2,int *param_3,uint *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint local_28 [2];
  undefined8 local_20;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0xd8);
  if (*param_3 != 0) {
    uVar4 = *param_4 & 0x1f;
    if (uVar4 == 5) {
      uVar2 = *(undefined8 *)(param_4 + 4);
      lVar5 = FUN_1435b4fe0(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x218) + 0xd8)
                           );
      uVar3 = *(undefined8 *)(*(longlong *)(lVar5 + 0x28) + 0xe8);
      puVar6 = (undefined8 *)FUN_1435b5bc0(uVar3);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        FUN_1434afa90(puVar6,uVar3);
        puVar6[9] = uVar2;
        *puVar6 = &PTR_ForEachChild_GC_145b17a88;
        puVar6[10] = plVar1;
        if (plVar1 != (longlong *)0x0) {
          *(uint *)(plVar1 + 1) = (int)plVar1[1] + 1U & 0x8fffffff;
        }
      }
      local_28[0] = 0;
      local_20 = 0;
      Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar6);
      FUN_143590140(param_2,local_28);
      if (((byte)local_28[0] & 0x1f) < 10) {
        return;
      }
      if ((local_28[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_28);
        return;
      }
      FUN_143592150();
      return;
    }
    if (uVar4 == 0) goto LAB_1434af810;
    if (uVar4 == 0xc) {
      bVar7 = *(longlong *)(param_4 + 4) == 0;
    }
    else {
      if (uVar4 != 10) goto LAB_1434af7fb;
      bVar7 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
    }
    if (!bVar7) {
LAB_1434af7fb:
      FUN_143590140(param_2,param_4);
      return;
    }
  }
LAB_1434af810:
  (**(code **)(*plVar1 + 0x58))(plVar1,param_2,plVar1);
  return;
}



// FUNCTION 1434af840 FUN_1434af840 body=205 status=ok
// SIG undefined FUN_1434af840(void)

void FUN_1434af840(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(plVar4[0x13] + 0x10) + 0x218),"[class ",7
                            );
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,&local_res20);
  uVar3 = Scaleform::GFx::ASString::operator+(&local_res8,&local_res18,uVar3);
  plVar4 = (longlong *)FUN_143360200(uVar3,&local_res10,&DAT_145b18618);
  lVar2 = *plVar4;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434af920 FUN_1434af920 body=51 status=ok
// SIG undefined FUN_1434af920(void)

undefined8 * FUN_1434af920(undefined8 *param_1)

{
  FUN_1435b93d0();
  param_1[0x11] = param_1[0x11] | 4;
  *param_1 = &PTR_FUN_145b17788;
  *(undefined4 *)(param_1 + 0x10) = 0x40;
  return param_1;
}



// FUNCTION 1434af960 FUN_1434af960 body=106 status=ok
// SIG undefined FUN_1434af960(void)

undefined8 * FUN_1434af960(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1435b9d40(puVar1,param_3);
    *param_2 = puVar1;
    *puVar1 = &PTR_FUN_145b17510;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434af9d0 FUN_1434af9d0 body=173 status=ok
// SIG undefined FUN_1434af9d0(void)

void FUN_1434af9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b9d40(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b17510;
  }
  local_28[0] = 0;
  local_20 = 0;
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



// FUNCTION 1434afa90 FUN_1434afa90 body=143 status=ok
// SIG undefined FUN_1434afa90(void)

undefined8 * FUN_1434afa90(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined1 local_res8 [8];
  
  FUN_1435b9d40();
  *param_1 = &PTR_FUN_145b17800;
  param_1[8] = 0;
  puVar3 = (ulonglong *)FUN_1435ca830(*(undefined8 *)(param_1[5] + 0x98),local_res8);
  uVar1 = param_1[8];
  uVar2 = *puVar3;
  if (uVar2 != uVar1) {
    if (uVar1 != 0) {
      if ((uVar1 & 1) != 0) {
        param_1[8] = uVar1 - 1;
        param_1[8] = uVar2;
        return param_1;
      }
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    param_1[8] = uVar2;
  }
  return param_1;
}



// FUNCTION 1434afb30 FUN_1434afb30 body=87 status=ok
// SIG undefined FUN_1434afb30(void)

void FUN_1434afb30(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_FUN_145b17800;
  uVar1 = param_1[8];
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      param_1[8] = uVar1 - 1;
      FUN_1435b9dc0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 1434afb90 FUN_1434afb90 body=356 status=ok
// SIG undefined FUN_1434afb90(void)

void FUN_1434afb90(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res10 [3];
  longlong local_68 [3];
  undefined **local_50;
  longlong local_40;
  uint local_38;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  if ((*(int *)(*(longlong *)(*(longlong *)(param_3 + 4) + 0x28) + 0x90) != 10) &&
     (((byte)*param_3 & 0x1f) == 5)) {
    FUN_143354c50(local_68);
    local_res10[0] = FUN_143360950(*(undefined8 *)(lVar2 + 0x218),"[object Function-");
    *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
    local_38 = local_38 & 0xfffffff0 | 0x10;
    (**(code **)(local_68[0] + 0x18))(local_68);
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(local_40 + lVar2) != '\0');
    FUN_143360130(local_res10);
    FUN_143360130(local_res10,&DAT_145b18618,1);
    FUN_143590250(param_4,local_res10);
    piVar1 = (int *)(local_res10[0] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    local_50 = &PTR_FUN_145af1858;
    FUN_143353a80(local_68);
    return;
  }
  local_res10[0] = FUN_143360950(*(undefined8 *)(lVar2 + 0x218),"function Function() {}",0x16);
  *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
  FUN_143590250(param_4,local_res10);
  piVar1 = (int *)(local_res10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434afd00 FUN_1434afd00 body=238 status=ok
// SIG undefined FUN_1434afd00(void)

void FUN_1434afd00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  uint local_58 [2];
  undefined8 local_50;
  uint local_38 [2];
  undefined8 local_30;
  
  puVar1 = (undefined8 *)FUN_1435ca830(*(undefined8 *)(param_1[5] + 0x98),local_res8);
  local_58[0] = 0;
  local_50 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_58,*puVar1);
  FUN_143590140(param_2,local_58);
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  local_38[0] = 0;
  local_30 = 0;
  (**(code **)(*param_1 + 0x50))(param_1,param_2,local_38,param_3,param_4,param_5);
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 1434afe40 FUN_1434afe40 body=26 status=ok
// SIG undefined FUN_1434afe40(void)

void FUN_1434afe40(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xc0))();
  *param_2 = uVar1;
  return;
}



// FUNCTION 1434afe60 FUN_1434afe60 body=298 status=ok
// SIG undefined FUN_1434afe60(void)

void FUN_1434afe60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,longlong param_6)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint local_28 [2];
  undefined8 local_20;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  puVar1 = (uint *)FUN_143590540();
  local_28[0] = *puVar1;
  local_20 = *(undefined8 *)(puVar1 + 2);
  local_18 = puVar1[4];
  uStack_14 = puVar1[5];
  uStack_10 = puVar1[6];
  uStack_c = puVar1[7];
  if (9 < ((byte)*puVar1 & 0x1f)) {
    if ((*puVar1 >> 9 & 1) == 0) {
      FUN_143592070(puVar1);
    }
    else {
      FUN_143592140();
    }
  }
  if (param_5 == 0) {
    lVar2 = FUN_143590540();
    lVar3 = 0;
  }
  else {
    param_5 = param_5 + -1;
    lVar3 = param_6 + 0x20;
    lVar2 = param_6;
  }
  FUN_1435ce880(param_2,param_3,lVar2,local_28,&param_5,lVar3,0,1);
  FUN_1435904e0(param_4,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1434aff90 FUN_1434aff90 body=722 status=ok
// SIG undefined FUN_1434aff90(void)

void FUN_1434aff90(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,longlong param_6)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68 [2];
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48 [2];
  undefined8 local_40;
  longlong local_38;
  
  puVar4 = (uint *)FUN_143590540();
  local_68[0] = *puVar4;
  local_60 = *(undefined8 *)(puVar4 + 2);
  local_58 = puVar4[4];
  uStack_54 = puVar4[5];
  uStack_50 = puVar4[6];
  uStack_4c = puVar4[7];
  if (9 < ((byte)*puVar4 & 0x1f)) {
    if ((*puVar4 >> 9 & 1) == 0) {
      FUN_143592070(puVar4);
    }
    else {
      FUN_143592140();
    }
  }
  lVar6 = param_6;
  uVar7 = 0;
  if (param_5 == 0) {
    param_5 = 0;
    lVar6 = FUN_143590540();
LAB_1434b0205:
    FUN_1435ce880(param_2,param_3,lVar6,local_68,&param_5,0,0,1);
  }
  else {
    if (param_5 == 1) {
      param_5 = 0;
      goto LAB_1434b0205;
    }
    local_48[0] = 0;
    local_40 = 0;
    cVar3 = (**(code **)(**(longlong **)(param_2 + 0x248) + 0x58))
                      (*(longlong **)(param_2 + 0x248),param_6 + 0x20,local_48);
    if (cVar3 == '\0') {
      uVar5 = FUN_1435c8e40(&local_88,0x45c,param_2);
      FUN_1435cbe70(param_2,uVar5);
      piVar1 = (int *)(local_80 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (9 < ((byte)local_48[0] & 0x1f)) {
        if ((local_48[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_48);
        }
        else {
          FUN_143592150();
        }
      }
      goto LAB_1434b0220;
    }
    if ((local_48[0] & 0x1f) == 0xc) {
      bVar8 = local_38 == 0;
LAB_1434b005b:
      if (!bVar8) goto LAB_1434b0093;
      param_5 = 0;
      FUN_1435ce880(param_2,param_3,lVar6,local_68,&param_5,0,0,1);
    }
    else {
      if ((local_48[0] & 0x1f) == 10) {
        bVar8 = local_38 == *(longlong *)(local_38 + 8) + 0x80;
        goto LAB_1434b005b;
      }
LAB_1434b0093:
      local_70 = *(undefined8 *)(param_2 + 0x48);
      uVar2 = *(ulonglong *)(local_38 + 0x40);
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      if (uVar2 != 0) {
        FUN_1434efd80(&local_88,local_70,uVar2);
        if (uVar2 != 0) {
          do {
            uVar5 = FUN_1434b4f50(local_38 + 0x40,uVar7);
            FUN_1434ef7a0(&local_88,uVar5);
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar2);
        }
      }
      param_5 = (int)uVar2;
      FUN_1435ce880(param_2,param_3,lVar6,local_68,&param_5,local_88,0,1);
      FUN_1434e5f70(&local_88);
    }
    if (9 < ((byte)local_48[0] & 0x1f)) {
      if ((local_48[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_48);
      }
      else {
        FUN_143592150();
      }
    }
  }
  FUN_1435904e0(param_4,local_68);
LAB_1434b0220:
  if (9 < ((byte)local_68[0] & 0x1f)) {
    if ((local_68[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_68);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 1434b0270 FUN_1434b0270 body=390 status=ok
// SIG undefined FUN_1434b0270(void)

undefined8 *
FUN_1434b0270(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  FUN_1434afa90();
  param_1[9] = param_4;
  *param_1 = &PTR_FUN_145b178d8;
  param_1[10] = 0xffffffffffffffe0;
  lVar9 = 0;
  param_1[0xb] = 0;
  lVar2 = *(longlong *)(param_1[5] + 0x98);
  lVar8 = (ulonglong)(uint)(*(int *)(lVar2 + 0x98) - *(int *)(lVar2 + 0xa0)) + 0x20;
  FUN_1435a99b0(param_1 + 10,
                CONCAT62((int6)(lVar8 >> 0x15),
                         (short)(lVar8 >> 5) +
                         (short)((longlong)
                                 ((ulonglong)(uint)((int)*param_3 - (int)param_3[1]) + 0x20) >> 5)))
  ;
  lVar10 = lVar9;
  for (lVar8 = (*param_3 - param_3[1]) + 0x20 >> 5; lVar8 != 0; lVar8 = lVar8 + -1) {
    puVar7 = (uint *)(param_3[1] + lVar10);
    plVar1 = param_1 + 10;
    *plVar1 = *plVar1 + 0x20;
    puVar3 = (uint *)param_1[10];
    if (*plVar1 != 0) {
      *puVar3 = *puVar7;
      *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar7 + 2);
      uVar4 = puVar7[5];
      uVar5 = puVar7[6];
      uVar6 = puVar7[7];
      puVar3[4] = puVar7[4];
      puVar3[5] = uVar4;
      puVar3[6] = uVar5;
      puVar3[7] = uVar6;
      if (9 < ((byte)*puVar7 & 0x1f)) {
        if ((*puVar7 >> 9 & 1) == 0) {
          FUN_143592070();
        }
        else {
          FUN_143592140();
        }
      }
    }
    lVar10 = lVar10 + 0x20;
  }
  for (lVar8 = (*(longlong *)(lVar2 + 0x98) - *(longlong *)(lVar2 + 0xa0)) + 0x20 >> 5; lVar8 != 0;
      lVar8 = lVar8 + -1) {
    puVar7 = (uint *)(*(longlong *)(lVar2 + 0xa0) + lVar9);
    plVar1 = param_1 + 10;
    *plVar1 = *plVar1 + 0x20;
    puVar3 = (uint *)param_1[10];
    if (*plVar1 != 0) {
      *puVar3 = *puVar7;
      *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar7 + 2);
      uVar4 = puVar7[5];
      uVar5 = puVar7[6];
      uVar6 = puVar7[7];
      puVar3[4] = puVar7[4];
      puVar3[5] = uVar4;
      puVar3[6] = uVar5;
      puVar3[7] = uVar6;
      if (9 < ((byte)*puVar7 & 0x1f)) {
        if ((*puVar7 >> 9 & 1) == 0) {
          FUN_143592070();
        }
        else {
          FUN_143592140();
        }
      }
    }
    lVar9 = lVar9 + 0x20;
  }
  return param_1;
}



// FUNCTION 1434b0400 FUN_1434b0400 body=59 status=ok
// SIG undefined FUN_1434b0400(void)

void FUN_1434b0400(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1435b16a0();
  FUN_1434e8d30(param_2,param_1 + 0x50,param_3);
  return;
}



// FUNCTION 1434b0450 FUN_1434b0450 body=390 status=ok
// SIG undefined FUN_1434b0450(void)

undefined8 * FUN_1434b0450(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  FUN_1434afa90();
  lVar9 = 0;
  *param_1 = &PTR_ForEachChild_GC_145b179b0;
  param_1[9] = 0xffffffffffffffe0;
  param_1[10] = 0;
  lVar2 = *(longlong *)(param_1[5] + 0x98);
  lVar8 = (ulonglong)(uint)(*(int *)(lVar2 + 0x98) - *(int *)(lVar2 + 0xa0)) + 0x20;
  FUN_1435a99b0(param_1 + 9,
                CONCAT62((int6)(lVar8 >> 0x15),
                         (short)(lVar8 >> 5) +
                         (short)((longlong)
                                 ((ulonglong)(uint)((int)*param_3 - (int)param_3[1]) + 0x20) >> 5)))
  ;
  lVar10 = lVar9;
  for (lVar8 = (*param_3 - param_3[1]) + 0x20 >> 5; lVar8 != 0; lVar8 = lVar8 + -1) {
    puVar7 = (uint *)(param_3[1] + lVar10);
    plVar1 = param_1 + 9;
    *plVar1 = *plVar1 + 0x20;
    puVar3 = (uint *)param_1[9];
    if (*plVar1 != 0) {
      *puVar3 = *puVar7;
      *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar7 + 2);
      uVar4 = puVar7[5];
      uVar5 = puVar7[6];
      uVar6 = puVar7[7];
      puVar3[4] = puVar7[4];
      puVar3[5] = uVar4;
      puVar3[6] = uVar5;
      puVar3[7] = uVar6;
      if (9 < ((byte)*puVar7 & 0x1f)) {
        if ((*puVar7 >> 9 & 1) == 0) {
          FUN_143592070();
        }
        else {
          FUN_143592140();
        }
      }
    }
    lVar10 = lVar10 + 0x20;
  }
  for (lVar8 = (*(longlong *)(lVar2 + 0x98) - *(longlong *)(lVar2 + 0xa0)) + 0x20 >> 5; lVar8 != 0;
      lVar8 = lVar8 + -1) {
    puVar7 = (uint *)(*(longlong *)(lVar2 + 0xa0) + lVar9);
    plVar1 = param_1 + 9;
    *plVar1 = *plVar1 + 0x20;
    puVar3 = (uint *)param_1[9];
    if (*plVar1 != 0) {
      *puVar3 = *puVar7;
      *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar7 + 2);
      uVar4 = puVar7[5];
      uVar5 = puVar7[6];
      uVar6 = puVar7[7];
      puVar3[4] = puVar7[4];
      puVar3[5] = uVar4;
      puVar3[6] = uVar5;
      puVar3[7] = uVar6;
      if (9 < ((byte)*puVar7 & 0x1f)) {
        if ((*puVar7 >> 9 & 1) == 0) {
          FUN_143592070();
        }
        else {
          FUN_143592140();
        }
      }
    }
    lVar9 = lVar9 + 0x20;
  }
  return param_1;
}



// FUNCTION 1434b05e0 FUN_1434b05e0 body=106 status=ok
// SIG undefined FUN_1434b05e0(void)

void FUN_1434b05e0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_ForEachChild_GC_145b179b0;
  Scaleform::GFx::AS3::PrimitiveVS::~PrimitiveVS(param_1 + 9);
  *param_1 = &PTR_FUN_145b17800;
  uVar1 = param_1[8];
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      param_1[8] = uVar1 - 1;
      FUN_1435b9dc0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 1434b0650 ForEachChild_GC body=59 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl::Function::ForEachChild_GC
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1435b16a0();
  FUN_1434e8d30(param_2,param_1 + 0x48,param_3);
  return;
}



// FUNCTION 1434b06a0 FUN_1434b06a0 body=440 status=ok
// SIG undefined FUN_1434b06a0(void)

void FUN_1434b06a0(longlong *param_1,uint *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined1 param_6)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  uint *puVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  uint local_58 [8];
  
  lVar3 = param_1[5];
  local_res10 = *(undefined8 *)(lVar3 + 0x98);
  uVar6 = *param_2 & 0x1f;
  if (uVar6 == 0) {
LAB_1434b0707:
    puVar10 = (uint *)param_1[10];
    if (((param_1[9] - param_1[10]) + 0x20U & 0xffffffffffffffe0) != 0) goto LAB_1434b0722;
  }
  else if (uVar6 == 0xc) {
    bVar11 = *(longlong *)(param_2 + 4) == 0;
LAB_1434b0700:
    if (bVar11) goto LAB_1434b0707;
  }
  else if (uVar6 == 10) {
    bVar11 = *(longlong *)(param_2 + 4) == *(longlong *)(*(longlong *)(param_2 + 4) + 8) + 0x80;
    goto LAB_1434b0700;
  }
  puVar10 = param_2;
LAB_1434b0722:
  uVar2 = *(undefined4 *)(lVar3 + 0x100);
  local_res18 = param_3;
  uVar7 = (**(code **)(*param_1 + 0xd0))(param_1);
  uVar4 = *(undefined8 *)(lVar3 + 0x108);
  uVar5 = *(undefined8 *)(param_1[10] + 0x10);
  uVar8 = FUN_143590110(local_58,param_1);
  pcVar9 = (char *)FUN_1434e80d0(local_res10,local_res8,uVar8,uVar4,uVar2,local_res18,uVar5,
                                 param_1 + 9,uVar7,puVar10,param_4,*param_4,param_5,param_6,0,0);
  cVar1 = *pcVar9;
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  if (cVar1 != '\0') {
    *(uint *)(param_1 + 1) = (int)param_1[1] + 1U & 0x8fffffff;
    FUN_1435c8f90(*(undefined8 *)(param_1[5] + 0x98),1);
    if ((((ulonglong)param_1 & 1) == 0) && ((*(uint *)(param_1 + 1) & 0x3fffff) != 0)) {
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) - 1;
      FUN_1434ef880(param_1);
    }
  }
  return;
}



// FUNCTION 1434b0860 FUN_1434b0860 body=65 status=ok
// SIG undefined FUN_1434b0860(void)

longlong * FUN_1434b0860(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),"function Function() {}",0x16);
  *param_2 = lVar1;
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  return param_2;
}



// FUNCTION 1434b08b0 FUN_1434b08b0 body=24 status=ok
// SIG undefined FUN_1434b08b0(void)

undefined8 FUN_1434b08b0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x78))();
  return param_2;
}



// FUNCTION 1434b08d0 FUN_1434b08d0 body=62 status=ok
// SIG undefined FUN_1434b08d0(void)

void FUN_1434b08d0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 local_res8 [8];
  
  uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x108) + 0xa0);
  FUN_14358fb50(uVar1,local_res8,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x100));
  Scaleform::GFx::AS3::Abc::File::GetParamNum(uVar1,local_res8[0]);
  return;
}



// FUNCTION 1434b0920 FUN_1434b0920 body=117 status=ok
// SIG undefined FUN_1434b0920(void)

undefined8 FUN_1434b0920(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_res18;
  
  uVar4 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x108);
  puVar2 = (undefined4 *)
           FUN_14358fb50(*(undefined8 *)(lVar1 + 0xa0),local_res10,
                         *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x100));
  pcVar3 = (char *)FUN_1435bcc10(local_res8,lVar1,*puVar2,&local_res18);
  if (*pcVar3 == '\0') {
    return 0;
  }
  if (local_res18 != 0) {
    uVar4 = *(undefined8 *)(local_res18 + 0xd8);
  }
  return uVar4;
}



// FUNCTION 1434b09a0 FUN_1434b09a0 body=163 status=ok
// SIG undefined FUN_1434b09a0(void)

void FUN_1434b09a0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  plVar1 = (longlong *)(param_1 + 0x48);
  uVar8 = (longlong)((ulonglong)(uint)(*param_2 - param_2[2]) + 0x20) >> 5;
  FUN_1435a99b0(plVar1,uVar8 & 0xffff);
  lVar7 = 0;
  if ((short)uVar8 != 0) {
    uVar8 = uVar8 & 0xffff;
    do {
      puVar6 = (uint *)(*(longlong *)(param_2 + 2) + lVar7);
      *plVar1 = *plVar1 + 0x20;
      puVar2 = (uint *)*plVar1;
      if (*plVar1 != 0) {
        *puVar2 = *puVar6;
        *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar6 + 2);
        uVar3 = puVar6[5];
        uVar4 = puVar6[6];
        uVar5 = puVar6[7];
        puVar2[4] = puVar6[4];
        puVar2[5] = uVar3;
        puVar2[6] = uVar4;
        puVar2[7] = uVar5;
        if (9 < ((byte)*puVar6 & 0x1f)) {
          if ((*puVar6 >> 9 & 1) == 0) {
            FUN_143592070();
          }
          else {
            FUN_143592140();
          }
        }
      }
      lVar7 = lVar7 + 0x20;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 1434b0a50 FUN_1434b0a50 body=237 status=ok
// SIG undefined FUN_1434b0a50(void)

void FUN_1434b0a50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  uint *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  puVar1 = (uint *)FUN_143590540();
  local_28[0] = *puVar1;
  local_20 = *(undefined8 *)(puVar1 + 2);
  local_18 = puVar1[4];
  uStack_14 = puVar1[5];
  uStack_10 = puVar1[6];
  uStack_c = puVar1[7];
  if (9 < ((byte)*puVar1 & 0x1f)) {
    if ((*puVar1 >> 9 & 1) == 0) {
      FUN_143592070(puVar1);
    }
    else {
      FUN_143592140();
    }
  }
  FUN_1435cd920(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),
                *(undefined8 *)(param_1 + 0x48),param_2,local_28,param_4,param_5,param_6);
  FUN_1435904e0(local_28,param_3);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 1434b0b50 FUN_1434b0b50 body=176 status=ok
// SIG undefined FUN_1434b0b50(void)

longlong * FUN_1434b0b50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong local_68 [3];
  undefined **local_50;
  longlong local_40;
  uint local_38;
  
  FUN_143354c50(local_68,*(undefined8 *)(param_1 + 0x48));
  lVar1 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),"Function-");
  *param_2 = lVar1;
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  local_38 = local_38 & 0xfffffff0 | 0x10;
  (**(code **)(local_68[0] + 0x18))(local_68);
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(local_40 + lVar1) != '\0');
  FUN_143360130(param_2);
  local_50 = &PTR_FUN_145af1858;
  FUN_143353a80(local_68);
  return param_2;
}



// FUNCTION 1434b0c10 FUN_1434b0c10 body=45 status=ok
// SIG undefined FUN_1434b0c10(void)

undefined8 FUN_1434b0c10(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14358fec0(*(undefined8 *)(param_1 + 0x48),param_2,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10),param_3)
  ;
  return param_2;
}



// FUNCTION 1434b0ca0 ForEachChild_GC body=61 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl::ThunkFunction::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b16a0();
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (*param_3)(param_2,param_1 + 0x50);
  }
  return;
}



// FUNCTION 1434b0cf0 FUN_1434b0cf0 body=185 status=ok
// SIG undefined FUN_1434b0cf0(void)

void FUN_1434b0cf0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28 [2];
  undefined8 local_20;
  longlong local_18;
  
  local_18 = *(longlong *)(param_1 + 0x48);
  local_20 = 0;
  local_28[0] = 5;
  uVar1 = (uint)(*(ulonglong *)(local_18 + 0x20) >> 9) & 0xfff;
  if (uVar1 == 0xfff) {
    uVar1 = (uint)(*(ulonglong *)(local_18 + 0x20) >> 6) & 7;
  }
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe3;
  *param_2 = *param_2 | 3;
  param_2[4] = uVar1;
  param_2[5] = uStack_34;
  param_2[6] = uStack_30;
  param_2[7] = uStack_2c;
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1434b0db0 FUN_1434b0db0 body=198 status=ok
// SIG undefined FUN_1434b0db0(void)

void FUN_1434b0db0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x28);
  uVar4 = FUN_1435ca910(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98));
  cVar3 = FUN_1435b5020(uVar2,uVar4);
  if (cVar3 == '\0') {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x40a,uVar2);
    FUN_1435cbe70(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    FUN_1434b0a50(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



// FUNCTION 1434b0e80 FUN_1434b0e80 body=111 status=ok
// SIG undefined FUN_1434b0e80(void)

undefined8 * FUN_1434b0e80(undefined8 *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  FUN_1435b93d0(param_1,param_2,&PTR_DAT_145b159a0);
  *(undefined4 *)(param_1 + 0x12) = 10;
  *param_1 = &PTR_FUN_145b17c38;
  ppuVar1 = &PTR_FUN_1467d0bc0;
  lVar2 = 3;
  do {
    FUN_1435b6830(param_1,&PTR_DAT_145b15970,ppuVar1);
    ppuVar1 = ppuVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 1434b0f10 FUN_1434b0f10 body=172 status=ok
// SIG undefined FUN_1434b0f10(void)

longlong * FUN_1434b0f10(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong local_68 [3];
  undefined **local_50;
  longlong local_40;
  uint local_38;
  
  FUN_143354c50(local_68,*(undefined8 *)(param_3 + 0x10));
  lVar1 = FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10) + 0x218)
                        ,"Function-");
  *param_2 = lVar1;
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  local_38 = local_38 & 0xfffffff0 | 0x10;
  (**(code **)(local_68[0] + 0x18))(local_68);
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(local_40 + lVar1) != '\0');
  FUN_143360130(param_2);
  local_50 = &PTR_FUN_145af1858;
  FUN_143353a80(local_68);
  return param_2;
}



// FUNCTION 1434b0fd0 FUN_1434b0fd0 body=116 status=ok
// SIG undefined FUN_1434b0fd0(void)

void FUN_1434b0fd0(undefined8 param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + 0x20);
  uVar2 = (uint)(uVar1 >> 9) & 0xfff;
  if (uVar2 == 0xfff) {
    uVar2 = (uint)(uVar1 >> 6) & 7;
  }
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
  *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_14,uVar2);
  *(undefined8 *)(param_4 + 6) = uStack_10;
  return;
}



// FUNCTION 1434b1050 FUN_1434b1050 body=111 status=ok
// SIG undefined FUN_1434b1050(void)

undefined8 * FUN_1434b1050(undefined8 *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  FUN_1435b93d0(param_1,param_2,&PTR_DAT_145b159a0);
  *(undefined4 *)(param_1 + 0x12) = 10;
  *param_1 = &PTR_FUN_145b17cb0;
  ppuVar1 = &PTR_FUN_1467d0c50;
  lVar2 = 3;
  do {
    FUN_1435b6830(param_1,&PTR_DAT_145b15970,ppuVar1);
    ppuVar1 = ppuVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 1434b10e0 FUN_1434b10e0 body=172 status=ok
// SIG undefined FUN_1434b10e0(void)

longlong * FUN_1434b10e0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong local_68 [3];
  undefined **local_50;
  longlong local_40;
  uint local_38;
  
  FUN_143354b50(local_68,*(undefined4 *)(param_3 + 0x10));
  lVar1 = FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10) + 0x218)
                        ,"Function-");
  *param_2 = lVar1;
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  local_38 = local_38 & 0xfffffff0 | 0x10;
  (**(code **)(local_68[0] + 0x18))(local_68);
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(local_40 + lVar1) != '\0');
  FUN_143360130(param_2);
  local_50 = &PTR_FUN_145af1858;
  FUN_143353a80(local_68);
  return param_2;
}



// FUNCTION 1434b11a0 FUN_1434b11a0 body=177 status=ok
// SIG undefined FUN_1434b11a0(void)

void FUN_1434b11a0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_res18 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  uVar1 = param_3[4];
  if (((byte)*param_3 & 0x1f) == 6) {
    plVar3 = *(longlong **)(param_3 + 6);
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(param_3 + 6) + 0x28);
  }
  lVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    local_res18[0] =
         *(undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 0xa0) + 0x30) + (ulonglong)uVar1 * 8);
    Scaleform::GFx::AS3::Abc::ReadMethodInfoSmallHeader(local_res18,&local_18);
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
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(param_4 + 6) = uStack_10;
  }
  return;
}



// FUNCTION 1434b1260 FUN_1434b1260 body=111 status=ok
// SIG undefined FUN_1434b1260(void)

undefined8 * FUN_1434b1260(undefined8 *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  FUN_1435b93d0(param_1,param_2,&PTR_DAT_145b159a0);
  *(undefined4 *)(param_1 + 0x12) = 10;
  *param_1 = &PTR_FUN_145b17d28;
  ppuVar1 = &PTR_FUN_1467d0ce0;
  lVar2 = 3;
  do {
    FUN_1435b6830(param_1,&PTR_DAT_145b15970,ppuVar1);
    ppuVar1 = ppuVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 1434b12f0 FUN_1434b12f0 body=178 status=ok
// SIG undefined FUN_1434b12f0(void)

void FUN_1434b12f0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,uint *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  uVar1 = param_3[4];
  if (((byte)*param_3 & 0x1f) == 7) {
    plVar4 = *(longlong **)(param_3 + 6);
  }
  else {
    plVar4 = *(longlong **)(*(longlong *)(param_3 + 6) + 0x28);
  }
  lVar3 = FUN_1434ef190(plVar4);
  uVar2 = *(undefined4 *)((ulonglong)uVar1 * 0x20 + 0x10 + *(longlong *)(lVar3 + 8));
  lVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
  if (lVar3 != 0) {
    lVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    uVar2 = Scaleform::GFx::AS3::Abc::File::GetParamNum(*(undefined8 *)(lVar3 + 0xa0),uVar2);
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
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_14,uVar2);
    *(undefined8 *)(param_4 + 6) = uStack_10;
  }
  return;
}



// FUNCTION 1434b13b0 FUN_1434b13b0 body=72 status=ok
// SIG undefined FUN_1434b13b0(void)

undefined8 * FUN_1434b13b0(undefined8 *param_1,undefined8 param_2)

{
  FUN_1435b93d0(param_1,param_2,&PTR_DAT_145b159d0);
  *(undefined4 *)(param_1 + 0x12) = 10;
  *param_1 = &PTR_FUN_145b17da0;
  FUN_1435b6830(param_1,&PTR_DAT_145b15970,&PTR_LAB_145b16488);
  return param_1;
}



// FUNCTION 1434b1410 FUN_1434b1410 body=140 status=ok
// SIG undefined FUN_1434b1410(void)

undefined8 *
FUN_1434b1410(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  FUN_1435b93d0(param_1,*(undefined8 *)(param_2 + 0x28));
  *param_1 = &PTR_FUN_145b17e18;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  param_1[0x21] = param_2;
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  uVar1 = FUN_1435b4fe0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x218) + 0xd8)
                       );
  FUN_1434f0700(param_1 + 0x15,uVar1);
  *(undefined4 *)(param_1 + 0x12) = 10;
  FUN_1434b16d0(param_1);
  return param_1;
}



// FUNCTION 1434b14b0 FUN_1434b14b0 body=63 status=ok
// SIG undefined FUN_1434b14b0(void)

void FUN_1434b14b0(longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b9890();
  if (*(longlong *)(param_1 + 0x108) != 0) {
    (*param_3)(param_2);
  }
  return;
}



// FUNCTION 1434b1500 FUN_1434b1500 body=141 status=ok
// SIG undefined FUN_1434b1500(void)

void FUN_1434b1500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1434afa90(lVar1,param_1);
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



// FUNCTION 1434b15b0 FUN_1434b15b0 body=188 status=ok
// SIG undefined FUN_1434b15b0(void)

longlong * FUN_1434b15b0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong local_68 [3];
  undefined **local_50;
  longlong local_40;
  uint local_38;
  
  FUN_143354b50(local_68,*(undefined4 *)
                          (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x28) + 0x100));
  lVar1 = FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10) + 0x218)
                        ,"Function-");
  *param_2 = lVar1;
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  local_38 = local_38 & 0xfffffff0 | 0x10;
  (**(code **)(local_68[0] + 0x18))(local_68);
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(local_40 + lVar1) != '\0');
  FUN_143360130(param_2);
  local_50 = &PTR_FUN_145af1858;
  FUN_143353a80(local_68);
  return param_2;
}



// FUNCTION 1434b1680 FUN_1434b1680 body=66 status=ok
// SIG undefined FUN_1434b1680(void)

undefined8 * FUN_1434b1680(undefined8 *param_1)

{
  FUN_1435b93d0();
  *param_1 = &PTR_FUN_145b17e18;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x12) = 10;
  FUN_1434b16d0(param_1);
  return param_1;
}



// FUNCTION 1434b16d0 FUN_1434b16d0 body=220 status=ok
// SIG undefined FUN_1434b16d0(void)

void FUN_1434b16d0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  longlong lVar4;
  longlong local_res8;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x208);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x1d8);
  if (lVar4 != 0) {
    *(uint *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1U & 0x8fffffff;
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10) + 0x218),
                             "prototype",9);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b5270(param_1,&local_res8,lVar4,uVar2,4,0x40,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  ppuVar3 = &PTR_FUN_1467d0d70;
  lVar4 = 3;
  do {
    FUN_1435b6830(param_1,&PTR_DAT_145b15970,ppuVar3);
    ppuVar3 = ppuVar3 + 6;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 1434b17c0 FUN_1434b17c0 body=1074 status=ok
// SIG undefined FUN_1434b17c0(void)

undefined8 * FUN_1434b17c0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_1435b8070();
  puVar5 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_145b17e90;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x12) = 10;
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x110,0);
  puVar6 = puVar5;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1435b93d0(puVar2,param_2,param_3);
    *puVar2 = &PTR_FUN_145b17e18;
    *(undefined4 *)(puVar2 + 0x20) = 0;
    puVar2[0x21] = 0;
    *(undefined4 *)(puVar2 + 0x12) = 10;
    FUN_1434b16d0(puVar2);
    puVar6 = puVar2;
  }
  FUN_1435b8600(param_1,puVar6);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  puVar6 = puVar5;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar2,param_1);
    *puVar2 = &PTR_ForEachChild_GC_145b17ef0;
    puVar6 = puVar2;
  }
  lVar3 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                    (*(longlong **)(param_2 + 0x48),0x100,0);
  puVar2 = puVar5;
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)FUN_1434b0e80(lVar3,param_2);
  }
  puVar4 = (undefined8 *)param_1[0x1c];
  if (puVar2 != puVar4) {
    if (puVar4 != (undefined8 *)0x0) {
      if (((ulonglong)puVar4 & 1) == 0) {
        if ((*(uint *)(puVar4 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar4 + 1) = *(uint *)(puVar4 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        param_1[0x1c] = (longlong)puVar4 - 1;
      }
    }
    param_1[0x1c] = puVar2;
  }
  if (puVar6 != (undefined8 *)0x0) {
    *(uint *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1U & 0x8fffffff;
  }
  lVar3 = param_1[0x1c];
  puVar2 = *(undefined8 **)(lVar3 + 0xa8);
  if (puVar6 != puVar2) {
    if (puVar2 != (undefined8 *)0x0) {
      if (((ulonglong)puVar2 & 1) == 0) {
        if ((*(uint *)(puVar2 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(lVar3 + 0xa8) = (longlong)puVar2 - 1;
      }
    }
    *(undefined8 **)(lVar3 + 0xa8) = puVar6;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                     (*(longlong **)(param_2 + 0x48),0x100,0);
  puVar2 = puVar5;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1435b93d0(puVar4,param_2,&PTR_DAT_145b159d0);
    *(undefined4 *)(puVar4 + 0x12) = 10;
    *puVar4 = &PTR_FUN_145b17da0;
    FUN_1435b6830(puVar4,&PTR_DAT_145b15970,&PTR_LAB_145b16488);
    puVar2 = puVar4;
  }
  puVar4 = (undefined8 *)param_1[0x1d];
  if (puVar2 != puVar4) {
    if (puVar4 != (undefined8 *)0x0) {
      if (((ulonglong)puVar4 & 1) == 0) {
        if ((*(uint *)(puVar4 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar4 + 1) = *(uint *)(puVar4 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        param_1[0x1d] = (longlong)puVar4 - 1;
      }
    }
    param_1[0x1d] = puVar2;
  }
  if (puVar6 != (undefined8 *)0x0) {
    *(uint *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1U & 0x8fffffff;
  }
  lVar3 = param_1[0x1d];
  puVar2 = *(undefined8 **)(lVar3 + 0xa8);
  if (puVar6 != puVar2) {
    if (puVar2 != (undefined8 *)0x0) {
      if (((ulonglong)puVar2 & 1) == 0) {
        if ((*(uint *)(puVar2 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(lVar3 + 0xa8) = (longlong)puVar2 - 1;
      }
    }
    *(undefined8 **)(lVar3 + 0xa8) = puVar6;
  }
  lVar3 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                    (*(longlong **)(param_2 + 0x48),0x100,0);
  puVar2 = puVar5;
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)FUN_1434b1050(lVar3,param_2);
  }
  puVar4 = (undefined8 *)param_1[0x1e];
  if (puVar2 != puVar4) {
    if (puVar4 != (undefined8 *)0x0) {
      if (((ulonglong)puVar4 & 1) == 0) {
        if ((*(uint *)(puVar4 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar4 + 1) = *(uint *)(puVar4 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        param_1[0x1e] = (longlong)puVar4 - 1;
      }
    }
    param_1[0x1e] = puVar2;
  }
  if (puVar6 != (undefined8 *)0x0) {
    *(uint *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1U & 0x8fffffff;
  }
  lVar3 = param_1[0x1e];
  puVar2 = *(undefined8 **)(lVar3 + 0xa8);
  if (puVar6 != puVar2) {
    if (puVar2 != (undefined8 *)0x0) {
      if (((ulonglong)puVar2 & 1) == 0) {
        if ((*(uint *)(puVar2 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(lVar3 + 0xa8) = (longlong)puVar2 - 1;
      }
    }
    *(undefined8 **)(lVar3 + 0xa8) = puVar6;
  }
  lVar3 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                    (*(longlong **)(param_2 + 0x48),0x100,0);
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)FUN_1434b1260(lVar3,param_2);
  }
  puVar2 = (undefined8 *)param_1[0x1f];
  if (puVar5 != puVar2) {
    if (puVar2 != (undefined8 *)0x0) {
      if (((ulonglong)puVar2 & 1) == 0) {
        if ((*(uint *)(puVar2 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        param_1[0x1f] = (longlong)puVar2 - 1;
      }
    }
    param_1[0x1f] = puVar5;
  }
  if (puVar6 != (undefined8 *)0x0) {
    *(uint *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1U & 0x8fffffff;
  }
  lVar3 = param_1[0x1f];
  puVar2 = *(undefined8 **)(lVar3 + 0xa8);
  if (puVar6 != puVar2) {
    if (puVar2 != (undefined8 *)0x0) {
      if (((ulonglong)puVar2 & 1) == 0) {
        if ((*(uint *)(puVar2 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(lVar3 + 0xa8) = (longlong)puVar2 - 1;
      }
    }
    *(undefined8 **)(lVar3 + 0xa8) = puVar6;
  }
  return param_1;
}



// FUNCTION 1434b1c00 FUN_1434b1c00 body=95 status=ok
// SIG undefined FUN_1434b1c00(void)

undefined8 * FUN_1434b1c00(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                    (*(longlong **)(param_2 + 0x48),0x100,0);
  if (lVar1 != 0) {
    uVar2 = FUN_1434b17c0(lVar1,param_2,&PTR_DAT_145b15970);
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1434b1c70 FUN_1434b1c70 body=117 status=ok
// SIG undefined FUN_1434b1c70(void)

void FUN_1434b1c70(longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b8260();
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    (*param_3)(param_2);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    (*param_3)(param_2);
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    (*param_3)(param_2);
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    (*param_3)(param_2);
  }
  return;
}



// FUNCTION 1434b1cf0 FUN_1434b1cf0 body=100 status=ok
// SIG undefined FUN_1434b1cf0(void)

undefined8 FUN_1434b1cf0(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2 & 0x1f;
  if (uVar2 < 5) goto LAB_1434b1d13;
  if (7 < uVar2) {
    if (uVar2 == 0xc) {
      if (((*(longlong *)(param_2 + 4) != 0) &&
          (lVar1 = *(longlong *)(*(longlong *)(param_2 + 4) + 0x28), *(int *)(lVar1 + 0x90) == 10))
         && ((~(*(byte *)(lVar1 + 0x88) >> 5) & 1) != 0)) goto LAB_1434b1d45;
    }
    else if (uVar2 - 0xd < 2) goto LAB_1434b1d45;
LAB_1434b1d13:
    uVar3 = FUN_1435b83b0(param_1);
    return uVar3;
  }
LAB_1434b1d45:
  FUN_143590140(param_3);
  return 1;
}



// FUNCTION 1434b1d60 FUN_1434b1d60 body=100 status=ok
// SIG undefined FUN_1434b1d60(void)

undefined8 FUN_1434b1d60(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2 & 0x1f;
  if (uVar2 < 5) goto LAB_1434b1d83;
  if (7 < uVar2) {
    if (uVar2 == 0xc) {
      if (((*(longlong *)(param_2 + 4) != 0) &&
          (lVar1 = *(longlong *)(*(longlong *)(param_2 + 4) + 0x28), *(int *)(lVar1 + 0x90) == 10))
         && ((~(*(byte *)(lVar1 + 0x88) >> 5) & 1) != 0)) goto LAB_1434b1db5;
    }
    else if (uVar2 - 0xd < 2) goto LAB_1434b1db5;
LAB_1434b1d83:
    uVar3 = FUN_1435b83b0(param_1);
    return uVar3;
  }
LAB_1434b1db5:
  FUN_143590140(param_3);
  return 1;
}



// FUNCTION 1434b1dd0 FUN_1434b1dd0 body=86 status=ok
// SIG undefined FUN_1434b1dd0(void)

undefined8 * FUN_1434b1dd0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  lVar1 = FUN_1435b5bc0(uVar2);
  if (lVar1 != 0) {
    uVar2 = FUN_1434afa90(lVar1,uVar2);
    *param_2 = uVar2;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434b1e30 FUN_1434b1e30 body=116 status=ok
// SIG undefined FUN_1434b1e30(void)

void FUN_1434b1e30(longlong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 200))();
  }
  ppuVar1 = &PTR_FUN_145b15050;
  lVar2 = 4;
  do {
    FUN_1434e7f40(param_2,ppuVar1);
    ppuVar1 = ppuVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1435b3fb0(param_1,param_2);
  return;
}



// FUNCTION 1434b1eb0 FUN_1434b1eb0 body=38 status=ok
// SIG undefined FUN_1434b1eb0(void)

void FUN_1434b1eb0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b1ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 1434b1ee0 FUN_1434b1ee0 body=113 status=ok
// SIG undefined FUN_1434b1ee0(void)

void FUN_1434b1ee0(longlong param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*param_3 == 0) {
    FUN_1435b39e0();
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x42a,uVar2);
  FUN_1435cbdd0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434b1f60 MakeInstance body=94 status=ok
// SIG undefined MakeInstance(void)

undefined8 *
Scaleform::GFx::AS3::Classes::fl::Function::MakeInstance
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1435bb570(param_3,param_4);
  lVar2 = FUN_1435b5bc0(uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_1434b0450(lVar2,uVar1,param_5);
    *param_2 = uVar1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434b1fd0 FUN_1434b1fd0 body=151 status=ok
// SIG undefined FUN_1434b1fd0(void)

undefined8 * FUN_1434b1fd0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xe8);
  puVar2 = (undefined8 *)FUN_1435b5bc0(uVar1);
  if (puVar2 == (undefined8 *)0x0) {
    *param_2 = 0;
  }
  else {
    FUN_1434afa90(puVar2,uVar1);
    puVar2[9] = param_3;
    *puVar2 = &PTR_ForEachChild_GC_145b17a88;
    puVar2[10] = param_4;
    if (param_4 != 0) {
      *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
    }
    *param_2 = puVar2;
  }
  return param_2;
}



// FUNCTION 1434b2070 FUN_1434b2070 body=186 status=ok
// SIG undefined FUN_1434b2070(void)

undefined8 *
FUN_1434b2070(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xe8);
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0x60);
  if (puVar3 == (undefined8 *)0x0) {
    *param_2 = 0;
  }
  else {
    FUN_1434afa90(puVar3,uVar1);
    *puVar3 = &PTR_ForEachChild_GC_145b17a88;
    puVar3[9] = param_4;
    puVar3[10] = param_5;
    if (param_5 != 0) {
      *(uint *)(param_5 + 8) = *(int *)(param_5 + 8) + 1U & 0x8fffffff;
    }
    puVar3[0xb] = param_3;
    *puVar3 = &PTR_ForEachChild_GC_145b17b60;
    *param_2 = puVar3;
  }
  return param_2;
}



// FUNCTION 1434b2130 FUN_1434b2130 body=226 status=ok
// SIG undefined FUN_1434b2130(void)

undefined8 * FUN_1434b2130(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res8;
  undefined4 uVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x1d8);
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10) + 0x218),
                             "activation@",0xb);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  uVar3 = 0;
  FUN_1435b9a80(param_1,*(undefined8 *)(param_2 + 0x28),&local_res8,lVar2,0,1,1);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(undefined4 *)(param_1 + 0x12) = 0x14;
  *param_1 = &PTR_FUN_145b17fc8;
  FUN_1435b5890(param_1,&local_res8,param_3,param_2,CONCAT44(uVar3,0x40));
  return param_1;
}



// FUNCTION 1434b2240 FUN_1434b2240 body=143 status=ok
// SIG undefined FUN_1434b2240(void)

undefined8 * FUN_1434b2240(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8 [4];
  
  lVar2 = *(longlong *)(param_2 + 0x1d8);
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_res8[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  FUN_1435b9a80(param_1,param_2,local_res8,lVar2,0,1,1);
  piVar1 = (int *)(local_res8[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(undefined4 *)(param_1 + 0x12) = 0x14;
  *param_1 = &PTR_FUN_145b17fc8;
  *(undefined4 *)(param_1 + 0x10) = 0x40;
  return param_1;
}



// FUNCTION 1434b22e0 FUN_1434b22e0 body=105 status=ok
// SIG undefined FUN_1434b22e0(void)

undefined8 * FUN_1434b22e0(undefined8 *param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  longlong lVar1;
  
  param_1[4] = *(undefined8 *)(param_2 + 0x30);
  param_1[6] = param_2;
  *param_1 = &PTR_LAB_145b18040;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[5] = (ulonglong)(param_3 & 0xf) | param_1[5] & 0xffffffffffffffe0;
  lVar1 = FUN_143360a60(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),param_4);
  param_1[7] = lVar1;
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 1434b2350 FUN_1434b2350 body=179 status=ok
// SIG undefined FUN_1434b2350(void)

undefined8 *
FUN_1434b2350(undefined8 *param_1,longlong param_2,RefCountImpl *param_3,uint param_4,
             longlong *param_5,uint *param_6)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_1[4] = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_LAB_145b18040;
  param_1[6] = param_2;
  param_1[5] = (ulonglong)(param_4 & 0xf) | param_1[5] & 0xffffffffffffffe0;
  lVar2 = *param_5;
  param_1[7] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  if (param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_3);
  }
  param_1[8] = param_3;
  *(uint *)(param_1 + 9) = *param_6;
  param_1[10] = *(undefined8 *)(param_6 + 2);
  uVar3 = param_6[5];
  uVar4 = param_6[6];
  uVar5 = param_6[7];
  *(uint *)(param_1 + 0xb) = param_6[4];
  *(uint *)((longlong)param_1 + 0x5c) = uVar3;
  *(uint *)(param_1 + 0xc) = uVar4;
  *(uint *)((longlong)param_1 + 100) = uVar5;
  if (9 < ((byte)*param_6 & 0x1f)) {
    if ((*param_6 >> 9 & 1) != 0) {
      FUN_143592140();
      return param_1;
    }
    FUN_143592070();
  }
  return param_1;
}



// FUNCTION 1434b2410 FUN_1434b2410 body=125 status=ok
// SIG undefined FUN_1434b2410(void)

void FUN_1434b2410(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *local_res8 [4];
  
  *param_1 = &PTR_LAB_145b18040;
  if (param_1[8] != 0) {
    local_res8[0] = param_1;
    FUN_1434e4680(param_1[8] + 0x10,local_res8);
  }
  if (9 < ((byte)*(uint *)(param_1 + 9) & 0x1f)) {
    if ((*(uint *)(param_1 + 9) >> 9 & 1) == 0) {
      FUN_1435920c0(param_1 + 9);
    }
    else {
      FUN_143592150();
    }
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  piVar1 = (int *)(param_1[7] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435ab0c0(param_1);
  return;
}



// FUNCTION 1434b24a0 FUN_1434b24a0 body=633 status=ok
// SIG undefined FUN_1434b24a0(void)

void FUN_1434b24a0(longlong param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_res8;
  undefined4 local_res10 [4];
  longlong local_res20;
  uint local_48 [2];
  longlong local_40;
  
  bVar9 = false;
  local_res10[0] = 0;
  lVar8 = *(longlong *)(param_1 + 0x30);
  if (param_2 == 0) {
    lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x218);
    local_res8 = lVar8 + 0x48;
    piVar1 = (int *)(lVar8 + 0x60);
    *piVar1 = *piVar1 + 1;
    Scaleform::GFx::AS3::Value::Value(local_48,&local_res8);
    FUN_143590140(param_1 + 0x48,local_48);
    lVar8 = local_res8;
    if (9 < ((byte)local_48[0] & 0x1f)) {
      if ((local_48[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_48);
        lVar8 = local_res8;
      }
      else {
        FUN_143592150();
        lVar8 = local_res8;
      }
    }
LAB_1434b2703:
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    return;
  }
  if (param_2 != 1) {
    lVar2 = *(longlong *)(lVar8 + 0x10);
    lVar3 = *(longlong *)(lVar2 + 0x218);
    local_res20 = lVar3 + 0x48;
    piVar1 = (int *)(lVar3 + 0x60);
    *piVar1 = *piVar1 + 1;
    lVar2 = *(longlong *)(lVar2 + 0x218);
    local_res8 = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar6 = (char *)FUN_1435911f0(param_3,local_res10,&local_res20);
    if ((*pcVar6 != '\0') &&
       (pcVar6 = (char *)FUN_1435911f0(param_3 + 8,local_res10,&local_res8), *pcVar6 != '\0')) {
      if ((*(int *)(local_res20 + 0x20) == 0) || (*(int *)(local_res8 + 0x20) != 0)) {
        FUN_143590140(param_1 + 0x48,param_3);
        FUN_1434b27b0(param_1,param_3 + 8);
      }
      else {
        uVar7 = FUN_1435c8e40(local_48,0x44a,lVar8);
        FUN_1435cbe70(lVar8,uVar7);
        piVar1 = (int *)(local_40 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    lVar8 = local_res20;
    if (*piVar1 == 0) {
      FUN_14335f920();
      lVar8 = local_res20;
    }
    goto LAB_1434b2703;
  }
  if (((byte)*param_3 & 0x1f) == 0xb) {
    FUN_1434b2720(param_1,*(undefined8 *)(param_3 + 4));
    return;
  }
  cVar5 = FUN_143592700(param_3);
  if (cVar5 != '\0') {
    if (*(longlong *)(*(longlong *)(param_3 + 4) + 0x48) != 0) {
      FUN_1434f07d0(param_1,*(longlong *)(*(longlong *)(param_3 + 4) + 0x48) + 0x38);
      return;
    }
    lVar8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar8 + 0x10) + 0x218),&DAT_145af6c98,1,0);
    *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 2;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(param_1 + 0x38) = lVar8;
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920(lVar8);
    return;
  }
  FUN_1434b27b0(param_1,param_3);
  if (((byte)*param_3 & 0x1f) == 10) {
    local_res8 = *(longlong *)(param_3 + 4);
    bVar9 = true;
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    if (*(int *)(local_res8 + 0x20) == 0) {
      bVar4 = true;
      goto LAB_1434b2664;
    }
  }
  bVar4 = false;
LAB_1434b2664:
  if (bVar9) {
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (bVar4) {
    FUN_143590140(param_1 + 0x48,param_3);
    return;
  }
  uVar7 = FUN_143590540();
  FUN_143590140(param_1 + 0x48,uVar7);
  return;
}



// FUNCTION 1434b2720 FUN_1434b2720 body=133 status=ok
// SIG undefined FUN_1434b2720(void)

longlong FUN_1434b2720(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    FUN_143590140(param_1 + 0x48,param_2 + 0x48);
    lVar2 = *(longlong *)(param_2 + 0x38);
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(param_1 + 0x38) = lVar2;
    *(ulonglong *)(param_1 + 0x28) =
         *(ulonglong *)(param_1 + 0x28) ^
         (ulonglong)((*(uint *)(param_2 + 0x28) ^ *(uint *)(param_1 + 0x28)) & 0xf);
    if (*(RefCountImpl **)(param_2 + 0x40) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x40));
    }
    if (*(RefCountImpl **)(param_1 + 0x40) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x40));
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  }
  return param_1;
}



// FUNCTION 1434b27b0 FUN_1434b27b0 body=233 status=ok
// SIG undefined FUN_1434b27b0(void)

void FUN_1434b27b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar2 = FUN_1435caba0(lVar3);
  if ((*(int *)(lVar2 + 0x90) == 0x11) && ((~(*(byte *)(lVar2 + 0x88) >> 5) & 1) != 0)) {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48);
      if (lVar2 != 0) {
        FUN_1434f07d0(param_1,lVar2 + 0x38);
        return;
      }
      lVar3 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),&DAT_145af6c98,1,0)
      ;
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(longlong *)(param_1 + 0x38) = lVar3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar3);
        return;
      }
    }
  }
  else {
    FUN_1435911f0(param_2,local_res8,param_1 + 0x38);
  }
  return;
}



// FUNCTION 1434b28e0 FUN_1434b28e0 body=115 status=ok
// SIG undefined FUN_1434b28e0(void)

void FUN_1434b28e0(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong local_res8 [4];
  
  if (param_3 == 1) {
    uVar3 = 3;
    pcVar2 = "uri";
  }
  else {
    if (param_3 != 2) {
      return;
    }
    uVar3 = 6;
    pcVar2 = "prefix";
  }
  local_res8[0] =
       FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x218),
                     pcVar2,uVar3,0);
  *(int *)(local_res8[0] + 0x18) = *(int *)(local_res8[0] + 0x18) + 1;
  FUN_143590250(param_2,local_res8);
  piVar1 = (int *)(local_res8[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434b2960 GetNextDynPropIndex body=23 status=ok
// SIG undefined GetNextDynPropIndex(void)

int * Scaleform::GFx::AS3::Instances::fl::QName::GetNextDynPropIndex
                (undefined8 param_1,int *param_2,uint param_3)

{
  if (param_3 < 2) {
    *param_2 = param_3 + 1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434b2980 FUN_1434b2980 body=53 status=ok
// SIG undefined FUN_1434b2980(void)

void FUN_1434b2980(longlong param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_143590250(param_2,param_1 + 0x38);
  }
  else if (param_3 == 2) {
    FUN_143590140(param_2,param_1 + 0x48);
    return;
  }
  return;
}



// FUNCTION 1434b29c0 FUN_1434b29c0 body=15 status=ok
// SIG undefined FUN_1434b29c0(void)

undefined8 FUN_1434b29c0(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x30) >> 8),
                  param_1 == *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1d8));
}



// FUNCTION 1434b29e0 FUN_1434b29e0 body=164 status=ok
// SIG undefined FUN_1434b29e0(void)

undefined8 * FUN_1434b29e0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  FUN_1435b93d0();
  *param_1 = &PTR_FUN_145b18068;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x12) = 6;
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_2 + 0x48) + 0x50))
                     (*(longlong **)(param_2 + 0x48),0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_144f70a50;
    *puVar1 = &PTR_FUN_145b18980;
    *(undefined4 *)(puVar1 + 1) = 1;
    puVar1[2] = 0;
    puVar1[3] = param_1;
  }
  if ((RefCountImpl *)param_1[0x20] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x20]);
  }
  param_1[0x20] = puVar1;
  return param_1;
}



// FUNCTION 1434b2aa0 FUN_1434b2aa0 body=97 status=ok
// SIG undefined FUN_1434b2aa0(void)

void FUN_1434b2aa0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 0xb) {
    FUN_143590140(param_4,*(longlong *)(param_3 + 4) + 0x48);
    return;
  }
  uVar2 = FUN_1435c8e40(local_18,0x3ec,param_2);
  FUN_1435cbe70(param_2,uVar2);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434b2b10 FUN_1434b2b10 body=97 status=ok
// SIG undefined FUN_1434b2b10(void)

void FUN_1434b2b10(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 0xb) {
    FUN_143590250(param_4,*(longlong *)(param_3 + 4) + 0x38);
    return;
  }
  uVar2 = FUN_1435c8e40(local_18,0x3ec,param_2);
  FUN_1435cbe70(param_2,uVar2);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434b2b80 FUN_1434b2b80 body=97 status=ok
// SIG undefined FUN_1434b2b80(void)

void FUN_1434b2b80(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 0xb) {
    FUN_143590250(param_4,*(longlong *)(param_3 + 4) + 0x38);
    return;
  }
  uVar2 = FUN_1435c8e40(local_18,0x3ec,param_2);
  FUN_1435cbe70(param_2,uVar2);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434b2bf0 FUN_1434b2bf0 body=97 status=ok
// SIG undefined FUN_1434b2bf0(void)

void FUN_1434b2bf0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 0xb) {
    FUN_143590250(param_4,*(longlong *)(param_3 + 4) + 0x38);
    return;
  }
  uVar2 = FUN_1435c8e40(local_18,0x3ec,param_2);
  FUN_1435cbe70(param_2,uVar2);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434b2c70 FUN_1434b2c70 body=197 status=ok
// SIG undefined FUN_1434b2c70(void)

void FUN_1434b2c70(undefined8 param_1,longlong param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((*param_3 & 0x1f) == 0xc) && (lVar2 = *(longlong *)(param_3 + 4), lVar2 != 0)) {
    uVar3 = FUN_1435b4fe0(*(undefined8 *)(*(longlong *)(param_2 + 0x210) + 0xd8));
    lVar4 = FUN_1435b3ae0(uVar3);
    if (lVar2 == lVar4) {
      FUN_143590250(param_4,*(undefined8 *)(param_2 + 0x10));
      return;
    }
  }
  else if ((*param_3 & 0x1f) == 0xb) {
    FUN_143590250(param_4,*(longlong *)(param_3 + 4) + 0x38);
    return;
  }
  uVar3 = FUN_1435c8e40(local_18,0x429,param_2);
  FUN_1435cbe70(param_2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434b2d40 FUN_1434b2d40 body=64 status=ok
// SIG undefined FUN_1434b2d40(void)

void FUN_1434b2d40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b18068;
  *(undefined8 *)(param_1[0x20] + 0x18) = 0;
  if ((RefCountImpl *)param_1[0x20] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x20]);
  }
  FUN_1435b9770(param_1);
  return;
}



// FUNCTION 1434b2d90 FUN_1434b2d90 body=40 status=ok
// SIG undefined FUN_1434b2d90(void)

undefined8 FUN_1434b2d90(longlong param_1,undefined8 param_2)

{
  FUN_1434ef5c0(*(undefined8 *)(param_1 + 0x100));
  return param_2;
}



// FUNCTION 1434b2dc0 FUN_1434b2dc0 body=12 status=ok
// SIG undefined FUN_1434b2dc0(void)

void FUN_1434b2dc0(longlong param_1)

{
  FUN_1434ef090(*(undefined8 *)(param_1 + 0x100));
  return;
}



// FUNCTION 1434b2de0 FUN_1434b2de0 body=43 status=ok
// SIG undefined FUN_1434b2de0(void)

undefined8 * FUN_1434b2de0(undefined8 *param_1)

{
  FUN_1435b8070();
  *(undefined4 *)(param_1 + 0x12) = 6;
  *param_1 = &PTR_FUN_145b180e0;
  return param_1;
}



// FUNCTION 1434b2e20 FUN_1434b2e20 body=238 status=ok
// SIG undefined FUN_1434b2e20(void)

undefined8 * FUN_1434b2e20(undefined8 *param_1,longlong param_2)

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
    FUN_1435b8070(puVar2,param_2,&PTR_DAT_145b15298);
    *(undefined4 *)(puVar2 + 0x12) = 6;
    *puVar2 = &PTR_FUN_145b180e0;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x108,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434b29e0(lVar3,param_2,&PTR_DAT_145b15298);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18140;
  }
  return param_1;
}



// FUNCTION 1434b2f20 FUN_1434b2f20 body=229 status=ok
// SIG undefined FUN_1434b2f20(void)

bool FUN_1434b2f20(longlong param_1,uint *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  bool bVar3;
  undefined4 local_res8 [2];
  uint local_28 [2];
  undefined8 local_20;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  local_20 = *(undefined8 *)(param_2 + 2);
  local_28[0] = *param_2;
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_143592070(param_2);
    }
    else {
      FUN_143592140();
    }
  }
  plVar2 = (longlong *)FUN_1435b4fe0(uVar1);
  local_res8[0] = 1;
  (**(code **)(*plVar2 + 0x68))(plVar2,param_3,local_res8,local_28,1,1);
  bVar3 = *(char *)(*(longlong *)(param_1 + 0x98) + 0xb8) == '\0';
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return bVar3;
    }
    FUN_1435920c0(local_28);
  }
  return bVar3;
}



// FUNCTION 1434b3010 FUN_1434b3010 body=33 status=ok
// SIG undefined FUN_1434b3010(void)

undefined8 * FUN_1434b3010(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18140;
  return param_1;
}



// FUNCTION 1434b3040 FUN_1434b3040 body=116 status=ok
// SIG undefined FUN_1434b3040(void)

void FUN_1434b3040(longlong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 200))();
  }
  ppuVar1 = &PTR_LAB_145b15c60;
  lVar2 = 2;
  do {
    FUN_1434e7f40(param_2,ppuVar1);
    ppuVar1 = ppuVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1435b3fb0(param_1,param_2);
  return;
}



// FUNCTION 1434b30c0 FUN_1434b30c0 body=38 status=ok
// SIG undefined FUN_1434b30c0(void)

void FUN_1434b30c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001434b30e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 1434b30f0 FUN_1434b30f0 body=603 status=ok
// SIG undefined FUN_1434b30f0(void)

void FUN_1434b30f0(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  RefCountImpl *this;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *local_res8;
  undefined4 local_68;
  undefined4 uStack_64;
  uint local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (((*param_3 == 1) && (lVar8 = FUN_1435caba0(lVar11,param_4), *(int *)(lVar8 + 0x90) == 6)) &&
     ((~(*(byte *)(lVar8 + 0x88) >> 5) & 1) != 0)) {
    FUN_143590140(param_2,param_4);
    return;
  }
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
  *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 1;
  puVar9 = (uint *)FUN_143590540();
  local_res8 = (longlong *)CONCAT44(local_res8._4_4_,0x148);
  plVar10 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,lVar8,0x68,&local_res8);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    this = *(RefCountImpl **)(lVar8 + 0x100);
    lVar3 = *(longlong *)(lVar8 + 0x98);
    lVar4 = *(longlong *)(lVar3 + 0x30);
    plVar10[5] = plVar10[5] & 0xffffffffffffffe0;
    plVar10[4] = lVar4;
    *(undefined4 *)(plVar10 + 1) = 1;
    *plVar10 = (longlong)&PTR_LAB_145b18040;
    plVar10[6] = lVar3;
    plVar10[7] = lVar2 + 0x48;
    *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 1;
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this);
    }
    plVar10[8] = (longlong)this;
    *(uint *)(plVar10 + 9) = *puVar9;
    plVar10[10] = *(longlong *)(puVar9 + 2);
    uVar5 = puVar9[5];
    uVar6 = puVar9[6];
    uVar7 = puVar9[7];
    *(uint *)(plVar10 + 0xb) = puVar9[4];
    *(uint *)((longlong)plVar10 + 0x5c) = uVar5;
    *(uint *)(plVar10 + 0xc) = uVar6;
    *(uint *)((longlong)plVar10 + 100) = uVar7;
    if (9 < ((byte)*puVar9 & 0x1f)) {
      if ((*puVar9 >> 9 & 1) == 0) {
        FUN_143592070(puVar9);
      }
      else {
        FUN_143592140();
      }
    }
  }
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2 + 0x48);
  }
  local_68 = SUB84(plVar10,0);
  uStack_64 = (undefined4)((ulonglong)plVar10 >> 0x20);
  local_50 = 0;
  local_58[0] = 0xb;
  local_48 = local_68;
  uStack_44 = uStack_64;
  FUN_143590140(param_2,local_58);
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  (**(code **)(*plVar10 + 0x20))(plVar10,*param_3,param_4);
  if (*(char *)(lVar11 + 0xb8) == '\0') {
    lVar11 = *(longlong *)(lVar8 + 0x100) + 0x10;
    local_res8 = plVar10;
    FUN_1434e4b00(lVar11,lVar11,&local_res8,
                  (uint)((plVar10[5] << 0x3c) >> 0x3c) ^
                  (*(uint *)(plVar10[7] + 0x1c) & 0xffffff) << 2);
  }
  return;
}



// FUNCTION 1434b3370 FUN_1434b3370 body=33 status=ok
// SIG undefined FUN_1434b3370(void)

undefined8 * FUN_1434b3370(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18290;
  return param_1;
}



// FUNCTION 1434b33c0 FUN_1434b33c0 body=127 status=ok
// SIG undefined FUN_1434b33c0(void)

void FUN_1434b33c0(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  
  puVar4 = (ulonglong *)FUN_1435ca830(*(undefined8 *)(param_1[5] + 0x98),local_res8);
  uVar1 = param_1[9];
  uVar2 = *puVar4;
  if (uVar2 != uVar1) {
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        param_1[9] = uVar1 - 1;
      }
    }
    param_1[9] = uVar2;
  }
  lVar3 = *param_1;
  uVar5 = FUN_1435b3ae0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001434b343c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 200))(param_1,uVar5);
  return;
}



// FUNCTION 1434b3450 FUN_1434b3450 body=201 status=ok
// SIG undefined FUN_1434b3450(void)

undefined8 * FUN_1434b3450(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_1435b86b0();
  *param_1 = &PTR_FUN_145b18368;
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar2,param_2,&PTR_DAT_145b15de0);
    *puVar2 = &PTR_FUN_145b18218;
  }
  FUN_1435b8600(param_1,puVar2);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b37d0(puVar2,param_1);
    *puVar2 = &PTR_ForEachChild_GC_145b18290;
  }
  FUN_1434f0700(param_1 + 0x15,puVar2);
  return param_1;
}



// FUNCTION 1434b3520 FUN_1434b3520 body=19 status=ok
// SIG undefined FUN_1434b3520(void)

undefined1 FUN_1434b3520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143590140(param_3);
  return 1;
}



// FUNCTION 1434b3550 FUN_1434b3550 body=283 status=ok
// SIG undefined FUN_1434b3550(void)

ulonglong FUN_1434b3550(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_1[2] != '\0') {
    if (*param_1 == '\0') {
      cVar1 = param_1[1];
      uVar8 = *(undefined8 *)*param_3;
      uVar4 = FUN_14335fa60(param_3);
    }
    else {
      cVar1 = param_1[1];
      uVar8 = *(undefined8 *)*param_2;
      uVar4 = FUN_14335fa60(param_2);
      param_2 = param_3;
    }
    uVar6 = FUN_14335ff80(param_2,uVar8,uVar4,cVar1 == '\0');
    return uVar6;
  }
  if (param_1[1] != '\0') {
    uVar5 = _stricmp(*(char **)*param_2,*(char **)*param_3);
    uVar3 = -uVar5;
    if (*param_1 == '\0') {
      uVar3 = uVar5;
    }
    return (ulonglong)uVar3;
  }
  pbVar7 = *(byte **)*param_2;
  lVar9 = *(longlong *)*param_3 - (longlong)pbVar7;
  do {
    bVar2 = *pbVar7;
    if (bVar2 != pbVar7[lVar9]) {
      uVar5 = -(uint)(bVar2 < pbVar7[lVar9]) | 1;
      uVar3 = -uVar5;
      if (*param_1 == '\0') {
        uVar3 = uVar5;
      }
      return (ulonglong)uVar3;
    }
    pbVar7 = pbVar7 + 1;
  } while (bVar2 != 0);
  return 0;
}



// FUNCTION 1434b3680 FUN_1434b3680 body=509 status=ok
// SIG undefined FUN_1434b3680(void)

undefined4 FUN_1434b3680(longlong param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  longlong lVar8;
  double local_res8;
  double local_res10;
  uint local_78 [2];
  undefined8 local_70;
  uint local_58 [2];
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38 [2];
  undefined8 local_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  local_50 = *(undefined8 *)(param_2 + 2);
  uVar4 = 0;
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  local_58[0] = *param_2;
  local_78[0] = 0;
  local_70 = 0;
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_143592070(param_2);
    }
    else {
      FUN_143592140();
    }
  }
  local_30 = *(undefined8 *)(param_3 + 2);
  local_38[0] = *param_3;
  local_28 = param_3[4];
  uStack_24 = param_3[5];
  uStack_20 = param_3[6];
  uStack_1c = param_3[7];
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_143592070(param_3);
    }
    else {
      FUN_143592140();
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar8 = 2;
  local_res8 = (double)CONCAT44(local_res8._4_4_,2);
  uVar5 = FUN_143590540();
  FUN_1435ce880(uVar2,*(undefined8 *)(param_1 + 0x10),uVar5,local_78,&local_res8,local_58,0,1);
  if ((*(char *)(*(longlong *)(param_1 + 8) + 0xb8) == '\0') &&
     (pcVar6 = (char *)FUN_143590af0(local_78,&local_res8,&local_res10), *pcVar6 != '\0')) {
    local_res8 = local_res10;
    if (local_res10 == -INFINITY) {
      uVar4 = 0xffffffff;
    }
    else if (local_res10 == INFINITY) {
      uVar4 = 1;
    }
    else {
      cVar3 = FUN_143364c00();
      if (cVar3 == '\0') {
        cVar3 = FUN_143364be0(SUB84(local_res10,0));
        if (cVar3 == '\0') {
          if ((local_res10 != 0.0) && (uVar4 = 1, local_res10 < 0.0)) {
            uVar4 = 0xffffffff;
          }
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0xffffffff;
      }
    }
  }
  puVar7 = &stack0xffffffffffffffe8;
  do {
    puVar1 = (uint *)(puVar7 + -0x20);
    puVar7 = puVar7 + -0x20;
    lVar8 = lVar8 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar7);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar8 != 0);
  if (9 < ((byte)local_78[0] & 0x1f)) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  return uVar4;
}



// FUNCTION 1434b3890 FUN_1434b3890 body=1474 status=ok
// SIG undefined FUN_1434b3890(void)

/* WARNING: Removing unreachable block (ram,0x0001434b3add) */

double FUN_1434b3890(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  longlong lVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  longlong *local_188;
  undefined1 local_180;
  undefined1 local_17f;
  undefined1 local_17e;
  undefined1 local_17d [5];
  longlong *local_178;
  longlong local_170;
  uint local_168 [2];
  undefined8 local_160;
  uint local_148 [2];
  undefined8 local_140;
  ulonglong local_128 [2];
  uint local_118 [2];
  undefined8 local_110;
  ulonglong local_f8 [2];
  uint local_e8 [2];
  undefined8 local_e0;
  undefined1 local_c8 [8];
  ulonglong local_c0;
  uint local_b8 [8];
  double local_98;
  double local_90;
  ulonglong local_88;
  
  bVar5 = false;
  bVar4 = false;
  local_res8[0] = 0;
  uVar14 = 0;
  dVar15 = 0.0;
  uVar13 = *(ulonglong *)(param_1[1] + 8);
  if (uVar13 != 0) {
    local_170 = 0;
    dVar15 = 0.0;
    local_res10 = param_2;
    local_res18 = param_3;
    local_88 = uVar13;
    while (lVar11 = local_170, dVar15 == 0.0) {
      FUN_1435ae6b0(local_c8,*(undefined8 *)(*param_1 + 0x1d8),*(longlong *)param_1[1] + local_170);
      local_e8[0] = 0;
      local_e0 = 0;
      local_f8[0] = 0;
      local_f8[1] = 0;
      local_118[0] = 0;
      local_128[0] = 0;
      local_128[1] = 0;
      local_110 = 0;
      FUN_1435b2320(local_f8,*param_1,param_2,local_c8,0);
      FUN_1435b2320(local_128,*param_1,param_3,local_c8,0);
      if ((((local_e8[0] & 0x1f) != 0) && (local_f8[0] != 1)) &&
         ((((byte)local_f8[0] >> 1 & 1) == 0 || ((local_f8[0] & 0xfffffffffffffffd) != 0)))) {
        if ((((local_118[0] & 0x1f) == 0) || (local_128[0] == 1)) ||
           ((((byte)local_128[0] >> 1 & 1) != 0 && ((local_128[0] & 0xfffffffffffffffd) == 0)))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_148[0] = 0;
          local_140 = 0;
          local_168[0] = 0;
          local_160 = 0;
          pcVar9 = (char *)FUN_1435af210(local_f8,local_res8,*param_1,local_148,0);
          if (*pcVar9 == '\0') {
LAB_1434b3a4d:
            bVar3 = bVar4;
            bVar6 = true;
          }
          else {
            bVar3 = true;
            pcVar9 = (char *)FUN_1435af210(local_128,local_res20,*param_1,local_168,0);
            bVar4 = true;
            if (*pcVar9 == '\0') goto LAB_1434b3a4d;
            bVar6 = false;
          }
          bVar4 = false;
          if (!bVar3) {
            bVar4 = bVar3;
          }
          if (bVar6) goto LAB_1434b3d41;
          uVar2 = *(uint *)(*(longlong *)param_1[2] + uVar14 * 4);
          if ((uVar2 & 0x10) == 0) {
            lVar11 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x218);
            local_188 = (longlong *)(lVar11 + 0x48);
            *(int *)(lVar11 + 0x60) = *(int *)(lVar11 + 0x60) + 1;
            *(int *)(lVar11 + 0x60) = *(int *)(lVar11 + 0x60) + 1;
            local_178 = local_188;
            pcVar9 = (char *)FUN_1435911f0(local_148,&local_17e,&local_178);
            if (*pcVar9 == '\0') {
LAB_1434b3b47:
              bVar3 = bVar5;
              bVar6 = true;
            }
            else {
              bVar3 = true;
              pcVar9 = (char *)FUN_1435911f0(local_168,local_17d,&local_188);
              bVar5 = true;
              if (*pcVar9 == '\0') goto LAB_1434b3b47;
              bVar6 = false;
            }
            bVar5 = false;
            if (!bVar3) {
              bVar5 = bVar3;
            }
            if (bVar6) {
              plVar1 = local_188 + 3;
              *(int *)plVar1 = (int)*plVar1 + -1;
              if ((int)*plVar1 == 0) {
                FUN_14335f920();
              }
              plVar1 = local_178 + 3;
              *(int *)plVar1 = (int)*plVar1 + -1;
              if ((int)*plVar1 == 0) {
                FUN_14335f920();
              }
LAB_1434b3d41:
              if (9 < ((byte)local_168[0] & 0x1f)) {
                if ((local_168[0] >> 9 & 1) == 0) {
                  FUN_1435920c0(local_168);
                }
                else {
                  FUN_143592150();
                }
              }
              if (9 < ((byte)local_148[0] & 0x1f)) {
                if ((local_148[0] >> 9 & 1) == 0) {
                  FUN_1435920c0(local_148);
                }
                else {
                  FUN_143592150();
                }
              }
              if (9 < ((byte)local_118[0] & 0x1f)) {
                if ((local_118[0] >> 9 & 1) == 0) {
                  FUN_1435920c0(local_118);
                }
                else {
                  FUN_143592150();
                }
              }
              if (9 < ((byte)local_e8[0] & 0x1f)) {
                if ((local_e8[0] >> 9 & 1) == 0) {
                  FUN_1435920c0(local_e8);
                }
                else {
                  FUN_143592150();
                }
              }
              if (9 < ((byte)local_b8[0] & 0x1f)) {
                if ((local_b8[0] >> 9 & 1) == 0) {
                  FUN_1435920c0(local_b8);
                }
                else {
                  FUN_143592150();
                }
              }
              if (local_c0 == 0) {
                return dVar15;
              }
              if ((local_c0 & 1) != 0) {
                return dVar15;
              }
              if ((*(uint *)(local_c0 + 8) & 0x3fffff) == 0) {
                return dVar15;
              }
              *(uint *)(local_c0 + 8) = *(uint *)(local_c0 + 8) - 1;
              FUN_1434ef880();
              return dVar15;
            }
            bVar12 = ~(byte)uVar2 & 1;
            if ((uVar2 >> 10 & 1) == 0) {
              if (bVar12 == 0) {
                uVar8 = _stricmp((char *)*local_178,(char *)*local_188);
              }
              else {
                pbVar10 = (byte *)*local_178;
                lVar11 = *local_188 - (longlong)pbVar10;
                do {
                  bVar12 = *pbVar10;
                  if (bVar12 != pbVar10[lVar11]) {
                    uVar8 = -(uint)(bVar12 < pbVar10[lVar11]) | 1;
                    goto LAB_1434b3be6;
                  }
                  pbVar10 = pbVar10 + 1;
                } while (bVar12 != 0);
                uVar8 = 0;
              }
            }
            else {
              lVar11 = *local_188;
              uVar7 = FUN_14335fa60(&local_188);
              uVar8 = FUN_14335ff80(&local_178,lVar11,uVar7,bVar12);
            }
LAB_1434b3be6:
            plVar1 = local_188 + 3;
            *(int *)plVar1 = (int)*plVar1 + -1;
            dVar15 = (double)(int)uVar8;
            if ((int)*plVar1 == 0) {
              FUN_14335f920(local_188);
            }
            plVar1 = local_178 + 3;
            *(int *)plVar1 = (int)*plVar1 + -1;
            uVar13 = local_88;
            if ((int)*plVar1 == 0) {
              FUN_14335f920();
              uVar13 = local_88;
            }
          }
          else {
            local_98 = 0.0;
            local_90 = 0.0;
            pcVar9 = (char *)FUN_143590af0(local_148,&local_180,&local_98);
            if ((*pcVar9 == '\0') ||
               (pcVar9 = (char *)FUN_143590af0(local_168,&local_17f,&local_90), *pcVar9 == '\0'))
            goto LAB_1434b3d41;
            dVar15 = local_98 - local_90;
          }
          if ((uVar2 >> 1 & 1) != 0) {
            dVar15 = -dVar15;
          }
          if (9 < ((byte)local_168[0] & 0x1f)) {
            if ((local_168[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_168);
            }
            else {
              FUN_143592150();
            }
          }
          lVar11 = local_170;
          param_3 = local_res18;
          param_2 = local_res10;
          if (9 < ((byte)local_148[0] & 0x1f)) {
            if ((local_148[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_148);
              lVar11 = local_170;
              param_3 = local_res18;
              param_2 = local_res10;
            }
            else {
              FUN_143592150();
              lVar11 = local_170;
              param_3 = local_res18;
              param_2 = local_res10;
            }
          }
        }
      }
      if (9 < ((byte)local_118[0] & 0x1f)) {
        if ((local_118[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_118);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_e8[0] & 0x1f)) {
        if ((local_e8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_e8);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_b8[0] & 0x1f)) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_b8);
        }
        else {
          FUN_143592150();
        }
      }
      if (((local_c0 != 0) && ((local_c0 & 1) == 0)) && ((*(uint *)(local_c0 + 8) & 0x3fffff) != 0))
      {
        *(uint *)(local_c0 + 8) = *(uint *)(local_c0 + 8) - 1;
        FUN_1434ef880();
      }
      local_170 = lVar11 + 0x20;
      uVar14 = uVar14 + 1;
      if (uVar13 <= uVar14) {
        return dVar15;
      }
    }
  }
  return dVar15;
}



// FUNCTION 1434b3eb0 FUN_1434b3eb0 body=200 status=ok
// SIG undefined FUN_1434b3eb0(void)

void FUN_1434b3eb0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_28;
  longlong local_20;
  
  lVar3 = param_1[8];
  lVar2 = param_2[1];
  if (*param_1 == lVar3) {
    lVar1 = *param_2;
    if (lVar2 != 0) {
      FUN_1434f0300(param_1 + 7,param_1[10],lVar3 + lVar2);
      FUN_1434e8b00(lVar3 * 0x20 + param_1[7],lVar2,lVar1);
    }
    *param_1 = param_1[8];
  }
  else if (lVar2 != 0) {
    lVar3 = 0;
    local_28 = param_1 + 2;
    do {
      param_1[2] = *param_1;
      local_20 = *param_2 + lVar3;
      FUN_1434e4980(param_1 + 0xb,param_1[0xc],&local_28);
      *param_1 = *param_1 + 1;
      lVar3 = lVar3 + 0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1434b3f80 FUN_1434b3f80 body=228 status=ok
// SIG undefined FUN_1434b3f80(void)

void FUN_1434b3f80(longlong *param_1,longlong *param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *local_28;
  longlong local_20;
  
  uVar2 = 0;
  uVar1 = param_2[1];
  if (*param_1 == param_1[8]) {
    if (param_4 != 0) {
      lVar3 = param_3 << 5;
      do {
        if (uVar1 <= uVar2 + param_3) break;
        FUN_1434ef7a0(param_1 + 7,*param_2 + lVar3);
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x20;
      } while (uVar2 < param_4);
    }
    *param_1 = param_1[8];
  }
  else if (param_4 != 0) {
    lVar3 = param_3 << 5;
    do {
      if (uVar1 <= uVar2 + param_3) {
        return;
      }
      local_28 = param_1 + 2;
      *local_28 = *param_1;
      local_20 = *param_2 + lVar3;
      FUN_1434e4980(param_1 + 0xb,param_1[0xc],&local_28);
      *param_1 = *param_1 + 1;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar2 < param_4);
  }
  return;
}



// FUNCTION 1434b4070 FUN_1434b4070 body=439 status=ok
// SIG undefined FUN_1434b4070(void)

void FUN_1434b4070(longlong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong local_res10;
  longlong *local_48;
  ulonglong *local_40;
  
  uVar1 = *param_2;
  if (*param_1 == param_1[8]) {
    if (param_4 != 0) {
      lVar6 = param_3 << 5;
      uVar5 = param_3;
      do {
        if (uVar1 <= uVar5) break;
        local_res10 = uVar5;
        if (uVar5 < param_2[8]) {
          puVar3 = (ulonglong *)(param_2[7] + lVar6);
        }
        else {
          if ((param_2[1] <= uVar5) && (uVar5 <= param_2[2])) {
            lVar2 = FUN_1434e59b0(param_2 + 0xb,&local_res10);
            puVar4 = (ulonglong *)0x0;
            if (-1 < lVar2) {
              puVar4 = (ulonglong *)(param_2[0xb] + 0x20 + lVar2 * 0x38);
            }
            puVar3 = puVar4 + 1;
            if (puVar4 == (ulonglong *)0x0) {
              puVar3 = (ulonglong *)0x0;
            }
            if (puVar3 != (ulonglong *)0x0) goto LAB_1434b4122;
          }
          puVar3 = param_2 + 3;
        }
LAB_1434b4122:
        FUN_1434ef7a0(param_1 + 7,puVar3);
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar5 - param_3 < param_4);
    }
    *param_1 = param_1[8];
  }
  else if (param_4 != 0) {
    lVar6 = param_3 << 5;
    uVar5 = param_3;
    do {
      if (uVar1 <= uVar5) {
        return;
      }
      param_1[2] = *param_1;
      local_res10 = uVar5;
      if (uVar5 < param_2[8]) {
        local_40 = (ulonglong *)(param_2[7] + lVar6);
      }
      else {
        if ((param_2[1] <= uVar5) && (uVar5 <= param_2[2])) {
          lVar2 = FUN_1434e59b0(param_2 + 0xb,&local_res10);
          puVar4 = (ulonglong *)0x0;
          if (-1 < lVar2) {
            puVar4 = (ulonglong *)(param_2[0xb] + 0x20 + lVar2 * 0x38);
          }
          local_40 = puVar4 + 1;
          if (puVar4 == (ulonglong *)0x0) {
            local_40 = (ulonglong *)0x0;
          }
          if (local_40 != (ulonglong *)0x0) goto LAB_1434b41d2;
        }
        local_40 = param_2 + 3;
      }
LAB_1434b41d2:
      local_48 = param_1 + 2;
      FUN_1434e4980(param_1 + 0xb,param_1[0xc],&local_48);
      *param_1 = *param_1 + 1;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while (uVar5 - param_3 < param_4);
  }
  return;
}



// FUNCTION 1434b4230 FUN_1434b4230 body=260 status=ok
// SIG undefined FUN_1434b4230(void)

void FUN_1434b4230(longlong *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong *local_18;
  uint *local_10;
  
  if (*param_1 == param_1[8]) {
    if (param_2 != 0) {
      uVar5 = (ulonglong)param_2;
      do {
        FUN_1434f0300(param_1 + 7,param_1[10],param_1[8] + 1);
        puVar4 = (uint *)(param_1[7] + -0x20 + param_1[8] * 0x20);
        if (puVar4 != (uint *)0x0) {
          *puVar4 = *param_3;
          *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(param_3 + 2);
          uVar1 = param_3[5];
          uVar2 = param_3[6];
          uVar3 = param_3[7];
          puVar4[4] = param_3[4];
          puVar4[5] = uVar1;
          puVar4[6] = uVar2;
          puVar4[7] = uVar3;
          if (9 < ((byte)*param_3 & 0x1f)) {
            if ((*param_3 >> 9 & 1) == 0) {
              FUN_143592070(param_3);
            }
            else {
              FUN_143592140();
            }
          }
        }
        param_3 = param_3 + 8;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    *param_1 = param_1[8];
  }
  else if (param_2 != 0) {
    uVar5 = (ulonglong)param_2;
    local_18 = param_1 + 2;
    do {
      param_1[2] = *param_1;
      local_10 = param_3;
      FUN_1434e4980(param_1 + 0xb,param_1[0xc],&local_18);
      *param_1 = *param_1 + 1;
      param_3 = param_3 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1434b4340 FUN_1434b4340 body=327 status=ok
// SIG undefined FUN_1434b4340(void)

void FUN_1434b4340(longlong *param_1,undefined8 param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *local_28;
  uint *local_20;
  
  if (param_3 != 0) {
    uVar7 = 0;
    puVar5 = param_4;
    do {
      lVar3 = FUN_1435caba0(param_2,puVar5);
      if ((*(int *)(lVar3 + 0x90) == 7) && ((~(*(byte *)(lVar3 + 0x88) >> 5) & 1) != 0)) {
        FUN_1434b4070(param_1,(undefined8 *)(*(longlong *)(puVar5 + 4) + 0x40),0,
                      *(undefined8 *)(*(longlong *)(puVar5 + 4) + 0x40));
      }
      else {
        if (*param_1 == param_1[8]) {
          FUN_1434f0300(param_1 + 7,param_1[10],param_1[8] + 1);
          puVar4 = (uint *)(param_1[7] + -0x20 + param_1[8] * 0x20);
          if (puVar4 != (uint *)0x0) {
            *puVar4 = *puVar5;
            *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar5 + 2);
            uVar6 = puVar5[5];
            uVar1 = puVar5[6];
            uVar2 = puVar5[7];
            puVar4[4] = puVar5[4];
            puVar4[5] = uVar6;
            puVar4[6] = uVar1;
            puVar4[7] = uVar2;
            if (9 < ((byte)*puVar5 & 0x1f)) {
              if ((*puVar5 >> 9 & 1) == 0) {
                FUN_143592070(puVar5);
              }
              else {
                FUN_143592140();
              }
            }
          }
        }
        else {
          param_1[2] = *param_1;
          local_28 = param_1 + 2;
          local_20 = param_4 + uVar7 * 8;
          FUN_1434e4980(param_1 + 0xb,param_1[0xc],&local_28);
        }
        *param_1 = *param_1 + 1;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      puVar5 = puVar5 + 8;
    } while (uVar6 < param_3);
  }
  return;
}



// FUNCTION 1434b4490 FUN_1434b4490 body=267 status=ok
// SIG undefined FUN_1434b4490(void)

void FUN_1434b4490(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong local_res18;
  longlong *local_28;
  longlong local_20;
  
  if (param_3 != 0) {
    lVar1 = param_1[8];
    if (*param_1 == lVar1) {
      FUN_1434eff40(param_1 + 7,lVar1 + param_3);
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 * 0x20 + param_1[7]),
                 (void *)(*param_2 + (ulonglong)(ushort)((short)param_3 - 1) * -0x20),param_3 * 0x20
                );
      *param_2 = *param_2 + param_3 * -0x20;
      *param_1 = param_1[8];
    }
    else {
      local_res18 = param_1[2] + param_3;
      if (param_3 != 0) {
        local_28 = &local_res18;
        lVar1 = param_3;
        do {
          local_20 = *param_2;
          FUN_1434e4980(param_1 + 0xb,param_1[0xc],&local_28);
          if (9 < ((byte)*(uint *)*param_2 & 0x1f)) {
            if ((*(uint *)*param_2 >> 9 & 1) == 0) {
              FUN_1435920c0();
            }
            else {
              FUN_143592150();
            }
          }
          *param_2 = *param_2 + -0x20;
          local_res18 = local_res18 + -1;
          lVar1 = lVar1 + -1;
        } while (lVar1 != 0);
      }
      param_1[2] = param_1[2] + param_3;
      *param_1 = *param_1 + param_3;
    }
  }
  return;
}



// FUNCTION 1434b45b0 FUN_1434b45b0 body=270 status=ok
// SIG undefined FUN_1434b45b0(void)

void FUN_1434b45b0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong local_res18;
  longlong *local_28;
  undefined8 local_20;
  
  if (param_3 != 0) {
    lVar1 = param_1[8];
    if (*param_1 == lVar1) {
      FUN_1434eff40(param_1 + 7,lVar1 + param_3);
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 * 0x20 + param_1[7]),
                 (void *)(*(longlong *)(param_2 + 0x18) +
                         (ulonglong)(ushort)((short)param_3 - 1) * -0x20),param_3 * 0x20);
      *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + param_3 * -0x20;
      *param_1 = param_1[8];
    }
    else {
      local_res18 = param_1[2] + param_3;
      if (param_3 != 0) {
        local_28 = &local_res18;
        lVar1 = param_3;
        do {
          local_20 = *(undefined8 *)(param_2 + 0x18);
          FUN_1434e4980(param_1 + 0xb,param_1[0xc],&local_28);
          if (9 < ((byte)**(uint **)(param_2 + 0x18) & 0x1f)) {
            if ((**(uint **)(param_2 + 0x18) >> 9 & 1) == 0) {
              FUN_1435920c0();
            }
            else {
              FUN_143592150();
            }
          }
          *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + -0x20;
          local_res18 = local_res18 + -1;
          lVar1 = lVar1 + -1;
        } while (lVar1 != 0);
      }
      param_1[2] = param_1[2] + param_3;
      *param_1 = *param_1 + param_3;
    }
  }
  return;
}



// FUNCTION 1434b46d0 FUN_1434b46d0 body=418 status=ok
// SIG undefined FUN_1434b46d0(void)

void FUN_1434b46d0(longlong *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  longlong *local_58;
  uint *local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38 [2];
  undefined8 local_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  if (*param_1 == param_1[8]) {
    if (param_2 != 0) {
      uVar3 = (ulonglong)param_2;
      do {
        uVar1 = *param_3;
        local_48 = param_3[4];
        uStack_44 = param_3[5];
        uStack_40 = param_3[6];
        uStack_3c = param_3[7];
        *param_3 = 0;
        local_58 = (longlong *)CONCAT44(local_58._4_4_,uVar1);
        local_50 = *(uint **)(param_3 + 2);
        FUN_1434f0300(param_1 + 7,param_1[10],param_1[8] + 1);
        puVar2 = (uint *)(param_1[7] + -0x20 + param_1[8] * 0x20);
        if (puVar2 == (uint *)0x0) {
LAB_1434b478a:
        }
        else {
          *puVar2 = (uint)local_58;
          *(uint **)(puVar2 + 2) = local_50;
          puVar2[4] = local_48;
          puVar2[5] = uStack_44;
          puVar2[6] = uStack_40;
          puVar2[7] = uStack_3c;
          if (9 < ((byte)local_58 & 0x1f)) {
            if (((uint)local_58 >> 9 & 1) == 0) {
              FUN_143592070(&local_58);
            }
            else {
              FUN_143592140();
            }
            goto LAB_1434b478a;
          }
        }
        if (9 < ((byte)(uint)local_58 & 0x1f)) {
          if (((uint)local_58 >> 9 & 1) == 0) {
            FUN_1435920c0(&local_58);
          }
          else {
            FUN_143592150();
          }
        }
        param_3 = param_3 + 8;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    *param_1 = param_1[8];
  }
  else if (param_2 != 0) {
    local_50 = local_38;
    uVar3 = (ulonglong)param_2;
    local_58 = param_1 + 2;
    do {
      param_1[2] = *param_1;
      local_38[0] = *param_3;
      local_28 = param_3[4];
      uStack_24 = param_3[5];
      uStack_20 = param_3[6];
      uStack_1c = param_3[7];
      local_30 = *(undefined8 *)(param_3 + 2);
      *param_3 = 0;
      FUN_1434e4980(param_1 + 0xb,param_1[0xc],&local_58);
      if (9 < ((byte)local_38[0] & 0x1f)) {
        if ((local_38[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_38);
        }
        else {
          FUN_143592150();
        }
      }
      *param_1 = *param_1 + 1;
      param_3 = param_3 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 1434b4880 FUN_1434b4880 body=114 status=ok
// SIG undefined FUN_1434b4880(void)

void FUN_1434b4880(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    FUN_1434e83f0(param_1 + 0xb,param_2[0xc],param_2 + 0xb);
    param_1[0xc] = param_2[0xc];
    FUN_1434e6710(param_1 + 7,param_2 + 7);
  }
  return;
}



// FUNCTION 1434b4900 FUN_1434b4900 body=162 status=ok
// SIG undefined FUN_1434b4900(void)

void FUN_1434b4900(ulonglong *param_1,ulonglong param_2)

{
  if (param_2 == 0) {
    FUN_1434f0300(param_1 + 7,param_1[10],0);
  }
  else if ((param_1[8] < param_2) || (param_1[8] == 0)) {
    if (param_1[1] <= param_2) {
      if (param_1[2] <= param_2) {
        *param_1 = param_2;
        return;
      }
      FUN_1434b5a00(param_1,param_2,(param_1[2] - param_2) + 1,0);
      *param_1 = param_2;
      return;
    }
  }
  else {
    FUN_1434eff40(param_1 + 7);
  }
  FUN_1434e5ff0(param_1 + 0xb);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 1434b49b0 FUN_1434b49b0 body=80 status=ok
// SIG undefined FUN_1434b49b0(void)

void FUN_1434b49b0(longlong *param_1,undefined8 param_2)

{
  longlong *local_18;
  undefined8 local_10;
  
  if (*param_1 == param_1[8]) {
    FUN_1434ef7a0(param_1 + 7);
    *param_1 = *param_1 + 1;
    return;
  }
  local_18 = param_1 + 2;
  *local_18 = *param_1;
  local_10 = param_2;
  FUN_1434e4980(param_1 + 0xb,param_1[0xc],&local_18);
  *param_1 = *param_1 + 1;
  return;
}



// FUNCTION 1434b4a10 FUN_1434b4a10 body=314 status=ok
// SIG undefined FUN_1434b4a10(void)

void FUN_1434b4a10(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong **pplVar2;
  uint *puVar3;
  longlong *local_48;
  uint *local_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  longlong *local_28;
  undefined8 local_20;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  if (*param_1 == param_1[8]) {
    uVar1 = *param_2;
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    *param_2 = 0;
    local_48 = (longlong *)CONCAT44(local_48._4_4_,uVar1);
    local_40 = *(uint **)(param_2 + 2);
    FUN_1434f0300(param_1 + 7,param_1[10],param_1[8] + 1);
    puVar3 = (uint *)(param_1[7] + -0x20 + param_1[8] * 0x20);
    if (puVar3 == (uint *)0x0) {
LAB_1434b4ab4:
    }
    else {
      *puVar3 = (uint)local_48;
      *(uint **)(puVar3 + 2) = local_40;
      puVar3[4] = local_38;
      puVar3[5] = uStack_34;
      puVar3[6] = uStack_30;
      puVar3[7] = uStack_2c;
      if (9 < ((byte)local_48 & 0x1f)) {
        if (((uint)local_48 >> 9 & 1) == 0) {
          FUN_143592070(&local_48);
        }
        else {
          FUN_143592140();
        }
        goto LAB_1434b4ab4;
      }
    }
    if (((byte)(uint)local_48 & 0x1f) < 10) goto LAB_1434b4b3c;
    pplVar2 = &local_48;
    uVar1 = (uint)local_48;
  }
  else {
    param_1[2] = *param_1;
    local_28._0_4_ = *param_2;
    local_48 = param_1 + 2;
    local_18 = param_2[4];
    uStack_14 = param_2[5];
    uStack_10 = param_2[6];
    uStack_c = param_2[7];
    local_20 = *(undefined8 *)(param_2 + 2);
    local_40 = (uint *)&local_28;
    *param_2 = 0;
    FUN_1434e4980(param_1 + 0xb,param_1[0xc],&local_48);
    if (((byte)(uint)local_28 & 0x1f) < 10) goto LAB_1434b4b3c;
    pplVar2 = &local_28;
    uVar1 = (uint)local_28;
  }
  if ((uVar1 >> 9 & 1) != 0) {
    FUN_143592150();
    *param_1 = *param_1 + 1;
    return;
  }
  FUN_1435920c0(pplVar2);
LAB_1434b4b3c:
  *param_1 = *param_1 + 1;
  return;
}



// FUNCTION 1434b4b50 FUN_1434b4b50 body=357 status=ok
// SIG undefined FUN_1434b4b50(void)

void FUN_1434b4b50(longlong *param_1,ulonglong param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_res8;
  ulonglong *local_28;
  longlong local_20;
  
  uVar3 = (ulonglong)param_3;
  if (param_2 < (ulonglong)param_1[8]) {
    uVar2 = uVar3;
    if (param_3 != 0) {
      do {
        FUN_1434ef2e0(param_1 + 7,param_2,param_4);
        param_4 = param_4 + 0x20;
        param_2 = param_2 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    lVar1 = param_1[1];
    if (lVar1 == 0) goto LAB_1434b4c99;
  }
  else {
    if (param_2 != param_1[8]) {
      if (param_2 < (ulonglong)param_1[1]) {
        FUN_1434b5890(param_1,param_1[1],uVar3);
        param_1[2] = param_1[2] + uVar3;
        param_1[1] = param_2;
      }
      else if ((ulonglong)param_1[2] < param_2) {
        param_1[2] = (param_2 - 1) + uVar3;
      }
      else {
        FUN_1434b5890(param_1,param_2,uVar3);
        param_1[2] = param_1[2] + uVar3;
      }
      if (param_3 != 0) {
        local_28 = &local_res8;
        uVar2 = uVar3;
        do {
          local_res8 = param_2;
          local_20 = param_4;
          FUN_1434e4980(param_1 + 0xb,param_1[0xc],&local_28);
          param_2 = param_2 + 1;
          param_4 = param_4 + 0x20;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      goto LAB_1434b4c99;
    }
    uVar2 = uVar3;
    if (param_3 != 0) {
      do {
        FUN_1434ef7a0(param_1 + 7,param_4);
        param_4 = param_4 + 0x20;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (((longlong *)param_1[0xb] == (longlong *)0x0) || (*(longlong *)param_1[0xb] == 0))
    goto LAB_1434b4c99;
    lVar1 = param_1[1];
  }
  FUN_1434b5890(param_1,lVar1,uVar3);
  param_1[1] = param_1[1] + uVar3;
  param_1[2] = param_1[2] + uVar3;
LAB_1434b4c99:
  *param_1 = *param_1 + uVar3;
  return;
}



// FUNCTION 1434b4cc0 FUN_1434b4cc0 body=343 status=ok
// SIG undefined FUN_1434b4cc0(void)

void FUN_1434b4cc0(ulonglong *param_1,ulonglong param_2,longlong param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_res18 [2];
  ulonglong *local_38;
  longlong local_30;
  
  if (param_3 == 0) {
    return;
  }
  uVar2 = param_1[8];
  if (param_2 < uVar2) {
    uVar1 = param_2 + param_3;
    if (uVar1 < uVar2) {
      local_38 = local_res18;
      do {
        if (param_1[1] == 0) {
          param_1[1] = uVar1;
        }
        local_30 = uVar1 * 0x20 + param_1[7];
        local_res18[0] = uVar1;
        FUN_1434e4980(param_1 + 0xb,param_1[0xc],&local_38);
        if (param_1[2] < local_res18[0]) {
          param_1[2] = local_res18[0];
        }
        uVar1 = local_res18[0] + 1;
        local_res18[0] = uVar1;
      } while (uVar1 < uVar2);
    }
    FUN_1434efac0(param_1 + 7,param_2,uVar2 - param_2);
  }
  if (((longlong *)param_1[0xb] != (longlong *)0x0) && (*(longlong *)param_1[0xb] != 0)) {
    uVar1 = param_1[1];
    uVar2 = param_2 + param_3;
    if ((uVar1 < uVar2) && (param_2 <= param_1[2])) {
      if ((uVar1 < param_2) || (uVar2 <= param_1[2])) {
        if (uVar1 < param_2) {
          uVar1 = param_2;
        }
        FUN_1434b5cd0(param_1,uVar1,param_3);
        if (param_1[2] < uVar2) {
          uVar1 = FUN_1434b60c0(param_1,param_2);
          param_1[2] = uVar1;
        }
        if (param_1[1] < param_2) goto LAB_1434b4df7;
        uVar2 = FUN_1434b6180(param_1,uVar2,param_1[2]);
      }
      else {
        FUN_1434e5ff0(param_1 + 0xb);
        uVar2 = 0;
        param_1[2] = 0;
      }
      param_1[1] = uVar2;
    }
  }
LAB_1434b4df7:
  if ((param_4 == 0) && (*param_1 <= param_2 + param_3)) {
    *param_1 = param_2;
  }
  return;
}



// FUNCTION 1434b4e20 FUN_1434b4e20 body=286 status=ok
// SIG undefined FUN_1434b4e20(void)

void FUN_1434b4e20(longlong *param_1,ulonglong param_2,ulonglong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *local_28;
  longlong local_20;
  
  if (param_3 != 0) {
    if (param_2 < (ulonglong)param_1[8]) {
      uVar4 = param_1[8] - param_2;
      if (param_3 < uVar4) {
        uVar4 = param_3;
      }
      if ((param_4 != (longlong *)0x0) && (param_2 < uVar4 + param_2)) {
        lVar3 = param_2 << 5;
        lVar2 = (uVar4 + param_2) - param_2;
        do {
          lVar1 = param_1[7];
          if (*param_4 == param_4[8]) {
            FUN_1434ef7a0(param_4 + 7);
          }
          else {
            local_28 = param_4 + 2;
            *local_28 = *param_4;
            local_20 = lVar1 + lVar3;
            FUN_1434e4980(param_4 + 0xb,param_4[0xc],&local_28);
          }
          *param_4 = *param_4 + 1;
          lVar3 = lVar3 + 0x20;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      FUN_1434efac0(param_1 + 7,param_2,uVar4);
    }
    FUN_1434b5a00(param_1,param_2,param_3,param_4);
    if (param_1[2] != 0) {
      *param_1 = param_1[2] + 1;
      return;
    }
    *param_1 = param_1[8];
  }
  return;
}



// FUNCTION 1434b4f50 FUN_1434b4f50 body=136 status=ok
// SIG undefined FUN_1434b4f50(void)

longlong FUN_1434b4f50(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong local_res10 [3];
  
  if (param_2 < *(ulonglong *)(param_1 + 0x40)) {
    return param_2 * 0x20 + *(longlong *)(param_1 + 0x38);
  }
  if ((param_2 < *(ulonglong *)(param_1 + 8)) || (*(ulonglong *)(param_1 + 0x10) < param_2)) {
    lVar1 = param_1 + 0x18;
  }
  else {
    local_res10[0] = param_2;
    lVar1 = FUN_1434e59b0(param_1 + 0x58,local_res10);
    lVar2 = 0;
    if (-1 < lVar1) {
      lVar2 = *(longlong *)(param_1 + 0x58) + 0x20 + lVar1 * 0x38;
    }
    lVar1 = lVar2 + 8;
    if (lVar2 == 0) {
      lVar1 = 0;
    }
    if (lVar1 == 0) {
      return param_1 + 0x18;
    }
  }
  return lVar1;
}



// FUNCTION 1434b4fe0 FUN_1434b4fe0 body=198 status=ok
// SIG undefined FUN_1434b4fe0(void)

void FUN_1434b4fe0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong local_res10 [3];
  ulonglong *local_18;
  undefined8 local_10;
  
  local_res10[0] = param_2;
  if (*param_1 <= param_2) {
    FUN_1434b4900(param_1,param_2 + 1);
  }
  if (local_res10[0] < param_1[8]) {
    FUN_143590140(local_res10[0] * 0x20 + param_1[7],param_3);
    return;
  }
  if (local_res10[0] == param_1[8]) {
    FUN_1434ef7a0(param_1 + 7,param_3);
    FUN_1434b5dd0(param_1);
    return;
  }
  local_18 = local_res10;
  local_10 = param_3;
  FUN_1434e4980(param_1 + 0xb,param_1[0xc],&local_18);
  if ((local_res10[0] < param_1[1]) ||
     (((longlong *)param_1[0xb] != (longlong *)0x0 && (*(longlong *)param_1[0xb] == 1)))) {
    param_1[1] = local_res10[0];
  }
  if (param_1[2] < local_res10[0]) {
    param_1[2] = local_res10[0];
  }
  return;
}



// FUNCTION 1434b50b0 FUN_1434b50b0 body=1141 status=ok
// SIG undefined FUN_1434b50b0(void)

void FUN_1434b50b0(ulonglong *param_1)

{
  byte *pbVar1;
  bool bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong **ppuVar12;
  undefined8 local_res8;
  ulonglong local_res10;
  ulonglong *local_b8;
  uint *local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98 [2];
  undefined8 local_90;
  uint local_78 [2];
  undefined8 local_70;
  undefined8 *local_58;
  uint *local_50;
  ulonglong *local_48;
  uint *local_40;
  ulonglong *local_38;
  uint *local_30;
  
  uVar9 = 0;
  uVar5 = param_1[8];
  if (*param_1 == uVar5) {
    lVar11 = uVar5 - 1;
    if (0 < lVar11) {
      lVar10 = lVar11 * 0x20;
      uVar5 = uVar9;
      do {
        FUN_1435904e0(param_1[7] + uVar5,param_1[7] + lVar10);
        uVar9 = uVar9 + 1;
        uVar5 = uVar5 + 0x20;
        lVar11 = lVar11 + -1;
        lVar10 = lVar10 + -0x20;
      } while ((longlong)uVar9 < lVar11);
    }
  }
  else {
    local_res8 = *param_1 - 1;
    if (uVar5 != 0) {
      do {
        puVar6 = (uint *)(uVar9 * 0x20 + param_1[7]);
        local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,*puVar6);
        local_b0 = *(uint **)(puVar6 + 2);
        local_a8 = puVar6[4];
        uStack_a4 = puVar6[5];
        uStack_a0 = puVar6[6];
        uStack_9c = puVar6[7];
        if (9 < ((byte)*puVar6 & 0x1f)) {
          if ((*puVar6 >> 9 & 1) == 0) {
            FUN_143592070();
          }
          else {
            FUN_143592140();
          }
        }
        uVar3 = FUN_1434b4f50(param_1,local_res8);
        FUN_1434b4fe0(param_1,uVar9,uVar3);
        FUN_1434b4fe0(param_1,local_res8,&local_b8);
        if (9 < ((byte)local_b8 & 0x1f)) {
          if (((uint)local_b8 >> 9 & 1) == 0) {
            FUN_1435920c0(&local_b8);
          }
          else {
            FUN_143592150();
          }
        }
        uVar9 = (ulonglong)((int)uVar9 + 1);
        local_res8 = local_res8 - 1;
      } while (uVar9 < uVar5);
    }
    bVar2 = false;
    local_78[0] = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_90 = 0;
    if (uVar9 < local_res8) {
      do {
        uVar5 = param_1[0xb];
        local_res10 = uVar9;
        if (uVar5 != 0) {
          uVar4 = 0x1505;
          lVar11 = 8;
          do {
            lVar10 = lVar11 + 7;
            lVar11 = lVar11 + -1;
            uVar4 = (ulonglong)*(byte *)((longlong)&local_res8 + lVar10) + uVar4 * 0x1003f;
          } while (lVar11 != 0);
          uVar4 = *(ulonglong *)(uVar5 + 8) & uVar4;
          puVar7 = (ulonglong *)(uVar5 + 0x10 + uVar4 * 0x38);
          if ((*puVar7 == 0xfffffffffffffffe) || (uVar8 = uVar4, puVar7[1] != uVar4)) {
LAB_1434b53bb:
            if (uVar5 != 0) {
              uVar4 = 0x1505;
              lVar11 = 8;
              do {
                pbVar1 = &stack0x00000007 + lVar11;
                lVar11 = lVar11 + -1;
                uVar4 = (ulonglong)*pbVar1 + uVar4 * 0x1003f;
              } while (lVar11 != 0);
              uVar4 = *(ulonglong *)(uVar5 + 8) & uVar4;
              puVar7 = (ulonglong *)(uVar5 + 0x10 + uVar4 * 0x38);
              if ((*puVar7 != 0xfffffffffffffffe) && (uVar8 = uVar4, puVar7[1] == uVar4)) {
                while ((puVar7[1] != uVar4 || (puVar7[2] != local_res8))) {
                  uVar8 = *puVar7;
                  if (uVar8 == 0xffffffffffffffff) goto LAB_1434b548a;
                  puVar7 = (ulonglong *)(uVar5 + 0x10 + uVar8 * 0x38);
                }
                if ((-1 < (longlong)uVar8) && (lVar11 = uVar5 + 0x20 + uVar8 * 0x38, lVar11 != 0)) {
                  FUN_143590140(local_98,lVar11 + 8);
                  bVar2 = true;
                  FUN_1434e47f0(param_1 + 0xb,&local_res8);
                  local_b8 = &local_res10;
                  ppuVar12 = &local_b8;
                  local_b0 = local_98;
                  local_res10 = uVar9;
                  goto LAB_1434b5479;
                }
              }
            }
          }
          else {
LAB_1434b5263:
            if ((puVar7[1] != uVar4) || (puVar7[2] != uVar9)) {
              uVar8 = *puVar7;
              if (uVar8 != 0xffffffffffffffff) goto code_r0x0001434b527c;
              goto LAB_1434b53bb;
            }
            if (((longlong)uVar8 < 0) || (lVar11 = uVar5 + 0x20 + uVar8 * 0x38, lVar11 == 0))
            goto LAB_1434b53bb;
            FUN_143590140(local_78,lVar11 + 8);
            uVar5 = param_1[0xb];
            if (uVar5 != 0) {
              uVar4 = 0x1505;
              lVar11 = 8;
              do {
                pbVar1 = &stack0x00000007 + lVar11;
                lVar11 = lVar11 + -1;
                uVar4 = (ulonglong)*pbVar1 + uVar4 * 0x1003f;
              } while (lVar11 != 0);
              uVar4 = *(ulonglong *)(uVar5 + 8) & uVar4;
              puVar7 = (ulonglong *)(uVar4 * 0x38 + 0x10 + uVar5);
              if ((*puVar7 != 0xfffffffffffffffe) && (uVar8 = uVar4, puVar7[1] == uVar4)) {
                while ((puVar7[1] != uVar4 || (puVar7[2] != local_res8))) {
                  uVar8 = *puVar7;
                  if (uVar8 == 0xffffffffffffffff) goto LAB_1434b538e;
                  puVar7 = (ulonglong *)(uVar8 * 0x38 + 0x10 + uVar5);
                }
                if (((longlong)uVar8 < 0) || (lVar11 = uVar5 + 0x20 + uVar8 * 0x38, lVar11 == 0))
                goto LAB_1434b538e;
                FUN_143590140(local_98,lVar11 + 8);
                local_58 = &local_res8;
                local_50 = local_78;
                FUN_1434e4980(param_1 + 0xb,param_1[0xc],&local_58);
                local_48 = &local_res10;
                ppuVar12 = &local_48;
                local_40 = local_98;
                local_res10 = uVar9;
                goto LAB_1434b5479;
              }
            }
LAB_1434b538e:
            bVar2 = true;
            local_res10 = uVar9;
            FUN_1434e47f0(param_1 + 0xb,&local_res10);
            local_38 = &local_res8;
            ppuVar12 = &local_38;
            local_30 = local_78;
LAB_1434b5479:
            FUN_1434e4980(param_1 + 0xb,param_1[0xc],ppuVar12);
          }
        }
LAB_1434b548a:
        uVar9 = (ulonglong)((int)uVar9 + 1);
        local_res8 = local_res8 - 1;
      } while (uVar9 < local_res8);
      if (bVar2) {
        uVar5 = FUN_1434b60c0(param_1,param_1[2]);
        param_1[2] = uVar5;
        uVar5 = FUN_1434b6180(param_1,0,uVar5);
        param_1[1] = uVar5;
      }
    }
    if (9 < ((byte)local_98[0] & 0x1f)) {
      if ((local_98[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_98);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_78[0] & 0x1f)) {
      if ((local_78[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_78);
      }
      else {
        FUN_143592150();
      }
    }
  }
  return;
code_r0x0001434b527c:
  puVar7 = (ulonglong *)(uVar5 + 0x10 + uVar8 * 0x38);
  goto LAB_1434b5263;
}



// FUNCTION 1434b5530 FUN_1434b5530 body=67 status=ok
// SIG undefined FUN_1434b5530(void)

void FUN_1434b5530(longlong *param_1)

{
  if (*param_1 != 0) {
    if (param_1[8] != 0) {
      FUN_1434ef9b0(param_1 + 7,0);
    }
    FUN_1434b5a00(param_1,0,1);
    FUN_1434b5dd0(param_1);
    *param_1 = *param_1 + -1;
  }
  return;
}



// FUNCTION 1434b5580 FUN_1434b5580 body=385 status=ok
// SIG undefined FUN_1434b5580(void)

ulonglong * FUN_1434b5580(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bStackX_1f;
  ulonglong local_res20;
  
  if ((longlong)param_3 < 0) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      *param_2 = 0;
      return param_2;
    }
    if ((*(longlong **)(param_1 + 0x58) != (longlong *)0x0) &&
       (**(longlong **)(param_1 + 0x58) != 0)) {
      *param_2 = *(ulonglong *)(param_1 + 8);
      return param_2;
    }
  }
  else {
    uVar4 = param_3 & 0xffffffff;
    if (param_3 < *(ulonglong *)(param_1 + 0x40)) {
      if (uVar4 != *(ulonglong *)(param_1 + 0x40) - 1) {
        *param_2 = param_3 + 1;
        return param_2;
      }
      if ((*(longlong **)(param_1 + 0x58) != (longlong *)0x0) &&
         (**(longlong **)(param_1 + 0x58) != 0)) {
        *param_2 = *(ulonglong *)(param_1 + 8);
        return param_2;
      }
    }
    else if ((*(ulonglong *)(param_1 + 8) <= uVar4) &&
            (uVar2 = *(ulonglong *)(param_1 + 0x10), uVar4 <= uVar2)) {
      local_res20 = (ulonglong)((int)param_3 + 1);
      if (local_res20 <= uVar2) {
        lVar3 = *(longlong *)(param_1 + 0x58);
        do {
          if (lVar3 != 0) {
            uVar4 = 0x1505;
            lVar7 = 8;
            do {
              pbVar1 = &bStackX_1f + lVar7;
              lVar7 = lVar7 + -1;
              uVar4 = (ulonglong)*pbVar1 + uVar4 * 0x1003f;
            } while (lVar7 != 0);
            uVar4 = *(ulonglong *)(lVar3 + 8) & uVar4;
            puVar5 = (ulonglong *)(uVar4 * 0x38 + 0x10 + lVar3);
            if ((*puVar5 != 0xfffffffffffffffe) && (uVar6 = uVar4, puVar5[1] == uVar4)) {
              while ((puVar5[1] != uVar4 || (puVar5[2] != local_res20))) {
                uVar6 = *puVar5;
                if (uVar6 == 0xffffffffffffffff) goto LAB_1434b56d4;
                puVar5 = (ulonglong *)(uVar6 * 0x38 + 0x10 + lVar3);
              }
              if ((-1 < (longlong)uVar6) && (lVar3 + 0x20 + uVar6 * 0x38 != 0)) {
                *param_2 = local_res20;
                return param_2;
              }
            }
          }
LAB_1434b56d4:
          local_res20 = local_res20 + 1;
        } while (local_res20 <= uVar2);
      }
    }
  }
  *param_2 = 0xffffffffffffffff;
  return param_2;
}



// FUNCTION 1434b5710 FUN_1434b5710 body=118 status=ok
// SIG undefined FUN_1434b5710(void)

undefined1 * FUN_1434b5710(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  
  uVar1 = *(ulonglong *)(param_1 + 0x40);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(**(code **)(*param_3 + 8))
                                 (param_3,local_res8,uVar3,
                                  uVar4 * 0x20 + *(longlong *)(param_1 + 0x38));
      if (*pcVar2 == '\0') {
        *param_2 = 0;
        return param_2;
      }
      uVar3 = uVar3 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar4 < uVar1);
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1434b5790 FUN_1434b5790 body=245 status=ok
// SIG undefined FUN_1434b5790(void)

undefined1 * FUN_1434b5790(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char *pcVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  plVar6 = (longlong *)(param_1 + 0x58);
  lVar1 = *plVar6;
  if (lVar1 == 0) {
    plVar6 = (longlong *)0x0;
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    plVar4 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 7;
    } while (uVar5 <= *(ulonglong *)(lVar1 + 8));
  }
  do {
    do {
      if (((plVar6 == (longlong *)0x0) || (lVar1 = *plVar6, lVar1 == 0)) ||
         (*(longlong *)(lVar1 + 8) < (longlong)uVar5)) {
        *param_2 = 1;
        return param_2;
      }
      pcVar3 = (char *)(**(code **)(*param_3 + 8))
                                 (param_3,local_res8,*(undefined4 *)(uVar5 * 0x38 + 0x20 + lVar1),
                                  lVar1 + 0x28 + uVar5 * 0x38);
      if (*pcVar3 == '\0') {
        *param_2 = 0;
        return param_2;
      }
      uVar2 = *(ulonglong *)(*plVar6 + 8);
    } while (((longlong)uVar2 < (longlong)uVar5) || (uVar5 = uVar5 + 1, uVar2 < uVar5));
    plVar4 = (longlong *)(uVar5 * 0x38 + 0x10 + *plVar6);
    do {
      if (*plVar4 != -2) break;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 7;
    } while (uVar5 <= uVar2);
  } while( true );
}



// FUNCTION 1434b5890 FUN_1434b5890 body=360 status=ok
// SIG undefined FUN_1434b5890(void)

void FUN_1434b5890(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  ulonglong *local_38;
  uint *local_30;
  uint local_28 [2];
  undefined8 local_20;
  
  uVar8 = *(longlong *)(param_1 + 0x10) + 1;
  local_28[0] = 0;
  local_20 = 0;
  if (param_2 < uVar8) {
    plVar1 = (longlong *)(param_1 + 0x58);
    do {
      lVar7 = *plVar1;
      uVar8 = uVar8 - 1;
      local_res8 = uVar8;
      if (lVar7 != 0) {
        uVar3 = 0x1505;
        lVar6 = 8;
        do {
          pbVar2 = &stack0x00000007 + lVar6;
          lVar6 = lVar6 + -1;
          uVar3 = (ulonglong)*pbVar2 + uVar3 * 0x1003f;
        } while (lVar6 != 0);
        uVar3 = *(ulonglong *)(lVar7 + 8) & uVar3;
        puVar4 = (ulonglong *)(uVar3 * 0x38 + 0x10 + lVar7);
        if ((*puVar4 != 0xfffffffffffffffe) && (uVar5 = uVar3, puVar4[1] == uVar3)) {
          while ((puVar4[1] != uVar3 || (puVar4[2] != uVar8))) {
            uVar5 = *puVar4;
            if (uVar5 == 0xffffffffffffffff) goto LAB_1434b59a9;
            puVar4 = (ulonglong *)(uVar5 * 0x38 + 0x10 + lVar7);
          }
          if ((-1 < (longlong)uVar5) && (lVar7 = lVar7 + 0x20 + uVar5 * 0x38, lVar7 != 0)) {
            FUN_143590140(local_28,lVar7 + 8);
            FUN_1434e47f0(plVar1,&local_res8);
            local_res8 = local_res8 + param_3;
            local_38 = &local_res8;
            local_30 = local_28;
            FUN_1434e4980(plVar1,*(undefined8 *)(param_1 + 0x60),&local_38);
          }
        }
      }
LAB_1434b59a9:
    } while (param_2 < uVar8);
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



// FUNCTION 1434b5a00 FUN_1434b5a00 body=707 status=ok
// SIG undefined FUN_1434b5a00(void)

void FUN_1434b5a00(longlong param_1,ulonglong param_2,ulonglong param_3,longlong *param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res18;
  uint local_48 [2];
  undefined8 local_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (param_3 != 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x10);
    uVar11 = (param_2 - 1) + param_3;
    uVar5 = *(ulonglong *)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 8) < param_2) {
      uVar5 = param_2;
    }
    uVar9 = uVar2;
    if (uVar11 < uVar2) {
      uVar9 = uVar11;
    }
    local_res18 = uVar5;
    local_48[0] = 0;
    local_40 = 0;
    uVar10 = uVar5;
    if (uVar5 <= uVar2) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x58);
        if (lVar7 != 0) {
          uVar2 = 0x1505;
          lVar6 = 8;
          do {
            pbVar1 = &stack0x00000017 + lVar6;
            lVar6 = lVar6 + -1;
            uVar2 = (ulonglong)*pbVar1 + uVar2 * 0x1003f;
          } while (lVar6 != 0);
          uVar2 = *(ulonglong *)(lVar7 + 8) & uVar2;
          puVar3 = (ulonglong *)(uVar2 * 0x38 + 0x10 + lVar7);
          if ((*puVar3 != 0xfffffffffffffffe) && (uVar4 = uVar2, puVar3[1] == uVar2)) {
            while ((puVar3[1] != uVar2 || (puVar3[2] != uVar10))) {
              uVar4 = *puVar3;
              if (uVar4 == 0xffffffffffffffff) goto LAB_1434b5c1e;
              puVar3 = (ulonglong *)(uVar4 * 0x38 + 0x10 + lVar7);
            }
            if ((-1 < (longlong)uVar4) && (lVar7 = lVar7 + 0x20 + uVar4 * 0x38, lVar7 != 0)) {
              local_res18 = uVar10;
              FUN_143590140(local_48,lVar7 + 8);
              FUN_1434e47f0(param_1 + 0x58,&local_res18);
              uVar10 = local_res18;
              if (uVar11 < local_res18) {
                if ((local_48[0] & 0x1f) != 0) {
                  local_res18 = local_res18 - param_3;
                  FUN_1434e4980(param_1 + 0x58,*(undefined8 *)(param_1 + 0x60));
                }
              }
              else if (param_4 != (longlong *)0x0) {
                if (*param_4 == param_4[8]) {
                  FUN_1434f0300(param_4 + 7,param_4[10]);
                  puVar8 = (uint *)(param_4[7] + -0x20 + param_4[8] * 0x20);
                  if (puVar8 != (uint *)0x0) {
                    *puVar8 = local_48[0];
                    *(undefined8 *)(puVar8 + 2) = local_40;
                    puVar8[4] = local_38;
                    puVar8[5] = uStack_34;
                    puVar8[6] = uStack_30;
                    puVar8[7] = uStack_2c;
                    if (9 < ((byte)local_48[0] & 0x1f)) {
                      if ((local_48[0] >> 9 & 1) == 0) {
                        FUN_143592070(local_48);
                      }
                      else {
                        FUN_143592140();
                      }
                    }
                  }
                }
                else {
                  param_4[2] = *param_4;
                  FUN_1434e4980(param_4 + 0xb,param_4[0xc]);
                }
                *param_4 = *param_4 + 1;
              }
            }
          }
        }
LAB_1434b5c1e:
        local_res18 = uVar10 + 1;
        uVar10 = local_res18;
      } while (local_res18 <= *(ulonglong *)(param_1 + 0x10));
    }
    if (*(ulonglong *)(param_1 + 8) < uVar5) {
      uVar5 = *(ulonglong *)(param_1 + 8);
    }
    lVar7 = uVar5 - param_3;
    if (uVar5 <= param_3) {
      lVar7 = 0;
    }
    *(longlong *)(param_1 + 8) = lVar7;
    if (uVar9 < *(ulonglong *)(param_1 + 0x10)) {
      uVar9 = *(ulonglong *)(param_1 + 0x10);
    }
    lVar7 = uVar9 - param_3;
    if (uVar9 <= param_3) {
      lVar7 = 0;
    }
    *(longlong *)(param_1 + 0x10) = lVar7;
    if (9 < ((byte)local_48[0] & 0x1f)) {
      if ((local_48[0] >> 9 & 1) != 0) {
        FUN_143592150();
        return;
      }
      FUN_1435920c0(local_48);
    }
  }
  return;
}



// FUNCTION 1434b5cd0 FUN_1434b5cd0 body=243 status=ok
// SIG undefined FUN_1434b5cd0(void)

void FUN_1434b5cd0(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong local_res18;
  
  if (param_3 != 0) {
    uVar7 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x58);
      local_res18 = uVar7 + param_2;
      if (lVar2 != 0) {
        uVar3 = 0x1505;
        lVar6 = 8;
        do {
          pbVar1 = &stack0x00000017 + lVar6;
          lVar6 = lVar6 + -1;
          uVar3 = (ulonglong)*pbVar1 + uVar3 * 0x1003f;
        } while (lVar6 != 0);
        uVar3 = *(ulonglong *)(lVar2 + 8) & uVar3;
        puVar4 = (ulonglong *)(uVar3 * 0x38 + 0x10 + lVar2);
        if ((*puVar4 != 0xfffffffffffffffe) && (uVar5 = uVar3, puVar4[1] == uVar3)) {
          while ((puVar4[1] != uVar3 || (puVar4[2] != uVar7 + param_2))) {
            uVar5 = *puVar4;
            if (uVar5 == 0xffffffffffffffff) goto LAB_1434b5da1;
            puVar4 = (ulonglong *)(uVar5 * 0x38 + 0x10 + lVar2);
          }
          if ((-1 < (longlong)uVar5) && (lVar2 + 0x20 + uVar5 * 0x38 != 0)) {
            FUN_1434e47f0((longlong *)(param_1 + 0x58),&local_res18);
          }
        }
      }
LAB_1434b5da1:
      uVar7 = (ulonglong)((int)uVar7 + 1);
    } while (uVar7 < param_3);
  }
  return;
}



// FUNCTION 1434b5dd0 FUN_1434b5dd0 body=523 status=ok
// SIG undefined FUN_1434b5dd0(void)

void FUN_1434b5dd0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;
  uint local_28 [2];
  undefined8 local_20;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  local_28[0] = 0;
  local_20 = 0;
  if (*(longlong *)(param_1 + 0x40) == *(longlong *)(param_1 + 8)) {
    while (uVar2 = *(ulonglong *)(param_1 + 8), uVar2 <= *(ulonglong *)(param_1 + 0x10)) {
      lVar7 = *(longlong *)(param_1 + 0x58);
      if (lVar7 != 0) {
        lVar5 = 8;
        uVar3 = 0x1505;
        do {
          lVar1 = lVar5 + 7;
          lVar5 = lVar5 + -1;
          uVar3 = (ulonglong)*(byte *)(lVar1 + param_1) + uVar3 * 0x1003f;
        } while (lVar5 != 0);
        uVar3 = *(ulonglong *)(lVar7 + 8) & uVar3;
        puVar4 = (ulonglong *)(uVar3 * 0x38 + 0x10 + lVar7);
        if ((*puVar4 != 0xfffffffffffffffe) && (uVar6 = uVar3, puVar4[1] == uVar3)) {
          while( true ) {
            if ((puVar4[1] == uVar3) && (puVar4[2] == uVar2)) {
              if ((-1 < (longlong)uVar6) && (lVar7 = lVar7 + 0x20 + uVar6 * 0x38, lVar7 != 0)) {
                FUN_143590140(local_28,lVar7 + 8);
                FUN_1434e47f0(param_1 + 0x58,param_1 + 8);
                *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
                if ((local_28[0] & 0x1f) == 0) {
                  FUN_1434b5ff0(param_1);
                  goto LAB_1434b5f83;
                }
                FUN_1434f0300(param_1 + 0x38,*(undefined8 *)(param_1 + 0x50),
                              *(longlong *)(param_1 + 0x40) + 1);
                puVar8 = (uint *)(*(longlong *)(param_1 + 0x38) + -0x20 +
                                 *(longlong *)(param_1 + 0x40) * 0x20);
                if (puVar8 != (uint *)0x0) {
                  *puVar8 = local_28[0];
                  *(undefined8 *)(puVar8 + 2) = local_20;
                  puVar8[4] = local_18;
                  puVar8[5] = uStack_14;
                  puVar8[6] = uStack_10;
                  puVar8[7] = uStack_c;
                  if (9 < ((byte)local_28[0] & 0x1f)) {
                    if ((local_28[0] >> 9 & 1) == 0) {
                      FUN_143592070(local_28);
                    }
                    else {
                      FUN_143592140();
                    }
                  }
                }
                goto LAB_1434b5f66;
              }
              break;
            }
            uVar6 = *puVar4;
            if (uVar6 == 0xffffffffffffffff) break;
            puVar4 = (ulonglong *)(uVar6 * 0x38 + 0x10 + lVar7);
          }
        }
      }
      *(ulonglong *)(param_1 + 8) = uVar2 + 1;
      FUN_1434b5ff0(param_1);
LAB_1434b5f66:
      if (*(longlong *)(param_1 + 0x40) != *(longlong *)(param_1 + 8)) break;
    }
  }
LAB_1434b5f83:
  if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 8)) {
    FUN_1434e5ff0(param_1 + 0x58);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
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



// FUNCTION 1434b5ff0 FUN_1434b5ff0 body=198 status=ok
// SIG undefined FUN_1434b5ff0(void)

void FUN_1434b5ff0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  uVar2 = 0;
  local_28[0] = 0;
  local_20 = 0;
  if (*(ulonglong *)(param_1 + 8) <= *(ulonglong *)(param_1 + 0x10)) {
    do {
      lVar1 = FUN_1434e59b0(param_1 + 0x58,param_1 + 8);
      if ((-1 < lVar1) && (lVar1 = *(longlong *)(param_1 + 0x58) + 0x20 + lVar1 * 0x38, lVar1 != 0))
      {
        FUN_143590140(local_28,lVar1 + 8);
        uVar2 = local_28[0];
        if ((local_28[0] & 0x1f) != 0) break;
        FUN_1434e47f0(param_1 + 0x58,param_1 + 8);
        uVar2 = local_28[0];
      }
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    } while (*(ulonglong *)(param_1 + 8) <= *(ulonglong *)(param_1 + 0x10));
  }
  if (9 < ((byte)uVar2 & 0x1f)) {
    if ((uVar2 >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1434b60c0 FUN_1434b60c0 body=178 status=ok
// SIG undefined FUN_1434b60c0(void)

ulonglong FUN_1434b60c0(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bStackX_f;
  ulonglong local_res10;
  
  if (-1 < (longlong)param_2) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    do {
      local_res10 = param_2;
      if (lVar2 != 0) {
        uVar3 = 0x1505;
        lVar6 = 8;
        do {
          pbVar1 = &bStackX_f + lVar6;
          lVar6 = lVar6 + -1;
          uVar3 = (ulonglong)*pbVar1 + uVar3 * 0x1003f;
        } while (lVar6 != 0);
        uVar3 = *(ulonglong *)(lVar2 + 8) & uVar3;
        puVar4 = (ulonglong *)(uVar3 * 0x38 + 0x10 + lVar2);
        if ((*puVar4 != 0xfffffffffffffffe) && (uVar5 = uVar3, puVar4[1] == uVar3)) {
          while ((puVar4[1] != uVar3 || (puVar4[2] != param_2))) {
            uVar5 = *puVar4;
            if (uVar5 == 0xffffffffffffffff) goto LAB_1434b6164;
            puVar4 = (ulonglong *)(uVar5 * 0x38 + 0x10 + lVar2);
          }
          if ((-1 < (longlong)uVar5) && (lVar2 + 0x20 + uVar5 * 0x38 != 0)) {
            return param_2;
          }
        }
      }
LAB_1434b6164:
      param_2 = param_2 - 1;
    } while (-1 < (longlong)param_2);
  }
  return param_2;
}



// FUNCTION 1434b6180 FUN_1434b6180 body=185 status=ok
// SIG undefined FUN_1434b6180(void)

ulonglong FUN_1434b6180(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bStackX_f;
  ulonglong local_res10;
  
  local_res10 = param_2;
  if (param_2 <= param_3) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    do {
      if (lVar2 != 0) {
        uVar3 = 0x1505;
        lVar6 = 8;
        do {
          pbVar1 = &bStackX_f + lVar6;
          lVar6 = lVar6 + -1;
          uVar3 = (ulonglong)*pbVar1 + uVar3 * 0x1003f;
        } while (lVar6 != 0);
        uVar3 = *(ulonglong *)(lVar2 + 8) & uVar3;
        puVar4 = (ulonglong *)(uVar3 * 0x38 + 0x10 + lVar2);
        if ((*puVar4 != 0xfffffffffffffffe) && (uVar5 = uVar3, puVar4[1] == uVar3)) {
          while ((puVar4[1] != uVar3 || (puVar4[2] != param_2))) {
            uVar5 = *puVar4;
            if (uVar5 == 0xffffffffffffffff) goto LAB_1434b6224;
            puVar4 = (ulonglong *)(uVar5 * 0x38 + 0x10 + lVar2);
          }
          if ((-1 < (longlong)uVar5) && (lVar2 + 0x20 + uVar5 * 0x38 != 0)) {
            return param_2;
          }
        }
      }
LAB_1434b6224:
      param_2 = param_2 + 1;
      local_res10 = param_2;
    } while (param_2 <= param_3);
  }
  return param_2;
}



// FUNCTION 1434b6240 FUN_1434b6240 body=140 status=ok
// SIG undefined FUN_1434b6240(void)

undefined1 *
FUN_1434b6240(longlong param_1,undefined1 *param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 uStack_c;
  
  plVar2 = *(longlong **)(param_1 + 8);
  uVar1 = plVar2[1] + 1;
  if (uVar1 < (ulonglong)plVar2[1]) {
    uVar5 = uVar1;
    if ((ulonglong)plVar2[2] >> 1 <= uVar1) goto LAB_1434b629a;
  }
  else {
    if (uVar1 <= (ulonglong)plVar2[2]) goto LAB_1434b629a;
    uVar5 = (uVar1 >> 2) + uVar1;
  }
  FUN_1434efcd0(plVar2,plVar2[3],uVar5);
LAB_1434b629a:
  lVar3 = *plVar2;
  plVar2[1] = uVar1;
  *param_2 = 1;
  puVar4 = (undefined8 *)(lVar3 + -0x10 + uVar1 * 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = param_4;
    puVar4[1] = CONCAT44(uStack_c,param_3);
  }
  return param_2;
}



// FUNCTION 1434b62e0 FUN_1434b62e0 body=209 status=ok
// SIG undefined FUN_1434b62e0(void)

undefined1 * FUN_1434b62e0(longlong param_1,undefined1 *param_2,undefined4 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 local_res8 [8];
  longlong local_28 [2];
  
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x218);
  local_28[0] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar4 = (char *)FUN_1435911f0(param_4,local_res8,local_28);
  lVar2 = local_28[0];
  if (*pcVar4 == '\0') {
    *param_2 = 0;
  }
  else {
    *(int *)(local_28[0] + 0x18) = *(int *)(local_28[0] + 0x18) + 1;
    plVar3 = *(longlong **)(param_1 + 0x10);
    FUN_1434f00a0(plVar3,plVar3[3],plVar3[1] + 1);
    plVar3 = (longlong *)(*plVar3 + (plVar3[1] * 3 + -3) * 8);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = lVar2;
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
      plVar3[1] = param_4;
      *(undefined4 *)(plVar3 + 2) = param_3;
    }
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
    }
    *param_2 = 1;
  }
  piVar1 = (int *)(local_28[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_2;
}



// FUNCTION 1434b63c0 FUN_1434b63c0 body=216 status=ok
// SIG undefined FUN_1434b63c0(void)

undefined1 *
FUN_1434b63c0(longlong param_1,undefined1 *param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  pcVar5 = (char *)FUN_143590af0(param_4,local_38,&local_30);
  if (*pcVar5 == '\0') {
    *param_2 = 0;
    return param_2;
  }
  plVar3 = *(longlong **)(param_1 + 8);
  local_28 = local_30;
  uVar4 = plVar3[1];
  uVar1 = uVar4 + 1;
  uStack_20 = param_4;
  local_18 = param_3;
  if (uVar1 < uVar4) {
    uVar6 = uVar1;
    if ((ulonglong)plVar3[2] >> 1 <= uVar1) goto LAB_1434b6452;
  }
  else {
    if (uVar1 <= (ulonglong)plVar3[2]) goto LAB_1434b6452;
    uVar6 = (uVar1 >> 2) + uVar1;
  }
  FUN_14330c450(plVar3,plVar3[3],uVar6);
LAB_1434b6452:
  plVar3[1] = uVar1;
  puVar2 = (undefined8 *)(*plVar3 + uVar4 * 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = local_28;
    puVar2[1] = uStack_20;
    puVar2[2] = CONCAT44(uStack_14,local_18);
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1434b64a0 FUN_1434b64a0 body=116 status=ok
// SIG undefined FUN_1434b64a0(void)

undefined8 * FUN_1434b64a0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1435b9d40();
  *param_1 = &PTR_FUN_145b18400;
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x48);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = uVar1;
  param_1[0x13] = 0;
  param_1[0x14] = uVar1;
  return param_1;
}



// FUNCTION 1434b6520 FUN_1434b6520 body=59 status=ok
// SIG undefined FUN_1434b6520(void)

void FUN_1434b6520(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1435b16a0();
  FUN_1434e8dd0(param_1 + 0x40,param_2,param_3);
  return;
}



// FUNCTION 1434b6570 FUN_1434b6570 body=396 status=ok
// SIG undefined FUN_1434b6570(void)

longlong * FUN_1434b6570(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  char *pcVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  uint *local_res10;
  undefined1 *local_58;
  undefined8 local_50;
  
  FUN_1432c5960(&local_58,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x48));
  puVar8 = (uint *)0x0;
  puVar7 = puVar8;
  puVar9 = puVar8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    do {
      if (puVar7 != (uint *)0x0) {
        Scaleform::StringBuffer::AppendString(&local_58,*(undefined8 *)*param_3,0xffffffffffffffff);
      }
      local_res10 = puVar7;
      if (puVar7 < *(uint **)(param_1 + 0x80)) {
        puVar4 = (uint *)(*(longlong *)(param_1 + 0x78) + (longlong)puVar9);
      }
      else {
        if ((*(uint **)(param_1 + 0x48) <= puVar7) && (puVar7 <= *(uint **)(param_1 + 0x50))) {
          lVar3 = FUN_1434e59b0(param_1 + 0x98,&local_res10);
          puVar5 = puVar8;
          if (-1 < lVar3) {
            puVar5 = (uint *)(*(longlong *)(param_1 + 0x98) + 0x20 + lVar3 * 0x38);
          }
          puVar4 = puVar5 + 2;
          if (puVar5 == (uint *)0x0) {
            puVar4 = puVar8;
          }
          if (puVar4 != (uint *)0x0) goto LAB_1434b6644;
        }
        puVar4 = (uint *)(param_1 + 0x58);
      }
LAB_1434b6644:
      uVar1 = *puVar4 & 0x1f;
      if (uVar1 != 0) {
        if (uVar1 == 0xc) {
          bVar10 = *(longlong *)(puVar4 + 4) == 0;
LAB_1434b666a:
          if (bVar10) goto LAB_1434b6688;
        }
        else if (uVar1 == 10) {
          bVar10 = *(longlong *)(puVar4 + 4) == *(longlong *)(*(longlong *)(puVar4 + 4) + 8) + 0x80;
          goto LAB_1434b666a;
        }
        pcVar2 = (char *)FUN_143591800(puVar4,local_res8);
        if (*pcVar2 == '\0') break;
      }
LAB_1434b6688:
      puVar7 = (uint *)((longlong)puVar7 + 1);
      puVar9 = puVar9 + 8;
    } while (puVar7 < *(uint **)(param_1 + 0x40));
  }
  puVar6 = &DAT_145af3922;
  if (local_58 != (undefined1 *)0x0) {
    puVar6 = local_58;
  }
  lVar3 = FUN_143360a90(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),puVar6,local_50);
  *param_2 = lVar3;
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  Scaleform::StringBuffer::~StringBuffer(&local_58);
  return param_2;
}



// FUNCTION 1434b6710 FUN_1434b6710 body=902 status=ok
// SIG undefined FUN_1434b6710(void)

longlong * FUN_1434b6710(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint *puVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  uint *local_res18;
  undefined8 *local_res20;
  uint local_d8 [2];
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined1 local_b8 [8];
  ulonglong local_b0;
  uint local_a8 [8];
  uint local_88 [8];
  undefined1 *local_68;
  undefined8 local_60;
  
  FUN_1432c5960(&local_68,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x48));
  puVar11 = (uint *)0x0;
  puVar10 = puVar11;
  puVar12 = puVar11;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    do {
      if (puVar10 != (uint *)0x0) {
        Scaleform::StringBuffer::AppendString(&local_68,&DAT_145b0a66c,0xffffffffffffffff);
      }
      local_res18 = puVar10;
      if (puVar10 < *(uint **)(param_1 + 0x80)) {
        puVar9 = (uint *)(*(longlong *)(param_1 + 0x78) + (longlong)puVar12);
      }
      else {
        if ((*(uint **)(param_1 + 0x48) <= puVar10) && (puVar10 <= *(uint **)(param_1 + 0x50))) {
          lVar6 = FUN_1434e59b0(param_1 + 0x98,&local_res18);
          puVar7 = puVar11;
          if (-1 < lVar6) {
            puVar7 = (uint *)(*(longlong *)(param_1 + 0x98) + 0x20 + lVar6 * 0x38);
          }
          puVar9 = puVar7 + 2;
          if (puVar7 == (uint *)0x0) {
            puVar9 = puVar11;
          }
          if (puVar9 != (uint *)0x0) goto LAB_1434b67e0;
        }
        puVar9 = (uint *)(param_1 + 0x58);
      }
LAB_1434b67e0:
      uVar3 = *puVar9 & 0x1f;
      if (uVar3 != 0) {
        if (uVar3 == 0xc) {
          bVar13 = *(longlong *)(puVar9 + 4) == 0;
LAB_1434b680a:
          if (bVar13) goto LAB_1434b69b7;
        }
        else if (uVar3 == 10) {
          bVar13 = *(longlong *)(puVar9 + 4) == *(longlong *)(*(longlong *)(puVar9 + 4) + 8) + 0x80;
          goto LAB_1434b680a;
        }
        local_res10 = FUN_143360950(*(undefined8 *)
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                                     + 0x218),"toLocaleString",0xe);
        *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
        Scaleform::GFx::AS3::Value::Value(local_88,&local_res10);
        FUN_1435ae6b0(local_b8,*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1d8),
                      local_88);
        if (9 < ((byte)local_88[0] & 0x1f)) {
          if ((local_88[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_88);
          }
          else {
            FUN_143592150();
          }
        }
        piVar1 = (int *)(local_res10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        local_d8[0] = 0;
        local_d0 = 0;
        pcVar4 = (char *)FUN_1435b29a0(local_res8,
                                       *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),
                                       local_b8,puVar9,local_d8,0,0);
        puVar5 = local_c8;
        if (*pcVar4 == '\0') {
          if (9 < ((byte)local_d8[0] & 0x1f)) {
            if ((local_d8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_d8);
            }
            else {
              FUN_143592150();
            }
          }
          if (9 < ((byte)local_a8[0] & 0x1f)) {
            if ((local_a8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_a8);
            }
            else {
              FUN_143592150();
            }
          }
          if (((local_b0 != 0) && ((local_b0 & 1) == 0)) &&
             ((*(uint *)(local_b0 + 8) & 0x3fffff) != 0)) {
            *(uint *)(local_b0 + 8) = *(uint *)(local_b0 + 8) - 1;
            FUN_1434ef880();
          }
          break;
        }
        if (((byte)local_d8[0] & 0x1f) == 10) {
          *(int *)(local_c8 + 3) = *(int *)(local_c8 + 3) + 1;
          Scaleform::StringBuffer::AppendString(&local_68,*local_c8,0xffffffffffffffff);
          piVar1 = (int *)(puVar5 + 3);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
        }
        else {
          puVar5 = (undefined8 *)FUN_1435da5d0(&local_res20,local_d8);
          Scaleform::StringBuffer::AppendString(&local_68,*(undefined8 *)*puVar5,0xffffffffffffffff)
          ;
          piVar1 = (int *)(local_res20 + 3);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          puVar5 = local_res20;
        }
        if (iVar2 == 0) {
          FUN_14335f920(puVar5);
        }
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_a8[0] & 0x1f)) {
          if ((local_a8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_a8);
          }
          else {
            FUN_143592150();
          }
        }
        if (((local_b0 != 0) && ((local_b0 & 1) == 0)) &&
           ((*(uint *)(local_b0 + 8) & 0x3fffff) != 0)) {
          *(uint *)(local_b0 + 8) = *(uint *)(local_b0 + 8) - 1;
          FUN_1434ef880();
        }
      }
LAB_1434b69b7:
      puVar10 = (uint *)((longlong)puVar10 + 1);
      puVar12 = puVar12 + 8;
    } while (puVar10 < *(uint **)(param_1 + 0x40));
  }
  puVar8 = &DAT_145af3922;
  if (local_68 != (undefined1 *)0x0) {
    puVar8 = local_68;
  }
  lVar6 = FUN_143360a90(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),puVar8,local_60);
  *param_2 = lVar6;
  *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
  Scaleform::StringBuffer::~StringBuffer(&local_68);
  return param_2;
}



// FUNCTION 1434b6aa0 FUN_1434b6aa0 body=56 status=ok
// SIG undefined FUN_1434b6aa0(void)

void FUN_1434b6aa0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong local_res18 [2];
  
  uVar2 = FUN_1434b6710(*(undefined8 *)(param_3 + 0x10),local_res18);
  FUN_143590250(param_4,uVar2);
  piVar1 = (int *)(local_res18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434b6ae0 FUN_1434b6ae0 body=64 status=ok
// SIG undefined FUN_1434b6ae0(void)

void FUN_1434b6ae0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong local_res10 [3];
  
  uVar2 = FUN_1434b6570(*(undefined8 *)(param_3 + 0x10),local_res10,
                        *(longlong *)(param_2 + 0x10) + 0x70);
  FUN_143590250(param_4,uVar2);
  piVar1 = (int *)(local_res10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434b6b30 FUN_1434b6b30 body=161 status=ok
// SIG undefined FUN_1434b6b30(void)

void FUN_1434b6b30(longlong param_1,uint *param_2,uint param_3)

{
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  if (param_3 != 0) {
    if ((ulonglong)param_3 <= *(ulonglong *)(param_1 + 0x40)) {
      if (9 < ((byte)*param_2 & 0x1f)) {
        if ((*param_2 >> 9 & 1) == 0) {
          FUN_1435920c0(param_2);
        }
        else {
          FUN_143592150();
        }
      }
      *param_2 = *param_2 & 0xffffffe3;
      *param_2 = *param_2 | 3;
      *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,param_3 - 1);
      *(undefined8 *)(param_2 + 6) = uStack_10;
      return;
    }
    FUN_1435b1820(param_1,param_2,param_3 - *(int *)(param_1 + 0x40));
    return;
  }
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



// FUNCTION 1434b6be0 FUN_1434b6be0 body=135 status=ok
// SIG undefined FUN_1434b6be0(void)

int * FUN_1434b6be0(longlong param_1,int *param_2,ulonglong param_3)

{
  int *piVar1;
  int iVar2;
  longlong local_res8;
  
  *param_2 = 0;
  if ((param_3 & 0xffffffff) <= *(ulonglong *)(param_1 + 0x40)) {
    FUN_1434b5580(param_1 + 0x40,&local_res8,(param_3 & 0xffffffff) - 1);
    if (-1 < local_res8) {
      iVar2 = (int)local_res8 + 1;
      goto LAB_1434b6c52;
    }
    param_3 = param_3 & 0xffffffff;
  }
  if (*(uint *)(param_1 + 0x40) <= (uint)param_3) {
    param_3 = (ulonglong)((uint)param_3 - *(uint *)(param_1 + 0x40));
  }
  piVar1 = (int *)FUN_1435b1860(param_1,&local_res8,param_3);
  iVar2 = *piVar1;
  *param_2 = iVar2;
  if (iVar2 == 0) {
    return param_2;
  }
  iVar2 = iVar2 + *(int *)(param_1 + 0x40);
LAB_1434b6c52:
  *param_2 = iVar2;
  return param_2;
}



// FUNCTION 1434b6c70 FUN_1434b6c70 body=122 status=ok
// SIG undefined FUN_1434b6c70(void)

void FUN_1434b6c70(longlong param_1,uint *param_2,uint param_3)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (ulonglong *)(param_1 + 0x40);
    if ((ulonglong)param_3 <= *puVar2) {
      uVar1 = FUN_1434b4f50(puVar2,param_3 - 1);
      FUN_143590140(param_2,uVar1);
      return;
    }
    FUN_1435b1a70(param_1,param_2,param_3 - *(int *)puVar2);
    return;
  }
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



// FUNCTION 1434b6cf0 FUN_1434b6cf0 body=120 status=ok
// SIG undefined FUN_1434b6cf0(void)

undefined1 * FUN_1434b6cf0(longlong param_1,undefined1 *param_2,longlong param_3,undefined8 param_4)

{
  char local_res18 [8];
  undefined4 local_18 [4];
  
  FUN_1435bdd60(local_res18,param_3 + 0x10,local_18);
  if (local_res18[0] == '\0') {
    FUN_1435aff50(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_1434b4fe0(param_1 + 0x40,local_18[0],param_4);
    *param_2 = 1;
  }
  return param_2;
}



// FUNCTION 1434b6d70 FUN_1434b6d70 body=128 status=ok
// SIG undefined FUN_1434b6d70(void)

undefined1 * FUN_1434b6d70(longlong param_1,undefined1 *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char local_res18 [8];
  undefined4 local_18 [4];
  
  FUN_1435bdd60(local_res18,param_3 + 0x10,local_18);
  if (local_res18[0] == '\0') {
    FUN_1435b0180(param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = FUN_1434b4f50(param_1 + 0x40,local_18[0]);
    FUN_143590140(param_4,uVar1);
    *param_2 = 1;
  }
  return param_2;
}



// FUNCTION 1434b6e00 FUN_1434b6e00 body=56 status=ok
// SIG undefined FUN_1434b6e00(void)

undefined1 *
FUN_1434b6e00(longlong param_1,undefined1 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1434b4f50(param_1 + 0x40,param_3);
  FUN_143590140(param_4,uVar1);
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1434b6e40 FUN_1434b6e40 body=154 status=ok
// SIG undefined FUN_1434b6e40(void)

undefined1 * FUN_1434b6e40(longlong param_1,undefined1 *param_2,longlong param_3)

{
  char local_res18 [8];
  uint local_res20 [2];
  
  FUN_1435bdd60(local_res18,param_3 + 0x10,local_res20);
  if (local_res18[0] == '\0') {
    FUN_1435b0650(param_1,param_2,param_3);
    return param_2;
  }
  if (*(ulonglong *)(param_1 + 0x40) <= (ulonglong)local_res20[0]) {
    *param_2 = 0;
    return param_2;
  }
  FUN_1434b4cc0((ulonglong *)(param_1 + 0x40),(ulonglong)local_res20[0],1);
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1434b6ee0 FUN_1434b6ee0 body=184 status=ok
// SIG undefined FUN_1434b6ee0(void)

ulonglong FUN_1434b6ee0(longlong param_1,longlong param_2,undefined1 param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 local_res10 [8];
  uint local_res20 [2];
  
  uVar3 = *(uint *)(param_2 + 0x10) & 0x1f;
  if (1 < uVar3 - 2) {
    if (uVar3 == 10) {
      local_res20[0] = 0;
      pcVar1 = (char *)Scaleform::GFx::AS3::GetArrayInd
                                 (local_res10,*(undefined8 *)(param_2 + 0x20),local_res20);
      if (*pcVar1 != '\0') {
        return (ulonglong)
               CONCAT31((int3)(local_res20[0] >> 8),
                        (ulonglong)local_res20[0] < *(ulonglong *)(param_1 + 0x40));
      }
    }
    uVar2 = FUN_1435b0590(param_1,param_2,param_3);
    return uVar2;
  }
  if ((-1 < *(int *)(param_2 + 0x20)) &&
     ((ulonglong)(longlong)*(int *)(param_2 + 0x20) < *(ulonglong *)(param_1 + 0x40))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1434b6fa0 FUN_1434b6fa0 body=142 status=ok
// SIG undefined FUN_1434b6fa0(void)

ulonglong * FUN_1434b6fa0(longlong param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  char local_res18 [8];
  undefined4 local_res20 [2];
  
  FUN_1435bdd60(local_res18,param_3 + 0x10,local_res20);
  if (local_res18[0] != '\0') {
    uVar1 = FUN_1434b4f50(param_1 + 0x40,local_res20[0]);
    *param_2 = uVar1 | 1;
    param_2[1] = 0xffffffffffffffff;
    FUN_143590110(param_2 + 2,param_1);
    return param_2;
  }
  FUN_1435b1d70(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 1434b7040 FUN_1434b7040 body=242 status=ok
// SIG undefined FUN_1434b7040(void)

void FUN_1434b7040(longlong param_1,int param_2,uint *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 local_res10 [16];
  double local_res20;
  double local_38;
  undefined1 local_30 [8];
  longlong local_28;
  
  if ((param_2 != 1) || (2 < (*param_3 & 0x1f) - 2)) {
    FUN_1434b4230(param_1 + 0x40);
    return;
  }
  if (((*param_3 & 0x1f) != 4) || (dVar5 = modf(*(double *)(param_3 + 4),&local_38), dVar5 == 0.0))
  {
    pcVar3 = (char *)FUN_143590af0(param_3,local_res10,&local_res20);
    if (*pcVar3 == '\0') {
      return;
    }
    if (0.0 <= local_res20) {
      FUN_1434b4900(param_1 + 0x40,(longlong)local_res20 & 0xffffffff);
      return;
    }
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar4 = FUN_1435c8e40(local_30,0x3ed,uVar2);
  FUN_1435cbdf0(uVar2,uVar4);
  piVar1 = (int *)(local_28 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434b7140 frameGet body=6 status=ok
// SIG undefined frameGet(void)

void Scaleform::GFx::AS3::Instances::fl_display::FrameLabel::frameGet
               (longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  return;
}



// FUNCTION 1434b7170 FUN_1434b7170 body=143 status=ok
// SIG undefined FUN_1434b7170(void)

void FUN_1434b7170(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 local_res18 [16];
  longlong local_18 [2];
  
  local_res8 = *(longlong *)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x70);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if (param_3 != 0) {
    pcVar2 = (char *)FUN_1435911f0(param_4,local_res18,&local_res8);
    if (*pcVar2 == '\0') goto LAB_1434b71e4;
  }
  uVar3 = FUN_1434b6570(param_1,local_18,&local_res8);
  FUN_143590250(param_2,uVar3);
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
LAB_1434b71e4:
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434b7210 FUN_1434b7210 body=86 status=ok
// SIG undefined FUN_1434b7210(void)

void FUN_1434b7210(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar2 = FUN_1434b4f50(plVar1,*plVar1 + -1);
    FUN_143590140(param_2,uVar2);
    if (*plVar1 != 0) {
      FUN_1434b4cc0(plVar1,*plVar1 + -1,1);
    }
  }
  return;
}



// FUNCTION 1434b7270 FUN_1434b7270 body=100 status=ok
// SIG undefined FUN_1434b7270(void)

void FUN_1434b7270(longlong param_1,uint *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  FUN_1434b4230((undefined8 *)(param_1 + 0x40),param_3,param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe3;
  *param_2 = *param_2 | 3;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,(int)uVar1);
  *(undefined8 *)(param_2 + 6) = uStack_10;
  return;
}



// FUNCTION 1434b72e0 FUN_1434b72e0 body=46 status=ok
// SIG undefined FUN_1434b72e0(void)

void FUN_1434b72e0(longlong param_1,undefined8 param_2)

{
  FUN_1434b50b0(param_1 + 0x40);
  FUN_1434f0700(param_2,param_1);
  return;
}



// FUNCTION 1434b7320 FUN_1434b7320 body=224 status=ok
// SIG undefined FUN_1434b7320(void)

void FUN_1434b7320(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = FUN_1435b5bc0(uVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1434b64a0(lVar2,uVar1);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,lVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  if (lVar2 != param_1) {
    FUN_1434b4880(lVar2 + 0x40,param_1 + 0x40);
  }
  FUN_1434b4340(lVar2 + 0x40,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),param_3,param_4);
  return;
}



// FUNCTION 1434b7410 FUN_1434b7410 body=168 status=ok
// SIG undefined FUN_1434b7410(void)

void FUN_1434b7410(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar2 = FUN_1434b4f50(plVar1,0);
    FUN_143590140(param_2,uVar2);
    if (*plVar1 != 0) {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_1434ef9b0(param_1 + 0x78,0);
      }
      FUN_1434b5a00(plVar1,0,1);
      FUN_1434b5dd0(plVar1);
      *plVar1 = *plVar1 + -1;
    }
    return;
  }
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



// FUNCTION 1434b74c0 FUN_1434b74c0 body=498 status=ok
// SIG undefined FUN_1434b74c0(void)

void FUN_1434b74c0(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  bool bVar14;
  ulonglong local_res8;
  uint *local_38;
  uint *local_30;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar6 = FUN_1435b5bc0(uVar1);
  puVar13 = (uint *)0x0;
  puVar7 = puVar13;
  if (lVar6 != 0) {
    puVar7 = (uint *)FUN_1434b64a0(lVar6,uVar1);
  }
  puVar9 = (uint *)*param_2;
  if (puVar7 != puVar9) {
    if (puVar9 != (uint *)0x0) {
      if (((ulonglong)puVar9 & 1) == 0) {
        if ((puVar9[2] & 0x3fffff) != 0) {
          puVar9[2] = puVar9[2] - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar9 + -1;
      }
    }
    *param_2 = (longlong)puVar7;
  }
  bVar14 = false;
  if (param_3 < 0) {
    param_3 = param_3 + *(int *)(param_1 + 0x40);
    bVar14 = param_3 < 0;
  }
  if (bVar14) {
    param_3 = 0;
  }
  if (param_4 < 0) {
    param_4 = param_4 + *(int *)(param_1 + 0x40);
  }
  iVar5 = (int)*(undefined8 *)(param_1 + 0x40);
  if (iVar5 < param_4) {
    param_4 = iVar5;
  }
  if (param_3 < param_4) {
    uVar11 = (ulonglong)param_3;
    lVar6 = uVar11 << 5;
    uVar12 = (ulonglong)(uint)(param_4 - param_3);
    do {
      local_res8 = uVar11;
      if (uVar11 < *(ulonglong *)(param_1 + 0x80)) {
        puVar10 = (uint *)(*(longlong *)(param_1 + 0x78) + lVar6);
      }
      else {
        if ((*(ulonglong *)(param_1 + 0x48) <= uVar11) && (uVar11 <= *(ulonglong *)(param_1 + 0x50))
           ) {
          lVar8 = FUN_1434e59b0(param_1 + 0x98,&local_res8);
          puVar9 = puVar13;
          if (-1 < lVar8) {
            puVar9 = (uint *)(*(longlong *)(param_1 + 0x98) + 0x20 + lVar8 * 0x38);
          }
          puVar10 = puVar9 + 2;
          if (puVar9 == (uint *)0x0) {
            puVar10 = puVar13;
          }
          if (puVar10 != (uint *)0x0) goto LAB_1434b75e4;
        }
        puVar10 = (uint *)(param_1 + 0x58);
      }
LAB_1434b75e4:
      if (*(longlong *)(puVar7 + 0x10) == *(longlong *)(puVar7 + 0x20)) {
        FUN_1434f0300(puVar7 + 0x1e,*(undefined8 *)(puVar7 + 0x24),*(longlong *)(puVar7 + 0x20) + 1)
        ;
        puVar9 = (uint *)(*(longlong *)(puVar7 + 0x1e) + -0x20 + *(longlong *)(puVar7 + 0x20) * 0x20
                         );
        if (puVar9 != (uint *)0x0) {
          *puVar9 = *puVar10;
          *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar10 + 2);
          uVar2 = puVar10[5];
          uVar3 = puVar10[6];
          uVar4 = puVar10[7];
          puVar9[4] = puVar10[4];
          puVar9[5] = uVar2;
          puVar9[6] = uVar3;
          puVar9[7] = uVar4;
          if (9 < ((byte)*puVar10 & 0x1f)) {
            if ((*puVar10 >> 9 & 1) == 0) {
              FUN_143592070(puVar10);
            }
            else {
              FUN_143592140();
            }
          }
        }
      }
      else {
        local_38 = puVar7 + 0x14;
        *(longlong *)local_38 = *(longlong *)(puVar7 + 0x10);
        local_30 = puVar10;
        FUN_1434e4980(puVar7 + 0x26,*(undefined8 *)(puVar7 + 0x28),&local_38);
      }
      *(longlong *)(puVar7 + 0x10) = *(longlong *)(puVar7 + 0x10) + 1;
      uVar11 = uVar11 + 1;
      lVar6 = lVar6 + 0x20;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}



// FUNCTION 1434b76c0 FUN_1434b76c0 body=94 status=ok
// SIG undefined FUN_1434b76c0(void)

void FUN_1434b76c0(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  FUN_1434b4b50((undefined8 *)(param_1 + 0x40),0);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe3;
  *param_2 = *param_2 | 3;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_14,(int)uVar1);
  *(undefined8 *)(param_2 + 6) = uStack_10;
  return;
}



// FUNCTION 1434b7730 FUN_1434b7730 body=360 status=ok
// SIG undefined FUN_1434b7730(void)

void FUN_1434b7730(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res18 [8];
  int local_48;
  int local_44;
  uint local_40 [2];
  undefined8 local_38;
  
  local_48 = 0;
  iVar3 = 0;
  if (param_3 != 0) {
    pcVar4 = (char *)FUN_143590b70(param_4,local_res18,&local_48);
    if (*pcVar4 == '\0') {
      return;
    }
    iVar3 = local_48;
    if (local_48 < 0) {
      iVar3 = local_48 + *(int *)(param_1 + 0x40);
    }
  }
  local_44 = *(int *)(param_1 + 0x40);
  puVar1 = (undefined8 *)(param_1 + 0x40);
  local_48 = iVar3;
  if (iVar3 < 0) {
    local_48 = 0;
  }
  if (param_3 < 2) {
    local_44 = local_44 - local_48;
  }
  else {
    pcVar4 = (char *)FUN_143590eb0(param_4 + 0x20,local_res18,&local_44);
    if (*pcVar4 == '\0') {
      return;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar5 = FUN_1435b5bc0(uVar2);
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = FUN_1434b64a0(lVar5,uVar2);
  }
  local_40[0] = 0;
  local_38 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_40,lVar6);
  FUN_143590140(param_2,local_40);
  if (9 < ((byte)local_40[0] & 0x1f)) {
    if ((local_40[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_40);
    }
    else {
      FUN_143592150();
    }
  }
  lVar5 = lVar6 + 0x40;
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  FUN_1434b4e20(puVar1,(longlong)local_48,local_44,lVar5);
  if (2 < param_3) {
    if ((int)*puVar1 < local_48) {
      local_48 = (int)*puVar1;
    }
    FUN_1434b4b50(puVar1,(longlong)local_48,param_3 - 2,param_4 + 0x40);
  }
  return;
}



// FUNCTION 1434b78a0 FUN_1434b78a0 body=3710 status=ok
// SIG undefined FUN_1434b78a0(void)

void FUN_1434b78a0(longlong param_1,uint *param_2,uint param_3,uint *param_4)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined **ppuVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  longlong *plVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  bool bVar17;
  undefined4 local_res18;
  uint local_148;
  undefined1 local_144 [12];
  ulonglong *local_138;
  ulonglong *local_130;
  ulonglong *local_128;
  uint local_120 [2];
  undefined8 local_118;
  longlong local_100;
  ulonglong *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_c8;
  ulonglong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint *local_78;
  undefined **local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined2 local_58;
  byte local_56;
  uint local_48 [2];
  undefined8 local_40;
  longlong local_38;
  
  uVar12 = 0;
  local_res18 = 0;
  local_48[0] = 0;
  local_40 = 0;
  local_148 = 0;
  if (param_3 != 0) {
    if (((*param_4 & 0x1f) < 0xc) && (2 < (*param_4 & 0x1f) - 5)) {
      pcVar8 = (char *)FUN_143590b70(param_4,&local_res18,&local_148);
      if (*pcVar8 == '\0') goto LAB_1434b86c2;
    }
    else {
      FUN_143590140(local_48,param_4);
    }
  }
  if ((1 < param_3) &&
     (pcVar8 = (char *)FUN_143590b70(param_4 + 8,&local_res18,&local_148), *pcVar8 == '\0'))
  goto LAB_1434b86c2;
  lVar2 = *(longlong *)(param_1 + 0x28);
  local_e8 = *(undefined **)(*(longlong *)(lVar2 + 0x98) + 0x48);
  local_138 = (ulonglong *)0x0;
  local_130 = (ulonglong *)0x0;
  local_128 = (ulonglong *)0x0;
  local_120[0] = 0;
  local_118 = 0;
  local_100 = 0;
  local_f8 = (ulonglong *)0x0;
  local_f0 = 0;
  local_e0 = 0;
  uVar6 = local_48[0] & 0x1f;
  local_d8 = local_e8;
  if (uVar6 == 0) {
LAB_1434b7da2:
    puVar15 = (ulonglong *)(param_1 + 0x40);
    uVar3 = *(ulonglong *)(param_1 + 0x80);
    uStack_90 = *(undefined8 *)(*(longlong *)(lVar2 + 0x98) + 0x48);
    local_a8 = 0;
    puStack_a0 = (ulonglong *)0x0;
    local_98 = (uint *)0x0;
    if ((local_148 & 0x10) == 0) {
      local_68 = *(undefined8 **)(lVar2 + 0x98);
      local_60 = &local_a8;
      local_70 = &PTR_FUN_145b183e0;
      uVar11 = uVar12;
      if (uVar3 != 0) {
        do {
          pcVar8 = (char *)(*(code *)local_70[1])
                                     (&local_70,&local_res18,uVar11,
                                      uVar11 * 0x20 + *(longlong *)(param_1 + 0x78));
          if (*pcVar8 == '\0') goto LAB_1434b830a;
          uVar11 = (ulonglong)((int)uVar11 + 1);
        } while (uVar11 < uVar3);
      }
      pcVar8 = (char *)FUN_1434b5790(puVar15,local_144,&local_70);
      if (*pcVar8 != '\0') {
        local_res18 = CONCAT31(local_res18._1_3_,(char)(local_148 >> 1)) & 0xffffff01;
        bVar9 = (byte)(local_148 >> 10);
        local_56 = bVar9 & 1;
        local_res18 = CONCAT22(local_res18._2_2_,CONCAT11((char)local_148,(undefined1)local_res18))
                      & 0xffff01ff;
        local_58 = (undefined2)local_res18;
        local_res18 = CONCAT13(local_res18._3_1_,CONCAT12(bVar9,(undefined2)local_res18)) &
                      0xff01ffff;
        FUN_1434e42e0(&local_a8,0,puStack_a0,&local_58);
        puVar16 = puStack_a0;
        if (((local_148 & 4) != 0) && (puVar13 = (ulonglong *)0x1, (ulonglong *)0x1 < puStack_a0)) {
          do {
            iVar7 = FUN_1434b3550(&local_res18,local_a8 + (ulonglong)((int)puVar13 - 1) * 0x18,
                                  local_a8 + (longlong)puVar13 * 0x18);
            if (iVar7 == 0) {
              FUN_1434f0650(param_2);
              goto LAB_1434b830a;
            }
            puVar13 = (ulonglong *)(ulonglong)((int)puVar13 + 1);
          } while (puVar13 < puVar16);
        }
        puVar13 = puVar16;
        puVar4 = uStack_80;
        if ((local_148 & 8) == 0) {
          for (; uStack_80 = puVar4, puVar13 != (ulonglong *)0x0;
              puVar13 = (ulonglong *)((longlong)puVar13 + -1)) {
            uStack_80 = *(ulonglong **)(uVar12 + 8 + local_a8);
            if (local_138 == local_f8) {
              uStack_80 = puVar4;
              FUN_1434ef7a0(&local_100);
            }
            else {
              local_88 = &local_128;
              local_128 = local_138;
              FUN_1434e4980(&local_e0,local_d8,&local_88);
            }
            uVar12 = uVar12 + 0x18;
            local_138 = (ulonglong *)((longlong)local_138 + 1);
            puVar4 = uStack_80;
          }
        }
        else {
          for (; puVar13 != (ulonglong *)0x0; puVar13 = (ulonglong *)((longlong)puVar13 + -1)) {
            local_c8._4_4_ = (undefined4)(local_c8 >> 0x20);
            local_c8 = CONCAT44(local_c8._4_4_,3);
            local_c0 = (ulonglong *)0x0;
            local_b8._4_4_ = (uint)((ulonglong)local_b8 >> 0x20);
            local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(uVar12 + 0x10 + local_a8));
            if (local_138 == local_f8) {
              FUN_1434f0300(&local_100,local_e8,(longlong)local_f8 + 1);
              puVar10 = (uint *)(local_100 + -0x20 + (longlong)local_f8 * 0x20);
              if (puVar10 != (uint *)0x0) {
                *puVar10 = (uint)local_c8;
                *(ulonglong **)(puVar10 + 2) = local_c0;
                puVar10[4] = (uint)local_b8;
                puVar10[5] = local_b8._4_4_;
                puVar10[6] = (uint)uStack_b0;
                puVar10[7] = uStack_b0._4_4_;
                if (9 < ((byte)local_c8 & 0x1f)) {
                  if (((uint)local_c8 >> 9 & 1) == 0) {
                    FUN_143592070(&local_c8);
                  }
                  else {
                    FUN_143592140();
                  }
                }
              }
            }
            else {
              local_88 = &local_128;
              uStack_80 = &local_c8;
              local_128 = local_138;
              FUN_1434e4980(&local_e0,local_d8,&local_88);
            }
            local_138 = (ulonglong *)((longlong)local_138 + 1);
            if (9 < ((byte)local_c8 & 0x1f)) {
              if (((uint)local_c8 >> 9 & 1) == 0) {
                FUN_1435920c0(&local_c8);
              }
              else {
                FUN_143592150();
              }
            }
            uVar12 = uVar12 + 0x18;
          }
        }
        puVar15 = (ulonglong *)*puVar15;
        puVar13 = local_138;
        if (puVar16 < puVar15) {
          puVar13 = puVar15;
          if (puVar15 == (ulonglong *)0x0) {
            FUN_1434f0300(&local_100,local_e8,0);
            FUN_1434e5ff0(&local_e0);
            local_130 = (ulonglong *)0x0;
            local_128 = (ulonglong *)0x0;
          }
          else if ((local_f8 < puVar15) || (local_f8 == (ulonglong *)0x0)) {
            if (puVar15 < local_130) {
              FUN_1434e5ff0(&local_e0);
              local_130 = (ulonglong *)0x0;
              local_128 = (ulonglong *)0x0;
            }
            else if (puVar15 < local_128) {
              FUN_1434b5a00(&local_138,puVar15,(longlong)local_128 + (1 - (longlong)puVar15),0);
            }
          }
          else {
            FUN_1434eff40(&local_100,puVar15);
            FUN_1434e5ff0(&local_e0);
            local_130 = (ulonglong *)0x0;
            local_128 = (ulonglong *)0x0;
          }
        }
        local_138 = puVar13;
        local_70 = &PTR_FUN_145af1858;
        plVar14 = (longlong *)(local_a8 + ((longlong)puStack_a0 + -1) * 0x18);
        uVar12 = local_a8;
        for (puVar15 = puStack_a0; local_a8 = uVar12, puVar15 != (ulonglong *)0x0;
            puVar15 = (ulonglong *)((longlong)puVar15 + -1)) {
          piVar1 = (int *)(*plVar14 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          plVar14 = plVar14 + -3;
          uVar12 = local_a8;
        }
        goto LAB_1434b854f;
      }
LAB_1434b830a:
      local_70 = &PTR_FUN_145af1858;
      FUN_1434e5e80(&local_a8);
    }
    else {
      local_70 = &PTR_FUN_145b183f0;
      local_68 = &local_a8;
      uVar11 = uVar12;
      if (uVar3 != 0) {
        do {
          pcVar8 = (char *)(*(code *)local_70[1])
                                     (&local_70,&local_res18,uVar11,
                                      uVar11 * 0x20 + *(longlong *)(param_1 + 0x78));
          if (*pcVar8 == '\0') goto LAB_1434b7f5f;
          uVar11 = (ulonglong)((int)uVar11 + 1);
        } while (uVar11 < uVar3);
      }
      pcVar8 = (char *)FUN_1434b5790(puVar15,local_144,&local_70);
      if (*pcVar8 == '\0') {
LAB_1434b7f5f:
        local_70 = &PTR_FUN_145af1858;
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_a8);
      }
      else {
        FUN_1434e3ef0(&local_a8,0,puStack_a0,
                      CONCAT31((uint3)(local_148 >> 9),(char)(local_148 >> 1)) & 0xffffff01);
        puVar16 = puStack_a0;
        if (((local_148 & 4) != 0) && (uVar6 = 1, (ulonglong *)0x1 < puStack_a0)) {
          puVar13 = (ulonglong *)0x1;
          do {
            if (*(double *)(local_a8 + (ulonglong)(uVar6 - 1) * 0x18) ==
                *(double *)(local_a8 + (longlong)puVar13 * 0x18)) {
              FUN_1434f0650(param_2);
              goto LAB_1434b7f5f;
            }
            uVar6 = uVar6 + 1;
            puVar13 = (ulonglong *)(ulonglong)uVar6;
          } while (puVar13 < puStack_a0);
        }
        puVar13 = puStack_a0;
        puVar4 = uStack_80;
        if ((local_148 & 8) == 0) {
          for (; uStack_80 = puVar4, puVar13 != (ulonglong *)0x0;
              puVar13 = (ulonglong *)((longlong)puVar13 + -1)) {
            uStack_80 = *(ulonglong **)(uVar12 + 8 + local_a8);
            if (local_138 == local_f8) {
              uStack_80 = puVar4;
              FUN_1434ef7a0(&local_100);
            }
            else {
              local_88 = &local_128;
              local_128 = local_138;
              FUN_1434e4980(&local_e0,local_d8,&local_88);
            }
            uVar12 = uVar12 + 0x18;
            local_138 = (ulonglong *)((longlong)local_138 + 1);
            puVar4 = uStack_80;
          }
        }
        else {
          for (; puVar13 != (ulonglong *)0x0; puVar13 = (ulonglong *)((longlong)puVar13 + -1)) {
            local_c8._4_4_ = (undefined4)(local_c8 >> 0x20);
            local_c8 = CONCAT44(local_c8._4_4_,3);
            local_c0 = (ulonglong *)0x0;
            local_b8._4_4_ = (uint)((ulonglong)local_b8 >> 0x20);
            local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(uVar12 + 0x10 + local_a8));
            if (local_138 == local_f8) {
              FUN_1434f0300(&local_100,local_e8,(longlong)local_f8 + 1);
              puVar10 = (uint *)(local_100 + -0x20 + (longlong)local_f8 * 0x20);
              if (puVar10 != (uint *)0x0) {
                *puVar10 = (uint)local_c8;
                *(ulonglong **)(puVar10 + 2) = local_c0;
                puVar10[4] = (uint)local_b8;
                puVar10[5] = local_b8._4_4_;
                puVar10[6] = (uint)uStack_b0;
                puVar10[7] = uStack_b0._4_4_;
                if (9 < ((byte)local_c8 & 0x1f)) {
                  if (((uint)local_c8 >> 9 & 1) == 0) {
                    FUN_143592070(&local_c8);
                  }
                  else {
                    FUN_143592140();
                  }
                }
              }
            }
            else {
              local_88 = &local_128;
              uStack_80 = &local_c8;
              local_128 = local_138;
              FUN_1434e4980(&local_e0,local_d8,&local_88);
            }
            local_138 = (ulonglong *)((longlong)local_138 + 1);
            if (9 < ((byte)local_c8 & 0x1f)) {
              if (((uint)local_c8 >> 9 & 1) == 0) {
                FUN_1435920c0(&local_c8);
              }
              else {
                FUN_143592150();
              }
            }
            uVar12 = uVar12 + 0x18;
          }
        }
        puVar15 = (ulonglong *)*puVar15;
        puVar13 = local_138;
        if (puVar16 < puVar15) {
          if (puVar15 == (ulonglong *)0x0) {
            FUN_1434f0300(&local_100,local_e8,0);
            FUN_1434e5ff0(&local_e0);
            local_130 = (ulonglong *)0x0;
            local_70 = &PTR_FUN_145af1858;
            local_128 = (ulonglong *)0x0;
            uVar12 = local_a8;
            local_138 = puVar15;
          }
          else if ((local_f8 < puVar15) || (local_f8 == (ulonglong *)0x0)) {
            if (local_130 <= puVar15) {
              puVar13 = puVar15;
              if (puVar15 < local_128) {
                FUN_1434b5a00(&local_138,puVar15,(longlong)local_128 + (1 - (longlong)puVar15),0);
              }
              goto LAB_1434b8138;
            }
            FUN_1434e5ff0(&local_e0);
            local_130 = (ulonglong *)0x0;
            local_70 = &PTR_FUN_145af1858;
            local_128 = (ulonglong *)0x0;
            uVar12 = local_a8;
            local_138 = puVar15;
          }
          else {
            FUN_1434eff40(&local_100,puVar15);
            FUN_1434e5ff0(&local_e0);
            local_130 = (ulonglong *)0x0;
            local_70 = &PTR_FUN_145af1858;
            local_128 = (ulonglong *)0x0;
            uVar12 = local_a8;
            local_138 = puVar15;
          }
        }
        else {
LAB_1434b8138:
          local_138 = puVar13;
          local_70 = &PTR_FUN_145af1858;
          uVar12 = local_a8;
        }
LAB_1434b854f:
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar12);
        if ((local_148 & 8) == 0) {
          if ((ulonglong **)(param_1 + 0x40) != &local_138) {
            *(ulonglong **)(param_1 + 0x40) = local_138;
            *(ulonglong **)(param_1 + 0x48) = local_130;
            *(ulonglong **)(param_1 + 0x50) = local_128;
            FUN_1434e83f0(param_1 + 0x98,local_d8,&local_e0);
            *(undefined **)(param_1 + 0xa0) = local_d8;
            FUN_1434e6710(param_1 + 0x78,&local_100);
          }
          FUN_1435903c0(param_2,param_1);
        }
        else {
          FUN_1435ca860(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_70);
          local_c8 = local_c8 & 0xffffffff00000000;
          local_c0 = (ulonglong *)0x0;
          Scaleform::GFx::AS3::Value::PickUnsafe(&local_c8,local_70);
          FUN_143590140(param_2,&local_c8);
          if (9 < ((byte)local_c8 & 0x1f)) {
            if (((uint)local_c8 >> 9 & 1) == 0) {
              FUN_1435920c0(&local_c8);
            }
            else {
              FUN_143592150();
            }
          }
          ppuVar5 = local_70;
          if ((ulonglong **)(local_70 + 8) != &local_138) {
            local_70[8] = (undefined *)local_138;
            local_70[9] = (undefined *)local_130;
            local_70[10] = (undefined *)local_128;
            FUN_1434e83f0(local_70 + 0x13,local_d8,&local_e0);
            ppuVar5[0x14] = local_d8;
            FUN_1434e6710(ppuVar5 + 0xf,&local_100);
          }
        }
      }
    }
  }
  else {
    if (uVar6 == 0xc) {
      bVar17 = local_38 == 0;
LAB_1434b79ca:
      if (bVar17) goto LAB_1434b7da2;
    }
    else if (uVar6 == 10) {
      bVar17 = local_38 == *(longlong *)(local_38 + 8) + 0x80;
      goto LAB_1434b79ca;
    }
    uVar3 = *(ulonglong *)(param_1 + 0x80);
    uStack_b0 = *(undefined8 *)(*(longlong *)(lVar2 + 0x98) + 0x48);
    local_68 = &local_c8;
    local_c8 = 0;
    local_c0 = (ulonglong *)0x0;
    local_b8 = 0;
    local_70 = &PTR_FUN_145b183d0;
    uVar11 = uVar12;
    if (uVar3 != 0) {
      do {
        pcVar8 = (char *)(*(code *)local_70[1])
                                   (&local_70,&local_res18,uVar11,
                                    uVar11 * 0x20 + *(longlong *)(param_1 + 0x78));
        if (*pcVar8 == '\0') goto LAB_1434b7be6;
        uVar11 = (ulonglong)((int)uVar11 + 1);
      } while (uVar11 < uVar3);
    }
    pcVar8 = (char *)FUN_1434b5790((ulonglong *)(param_1 + 0x40),local_144,&local_70);
    if (*pcVar8 != '\0') {
      uVar3 = CONCAT71(local_88._1_7_,(char)(local_148 >> 1));
      local_88 = (ulonglong **)(uVar3 & 0xffffffffffffff01);
      puStack_a0 = *(ulonglong **)(*(longlong *)(param_1 + 0x28) + 0x98);
      local_98 = local_48;
      local_a8 = CONCAT44(local_88._4_4_,(int)uVar3) & 0xffffffffffffff01;
      uStack_80 = puStack_a0;
      local_78 = local_98;
      FUN_1434e3b20(&local_c8,0,local_c0,&local_a8);
      puVar15 = local_c0;
      if (((local_148 & 4) != 0) && (uVar6 = 1, (ulonglong *)0x1 < local_c0)) {
        puVar16 = (ulonglong *)0x1;
        do {
          iVar7 = FUN_1434b3680(&local_88,*(undefined8 *)(local_c8 + (ulonglong)(uVar6 - 1) * 0x10),
                                *(undefined8 *)(local_c8 + (longlong)puVar16 * 0x10));
          if (iVar7 == 0) {
            if (9 < ((byte)*param_2 & 0x1f)) {
              if ((*param_2 >> 9 & 1) == 0) {
                FUN_1435920c0(param_2);
              }
              else {
                FUN_143592150();
              }
            }
            *param_2 = *param_2 & 0xffffffec;
            *param_2 = *param_2 | 0xc;
            local_88 = (ulonglong **)0x0;
            param_2[4] = 0;
            param_2[5] = 0;
            param_2[6] = (uint)uStack_80;
            param_2[7] = uStack_80._4_4_;
            goto LAB_1434b7be6;
          }
          uVar6 = uVar6 + 1;
          puVar16 = (ulonglong *)(ulonglong)uVar6;
        } while (puVar16 < puVar15);
      }
      puVar16 = puVar15;
      puVar13 = uStack_80;
      if ((local_148 & 8) == 0) {
        for (; uStack_80 = puVar13, puVar16 != (ulonglong *)0x0;
            puVar16 = (ulonglong *)((longlong)puVar16 + -1)) {
          uStack_80 = *(ulonglong **)(local_c8 + uVar12);
          if (local_138 == local_f8) {
            uStack_80 = puVar13;
            FUN_1434ef7a0(&local_100);
          }
          else {
            local_88 = &local_128;
            local_128 = local_138;
            FUN_1434e4980(&local_e0,local_d8,&local_88);
          }
          uVar12 = uVar12 + 0x10;
          local_138 = (ulonglong *)((longlong)local_138 + 1);
          puVar13 = uStack_80;
        }
      }
      else {
        for (; puVar16 != (ulonglong *)0x0; puVar16 = (ulonglong *)((longlong)puVar16 + -1)) {
          uVar3 = local_a8 >> 0x20;
          local_a8 = CONCAT44((int)uVar3,3);
          puStack_a0 = (ulonglong *)0x0;
          local_98._4_4_ = (uint)((ulonglong)local_98 >> 0x20);
          local_98 = (uint *)CONCAT44(local_98._4_4_,*(undefined4 *)(local_c8 + 8 + uVar12));
          if (local_138 == local_f8) {
            FUN_1434f0300(&local_100,local_e8,(longlong)local_f8 + 1);
            puVar10 = (uint *)(local_100 + -0x20 + (longlong)local_f8 * 0x20);
            if (puVar10 != (uint *)0x0) {
              *puVar10 = (uint)local_a8;
              *(ulonglong **)(puVar10 + 2) = puStack_a0;
              puVar10[4] = (uint)local_98;
              puVar10[5] = local_98._4_4_;
              puVar10[6] = (uint)uStack_90;
              puVar10[7] = uStack_90._4_4_;
              if (9 < ((byte)local_a8 & 0x1f)) {
                if (((uint)local_a8 >> 9 & 1) == 0) {
                  FUN_143592070(&local_a8);
                }
                else {
                  FUN_143592140();
                }
              }
            }
          }
          else {
            local_88 = &local_128;
            uStack_80 = &local_a8;
            local_128 = local_138;
            FUN_1434e4980(&local_e0,local_d8,&local_88);
          }
          local_138 = (ulonglong *)((longlong)local_138 + 1);
          if (9 < ((byte)local_a8 & 0x1f)) {
            if (((uint)local_a8 >> 9 & 1) == 0) {
              FUN_1435920c0(&local_a8);
            }
            else {
              FUN_143592150();
            }
          }
          uVar12 = uVar12 + 0x10;
        }
      }
      puVar16 = *(ulonglong **)(param_1 + 0x40);
      puVar13 = local_138;
      if (puVar15 < puVar16) {
        puVar13 = puVar16;
        if (puVar16 == (ulonglong *)0x0) {
          FUN_1434f0300(&local_100,local_e8,0);
          FUN_1434e5ff0(&local_e0);
          local_130 = (ulonglong *)0x0;
          local_128 = (ulonglong *)0x0;
        }
        else if ((local_f8 < puVar16) || (local_f8 == (ulonglong *)0x0)) {
          if (puVar16 < local_130) {
            FUN_1434e5ff0(&local_e0);
            local_130 = (ulonglong *)0x0;
            local_128 = (ulonglong *)0x0;
          }
          else if (puVar16 < local_128) {
            FUN_1434b5a00(&local_138,puVar16,(longlong)local_128 + (1 - (longlong)puVar16),0);
          }
        }
        else {
          FUN_1434eff40(&local_100,puVar16);
          FUN_1434e5ff0(&local_e0);
          local_130 = (ulonglong *)0x0;
          local_128 = (ulonglong *)0x0;
        }
      }
      local_138 = puVar13;
      local_70 = &PTR_FUN_145af1858;
      uVar12 = local_c8;
      goto LAB_1434b854f;
    }
LAB_1434b7be6:
    local_70 = &PTR_FUN_145af1858;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_c8);
  }
  FUN_1434e5ff0(&local_e0);
  puVar10 = (uint *)(local_100 + -0x20 + (longlong)local_f8 * 0x20);
  for (puVar15 = local_f8; puVar15 != (ulonglong *)0x0;
      puVar15 = (ulonglong *)((longlong)puVar15 - 1)) {
    if (9 < ((byte)*puVar10 & 0x1f)) {
      if ((*puVar10 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar10);
      }
      else {
        FUN_143592150();
      }
    }
    puVar10 = puVar10 + -8;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_100);
  if (9 < ((byte)local_120[0] & 0x1f)) {
    if ((local_120[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_120);
    }
    else {
      FUN_143592150();
    }
  }
LAB_1434b86c2:
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_48);
  }
  return;
}



// FUNCTION 1434b8730 FUN_1434b8730 body=3143 status=ok
// SIG undefined FUN_1434b8730(void)

void FUN_1434b8730(ulonglong param_1,ulonglong *param_2,longlong param_3,uint *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong **ppuVar11;
  ulonglong **ppuVar12;
  uint *puVar13;
  ulonglong **ppuVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  bool bVar19;
  ulonglong *puVar20;
  double dVar21;
  ulonglong local_res8;
  ulonglong *local_res10;
  undefined1 local_198 [4];
  uint local_194;
  longlong local_190;
  ulonglong local_188;
  ulonglong local_180;
  ulonglong uStack_178;
  undefined1 local_170 [8];
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158;
  uint local_150 [2];
  undefined8 local_148;
  longlong local_130;
  ulonglong local_128;
  undefined8 local_120;
  ulonglong local_118;
  undefined8 local_110;
  ulonglong local_108;
  longlong local_f8 [2];
  ulonglong *local_e8;
  ulonglong **ppuStack_e0;
  uint **local_d8;
  ulonglong *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined **local_a8;
  longlong *local_a0;
  undefined8 local_98;
  ulonglong **ppuStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint *local_78;
  ulonglong **local_70;
  undefined8 local_68;
  ulonglong local_60;
  ulonglong *local_58;
  
  ppuVar14 = (ulonglong **)0x0;
  local_194 = 0;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar15 = *(ulonglong *)(lVar5 + 0x48);
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x218);
  local_f8[0] = lVar5 + 0x48;
  piVar1 = (int *)(lVar5 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_c8 = (ulonglong *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  local_78 = (uint *)0x0;
  local_70 = (ulonglong **)0x0;
  local_68 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_b0 = uVar15;
  local_60 = uVar15;
  lVar5 = FUN_1435caba0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),param_3);
  if ((*(int *)(lVar5 + 0x90) == 7) && ((~(*(byte *)(lVar5 + 0x88) >> 5) & 1) != 0)) {
    lVar5 = *(longlong *)(param_3 + 0x10);
    ppuVar11 = ppuVar14;
    if (*(longlong *)(lVar5 + 0x40) != 0) {
      do {
        uVar6 = FUN_1434b4f50(lVar5 + 0x40,ppuVar11);
        pcVar7 = (char *)FUN_1435911f0(uVar6,local_198,local_f8);
        if (*pcVar7 == '\0') goto LAB_1434b92c6;
        Scaleform::GFx::AS3::Value::Value(&local_190,local_f8);
        FUN_1434f0300(&local_c8,local_b0,local_c0 + 1);
        puVar17 = local_c8 + local_c0 * 4 + -4;
        if (puVar17 == (ulonglong *)0x0) {
LAB_1434b889b:
        }
        else {
          *(uint *)puVar17 = (uint)local_190;
          puVar17[1] = local_188;
          puVar17[2] = local_180;
          puVar17[3] = uStack_178;
          if (9 < ((byte)local_190 & 0x1f)) {
            if (((uint)local_190 >> 9 & 1) == 0) {
              FUN_143592070(&local_190);
            }
            else {
              FUN_143592140();
            }
            goto LAB_1434b889b;
          }
        }
        if (9 < ((byte)(uint)local_190 & 0x1f)) {
          if (((uint)local_190 >> 9 & 1) == 0) {
            FUN_1435920c0(&local_190);
          }
          else {
            FUN_143592150();
          }
        }
        ppuVar11 = (ulonglong **)((longlong)ppuVar11 + 1);
      } while (ppuVar11 < *(ulonglong ***)(lVar5 + 0x40));
    }
    if (local_c0 == 0) goto LAB_1434b92c6;
  }
  else {
    pcVar7 = (char *)FUN_1435911f0(param_3,local_198,local_f8);
    if (*pcVar7 == '\0') goto LAB_1434b92c6;
    Scaleform::GFx::AS3::Value::Value(&local_190,local_f8);
    FUN_1434f0300(&local_c8,local_b0,local_c0 + 1);
    puVar17 = local_c8 + local_c0 * 4 + -4;
    if (puVar17 == (ulonglong *)0x0) {
LAB_1434b896c:
    }
    else {
      *(uint *)puVar17 = (uint)local_190;
      puVar17[1] = local_188;
      puVar17[2] = local_180;
      puVar17[3] = uStack_178;
      if (9 < ((byte)local_190 & 0x1f)) {
        if (((uint)local_190 >> 9 & 1) == 0) {
          FUN_143592070(&local_190);
        }
        else {
          FUN_143592140();
        }
        goto LAB_1434b896c;
      }
    }
    if (9 < ((byte)(uint)local_190 & 0x1f)) {
      if (((uint)local_190 >> 9 & 1) == 0) {
        FUN_1435920c0(&local_190);
      }
      else {
        FUN_143592150();
      }
    }
  }
  FUN_1434f0030(&local_78,local_c0);
  ppuVar11 = ppuVar14;
  if (local_70 != (ulonglong **)0x0) {
    do {
      local_78[(longlong)ppuVar11] = 0;
      ppuVar11 = (ulonglong **)((longlong)ppuVar11 + 1);
    } while (ppuVar11 < local_70);
  }
  uVar4 = *param_4 & 0x1f;
  if (uVar4 == 0) goto LAB_1434b8ac4;
  if (uVar4 == 0xc) {
    bVar19 = *(longlong *)(param_4 + 4) == 0;
LAB_1434b89eb:
    if (bVar19) goto LAB_1434b8ac4;
  }
  else if (uVar4 == 10) {
    bVar19 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
    goto LAB_1434b89eb;
  }
  lVar5 = FUN_1435caba0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),param_4);
  if ((*(int *)(lVar5 + 0x90) == 7) && ((~(*(byte *)(lVar5 + 0x88) >> 5) & 1) != 0)) {
    lVar5 = *(longlong *)(param_4 + 4);
    if ((*(longlong *)(lVar5 + 0x40) == local_c0) &&
       (ppuVar11 = ppuVar14, *(longlong *)(lVar5 + 0x40) != 0)) {
      do {
        if (local_70 <= ppuVar11) break;
        uVar6 = FUN_1434b4f50(lVar5 + 0x40,ppuVar11);
        pcVar7 = (char *)FUN_143590eb0(uVar6,local_198,&local_194);
        if (*pcVar7 == '\0') goto LAB_1434b92c6;
        local_78[(longlong)ppuVar11] = local_194;
        ppuVar11 = (ulonglong **)((longlong)ppuVar11 + 1);
      } while (ppuVar11 < *(ulonglong ***)(lVar5 + 0x40));
    }
  }
  else {
    pcVar7 = (char *)FUN_143590eb0(param_4,local_198,&local_194);
    if (*pcVar7 == '\0') {
LAB_1434b92c6:
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_78);
      puVar17 = local_c8 + local_c0 * 4 + -4;
      for (lVar5 = local_c0; lVar5 != 0; lVar5 = lVar5 + -1) {
        if (9 < ((byte)(uint)*puVar17 & 0x1f)) {
          if (((uint)*puVar17 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar17);
          }
          else {
            FUN_143592150();
          }
        }
        puVar17 = puVar17 + -4;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_c8);
      piVar1 = (int *)(local_f8[0] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      return;
    }
    ppuVar11 = ppuVar14;
    if (local_70 != (ulonglong **)0x0) {
      do {
        local_78[(longlong)ppuVar11] = local_194;
        ppuVar11 = (ulonglong **)((longlong)ppuVar11 + 1);
      } while (ppuVar11 < local_70);
    }
  }
LAB_1434b8ac4:
  uVar18 = local_res8;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150[0] = 0;
  local_148 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  puVar17 = (ulonglong *)(local_res8 + 0x40);
  ppuVar11 = *(ulonglong ***)(local_res8 + 0x80);
  uStack_178 = *(ulonglong *)(*(longlong *)(*(longlong *)(local_res8 + 0x28) + 0x98) + 0x48);
  local_a8 = &PTR_FUN_145b183d0;
  local_a0 = &local_190;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  ppuVar12 = ppuVar14;
  local_118 = uVar15;
  local_108 = uVar15;
  local_58 = puVar17;
  if (ppuVar11 != (ulonglong **)0x0) {
    do {
      pcVar7 = (char *)(*(code *)local_a8[1])
                                 (&local_a8,local_198,ppuVar12,
                                  (longlong)ppuVar12 * 0x20 + *(longlong *)(uVar18 + 0x78));
      if (*pcVar7 == '\0') goto LAB_1434b8de2;
      ppuVar12 = (ulonglong **)(ulonglong)((int)ppuVar12 + 1);
    } while (ppuVar12 < ppuVar11);
  }
  lVar5 = *(longlong *)(uVar18 + 0x98);
  local_e8 = (ulonglong *)(uVar18 + 0x98);
  if (lVar5 == 0) {
    local_e8 = (ulonglong *)0x0;
    ppuVar11 = (ulonglong **)0x0;
    ppuStack_e0 = ppuVar11;
    puVar20 = local_e8;
  }
  else {
    plVar9 = (longlong *)(lVar5 + 0x10);
    ppuVar11 = ppuVar14;
    do {
      ppuStack_e0 = ppuVar11;
      puVar20 = local_e8;
      if (*plVar9 != -2) break;
      ppuVar11 = (ulonglong **)((longlong)ppuVar11 + 1);
      plVar9 = plVar9 + 7;
      ppuStack_e0 = ppuVar11;
    } while (ppuVar11 <= *(ulonglong ***)(lVar5 + 8));
  }
  do {
    if (((puVar20 == (ulonglong *)0x0) || (uVar15 = *puVar20, uVar15 == 0)) ||
       (*(longlong *)(uVar15 + 8) < (longlong)ppuVar11)) break;
    pcVar7 = (char *)(*(code *)local_a8[1])
                               (&local_a8,local_170,
                                *(undefined4 *)((longlong)ppuVar11 * 0x38 + 0x20 + uVar15),
                                uVar15 + 0x28 + (longlong)ppuVar11 * 0x38);
    if (*pcVar7 == '\0') goto LAB_1434b8de2;
    ppuVar12 = *(ulonglong ***)(*puVar20 + 8);
    if (((longlong)ppuVar11 <= (longlong)ppuVar12) &&
       (ppuVar11 = (ulonglong **)((longlong)ppuVar11 + 1), ppuVar11 <= ppuVar12)) {
      plVar9 = (longlong *)(*puVar20 + 0x10 + (longlong)ppuVar11 * 0x38);
      do {
        if (*plVar9 != -2) break;
        ppuVar11 = (ulonglong **)((longlong)ppuVar11 + 1);
        plVar9 = plVar9 + 7;
      } while (ppuVar11 <= ppuVar12);
    }
  } while( true );
  local_e8 = *(ulonglong **)(*(longlong *)(uVar18 + 0x28) + 0x98);
  ppuStack_e0 = &local_c8;
  local_d8 = &local_78;
  local_98 = local_e8;
  ppuStack_90 = ppuStack_e0;
  local_88 = local_d8;
  FUN_1434e3780(&local_190,0,local_188,&local_98);
  uVar15 = local_188;
  uVar4 = *local_78;
  if (((uVar4 & 4) != 0) && (uVar10 = 1, 1 < local_188)) {
    uVar16 = 1;
LAB_1434b8cc0:
    dVar21 = (double)FUN_1434b3890(&local_e8,
                                   *(undefined8 *)(local_190 + (ulonglong)(uVar10 - 1) * 0x10),
                                   *(undefined8 *)(local_190 + uVar16 * 0x10));
    puVar20 = local_res10;
    if (dVar21 != 0.0) goto LAB_1434b8ceb;
    uVar15 = *local_res10;
    if (uVar15 != 0) {
      if ((uVar15 & 1) == 0) {
        if ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *local_res10 = uVar15 - 1;
      }
      *puVar20 = 0;
    }
LAB_1434b8de2:
    local_a8 = &PTR_FUN_145af1858;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_190);
    FUN_1434e5ff0(&local_110);
    puVar13 = (uint *)(local_130 + -0x20 + local_128 * 0x20);
    for (uVar15 = local_128; uVar15 != 0; uVar15 = uVar15 - 1) {
      if (9 < ((byte)*puVar13 & 0x1f)) {
        if ((*puVar13 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar13);
        }
        else {
          FUN_143592150();
        }
      }
      puVar13 = puVar13 + -8;
    }
    goto LAB_1434b9283;
  }
LAB_1434b8cf5:
  local_194 = uVar4 & 8;
  uVar16 = uVar15;
  if (local_194 == 0) {
    for (; uVar16 != 0; uVar16 = uVar16 - 1) {
      ppuVar11 = *(ulonglong ***)((longlong)ppuVar14 + local_190);
      if (local_168 == local_128) {
        FUN_1434f0300(&local_130,local_118,local_128 + 1);
        puVar13 = (uint *)(local_130 + -0x20 + local_128 * 0x20);
        if (puVar13 != (uint *)0x0) {
          *puVar13 = *(uint *)ppuVar11;
          *(ulonglong **)(puVar13 + 2) = ppuVar11[1];
          puVar17 = ppuVar11[3];
          *(ulonglong **)(puVar13 + 4) = ppuVar11[2];
          *(ulonglong **)(puVar13 + 6) = puVar17;
          if (9 < ((byte)*(uint *)ppuVar11 & 0x1f)) {
            if ((*(uint *)ppuVar11 >> 9 & 1) == 0) {
              FUN_143592070(ppuVar11);
            }
            else {
              FUN_143592140();
            }
          }
        }
      }
      else {
        local_e8 = &local_158;
        local_158 = local_168;
        ppuStack_e0 = ppuVar11;
        FUN_1434e4980(&local_110,local_108,&local_e8);
      }
      ppuVar14 = ppuVar14 + 2;
      local_168 = local_168 + 1;
      puVar17 = local_58;
      uVar18 = local_res8;
    }
  }
  else {
    for (; uVar16 != 0; uVar16 = uVar16 - 1) {
      uVar18 = (ulonglong)local_98 >> 0x20;
      local_98 = (ulonglong *)CONCAT44((int)uVar18,3);
      ppuStack_90 = (ulonglong **)0x0;
      uVar18 = (ulonglong)local_88 >> 0x20;
      local_88 = (uint **)CONCAT44((int)uVar18,*(undefined4 *)((longlong)ppuVar14 + local_190 + 8));
      if (local_168 == local_128) {
        FUN_1434f0300(&local_130,local_118,local_128 + 1);
        puVar13 = (uint *)(local_130 + -0x20 + local_128 * 0x20);
        if (puVar13 != (uint *)0x0) {
          *puVar13 = (uint)local_98;
          *(ulonglong ***)(puVar13 + 2) = ppuStack_90;
          *(uint ***)(puVar13 + 4) = local_88;
          *(undefined8 *)(puVar13 + 6) = uStack_80;
          if (9 < ((byte)local_98 & 0x1f)) {
            if (((uint)local_98 >> 9 & 1) == 0) {
              FUN_143592070(&local_98);
            }
            else {
              FUN_143592140();
            }
          }
        }
      }
      else {
        local_e8 = &local_158;
        ppuStack_e0 = (ulonglong **)&local_98;
        local_158 = local_168;
        FUN_1434e4980(&local_110,local_108,&local_e8);
      }
      local_168 = local_168 + 1;
      if (9 < ((byte)local_98 & 0x1f)) {
        if (((uint)local_98 >> 9 & 1) == 0) {
          FUN_1435920c0(&local_98);
        }
        else {
          FUN_143592150();
        }
      }
      ppuVar14 = ppuVar14 + 2;
      uVar18 = local_res8;
    }
  }
  uVar2 = local_128;
  uVar4 = local_194;
  uVar16 = *puVar17;
  uVar3 = local_168;
  if (uVar15 < uVar16) {
    uVar3 = uVar16;
    if (uVar16 == 0) {
      FUN_1434f0300(&local_130,local_118,0);
      FUN_1434e5ff0(&local_110);
      local_160 = 0;
      local_158 = 0;
    }
    else if ((local_128 < uVar16) || (local_128 == 0)) {
      if (uVar16 < local_160) {
        FUN_1434e5ff0(&local_110);
        local_160 = 0;
        local_158 = 0;
      }
      else if (uVar16 < local_158) {
        FUN_1434b5a00(&local_168,uVar16,(local_158 - uVar16) + 1,0);
      }
    }
    else {
      FUN_1434f0300(&local_130,local_118,uVar16);
      if (uVar2 < uVar16) {
        puVar8 = (undefined4 *)(uVar2 * 0x20 + local_130);
        for (lVar5 = uVar16 - uVar2; lVar5 != 0; lVar5 = lVar5 + -1) {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = 0;
            *(undefined8 *)(puVar8 + 2) = 0;
          }
          puVar8 = puVar8 + 8;
        }
      }
      FUN_1434e5ff0(&local_110);
      local_160 = 0;
      local_158 = 0;
    }
  }
  local_168 = uVar3;
  if (uVar4 == 0) {
    if (puVar17 != &local_168) {
      puVar17[1] = local_160;
      *puVar17 = local_168;
      puVar17[2] = local_158;
      FUN_1434e83f0(puVar17 + 0xb,local_108,&local_110);
      puVar17[0xc] = local_108;
      FUN_1434e6710(puVar17 + 7,&local_130);
    }
    puVar17 = local_res10;
    if (uVar18 != *local_res10) {
      *(uint *)(uVar18 + 8) = *(int *)(uVar18 + 8) + 1U & 0x8fffffff;
      uVar15 = *local_res10;
      if (uVar15 != 0) {
        if ((uVar15 & 1) == 0) {
          if ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *local_res10 = uVar15 - 1;
        }
      }
      *puVar17 = uVar18;
    }
  }
  else {
    FUN_1435ca860(*(undefined8 *)(*(longlong *)(uVar18 + 0x28) + 0x98),&local_res8);
    puVar17 = local_res10;
    uVar18 = local_res8;
    uVar15 = *local_res10;
    if (local_res8 != uVar15) {
      if (uVar15 != 0) {
        if ((uVar15 & 1) == 0) {
          if ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *local_res10 = uVar15 - 1;
        }
      }
      *puVar17 = uVar18;
    }
    uVar15 = local_res8;
    if ((ulonglong *)(local_res8 + 0x40) != &local_168) {
      *(ulonglong *)(local_res8 + 0x40) = local_168;
      *(ulonglong *)(local_res8 + 0x48) = local_160;
      *(ulonglong *)(local_res8 + 0x50) = local_158;
      FUN_1434e83f0(local_res8 + 0x98,local_108,&local_110);
      *(ulonglong *)(uVar15 + 0xa0) = local_108;
      FUN_1434e6710(uVar15 + 0x78,&local_130);
    }
  }
  local_a8 = &PTR_FUN_145af1858;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_190);
  FUN_1434e5ff0(&local_110);
  puVar13 = (uint *)(local_130 + -0x20 + local_128 * 0x20);
  for (uVar15 = local_128; uVar15 != 0; uVar15 = uVar15 - 1) {
    if (9 < ((byte)*puVar13 & 0x1f)) {
      if ((*puVar13 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar13);
      }
      else {
        FUN_143592150();
      }
    }
    puVar13 = puVar13 + -8;
  }
LAB_1434b9283:
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_130);
  if (9 < ((byte)local_150[0] & 0x1f)) {
    if ((local_150[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_150);
    }
    else {
      FUN_143592150();
    }
  }
  goto LAB_1434b92c6;
LAB_1434b8ceb:
  uVar10 = uVar10 + 1;
  uVar16 = (ulonglong)uVar10;
  if (uVar15 <= uVar16) goto LAB_1434b8cf5;
  goto LAB_1434b8cc0;
}



// FUNCTION 1434b9380 FUN_1434b9380 body=228 status=ok
// SIG undefined FUN_1434b9380(void)

void FUN_1434b9380(longlong param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong local_res8;
  
  if (param_4 < 0) {
    param_4 = param_4 + *(int *)(param_1 + 0x40);
  }
  uVar4 = (ulonglong)param_4;
  if (uVar4 < *(ulonglong *)(param_1 + 0x40)) {
    lVar5 = uVar4 << 5;
    do {
      local_res8 = uVar4;
      if (uVar4 < *(ulonglong *)(param_1 + 0x80)) {
        lVar2 = *(longlong *)(param_1 + 0x78) + lVar5;
      }
      else {
        if ((*(ulonglong *)(param_1 + 0x48) <= uVar4) && (uVar4 <= *(ulonglong *)(param_1 + 0x50)))
        {
          lVar2 = FUN_1434e59b0(param_1 + 0x98,&local_res8);
          lVar3 = 0;
          if (-1 < lVar2) {
            lVar3 = *(longlong *)(param_1 + 0x98) + 0x20 + lVar2 * 0x38;
          }
          lVar2 = lVar3 + 8;
          if (lVar3 == 0) {
            lVar2 = 0;
          }
          if (lVar2 != 0) goto LAB_1434b9426;
        }
        lVar2 = param_1 + 0x58;
      }
LAB_1434b9426:
      cVar1 = FUN_1435927d0(lVar2,param_3);
      if (cVar1 != '\0') {
        *param_2 = (int)uVar4;
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar4 < *(ulonglong *)(param_1 + 0x40));
  }
  *param_2 = 0xffffffff;
  return;
}



// FUNCTION 1434b9470 FUN_1434b9470 body=239 status=ok
// SIG undefined FUN_1434b9470(void)

void FUN_1434b9470(longlong param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong local_res8;
  
  if (param_4 < 0) {
    param_4 = param_4 + *(int *)(param_1 + 0x40);
  }
  uVar4 = *(longlong *)(param_1 + 0x40) - 1;
  if ((longlong)param_4 < (longlong)uVar4) {
    uVar4 = (longlong)param_4;
  }
  if (-1 < (longlong)uVar4) {
    lVar5 = uVar4 << 5;
    do {
      local_res8 = uVar4;
      if (uVar4 < *(ulonglong *)(param_1 + 0x80)) {
        lVar2 = *(longlong *)(param_1 + 0x78) + lVar5;
      }
      else {
        if ((*(ulonglong *)(param_1 + 0x48) <= uVar4) && (uVar4 <= *(ulonglong *)(param_1 + 0x50)))
        {
          lVar2 = FUN_1434e59b0(param_1 + 0x98,&local_res8);
          lVar3 = 0;
          if (-1 < lVar2) {
            lVar3 = *(longlong *)(param_1 + 0x98) + 0x20 + lVar2 * 0x38;
          }
          lVar2 = lVar3 + 8;
          if (lVar3 == 0) {
            lVar2 = 0;
          }
          if (lVar2 != 0) goto LAB_1434b9524;
        }
        lVar2 = param_1 + 0x58;
      }
LAB_1434b9524:
      cVar1 = FUN_1435927d0(lVar2,param_3);
      if (cVar1 != '\0') {
        *param_2 = (int)uVar4;
        return;
      }
      lVar5 = lVar5 + -0x20;
      uVar4 = uVar4 - 1;
    } while (-1 < (longlong)uVar4);
  }
  *param_2 = 0xffffffff;
  return;
}



// FUNCTION 1434b9570 FUN_1434b9570 body=920 status=ok
// SIG undefined FUN_1434b9570(void)

void FUN_1434b9570(longlong param_1,undefined1 *param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined4 local_res18 [4];
  uint local_d8 [2];
  undefined8 local_d0;
  char local_c8;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98 [2];
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_58 [8];
  
  uVar3 = *param_3 & 0x1f;
  if (uVar3 == 0) goto LAB_1434b98f7;
  if (uVar3 == 0xc) {
    bVar9 = *(longlong *)(param_3 + 4) == 0;
LAB_1434b95bc:
    if (bVar9) {
LAB_1434b98f7:
      *param_2 = 0;
      return;
    }
  }
  else if (uVar3 == 10) {
    bVar9 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
    goto LAB_1434b95bc;
  }
  uVar8 = 0;
  uVar3 = *param_4 & 0x1f;
  if (uVar3 == 0) {
LAB_1434b9613:
    bVar9 = true;
  }
  else {
    if (uVar3 == 0xc) {
      bVar9 = *(longlong *)(param_4 + 4) == 0;
LAB_1434b9608:
      if (bVar9) goto LAB_1434b9613;
    }
    else if (uVar3 == 10) {
      bVar9 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_1434b9608;
    }
    bVar9 = false;
  }
  if (bVar9) {
    param_4 = param_3;
  }
  local_b0 = *(undefined8 *)(param_4 + 2);
  local_b8[0] = *param_4;
  local_a8 = param_4[4];
  uStack_a4 = param_4[5];
  uStack_a0 = param_4[6];
  uStack_9c = param_4[7];
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_143592070(param_4);
    }
    else {
      FUN_143592140();
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar7 = 3;
    do {
      puVar4 = (uint *)FUN_1434b4f50(param_1 + 0x40,uVar8);
      local_98[0] = *puVar4;
      local_90 = *(undefined8 *)(puVar4 + 2);
      local_88 = puVar4[4];
      uStack_84 = puVar4[5];
      uStack_80 = puVar4[6];
      uStack_7c = puVar4[7];
      if (9 < ((byte)*puVar4 & 0x1f)) {
        if ((*puVar4 >> 9 & 1) == 0) {
          FUN_143592070(puVar4);
        }
        else {
          FUN_143592140();
        }
      }
      local_78 = 3;
      local_68 = (undefined4)uVar8;
      local_70 = 0;
      FUN_143590110(local_58,param_1);
      cVar1 = FUN_1434ef3f0(param_3);
      if (cVar1 == '\0') {
        puVar5 = &stack0xffffffffffffffc8;
        do {
          puVar4 = (uint *)(puVar5 + -0x20);
          puVar5 = puVar5 + -0x20;
          lVar7 = lVar7 + -1;
          if (9 < ((byte)*puVar4 & 0x1f)) {
            if ((*puVar4 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar5);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar7 != 0);
        break;
      }
      local_d8[0] = 0;
      local_res18[0] = 3;
      local_d0 = 0;
      FUN_1435ce880(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),param_3,local_b8,local_d8,
                    local_res18,local_98,0,1);
      bVar2 = (byte)local_d8[0];
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0xb8) != '\0') {
        if (9 < (bVar2 & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar5 = &stack0xffffffffffffffc8;
        do {
          puVar4 = (uint *)(puVar5 + -0x20);
          puVar5 = puVar5 + -0x20;
          lVar7 = lVar7 + -1;
          if (9 < ((byte)*puVar4 & 0x1f)) {
            if ((*puVar4 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar5);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar7 != 0);
        break;
      }
      if (((bVar2 & 0x1f) != 1) || (local_c8 == '\0')) {
        if (9 < (bVar2 & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar5 = &stack0xffffffffffffffc8;
        do {
          puVar4 = (uint *)(puVar5 + -0x20);
          puVar5 = puVar5 + -0x20;
          lVar7 = lVar7 + -1;
          if (9 < ((byte)*puVar4 & 0x1f)) {
            if ((*puVar4 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar5);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar7 != 0);
        break;
      }
      lVar6 = 3;
      puVar5 = &stack0xffffffffffffffc8;
      do {
        puVar4 = (uint *)(puVar5 + -0x20);
        puVar5 = puVar5 + -0x20;
        lVar6 = lVar6 + -1;
        if (9 < ((byte)*puVar4 & 0x1f)) {
          if ((*puVar4 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar5);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar6 != 0);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ulonglong *)(param_1 + 0x40));
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
      *param_2 = 0;
      return;
    }
    FUN_143592150();
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1434b9910 FUN_1434b9910 body=1025 status=ok
// SIG undefined FUN_1434b9910(void)

void FUN_1434b9910(longlong param_1,ulonglong *param_2,uint *param_3,uint *param_4)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  bool bVar10;
  undefined4 local_res8 [2];
  ulonglong local_res10;
  uint local_d8 [2];
  undefined8 local_d0;
  char local_c8;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98 [2];
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_58 [8];
  
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = FUN_1435b5bc0(uVar7);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1434b64a0(lVar4,uVar7);
  }
  uVar1 = *param_2;
  local_res10 = uVar5;
  if (uVar5 != uVar1) {
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar1 - 1;
      }
    }
    *param_2 = uVar5;
  }
  uVar3 = *param_3 & 0x1f;
  if (uVar3 == 0) {
    return;
  }
  if (uVar3 == 0xc) {
    bVar10 = *(longlong *)(param_3 + 4) == 0;
LAB_1434b99b9:
    if (bVar10) {
      return;
    }
  }
  else if (uVar3 == 10) {
    bVar10 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
    goto LAB_1434b99b9;
  }
  uVar3 = *param_4 & 0x1f;
  if (uVar3 == 0) {
LAB_1434b9a08:
    bVar10 = true;
  }
  else {
    if (uVar3 == 0xc) {
      bVar10 = *(longlong *)(param_4 + 4) == 0;
LAB_1434b99fb:
      if (bVar10) goto LAB_1434b9a08;
    }
    else if (uVar3 == 10) {
      bVar10 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_1434b99fb;
    }
    bVar10 = false;
  }
  uVar5 = 0;
  if (bVar10) {
    param_4 = param_3;
  }
  local_b0 = *(undefined8 *)(param_4 + 2);
  local_b8[0] = *param_4;
  local_a8 = param_4[4];
  uStack_a4 = param_4[5];
  uStack_a0 = param_4[6];
  uStack_9c = param_4[7];
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_143592070(param_4);
    }
    else {
      FUN_143592140();
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar4 = 3;
    do {
      puVar6 = (uint *)FUN_1434b4f50(param_1 + 0x40,uVar5);
      local_98[0] = *puVar6;
      local_90 = *(undefined8 *)(puVar6 + 2);
      local_88 = puVar6[4];
      uStack_84 = puVar6[5];
      uStack_80 = puVar6[6];
      uStack_7c = puVar6[7];
      if (9 < ((byte)*puVar6 & 0x1f)) {
        if ((*puVar6 >> 9 & 1) == 0) {
          FUN_143592070(puVar6);
        }
        else {
          FUN_143592140();
        }
      }
      local_78 = 3;
      local_70 = 0;
      local_68 = (undefined4)uVar5;
      FUN_143590110(local_58,param_1);
      cVar2 = FUN_1434ef3f0(param_3);
      if (cVar2 == '\0') {
        puVar8 = &stack0xffffffffffffffc8;
        do {
          puVar6 = (uint *)(puVar8 + -0x20);
          puVar8 = puVar8 + -0x20;
          lVar4 = lVar4 + -1;
          if (9 < ((byte)*puVar6 & 0x1f)) {
            if ((*puVar6 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar8);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar4 != 0);
        break;
      }
      local_d8[0] = 0;
      local_d0 = 0;
      local_res8[0] = 3;
      FUN_1435ce880(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),param_3,local_b8,local_d8,
                    local_res8,local_98,0,1);
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0xb8) != '\0') {
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar8 = &stack0xffffffffffffffc8;
        do {
          puVar6 = (uint *)(puVar8 + -0x20);
          puVar8 = puVar8 + -0x20;
          lVar4 = lVar4 + -1;
          if (9 < ((byte)*puVar6 & 0x1f)) {
            if ((*puVar6 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar8);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar4 != 0);
        break;
      }
      if (((local_d8[0] & 0x1f) == 1) && (local_c8 != '\0')) {
        uVar7 = FUN_1434b4f50(param_1 + 0x40,uVar5);
        FUN_1434ef820(local_res10,uVar7);
        if (9 < ((byte)local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        lVar9 = 3;
        puVar8 = &stack0xffffffffffffffc8;
        do {
          puVar6 = (uint *)(puVar8 + -0x20);
          puVar8 = puVar8 + -0x20;
          lVar9 = lVar9 + -1;
          if (9 < ((byte)*puVar6 & 0x1f)) {
            if ((*puVar6 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar8);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar9 != 0);
      }
      else {
        if (9 < (local_d8[0] & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        lVar9 = 3;
        puVar8 = &stack0xffffffffffffffc8;
        do {
          puVar6 = (uint *)(puVar8 + -0x20);
          puVar8 = puVar8 + -0x20;
          lVar9 = lVar9 + -1;
          if (9 < ((byte)*puVar6 & 0x1f)) {
            if ((*puVar6 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar8);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar9 != 0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulonglong *)(param_1 + 0x40));
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_b8);
  }
  return;
}



// FUNCTION 1434b9d20 FUN_1434b9d20 body=819 status=ok
// SIG undefined FUN_1434b9d20(void)

void FUN_1434b9d20(longlong param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined4 local_res18 [2];
  uint local_c8 [2];
  undefined8 local_c0;
  uint local_a8 [2];
  undefined8 local_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88 [2];
  undefined8 local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_48 [8];
  
  uVar2 = *param_3 & 0x1f;
  if (uVar2 == 0) {
    return;
  }
  if (uVar2 == 0xc) {
    bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_1434b9d64:
    if (bVar8) {
      return;
    }
  }
  else if (uVar2 == 10) {
    bVar8 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
    goto LAB_1434b9d64;
  }
  uVar7 = 0;
  uVar2 = *param_4 & 0x1f;
  if (uVar2 == 0) {
LAB_1434b9dbb:
    bVar8 = true;
  }
  else {
    if (uVar2 == 0xc) {
      bVar8 = *(longlong *)(param_4 + 4) == 0;
LAB_1434b9db0:
      if (bVar8) goto LAB_1434b9dbb;
    }
    else if (uVar2 == 10) {
      bVar8 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_1434b9db0;
    }
    bVar8 = false;
  }
  if (bVar8) {
    param_4 = param_3;
  }
  local_a0 = *(undefined8 *)(param_4 + 2);
  local_a8[0] = *param_4;
  local_98 = param_4[4];
  uStack_94 = param_4[5];
  uStack_90 = param_4[6];
  uStack_8c = param_4[7];
  if (9 < ((byte)local_a8[0] & 0x1f)) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_143592070(param_4);
    }
    else {
      FUN_143592140();
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar5 = 3;
    do {
      puVar3 = (uint *)FUN_1434b4f50(param_1 + 0x40,uVar7);
      local_88[0] = *puVar3;
      local_80 = *(undefined8 *)(puVar3 + 2);
      local_78 = puVar3[4];
      uStack_74 = puVar3[5];
      uStack_70 = puVar3[6];
      uStack_6c = puVar3[7];
      if (9 < ((byte)*puVar3 & 0x1f)) {
        if ((*puVar3 >> 9 & 1) == 0) {
          FUN_143592070(puVar3);
        }
        else {
          FUN_143592140();
        }
      }
      local_68 = 3;
      local_58 = (undefined4)uVar7;
      local_60 = 0;
      FUN_143590110(local_48,param_1);
      cVar1 = FUN_1434ef3f0(param_3);
      if (cVar1 == '\0') {
        puVar4 = &stack0xffffffffffffffd8;
        do {
          puVar3 = (uint *)(puVar4 + -0x20);
          puVar4 = puVar4 + -0x20;
          lVar5 = lVar5 + -1;
          if (9 < ((byte)*puVar3 & 0x1f)) {
            if ((*puVar3 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar4);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar5 != 0);
        break;
      }
      local_c8[0] = 0;
      local_res18[0] = 3;
      local_c0 = 0;
      FUN_1435ce880(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),param_3,local_a8,local_c8,
                    local_res18,local_88,0,1);
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0xb8) != '\0') {
        if (9 < ((byte)local_c8[0] & 0x1f)) {
          if ((local_c8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_c8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar4 = &stack0xffffffffffffffd8;
        do {
          puVar3 = (uint *)(puVar4 + -0x20);
          puVar4 = puVar4 + -0x20;
          lVar5 = lVar5 + -1;
          if (9 < ((byte)*puVar3 & 0x1f)) {
            if ((*puVar3 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar4);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar5 != 0);
        break;
      }
      if (9 < ((byte)local_c8[0] & 0x1f)) {
        if ((local_c8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_c8);
        }
        else {
          FUN_143592150();
        }
      }
      lVar6 = 3;
      puVar4 = &stack0xffffffffffffffd8;
      do {
        puVar3 = (uint *)(puVar4 + -0x20);
        puVar4 = puVar4 + -0x20;
        lVar6 = lVar6 + -1;
        if (9 < ((byte)*puVar3 & 0x1f)) {
          if ((*puVar3 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar4);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar6 != 0);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ulonglong *)(param_1 + 0x40));
  }
  if (9 < ((byte)local_a8[0] & 0x1f)) {
    if ((local_a8[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_a8);
  }
  return;
}



// FUNCTION 1434ba060 FUN_1434ba060 body=1057 status=ok
// SIG undefined FUN_1434ba060(void)

void FUN_1434ba060(longlong param_1,ulonglong *param_2,uint *param_3,uint *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined4 local_res10 [2];
  uint local_e8 [2];
  undefined8 local_e0;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8 [2];
  undefined8 local_c0;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  uint *local_a0;
  uint local_98 [2];
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = FUN_1435b5bc0(uVar1);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1434b64a0(lVar4,uVar1);
  }
  uVar9 = *param_2;
  if (uVar5 != uVar9) {
    if (uVar9 != 0) {
      if ((uVar9 & 1) == 0) {
        if ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar9 - 1;
      }
    }
    *param_2 = uVar5;
  }
  uVar3 = *param_3 & 0x1f;
  if (uVar3 == 0) {
    return;
  }
  if (uVar3 == 0xc) {
    bVar10 = *(longlong *)(param_3 + 4) == 0;
LAB_1434ba105:
    if (bVar10) {
      return;
    }
  }
  else if (uVar3 == 10) {
    bVar10 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
    goto LAB_1434ba105;
  }
  uVar3 = *param_4 & 0x1f;
  if (uVar3 == 0) {
LAB_1434ba154:
    bVar10 = true;
  }
  else {
    if (uVar3 == 0xc) {
      bVar10 = *(longlong *)(param_4 + 4) == 0;
LAB_1434ba147:
      if (bVar10) goto LAB_1434ba154;
    }
    else if (uVar3 == 10) {
      bVar10 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_1434ba147;
    }
    bVar10 = false;
  }
  uVar9 = 0;
  if (bVar10) {
    param_4 = param_3;
  }
  local_c0 = *(undefined8 *)(param_4 + 2);
  local_c8[0] = *param_4;
  local_b8 = param_4[4];
  uStack_b4 = param_4[5];
  uStack_b0 = param_4[6];
  uStack_ac = param_4[7];
  if (9 < ((byte)local_c8[0] & 0x1f)) {
    if ((local_c8[0] >> 9 & 1) == 0) {
      FUN_143592070(param_4);
    }
    else {
      FUN_143592140();
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar4 = 3;
    do {
      puVar6 = (uint *)FUN_1434b4f50((ulonglong *)(param_1 + 0x40),uVar9);
      local_98[0] = *puVar6;
      local_90 = *(undefined8 *)(puVar6 + 2);
      local_88 = puVar6[4];
      uStack_84 = puVar6[5];
      uStack_80 = puVar6[6];
      uStack_7c = puVar6[7];
      if (9 < ((byte)*puVar6 & 0x1f)) {
        if ((*puVar6 >> 9 & 1) == 0) {
          FUN_143592070(puVar6);
        }
        else {
          FUN_143592140();
        }
      }
      local_78 = 3;
      local_68 = (undefined4)uVar9;
      local_70 = 0;
      FUN_143590110(local_58,param_1);
      cVar2 = FUN_1434ef3f0(param_3);
      if (cVar2 == '\0') {
        puVar7 = &stack0xffffffffffffffc8;
        do {
          puVar6 = (uint *)(puVar7 + -0x20);
          puVar7 = puVar7 + -0x20;
          lVar4 = lVar4 + -1;
          if (9 < ((byte)*puVar6 & 0x1f)) {
            if ((*puVar6 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar7);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar4 != 0);
        break;
      }
      local_e8[0] = 0;
      local_res10[0] = 3;
      local_e0 = 0;
      FUN_1435ce880(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),param_3,local_c8,local_e8,
                    local_res10,local_98,0,1);
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0xb8) != '\0') {
        if (9 < ((byte)local_e8[0] & 0x1f)) {
          if ((local_e8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_e8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar7 = &stack0xffffffffffffffc8;
        do {
          puVar6 = (uint *)(puVar7 + -0x20);
          puVar7 = puVar7 + -0x20;
          lVar4 = lVar4 + -1;
          if (9 < ((byte)*puVar6 & 0x1f)) {
            if ((*puVar6 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar7);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar4 != 0);
        break;
      }
      if (*(longlong *)(uVar5 + 0x40) == *(longlong *)(uVar5 + 0x80)) {
        FUN_1434f0300(uVar5 + 0x78,*(undefined8 *)(uVar5 + 0x90),*(longlong *)(uVar5 + 0x80) + 1);
        puVar6 = (uint *)(*(longlong *)(uVar5 + 0x78) + -0x20 + *(longlong *)(uVar5 + 0x80) * 0x20);
        if (puVar6 != (uint *)0x0) {
          *puVar6 = local_e8[0];
          *(undefined8 *)(puVar6 + 2) = local_e0;
          puVar6[4] = local_d8;
          puVar6[5] = uStack_d4;
          puVar6[6] = uStack_d0;
          puVar6[7] = uStack_cc;
          if (9 < ((byte)local_e8[0] & 0x1f)) {
            if ((local_e8[0] >> 9 & 1) == 0) {
              FUN_143592070(local_e8);
            }
            else {
              FUN_143592140();
            }
          }
        }
      }
      else {
        *(longlong *)(uVar5 + 0x50) = *(longlong *)(uVar5 + 0x40);
        local_a8 = uVar5 + 0x50;
        local_a0 = local_e8;
        FUN_1434e4980(uVar5 + 0x98,*(undefined8 *)(uVar5 + 0xa0),&local_a8);
      }
      *(longlong *)(uVar5 + 0x40) = *(longlong *)(uVar5 + 0x40) + 1;
      if (9 < ((byte)local_e8[0] & 0x1f)) {
        if ((local_e8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_e8);
        }
        else {
          FUN_143592150();
        }
      }
      lVar8 = 3;
      puVar7 = &stack0xffffffffffffffc8;
      do {
        puVar6 = (uint *)(puVar7 + -0x20);
        puVar7 = puVar7 + -0x20;
        lVar8 = lVar8 + -1;
        if (9 < ((byte)*puVar6 & 0x1f)) {
          if ((*puVar6 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar7);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar8 != 0);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(ulonglong *)(param_1 + 0x40));
  }
  if (9 < ((byte)local_c8[0] & 0x1f)) {
    if ((local_c8[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_c8);
  }
  return;
}



// FUNCTION 1434ba490 FUN_1434ba490 body=901 status=ok
// SIG undefined FUN_1434ba490(void)

void FUN_1434ba490(longlong param_1,undefined1 *param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined4 local_res18 [4];
  uint local_d8 [2];
  undefined8 local_d0;
  char local_c8;
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98 [2];
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_58 [8];
  
  uVar3 = *param_3 & 0x1f;
  if (uVar3 == 0) goto LAB_1434ba7f7;
  if (uVar3 == 0xc) {
    bVar9 = *(longlong *)(param_3 + 4) == 0;
LAB_1434ba4e6:
    if (bVar9) goto LAB_1434ba7f7;
  }
  else if (uVar3 == 10) {
    bVar9 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
    goto LAB_1434ba4e6;
  }
  uVar8 = 0;
  uVar3 = *param_4 & 0x1f;
  if (uVar3 == 0) {
LAB_1434ba525:
    bVar9 = true;
  }
  else {
    if (uVar3 == 0xc) {
      bVar9 = *(longlong *)(param_4 + 4) == 0;
LAB_1434ba51a:
      if (bVar9) goto LAB_1434ba525;
    }
    else if (uVar3 == 10) {
      bVar9 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
      goto LAB_1434ba51a;
    }
    bVar9 = false;
  }
  if (bVar9) {
    param_4 = param_3;
  }
  local_b0 = *(undefined8 *)(param_4 + 2);
  local_b8[0] = *param_4;
  local_a8 = param_4[4];
  uStack_a4 = param_4[5];
  uStack_a0 = param_4[6];
  uStack_9c = param_4[7];
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_143592070(param_4);
    }
    else {
      FUN_143592140();
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar7 = 3;
    do {
      puVar4 = (uint *)FUN_1434b4f50(param_1 + 0x40,uVar8);
      local_98[0] = *puVar4;
      local_90 = *(undefined8 *)(puVar4 + 2);
      local_88 = puVar4[4];
      uStack_84 = puVar4[5];
      uStack_80 = puVar4[6];
      uStack_7c = puVar4[7];
      if (9 < ((byte)*puVar4 & 0x1f)) {
        if ((*puVar4 >> 9 & 1) == 0) {
          FUN_143592070(puVar4);
        }
        else {
          FUN_143592140();
        }
      }
      local_78 = 3;
      local_68 = (undefined4)uVar8;
      local_70 = 0;
      FUN_143590110(local_58,param_1);
      cVar1 = FUN_1434ef3f0(param_3);
      if (cVar1 == '\0') {
        puVar5 = &stack0xffffffffffffffc8;
        do {
          puVar4 = (uint *)(puVar5 + -0x20);
          puVar5 = puVar5 + -0x20;
          lVar7 = lVar7 + -1;
          if (9 < ((byte)*puVar4 & 0x1f)) {
            if ((*puVar4 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar5);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar7 != 0);
        break;
      }
      local_d8[0] = 0;
      local_res18[0] = 3;
      local_d0 = 0;
      FUN_1435ce880(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),param_3,local_b8,local_d8,
                    local_res18,local_98,0,1);
      bVar2 = (byte)local_d8[0];
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0xb8) != '\0') {
        if (9 < (bVar2 & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar5 = &stack0xffffffffffffffc8;
        do {
          puVar4 = (uint *)(puVar5 + -0x20);
          puVar5 = puVar5 + -0x20;
          lVar7 = lVar7 + -1;
          if (9 < ((byte)*puVar4 & 0x1f)) {
            if ((*puVar4 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar5);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar7 != 0);
        break;
      }
      if (((bVar2 & 0x1f) != 1) || (local_c8 == '\x01')) {
        *param_2 = 1;
        if (9 < (bVar2 & 0x1f)) {
          if ((local_d8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_d8);
          }
          else {
            FUN_143592150();
          }
        }
        puVar5 = &stack0xffffffffffffffc8;
        do {
          puVar4 = (uint *)(puVar5 + -0x20);
          puVar5 = puVar5 + -0x20;
          lVar7 = lVar7 + -1;
          if (9 < ((byte)*puVar4 & 0x1f)) {
            if ((*puVar4 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar5);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar7 != 0);
        if (((byte)local_b8[0] & 0x1f) < 10) {
          return;
        }
        if ((local_b8[0] >> 9 & 1) != 0) {
          FUN_143592150();
          return;
        }
        FUN_1435920c0(local_b8);
        return;
      }
      lVar6 = 3;
      puVar5 = &stack0xffffffffffffffc8;
      do {
        puVar4 = (uint *)(puVar5 + -0x20);
        puVar5 = puVar5 + -0x20;
        lVar6 = lVar6 + -1;
        if (9 < ((byte)*puVar4 & 0x1f)) {
          if ((*puVar4 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar5);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar6 != 0);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ulonglong *)(param_1 + 0x40));
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
LAB_1434ba7f7:
  *param_2 = 0;
  return;
}



// FUNCTION 1434ba820 FUN_1434ba820 body=51 status=ok
// SIG undefined FUN_1434ba820(void)

undefined8 * FUN_1434ba820(undefined8 *param_1)

{
  FUN_1435b93d0();
  param_1[0x11] = param_1[0x11] | 1;
  *param_1 = &PTR_FUN_145b184c0;
  *(undefined4 *)(param_1 + 0x12) = 7;
  return param_1;
}



// FUNCTION 1434ba860 FUN_1434ba860 body=141 status=ok
// SIG undefined FUN_1434ba860(void)

void FUN_1434ba860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1434b64a0(lVar1,param_3);
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



// FUNCTION 1434ba900 FUN_1434ba900 body=43 status=ok
// SIG undefined FUN_1434ba900(void)

undefined8 * FUN_1434ba900(undefined8 *param_1)

{
  FUN_1435b8070();
  *(undefined4 *)(param_1 + 0x12) = 7;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434ba940 FUN_1434ba940 body=290 status=ok
// SIG undefined FUN_1434ba940(void)

undefined8 * FUN_1434ba940(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b15cf0);
    *(undefined4 *)(puVar3 + 0x12) = 7;
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b15cf0);
    puVar3[0x11] = puVar3[0x11] | 1;
    *puVar3 = &PTR_FUN_145b184c0;
    *(undefined4 *)(puVar3 + 0x12) = 7;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *(undefined4 *)(puVar3 + 10) = 1;
    *puVar3 = &PTR_ForEachChild_GC_145b18538;
    *(undefined4 *)((longlong)puVar3 + 0x54) = 2;
    *(undefined4 *)(puVar3 + 0xb) = 4;
    *(undefined4 *)((longlong)puVar3 + 0x5c) = 8;
    *(undefined4 *)(puVar3 + 0xc) = 0x10;
  }
  return param_1;
}



// FUNCTION 1434baa70 FUN_1434baa70 body=68 status=ok
// SIG undefined FUN_1434baa70(void)

undefined8 * FUN_1434baa70(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 1;
  *param_1 = &PTR_ForEachChild_GC_145b18538;
  *(undefined4 *)((longlong)param_1 + 0x54) = 2;
  *(undefined4 *)(param_1 + 0xb) = 4;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 8;
  *(undefined4 *)(param_1 + 0xc) = 0x10;
  return param_1;
}



// FUNCTION 1434baac0 FUN_1434baac0 body=38 status=ok
// SIG undefined FUN_1434baac0(void)

void FUN_1434baac0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001434baae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 1434baaf0 FUN_1434baaf0 body=86 status=ok
// SIG undefined FUN_1434baaf0(void)

undefined8 * FUN_1434baaf0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  lVar1 = FUN_1435b5bc0(uVar2);
  if (lVar1 != 0) {
    uVar2 = FUN_1434b64a0(lVar1,uVar2);
    *param_2 = uVar2;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434bab50 FUN_1434bab50 body=474 status=ok
// SIG undefined FUN_1434bab50(void)

void FUN_1434bab50(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined **ppuVar10;
  longlong local_res8;
  uint local_48 [2];
  undefined8 local_40;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 200))();
  }
  FUN_1435b3e60(param_1,param_2);
  lVar5 = FUN_1435b4fe0(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x218)
                         + 0xd8));
  ppuVar10 = &PTR_s_toLocaleString_145b14e20;
  uVar8 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  do {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar5 + 0x28) + 0xe8);
    plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(lVar5 + 0x28) + 0x98) + 0x48);
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4,0x60);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      FUN_1434afa90(puVar6,uVar3);
      *puVar6 = &PTR_ForEachChild_GC_145b17a88;
      puVar6[9] = &PTR_FUN_145b14e10 + uVar8 * 6;
      puVar6[10] = lVar2;
      if (lVar2 != 0) {
        *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
      }
      puVar6[0xb] = param_1;
      *puVar6 = &PTR_ForEachChild_GC_145b17b60;
    }
    local_48[0] = 0;
    local_40 = 0;
    Scaleform::GFx::AS3::Value::PickUnsafe(local_48,puVar6);
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while ((*ppuVar10)[lVar9] != '\0');
    local_res8 = FUN_143360950(*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                                0x218),*ppuVar10,lVar9,0);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    FUN_1435b12c0(param_2,&local_res8);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (9 < ((byte)local_48[0] & 0x1f)) {
      if ((local_48[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_48);
      }
      else {
        FUN_143592150();
      }
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    ppuVar10 = ppuVar10 + 6;
  } while (uVar7 < 2);
  FUN_1435b3fb0(param_1,param_2);
  return;
}



// FUNCTION 1434bad30 FUN_1434bad30 body=33 status=ok
// SIG undefined FUN_1434bad30(void)

undefined8 * FUN_1434bad30(undefined8 *param_1)

{
  FUN_1435b9d40();
  *param_1 = &PTR_FUN_145b17510;
  return param_1;
}



// FUNCTION 1434bad60 FUN_1434bad60 body=43 status=ok
// SIG undefined FUN_1434bad60(void)

undefined8 * FUN_1434bad60(undefined8 *param_1)

{
  FUN_1435b93d0();
  *(undefined4 *)(param_1 + 0x12) = 0x15;
  *param_1 = &PTR_FUN_145b18620;
  return param_1;
}



// FUNCTION 1434bada0 FUN_1434bada0 body=173 status=ok
// SIG undefined FUN_1434bada0(void)

void FUN_1434bada0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b9d40(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b17510;
  }
  local_28[0] = 0;
  local_20 = 0;
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



// FUNCTION 1434bae60 FUN_1434bae60 body=376 status=ok
// SIG undefined FUN_1434bae60(void)

undefined8 * FUN_1434bae60(undefined8 *param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  longlong local_res10;
  
  FUN_1435b93d0(param_1,param_2[5],&PTR_DAT_145b15ea0);
  lVar6 = param_1[0x13];
  *param_1 = &PTR_FUN_145b18620;
  *(undefined4 *)(param_1 + 0x12) = 0x15;
  lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x218);
  local_res8 = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = param_2[0x14];
  if (param_3[1] == 0) {
    lVar6 = *(longlong *)(lVar6 + 0x1d8);
    if (lVar6 != 0) {
      *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
    }
  }
  else {
    lVar5 = (ulonglong)(uint)param_3[1] * 0x10 + *(longlong *)(lVar2 + 0x148);
    plVar4 = (longlong *)
             (**(code **)(*param_2 + 0x48))(param_2,&local_res10,(longlong)*(int *)(lVar5 + 8));
    lVar6 = *plVar4;
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    local_res8 = lVar6;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2,&local_res10,lVar5);
    lVar6 = *plVar4;
  }
  uVar3 = 2;
  if (*param_3 != 0) {
    uVar3 = FUN_1435b6140(param_1,param_2,(longlong)*param_3 * 0x10 + *(longlong *)(lVar2 + 0x148),2
                         );
  }
  FUN_1435b5590(param_1,&local_res8,lVar6,uVar3,0,0);
  FUN_1435b6220(param_1,0x40);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_1;
}



// FUNCTION 1434bafe0 FUN_1434bafe0 body=43 status=ok
// SIG undefined FUN_1434bafe0(void)

undefined8 * FUN_1434bafe0(undefined8 *param_1)

{
  FUN_1435b8070();
  *(undefined4 *)(param_1 + 0x12) = 0x15;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434bb020 FUN_1434bb020 body=247 status=ok
// SIG undefined FUN_1434bb020(void)

undefined8 * FUN_1434bb020(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b15ea0);
    *(undefined4 *)(puVar3 + 0x12) = 0x15;
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b15ea0);
    *(undefined4 *)(puVar3 + 0x12) = 0x15;
    *puVar3 = &PTR_FUN_145b18620;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 1434bb120 FUN_1434bb120 body=33 status=ok
// SIG undefined FUN_1434bb120(void)

undefined8 * FUN_1434bb120(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 1434bb150 FUN_1434bb150 body=126 status=ok
// SIG undefined FUN_1434bb150(void)

undefined8 *
FUN_1434bb150(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0x148;
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x100,local_res10);
  if (lVar1 != 0) {
    uVar2 = FUN_1434bae60(lVar1,param_3,param_4);
    *param_2 = uVar2;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434bb1e0 FUN_1434bb1e0 body=115 status=ok
// SIG undefined FUN_1434bb1e0(void)

undefined8 * FUN_1434bb1e0(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_1435b9d40();
  *param_1 = &PTR_ForEachChild_GC_145b18770;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x98) + 0x1d8);
  param_1[9] = lVar2;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
  }
  return param_1;
}



// FUNCTION 1434bb260 FUN_1434bb260 body=90 status=ok
// SIG undefined FUN_1434bb260(void)

undefined8 *
FUN_1434bb260(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_1435b9d40();
  *param_1 = &PTR_ForEachChild_GC_145b18770;
  lVar2 = *param_3;
  param_1[8] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  param_1[9] = param_4;
  if (param_4 != 0) {
    *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
  }
  return param_1;
}



// FUNCTION 1434bb2c0 ForEachChild_GC body=61 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl::QName::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b16a0();
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (*param_3)(param_2,param_1 + 0x48);
  }
  return;
}



// FUNCTION 1434bb310 FUN_1434bb310 body=677 status=ok
// SIG undefined FUN_1434bb310(void)

void FUN_1434bb310(longlong param_1,int param_2,uint *param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_res8;
  undefined1 local_res10 [16];
  undefined8 local_res20;
  
  lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
  if (param_2 == 0) {
    lVar2 = *(longlong *)(lVar8 + 0x218);
    *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 2;
    lVar8 = *(longlong *)(param_1 + 0x40);
LAB_1434bb575:
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(param_1 + 0x40) = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2 + 0x48);
      return;
    }
  }
  else {
    if (param_2 == 1) {
      if (((*param_3 & 0x1f) != 0) &&
         (pcVar5 = (char *)FUN_1435911f0(param_3,local_res10,param_1 + 0x40), *pcVar5 == '\0')) {
        return;
      }
      if (*(char *)**(undefined8 **)(param_1 + 0x40) != '*') {
        return;
      }
      if (((char *)**(undefined8 **)(param_1 + 0x40))[1] != '\0') {
        return;
      }
      uVar3 = *(ulonglong *)(param_1 + 0x48);
      if (uVar3 == 0) {
        return;
      }
      if ((uVar3 & 1) == 0) {
        if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880();
        }
        *(undefined8 *)(param_1 + 0x48) = 0;
        return;
      }
      *(ulonglong *)(param_1 + 0x48) = uVar3 - 1;
      *(undefined8 *)(param_1 + 0x48) = 0;
      return;
    }
    uVar3 = *(ulonglong *)(param_1 + 0x48);
    if (uVar3 != 0) {
      if ((uVar3 & 1) == 0) {
        if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(param_1 + 0x48) = uVar3 - 1;
      }
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    uVar7 = *param_3 & 0x1f;
    if (uVar7 == 0xc) {
      bVar9 = *(longlong *)(param_3 + 4) == 0;
LAB_1434bb447:
      if (!bVar9) goto LAB_1434bb452;
    }
    else {
      if (uVar7 == 10) {
        bVar9 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
        goto LAB_1434bb447;
      }
LAB_1434bb452:
      if (uVar7 == 0xb) {
        FUN_1434f0700(param_1 + 0x48,*(undefined8 *)(param_3 + 4));
      }
      else {
        cVar4 = FUN_143592700(param_3);
        if (cVar4 == '\0') {
          local_res8 = *(longlong *)(lVar8 + 0x218) + 0x48;
          piVar1 = (int *)(*(longlong *)(lVar8 + 0x218) + 0x60);
          *piVar1 = *piVar1 + 1;
          pcVar5 = (char *)FUN_1435911f0(param_3,local_res10,&local_res8);
          if (*pcVar5 != '\0') {
            lVar2 = *(longlong *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x210) +
                     0xd8);
            uVar6 = FUN_143590540();
            FUN_1434ef5c0(*(undefined8 *)(lVar2 + 0x100),&local_res20,0,&local_res8,uVar6);
            FUN_1434e68a0(param_1 + 0x48,local_res20);
          }
          piVar1 = (int *)(local_res8 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          FUN_1434e6830(param_1 + 0x48,*(longlong *)(param_3 + 4) + 0x48);
        }
      }
    }
    if (((byte)param_3[8] & 0x1f) == 0xb) {
      param_3 = (uint *)(*(longlong *)(param_3 + 4) + 0x48);
    }
    else {
      cVar4 = FUN_143592700(param_3 + 8);
      if (cVar4 != '\0') {
        lVar8 = *(longlong *)(*(longlong *)(param_3 + 0xc) + 0x40);
        piVar1 = (int *)(lVar8 + 0x18);
        *piVar1 = *piVar1 + 1;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(longlong *)(param_1 + 0x40) = lVar8;
        return;
      }
      if ((param_3[8] & 0x1f) == 0) {
        lVar2 = *(longlong *)(lVar8 + 0x218);
        *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 2;
        lVar8 = *(longlong *)(param_1 + 0x40);
        goto LAB_1434bb575;
      }
      param_3 = param_3 + 8;
    }
    FUN_1435911f0(param_3,local_res10,param_1 + 0x40);
  }
  return;
}



// FUNCTION 1434bb5c0 FUN_1434bb5c0 body=122 status=ok
// SIG undefined FUN_1434bb5c0(void)

void FUN_1434bb5c0(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong local_res8 [4];
  
  if (param_3 == 1) {
    uVar3 = 3;
    pcVar2 = "uri";
  }
  else {
    if (param_3 != 2) {
      return;
    }
    uVar3 = 9;
    pcVar2 = "localName";
  }
  local_res8[0] =
       FUN_143360950(*(undefined8 *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                      0x218),pcVar2,uVar3,0);
  *(int *)(local_res8[0] + 0x18) = *(int *)(local_res8[0] + 0x18) + 1;
  FUN_143590250(param_2,local_res8);
  piVar1 = (int *)(local_res8[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434bb660 FUN_1434bb660 body=72 status=ok
// SIG undefined FUN_1434bb660(void)

void FUN_1434bb660(longlong param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_143590250(param_2,*(longlong *)(param_1 + 0x48) + 0x38);
      return;
    }
    FUN_1434f0650(param_2);
  }
  else if (param_3 == 2) {
    FUN_143590250(param_2,param_1 + 0x40);
    return;
  }
  return;
}



// FUNCTION 1434bb6b0 FUN_1434bb6b0 body=62 status=ok
// SIG undefined FUN_1434bb6b0(void)

void FUN_1434bb6b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
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



// FUNCTION 1434bb700 FUN_1434bb700 body=99 status=ok
// SIG undefined FUN_1434bb700(void)

void FUN_1434bb700(longlong param_1,uint *param_2)

{
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_143590250(param_2,*(longlong *)(param_1 + 0x48) + 0x38);
    return;
  }
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffec;
  *param_2 = *param_2 | 0xc;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)(param_2 + 6) = uStack_10;
  return;
}



// FUNCTION 1434bb790 FUN_1434bb790 body=392 status=ok
// SIG undefined FUN_1434bb790(void)

void FUN_1434bb790(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong local_res8 [2];
  ulonglong local_res18;
  ulonglong local_res20;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x38);
    if (*(int *)(lVar5 + 0x20) == 0) {
      lVar5 = *(longlong *)(param_1 + 0x40);
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*param_2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_2 = lVar5;
      return;
    }
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar5;
    FUN_143360130(param_2,&DAT_145b1a93c,2);
    FUN_143360170(param_2,param_1 + 0x40);
    return;
  }
  uVar3 = FUN_1432c3140(&local_res20,**(undefined8 **)(param_1 + 0x40),
                        *(undefined4 *)(*(undefined8 **)(param_1 + 0x40) + 4));
  uVar4 = FUN_1432c2fb0(&local_res18,&DAT_145b1a938);
  FString::TrimQuotes(uVar4,local_res8,uVar3);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
  }
  lVar5 = FUN_143360a90(*(undefined8 *)(*param_2 + 8),
                        (longlong)(local_res8[0] & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(local_res8[0] & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar5;
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8[0] & 0xfffffffffffffffc);
    return;
  }
  return;
}



// FUNCTION 1434bb920 FUN_1434bb920 body=248 status=ok
// SIG undefined FUN_1434bb920(void)

void FUN_1434bb920(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res18;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 0xc) {
    lVar4 = *(longlong *)(param_3 + 4);
    uVar2 = FUN_1435cb140(param_2);
    lVar3 = FUN_1435b3ae0(uVar2);
    if (lVar4 == lVar3) {
      FUN_143590250(param_4,*(undefined8 *)(param_2 + 0x10));
      return;
    }
  }
  lVar4 = FUN_1435caba0(param_2,param_3);
  if ((*(int *)(lVar4 + 0x90) == 0x11) && ((*(byte *)(lVar4 + 0x88) >> 5 & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_3 + 4);
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_res18 = lVar4 + 0x48;
    piVar1 = (int *)(lVar4 + 0x60);
    *piVar1 = *piVar1 + 1;
    FUN_1434bb790(uVar2,&local_res18);
    FUN_143590250(param_4,&local_res18);
    local_10 = local_res18;
  }
  else {
    uVar2 = FUN_1435c8e40(local_18,0x3ec,param_2);
    FUN_1435cbe70(param_2,uVar2);
  }
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434bba20 FUN_1434bba20 body=43 status=ok
// SIG undefined FUN_1434bba20(void)

undefined8 * FUN_1434bba20(undefined8 *param_1)

{
  FUN_1435b93d0();
  *(undefined4 *)(param_1 + 0x12) = 0x11;
  *param_1 = &PTR_FUN_145b18830;
  return param_1;
}



// FUNCTION 1434bba60 FUN_1434bba60 body=141 status=ok
// SIG undefined FUN_1434bba60(void)

void FUN_1434bba60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1434bb1e0(lVar1,param_3);
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



// FUNCTION 1434bbb00 FUN_1434bbb00 body=43 status=ok
// SIG undefined FUN_1434bbb00(void)

undefined8 * FUN_1434bbb00(undefined8 *param_1)

{
  FUN_1435b8070();
  *(undefined4 *)(param_1 + 0x12) = 0x11;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434bbb40 FUN_1434bbb40 body=247 status=ok
// SIG undefined FUN_1434bbb40(void)

undefined8 * FUN_1434bbb40(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b168a0);
    *(undefined4 *)(puVar3 + 0x12) = 0x11;
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b168a0);
    *(undefined4 *)(puVar3 + 0x12) = 0x11;
    *puVar3 = &PTR_FUN_145b18830;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b188a8;
  }
  return param_1;
}



// FUNCTION 1434bbc40 FUN_1434bbc40 body=33 status=ok
// SIG undefined FUN_1434bbc40(void)

undefined8 * FUN_1434bbc40(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b188a8;
  return param_1;
}



// FUNCTION 1434bbc70 FUN_1434bbc70 body=70 status=ok
// SIG undefined FUN_1434bbc70(void)

void FUN_1434bbc70(longlong param_1,undefined8 param_2)

{
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 200))();
  }
  FUN_1434e7f40(param_2,&PTR_FUN_145b15230);
  FUN_1435b3fb0(param_1,param_2);
  return;
}



// FUNCTION 1434bbcc0 FUN_1434bbcc0 body=151 status=ok
// SIG undefined FUN_1434bbcc0(void)

void FUN_1434bbcc0(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  
  if (((*param_3 == 1) &&
      (lVar1 = FUN_1435caba0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),param_4),
      *(int *)(lVar1 + 0x90) == 0x11)) && ((~(*(byte *)(lVar1 + 0x88) >> 5) & 1) != 0)) {
    FUN_143590140(param_2,param_4);
    return;
  }
  FUN_1435b39e0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 1434bbd60 FUN_1434bbd60 body=38 status=ok
// SIG undefined FUN_1434bbd60(void)

void FUN_1434bbd60(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001434bbd82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 1434bbdc0 FUN_1434bbdc0 body=43 status=ok
// SIG undefined FUN_1434bbdc0(void)

undefined8 * FUN_1434bbdc0(undefined8 *param_1)

{
  FUN_1435b93d0();
  *(undefined4 *)(param_1 + 0x12) = 4;
  *param_1 = &PTR_FUN_145b18988;
  return param_1;
}



// FUNCTION 1434bbe10 FUN_1434bbe10 body=329 status=ok
// SIG undefined FUN_1434bbe10(void)

void FUN_1434bbe10(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint local_1e8 [2];
  longlong local_1e0;
  longlong local_1d8;
  undefined1 local_1d0 [24];
  longlong local_1b8 [3];
  undefined **local_1a0;
  uint local_198;
  undefined4 local_188;
  
  local_1e8[0] = 0;
  if (param_5 != 0) {
    pcVar3 = (char *)FUN_143590eb0(param_6,&param_5,local_1e8);
    if (*pcVar3 == '\0') {
      return;
    }
    if (0x14 < local_1e8[0]) {
      uVar4 = FUN_1435c8e40(&local_1e0,0x3ea,param_2);
      FUN_1435cbdf0(param_2,uVar4);
      piVar1 = (int *)(local_1d8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  FUN_143355730(local_1b8,*(undefined8 *)(param_3 + 0x10));
  local_188 = 1;
  local_198 = local_198 ^ (local_198 ^ local_1e8[0]) & 0x1f;
  (**(code **)(local_1b8[0] + 0x18))(local_1b8);
  puVar5 = (undefined8 *)FUN_143355d40(local_1b8,local_1d0);
  lVar2 = *(longlong *)(param_2 + 0x10);
  uVar4 = *puVar5;
  uVar6 = FWmfMediaPlayer::GetSamples(local_1b8);
  local_1e0 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x218),uVar4,uVar6);
  *(int *)(local_1e0 + 0x18) = *(int *)(local_1e0 + 0x18) + 1;
  FUN_143590250(param_4,&local_1e0);
  piVar1 = (int *)(local_1e0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_1a0 = &PTR_FUN_145af1858;
  FUN_143353a80(local_1b8);
  return;
}



// FUNCTION 1434bbf60 FUN_1434bbf60 body=329 status=ok
// SIG undefined FUN_1434bbf60(void)

void FUN_1434bbf60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint local_1e8 [2];
  longlong local_1e0;
  longlong local_1d8;
  undefined1 local_1d0 [24];
  longlong local_1b8 [3];
  undefined **local_1a0;
  uint local_198;
  undefined4 local_188;
  
  local_1e8[0] = 0;
  if (param_5 != 0) {
    pcVar3 = (char *)FUN_143590eb0(param_6,&param_5,local_1e8);
    if (*pcVar3 == '\0') {
      return;
    }
    if (0x14 < local_1e8[0]) {
      uVar4 = FUN_1435c8e40(&local_1e0,0x3ea,param_2);
      FUN_1435cbdf0(param_2,uVar4);
      piVar1 = (int *)(local_1d8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  FUN_143355730(local_1b8,*(undefined8 *)(param_3 + 0x10));
  local_188 = 0;
  local_198 = local_198 ^ (local_198 ^ local_1e8[0]) & 0x1f;
  (**(code **)(local_1b8[0] + 0x18))(local_1b8);
  puVar5 = (undefined8 *)FUN_143355d40(local_1b8,local_1d0);
  lVar2 = *(longlong *)(param_2 + 0x10);
  uVar4 = *puVar5;
  uVar6 = FWmfMediaPlayer::GetSamples(local_1b8);
  local_1e0 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x218),uVar4,uVar6);
  *(int *)(local_1e0 + 0x18) = *(int *)(local_1e0 + 0x18) + 1;
  FUN_143590250(param_4,&local_1e0);
  piVar1 = (int *)(local_1e0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_1a0 = &PTR_FUN_145af1858;
  FUN_143353a80(local_1b8);
  return;
}



// FUNCTION 1434bc0b0 FUN_1434bc0b0 body=334 status=ok
// SIG undefined FUN_1434bc0b0(void)

void FUN_1434bc0b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_1e8 [2];
  longlong local_1e0;
  longlong local_1d8;
  undefined1 local_1d0 [24];
  longlong local_1b8 [3];
  undefined **local_1a0;
  uint local_198;
  undefined4 local_188;
  
  local_1e8[0] = 0;
  if (param_5 != 0) {
    pcVar3 = (char *)FUN_143590eb0(param_6,&param_5,local_1e8);
    if (*pcVar3 == '\0') {
      return;
    }
    if (local_1e8[0] - 1 < 0x15) {
      FUN_143355730(local_1b8,*(undefined8 *)(param_3 + 0x10));
      local_188 = 2;
      local_198 = local_198 ^ (local_198 ^ local_1e8[0]) & 0x1f;
      (**(code **)(local_1b8[0] + 0x18))(local_1b8);
      puVar4 = (undefined8 *)FUN_143355d40(local_1b8,local_1d0);
      lVar2 = *(longlong *)(param_2 + 0x10);
      uVar6 = *puVar4;
      uVar5 = FWmfMediaPlayer::GetSamples(local_1b8);
      local_1e0 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x218),uVar6,uVar5);
      *(int *)(local_1e0 + 0x18) = *(int *)(local_1e0 + 0x18) + 1;
      FUN_143590250(param_4,&local_1e0);
      piVar1 = (int *)(local_1e0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      local_1a0 = &PTR_FUN_145af1858;
      FUN_143353a80(local_1b8);
      return;
    }
  }
  uVar6 = FUN_1435c8e40(&local_1e0,0x3ea,param_2);
  FUN_1435cbdf0(param_2,uVar6);
  piVar1 = (int *)(local_1d8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434bc210 FUN_1434bc210 body=481 status=ok
// SIG undefined FUN_1434bc210(void)

void FUN_1434bc210(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  int param_5,byte *param_6)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulonglong local_res18;
  uint local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  ulonglong local_a8;
  longlong local_98 [3];
  undefined **local_80;
  byte local_72;
  uint local_68;
  undefined1 local_38 [48];
  
  local_b8 = 10;
  if (((byte)*param_3 & 0x1f) == 4) {
    if ((param_5 != 0) && ((*param_6 & 0x1f) != 0)) {
      pcVar4 = (char *)FUN_143590eb0(param_6,&local_res18,&local_b8);
      if (*pcVar4 == '\0') {
        return;
      }
      if (0x22 < local_b8 - 2) {
        uVar3 = FUN_1435c8e40(&local_b0,0x3eb,param_2);
        FUN_1435cbdf0(param_2,uVar3);
        goto LAB_1434bc3cd;
      }
    }
    uVar2 = *(ulonglong *)(param_3 + 4);
    if ((local_b8 != 10) &&
       (local_res18 = uVar2, (uVar2 & 0x7ff0000000000000) != 0x7ff0000000000000)) {
      pcVar4 = (char *)FUN_143590b70(param_3,&local_res18,&local_b4);
      if (*pcVar4 == '\0') {
        return;
      }
      FUN_143354ad0(local_98,local_b4);
      local_72 = local_72 & 0xfe;
      local_68 = local_68 ^ (local_68 ^ local_b8) & 0x1f;
      (**(code **)(local_98[0] + 0x18))(local_98);
      FUN_143355620(local_98,&local_b0);
      local_res18 = FUN_143360a90(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),local_b0,
                                  local_a8);
      *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
      FUN_143590250(param_4,&local_res18);
      piVar1 = (int *)(local_res18 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      local_80 = &PTR_FUN_145af1858;
      FUN_143353a80(local_98);
      return;
    }
    uVar3 = FUN_1435ff9f0(local_38,0x28);
    local_res18 = FUN_143360a90(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),local_38,
                                uVar3);
    *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
    FUN_143590250(param_4,&local_res18);
    local_a8 = local_res18;
  }
  else {
    uVar3 = FUN_1435c8e40(&local_b0,0x3ec,param_2);
    FUN_1435cbe70(param_2,uVar3);
  }
LAB_1434bc3cd:
  piVar1 = (int *)(local_a8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434bc410 FUN_1434bc410 body=91 status=ok
// SIG undefined FUN_1434bc410(void)

void FUN_1434bc410(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 4) {
    FUN_143590140(param_4,param_3);
    return;
  }
  uVar2 = FUN_1435c8e40(local_18,0x3ec,param_2);
  FUN_1435cbe70(param_2,uVar2);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434bc480 FUN_1434bc480 body=153 status=ok
// SIG undefined FUN_1434bc480(void)

void FUN_1434bc480(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((byte)*param_3 & 0x1f) == 0xc) {
    lVar1 = *(longlong *)(param_3 + 4);
    uVar2 = FUN_1435caf00(param_2);
    lVar3 = FUN_1435b3ae0(uVar2);
    if (lVar1 == lVar3) {
      FUN_143590250(param_4,*(longlong *)(param_2 + 0x10) + 0x78);
      return;
    }
  }
  FUN_1434bc210(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 1434bc530 FUN_1434bc530 body=239 status=ok
// SIG undefined FUN_1434bc530(void)

void FUN_1434bc530(undefined8 param_1,undefined8 param_2,undefined4 *param_3,uint *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_18 [8];
  longlong lStack_10;
  
  if (((byte)*param_3 & 0x1f) == 0xc) {
    lVar2 = *(longlong *)(param_3 + 4);
    uVar3 = FUN_1435caf00(param_2);
    lVar4 = FUN_1435b3ae0(uVar3);
    if (lVar2 == lVar4) {
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
      param_4[4] = 0;
      param_4[5] = 0;
      *(longlong *)(param_4 + 6) = lStack_10;
      return;
    }
  }
  if (((byte)*param_3 & 0x1f) == 4) {
    FUN_143590140(param_4,param_3);
  }
  else {
    uVar3 = FUN_1435c8e40(local_18,0x3ec,param_2);
    FUN_1435cbe70(param_2,uVar3);
    piVar1 = (int *)(lStack_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434bc630 FUN_1434bc630 body=282 status=ok
// SIG undefined FUN_1434bc630(void)

void FUN_1434bc630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_38[0] = 0;
  local_30 = 0;
  pcVar2 = (char *)FUN_143590af0(param_3,local_res10,&local_48);
  if (*pcVar2 == '\0') {
    uVar3 = FUN_1435c8e40(&local_48,0x40a,param_2);
    FUN_1435cbe70(param_2,uVar3);
    piVar1 = (int *)(CONCAT44(uStack_3c,uStack_40) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (9 < ((byte)local_38[0] & 0x1f)) {
      if ((local_38[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_38);
      }
      else {
        FUN_143592150();
      }
    }
    local_38[0] = local_38[0] & 0xffffffe4 | 4;
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    FUN_1434bbe10(param_1,param_2,local_38,param_4,param_5,param_6);
  }
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 1434bc750 FUN_1434bc750 body=282 status=ok
// SIG undefined FUN_1434bc750(void)

void FUN_1434bc750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_38[0] = 0;
  local_30 = 0;
  pcVar2 = (char *)FUN_143590af0(param_3,local_res10,&local_48);
  if (*pcVar2 == '\0') {
    uVar3 = FUN_1435c8e40(&local_48,0x40a,param_2);
    FUN_1435cbe70(param_2,uVar3);
    piVar1 = (int *)(CONCAT44(uStack_3c,uStack_40) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (9 < ((byte)local_38[0] & 0x1f)) {
      if ((local_38[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_38);
      }
      else {
        FUN_143592150();
      }
    }
    local_38[0] = local_38[0] & 0xffffffe4 | 4;
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    FUN_1434bbf60(param_1,param_2,local_38,param_4,param_5,param_6);
  }
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 1434bc870 FUN_1434bc870 body=282 status=ok
// SIG undefined FUN_1434bc870(void)

void FUN_1434bc870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_38[0] = 0;
  local_30 = 0;
  pcVar2 = (char *)FUN_143590af0(param_3,local_res10,&local_48);
  if (*pcVar2 == '\0') {
    uVar3 = FUN_1435c8e40(&local_48,0x40a,param_2);
    FUN_1435cbe70(param_2,uVar3);
    piVar1 = (int *)(CONCAT44(uStack_3c,uStack_40) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (9 < ((byte)local_38[0] & 0x1f)) {
      if ((local_38[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_38);
      }
      else {
        FUN_143592150();
      }
    }
    local_38[0] = local_38[0] & 0xffffffe4 | 4;
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    FUN_1434bc0b0(param_1,param_2,local_38,param_4,param_5,param_6);
  }
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 1434bc990 FUN_1434bc990 body=43 status=ok
// SIG undefined FUN_1434bc990(void)

undefined8 * FUN_1434bc990(undefined8 *param_1)

{
  FUN_1435b8070();
  *(undefined4 *)(param_1 + 0x12) = 4;
  *param_1 = &PTR_FUN_145b18a00;
  return param_1;
}



// FUNCTION 1434bc9d0 FUN_1434bc9d0 body=305 status=ok
// SIG undefined FUN_1434bc9d0(void)

undefined8 * FUN_1434bc9d0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b14f30);
    *(undefined4 *)(puVar3 + 0x12) = 4;
    *puVar3 = &PTR_FUN_145b18a00;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b14f30);
    *(undefined4 *)(puVar3 + 0x12) = 4;
    *puVar3 = &PTR_FUN_145b18988;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x78);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18a60;
    uVar4 = Scaleform::GFx::NumberUtil::NaN();
    puVar3[10] = uVar4;
    uVar4 = Scaleform::GFx::NumberUtil::NaN();
    puVar3[0xb] = uVar4;
    uVar4 = Scaleform::GFx::NumberUtil::NaN();
    puVar3[0xc] = uVar4;
    puVar3[0xd] = 0x10000000000000;
    puVar3[0xe] = 0x7fefffffffffffff;
  }
  return param_1;
}



// FUNCTION 1434bcb20 FUN_1434bcb20 body=119 status=ok
// SIG undefined FUN_1434bcb20(void)

undefined8 FUN_1434bcb20(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  char *pcVar1;
  undefined1 local_res20 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  pcVar1 = (char *)FUN_143590af0(param_2,local_res20,&local_28);
  if (*pcVar1 != '\0') {
    if (9 < ((byte)*param_3 & 0x1f)) {
      if ((*param_3 >> 9 & 1) == 0) {
        FUN_1435920c0(param_3);
      }
      else {
        FUN_143592150();
      }
    }
    *param_3 = *param_3 & 0xffffffe4;
    *param_3 = *param_3 | 4;
    *(undefined8 *)(param_3 + 4) = local_28;
    *(undefined8 *)(param_3 + 6) = uStack_20;
    return 1;
  }
  return 0;
}



// FUNCTION 1434bcba0 FUN_1434bcba0 body=91 status=ok
// SIG undefined FUN_1434bcba0(void)

undefined8 * FUN_1434bcba0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18a60;
  uVar1 = Scaleform::GFx::NumberUtil::NaN();
  param_1[10] = uVar1;
  uVar1 = Scaleform::GFx::NumberUtil::NaN();
  param_1[0xb] = uVar1;
  uVar1 = Scaleform::GFx::NumberUtil::NaN();
  param_1[0xc] = uVar1;
  param_1[0xd] = 0x10000000000000;
  param_1[0xe] = 0x7fefffffffffffff;
  return param_1;
}



// FUNCTION 1434bcc10 FUN_1434bcc10 body=116 status=ok
// SIG undefined FUN_1434bcc10(void)

void FUN_1434bcc10(longlong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 200))();
  }
  ppuVar1 = &PTR_FUN_145b15460;
  lVar2 = 6;
  do {
    FUN_1434e7f40(param_2,ppuVar1);
    ppuVar1 = ppuVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1435b3fb0(param_1,param_2);
  return;
}



// FUNCTION 1434bcc90 FUN_1434bcc90 body=38 status=ok
// SIG undefined FUN_1434bcc90(void)

void FUN_1434bcc90(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001434bccb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 1434bccc0 FUN_1434bccc0 body=190 status=ok
// SIG undefined FUN_1434bccc0(void)

void FUN_1434bccc0(longlong param_1,uint *param_2,int *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 local_res18 [16];
  undefined8 local_18;
  longlong lStack_10;
  
  if (*param_3 == 0) {
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    *param_2 = *param_2 & 0xffffffe4;
    *param_2 = *param_2 | 4;
    param_2[4] = 0;
    param_2[5] = 0;
    *(longlong *)(param_2 + 6) = lStack_10;
    return;
  }
  if (*param_3 == 1) {
    pcVar3 = (char *)FUN_143590af0(param_4,local_res18,&local_18);
    if (*pcVar3 != '\0') {
      FUN_1434f06a0(param_2,local_18);
      return;
    }
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(&local_18,0x427,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(lStack_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 1434bcd90 FUN_1434bcd90 body=43 status=ok
// SIG undefined FUN_1434bcd90(void)

undefined8 * FUN_1434bcd90(undefined8 *param_1)

{
  FUN_1435b93d0();
  *(undefined4 *)(param_1 + 0x12) = 2;
  *param_1 = &PTR_FUN_145b18b38;
  return param_1;
}



// FUNCTION 1434bcde0 FUN_1434bcde0 body=333 status=ok
// SIG undefined FUN_1434bcde0(void)

void FUN_1434bcde0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint local_1e8 [2];
  longlong local_1e0;
  longlong local_1d8;
  undefined1 local_1d0 [24];
  longlong local_1b8 [3];
  undefined **local_1a0;
  uint local_198;
  undefined4 local_188;
  
  local_1e8[0] = 0;
  if (param_5 != 0) {
    pcVar3 = (char *)FUN_143590eb0(param_6,&param_5,local_1e8);
    if (*pcVar3 == '\0') {
      return;
    }
    if (0x14 < local_1e8[0]) {
      uVar4 = FUN_1435c8e40(&local_1e0,0x3ea,param_2);
      FUN_1435cbdf0(param_2,uVar4);
      piVar1 = (int *)(local_1d8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  FUN_143355730(local_1b8,(double)*(int *)(param_3 + 0x10));
  local_188 = 1;
  local_198 = local_198 ^ (local_198 ^ local_1e8[0]) & 0x1f;
  (**(code **)(local_1b8[0] + 0x18))(local_1b8);
  puVar5 = (undefined8 *)FUN_143355d40(local_1b8,local_1d0);
  lVar2 = *(longlong *)(param_2 + 0x10);
  uVar4 = *puVar5;
  uVar6 = FWmfMediaPlayer::GetSamples(local_1b8);
  local_1e0 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x218),uVar4,uVar6);
  *(int *)(local_1e0 + 0x18) = *(int *)(local_1e0 + 0x18) + 1;
  FUN_143590250(param_4,&local_1e0);
  piVar1 = (int *)(local_1e0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_1a0 = &PTR_FUN_145af1858;
  FUN_143353a80(local_1b8);
  return;
}



// FUNCTION 1434bcf40 FUN_1434bcf40 body=333 status=ok
// SIG undefined FUN_1434bcf40(void)

void FUN_1434bcf40(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint local_1e8 [2];
  longlong local_1e0;
  longlong local_1d8;
  undefined1 local_1d0 [24];
  longlong local_1b8 [3];
  undefined **local_1a0;
  uint local_198;
  undefined4 local_188;
  
  local_1e8[0] = 0;
  if (param_5 != 0) {
    pcVar3 = (char *)FUN_143590eb0(param_6,&param_5,local_1e8);
    if (*pcVar3 == '\0') {
      return;
    }
    if (0x14 < local_1e8[0]) {
      uVar4 = FUN_1435c8e40(&local_1e0,0x3ea,param_2);
      FUN_1435cbdf0(param_2,uVar4);
      piVar1 = (int *)(local_1d8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  FUN_143355730(local_1b8,(double)*(int *)(param_3 + 0x10));
  local_188 = 0;
  local_198 = local_198 ^ (local_198 ^ local_1e8[0]) & 0x1f;
  (**(code **)(local_1b8[0] + 0x18))(local_1b8);
  puVar5 = (undefined8 *)FUN_143355d40(local_1b8,local_1d0);
  lVar2 = *(longlong *)(param_2 + 0x10);
  uVar4 = *puVar5;
  uVar6 = FWmfMediaPlayer::GetSamples(local_1b8);
  local_1e0 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x218),uVar4,uVar6);
  *(int *)(local_1e0 + 0x18) = *(int *)(local_1e0 + 0x18) + 1;
  FUN_143590250(param_4,&local_1e0);
  piVar1 = (int *)(local_1e0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_1a0 = &PTR_FUN_145af1858;
  FUN_143353a80(local_1b8);
  return;
}



// FUNCTION 1434bd0a0 FUN_1434bd0a0 body=338 status=ok
// SIG undefined FUN_1434bd0a0(void)

void FUN_1434bd0a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_1e8 [2];
  longlong local_1e0;
  longlong local_1d8;
  undefined1 local_1d0 [24];
  longlong local_1b8 [3];
  undefined **local_1a0;
  uint local_198;
  undefined4 local_188;
  
  local_1e8[0] = 0;
  if (param_5 != 0) {
    pcVar3 = (char *)FUN_143590eb0(param_6,&param_5,local_1e8);
    if (*pcVar3 == '\0') {
      return;
    }
    if (local_1e8[0] - 1 < 0x15) {
      FUN_143355730(local_1b8,(double)*(int *)(param_3 + 0x10));
      local_188 = 2;
      local_198 = local_198 ^ (local_198 ^ local_1e8[0]) & 0x1f;
      (**(code **)(local_1b8[0] + 0x18))(local_1b8);
      puVar4 = (undefined8 *)FUN_143355d40(local_1b8,local_1d0);
      lVar2 = *(longlong *)(param_2 + 0x10);
      uVar6 = *puVar4;
      uVar5 = FWmfMediaPlayer::GetSamples(local_1b8);
      local_1e0 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x218),uVar6,uVar5);
      *(int *)(local_1e0 + 0x18) = *(int *)(local_1e0 + 0x18) + 1;
      FUN_143590250(param_4,&local_1e0);
      piVar1 = (int *)(local_1e0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      local_1a0 = &PTR_FUN_145af1858;
      FUN_143353a80(local_1b8);
      return;
    }
  }
  uVar6 = FUN_1435c8e40(&local_1e0,0x3ea,param_2);
  FUN_1435cbdf0(param_2,uVar6);
  piVar1 = (int *)(local_1d8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434bd200 FUN_1434bd200 body=347 status=ok
// SIG undefined FUN_1434bd200(void)

void FUN_1434bd200(undefined8 param_1,longlong param_2,uint *param_3,undefined8 param_4,int param_5,
                  byte *param_6)

{
  int *piVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong local_res18;
  uint local_98 [2];
  undefined1 local_90 [8];
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_68 [3];
  undefined **local_50;
  byte local_42;
  uint local_38;
  
  if ((*param_3 & 0x1f) - 2 < 2) {
    local_98[0] = 10;
    if ((param_5 != 0) && ((*param_6 & 0x1f) != 0)) {
      pcVar3 = (char *)FUN_143590eb0(param_6,&local_res18,local_98);
      if (*pcVar3 == '\0') {
        return;
      }
      if (0xe < local_98[0] - 2) {
        uVar2 = FUN_1435c8e40(local_90,0x3eb,param_2);
        FUN_1435cbdf0(param_2,uVar2);
        goto LAB_1434bd24f;
      }
    }
    FUN_143354ad0(local_68,param_3[4]);
    local_42 = local_42 & 0xfe;
    local_38 = local_38 ^ (local_38 ^ local_98[0]) & 0x1f;
    (**(code **)(local_68[0] + 0x18))(local_68);
    FUN_143355620(local_68,&local_80);
    local_res18 = FUN_143360a90(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),local_80,
                                local_78);
    *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
    FUN_143590250(param_4,&local_res18);
    piVar1 = (int *)(local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    local_50 = &PTR_FUN_145af1858;
    FUN_143353a80(local_68);
  }
  else {
    uVar2 = FUN_1435c8e40(local_90,0x3ec,param_2);
    FUN_1435cbe70(param_2,uVar2);
LAB_1434bd24f:
    piVar1 = (int *)(local_88 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 1434bd370 FUN_1434bd370 body=155 status=ok
// SIG undefined FUN_1434bd370(void)

void FUN_1434bd370(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 local_18 [4];
  undefined4 uStack_14;
  longlong lStack_10;
  
  if ((*param_3 & 0x1f) - 2 < 2) {
    uVar2 = param_3[4];
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
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_14,uVar2);
    *(longlong *)(param_4 + 6) = lStack_10;
  }
  else {
    uVar3 = FUN_1435c8e40(local_18,0x3ec,param_2);
    FUN_1435cbe70(param_2,uVar3);
    piVar1 = (int *)(lStack_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434bd420 FUN_1434bd420 body=153 status=ok
// SIG undefined FUN_1434bd420(void)

void FUN_1434bd420(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((byte)*param_3 & 0x1f) == 0xc) {
    lVar1 = *(longlong *)(param_3 + 4);
    uVar2 = FUN_1435caf60(param_2);
    lVar3 = FUN_1435b3ae0(uVar2);
    if (lVar1 == lVar3) {
      FUN_143590250(param_4,*(longlong *)(param_2 + 0x10) + 0x78);
      return;
    }
  }
  FUN_1434bd200(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 1434bd4d0 FUN_1434bd4d0 body=194 status=ok
// SIG undefined FUN_1434bd4d0(void)

void FUN_1434bd4d0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,uint *param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uStack_14;
  undefined8 uStack_10;
  
  if (((byte)*param_3 & 0x1f) == 0xc) {
    lVar1 = *(longlong *)(param_3 + 4);
    uVar2 = FUN_1435caf60(param_2);
    lVar3 = FUN_1435b3ae0(uVar2);
    if (lVar1 == lVar3) {
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
      *(ulonglong *)(param_4 + 4) = (ulonglong)uStack_14 << 0x20;
      *(undefined8 *)(param_4 + 6) = uStack_10;
      return;
    }
  }
  FUN_1434bd370(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 1434bd5a0 FUN_1434bd5a0 body=287 status=ok
// SIG undefined FUN_1434bd5a0(void)

void FUN_1434bd5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_40[0] = 0;
  local_38 = 0;
  pcVar2 = (char *)FUN_143590b70(param_3,local_res10,local_58);
  if (*pcVar2 == '\0') {
    uVar3 = FUN_1435c8e40(&local_50,0x40a,param_2);
    FUN_1435cbe70(param_2,uVar3);
    piVar1 = (int *)(CONCAT44(uStack_44,uStack_48) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (9 < ((byte)local_40[0] & 0x1f)) {
      if ((local_40[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_40);
      }
      else {
        FUN_143592150();
      }
    }
    local_40[0] = local_40[0] & 0xffffffe2 | 2;
    local_50 = local_58[0];
    local_30 = local_58[0];
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    FUN_1434bcde0(param_1,param_2,local_40,param_4,param_5,param_6);
  }
  if (9 < ((byte)local_40[0] & 0x1f)) {
    if ((local_40[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_40);
  }
  return;
}



// FUNCTION 1434bd6d0 FUN_1434bd6d0 body=287 status=ok
// SIG undefined FUN_1434bd6d0(void)

void FUN_1434bd6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_40[0] = 0;
  local_38 = 0;
  pcVar2 = (char *)FUN_143590b70(param_3,local_res10,local_58);
  if (*pcVar2 == '\0') {
    uVar3 = FUN_1435c8e40(&local_50,0x40a,param_2);
    FUN_1435cbe70(param_2,uVar3);
    piVar1 = (int *)(CONCAT44(uStack_44,uStack_48) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (9 < ((byte)local_40[0] & 0x1f)) {
      if ((local_40[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_40);
      }
      else {
        FUN_143592150();
      }
    }
    local_40[0] = local_40[0] & 0xffffffe2 | 2;
    local_50 = local_58[0];
    local_30 = local_58[0];
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    FUN_1434bcf40(param_1,param_2,local_40,param_4,param_5,param_6);
  }
  if (9 < ((byte)local_40[0] & 0x1f)) {
    if ((local_40[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_40);
  }
  return;
}



// FUNCTION 1434bd800 FUN_1434bd800 body=287 status=ok
// SIG undefined FUN_1434bd800(void)

void FUN_1434bd800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_40[0] = 0;
  local_38 = 0;
  pcVar2 = (char *)FUN_143590b70(param_3,local_res10,local_58);
  if (*pcVar2 == '\0') {
    uVar3 = FUN_1435c8e40(&local_50,0x40a,param_2);
    FUN_1435cbe70(param_2,uVar3);
    piVar1 = (int *)(CONCAT44(uStack_44,uStack_48) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (9 < ((byte)local_40[0] & 0x1f)) {
      if ((local_40[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_40);
      }
      else {
        FUN_143592150();
      }
    }
    local_40[0] = local_40[0] & 0xffffffe2 | 2;
    local_50 = local_58[0];
    local_30 = local_58[0];
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    FUN_1434bd0a0(param_1,param_2,local_40,param_4,param_5,param_6);
  }
  if (9 < ((byte)local_40[0] & 0x1f)) {
    if ((local_40[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_40);
  }
  return;
}



// FUNCTION 1434bd930 FUN_1434bd930 body=43 status=ok
// SIG undefined FUN_1434bd930(void)

undefined8 * FUN_1434bd930(undefined8 *param_1)

{
  FUN_1435b8070();
  *(undefined4 *)(param_1 + 0x12) = 2;
  *param_1 = &PTR_FUN_145b18bb0;
  return param_1;
}



// FUNCTION 1434bd970 FUN_1434bd970 body=261 status=ok
// SIG undefined FUN_1434bd970(void)

undefined8 * FUN_1434bd970(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b15db0);
    *(undefined4 *)(puVar3 + 0x12) = 2;
    *puVar3 = &PTR_FUN_145b18bb0;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b15db0);
    *(undefined4 *)(puVar3 + 0x12) = 2;
    *puVar3 = &PTR_FUN_145b18b38;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *(undefined4 *)(puVar3 + 10) = 0x80000000;
    *puVar3 = &PTR_ForEachChild_GC_145b18c10;
    *(undefined4 *)((longlong)puVar3 + 0x54) = 0x7fffffff;
  }
  return param_1;
}



// FUNCTION 1434bda90 FUN_1434bda90 body=115 status=ok
// SIG undefined FUN_1434bda90(void)

undefined8 FUN_1434bda90(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  char *pcVar1;
  undefined1 local_res20 [8];
  undefined4 local_28 [3];
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  pcVar1 = (char *)FUN_143590b70(param_2,local_res20,local_28);
  if (*pcVar1 != '\0') {
    if (9 < ((byte)*param_3 & 0x1f)) {
      if ((*param_3 >> 9 & 1) == 0) {
        FUN_1435920c0(param_3);
      }
      else {
        FUN_143592150();
      }
    }
    *param_3 = *param_3 & 0xffffffe2;
    *param_3 = *param_3 | 2;
    *(ulonglong *)(param_3 + 4) = CONCAT44(uStack_1c,local_28[0]);
    *(undefined8 *)(param_3 + 6) = uStack_18;
    return 1;
  }
  return 0;
}



// FUNCTION 1434bdb10 FUN_1434bdb10 body=47 status=ok
// SIG undefined FUN_1434bdb10(void)

undefined8 * FUN_1434bdb10(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 0x80000000;
  *param_1 = &PTR_ForEachChild_GC_145b18c10;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x7fffffff;
  return param_1;
}



// FUNCTION 1434bdb50 FUN_1434bdb50 body=116 status=ok
// SIG undefined FUN_1434bdb50(void)

void FUN_1434bdb50(longlong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 200))();
  }
  ppuVar1 = &PTR_FUN_145b16a70;
  lVar2 = 6;
  do {
    FUN_1434e7f40(param_2,ppuVar1);
    ppuVar1 = ppuVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1435b3fb0(param_1,param_2);
  return;
}



// FUNCTION 1434bdbd0 FUN_1434bdbd0 body=38 status=ok
// SIG undefined FUN_1434bdbd0(void)

void FUN_1434bdbd0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001434bdbf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_3,param_4,param_5);
  return;
}


