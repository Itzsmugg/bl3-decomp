// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c89880 sanitize body=276 status=ok
// SIG undefined sanitize(void)

undefined8
OT::ArrayOf<OT::OffsetTo<OT::Lookup,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
::sanitize(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar4 = param_1 + 2;
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,pbVar4,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar1 != '\0') {
      uVar5 = 0;
      uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (uVar2 != 0) {
        do {
          cVar1 = hb_sanitize_context_t::check_range(param_2,pbVar4,2);
          if (cVar1 == '\0') {
            return 0;
          }
          uVar3 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
          if ((uVar3 != 0) &&
             (cVar1 = Lookup::sanitize(param_3 + (ulonglong)uVar3,param_2), cVar1 == '\0')) {
            cVar1 = hb_sanitize_context_t::may_edit(param_2,pbVar4,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar4[0] = 0;
            pbVar4[1] = 0;
          }
          uVar5 = uVar5 + 1;
          pbVar4 = pbVar4 + 2;
        } while (uVar5 < uVar2);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c899a0 sanitize body=276 status=ok
// SIG undefined sanitize(void)

undefined8
OT::
ArrayOf<OT::OffsetTo<OT::PosLookup,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>::
sanitize(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar4 = param_1 + 2;
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,pbVar4,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar1 != '\0') {
      uVar5 = 0;
      uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (uVar2 != 0) {
        do {
          cVar1 = hb_sanitize_context_t::check_range(param_2,pbVar4,2);
          if (cVar1 == '\0') {
            return 0;
          }
          uVar3 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
          if ((uVar3 != 0) &&
             (cVar1 = PosLookup::sanitize(param_3 + (ulonglong)uVar3,param_2), cVar1 == '\0')) {
            cVar1 = hb_sanitize_context_t::may_edit(param_2,pbVar4,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar4[0] = 0;
            pbVar4[1] = 0;
          }
          uVar5 = uVar5 + 1;
          pbVar4 = pbVar4 + 2;
        } while (uVar5 < uVar2);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c89ac0 sanitize body=276 status=ok
// SIG undefined sanitize(void)

undefined8
OT::ArrayOf<OT::OffsetTo<OT::Rule,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>::
sanitize(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar4 = param_1 + 2;
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,pbVar4,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar1 != '\0') {
      uVar5 = 0;
      uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (uVar2 != 0) {
        do {
          cVar1 = hb_sanitize_context_t::check_range(param_2,pbVar4,2);
          if (cVar1 == '\0') {
            return 0;
          }
          uVar3 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
          if ((uVar3 != 0) &&
             (cVar1 = Rule::sanitize(param_3 + (ulonglong)uVar3,param_2), cVar1 == '\0')) {
            cVar1 = hb_sanitize_context_t::may_edit(param_2,pbVar4,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar4[0] = 0;
            pbVar4[1] = 0;
          }
          uVar5 = uVar5 + 1;
          pbVar4 = pbVar4 + 2;
        } while (uVar5 < uVar2);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c89be0 sanitize body=279 status=ok
// SIG undefined sanitize(void)

undefined8
OT::ArrayOf<OT::OffsetTo<OT::RuleSet,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
::sanitize(byte *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  uint uVar6;
  
  cVar2 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar2 != '\0') {
    pbVar5 = param_1 + 2;
    cVar2 = hb_sanitize_context_t::check_array
                      (param_2,pbVar5,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar2 != '\0') {
      uVar6 = 0;
      uVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (uVar3 != 0) {
        do {
          cVar2 = hb_sanitize_context_t::check_range(param_2,pbVar5,2);
          if (cVar2 == '\0') {
            return 0;
          }
          uVar4 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
          if ((uVar4 != 0) &&
             (lVar1 = param_3 + (ulonglong)uVar4,
             cVar2 = ArrayOf<OT::OffsetTo<OT::Rule,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
                     ::sanitize(lVar1,param_2,lVar1), cVar2 == '\0')) {
            cVar2 = hb_sanitize_context_t::may_edit(param_2,pbVar5,2);
            if (cVar2 == '\0') {
              return 0;
            }
            pbVar5[0] = 0;
            pbVar5[1] = 0;
          }
          uVar6 = uVar6 + 1;
          pbVar5 = pbVar5 + 2;
        } while (uVar6 < uVar3);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c89d00 sanitize body=276 status=ok
// SIG undefined sanitize(void)

undefined8
OT::
ArrayOf<OT::OffsetTo<OT::SubstLookup,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
::sanitize(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    pbVar4 = param_1 + 2;
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,pbVar4,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar1 != '\0') {
      uVar5 = 0;
      uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      if (uVar2 != 0) {
        do {
          cVar1 = hb_sanitize_context_t::check_range(param_2,pbVar4,2);
          if (cVar1 == '\0') {
            return 0;
          }
          uVar3 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
          if ((uVar3 != 0) &&
             (cVar1 = SubstLookup::sanitize(param_3 + (ulonglong)uVar3,param_2), cVar1 == '\0')) {
            cVar1 = hb_sanitize_context_t::may_edit(param_2,pbVar4,2);
            if (cVar1 == '\0') {
              return 0;
            }
            pbVar4[0] = 0;
            pbVar4[1] = 0;
          }
          uVar5 = uVar5 + 1;
          pbVar4 = pbVar4 + 2;
        } while (uVar5 < uVar2);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c89e20 sanitize body=251 status=ok
// SIG undefined sanitize(void)

undefined8
OT::ArrayOf<OT::Record<OT::LangSys>,OT::IntType<unsigned_short,2>_>::sanitize
          (byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 local_28 [16];
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((cVar1 == '\0') ||
     (cVar1 = hb_sanitize_context_t::check_array
                        (param_2,param_1 + 2,6,(ushort)*param_1 * 0x100 + (ushort)param_1[1]),
     cVar1 == '\0')) {
    return 0;
  }
  uVar4 = 0;
  uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (uVar2 != 0) {
    do {
      cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + uVar4 * 6 + 2,6);
      if ((cVar1 == '\0') ||
         (cVar1 = OffsetTo<OT::LangSys,OT::IntType<unsigned_short,2>_>::
                  sanitize<OT::Record<OT::LangSys>::sanitize_closure_t_const_*___ptr64>
                            (param_1 + uVar4 * 6 + 6,param_2,param_3,local_28), cVar1 == '\0')) {
        return 0;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar2);
  }
  return 1;
}



// FUNCTION 143c89f20 sanitize body=251 status=ok
// SIG undefined sanitize(void)

undefined8
OT::ArrayOf<OT::Record<OT::Script>,OT::IntType<unsigned_short,2>_>::sanitize
          (byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 local_28 [16];
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((cVar1 == '\0') ||
     (cVar1 = hb_sanitize_context_t::check_array
                        (param_2,param_1 + 2,6,(ushort)*param_1 * 0x100 + (ushort)param_1[1]),
     cVar1 == '\0')) {
    return 0;
  }
  uVar4 = 0;
  uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (uVar2 != 0) {
    do {
      cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + uVar4 * 6 + 2,6);
      if ((cVar1 == '\0') ||
         (cVar1 = OffsetTo<OT::Script,OT::IntType<unsigned_short,2>_>::
                  sanitize<OT::Record<OT::Script>::sanitize_closure_t_const_*___ptr64>
                            (param_1 + uVar4 * 6 + 6,param_2,param_3,local_28), cVar1 == '\0')) {
        return 0;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar2);
  }
  return 1;
}



// FUNCTION 143c8a020 sanitize body=196 status=ok
// SIG undefined sanitize(void)

undefined8
OT::ArrayOf<OT::EntryExitRecord,OT::IntType<unsigned_short,2>_>::sanitize
          (byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((cVar1 == '\0') ||
     (cVar1 = hb_sanitize_context_t::check_array
                        (param_2,param_1 + 2,4,(ushort)*param_1 * 0x100 + (ushort)param_1[1]),
     cVar1 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar5 = 0;
    uVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if (uVar3 != 0) {
      do {
        cVar1 = EntryExitRecord::sanitize(param_1 + uVar5 * 4 + 2,param_2,param_3);
        if (cVar1 == '\0') {
          return 0;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < uVar3);
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143c8a0f0 sanitize body=114 status=ok
// SIG undefined sanitize(void)

undefined8
OT::ArrayOf<OT::LookupRecord,OT::IntType<unsigned_short,2>_>::sanitize
          (byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,param_1 + 2,4,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8a170 sanitize body=252 status=ok
// SIG undefined sanitize(void)

undefined8
OT::ArrayOf<OT::MarkRecord,OT::IntType<unsigned_short,2>_>::sanitize
          (byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((cVar1 == '\0') ||
     (cVar1 = hb_sanitize_context_t::check_array
                        (param_2,param_1 + 2,4,(ushort)*param_1 * 0x100 + (ushort)param_1[1]),
     cVar1 == '\0')) {
    return 0;
  }
  uVar4 = 0;
  uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (uVar2 != 0) {
    do {
      cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + uVar4 * 4 + 2,4);
      if ((cVar1 == '\0') ||
         (cVar1 = OffsetTo<OT::Anchor,OT::IntType<unsigned_short,2>_>::sanitize
                            (param_1 + uVar4 * 4 + 4,param_2,param_3), cVar1 == '\0')) {
        return 0;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar2);
  }
  return 1;
}



// FUNCTION 143c8a270 sanitize body=148 status=ok
// SIG undefined sanitize(void)

undefined8
OT::OffsetTo<OT::Anchor,OT::IntType<unsigned_short,2>_>::sanitize
          (byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if ((uVar2 != 0) && (cVar1 = Anchor::sanitize(param_3 + (ulonglong)uVar2,param_2), cVar1 == '\0'))
  {
    cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return 1;
}



// FUNCTION 143c8a310 sanitize body=148 status=ok
// SIG undefined sanitize(void)

undefined8
OT::OffsetTo<OT::AttachList,OT::IntType<unsigned_short,2>_>::sanitize
          (byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if ((uVar2 != 0) &&
     (cVar1 = AttachList::sanitize(param_3 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
    cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return 1;
}



// FUNCTION 143c8a3b0 sanitize body=148 status=ok
// SIG undefined sanitize(void)

undefined8
OT::OffsetTo<OT::ClassDef,OT::IntType<unsigned_short,2>_>::sanitize
          (byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if ((uVar2 != 0) &&
     (cVar1 = ClassDef::sanitize(param_3 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
    cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return 1;
}



// FUNCTION 143c8a450 sanitize body=148 status=ok
// SIG undefined sanitize(void)

undefined8
OT::OffsetTo<OT::Coverage,OT::IntType<unsigned_short,2>_>::sanitize
          (byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if ((uVar2 != 0) &&
     (cVar1 = Coverage::sanitize(param_3 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
    cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return 1;
}



// FUNCTION 143c8a4f0 sanitize body=155 status=ok
// SIG undefined sanitize(void)

undefined8
OT::OffsetTo<OT::Coverage,OT::IntType<unsigned_int,4>_>::sanitize
          (byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,4);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  if ((uVar2 != 0) &&
     (cVar1 = Coverage::sanitize((ulonglong)uVar2 + param_3,param_2), cVar1 == '\0')) {
    cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,4);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 1;
}



// FUNCTION 143c8a590 sanitize body=148 status=ok
// SIG undefined sanitize(void)

undefined8
OT::OffsetTo<OT::Device,OT::IntType<unsigned_short,2>_>::sanitize
          (byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if ((uVar2 != 0) && (cVar1 = Device::sanitize(param_3 + (ulonglong)uVar2,param_2), cVar1 == '\0'))
  {
    cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return 1;
}



// FUNCTION 143c8a630 sanitize body=148 status=ok
// SIG undefined sanitize(void)

undefined8
OT::OffsetTo<OT::LigCaretList,OT::IntType<unsigned_short,2>_>::sanitize
          (byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if ((uVar2 != 0) &&
     (cVar1 = LigCaretList::sanitize(param_3 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
    cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return 1;
}



// FUNCTION 143c8a6d0 sanitize body=203 status=ok
// SIG undefined sanitize(void)

undefined1
OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>::sanitize
          (byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (uVar2 != 0) {
    param_3 = (ulonglong)uVar2 + param_3;
    cVar1 = hb_sanitize_context_t::check_range(param_2,param_3,2);
    if ((cVar1 == '\0') ||
       (cVar1 = HeadlessArrayOf<OT::IntType<unsigned_short,2>,OT::IntType<unsigned_short,2>_>::
                sanitize_shallow(param_3 + 2,param_2), cVar1 == '\0')) {
      cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
      if (cVar1 == '\0') {
        return 0;
      }
      param_1[0] = 0;
      param_1[1] = 0;
    }
    return 1;
  }
  return 1;
}



// FUNCTION 143c8a7a0 sanitize body=151 status=ok
// SIG undefined sanitize(void)

undefined8
OT::OffsetTo<OT::MarkArray,OT::IntType<unsigned_short,2>_>::sanitize
          (byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if ((uVar2 != 0) &&
     (param_3 = param_3 + (ulonglong)uVar2,
     cVar1 = ArrayOf<OT::MarkRecord,OT::IntType<unsigned_short,2>_>::sanitize
                       (param_3,param_2,param_3), cVar1 == '\0')) {
    cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return 1;
}



// FUNCTION 143c8a840 sanitize body=148 status=ok
// SIG undefined sanitize(void)

undefined8
OT::OffsetTo<OT::MarkGlyphSets,OT::IntType<unsigned_short,2>_>::sanitize
          (byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if ((uVar2 != 0) &&
     (cVar1 = MarkGlyphSets::sanitize(param_3 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
    cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return 1;
}



// FUNCTION 143c8a8e0 sanitize body=223 status=ok
// SIG undefined sanitize(void)

undefined8 OT::Record<OT::Feature>::sanitize(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  int local_18 [2];
  longlong local_10;
  
  local_18[0] = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
                (uint)param_1[3];
  local_10 = param_3;
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,6);
  if ((cVar1 != '\0') &&
     (cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 4,2), cVar1 != '\0')) {
    uVar2 = (ushort)param_1[4] * 0x100 + (ushort)param_1[5];
    if ((uVar2 != 0) &&
       (cVar1 = Feature::sanitize(param_3 + (ulonglong)uVar2,param_2,local_18), cVar1 == '\0')) {
      cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1 + 4,2);
      if (cVar1 == '\0') {
        return 0;
      }
      param_1[4] = 0;
      param_1[5] = 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 143c8a9c0 sanitize body=623 status=ok
// SIG undefined sanitize(void)

undefined8 OT::Sanitizer<OT::GDEF>::sanitize(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 local_48 [2];
  longlong local_40;
  longlong local_38;
  char local_30;
  int local_2c;
  undefined8 local_28;
  
  uVar3 = hb_font_funcs_reference();
  local_30 = '\0';
  local_28 = uVar3;
  lVar4 = hb_blob_get_data(uVar3,0);
  local_40 = lVar4;
  uVar2 = FSlateUpdatableInstanceBuffer::GetNumInstances(uVar3);
  local_38 = (ulonglong)uVar2 + lVar4;
  local_2c = 0;
  local_48[0] = 0;
  AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
  while( true ) {
    if (lVar4 == 0) {
      AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
      hb_blob_destroy(uVar3);
      return param_1;
    }
    cVar1 = GDEF::sanitize(lVar4,local_48);
    if (cVar1 != '\0') break;
    if ((local_2c == 0) || (local_30 != '\0')) goto LAB_143c8abcc;
    lVar4 = hb_blob_get_data_writable(param_1,0);
    FSlateUpdatableInstanceBuffer::GetNumInstances(param_1);
    uVar3 = local_28;
    if (lVar4 == 0) goto LAB_143c8abcc;
    local_30 = '\x01';
    lVar4 = hb_blob_get_data(local_28,0);
    local_40 = lVar4;
    uVar2 = FSlateUpdatableInstanceBuffer::GetNumInstances(uVar3);
    local_38 = (ulonglong)uVar2 + lVar4;
    local_2c = 0;
    local_48[0] = 0;
    AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
  }
  if (local_2c != 0) {
    local_2c = 0;
    cVar1 = GDEF::sanitize(lVar4,local_48);
    if (local_2c != 0) {
      cVar1 = '\0';
    }
  }
LAB_143c8abcc:
  AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
  hb_blob_destroy(local_28);
  if (cVar1 != '\0') {
    return param_1;
  }
  hb_blob_destroy(param_1);
  uVar3 = hb_blob_get_empty();
  return uVar3;
}



// FUNCTION 143c8ac30 sanitize body=4415 status=ok
// SIG undefined sanitize(void)

undefined8 OT::Sanitizer<OT::GPOS>::sanitize(undefined8 param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  ushort uVar8;
  ulonglong uVar9;
  undefined2 uVar10;
  char cVar11;
  short sVar12;
  short sVar13;
  byte *pbVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 uVar20;
  byte *pbVar21;
  byte *pbVar22;
  int local_58 [2];
  byte *local_50;
  byte *pbStack_48;
  char local_40;
  uint local_3c;
  undefined8 local_38;
  
  local_58[0] = 0;
  local_50 = (byte *)0x0;
  pbStack_48 = (byte *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_38 = hb_font_funcs_reference();
  local_40 = '\0';
  local_50 = (byte *)hb_blob_get_data(local_38,0);
  uVar6 = FSlateUpdatableInstanceBuffer::GetNumInstances(local_38);
  pbStack_48 = local_50 + uVar6;
  local_3c = 0;
  local_58[0] = 0;
  AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
  pbVar3 = local_50;
  do {
    local_50 = pbVar3;
    if (pbVar3 == (byte *)0x0) {
      AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
      hb_blob_destroy(local_38);
      return param_1;
    }
    uVar6 = 0x100;
    local_50._0_4_ = (int)pbVar3;
    iVar4 = (int)local_50;
    if ((pbStack_48 < pbVar3) || ((uint)((int)pbStack_48 - (int)local_50) < 4)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    pbVar1 = pbVar3 + 4;
    sVar12 = 1;
    AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
    sVar13 = (short)uVar6;
    if ((cVar5 == '\0') ||
       ((ushort)((short)((uint)*pbVar3 * (uVar6 & 0xffff)) + (ushort)pbVar3[1]) != sVar12)) {
LAB_143c8b4b7:
      cVar5 = '\0';
    }
    else {
      if ((pbVar1 < local_50) ||
         ((pbStack_48 < pbVar1 || ((uint)((int)pbStack_48 - (int)pbVar1) < 2)))) {
        cVar5 = '\0';
      }
      else {
        cVar5 = (char)sVar12;
      }
      AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
      if (cVar5 == '\0') goto LAB_143c8b4b7;
      uVar8 = (ushort)*pbVar1 * sVar13 + (ushort)pbVar3[5];
      if (uVar8 != 0) {
        cVar5 = ArrayOf<OT::Record<OT::Script>,OT::IntType<unsigned_short,2>_>::sanitize
                          (pbVar3 + uVar8,local_58,pbVar3 + uVar8);
        if (cVar5 == '\0') {
          if (local_3c < 0x20) {
            local_3c = local_3c + 1;
            uVar10 = 0;
            AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
            if (local_40 != (char)uVar10) {
              *(undefined2 *)pbVar1 = uVar10;
              goto LAB_143c8af0b;
            }
          }
          goto LAB_143c8b4b7;
        }
LAB_143c8af0b:
        sVar13 = 0x100;
      }
      pbVar1 = pbVar3 + 6;
      if (((pbVar1 < local_50) || (pbStack_48 < pbVar1)) ||
         ((uint)((int)pbStack_48 - (int)pbVar1) < 2)) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      uVar9 = 0;
      cVar11 = '\x01';
      AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
      if (cVar5 == '\0') goto LAB_143c8b4b7;
      uVar8 = (ushort)*pbVar1 * sVar13 + (ushort)pbVar3[7];
      if (uVar8 != 0) {
        pbVar2 = pbVar3 + uVar8;
        if (((pbVar2 < local_50) || (pbStack_48 < pbVar2)) ||
           ((uint)((int)pbStack_48 - (int)pbVar2) < 2)) {
          cVar11 = '\0';
        }
        pcVar7 = "OUT-OF-RANGE";
        pbVar14 = pbVar2 + 2;
        if (cVar11 != '\0') {
          pcVar7 = "OK";
        }
        uVar20 = 2;
        pcVar17 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s";
        uVar16 = 0;
        uVar15 = (ulonglong)(local_58[0] + 1);
        pbVar18 = pbVar2;
        pbVar19 = pbVar14;
        pbVar21 = local_50;
        pbVar22 = pbStack_48;
        AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
        if ((cVar11 == '\0') ||
           (cVar5 = hb_sanitize_context_t::check_array
                              (local_58,pbVar14,6,(ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1],uVar15
                               ,uVar16,pcVar17,pbVar18,pbVar19,uVar20,pbVar21,pbVar22,pcVar7),
           cVar5 == '\0')) {
LAB_143c8b122:
          if (local_3c < 0x20) {
            local_3c = local_3c + 1;
            uVar10 = 0;
            AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
            if (local_40 != (char)uVar10) {
              *(undefined2 *)pbVar1 = uVar10;
              sVar13 = 0x100;
              goto LAB_143c8b0e8;
            }
          }
          goto LAB_143c8b4b7;
        }
        uVar8 = (ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1];
        if (uVar8 != 0) {
          do {
            cVar5 = Record<OT::Feature>::sanitize(pbVar2 + uVar9 * 6 + 2,local_58,pbVar2);
            if (cVar5 == '\0') goto LAB_143c8b122;
            uVar6 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar6;
          } while (uVar6 < uVar8);
        }
        sVar13 = 0x100;
      }
LAB_143c8b0e8:
      pbVar1 = pbVar3 + 8;
      if (((pbVar1 < local_50) || (pbStack_48 < pbVar1)) ||
         ((uint)((int)pbStack_48 - (int)pbVar1) < 2)) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
      if (cVar5 == '\0') goto LAB_143c8b4b7;
      uVar8 = (ushort)*pbVar1 * sVar13 + (ushort)pbVar3[9];
      if (uVar8 != 0) {
        cVar5 = ArrayOf<OT::OffsetTo<OT::Lookup,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
                ::sanitize(pbVar3 + uVar8,local_58,pbVar3 + uVar8);
        if (cVar5 == '\0') {
          if (local_3c < 0x20) {
            local_3c = local_3c + 1;
            uVar10 = 0;
            AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
            if (local_40 != (char)uVar10) {
              *(undefined2 *)pbVar1 = uVar10;
              goto LAB_143c8b300;
            }
          }
          goto LAB_143c8b4b7;
        }
LAB_143c8b300:
        sVar13 = 0x100;
      }
      if (((pbVar1 < local_50) || (pbStack_48 < pbVar1)) ||
         ((uint)((int)pbStack_48 - (int)pbVar1) < 2)) {
        cVar11 = '\0';
      }
      else {
        cVar11 = '\x01';
      }
      cVar5 = '\x01';
      AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
      if (cVar11 != '\0') {
        uVar8 = (ushort)*pbVar1 * sVar13 + (ushort)pbVar3[9];
        if (uVar8 != 0) {
          cVar5 = ArrayOf<OT::OffsetTo<OT::PosLookup,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
                  ::sanitize(pbVar3 + uVar8,local_58,pbVar3 + uVar8);
          if (cVar5 == '\0') {
            if (local_3c < 0x20) {
              local_3c = local_3c + 1;
              uVar10 = 0;
              AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
              if (local_40 != (char)uVar10) {
                *(undefined2 *)pbVar1 = uVar10;
                goto LAB_143c8b45e;
              }
            }
            cVar5 = '\0';
          }
          else {
LAB_143c8b45e:
            cVar5 = '\x01';
          }
          if (cVar5 == '\0') goto LAB_143c8b4c3;
          sVar13 = 0x100;
        }
        if (local_3c == 0) goto LAB_143c8bd4c;
        local_3c = 0;
        if (((pbVar3 < local_50) || (pbStack_48 < pbVar3)) || ((uint)((int)pbStack_48 - iVar4) < 4))
        {
          cVar5 = '\0';
        }
        else {
          cVar5 = '\x01';
        }
        pbVar1 = pbVar3 + 4;
        sVar12 = 1;
        AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
        if ((cVar5 == '\0') || ((ushort)((ushort)*pbVar3 * sVar13 + (ushort)pbVar3[1]) != sVar12))
        goto LAB_143c8bd39;
        if ((pbVar1 < local_50) ||
           ((pbStack_48 < pbVar1 || ((uint)((int)pbStack_48 - (int)pbVar1) < 2)))) {
          cVar5 = '\0';
        }
        else {
          cVar5 = (char)sVar12;
        }
        AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
        if (cVar5 == '\0') goto LAB_143c8bd39;
        uVar8 = (ushort)*pbVar1 * sVar13 + (ushort)pbVar3[5];
        if (uVar8 != 0) {
          cVar5 = ArrayOf<OT::Record<OT::Script>,OT::IntType<unsigned_short,2>_>::sanitize
                            (pbVar3 + uVar8,local_58,pbVar3 + uVar8);
          if (cVar5 == '\0') {
            if (0x1f < local_3c) goto LAB_143c8bd39;
            local_3c = local_3c + 1;
            uVar10 = 0;
            AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
            if (local_40 == (char)uVar10) goto LAB_143c8bd39;
            *(undefined2 *)pbVar1 = uVar10;
          }
          sVar13 = 0x100;
        }
        pbVar1 = pbVar3 + 6;
        if (((pbVar1 < local_50) || (pbStack_48 < pbVar1)) ||
           ((uint)((int)pbStack_48 - (int)pbVar1) < 2)) {
          cVar5 = '\0';
        }
        else {
          cVar5 = '\x01';
        }
        uVar9 = 0;
        cVar11 = '\x01';
        AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
        if (cVar5 == '\0') goto LAB_143c8bd39;
        uVar8 = (ushort)*pbVar1 * sVar13 + (ushort)pbVar3[7];
        if (uVar8 == 0) goto LAB_143c8b9ac;
        pbVar2 = pbVar3 + uVar8;
        if (((pbVar2 < local_50) || (pbStack_48 < pbVar2)) ||
           ((uint)((int)pbStack_48 - (int)pbVar2) < 2)) {
          cVar11 = '\0';
        }
        pbVar14 = pbVar2 + 2;
        pcVar7 = "OUT-OF-RANGE";
        if (cVar11 != '\0') {
          pcVar7 = "OK";
        }
        uVar20 = 2;
        pcVar17 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s";
        uVar16 = 0;
        uVar15 = (ulonglong)(local_58[0] + 1);
        pbVar18 = pbVar2;
        pbVar19 = pbVar14;
        pbVar21 = local_50;
        pbVar22 = pbStack_48;
        AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
        if ((cVar11 == '\0') ||
           (cVar5 = hb_sanitize_context_t::check_array
                              (local_58,pbVar14,6,(ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1],uVar15
                               ,uVar16,pcVar17,pbVar18,pbVar19,uVar20,pbVar21,pbVar22,pcVar7),
           cVar5 == '\0')) break;
        sVar13 = 0x100;
        uVar8 = (ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1];
        if (uVar8 == 0) goto LAB_143c8b9ac;
        goto LAB_143c8b974;
      }
      cVar5 = '\0';
    }
LAB_143c8b4c3:
    if ((local_3c == 0) || (local_40 != '\0')) goto LAB_143c8bd4c;
    local_50 = (byte *)hb_blob_get_data_writable(param_1,0);
    uVar6 = FSlateUpdatableInstanceBuffer::GetNumInstances(param_1);
    pbStack_48 = local_50 + uVar6;
    if (local_50 == (byte *)0x0) goto LAB_143c8bd4c;
    local_40 = '\x01';
    local_50 = (byte *)hb_blob_get_data(local_38,0);
    uVar6 = FSlateUpdatableInstanceBuffer::GetNumInstances(local_38);
    pbStack_48 = local_50 + uVar6;
    local_3c = 0;
    local_58[0] = 0;
    AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
    pbVar3 = local_50;
  } while( true );
LAB_143c8b9df:
  if (local_3c < 0x20) {
    local_3c = local_3c + 1;
    uVar10 = 0;
    AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
    if (local_40 != (char)uVar10) {
      *(undefined2 *)pbVar1 = uVar10;
      sVar13 = 0x100;
      goto LAB_143c8b9ac;
    }
  }
  goto LAB_143c8bd39;
  while (uVar6 = (int)uVar9 + 1, uVar9 = (ulonglong)uVar6, uVar6 < uVar8) {
LAB_143c8b974:
    cVar5 = Record<OT::Feature>::sanitize(pbVar2 + uVar9 * 6 + 2,local_58,pbVar2);
    if (cVar5 == '\0') goto LAB_143c8b9df;
  }
  sVar13 = 0x100;
LAB_143c8b9ac:
  pbVar1 = pbVar3 + 8;
  if (((pbVar1 < local_50) || (pbStack_48 < pbVar1)) || ((uint)((int)pbStack_48 - (int)pbVar1) < 2))
  {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
  if (cVar5 != '\0') {
    uVar8 = (ushort)*pbVar1 * sVar13 + (ushort)pbVar3[9];
    if (uVar8 != 0) {
      cVar5 = ArrayOf<OT::OffsetTo<OT::Lookup,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
              ::sanitize(pbVar3 + uVar8,local_58,pbVar3 + uVar8);
      if (cVar5 == '\0') {
        if (local_3c < 0x20) {
          local_3c = local_3c + 1;
          uVar10 = 0;
          AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
          if (local_40 != (char)uVar10) {
            *(undefined2 *)pbVar1 = uVar10;
            goto LAB_143c8bbc4;
          }
        }
        goto LAB_143c8bd39;
      }
LAB_143c8bbc4:
      sVar13 = 0x100;
    }
    if (((pbVar1 < local_50) || (pbStack_48 < pbVar1)) ||
       ((uint)((int)pbStack_48 - (int)pbVar1) < 2)) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x01';
    }
    cVar5 = '\x01';
    AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
    if (cVar11 == '\0') {
      cVar5 = '\0';
      goto LAB_143c8bd3e;
    }
    uVar8 = (ushort)*pbVar1 * sVar13 + (ushort)pbVar3[9];
    if (uVar8 == 0) goto LAB_143c8bd3e;
    cVar5 = ArrayOf<OT::OffsetTo<OT::PosLookup,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
            ::sanitize(pbVar3 + uVar8,local_58,pbVar3 + uVar8);
    if (cVar5 == '\0') {
      if (local_3c < 0x20) {
        local_3c = local_3c + 1;
        uVar10 = 0;
        AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
        if (local_40 != (char)uVar10) {
          *(undefined2 *)pbVar1 = uVar10;
          goto LAB_143c8bd25;
        }
      }
      cVar5 = '\0';
    }
    else {
LAB_143c8bd25:
      cVar5 = '\x01';
    }
    goto LAB_143c8bd3e;
  }
LAB_143c8bd39:
  cVar5 = '\0';
LAB_143c8bd3e:
  if (local_3c != 0) {
    cVar5 = '\0';
  }
LAB_143c8bd4c:
  hb_sanitize_context_t::end_processing(local_58);
  if (cVar5 == '\0') {
    hb_blob_destroy(param_1);
    param_1 = hb_blob_get_empty();
  }
  return param_1;
}



// FUNCTION 143c8bd70 sanitize body=4415 status=ok
// SIG undefined sanitize(void)

undefined8 OT::Sanitizer<OT::GSUB>::sanitize(undefined8 param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  ushort uVar8;
  ulonglong uVar9;
  undefined2 uVar10;
  char cVar11;
  short sVar12;
  short sVar13;
  byte *pbVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 uVar20;
  byte *pbVar21;
  byte *pbVar22;
  int local_58 [2];
  byte *local_50;
  byte *pbStack_48;
  char local_40;
  uint local_3c;
  undefined8 local_38;
  
  local_58[0] = 0;
  local_50 = (byte *)0x0;
  pbStack_48 = (byte *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_38 = hb_font_funcs_reference();
  local_40 = '\0';
  local_50 = (byte *)hb_blob_get_data(local_38,0);
  uVar6 = FSlateUpdatableInstanceBuffer::GetNumInstances(local_38);
  pbStack_48 = local_50 + uVar6;
  local_3c = 0;
  local_58[0] = 0;
  AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
  pbVar3 = local_50;
  do {
    local_50 = pbVar3;
    if (pbVar3 == (byte *)0x0) {
      AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
      hb_blob_destroy(local_38);
      return param_1;
    }
    uVar6 = 0x100;
    local_50._0_4_ = (int)pbVar3;
    iVar4 = (int)local_50;
    if ((pbStack_48 < pbVar3) || ((uint)((int)pbStack_48 - (int)local_50) < 4)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    pbVar1 = pbVar3 + 4;
    sVar12 = 1;
    AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
    sVar13 = (short)uVar6;
    if ((cVar5 == '\0') ||
       ((ushort)((short)((uint)*pbVar3 * (uVar6 & 0xffff)) + (ushort)pbVar3[1]) != sVar12)) {
LAB_143c8c5f7:
      cVar5 = '\0';
    }
    else {
      if ((pbVar1 < local_50) ||
         ((pbStack_48 < pbVar1 || ((uint)((int)pbStack_48 - (int)pbVar1) < 2)))) {
        cVar5 = '\0';
      }
      else {
        cVar5 = (char)sVar12;
      }
      AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
      if (cVar5 == '\0') goto LAB_143c8c5f7;
      uVar8 = (ushort)*pbVar1 * sVar13 + (ushort)pbVar3[5];
      if (uVar8 != 0) {
        cVar5 = ArrayOf<OT::Record<OT::Script>,OT::IntType<unsigned_short,2>_>::sanitize
                          (pbVar3 + uVar8,local_58,pbVar3 + uVar8);
        if (cVar5 == '\0') {
          if (local_3c < 0x20) {
            local_3c = local_3c + 1;
            uVar10 = 0;
            AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
            if (local_40 != (char)uVar10) {
              *(undefined2 *)pbVar1 = uVar10;
              goto LAB_143c8c04b;
            }
          }
          goto LAB_143c8c5f7;
        }
LAB_143c8c04b:
        sVar13 = 0x100;
      }
      pbVar1 = pbVar3 + 6;
      if (((pbVar1 < local_50) || (pbStack_48 < pbVar1)) ||
         ((uint)((int)pbStack_48 - (int)pbVar1) < 2)) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      uVar9 = 0;
      cVar11 = '\x01';
      AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
      if (cVar5 == '\0') goto LAB_143c8c5f7;
      uVar8 = (ushort)*pbVar1 * sVar13 + (ushort)pbVar3[7];
      if (uVar8 != 0) {
        pbVar2 = pbVar3 + uVar8;
        if (((pbVar2 < local_50) || (pbStack_48 < pbVar2)) ||
           ((uint)((int)pbStack_48 - (int)pbVar2) < 2)) {
          cVar11 = '\0';
        }
        pcVar7 = "OUT-OF-RANGE";
        pbVar14 = pbVar2 + 2;
        if (cVar11 != '\0') {
          pcVar7 = "OK";
        }
        uVar20 = 2;
        pcVar17 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s";
        uVar16 = 0;
        uVar15 = (ulonglong)(local_58[0] + 1);
        pbVar18 = pbVar2;
        pbVar19 = pbVar14;
        pbVar21 = local_50;
        pbVar22 = pbStack_48;
        AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
        if ((cVar11 == '\0') ||
           (cVar5 = hb_sanitize_context_t::check_array
                              (local_58,pbVar14,6,(ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1],uVar15
                               ,uVar16,pcVar17,pbVar18,pbVar19,uVar20,pbVar21,pbVar22,pcVar7),
           cVar5 == '\0')) {
LAB_143c8c262:
          if (local_3c < 0x20) {
            local_3c = local_3c + 1;
            uVar10 = 0;
            AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
            if (local_40 != (char)uVar10) {
              *(undefined2 *)pbVar1 = uVar10;
              sVar13 = 0x100;
              goto LAB_143c8c228;
            }
          }
          goto LAB_143c8c5f7;
        }
        uVar8 = (ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1];
        if (uVar8 != 0) {
          do {
            cVar5 = Record<OT::Feature>::sanitize(pbVar2 + uVar9 * 6 + 2,local_58,pbVar2);
            if (cVar5 == '\0') goto LAB_143c8c262;
            uVar6 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar6;
          } while (uVar6 < uVar8);
        }
        sVar13 = 0x100;
      }
LAB_143c8c228:
      pbVar1 = pbVar3 + 8;
      if (((pbVar1 < local_50) || (pbStack_48 < pbVar1)) ||
         ((uint)((int)pbStack_48 - (int)pbVar1) < 2)) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
      if (cVar5 == '\0') goto LAB_143c8c5f7;
      uVar8 = (ushort)*pbVar1 * sVar13 + (ushort)pbVar3[9];
      if (uVar8 != 0) {
        cVar5 = ArrayOf<OT::OffsetTo<OT::Lookup,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
                ::sanitize(pbVar3 + uVar8,local_58,pbVar3 + uVar8);
        if (cVar5 == '\0') {
          if (local_3c < 0x20) {
            local_3c = local_3c + 1;
            uVar10 = 0;
            AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
            if (local_40 != (char)uVar10) {
              *(undefined2 *)pbVar1 = uVar10;
              goto LAB_143c8c440;
            }
          }
          goto LAB_143c8c5f7;
        }
LAB_143c8c440:
        sVar13 = 0x100;
      }
      if (((pbVar1 < local_50) || (pbStack_48 < pbVar1)) ||
         ((uint)((int)pbStack_48 - (int)pbVar1) < 2)) {
        cVar11 = '\0';
      }
      else {
        cVar11 = '\x01';
      }
      cVar5 = '\x01';
      AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
      if (cVar11 != '\0') {
        uVar8 = (ushort)*pbVar1 * sVar13 + (ushort)pbVar3[9];
        if (uVar8 != 0) {
          cVar5 = ArrayOf<OT::OffsetTo<OT::SubstLookup,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
                  ::sanitize(pbVar3 + uVar8,local_58,pbVar3 + uVar8);
          if (cVar5 == '\0') {
            if (local_3c < 0x20) {
              local_3c = local_3c + 1;
              uVar10 = 0;
              AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
              if (local_40 != (char)uVar10) {
                *(undefined2 *)pbVar1 = uVar10;
                goto LAB_143c8c59e;
              }
            }
            cVar5 = '\0';
          }
          else {
LAB_143c8c59e:
            cVar5 = '\x01';
          }
          if (cVar5 == '\0') goto LAB_143c8c603;
          sVar13 = 0x100;
        }
        if (local_3c == 0) goto LAB_143c8ce8c;
        local_3c = 0;
        if (((pbVar3 < local_50) || (pbStack_48 < pbVar3)) || ((uint)((int)pbStack_48 - iVar4) < 4))
        {
          cVar5 = '\0';
        }
        else {
          cVar5 = '\x01';
        }
        pbVar1 = pbVar3 + 4;
        sVar12 = 1;
        AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
        if ((cVar5 == '\0') || ((ushort)((ushort)*pbVar3 * sVar13 + (ushort)pbVar3[1]) != sVar12))
        goto LAB_143c8ce79;
        if ((pbVar1 < local_50) ||
           ((pbStack_48 < pbVar1 || ((uint)((int)pbStack_48 - (int)pbVar1) < 2)))) {
          cVar5 = '\0';
        }
        else {
          cVar5 = (char)sVar12;
        }
        AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
        if (cVar5 == '\0') goto LAB_143c8ce79;
        uVar8 = (ushort)*pbVar1 * sVar13 + (ushort)pbVar3[5];
        if (uVar8 != 0) {
          cVar5 = ArrayOf<OT::Record<OT::Script>,OT::IntType<unsigned_short,2>_>::sanitize
                            (pbVar3 + uVar8,local_58,pbVar3 + uVar8);
          if (cVar5 == '\0') {
            if (0x1f < local_3c) goto LAB_143c8ce79;
            local_3c = local_3c + 1;
            uVar10 = 0;
            AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
            if (local_40 == (char)uVar10) goto LAB_143c8ce79;
            *(undefined2 *)pbVar1 = uVar10;
          }
          sVar13 = 0x100;
        }
        pbVar1 = pbVar3 + 6;
        if (((pbVar1 < local_50) || (pbStack_48 < pbVar1)) ||
           ((uint)((int)pbStack_48 - (int)pbVar1) < 2)) {
          cVar5 = '\0';
        }
        else {
          cVar5 = '\x01';
        }
        uVar9 = 0;
        cVar11 = '\x01';
        AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
        if (cVar5 == '\0') goto LAB_143c8ce79;
        uVar8 = (ushort)*pbVar1 * sVar13 + (ushort)pbVar3[7];
        if (uVar8 == 0) goto LAB_143c8caec;
        pbVar2 = pbVar3 + uVar8;
        if (((pbVar2 < local_50) || (pbStack_48 < pbVar2)) ||
           ((uint)((int)pbStack_48 - (int)pbVar2) < 2)) {
          cVar11 = '\0';
        }
        pbVar14 = pbVar2 + 2;
        pcVar7 = "OUT-OF-RANGE";
        if (cVar11 != '\0') {
          pcVar7 = "OK";
        }
        uVar20 = 2;
        pcVar17 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s";
        uVar16 = 0;
        uVar15 = (ulonglong)(local_58[0] + 1);
        pbVar18 = pbVar2;
        pbVar19 = pbVar14;
        pbVar21 = local_50;
        pbVar22 = pbStack_48;
        AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
        if ((cVar11 == '\0') ||
           (cVar5 = hb_sanitize_context_t::check_array
                              (local_58,pbVar14,6,(ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1],uVar15
                               ,uVar16,pcVar17,pbVar18,pbVar19,uVar20,pbVar21,pbVar22,pcVar7),
           cVar5 == '\0')) break;
        sVar13 = 0x100;
        uVar8 = (ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1];
        if (uVar8 == 0) goto LAB_143c8caec;
        goto LAB_143c8cab4;
      }
      cVar5 = '\0';
    }
LAB_143c8c603:
    if ((local_3c == 0) || (local_40 != '\0')) goto LAB_143c8ce8c;
    local_50 = (byte *)hb_blob_get_data_writable(param_1,0);
    uVar6 = FSlateUpdatableInstanceBuffer::GetNumInstances(param_1);
    pbStack_48 = local_50 + uVar6;
    if (local_50 == (byte *)0x0) goto LAB_143c8ce8c;
    local_40 = '\x01';
    local_50 = (byte *)hb_blob_get_data(local_38,0);
    uVar6 = FSlateUpdatableInstanceBuffer::GetNumInstances(local_38);
    pbStack_48 = local_50 + uVar6;
    local_3c = 0;
    local_58[0] = 0;
    AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
    pbVar3 = local_50;
  } while( true );
LAB_143c8cb1f:
  if (local_3c < 0x20) {
    local_3c = local_3c + 1;
    uVar10 = 0;
    AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
    if (local_40 != (char)uVar10) {
      *(undefined2 *)pbVar1 = uVar10;
      sVar13 = 0x100;
      goto LAB_143c8caec;
    }
  }
  goto LAB_143c8ce79;
  while (uVar6 = (int)uVar9 + 1, uVar9 = (ulonglong)uVar6, uVar6 < uVar8) {
LAB_143c8cab4:
    cVar5 = Record<OT::Feature>::sanitize(pbVar2 + uVar9 * 6 + 2,local_58,pbVar2);
    if (cVar5 == '\0') goto LAB_143c8cb1f;
  }
  sVar13 = 0x100;
LAB_143c8caec:
  pbVar1 = pbVar3 + 8;
  if (((pbVar1 < local_50) || (pbStack_48 < pbVar1)) || ((uint)((int)pbStack_48 - (int)pbVar1) < 2))
  {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
  if (cVar5 != '\0') {
    uVar8 = (ushort)*pbVar1 * sVar13 + (ushort)pbVar3[9];
    if (uVar8 != 0) {
      cVar5 = ArrayOf<OT::OffsetTo<OT::Lookup,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
              ::sanitize(pbVar3 + uVar8,local_58,pbVar3 + uVar8);
      if (cVar5 == '\0') {
        if (local_3c < 0x20) {
          local_3c = local_3c + 1;
          uVar10 = 0;
          AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
          if (local_40 != (char)uVar10) {
            *(undefined2 *)pbVar1 = uVar10;
            goto LAB_143c8cd04;
          }
        }
        goto LAB_143c8ce79;
      }
LAB_143c8cd04:
      sVar13 = 0x100;
    }
    if (((pbVar1 < local_50) || (pbStack_48 < pbVar1)) ||
       ((uint)((int)pbStack_48 - (int)pbVar1) < 2)) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x01';
    }
    cVar5 = '\x01';
    AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
    if (cVar11 == '\0') {
      cVar5 = '\0';
      goto LAB_143c8ce7e;
    }
    uVar8 = (ushort)*pbVar1 * sVar13 + (ushort)pbVar3[9];
    if (uVar8 == 0) goto LAB_143c8ce7e;
    cVar5 = ArrayOf<OT::OffsetTo<OT::SubstLookup,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
            ::sanitize(pbVar3 + uVar8,local_58,pbVar3 + uVar8);
    if (cVar5 == '\0') {
      if (local_3c < 0x20) {
        local_3c = local_3c + 1;
        uVar10 = 0;
        AK::MemoryMgr::StartProfileThreadUsage(0x45d39e20);
        if (local_40 != (char)uVar10) {
          *(undefined2 *)pbVar1 = uVar10;
          goto LAB_143c8ce65;
        }
      }
      cVar5 = '\0';
    }
    else {
LAB_143c8ce65:
      cVar5 = '\x01';
    }
    goto LAB_143c8ce7e;
  }
LAB_143c8ce79:
  cVar5 = '\0';
LAB_143c8ce7e:
  if (local_3c != 0) {
    cVar5 = '\0';
  }
LAB_143c8ce8c:
  hb_sanitize_context_t::end_processing(local_58);
  if (cVar5 == '\0') {
    hb_blob_destroy(param_1);
    param_1 = hb_blob_get_empty();
  }
  return param_1;
}



// FUNCTION 143c8ceb0 sanitize body=168 status=ok
// SIG undefined sanitize(void)

undefined8 OT::AlternateSubstFormat1::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 2,2);
  if (cVar1 != '\0') {
    uVar2 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
    if ((uVar2 != 0) &&
       (cVar1 = Coverage::sanitize(param_1 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
      cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1 + 2,2);
      if (cVar1 == '\0') {
        return 0;
      }
      *(undefined2 *)(param_1 + 2) = 0;
    }
    cVar1 = ArrayOf<OT::OffsetTo<OT::ArrayOf<OT::IntType<unsigned_short,2>,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
            ::sanitize(param_1 + 4,param_2,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8cf60 sanitize body=191 status=ok
// SIG undefined sanitize(void)

undefined8 OT::Anchor::sanitize(byte *param_1,undefined8 param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
    return 0;
  }
  sVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar2 == 1) {
    uVar3 = 6;
  }
  else {
    if (sVar2 != 2) {
      if (sVar2 != 3) {
        return 1;
      }
      cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,10);
      if (((cVar1 != '\0') &&
          (cVar1 = OffsetTo<OT::Device,OT::IntType<unsigned_short,2>_>::sanitize
                             (param_1 + 6,param_2,param_1), cVar1 != '\0')) &&
         (cVar1 = OffsetTo<OT::Device,OT::IntType<unsigned_short,2>_>::sanitize
                            (param_1 + 8,param_2,param_1), cVar1 != '\0')) {
        return 1;
      }
      return 0;
    }
    uVar3 = 8;
  }
  uVar3 = hb_sanitize_context_t::check_range(param_2,param_1,uVar3);
  return uVar3;
}



// FUNCTION 143c8d020 sanitize body=291 status=ok
// SIG undefined sanitize(void)

undefined1 OT::AnchorMatrix::sanitize(byte *param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  undefined1 uVar2;
  byte *pbVar3;
  uint uVar4;
  ushort uVar5;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar5 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if ((uVar5 != 0) && ((uint)(0xffffffff / (ulonglong)uVar5) <= param_3)) {
    return 0;
  }
  param_3 = uVar5 * param_3;
  pbVar3 = param_1 + 2;
  cVar1 = hb_sanitize_context_t::check_array(param_2,pbVar3,2,param_3);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar4 = 0;
    if (param_3 != 0) {
      do {
        cVar1 = hb_sanitize_context_t::check_range(param_2,pbVar3,2);
        if (cVar1 == '\0') {
          return 0;
        }
        uVar5 = (ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1];
        if ((uVar5 != 0) && (cVar1 = Anchor::sanitize(param_1 + uVar5,param_2), cVar1 == '\0')) {
          cVar1 = hb_sanitize_context_t::may_edit(param_2,pbVar3,2);
          if (cVar1 == '\0') {
            return 0;
          }
          pbVar3[0] = 0;
          pbVar3[1] = 0;
        }
        uVar4 = uVar4 + 1;
        pbVar3 = pbVar3 + 2;
      } while (uVar4 < param_3);
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143c8d150 sanitize body=154 status=ok
// SIG undefined sanitize(void)

undefined8 OT::AttachList::sanitize(byte *param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if ((uVar2 != 0) && (cVar1 = Coverage::sanitize(param_1 + uVar2,param_2), cVar1 == '\0')) {
      cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
      if (cVar1 == '\0') {
        return 0;
      }
      param_1[0] = 0;
      param_1[1] = 0;
    }
    cVar1 = ArrayOf<OT::OffsetTo<OT::ArrayOf<OT::IntType<unsigned_short,2>,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
            ::sanitize(param_1 + 2,param_2,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8d1f0 sanitize body=164 status=ok
// SIG undefined sanitize(void)

undefined8 OT::CaretValue::sanitize(byte *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  short sVar3;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    sVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if ((sVar3 == 1) || (sVar3 == 2)) {
      uVar2 = hb_sanitize_context_t::check_range(param_2,param_1,4);
      return uVar2;
    }
    if (sVar3 != 3) {
      return 1;
    }
    cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,6);
    if ((cVar1 != '\0') &&
       (cVar1 = OffsetTo<OT::Device,OT::IntType<unsigned_short,2>_>::sanitize
                          (param_1 + 4,param_2,param_1), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8d2a0 sanitize body=168 status=ok
// SIG undefined sanitize(void)

undefined8 OT::ChainContextFormat1::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 2,2);
  if (cVar1 != '\0') {
    uVar2 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
    if ((uVar2 != 0) &&
       (cVar1 = Coverage::sanitize(param_1 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
      cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1 + 2,2);
      if (cVar1 == '\0') {
        return 0;
      }
      *(undefined2 *)(param_1 + 2) = 0;
    }
    cVar1 = ArrayOf<OT::OffsetTo<OT::ChainRuleSet,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
            ::sanitize(param_1 + 4,param_2,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8d350 sanitize body=307 status=ok
// SIG undefined sanitize(void)

undefined8 OT::ChainContextFormat2::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 2,2);
  if (cVar1 != '\0') {
    uVar2 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
    if ((uVar2 != 0) &&
       (cVar1 = Coverage::sanitize(param_1 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
      cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1 + 2,2);
      if (cVar1 == '\0') {
        return 0;
      }
      *(undefined2 *)(param_1 + 2) = 0;
    }
    cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 4,2);
    if (cVar1 != '\0') {
      uVar2 = (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5);
      if ((uVar2 != 0) &&
         (cVar1 = ClassDef::sanitize(param_1 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
        cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1 + 4,2);
        if (cVar1 == '\0') {
          return 0;
        }
        *(undefined2 *)(param_1 + 4) = 0;
      }
      cVar1 = OffsetTo<OT::ClassDef,OT::IntType<unsigned_short,2>_>::sanitize
                        (param_1 + 6,param_2,param_1);
      if (((cVar1 != '\0') &&
          (cVar1 = OffsetTo<OT::ClassDef,OT::IntType<unsigned_short,2>_>::sanitize
                             (param_1 + 8,param_2,param_1), cVar1 != '\0')) &&
         (cVar1 = ArrayOf<OT::OffsetTo<OT::ChainRuleSet,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
                  ::sanitize(param_1 + 10,param_2,param_1), cVar1 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143c8d490 sanitize body=238 status=ok
// SIG undefined sanitize(void)

ulonglong OT::ChainContextFormat3::sanitize(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_1 + 2);
  uVar1 = ArrayOf<OT::OffsetTo<OT::Coverage,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
          ::sanitize(pbVar3,param_2,param_1);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  pbVar3 = pbVar3 + ((uint)(ushort)((ushort)*pbVar3 * 0x100 + (ushort)*(byte *)(param_1 + 3)) * 2 +
                    2);
  uVar1 = ArrayOf<OT::OffsetTo<OT::Coverage,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
          ::sanitize(pbVar3,param_2,param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = 0;
    uVar2 = (ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1];
    if (uVar2 != 0) {
      pbVar3 = pbVar3 + ((uint)uVar2 * 2 + 2);
      uVar1 = ArrayOf<OT::OffsetTo<OT::Coverage,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
              ::sanitize(pbVar3,param_2,param_1);
      if ((char)uVar1 != '\0') {
        uVar1 = ArrayOf<OT::LookupRecord,OT::IntType<unsigned_short,2>_>::sanitize
                          (pbVar3 + ((uint)(ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) * 2
                                    + 2),param_2);
        return uVar1;
      }
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143c8d580 sanitize body=278 status=ok
// SIG undefined sanitize(void)

ulonglong OT::ChainRule::sanitize(byte *param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  ushort uVar3;
  
  uVar2 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (((char)uVar2 == '\0') ||
     (uVar2 = hb_sanitize_context_t::check_array
                        (param_2,param_1 + 2,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]),
     (char)uVar2 == '\0')) {
    return uVar2 & 0xffffffffffffff00;
  }
  param_1 = param_1 + ((uint)(ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) * 2 + 2);
  uVar2 = HeadlessArrayOf<OT::IntType<unsigned_short,2>,OT::IntType<unsigned_short,2>_>::
          sanitize_shallow(param_1,param_2);
  if ((char)uVar2 != '\0') {
    uVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if (uVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = uVar3 - 1;
    }
    param_1 = param_1 + (iVar1 * 2 + 2);
    uVar2 = ArrayOf<OT::IntType<unsigned_short,2>,OT::IntType<unsigned_short,2>_>::sanitize
                      (param_1,param_2);
    if ((char)uVar2 != '\0') {
      uVar2 = ArrayOf<OT::LookupRecord,OT::IntType<unsigned_short,2>_>::sanitize
                        (param_1 + ((uint)(ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) *
                                    2 + 2),param_2);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143c8d6a0 sanitize body=214 status=ok
// SIG undefined sanitize(void)

undefined1 OT::ClassDef::sanitize(byte *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
    return 0;
  }
  sVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar3 == 1) {
    uVar2 = ClassDefFormat1::sanitize(param_1,param_2);
    return uVar2;
  }
  if (sVar3 != 2) {
    return 1;
  }
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 2,2);
  if ((cVar1 != '\0') &&
     (cVar1 = hb_sanitize_context_t::check_array
                        (param_2,param_1 + 4,6,(ushort)param_1[2] * 0x100 + (ushort)param_1[3]),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143c8d780 sanitize body=79 status=ok
// SIG undefined sanitize(void)

undefined1 OT::ClassDefFormat1::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,6);
  if (cVar1 != '\0') {
    cVar1 = ArrayOf<OT::IntType<unsigned_short,2>,OT::IntType<unsigned_short,2>_>::sanitize
                      (param_1 + 4,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8d7d0 sanitize body=168 status=ok
// SIG undefined sanitize(void)

undefined8 OT::ContextFormat1::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 2,2);
  if (cVar1 != '\0') {
    uVar2 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
    if ((uVar2 != 0) &&
       (cVar1 = Coverage::sanitize(param_1 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
      cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1 + 2,2);
      if (cVar1 == '\0') {
        return 0;
      }
      *(undefined2 *)(param_1 + 2) = 0;
    }
    cVar1 = ArrayOf<OT::OffsetTo<OT::RuleSet,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
            ::sanitize(param_1 + 4,param_2,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8d880 sanitize body=261 status=ok
// SIG undefined sanitize(void)

undefined8 OT::ContextFormat2::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 2,2);
  if (cVar1 != '\0') {
    uVar2 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
    if ((uVar2 != 0) &&
       (cVar1 = Coverage::sanitize(param_1 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
      cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1 + 2,2);
      if (cVar1 == '\0') {
        return 0;
      }
      *(undefined2 *)(param_1 + 2) = 0;
    }
    cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 4,2);
    if (cVar1 != '\0') {
      uVar2 = (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5);
      if ((uVar2 != 0) &&
         (cVar1 = ClassDef::sanitize(param_1 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
        cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1 + 4,2);
        if (cVar1 == '\0') {
          return 0;
        }
        *(undefined2 *)(param_1 + 4) = 0;
      }
      cVar1 = ArrayOf<OT::OffsetTo<OT::RuleSet,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
              ::sanitize(param_1 + 6,param_2,param_1);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143c8d990 sanitize body=340 status=ok
// SIG undefined sanitize(void)

ulonglong OT::ContextFormat3::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  uint uVar6;
  
  uVar2 = hb_sanitize_context_t::check_range(param_2,param_1,6);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  uVar3 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar3 == 0) {
    return 0;
  }
  pbVar5 = (byte *)(param_1 + 6);
  uVar2 = hb_sanitize_context_t::check_array(param_2,pbVar5,2,uVar3);
  if ((char)uVar2 != '\0') {
    uVar6 = 0;
    if (uVar3 != 0) {
      do {
        uVar2 = hb_sanitize_context_t::check_range(param_2,pbVar5,2);
        if ((char)uVar2 == '\0') {
LAB_143c8dae0:
          return uVar2 & 0xffffffffffffff00;
        }
        uVar4 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
        if ((uVar4 != 0) &&
           (cVar1 = Coverage::sanitize((ulonglong)uVar4 + param_1,param_2), cVar1 == '\0')) {
          uVar2 = hb_sanitize_context_t::may_edit(param_2,pbVar5,2);
          if ((char)uVar2 == '\0') goto LAB_143c8dae0;
          pbVar5[0] = 0;
          pbVar5[1] = 0;
        }
        uVar6 = uVar6 + 1;
        pbVar5 = pbVar5 + 2;
      } while (uVar6 < uVar3);
    }
    uVar2 = hb_sanitize_context_t::check_array
                      (param_2,param_1 + 6 + (ulonglong)((uint)uVar3 + (uint)uVar3),4,
                       (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5));
  }
  return uVar2;
}



// FUNCTION 143c8daf0 sanitize body=214 status=ok
// SIG undefined sanitize(void)

undefined1 OT::Coverage::sanitize(byte *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 == '\0') {
    return 0;
  }
  sVar3 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (sVar3 == 1) {
    uVar2 = CoverageFormat1::sanitize(param_1,param_2);
    return uVar2;
  }
  if (sVar3 != 2) {
    return 1;
  }
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 2,2);
  if ((cVar1 != '\0') &&
     (cVar1 = hb_sanitize_context_t::check_array
                        (param_2,param_1 + 4,6,(ushort)param_1[2] * 0x100 + (ushort)param_1[3]),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143c8dbd0 sanitize body=108 status=ok
// SIG undefined sanitize(void)

undefined8 OT::CoverageFormat1::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,(byte *)(param_1 + 2),2);
  if (cVar1 != '\0') {
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,param_1 + 4,2,
                       (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8dc40 sanitize body=168 status=ok
// SIG undefined sanitize(void)

undefined8 OT::CursivePosFormat1::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 2,2);
  if (cVar1 != '\0') {
    uVar2 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
    if ((uVar2 != 0) &&
       (cVar1 = Coverage::sanitize(param_1 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
      cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1 + 2,2);
      if (cVar1 == '\0') {
        return 0;
      }
      *(undefined2 *)(param_1 + 2) = 0;
    }
    cVar1 = ArrayOf<OT::EntryExitRecord,OT::IntType<unsigned_short,2>_>::sanitize
                      (param_1 + 4,param_2,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8dcf0 sanitize body=89 status=ok
// SIG undefined sanitize(void)

undefined4 OT::Device::sanitize(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,6);
  if (cVar1 != '\0') {
    uVar2 = get_size(param_1);
    cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,uVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8dd50 sanitize body=241 status=ok
// SIG undefined sanitize(void)

undefined8 OT::EntryExitRecord::sanitize(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if ((uVar2 != 0) &&
       (cVar1 = Anchor::sanitize(param_3 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
      cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
      if (cVar1 == '\0') {
        return 0;
      }
      param_1[0] = 0;
      param_1[1] = 0;
    }
    cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 2,2);
    if (cVar1 != '\0') {
      uVar2 = (ushort)param_1[2] * 0x100 + (ushort)param_1[3];
      if ((uVar2 != 0) &&
         (cVar1 = Anchor::sanitize(param_3 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
        cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1 + 2,2);
        if (cVar1 == '\0') {
          return 0;
        }
        param_1[2] = 0;
        param_1[3] = 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8de50 sanitize body=452 status=ok
// SIG undefined sanitize(void)

ulonglong OT::Feature::sanitize(ushort *param_1,longlong param_2,int *param_3)

{
  char cVar1;
  ulonglong uVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  
  uVar2 = hb_sanitize_context_t::check_range(param_2,param_1,4);
  if ((char)uVar2 == '\0') {
LAB_143c8e009:
    return uVar2 & 0xffffffffffffff00;
  }
  uVar2 = ArrayOf<OT::IntType<unsigned_short,2>,OT::IntType<unsigned_short,2>_>::sanitize
                    (param_1 + 1,param_2);
  if ((char)uVar2 == '\0') goto LAB_143c8e009;
  uVar6 = *param_1;
  if (param_3 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *param_3;
  }
  uVar2 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar2 == '\0') {
LAB_143c8e005:
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  else {
    uVar4 = (ushort)(byte)*param_1 * 0x100 + (ushort)*(byte *)((longlong)param_1 + 1);
    if (uVar4 != 0) {
      cVar1 = FeatureParams::sanitize((byte *)((longlong)param_1 + (ulonglong)uVar4),param_2,iVar5);
      if (cVar1 == '\0') {
        uVar2 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
        if ((char)uVar2 == '\0') goto LAB_143c8e005;
        *param_1 = 0;
      }
    }
    puVar3 = (ushort *)0x0;
    uVar6 = uVar6 * 0x100 + (uVar6 >> 8);
    if ((((uVar6 != 0) &&
         (puVar3 = (ushort *)0x0,
         (ushort)((ushort)(byte)*param_1 * 0x100 + (ushort)*(byte *)((longlong)param_1 + 1)) == 0))
        && (param_3 != (int *)0x0)) &&
       (((*param_3 == 0x73697a65 && (puVar3 = *(ushort **)(param_3 + 2), puVar3 != (ushort *)0x0))
        && (puVar3 < param_1)))) {
      uVar7 = ((uint)uVar6 - (int)param_1) + (int)puVar3;
      uVar6 = (ushort)uVar7;
      uVar6 = (uVar6 & 0xff00) + (uVar6 & 0xff);
      if (uVar6 == uVar7) {
        cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
        if (cVar1 != '\0') {
          *(byte *)((longlong)param_1 + 1) = (byte)uVar6;
          *(byte *)param_1 = (byte)(uVar6 >> 8);
          uVar2 = OffsetTo<OT::FeatureParams,OT::IntType<unsigned_short,2>_>::sanitize<unsigned_int>
                            (param_1,param_2,param_1,*param_3);
          if ((char)uVar2 == '\0') goto LAB_143c8e005;
        }
      }
      uVar7 = *(uint *)(param_2 + 0x1c);
      puVar3 = (ushort *)(ulonglong)uVar7;
      if (1 < uVar7) {
        puVar3 = (ushort *)(ulonglong)(uVar7 - 1);
        *(uint *)(param_2 + 0x1c) = uVar7 - 1;
      }
    }
    uVar2 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
  }
  return uVar2;
}



// FUNCTION 143c8e020 sanitize body=155 status=ok
// SIG undefined sanitize(void)

undefined1 OT::FeatureParams::sanitize(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 uVar1;
  char cVar2;
  
  if (param_3 == 0x73697a65) {
    uVar1 = FeatureParamsSize::sanitize();
    return uVar1;
  }
  if ((param_3 & 0xffff0000) == 0x73730000) {
    uVar1 = hb_sanitize_context_t::check_range(param_2,param_1,4);
    return uVar1;
  }
  if ((param_3 & 0xffff0000) != 0x63760000) {
    return 1;
  }
  cVar2 = hb_sanitize_context_t::check_range(param_2,param_1,0xe);
  if ((cVar2 != '\0') &&
     (cVar2 = ArrayOf<OT::IntType<unsigned_int,3>,OT::IntType<unsigned_short,2>_>::sanitize
                        (param_1 + 0xc,param_2), cVar2 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143c8e0c0 sanitize body=265 status=ok
// SIG undefined sanitize(void)

ulonglong OT::FeatureParamsSize::sanitize(byte *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  
  uVar1 = hb_sanitize_context_t::check_range(param_2,param_1,10);
  if ((char)uVar1 != '\0') {
    uVar1 = 0;
    uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if ((uVar2 != 0) &&
       ((((((ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) == 0 &&
           ((ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5]) == 0)) &&
          ((ushort)((ushort)param_1[6] * 0x100 + (ushort)param_1[7]) == 0)) &&
         (uVar1 = 0, (ushort)((ushort)param_1[8] * 0x100 + (ushort)param_1[9]) == 0)) ||
        (((uVar1 = 0, (ushort)((ushort)param_1[6] * 0x100 + (ushort)param_1[7]) <= uVar2 &&
          (uVar1 = 0, uVar2 <= (ushort)((ushort)param_1[8] * 0x100 + (ushort)param_1[9]))) &&
         ((uVar1 = 0, 0xff < (ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5]) &&
          (uVar1 = 0x7fff, (ushort)((ushort)param_1[4] * 0x100 + (ushort)param_1[5]) < 0x8000)))))))
       ) {
      return CONCAT71((int7)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143c8e1d0 sanitize body=264 status=ok
// SIG undefined sanitize(void)

undefined8 OT::GDEF::sanitize(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,4);
  if (((((cVar1 != '\0') && ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1)) &&
       (cVar1 = OffsetTo<OT::ClassDef,OT::IntType<unsigned_short,2>_>::sanitize
                          (param_1 + 4,param_2,param_1), cVar1 != '\0')) &&
      ((cVar1 = OffsetTo<OT::AttachList,OT::IntType<unsigned_short,2>_>::sanitize
                          (param_1 + 6,param_2,param_1), cVar1 != '\0' &&
       (cVar1 = OffsetTo<OT::LigCaretList,OT::IntType<unsigned_short,2>_>::sanitize
                          (param_1 + 8,param_2,param_1), cVar1 != '\0')))) &&
     (cVar1 = OffsetTo<OT::ClassDef,OT::IntType<unsigned_short,2>_>::sanitize
                        (param_1 + 10,param_2,param_1), cVar1 != '\0')) {
    if ((0x10001 < (uint)(ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) +
                   (uint)(ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) * 4) &&
       (cVar1 = OffsetTo<OT::MarkGlyphSets,OT::IntType<unsigned_short,2>_>::sanitize
                          (param_1 + 0xc,param_2,param_1), cVar1 == '\0')) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 143c8e2e0 sanitize body=154 status=ok
// SIG undefined sanitize(void)

undefined8 OT::LigCaretList::sanitize(byte *param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    uVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if ((uVar2 != 0) && (cVar1 = Coverage::sanitize(param_1 + uVar2,param_2), cVar1 == '\0')) {
      cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1,2);
      if (cVar1 == '\0') {
        return 0;
      }
      param_1[0] = 0;
      param_1[1] = 0;
    }
    cVar1 = ArrayOf<OT::OffsetTo<OT::LigGlyph,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
            ::sanitize(param_1 + 2,param_2,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8e380 sanitize body=168 status=ok
// SIG undefined sanitize(void)

undefined8 OT::LigatureSubstFormat1::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 2,2);
  if (cVar1 != '\0') {
    uVar2 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
    if ((uVar2 != 0) &&
       (cVar1 = Coverage::sanitize(param_1 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
      cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1 + 2,2);
      if (cVar1 == '\0') {
        return 0;
      }
      *(undefined2 *)(param_1 + 2) = 0;
    }
    cVar1 = ArrayOf<OT::OffsetTo<OT::LigatureSet,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
            ::sanitize(param_1 + 4,param_2,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8e430 sanitize body=152 status=ok
// SIG undefined sanitize(void)

undefined8 OT::Lookup::sanitize(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  
  cVar2 = hb_sanitize_context_t::check_range(param_2,param_1,6);
  if (cVar2 != '\0') {
    pbVar1 = (byte *)(param_1 + 4);
    cVar2 = ArrayOf<OT::IntType<unsigned_short,2>,OT::IntType<unsigned_short,2>_>::sanitize
                      (pbVar1,param_2);
    if (cVar2 != '\0') {
      if (((*(byte *)(param_1 + 3) & 0x10) != 0) &&
         (cVar2 = hb_sanitize_context_t::check_range
                            (param_2,pbVar1 + ((uint)(ushort)((ushort)*pbVar1 * 0x100 +
                                                             (ushort)*(byte *)(param_1 + 5)) * 2 + 2
                                              ),2), cVar2 == '\0')) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8e4d0 sanitize body=162 status=ok
// SIG undefined sanitize(void)

undefined8 OT::MarkBasePosFormat1::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,0xc);
  if (cVar1 != '\0') {
    cVar1 = OffsetTo<OT::Coverage,OT::IntType<unsigned_short,2>_>::sanitize
                      (param_1 + 2,param_2,param_1);
    if (cVar1 != '\0') {
      cVar1 = OffsetTo<OT::Coverage,OT::IntType<unsigned_short,2>_>::sanitize
                        (param_1 + 4,param_2,param_1);
      if (cVar1 != '\0') {
        cVar1 = OffsetTo<OT::MarkArray,OT::IntType<unsigned_short,2>_>::sanitize
                          (param_1 + 8,param_2,param_1);
        if (cVar1 != '\0') {
          cVar1 = OffsetTo<OT::AnchorMatrix,OT::IntType<unsigned_short,2>_>::sanitize<unsigned_int>
                            (param_1 + 10,param_2,param_1,
                             (ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7)
                            );
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143c8e580 sanitize body=110 status=ok
// SIG undefined sanitize(void)

undefined8 OT::MarkGlyphSets::sanitize(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 1) {
    return 1;
  }
  uVar1 = ArrayOf<OT::OffsetTo<OT::Coverage,OT::IntType<unsigned_int,4>_>,OT::IntType<unsigned_short,2>_>
          ::sanitize(param_1 + 2,param_2,param_1);
  return uVar1;
}



// FUNCTION 143c8e5f0 sanitize body=162 status=ok
// SIG undefined sanitize(void)

undefined8 OT::MarkLigPosFormat1::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,0xc);
  if (cVar1 != '\0') {
    cVar1 = OffsetTo<OT::Coverage,OT::IntType<unsigned_short,2>_>::sanitize
                      (param_1 + 2,param_2,param_1);
    if (cVar1 != '\0') {
      cVar1 = OffsetTo<OT::Coverage,OT::IntType<unsigned_short,2>_>::sanitize
                        (param_1 + 4,param_2,param_1);
      if (cVar1 != '\0') {
        cVar1 = OffsetTo<OT::MarkArray,OT::IntType<unsigned_short,2>_>::sanitize
                          (param_1 + 8,param_2,param_1);
        if (cVar1 != '\0') {
          cVar1 = OffsetTo<OT::OffsetListOf<OT::AnchorMatrix>,OT::IntType<unsigned_short,2>_>::
                  sanitize<unsigned_int>
                            (param_1 + 10,param_2,param_1,
                             (ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7)
                            );
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143c8e6a0 sanitize body=324 status=ok
// SIG undefined sanitize(void)

undefined8 OT::PairPosFormat1::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  ushort uVar3;
  longlong local_28;
  longlong local_20;
  uint local_18;
  int local_14;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,10);
  if (cVar1 != '\0') {
    local_20 = param_1 + 4;
    uVar3 = (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5);
    uVar2 = uVar3 >> 1 & 0x5b6db6db;
    uVar2 = ((uint)uVar3 - (uVar2 >> 1 & 0x5b6db6db)) - uVar2;
    local_18 = ((uVar2 >> 3) + uVar2 & 0xc71c71c7) % 0x3f;
    uVar3 = (ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7);
    uVar2 = uVar3 >> 1 & 0x5b6db6db;
    uVar2 = ((uint)uVar3 - (uVar2 >> 1 & 0x5b6db6db)) - uVar2;
    local_14 = ((uVar2 >> 3) + uVar2 & 0xc71c71c7) % 0x3f + 1 + local_18;
    local_28 = param_1;
    cVar1 = OffsetTo<OT::Coverage,OT::IntType<unsigned_short,2>_>::sanitize
                      (param_1 + 2,param_2,param_1);
    if (cVar1 != '\0') {
      cVar1 = ArrayOf<OT::OffsetTo<OT::PairSet,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
              ::sanitize<OT::PairSet::sanitize_closure_t_*___ptr64>
                        (param_1 + 8,param_2,param_1,&local_28);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143c8e7f0 sanitize body=692 status=ok
// SIG undefined sanitize(void)

undefined8 OT::PairPosFormat2::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,0x10);
  if ((((cVar1 != '\0') &&
       (cVar1 = OffsetTo<OT::Coverage,OT::IntType<unsigned_short,2>_>::sanitize
                          (param_1 + 2,param_2,param_1), cVar1 != '\0')) &&
      (cVar1 = OffsetTo<OT::ClassDef,OT::IntType<unsigned_short,2>_>::sanitize
                         (param_1 + 8,param_2,param_1), cVar1 != '\0')) &&
     (cVar1 = OffsetTo<OT::ClassDef,OT::IntType<unsigned_short,2>_>::sanitize
                        (param_1 + 10,param_2,param_1), cVar1 != '\0')) {
    uVar4 = (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5);
    uVar2 = uVar4 >> 1 & 0x5b6db6db;
    uVar2 = ((uint)uVar4 - (uVar2 >> 1 & 0x5b6db6db)) - uVar2;
    uVar7 = ((uVar2 >> 3) + uVar2 & 0xc71c71c7) % 0x3f;
    uVar4 = (ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7);
    uVar2 = uVar4 >> 1 & 0x5b6db6db;
    uVar2 = ((uint)uVar4 - (uVar2 >> 1 & 0x5b6db6db)) - uVar2;
    uVar4 = (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5);
    iVar6 = ((uVar2 >> 3) + uVar2 & 0xc71c71c7) % 0x3f + uVar7;
    uVar2 = uVar4 >> 1 & 0x5b6db6db;
    uVar2 = ((uint)uVar4 - (uVar2 >> 1 & 0x5b6db6db)) - uVar2;
    uVar4 = (ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7);
    uVar3 = uVar4 >> 1 & 0x5b6db6db;
    uVar3 = ((uint)uVar4 - (uVar3 >> 1 & 0x5b6db6db)) - uVar3;
    iVar5 = (uint)(ushort)((ushort)*(byte *)(param_1 + 0xe) * 0x100 +
                          (ushort)*(byte *)(param_1 + 0xf)) *
            (uint)(ushort)((ushort)*(byte *)(param_1 + 0xc) * 0x100 +
                          (ushort)*(byte *)(param_1 + 0xd));
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,param_1 + 0x10,
                       (((uVar3 >> 3) + uVar3 & 0xc71c71c7) % 0x3f +
                       ((uVar2 >> 3) + uVar2 & 0xc71c71c7) % 0x3f) * 2,iVar5);
    if (((cVar1 != '\0') &&
        (cVar1 = ValueFormat::sanitize_values_stride_unsafe
                           (param_1 + 4,param_2,param_1,param_1 + 0x10,iVar5,iVar6), cVar1 != '\0'))
       && (cVar1 = ValueFormat::sanitize_values_stride_unsafe
                             (param_1 + 6,param_2,param_1,param_1 + ((ulonglong)uVar7 + 8) * 2,iVar5
                              ,iVar6), cVar1 != '\0')) {
      return 1;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 143c8eab0 sanitize body=248 status=ok
// SIG undefined sanitize(void)

undefined8 OT::PairSet::sanitize(byte *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  short sVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,param_1 + 2,*(int *)((longlong)param_3 + 0x14) * 2,
                       (ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar1 != '\0') {
      sVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
      cVar1 = ValueFormat::sanitize_values_stride_unsafe
                        (param_3[1],param_2,*param_3,param_1 + 4,sVar2,
                         *(undefined4 *)((longlong)param_3 + 0x14));
      if ((cVar1 != '\0') &&
         (cVar1 = ValueFormat::sanitize_values_stride_unsafe
                            (param_3[1] + 2,param_2,*param_3,
                             param_1 + 2 + (ulonglong)*(uint *)(param_3 + 2) * 2 + 2,sVar2,
                             *(undefined4 *)((longlong)param_3 + 0x14)), cVar1 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143c8ebb0 sanitize body=160 status=ok
// SIG undefined sanitize(void)

ulonglong OT::PosLookup::sanitize(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  uVar2 = hb_sanitize_context_t::check_range(param_2,param_1,6);
  if ((char)uVar2 != '\0') {
    pbVar1 = (byte *)(param_1 + 4);
    uVar2 = ArrayOf<OT::IntType<unsigned_short,2>,OT::IntType<unsigned_short,2>_>::sanitize
                      (pbVar1,param_2);
    if ((char)uVar2 != '\0') {
      if ((*(byte *)(param_1 + 3) & 0x10) != 0) {
        uVar2 = hb_sanitize_context_t::check_range
                          (param_2,pbVar1 + ((uint)(ushort)((ushort)*pbVar1 * 0x100 +
                                                           (ushort)*(byte *)(param_1 + 5)) * 2 + 2),
                           2);
        if ((char)uVar2 == '\0') goto LAB_143c8ec3e;
      }
      uVar2 = Lookup::dispatch<OT::SubstLookupSubTable,OT::hb_sanitize_context_t>(param_1,param_2);
      return uVar2;
    }
  }
LAB_143c8ec3e:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143c8ec50 sanitize body=279 status=ok
// SIG undefined sanitize(void)

ulonglong OT::ReverseChainSingleSubstFormat1::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  ushort uVar3;
  byte *pbVar4;
  
  uVar2 = hb_sanitize_context_t::check_range(param_2,param_1 + 2,2);
  if ((char)uVar2 != '\0') {
    uVar3 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
    if ((uVar3 != 0) &&
       (cVar1 = Coverage::sanitize(param_1 + (ulonglong)uVar3,param_2), cVar1 == '\0')) {
      uVar2 = hb_sanitize_context_t::may_edit(param_2,param_1 + 2,2);
      if ((char)uVar2 == '\0') goto LAB_143c8ed63;
      *(undefined2 *)(param_1 + 2) = 0;
    }
    pbVar4 = (byte *)(param_1 + 4);
    uVar2 = ArrayOf<OT::OffsetTo<OT::Coverage,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
            ::sanitize(pbVar4,param_2,param_1);
    if ((char)uVar2 != '\0') {
      pbVar4 = pbVar4 + ((uint)(ushort)((ushort)*pbVar4 * 0x100 + (ushort)*(byte *)(param_1 + 5)) *
                         2 + 2);
      uVar2 = ArrayOf<OT::OffsetTo<OT::Coverage,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>
              ::sanitize(pbVar4,param_2,param_1);
      if ((char)uVar2 == '\0') {
        return uVar2;
      }
      uVar2 = ArrayOf<OT::IntType<unsigned_short,2>,OT::IntType<unsigned_short,2>_>::sanitize
                        (pbVar4 + ((uint)(ushort)((ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1]) * 2 +
                                  2),param_2);
      return uVar2;
    }
  }
LAB_143c8ed63:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143c8ed70 sanitize body=173 status=ok
// SIG undefined sanitize(void)

undefined8 OT::Rule::sanitize(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 2,2);
    if (cVar1 != '\0') {
      cVar1 = hb_sanitize_context_t::check_range
                        (param_2,param_1 + 4,
                         ((uint)(ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) +
                         (uint)(ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) * 2) * 2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143c8ee20 sanitize body=131 status=ok
// SIG undefined sanitize(void)

undefined8 OT::SinglePosFormat2::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,8);
  if (cVar1 != '\0') {
    cVar1 = OffsetTo<OT::Coverage,OT::IntType<unsigned_short,2>_>::sanitize
                      (param_1 + 2,param_2,param_1);
    if (cVar1 != '\0') {
      cVar1 = ValueFormat::sanitize_values
                        (param_1 + 4,param_2,param_1,param_1 + 8,
                         (ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7));
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143c8eeb0 sanitize body=171 status=ok
// SIG undefined sanitize(void)

undefined8 OT::SingleSubstFormat1::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 2,2);
  if (cVar1 != '\0') {
    uVar2 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
    if ((uVar2 != 0) &&
       (cVar1 = Coverage::sanitize(param_1 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
      cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1 + 2,2);
      if (cVar1 == '\0') {
        return 0;
      }
      *(undefined2 *)(param_1 + 2) = 0;
    }
    cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 4,2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8ef60 sanitize body=217 status=ok
// SIG undefined sanitize(void)

undefined8 OT::SingleSubstFormat2::sanitize(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 2,2);
  if (cVar1 != '\0') {
    uVar2 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
    if ((uVar2 != 0) &&
       (cVar1 = Coverage::sanitize(param_1 + (ulonglong)uVar2,param_2), cVar1 == '\0')) {
      cVar1 = hb_sanitize_context_t::may_edit(param_2,param_1 + 2,2);
      if (cVar1 == '\0') {
        return 0;
      }
      *(undefined2 *)(param_1 + 2) = 0;
    }
    cVar1 = hb_sanitize_context_t::check_range(param_2,param_1 + 4,2);
    if ((cVar1 != '\0') &&
       (cVar1 = hb_sanitize_context_t::check_array
                          (param_2,param_1 + 6,2,
                           (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5)),
       cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8f040 sanitize body=451 status=ok
// SIG undefined sanitize(void)

ulonglong OT::SubstLookup::sanitize(byte *param_1,undefined8 param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte *pbVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  uVar2 = hb_sanitize_context_t::check_range(param_2,param_1,6);
  if ((char)uVar2 != '\0') {
    pbVar1 = param_1 + 4;
    uVar2 = ArrayOf<OT::IntType<unsigned_short,2>,OT::IntType<unsigned_short,2>_>::sanitize
                      (pbVar1,param_2);
    if (((char)uVar2 != '\0') &&
       ((((param_1[3] & 0x10) == 0 ||
         (uVar2 = hb_sanitize_context_t::check_range
                            (param_2,pbVar1 + ((uint)(ushort)((ushort)*pbVar1 * 0x100 +
                                                             (ushort)param_1[5]) * 2 + 2),2),
         (char)uVar2 != '\0')) &&
        (uVar2 = Lookup::dispatch<OT::SubstLookupSubTable,OT::hb_sanitize_context_t>
                           (param_1,param_2), (char)uVar2 != '\0')))) {
      uVar2 = 0;
      if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 7) {
        pbVar3 = (byte *)get_subtable(param_1,0);
        if ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) == 1) {
          uVar8 = (uint)(ushort)((ushort)pbVar3[2] * 0x100 + (ushort)pbVar3[3]);
        }
        else {
          uVar8 = 0;
        }
        uVar6 = 1;
        uVar2 = 0;
        uVar4 = (ushort)*pbVar1 * 0x100 + (ushort)param_1[5];
        if (1 < uVar4) {
          do {
            if (uVar6 < (ushort)((ushort)*pbVar1 * 0x100 + (ushort)param_1[5])) {
              pbVar3 = pbVar1 + ((ulonglong)uVar6 + 1) * 2;
            }
            else {
              pbVar3 = &DAT_146bc87b0;
            }
            pbVar7 = &DAT_146bc87b0;
            uVar5 = (ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1];
            if (uVar5 != 0) {
              pbVar7 = param_1 + uVar5;
            }
            if ((ushort)((ushort)*pbVar7 * 0x100 + (ushort)pbVar7[1]) == 1) {
              uVar2 = (ulonglong)(ushort)((ushort)pbVar7[2] * 0x100 + (ushort)pbVar7[3]);
            }
            else {
              uVar2 = 0;
            }
            if ((uint)uVar2 != uVar8) {
              return uVar2 & 0xffffffffffffff00;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar4);
        }
      }
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143c8f210 sanitize_shallow body=111 status=ok
// SIG undefined sanitize_shallow(void)

undefined8
OT::HeadlessArrayOf<OT::IntType<unsigned_short,2>,OT::IntType<unsigned_short,2>_>::sanitize_shallow
          (byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = hb_sanitize_context_t::check_range(param_2,param_1,2);
  if (cVar1 != '\0') {
    cVar1 = hb_sanitize_context_t::check_array
                      (param_2,param_1,2,(ushort)*param_1 * 0x100 + (ushort)param_1[1]);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8f280 sanitize_value body=205 status=ok
// SIG undefined sanitize_value(void)

undefined8
OT::ValueFormat::sanitize_value
          (byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar4 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  uVar3 = uVar4 >> 1 & 0x5b6db6db;
  uVar3 = ((uint)uVar4 - (uVar3 >> 1 & 0x5b6db6db)) - uVar3;
  cVar1 = hb_sanitize_context_t::check_range
                    (param_2,param_4,(((uVar3 >> 3) + uVar3 & 0xc71c71c7) % 0x3f) * 2);
  if (cVar1 == '\0') {
LAB_143c8f336:
    uVar2 = 0;
  }
  else {
    if ((param_1[1] & 0xf0) != 0) {
      cVar1 = sanitize_value_devices(param_1,param_2,param_3,param_4);
      if (cVar1 == '\0') goto LAB_143c8f336;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143c8f350 sanitize_value_devices body=229 status=ok
// SIG undefined sanitize_value_devices(void)

undefined8
OT::ValueFormat::sanitize_value_devices
          (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)(param_1 + 1);
  if ((bVar1 & 1) != 0) {
    param_4 = param_4 + 2;
  }
  if ((bVar1 & 2) != 0) {
    param_4 = param_4 + 2;
  }
  if ((bVar1 & 4) != 0) {
    param_4 = param_4 + 2;
  }
  if ((bVar1 & 8) != 0) {
    param_4 = param_4 + 2;
  }
  lVar4 = param_4;
  if ((bVar1 & 0x10) == 0) {
LAB_143c8f3cf:
    lVar5 = lVar4;
    if ((bVar1 & 0x20) != 0) {
      lVar5 = lVar4 + 2;
      cVar2 = OffsetTo<OT::Device,OT::IntType<unsigned_short,2>_>::sanitize(lVar4,param_2,param_3);
      if (cVar2 == '\0') goto LAB_143c8f3cb;
    }
    lVar4 = lVar5;
    if ((bVar1 & 0x40) != 0) {
      lVar4 = lVar5 + 2;
      cVar2 = OffsetTo<OT::Device,OT::IntType<unsigned_short,2>_>::sanitize(lVar5,param_2,param_3);
      if (cVar2 == '\0') goto LAB_143c8f3cb;
    }
    if ((char)bVar1 < '\0') {
      cVar2 = OffsetTo<OT::Device,OT::IntType<unsigned_short,2>_>::sanitize(lVar4,param_2,param_3);
      if (cVar2 == '\0') goto LAB_143c8f3cb;
    }
    uVar3 = 1;
  }
  else {
    lVar4 = param_4 + 2;
    cVar2 = OffsetTo<OT::Device,OT::IntType<unsigned_short,2>_>::sanitize(param_4,param_2);
    if (cVar2 != '\0') goto LAB_143c8f3cf;
LAB_143c8f3cb:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143c8f440 sanitize_values body=327 status=ok
// SIG undefined sanitize_values(void)

undefined1
OT::ValueFormat::sanitize_values
          (byte *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,uint param_5)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  
  uVar5 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  uVar3 = uVar5 >> 1 & 0x5b6db6db;
  uVar3 = ((uint)uVar5 - (uVar3 >> 1 & 0x5b6db6db)) - uVar3;
  uVar4 = uVar5 >> 1 & 0x5b6db6db;
  uVar4 = ((uint)uVar5 - (uVar4 >> 1 & 0x5b6db6db)) - uVar4;
  cVar1 = hb_sanitize_context_t::check_array
                    (param_2,param_4,(((uVar4 >> 3) + uVar4 & 0xc71c71c7) % 0x3f) * 2,param_5);
  uVar2 = 0;
  if (cVar1 != '\0') {
    if ((param_1[1] & 0xf0) == 0) {
      uVar2 = 1;
    }
    else {
      uVar4 = 0;
      if (param_5 != 0) {
        do {
          cVar1 = sanitize_value_devices(param_1,param_2,param_3,param_4);
          if (cVar1 == '\0') {
            return 0;
          }
          uVar4 = uVar4 + 1;
          param_4 = param_4 + (ulonglong)(((uVar3 >> 3) + uVar3 & 0xc71c71c7) % 0x3f) * 2;
        } while (uVar4 < param_5);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 143c8f590 sanitize_values_stride_unsafe body=151 status=ok
// SIG undefined sanitize_values_stride_unsafe(void)

undefined8
OT::ValueFormat::sanitize_values_stride_unsafe
          (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,uint param_5,
          uint param_6)

{
  char cVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 1) & 0xf0) == 0) {
    return 1;
  }
  uVar2 = 0;
  if (param_5 != 0) {
    do {
      cVar1 = sanitize_value_devices(param_1,param_2,param_3,param_4);
      if (cVar1 == '\0') {
        return 0;
      }
      uVar2 = uVar2 + 1;
      param_4 = param_4 + (ulonglong)param_6 * 2;
    } while (uVar2 < param_5);
  }
  return 1;
}



// FUNCTION 143c8f630 set_lookup_props body=142 status=ok
// SIG undefined set_lookup_props(void)

void OT::hb_apply_context_t::set_lookup_props(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 uVar2;
  
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(longlong *)(param_1 + 0x58) = param_1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  piVar1 = *(int **)(param_1 + 0x58);
  *(int *)(param_1 + 0x60) = piVar1[0xf];
  *(bool *)(param_1 + 100) = *piVar1 == 1;
  if ((*piVar1 == 1) || ((char)piVar1[10] != '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x65) = uVar2;
  *(int *)(param_1 + 0x68) = piVar1[9];
  *(longlong *)(param_1 + 0x98) = param_1;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x3c);
  *(undefined2 *)(param_1 + 0xa4) = 0x101;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  return;
}



// FUNCTION 143c8f6c0 substitute body=62 status=ok
// SIG undefined substitute(void)

void hb_ot_map_t::substitute
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x80) + 0xa0);
  local_18 = *(undefined8 *)(lVar1 + 0x20);
  local_10 = *(undefined8 *)(lVar1 + 0x38);
  apply<GSUBProxy>(param_1,&local_18,param_2,param_3,param_4);
  return;
}



// FUNCTION 143c8f700 substitute_start body=198 status=ok
// SIG undefined substitute_start(void)

void OT::GSUB::substitute_start(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0xa0) + 0x18);
  lVar2 = *(longlong *)(param_2 + 200);
  if (*(uint *)(param_2 + 0xb8) != 0) {
    uVar5 = (ulonglong)*(uint *)(param_2 + 0xb8);
    pbVar4 = (byte *)(lVar2 + 0xc);
    do {
      iVar3 = GDEF::get_glyph_props(uVar1,*(undefined4 *)(pbVar4 + -0xc));
      if (iVar3 == 0) {
        if ((((byte)*(undefined2 *)(pbVar4 + 4) & 0x1f) == 0xc) &&
           ((-1 < (char)(byte)*(undefined2 *)(pbVar4 + 4) || ((*pbVar4 >> 5 & 1) != 0)))) {
          iVar3 = 8;
        }
        else {
          iVar3 = 2;
        }
      }
      *(short *)pbVar4 = (short)iVar3;
      pbVar4[2] = 0;
      pbVar4[*(longlong *)(param_2 + 200) + (3 - lVar2)] = 0;
      uVar5 = uVar5 - 1;
      pbVar4 = pbVar4 + 0x14;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 143c8f7d0 would_apply body=143 status=ok
// SIG undefined would_apply(void)

undefined8 OT::AlternateSubstFormat1::would_apply(longlong param_1,longlong param_2)

{
  int iVar1;
  byte *pbVar2;
  ushort uVar3;
  short sVar4;
  undefined4 local_res10 [6];
  
  if (*(int *)(param_2 + 0x10) == 1) {
    uVar3 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
    if (uVar3 == 0) {
      pbVar2 = &DAT_146bc87b0;
    }
    else {
      pbVar2 = (byte *)(param_1 + (ulonglong)uVar3);
    }
    local_res10[0] = **(undefined4 **)(param_2 + 8);
    sVar4 = (ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1];
    if (sVar4 == 1) {
      iVar1 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                        (pbVar2 + 2,local_res10);
    }
    else {
      if (sVar4 != 2) {
        return 0;
      }
      iVar1 = CoverageFormat2::get_coverage();
    }
    if (iVar1 != -1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8f860 would_apply body=290 status=ok
// SIG undefined would_apply(void)

void OT::ChainContextFormat1::would_apply(longlong param_1,longlong param_2)

{
  uint uVar1;
  short sVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  ushort uVar5;
  undefined4 local_res8 [2];
  undefined1 *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  puVar3 = &DAT_146bc87b0;
  pbVar4 = &DAT_146bc87b0;
  uVar5 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar5 != 0) {
    pbVar4 = (byte *)(param_1 + (ulonglong)uVar5);
  }
  sVar2 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
  if (sVar2 == 1) {
    local_res8[0] = **(undefined4 **)(param_2 + 8);
    uVar1 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar4 + 2,local_res8);
  }
  else if (sVar2 == 2) {
    uVar1 = CoverageFormat2::get_coverage(pbVar4,**(undefined4 **)(param_2 + 8));
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (uVar1 < (ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5))) {
    pbVar4 = (byte *)(param_1 + ((ulonglong)uVar1 + 3) * 2);
  }
  else {
    pbVar4 = &DAT_146bc87b0;
  }
  uVar5 = (ushort)pbVar4[1] + (ushort)*pbVar4 * 0x100;
  if (uVar5 != 0) {
    puVar3 = (undefined1 *)(param_1 + (ulonglong)uVar5);
  }
  local_10 = 0;
  local_28 = &LAB_143c882b0;
  local_20 = 0;
  uStack_18 = 0;
  ChainRuleSet::would_apply(puVar3,param_2,&local_28);
  return;
}



// FUNCTION 143c8f990 would_apply body=312 status=ok
// SIG undefined would_apply(void)

void OT::ChainContextFormat2::would_apply(longlong param_1,longlong param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  puVar5 = &DAT_146bc87b0;
  puVar3 = &DAT_146bc87b0;
  uVar1 = (uint)(ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5));
  if (uVar1 != 0) {
    puVar3 = (undefined1 *)(param_1 + (ulonglong)uVar1);
  }
  puVar4 = &DAT_146bc87b0;
  uVar2 = (ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7);
  if (uVar2 != 0) {
    puVar4 = (undefined1 *)(param_1 + (ulonglong)uVar2);
  }
  puVar7 = &DAT_146bc87b0;
  uVar2 = (ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9);
  if (uVar2 != 0) {
    puVar7 = (undefined1 *)(param_1 + (ulonglong)uVar2);
  }
  uVar1 = ClassDef::get_class(puVar4,**(undefined4 **)(param_2 + 8));
  if (uVar1 < (ushort)((ushort)*(byte *)(param_1 + 10) * 0x100 + (ushort)*(byte *)(param_1 + 0xb)))
  {
    pbVar6 = (byte *)(param_1 + ((ulonglong)uVar1 + 6) * 2);
  }
  else {
    pbVar6 = &DAT_146bc87b0;
  }
  uVar2 = (ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1];
  if (uVar2 != 0) {
    puVar5 = (undefined1 *)(param_1 + (ulonglong)uVar2);
  }
  local_38 = match_class;
  local_30 = puVar3;
  local_28 = puVar4;
  local_20 = puVar7;
  ChainRuleSet::would_apply(puVar5,param_2,&local_38);
  return;
}



// FUNCTION 143c8fad0 would_apply body=210 status=ok
// SIG undefined would_apply(void)

undefined8 OT::ChainContextFormat3::would_apply(longlong param_1,longlong param_2)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(param_1 + 2) +
           ((uint)(ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3))
            * 2 + 2);
  uVar2 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
  uVar3 = (ulonglong)((uint)uVar2 * 2 + 2);
  if ((*(char *)(param_2 + 0x14) == '\0') ||
     (((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0 &&
      ((ushort)((ushort)pbVar4[uVar3] * 0x100 + (ushort)pbVar4[uVar3 + 1]) == 0)))) {
    cVar1 = would_match_input(param_2,uVar2,pbVar4 + 4,match_coverage,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8fbb0 would_apply body=186 status=ok
// SIG undefined would_apply(void)

undefined8 OT::ChainRule::would_apply(byte *param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar5 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  param_1 = param_1 + ((uint)uVar5 * 2 + 2);
  uVar4 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (uVar4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = uVar4 - 1;
  }
  uVar3 = (ulonglong)(iVar2 * 2 + 2);
  if ((*(char *)(param_2 + 0x14) == '\0') ||
     ((uVar5 == 0 && ((ushort)((ushort)param_1[uVar3] * 0x100 + (ushort)param_1[uVar3 + 1]) == 0))))
  {
    cVar1 = would_match_input(param_2,uVar4,param_1 + 2,*param_3,param_3[2]);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143c8fc70 would_apply body=210 status=ok
// SIG undefined would_apply(void)

undefined8 OT::ChainRuleSet::would_apply(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  byte *pbVar2;
  ushort uVar3;
  uint uVar4;
  byte *pbVar5;
  ushort uVar6;
  
  uVar4 = 0;
  uVar6 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (uVar6 != 0) {
    do {
      if (uVar4 < (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1])) {
        pbVar5 = param_1 + ((ulonglong)uVar4 + 1) * 2;
      }
      else {
        pbVar5 = &DAT_146bc87b0;
      }
      pbVar2 = &DAT_146bc87b0;
      uVar3 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
      if (uVar3 != 0) {
        pbVar2 = param_1 + uVar3;
      }
      cVar1 = ChainRule::would_apply(pbVar2,param_2,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  return 0;
}



// FUNCTION 143c8fd50 would_apply body=279 status=ok
// SIG undefined would_apply(void)

void OT::ContextFormat1::would_apply(longlong param_1,longlong param_2)

{
  uint uVar1;
  short sVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ushort uVar6;
  undefined4 local_res8 [2];
  undefined1 *local_18;
  undefined8 local_10;
  
  puVar3 = &DAT_146bc87b0;
  pbVar4 = &DAT_146bc87b0;
  uVar6 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar6 != 0) {
    pbVar4 = (byte *)(param_1 + (ulonglong)uVar6);
  }
  sVar2 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
  if (sVar2 == 1) {
    local_res8[0] = **(undefined4 **)(param_2 + 8);
    uVar1 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar4 + 2,local_res8);
  }
  else {
    if (sVar2 != 2) {
      uVar5 = 0xffffffff;
      goto LAB_143c8fdea;
    }
    uVar1 = CoverageFormat2::get_coverage(pbVar4,**(undefined4 **)(param_2 + 8));
  }
  uVar5 = (ulonglong)uVar1;
LAB_143c8fdea:
  if ((uint)uVar5 <
      (uint)(ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5))) {
    pbVar4 = (byte *)(param_1 + (uVar5 + 3) * 2);
  }
  else {
    pbVar4 = &DAT_146bc87b0;
  }
  uVar6 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
  if (uVar6 != 0) {
    puVar3 = (undefined1 *)(param_1 + (ulonglong)uVar6);
  }
  local_10 = 0;
  local_18 = &LAB_143c882b0;
  RuleSet::would_apply(puVar3,param_2,&local_18);
  return;
}



// FUNCTION 143c8fe70 would_apply body=230 status=ok
// SIG undefined would_apply(void)

void OT::ContextFormat2::would_apply(longlong param_1,longlong param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  code *local_18;
  undefined1 *local_10;
  
  puVar4 = &DAT_146bc87b0;
  puVar3 = &DAT_146bc87b0;
  uVar1 = (uint)(ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5));
  if (uVar1 != 0) {
    puVar3 = (undefined1 *)(param_1 + (ulonglong)uVar1);
  }
  uVar1 = ClassDef::get_class(puVar3,**(undefined4 **)(param_2 + 8));
  if (uVar1 < (ushort)((ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7))) {
    pbVar5 = (byte *)(param_1 + ((ulonglong)uVar1 + 4) * 2);
  }
  else {
    pbVar5 = &DAT_146bc87b0;
  }
  uVar2 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
  if (uVar2 != 0) {
    puVar4 = (undefined1 *)(param_1 + (ulonglong)uVar2);
  }
  local_18 = match_class;
  local_10 = puVar3;
  RuleSet::would_apply(puVar4,param_2,&local_18);
  return;
}



// FUNCTION 143c8ff60 would_apply body=213 status=ok
// SIG undefined would_apply(void)

ulonglong OT::Ligature::would_apply(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ushort uVar4;
  byte *pbVar5;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar4 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar1 != uVar4) {
    return (ulonglong)(byte)(uVar4 >> 8) << 8;
  }
  uVar3 = 1;
  if (1 < uVar1) {
    do {
      uVar2 = (uint)uVar3;
      if ((uVar2 < (ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3))
          ) && (uVar2 != 0)) {
        pbVar5 = (byte *)(param_1 + 2) + ((ulonglong)(uVar2 - 1) + 1) * 2;
      }
      else {
        pbVar5 = &DAT_146bc87b0;
      }
      if (*(uint *)(*(longlong *)(param_2 + 8) + uVar3 * 4) !=
          (uint)(ushort)((ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1])) {
        return uVar3 & 0xffffffffffffff00;
      }
      uVar3 = (ulonglong)(uVar2 + 1);
    } while (uVar2 + 1 < uVar1);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 143c90040 would_apply body=172 status=ok
// SIG undefined would_apply(void)

undefined8 OT::LigatureSet::would_apply(byte *param_1,undefined8 param_2)

{
  char cVar1;
  byte *pbVar2;
  ushort uVar3;
  uint uVar4;
  byte *pbVar5;
  ushort uVar6;
  
  uVar4 = 0;
  uVar6 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (uVar6 != 0) {
    if (uVar6 != 0) goto LAB_143c90090;
    pbVar5 = &DAT_146bc87b0;
    while( true ) {
      pbVar2 = &DAT_146bc87b0;
      uVar3 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
      if (uVar3 != 0) {
        pbVar2 = param_1 + uVar3;
      }
      cVar1 = Ligature::would_apply(pbVar2,param_2);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar4 = uVar4 + 1;
      if (uVar6 <= uVar4) break;
LAB_143c90090:
      pbVar5 = param_1 + ((ulonglong)uVar4 + 1) * 2;
    }
  }
  return 0;
}



// FUNCTION 143c900f0 would_apply body=253 status=ok
// SIG undefined would_apply(void)

ulonglong OT::LigatureSubstFormat1::would_apply(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  ushort uVar4;
  short sVar5;
  undefined4 local_res8 [2];
  
  puVar3 = &DAT_146bc87b0;
  uVar4 = (ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3);
  if (uVar4 == 0) {
    pbVar2 = &DAT_146bc87b0;
  }
  else {
    pbVar2 = (byte *)(param_1 + (ulonglong)uVar4);
  }
  uVar1 = 0;
  sVar5 = (ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1];
  if (sVar5 == 1) {
    local_res8[0] = **(undefined4 **)(param_2 + 8);
    uVar1 = SortedArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::bsearch<unsigned_int>
                      (pbVar2 + 2,local_res8);
  }
  else {
    if (sVar5 != 2) goto LAB_143c90186;
    uVar1 = CoverageFormat2::get_coverage();
  }
  if ((uint)uVar1 != 0xffffffff) {
    if ((uint)uVar1 <
        (uint)(ushort)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5))) {
      pbVar2 = (byte *)(param_1 + ((uVar1 & 0xffffffff) + 3) * 2);
    }
    else {
      pbVar2 = &DAT_146bc87b0;
    }
    uVar4 = (ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1];
    if (uVar4 != 0) {
      puVar3 = (undefined1 *)(param_1 + (ulonglong)uVar4);
    }
    uVar1 = LigatureSet::would_apply(puVar3,param_2);
    return uVar1;
  }
LAB_143c90186:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143c901f0 would_apply body=261 status=ok
// SIG undefined would_apply(void)

undefined8 OT::RuleSet::would_apply(byte *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ushort uVar6;
  
  uVar3 = 0;
  uVar6 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  if (uVar6 != 0) {
    do {
      if (uVar3 < (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1])) {
        pbVar4 = param_1 + ((ulonglong)uVar3 + 1) * 2;
      }
      else {
        pbVar4 = &DAT_146bc87b0;
      }
      pbVar5 = &DAT_146bc87b0;
      uVar2 = (ushort)*pbVar4 * 0x100 + (ushort)pbVar4[1];
      if (uVar2 != 0) {
        pbVar5 = param_1 + uVar2;
      }
      cVar1 = would_match_input(param_2,(ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1],pbVar5 + 4,
                                *param_3,param_3[1]);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar6);
  }
  return 0;
}



// FUNCTION 143c90300 would_match_input body=150 status=ok
// SIG undefined would_match_input(void)

undefined8
OT::would_match_input
          (longlong param_1,uint param_2,longlong param_3,code *param_4,undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_2 != *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  uVar2 = 1;
  if (1 < param_2) {
    lVar3 = 4;
    do {
      cVar1 = (*param_4)(*(undefined4 *)(*(longlong *)(param_1 + 8) + lVar3),
                         param_3 + (ulonglong)(uVar2 - 1) * 2,param_5);
      if (cVar1 == '\0') {
        return 0;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 4;
    } while (uVar2 < param_2);
  }
  return 1;
}



// FUNCTION 143c903a0 hb_ot_layout_feature_get_lookups body=62 status=ok
// SIG undefined hb_ot_layout_feature_get_lookups(void)

void hb_ot_layout_feature_get_lookups
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = get_gsubgpos_table();
  lVar2 = OT::GSUBGPOS::get_feature(uVar1,param_3);
  OT::IndexArray::get_indexes(lVar2 + 2,param_4,param_5,param_6);
  return;
}



// FUNCTION 143c903e0 hb_ot_layout_has_positioning body=67 status=ok
// SIG undefined hb_ot_layout_has_positioning(void)

bool hb_ot_layout_has_positioning(longlong param_1)

{
  char cVar1;
  
  cVar1 = hb_ot_shaper_face_data_ensure();
  if (cVar1 == '\0') {
    return false;
  }
  return *(undefined1 **)(*(longlong *)(param_1 + 0xa0) + 0x28) != &DAT_146bc87b0;
}



// FUNCTION 143c90430 hb_ot_layout_language_find_feature body=408 status=ok
// SIG undefined hb_ot_layout_language_find_feature(void)

undefined8
hb_ot_layout_language_find_feature
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          uint *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  byte *pbVar8;
  uint uVar9;
  
  lVar2 = get_gsubgpos_table();
  uVar3 = OT::GSUBGPOS::get_script(lVar2,param_3);
  lVar4 = OT::Script::get_lang_sys(uVar3,param_4);
  uVar9 = 0;
  uVar7 = (ushort)*(byte *)(lVar4 + 4) * 0x100 + (ushort)*(byte *)(lVar4 + 5);
  if (uVar7 != 0) {
    do {
      if (uVar9 < (ushort)((ushort)*(byte *)(lVar4 + 4) * 0x100 + (ushort)*(byte *)(lVar4 + 5))) {
        pbVar8 = (byte *)(lVar4 + 4) + ((ulonglong)uVar9 + 1) * 2;
      }
      else {
        pbVar8 = &DAT_145d3a438;
      }
      uVar5 = (ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1];
      if (uVar5 == 0xffff) {
        iVar1 = 0;
      }
      else {
        pbVar8 = &DAT_146bc87b0;
        uVar6 = (ushort)*(byte *)(lVar2 + 6) * 0x100 + (ushort)*(byte *)(lVar2 + 7);
        if (uVar6 != 0) {
          pbVar8 = (byte *)(lVar2 + (ulonglong)uVar6);
        }
        if (uVar5 < (ushort)((ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1])) {
          pbVar8 = pbVar8 + (ulonglong)uVar5 * 6 + 2;
        }
        else {
          pbVar8 = &DAT_145d3a454;
        }
        iVar1 = (uint)pbVar8[1] * 0x10000 + (uint)pbVar8[2] * 0x100 + (uint)*pbVar8 * 0x1000000 +
                (uint)pbVar8[3];
      }
      if (param_5 == iVar1) {
        if (param_6 != (uint *)0x0) {
          *param_6 = (uint)uVar5;
        }
        return 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar7);
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = 0xffff;
  }
  return 0;
}



// FUNCTION 143c905d0 hb_ot_layout_language_get_required_feature body=211 status=ok
// SIG undefined hb_ot_layout_language_get_required_feature(void)

bool hb_ot_layout_language_get_required_feature
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               uint *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar2 = get_gsubgpos_table();
  uVar3 = OT::GSUBGPOS::get_script(uVar2,param_3);
  lVar4 = OT::Script::get_lang_sys(uVar3,param_4);
  if ((ushort)((ushort)*(byte *)(lVar4 + 2) * 0x100 + (ushort)*(byte *)(lVar4 + 3)) == -1) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = (uint)(ushort)((ushort)*(byte *)(lVar4 + 2) * 0x100 + (ushort)*(byte *)(lVar4 + 3));
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar5;
  }
  if (param_6 != (undefined4 *)0x0) {
    uVar1 = OT::GSUBGPOS::get_feature_tag(uVar2);
    *param_6 = uVar1;
  }
  return (ushort)((ushort)*(byte *)(lVar4 + 2) * 0x100 + (ushort)*(byte *)(lVar4 + 3)) != -1;
}



// FUNCTION 143c906b0 hb_ot_layout_script_find_language body=177 status=ok
// SIG undefined hb_ot_layout_script_find_language(void)

undefined8
hb_ot_layout_script_find_language
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res20 [2];
  
  uVar2 = get_gsubgpos_table();
  lVar3 = OT::GSUBGPOS::get_script(uVar2,param_3);
  local_res20[0] = param_4;
  iVar1 = OT::SortedArrayOf<OT::Record<OT::LangSys>,OT::IntType<unsigned_short,2>_>::
          bsearch<unsigned_int>(lVar3 + 2,local_res20);
  if (iVar1 != -1) {
    if (param_5 != (int *)0x0) {
      *param_5 = iVar1;
    }
    return 1;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = 0xffff;
  }
  local_res20[0] = 0x64666c74;
  iVar1 = OT::SortedArrayOf<OT::Record<OT::LangSys>,OT::IntType<unsigned_short,2>_>::
          bsearch<unsigned_int>(lVar3 + 2,local_res20);
  if (iVar1 == -1) {
    if (param_5 != (int *)0x0) {
      *param_5 = 0xffff;
      *param_5 = 0xffff;
    }
  }
  else if (param_5 != (int *)0x0) {
    *param_5 = iVar1;
    return 0;
  }
  return 0;
}



// FUNCTION 143c90770 hb_ot_layout_table_choose_script body=337 status=ok
// SIG undefined hb_ot_layout_table_choose_script(void)

undefined8
hb_ot_layout_table_choose_script
          (undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ushort uVar7;
  int local_res18 [4];
  
  lVar5 = get_gsubgpos_table();
  iVar2 = *param_3;
  iVar4 = local_res18[0];
  while( true ) {
    local_res18[0] = iVar2;
    if (local_res18[0] == 0) {
      local_res18[0] = iVar4;
      cVar3 = OT::GSUBGPOS::find_script_index(lVar5,0x44464c54,param_4);
      if (cVar3 == '\0') {
        cVar3 = OT::GSUBGPOS::find_script_index(lVar5,0x64666c74,param_4);
        if (cVar3 == '\0') {
          cVar3 = OT::GSUBGPOS::find_script_index(lVar5,0x6c61746e,param_4);
          if (cVar3 == '\0') {
            if (param_4 != (int *)0x0) {
              *param_4 = 0xffff;
            }
            if (param_5 != (int *)0x0) {
              *param_5 = 0xffff;
            }
          }
          else if (param_5 != (int *)0x0) {
            *param_5 = 0x6c61746e;
          }
        }
        else if (param_5 != (int *)0x0) {
          *param_5 = 0x64666c74;
        }
      }
      else if (param_5 != (int *)0x0) {
        *param_5 = 0x44464c54;
      }
      return 0;
    }
    puVar6 = &DAT_146bc87b0;
    uVar7 = (ushort)*(byte *)(lVar5 + 4) * 0x100 + (ushort)*(byte *)(lVar5 + 5);
    if (uVar7 != 0) {
      puVar6 = (undefined1 *)(lVar5 + (ulonglong)uVar7);
    }
    iVar4 = OT::SortedArrayOf<OT::Record<OT::LangSys>,OT::IntType<unsigned_short,2>_>::
            bsearch<unsigned_int>(puVar6,local_res18);
    if (iVar4 != -1) break;
    if (param_4 != (int *)0x0) {
      *param_4 = 0xffff;
    }
    piVar1 = param_3 + 1;
    param_3 = param_3 + 1;
    iVar2 = *piVar1;
    iVar4 = local_res18[0];
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar4;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = *param_3;
  }
  return 1;
}



// FUNCTION 143c908d0 hb_ot_layout_table_get_lookup_count body=41 status=ok
// SIG undefined hb_ot_layout_table_get_lookup_count(void)

undefined4 hb_ot_layout_table_get_lookup_count(longlong param_1,int param_2)

{
  if (param_2 == 0x47504f53) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x34);
  }
  if (param_2 != 0x47535542) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x30);
}



// FUNCTION 143c90900 hb_ot_map_builder_t body=288 status=ok
// SIG undefined hb_ot_map_builder_t(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
hb_ot_map_builder_t::hb_ot_map_builder_t(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  ::_guard_xfg_dispatch_icall_nop(param_1,0,0x500);
  *param_1 = param_2;
  uVar3 = param_3[1];
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  local_48 = 0;
  *(undefined4 *)(param_1 + 1) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  local_40 = 0;
  uVar3 = param_3[5];
  uVar1 = param_3[6];
  uVar2 = param_3[7];
  *(undefined4 *)(param_1 + 3) = param_3[4];
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  hb_ot_tags_from_script(*(undefined4 *)((longlong)param_1 + 0xc),&local_48,(longlong)&local_48 + 4)
  ;
  uVar3 = hb_ot_tag_from_language(param_1[2]);
  puVar7 = &DAT_145d3a4d0;
  puVar8 = param_1 + 6;
  lVar5 = (longlong)param_1 + 0x34;
  lVar6 = 2;
  do {
    uVar1 = *puVar7;
    local_58 = lVar5 + -0xc;
    iVar4 = hb_ot_layout_table_choose_script(*param_1,uVar1,&local_48,lVar5);
    local_58 = lVar5 + 8;
    *(bool *)puVar8 = iVar4 != 0;
    hb_ot_layout_script_find_language
              (*param_1,uVar1,*(undefined4 *)((longlong)puVar7 + (longlong)param_1 + -0x145d3a49c),
               uVar3);
    lVar5 = lVar5 + 4;
    puVar7 = puVar7 + 1;
    puVar8 = (undefined8 *)((longlong)puVar8 + 1);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return param_1;
}



// FUNCTION 143c90a20 add_feature body=124 status=ok
// SIG undefined add_feature(void)

void hb_ot_map_builder_t::add_feature(longlong param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)hb_prealloced_array_t<hb_ot_map_builder_t::feature_info_t,32>::push();
  if ((piVar1 != (int *)0x0) && (param_2 != 0)) {
    *piVar1 = param_2;
    iVar2 = *(int *)(param_1 + 0x50);
    piVar1[3] = param_4;
    piVar1[1] = iVar2;
    piVar1[2] = param_3;
    iVar2 = 0;
    if ((param_4 & 1) != 0) {
      iVar2 = param_3;
    }
    piVar1[4] = iVar2;
    piVar1[5] = *(int *)(param_1 + 0x44);
    piVar1[6] = *(int *)(param_1 + 0x48);
  }
  return;
}



// FUNCTION 143c90aa0 add_lookups body=572 status=ok
// SIG undefined add_lookups(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void hb_ot_map_t::add_lookups
               (longlong param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4,
               undefined4 param_5,byte param_6)

{
  longlong lVar1;
  uint uVar2;
  void *_Dst;
  uint uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_128 [32];
  uint *local_108;
  uint *local_100;
  uint local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  uint local_d8 [32];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  param_3 = param_3 & 0xffffffff;
  local_f0 = param_4;
  local_e8 = param_2;
  uVar2 = hb_ot_layout_table_get_lookup_count(param_2,(&DAT_145d3a4d0)[param_3]);
  local_f4 = 0;
  do {
    local_100 = local_d8;
    local_108 = &local_f8;
    local_f8 = 0x20;
    hb_ot_layout_feature_get_lookups(param_2,(&DAT_145d3a4d0)[param_3],param_4,local_f4);
    uVar7 = 0;
    uVar3 = local_f8;
    if (local_f8 != 0) {
      do {
        if (local_d8[uVar7] < uVar2) {
          lVar5 = param_3 * 0x110;
          if (*(longlong *)(lVar5 + 0x148 + param_1) == 0) {
            *(undefined4 *)(lVar5 + 0x144 + param_1) = 0x20;
            *(longlong *)(lVar5 + 0x148 + param_1) = param_1 + 0x150 + lVar5;
          }
          uVar6 = *(uint *)(lVar5 + 0x140 + param_1);
          uVar3 = *(uint *)(lVar5 + 0x144 + param_1);
          if (uVar6 < uVar3) {
            puVar4 = (undefined2 *)(*(longlong *)(lVar5 + 0x148 + param_1) + (ulonglong)uVar6 * 8);
          }
          else {
            lVar1 = *(longlong *)(lVar5 + 0x148 + param_1);
            uVar8 = uVar3 + 8 + (uVar3 >> 1);
            if (lVar1 == param_1 + 0x150 + lVar5) {
              _Dst = (void *)HarfBuzzCalloc(uVar8,8);
              if (_Dst == (void *)0x0) {
                return;
              }
              ::_guard_xfg_dispatch_icall_nop
                        (_Dst,*(void **)(lVar5 + 0x148 + param_1),
                         (ulonglong)*(uint *)(lVar5 + 0x140 + param_1) << 3);
            }
            else {
              if (uVar8 < uVar3) {
                return;
              }
              if (0x1ffffffe < uVar8) {
                return;
              }
              _Dst = (void *)HarfBuzzRealloc(lVar1,(ulonglong)uVar8 << 3);
            }
            if (_Dst == (void *)0x0) {
              return;
            }
            uVar6 = *(uint *)(lVar5 + 0x140 + param_1);
            *(void **)(lVar5 + 0x148 + param_1) = _Dst;
            *(uint *)(lVar5 + 0x144 + param_1) = uVar8;
            puVar4 = (undefined2 *)((longlong)_Dst + (ulonglong)uVar6 * 8);
          }
          *(uint *)(lVar5 + 0x140 + param_1) = uVar6 + 1;
          if (puVar4 == (undefined2 *)0x0) {
            return;
          }
          *(undefined4 *)(puVar4 + 2) = param_5;
          *puVar4 = (short)local_d8[uVar7];
          puVar4[1] = puVar4[1] & 0xfffe;
          puVar4[1] = puVar4[1] | (ushort)(param_6 & 1);
          uVar3 = local_f8;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        param_2 = local_e8;
        param_4 = local_f0;
      } while (uVar6 < uVar3);
    }
    local_f4 = local_f4 + uVar3;
    if (uVar3 != 0x20) {
      return;
    }
  } while( true );
}



// FUNCTION 143c90ce0 add_pause body=81 status=ok
// SIG undefined add_pause(void)

void hb_ot_map_builder_t::add_pause(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  
  param_2 = param_2 & 0xffffffff;
  puVar2 = (undefined4 *)
           hb_prealloced_array_t<hb_ot_map_builder_t::stage_info_t,8>::push
                     (param_1 + 0x3e0 + param_2 * 0x90);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *(undefined4 *)(param_1 + 0x44 + param_2 * 4);
    *(undefined8 *)(puVar2 + 2) = param_3;
  }
  piVar1 = (int *)(param_1 + 0x44 + param_2 * 4);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 143c90d90 compile body=1719 status=ok
// SIG undefined compile(void)

void hb_ot_map_builder_t::compile(undefined8 *param_1,longlong param_2)

{
  ushort *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  int *piVar17;
  uint *puVar18;
  longlong *plVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  undefined8 *puVar26;
  longlong local_res18;
  undefined8 uStack_b0;
  undefined4 auStack_a4 [4];
  int aiStack_94 [3];
  undefined1 *local_88;
  undefined8 *local_80;
  uint *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  
  lVar14 = 0;
  *(undefined4 *)(param_2 + 0xc) = 1;
  local_68 = 0;
  puVar16 = (undefined1 *)(param_2 + 8);
  puVar12 = (undefined4 *)((longlong)param_1 + 0x3c);
  lVar25 = 2;
  local_60 = 0x145d3a494 - (longlong)param_1;
  do {
    uVar3 = *(undefined4 *)((longlong)puVar12 + (0x145d3a494 - (longlong)param_1));
    local_88 = local_50 + lVar14;
    *(undefined4 *)((param_2 - (longlong)param_1) + -0x3c + (longlong)puVar12) = puVar12[-5];
    *puVar16 = puVar16[(longlong)param_1 + (0x28 - param_2)];
    local_80 = (undefined8 *)((longlong)&local_58 + lVar14);
    uStack_b0 = 0x143c90e2d;
    hb_ot_layout_language_get_required_feature(*param_1,uVar3,puVar12[-2],*puVar12);
    lVar14 = lVar14 + 4;
    puVar16 = puVar16 + 1;
    puVar12 = puVar12 + 1;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  if (*(int *)(param_1 + 10) != 0) {
    uStack_b0 = 0x143c90e6a;
    qsort((void *)param_1[0xb],(ulonglong)*(uint *)(param_1 + 10),0x1c,
          (_PtFuncCompare *)&LAB_143c90d40);
    uVar24 = 0;
    uVar23 = 1;
    if (1 < *(uint *)(param_1 + 10)) {
      lVar14 = 0;
      do {
        lVar25 = param_1[0xb];
        lVar21 = uVar23 * 0x1c;
        if (*(int *)(lVar25 + lVar21) == *(int *)(lVar14 + lVar25)) {
          if ((*(byte *)(lVar25 + 0xc + lVar21) & 1) == 0) {
            puVar18 = (uint *)(lVar14 + 0xc + lVar25);
            *puVar18 = *puVar18 & 0xfffffffe;
            lVar25 = param_1[0xb];
            uVar22 = *(uint *)(lVar25 + 8 + lVar21);
            if (uVar22 < *(uint *)(lVar25 + 8 + lVar14)) {
              uVar22 = *(uint *)(lVar25 + 8 + lVar14);
            }
            *(uint *)(lVar25 + 8 + lVar14) = uVar22;
          }
          else {
            puVar18 = (uint *)(lVar14 + 0xc + lVar25);
            *puVar18 = *puVar18 | 1;
            *(undefined4 *)(param_1[0xb] + 8 + lVar14) = *(undefined4 *)(param_1[0xb] + 8 + lVar21);
            *(undefined4 *)(param_1[0xb] + 0x10 + lVar14) =
                 *(undefined4 *)(param_1[0xb] + 0x10 + lVar21);
          }
          puVar18 = (uint *)(param_1[0xb] + 0xc + lVar14);
          *puVar18 = *puVar18 | *(uint *)(param_1[0xb] + 0xc + lVar21) & 2;
          lVar25 = param_1[0xb];
          uVar22 = *(uint *)(lVar25 + 0x14 + lVar21);
          if (*(uint *)(lVar25 + 0x14 + lVar14) < uVar22) {
            uVar22 = *(uint *)(lVar25 + 0x14 + lVar14);
          }
          *(uint *)(lVar25 + 0x14 + lVar14) = uVar22;
          lVar25 = param_1[0xb] + lVar14;
          uVar22 = *(uint *)(param_1[0xb] + 0x18 + lVar21);
          if (*(uint *)(lVar25 + 0x18) < uVar22) {
            uVar22 = *(uint *)(lVar25 + 0x18);
          }
          *(uint *)(lVar25 + 0x18) = uVar22;
        }
        else {
          puVar12 = (undefined4 *)(lVar25 + lVar21);
          uVar3 = puVar12[1];
          uVar4 = puVar12[2];
          uVar5 = puVar12[3];
          uVar24 = uVar24 + 1;
          lVar14 = (ulonglong)uVar24 * 0x1c;
          puVar2 = (undefined4 *)(lVar14 + lVar25);
          *puVar2 = *puVar12;
          puVar2[1] = uVar3;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          *(undefined8 *)(lVar14 + 0x10 + lVar25) = *(undefined8 *)(lVar25 + 0x10 + lVar21);
          *(undefined4 *)(lVar14 + 0x18 + lVar25) = *(undefined4 *)(lVar25 + 0x18 + lVar21);
        }
        uVar22 = (int)uVar23 + 1;
        uVar23 = (ulonglong)uVar22;
      } while (uVar22 < *(uint *)(param_1 + 10));
    }
    if (uVar24 + 1 < *(uint *)(param_1 + 10)) {
      *(uint *)(param_1 + 10) = uVar24 + 1;
    }
    uVar23 = 0;
    iVar20 = 1;
    local_res18._0_4_ = 1;
    uVar24 = 0;
    if (*(int *)(param_1 + 10) != 0) {
      do {
        iVar6 = (int)local_res18;
        piVar17 = (int *)(uVar23 * 0x1c + param_1[0xb]);
        if (((*(byte *)(piVar17 + 3) & 1) == 0) || (piVar17[2] != 1)) {
          uVar22 = piVar17[2];
          iVar7 = 0;
          uVar8 = uVar22;
          if (uVar22 != 0) {
            do {
              iVar7 = iVar7 + 1;
              uVar8 = uVar8 >> 1;
            } while (uVar8 != 0);
            goto LAB_143c90fc6;
          }
        }
        else {
          iVar7 = 0;
          uVar22 = 1;
LAB_143c90fc6:
          if (uVar22 != 0) {
            local_78 = (uint *)CONCAT44(local_78._4_4_,iVar7 + iVar20);
            if ((uint)(iVar7 + iVar20) < 0x21) {
              uVar22 = 0;
              puVar12 = (undefined4 *)((longlong)param_1 + 0x3c);
              puVar26 = &local_70;
              lVar14 = 2;
              do {
                iVar20 = *piVar17;
                if (*(int *)(((longlong)aiStack_94 - (longlong)param_1) + (longlong)puVar12) ==
                    iVar20) {
                  *(undefined4 *)((longlong)puVar12 + ((longlong)auStack_a4 - (longlong)param_1)) =
                       *(undefined4 *)
                        ((longlong)puVar12 + (longlong)piVar17 + (-0x28 - (longlong)param_1));
                }
                local_88 = (undefined1 *)CONCAT44(local_88._4_4_,iVar20);
                uStack_b0 = 0x143c91041;
                local_80 = puVar26;
                uVar8 = hb_ot_layout_language_find_feature
                                  (*param_1,*(undefined4 *)(local_60 + (longlong)puVar12),
                                   puVar12[-2],*puVar12);
                uVar22 = uVar22 | uVar8;
                puVar26 = (undefined8 *)((longlong)puVar26 + 4);
                puVar12 = puVar12 + 1;
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
              if (uVar22 == 0) {
                if ((*(byte *)(piVar17 + 3) & 8) != 0) {
                  puVar12 = &DAT_145d3a4d0;
                  puVar26 = &local_70;
                  lVar14 = 2;
                  uVar22 = 0;
                  do {
                    uStack_b0 = 0x143c91091;
                    uVar8 = hb_ot_layout_table_find_feature(*param_1,*puVar12,*piVar17,puVar26);
                    uVar22 = uVar22 | uVar8;
                    puVar12 = puVar12 + 1;
                    puVar26 = (undefined8 *)((longlong)puVar26 + 4);
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                  if (uVar22 != 0) goto LAB_143c910af;
                }
                iVar20 = (int)local_res18;
                if ((*(byte *)(piVar17 + 3) & 2) == 0) goto LAB_143c9118d;
              }
LAB_143c910af:
              uStack_b0 = 0x143c910b8;
              piVar9 = (int *)hb_prealloced_array_t<hb_ot_map_t::feature_map_t,8>::push
                                        (param_2 + 0x10);
              if (piVar9 == (int *)0x0) break;
              *piVar9 = *piVar17;
              piVar9[1] = (int)local_70;
              piVar9[2] = local_70._4_4_;
              piVar9[3] = piVar17[5];
              piVar9[4] = piVar17[6];
              piVar9[8] = piVar9[8] ^ (~((uint)piVar17[3] >> 1) ^ piVar9[8]) & 2;
              if (((*(byte *)(piVar17 + 3) & 1) == 0) || (piVar17[2] != 1)) {
                piVar9[5] = (int)local_res18;
                local_res18._0_4_ = (int)local_78;
                uVar8 = (1 << ((byte)local_78 & 0x1f)) - (1 << ((byte)iVar6 & 0x1f));
                piVar9[6] = uVar8;
                *(uint *)(param_2 + 0xc) =
                     *(uint *)(param_2 + 0xc) | piVar17[4] << ((byte)iVar6 & 0x1f) & uVar8;
              }
              else {
                piVar9[5] = 0;
                piVar9[6] = 1;
              }
              piVar9[8] = piVar9[8] & 0xfffffffe;
              piVar9[7] = 1 << ((byte)piVar9[5] & 0x1f) & piVar9[6];
              piVar9[8] = piVar9[8] | (uint)(uVar22 == 0);
              iVar20 = (int)local_res18;
            }
          }
        }
LAB_143c9118d:
        uVar24 = uVar24 + 1;
        uVar23 = (ulonglong)uVar24;
      } while (uVar24 < *(uint *)(param_1 + 10));
    }
    if (*(int *)(param_1 + 10) != 0) {
      *(undefined4 *)(param_1 + 10) = 0;
    }
    uStack_b0 = 0x143c911cd;
    add_pause(param_1,0);
    uStack_b0 = 0x143c911dc;
    add_pause(param_1);
    local_res18 = 0;
    uVar23 = 0;
    local_70 = (uint *)((longlong)param_1 + 0x44);
    lVar14 = (longlong)aiStack_94 - (longlong)param_1;
    puVar18 = (uint *)(param_2 + 0x140);
    local_60 = lVar14;
    plVar19 = param_1 + 0x7d;
    local_78 = puVar18;
    do {
      uVar24 = 0;
      uVar15 = 0;
      uVar22 = 0;
      local_78 = puVar18;
      if (*local_70 != 0) {
        do {
          uVar8 = (uint)uVar15;
          if ((*(int *)(lVar14 + (longlong)local_70) != 0xffff) &&
             (*(uint *)((longlong)&uStack_b0 + (4 - (longlong)param_1) + (longlong)local_70) ==
              uVar22)) {
            local_80 = (undefined8 *)CONCAT71(local_80._1_7_,1);
            local_88 = (undefined1 *)CONCAT44(local_88._4_4_,1);
            uStack_b0 = 0x143c9127f;
            hb_ot_map_t::add_lookups(param_2,*param_1,uVar23);
          }
          uVar13 = 0;
          if (*(int *)(param_2 + 0x10) != 0) {
            do {
              lVar25 = *(longlong *)(param_2 + 0x18);
              lVar14 = local_res18 + uVar13 * 9;
              if (*(uint *)(lVar25 + 0xc + lVar14 * 4) == uVar22) {
                lVar21 = lVar25 + uVar13 * 0x24;
                local_80 = (undefined8 *)
                           (CONCAT71(local_80._1_7_,(char)(*(uint *)(lVar21 + 0x20) >> 1)) &
                           0xffffffffffffff01);
                local_88 = (undefined1 *)CONCAT44(local_88._4_4_,*(undefined4 *)(lVar21 + 0x18));
                uStack_b0 = 0x143c912d2;
                hb_ot_map_t::add_lookups
                          (param_2,*param_1,uVar23,*(undefined4 *)(lVar25 + 4 + lVar14 * 4));
              }
              uVar11 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar11;
              puVar18 = local_78;
            } while (uVar11 < *(uint *)(param_2 + 0x10));
          }
          if (uVar8 < *puVar18) {
            lVar14 = uVar15 * 8;
            uStack_b0 = 0x143c91310;
            qsort((void *)(*(longlong *)(puVar18 + 2) + lVar14),(ulonglong)(*puVar18 - uVar8),8,
                  (_PtFuncCompare *)&LAB_143c90d70);
            uVar11 = uVar8 + 1;
            if (uVar11 < *puVar18) {
              do {
                lVar21 = *(longlong *)(puVar18 + 2);
                lVar25 = (ulonglong)uVar11 * 8;
                if (*(short *)(lVar25 + lVar21) == *(short *)(lVar14 + lVar21)) {
                  puVar10 = (uint *)(lVar14 + 4 + lVar21);
                  *puVar10 = *puVar10 | *(uint *)(lVar25 + 4 + lVar21);
                  puVar1 = (ushort *)(lVar14 + *(longlong *)(puVar18 + 2) + 2);
                  *puVar1 = *puVar1 & (*(ushort *)(lVar25 + 2 + *(longlong *)(puVar18 + 2)) | 0xfffe
                                      );
                }
                else {
                  uVar15 = (ulonglong)((int)uVar15 + 1);
                  lVar14 = uVar15 * 8;
                  *(undefined8 *)(lVar14 + lVar21) = *(undefined8 *)(lVar25 + lVar21);
                }
                uVar8 = (uint)uVar15;
                uVar11 = uVar11 + 1;
              } while (uVar11 < *puVar18);
            }
            if (uVar8 + 1 < *puVar18) {
              *puVar18 = uVar8 + 1;
            }
          }
          uVar8 = *puVar18;
          uVar15 = (ulonglong)uVar8;
          if ((uVar24 < *(uint *)(plVar19 + -1)) &&
             (*(uint *)(*plVar19 + (ulonglong)uVar24 * 0x10) == uVar22)) {
            uStack_b0 = 0x143c913b6;
            puVar10 = (uint *)hb_prealloced_array_t<hb_ot_map_t::stage_map_t,4>::push
                                        (uVar23 * 0x50 + 0x360 + param_2);
            if (puVar10 != (uint *)0x0) {
              *puVar10 = uVar8;
              *(undefined8 *)(puVar10 + 2) =
                   *(undefined8 *)(*plVar19 + 8 + (ulonglong)uVar24 * 0x10);
            }
            uVar24 = uVar24 + 1;
          }
          uVar22 = uVar22 + 1;
          lVar14 = local_60;
        } while (uVar22 < *local_70);
      }
      local_res18 = local_res18 + 1;
      local_70 = local_70 + 1;
      puVar18 = puVar18 + 0x44;
      plVar19 = plVar19 + 0x12;
      uVar24 = (int)uVar23 + 1;
      uVar23 = (ulonglong)uVar24;
      local_78 = puVar18;
    } while (uVar24 < 2);
  }
  return;
}



// FUNCTION 143c91450 push body=219 status=ok
// SIG undefined push(void)

void * hb_prealloced_array_t<hb_ot_map_builder_t::feature_info_t,32>::push(uint *param_1)

{
  uint uVar1;
  void *_Dst;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 2) == 0) {
    param_1[1] = 0x20;
    *(uint **)(param_1 + 2) = param_1 + 4;
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  if (uVar2 < uVar1) {
    *param_1 = uVar2 + 1;
    return (void *)((ulonglong)uVar2 * 0x1c + *(longlong *)(param_1 + 2));
  }
  uVar2 = uVar1 + 8 + (uVar1 >> 1);
  if (*(uint **)(param_1 + 2) == param_1 + 4) {
    _Dst = (void *)HarfBuzzCalloc(uVar2,0x1c);
    if (_Dst == (void *)0x0) {
      return (void *)0x0;
    }
    ::_guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_1 + 2),(ulonglong)*param_1 * 0x1c);
  }
  else {
    if (uVar2 < uVar1) {
      return (void *)0x0;
    }
    if (0x9249248 < uVar2) {
      return (void *)0x0;
    }
    _Dst = (void *)HarfBuzzRealloc(*(uint **)(param_1 + 2),(ulonglong)uVar2 * 0x1c);
  }
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  uVar1 = *param_1;
  *(void **)(param_1 + 2) = _Dst;
  param_1[1] = uVar2;
  *param_1 = uVar1 + 1;
  return (void *)((ulonglong)uVar1 * 0x1c + (longlong)_Dst);
}



// FUNCTION 143c91530 push body=230 status=ok
// SIG undefined push(void)

void * hb_prealloced_array_t<hb_ot_map_t::feature_map_t,8>::push(uint *param_1)

{
  uint uVar1;
  void *_Dst;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 2) == 0) {
    param_1[1] = 8;
    *(uint **)(param_1 + 2) = param_1 + 4;
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  if (uVar2 < uVar1) {
    *param_1 = uVar2 + 1;
    return (void *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar2 * 0x24);
  }
  uVar2 = uVar1 + 8 + (uVar1 >> 1);
  if (*(uint **)(param_1 + 2) == param_1 + 4) {
    _Dst = (void *)HarfBuzzCalloc((ulonglong)uVar2,0x24);
    if (_Dst == (void *)0x0) {
      return (void *)0x0;
    }
    ::_guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_1 + 2),(ulonglong)*param_1 * 0x24);
  }
  else {
    if (uVar2 < uVar1) {
      return (void *)0x0;
    }
    if (0x71c71c6 < uVar2) {
      return (void *)0x0;
    }
    _Dst = (void *)HarfBuzzRealloc(*(uint **)(param_1 + 2),(ulonglong)uVar2 * 0x24);
  }
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  uVar1 = *param_1;
  *(void **)(param_1 + 2) = _Dst;
  param_1[1] = uVar2;
  *param_1 = uVar1 + 1;
  return (void *)((longlong)_Dst + (ulonglong)uVar1 * 0x24);
}



// FUNCTION 143c91620 push body=224 status=ok
// SIG undefined push(void)

void * hb_prealloced_array_t<hb_ot_map_builder_t::stage_info_t,8>::push(uint *param_1)

{
  uint uVar1;
  void *_Dst;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 2) == 0) {
    param_1[1] = 8;
    *(uint **)(param_1 + 2) = param_1 + 4;
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  if (uVar2 < uVar1) {
    *param_1 = uVar2 + 1;
    return (void *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 2));
  }
  uVar2 = uVar1 + 8 + (uVar1 >> 1);
  if (*(uint **)(param_1 + 2) == param_1 + 4) {
    _Dst = (void *)HarfBuzzCalloc(uVar2,0x10);
    if (_Dst == (void *)0x0) {
      return (void *)0x0;
    }
    ::_guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_1 + 2),(ulonglong)*param_1 << 4);
  }
  else {
    if (uVar2 < uVar1) {
      return (void *)0x0;
    }
    if (0xffffffe < uVar2) {
      return (void *)0x0;
    }
    _Dst = (void *)HarfBuzzRealloc(*(uint **)(param_1 + 2),(ulonglong)uVar2 << 4);
  }
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  uVar1 = *param_1;
  *(void **)(param_1 + 2) = _Dst;
  param_1[1] = uVar2;
  *param_1 = uVar1 + 1;
  return (void *)((ulonglong)uVar1 * 0x10 + (longlong)_Dst);
}



// FUNCTION 143c91700 push body=224 status=ok
// SIG undefined push(void)

void * hb_prealloced_array_t<hb_ot_map_t::stage_map_t,4>::push(uint *param_1)

{
  uint uVar1;
  void *_Dst;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 2) == 0) {
    param_1[1] = 4;
    *(uint **)(param_1 + 2) = param_1 + 4;
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  if (uVar2 < uVar1) {
    *param_1 = uVar2 + 1;
    return (void *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 2));
  }
  uVar2 = uVar1 + 8 + (uVar1 >> 1);
  if (*(uint **)(param_1 + 2) == param_1 + 4) {
    _Dst = (void *)HarfBuzzCalloc(uVar2,0x10);
    if (_Dst == (void *)0x0) {
      return (void *)0x0;
    }
    ::_guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_1 + 2),(ulonglong)*param_1 << 4);
  }
  else {
    if (uVar2 < uVar1) {
      return (void *)0x0;
    }
    if (0xffffffe < uVar2) {
      return (void *)0x0;
    }
    _Dst = (void *)HarfBuzzRealloc(*(uint **)(param_1 + 2),(ulonglong)uVar2 << 4);
  }
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  uVar1 = *param_1;
  *(void **)(param_1 + 2) = _Dst;
  param_1[1] = uVar2;
  *param_1 = uVar1 + 1;
  return (void *)((ulonglong)uVar1 * 0x10 + (longlong)_Dst);
}



// FUNCTION 143c917e0 _hb_glyph_info_get_modified_combining_class body=31 status=ok
// SIG undefined _hb_glyph_info_get_modified_combining_class(void)

ushort _hb_glyph_info_get_modified_combining_class(longlong param_1)

{
  if ((1 << ((byte)*(ushort *)(param_1 + 0x10) & 0x1f) & 0x1c00U) != 0) {
    return *(ushort *)(param_1 + 0x10) >> 8;
  }
  return 0;
}



// FUNCTION 143c91800 _hb_ot_shape_normalize body=1260 status=ok
// SIG undefined _hb_ot_shape_normalize(void)

void _hb_ot_shape_normalize(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  bool bVar18;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  code *local_48;
  code *local_40;
  ulonglong uVar17;
  
  if (*(int *)(param_2 + 0xb8) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x20);
    local_50 = *(undefined8 *)(param_2 + 0x70);
    uVar4 = *(uint *)(lVar13 + 0x38);
    local_48 = decompose_unicode;
    if (*(code **)(lVar13 + 0x40) != (code *)0x0) {
      local_48 = *(code **)(lVar13 + 0x40);
    }
    local_40 = compose_unicode;
    if (*(code **)(lVar13 + 0x48) != (code *)0x0) {
      local_40 = *(code **)(lVar13 + 0x48);
    }
    bVar18 = uVar4 == 0;
    if ((bVar18) || ((uVar4 - 1 & 0xfffffffd) != 0)) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
    local_68 = param_1;
    local_60 = param_2;
    local_58 = param_3;
    hb_buffer_t::clear_output(param_2);
    uVar16 = *(uint *)(param_2 + 0xb8);
    *(undefined4 *)(param_2 + 0xb4) = 0;
    lVar13 = local_60;
    if (uVar16 != 0) {
      do {
        if (*(char *)(param_2 + 0xb0) != '\0') break;
        uVar15 = *(int *)(param_2 + 0xb4) + 1;
        uVar17 = (ulonglong)uVar15;
        if (uVar15 < uVar16) {
          do {
            if ((1 << ((byte)*(undefined2 *)(*(longlong *)(param_2 + 200) + 0x10 + uVar17 * 0x14) &
                      0x1f) & 0x1c00U) == 0) break;
            uVar15 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar15;
          } while (uVar15 < uVar16);
        }
        uVar15 = *(uint *)(lVar13 + 0xb4);
        uVar9 = (uint)uVar17;
        if (uVar15 + 1 == uVar9) {
          decompose_current_character(&local_68,uVar11);
          lVar14 = local_60;
        }
        else {
          lVar14 = lVar13;
          if (uVar15 < uVar9) {
            uVar12 = uVar15;
            do {
              if (*(char *)(lVar13 + 0xb0) != '\0') break;
              iVar10 = *(int *)(*(longlong *)(lVar13 + 200) + (ulonglong)uVar12 * 0x14);
              if ((iVar10 - 0xfe00U < 0x10) || (iVar10 - 0xe0100U < 0xf0)) {
                handle_variation_selector_cluster(&local_68,uVar17,bVar18);
                lVar14 = local_60;
                goto LAB_143c919a8;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar9);
            while ((uVar15 < uVar9 && (lVar14 = local_60, *(char *)(lVar13 + 0xb0) == '\0'))) {
              decompose_current_character(&local_68,bVar18);
              uVar15 = *(uint *)(lVar13 + 0xb4);
              lVar14 = local_60;
            }
          }
        }
LAB_143c919a8:
        lVar13 = lVar14;
      } while (*(uint *)(param_2 + 0xb4) < uVar16);
    }
    hb_buffer_t::swap_buffers(param_2);
    uVar16 = *(uint *)(param_2 + 0xb8);
    uVar15 = 0;
    if (uVar16 != 0) {
      do {
        uVar3 = *(ushort *)(*(longlong *)(param_2 + 200) + 0x10 + (ulonglong)uVar15 * 0x14);
        uVar9 = uVar15;
        if (((1 << ((byte)uVar3 & 0x1f) & 0x1c00U) != 0) && (uVar3 >> 8 != 0)) {
          while( true ) {
            uVar9 = uVar9 + 1;
            if (uVar16 <= uVar9) break;
            uVar3 = *(ushort *)(*(longlong *)(param_2 + 200) + 0x10 + (ulonglong)uVar9 * 0x14);
            if (((1 << ((byte)uVar3 & 0x1f) & 0x1c00U) == 0) || ((uVar3 & 0xff00) == 0)) break;
          }
          if (uVar9 - uVar15 < 0xb) {
            hb_buffer_t::sort(param_2,uVar15,(ulonglong)uVar9,&LAB_143c91cf0);
          }
        }
        uVar15 = uVar9 + 1;
      } while (uVar15 < uVar16);
    }
    if (1 < uVar4) {
      hb_buffer_t::clear_output(param_2);
      uVar4 = *(uint *)(param_2 + 0xb8);
      uVar15 = 0;
      hb_buffer_t::next_glyph(param_2);
      uVar16 = *(uint *)(param_2 + 0xb4);
      while ((uVar16 < uVar4 && (*(char *)(param_2 + 0xb0) == '\0'))) {
        puVar1 = (undefined4 *)
                 (*(longlong *)(param_2 + 200) + (ulonglong)*(uint *)(param_2 + 0xb4) * 0x14);
        if ((1 << ((byte)*(undefined2 *)
                          (*(longlong *)(param_2 + 200) + 0x10 +
                          (ulonglong)*(uint *)(param_2 + 0xb4) * 0x14) & 0x1f) & 0x1c00U) == 0) {
LAB_143c91c13:
          if (*(char *)(param_2 + 0xb1) == '\0') {
LAB_143c91c8c:
            *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0xb4) + 1;
          }
          else {
            if ((*(longlong *)(param_2 + 0xd0) == *(longlong *)(param_2 + 200)) &&
               (*(int *)(param_2 + 0xbc) == *(int *)(param_2 + 0xb4))) {
LAB_143c91c86:
              *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
              goto LAB_143c91c8c;
            }
            cVar8 = hb_buffer_t::make_room_for(param_2,1,1);
            if (cVar8 != '\0') {
              uVar16 = *(uint *)(param_2 + 0xb4);
              lVar13 = *(longlong *)(param_2 + 200);
              uVar9 = *(uint *)(param_2 + 0xbc);
              puVar1 = (undefined4 *)(lVar13 + (ulonglong)uVar16 * 0x14);
              uVar5 = puVar1[1];
              uVar6 = puVar1[2];
              uVar7 = puVar1[3];
              lVar14 = *(longlong *)(param_2 + 0xd0);
              puVar2 = (undefined4 *)(lVar14 + (ulonglong)uVar9 * 0x14);
              *puVar2 = *puVar1;
              puVar2[1] = uVar5;
              puVar2[2] = uVar6;
              puVar2[3] = uVar7;
              *(undefined4 *)(lVar14 + (ulonglong)uVar9 * 0x14 + 0x10) =
                   *(undefined4 *)(lVar13 + 0x10 + (ulonglong)uVar16 * 0x14);
              goto LAB_143c91c86;
            }
          }
          uVar11 = hb_buffer_t::prev(param_2);
          iVar10 = _hb_glyph_info_get_modified_combining_class(uVar11);
          if (iVar10 == 0) {
            uVar15 = *(int *)(param_2 + 0xbc) - 1;
          }
        }
        else {
          if (uVar15 != *(int *)(param_2 + 0xbc) - 1U) {
            uVar3 = *(ushort *)(puVar1 + 4);
            if ((1 << ((byte)uVar3 & 0x1f) & 0x1c00U) == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = (uint)(uVar3 >> 8);
            }
            uVar11 = hb_buffer_t::prev(param_2);
            uVar9 = _hb_glyph_info_get_modified_combining_class(uVar11);
            if (uVar16 <= uVar9) goto LAB_143c91c13;
          }
          lVar13 = (ulonglong)uVar15 * 0x14;
          cVar8 = (*local_40)(&local_68,*(undefined4 *)(lVar13 + *(longlong *)(param_2 + 0xd0)),
                              *puVar1,local_res10);
          if (cVar8 == '\0') goto LAB_143c91c13;
          local_res20[0] = 0;
          iVar10 = (**(code **)(*(longlong *)(param_3 + 0x98) + 0x168))
                             (param_3,*(undefined8 *)(param_3 + 0xa0),local_res10[0],local_res20,
                              *(undefined8 *)(*(longlong *)(param_3 + 0x98) + 0x88));
          if (iVar10 == 0) goto LAB_143c91c13;
          hb_buffer_t::next_glyph(param_2);
          if (*(char *)(param_2 + 0xb0) != '\0') {
            return;
          }
          hb_buffer_t::merge_out_clusters(param_2,uVar15,*(undefined4 *)(param_2 + 0xbc));
          *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + -1;
          *(undefined4 *)(lVar13 + *(longlong *)(param_2 + 0xd0)) = local_res10[0];
          *(undefined4 *)(lVar13 + 0xc + *(longlong *)(param_2 + 0xd0)) = local_res20[0];
          _hb_glyph_info_set_unicode_props(*(longlong *)(param_2 + 0xd0) + lVar13,param_2);
        }
        uVar16 = *(uint *)(param_2 + 0xb4);
      }
      hb_buffer_t::swap_buffers(param_2);
    }
  }
  return;
}



// FUNCTION 143c91d50 compose_unicode body=54 status=ok
// SIG undefined compose_unicode(void)

bool compose_unicode(longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  iVar2 = 0;
  *param_4 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar2 = (**(code **)(lVar1 + 0xa8))(lVar1);
  }
  return iVar2 != 0;
}



// FUNCTION 143c91d90 decompose body=343 status=ok
// SIG undefined decompose(void)

ulonglong decompose(longlong param_1,char param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 local_res8 [2];
  char local_res10;
  int local_res20 [2];
  undefined4 local_28;
  undefined4 local_24 [3];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  local_res10 = param_2;
  cVar3 = (**(code **)(param_1 + 0x20))(param_1,param_3,local_res8,local_res20);
  if (cVar3 == '\0') {
    return 0;
  }
  if (local_res20[0] != 0) {
    local_28 = 0;
    iVar4 = (**(code **)(*(longlong *)(lVar2 + 0x98) + 0x168))
                      (lVar2,*(undefined8 *)(lVar2 + 0xa0),local_res20[0],&local_28,
                       *(undefined8 *)(*(longlong *)(lVar2 + 0x98) + 0x88));
    if (iVar4 == 0) {
      return 0;
    }
  }
  local_24[0] = 0;
  iVar4 = (**(code **)(*(longlong *)(lVar2 + 0x98) + 0x168))
                    (lVar2,*(undefined8 *)(lVar2 + 0xa0),local_res8[0],local_24,
                     *(undefined8 *)(*(longlong *)(lVar2 + 0x98) + 0x88));
  if ((local_res10 == '\0') || (iVar4 == 0)) {
    uVar5 = decompose(param_1,local_res10,local_res8[0]);
    if ((int)uVar5 != 0) {
      if (local_res20[0] != 0) {
        output_char(uVar1,local_res20[0],local_28);
        return (ulonglong)((int)uVar5 + 1);
      }
      return uVar5;
    }
    if (iVar4 == 0) {
      return 0;
    }
  }
  output_char(uVar1,local_res8[0],local_24[0]);
  if (local_res20[0] != 0) {
    output_char(uVar1,local_res20[0],local_28);
    return 2;
  }
  return 1;
}



// FUNCTION 143c91ef0 decompose_current_character body=569 status=ok
// SIG undefined decompose_current_character(void)

void decompose_current_character(longlong param_1,char param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  lVar3 = *(longlong *)(param_1 + 8);
  iVar7 = *(int *)(*(longlong *)(lVar3 + 200) + (ulonglong)*(uint *)(lVar3 + 0xb4) * 0x14);
  if (param_2 != '\0') {
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_res10[0] = 0;
    iVar5 = (**(code **)(*(longlong *)(lVar4 + 0x98) + 0x168))
                      (lVar4,*(undefined8 *)(lVar4 + 0xa0),iVar7,local_res10,
                       *(undefined8 *)(*(longlong *)(lVar4 + 0x98) + 0x88));
    if (iVar5 != 0) {
      *(undefined4 *)(*(longlong *)(lVar3 + 200) + 0xc + (ulonglong)*(uint *)(lVar3 + 0xb4) * 0x14)
           = local_res10[0];
      goto LAB_143c9210e;
    }
  }
  iVar5 = decompose(param_1,param_2,iVar7);
  if (iVar5 != 0) {
    *(int *)(lVar3 + 0xb4) = *(int *)(lVar3 + 0xb4) + 1;
    return;
  }
  if (param_2 == '\0') {
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_res10[0] = 0;
    iVar5 = (**(code **)(*(longlong *)(lVar4 + 0x98) + 0x168))
                      (lVar4,*(undefined8 *)(lVar4 + 0xa0),iVar7,local_res10,
                       *(undefined8 *)(*(longlong *)(lVar4 + 0x98) + 0x88));
    if (iVar5 == 0) goto LAB_143c91fda;
LAB_143c920f5:
    uVar2 = *(uint *)(lVar3 + 0xb4);
    uVar8 = local_res10[0];
  }
  else {
LAB_143c91fda:
    if (((*(byte *)(*(longlong *)(lVar3 + 200) + 0x10 + (ulonglong)*(uint *)(lVar3 + 0xb4) * 0x14) &
         0x1f) == 0x1d) && (iVar5 = FUN_143c92530(iVar7), iVar5 != 0)) {
      lVar4 = *(longlong *)(param_1 + 0x10);
      local_res8[0] = 0;
      iVar6 = (**(code **)(*(longlong *)(lVar4 + 0x98) + 0x168))
                        (lVar4,*(undefined8 *)(lVar4 + 0xa0),0x20,local_res8,
                         *(undefined8 *)(*(longlong *)(lVar4 + 0x98) + 0x88));
      if (iVar6 != 0) {
        uVar1 = *(ushort *)
                 (*(longlong *)(lVar3 + 200) + 0x10 + (ulonglong)*(uint *)(lVar3 + 0xb4) * 0x14);
        if (((byte)uVar1 & 0x1f) == 0x1d) {
          *(ushort *)(*(longlong *)(lVar3 + 200) + (ulonglong)*(uint *)(lVar3 + 0xb4) * 0x14 + 0x10)
               = uVar1 & 0xff | (short)iVar5 << 8;
        }
        *(undefined4 *)
         (*(longlong *)(lVar3 + 200) + 0xc + (ulonglong)*(uint *)(lVar3 + 0xb4) * 0x14) =
             local_res8[0];
        hb_buffer_t::next_glyph(lVar3);
        *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 4;
        return;
      }
    }
    if (iVar7 != 0x2011) goto LAB_143c920f5;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_res8[0] = 0;
    iVar7 = (**(code **)(*(longlong *)(lVar4 + 0x98) + 0x168))
                      (lVar4,*(undefined8 *)(lVar4 + 0xa0),0x2010,local_res8,
                       *(undefined8 *)(*(longlong *)(lVar4 + 0x98) + 0x88));
    if (iVar7 == 0) goto LAB_143c920f5;
    uVar2 = *(uint *)(lVar3 + 0xb4);
    uVar8 = local_res8[0];
  }
  *(undefined4 *)(*(longlong *)(lVar3 + 200) + 0xc + (ulonglong)uVar2 * 0x14) = uVar8;
LAB_143c9210e:
  hb_buffer_t::next_glyph(lVar3);
  return;
}



// FUNCTION 143c92130 decompose_unicode body=50 status=ok
// SIG undefined decompose_unicode(void)

bool decompose_unicode(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *param_3 = param_2;
  *param_4 = 0;
  iVar2 = (**(code **)(lVar1 + 0xb0))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 143c92170 handle_variation_selector_cluster body=810 status=ok
// SIG undefined handle_variation_selector_cluster(void)

void handle_variation_selector_cluster(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  ulonglong uVar14;
  
  lVar5 = *(longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(param_1 + 0x10);
  uVar3 = *(uint *)(lVar5 + 0xb4);
  do {
    if ((param_2 - 1 <= uVar3) || (*(char *)(lVar5 + 0xb0) != '\0')) {
      uVar14 = (ulonglong)*(uint *)(lVar5 + 0xb4);
      if (*(uint *)(lVar5 + 0xb4) < param_2) {
        lVar8 = *(longlong *)(lVar5 + 200);
        lVar7 = lVar8 + 0xc;
        *(undefined4 *)(lVar7 + uVar14 * 0x14) = 0;
        (**(code **)(*(longlong *)(lVar6 + 0x98) + 0x168))
                  (lVar6,*(undefined8 *)(lVar6 + 0xa0),*(undefined4 *)(lVar8 + uVar14 * 0x14),
                   lVar7 + uVar14 * 0x14,*(undefined8 *)(*(longlong *)(lVar6 + 0x98) + 0x88));
        hb_buffer_t::next_glyph(lVar5);
      }
      return;
    }
    uVar14 = (ulonglong)*(uint *)(lVar5 + 0xb4);
    lVar7 = *(longlong *)(lVar5 + 200);
    iVar13 = *(int *)(lVar7 + (ulonglong)(*(uint *)(lVar5 + 0xb4) + 1) * 0x14);
    if ((iVar13 - 0xfe00U < 0x10) || (iVar13 - 0xe0100U < 0xf0)) {
      puVar1 = (undefined4 *)(lVar7 + 0xc + uVar14 * 0x14);
      *puVar1 = 0;
      iVar13 = (**(code **)(*(longlong *)(lVar6 + 0x98) + 0x170))
                         (lVar6,*(undefined8 *)(lVar6 + 0xa0),*(undefined4 *)(lVar7 + uVar14 * 0x14)
                          ,iVar13,puVar1,*(undefined8 *)(*(longlong *)(lVar6 + 0x98) + 0x90));
      uVar14 = (ulonglong)*(uint *)(lVar5 + 0xb4);
      lVar7 = *(longlong *)(lVar5 + 200);
      if (iVar13 == 0) {
        *(undefined4 *)(lVar7 + 0xc + uVar14 * 0x14) = 0;
        (**(code **)(*(longlong *)(lVar6 + 0x98) + 0x168))
                  (lVar6,*(undefined8 *)(lVar6 + 0xa0),*(undefined4 *)(lVar7 + uVar14 * 0x14),
                   lVar7 + 0xc + uVar14 * 0x14,*(undefined8 *)(*(longlong *)(lVar6 + 0x98) + 0x88));
        hb_buffer_t::next_glyph(lVar5);
        uVar14 = (ulonglong)*(uint *)(lVar5 + 0xb4);
        lVar8 = *(longlong *)(lVar5 + 200);
        lVar7 = lVar8 + 0xc;
        *(undefined4 *)(lVar7 + uVar14 * 0x14) = 0;
        (**(code **)(*(longlong *)(lVar6 + 0x98) + 0x168))
                  (lVar6,*(undefined8 *)(lVar6 + 0xa0),*(undefined4 *)(lVar8 + uVar14 * 0x14),
                   lVar7 + uVar14 * 0x14,*(undefined8 *)(*(longlong *)(lVar6 + 0x98) + 0x88));
        hb_buffer_t::next_glyph(lVar5);
      }
      else {
        hb_buffer_t::replace_glyphs(lVar5,2,1,lVar7 + uVar14 * 0x14);
      }
      uVar3 = *(uint *)(lVar5 + 0xb4);
      while (uVar3 < param_2) {
        lVar7 = *(longlong *)(lVar5 + 200) + (ulonglong)*(uint *)(lVar5 + 0xb4) * 0x14;
        iVar13 = *(int *)(*(longlong *)(lVar5 + 200) + (ulonglong)*(uint *)(lVar5 + 0xb4) * 0x14);
        if ((0xf < iVar13 - 0xfe00U) && (0xef < iVar13 - 0xe0100U)) break;
        *(undefined4 *)(lVar7 + 0xc) = 0;
        (**(code **)(*(longlong *)(lVar6 + 0x98) + 0x168))
                  (lVar6,*(undefined8 *)(lVar6 + 0xa0),iVar13,lVar7 + 0xc,
                   *(undefined8 *)(*(longlong *)(lVar6 + 0x98) + 0x88));
        if (*(char *)(lVar5 + 0xb1) == '\0') {
LAB_143c92410:
          *(int *)(lVar5 + 0xb4) = *(int *)(lVar5 + 0xb4) + 1;
        }
        else {
          if ((*(longlong *)(lVar5 + 0xd0) == *(longlong *)(lVar5 + 200)) &&
             (*(int *)(lVar5 + 0xbc) == *(int *)(lVar5 + 0xb4))) {
LAB_143c9240a:
            *(int *)(lVar5 + 0xbc) = *(int *)(lVar5 + 0xbc) + 1;
            goto LAB_143c92410;
          }
          cVar12 = hb_buffer_t::make_room_for(lVar5,1,1);
          if (cVar12 != '\0') {
            uVar3 = *(uint *)(lVar5 + 0xb4);
            lVar7 = *(longlong *)(lVar5 + 200);
            uVar4 = *(uint *)(lVar5 + 0xbc);
            puVar1 = (undefined4 *)(lVar7 + (ulonglong)uVar3 * 0x14);
            uVar9 = puVar1[1];
            uVar10 = puVar1[2];
            uVar11 = puVar1[3];
            lVar8 = *(longlong *)(lVar5 + 0xd0);
            puVar2 = (undefined4 *)(lVar8 + (ulonglong)uVar4 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar9;
            puVar2[2] = uVar10;
            puVar2[3] = uVar11;
            *(undefined4 *)(lVar8 + (ulonglong)uVar4 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar7 + 0x10 + (ulonglong)uVar3 * 0x14);
            goto LAB_143c9240a;
          }
        }
        uVar3 = *(uint *)(lVar5 + 0xb4);
      }
    }
    else {
      *(undefined4 *)(lVar7 + 0xc + uVar14 * 0x14) = 0;
      (**(code **)(*(longlong *)(lVar6 + 0x98) + 0x168))
                (lVar6,*(undefined8 *)(lVar6 + 0xa0),*(undefined4 *)(lVar7 + uVar14 * 0x14),
                 lVar7 + 0xc + uVar14 * 0x14,*(undefined8 *)(*(longlong *)(lVar6 + 0x98) + 0x88));
      hb_buffer_t::next_glyph(lVar5);
    }
    uVar3 = *(uint *)(lVar5 + 0xb4);
  } while( true );
}



// FUNCTION 143c924a0 output_char body=80 status=ok
// SIG undefined output_char(void)

void output_char(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  
  *(undefined4 *)(*(longlong *)(param_1 + 200) + 0xc + (ulonglong)*(uint *)(param_1 + 0xb4) * 0x14)
       = param_3;
  hb_buffer_t::output_glyph();
  if (*(int *)(param_1 + 0xbc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0xbc) - 1;
  }
  _hb_glyph_info_set_unicode_props(*(longlong *)(param_1 + 0xd0) + (ulonglong)uVar1 * 0x14,param_1);
  return;
}



// FUNCTION 143c924f0 prev body=49 status=ok
// SIG undefined prev(void)

longlong hb_buffer_t::prev(longlong param_1)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    return *(longlong *)(param_1 + 0xd0) + (ulonglong)(*(int *)(param_1 + 0xbc) - 1) * 0x14;
  }
  return *(longlong *)(param_1 + 0xd0);
}



// FUNCTION 143c92530 FUN_143c92530 body=146 status=ok
// SIG undefined FUN_143c92530(void)

undefined8 FUN_143c92530(uint param_1)

{
  if (param_1 < 0x2001) {
    if (param_1 == 0x2000) {
switchD_143c92581_caseD_2002:
      return 2;
    }
    if ((param_1 == 0x20) || (param_1 == 0xa0)) {
      return 0x12;
    }
  }
  else if (param_1 < 0x3001) {
    if (param_1 != 0x3000) {
      switch(param_1) {
      case 0x2001:
      case 0x2003:
        break;
      case 0x2002:
        goto switchD_143c92581_caseD_2002;
      case 0x2004:
        return 3;
      case 0x2005:
        return 4;
      case 0x2006:
        return 6;
      case 0x2007:
        return 0x13;
      case 0x2008:
        return 0x14;
      case 0x2009:
        return 5;
      case 0x200a:
        return 0x10;
      default:
        goto switchD_143c92581_caseD_200b;
      case 0x202f:
        return 0x15;
      case 0x205f:
        return 0x11;
      }
    }
    return 1;
  }
switchD_143c92581_caseD_200b:
  return 0;
}



// FUNCTION 143c92660 _hb_ot_shape_fallback_kern body=570 status=ok
// SIG undefined _hb_ot_shape_fallback_kern(void)

void _hb_ot_shape_fallback_kern(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int local_108 [9];
  undefined4 local_e4;
  char local_e0;
  undefined4 local_cc;
  uint local_b8 [2];
  int *local_b0;
  undefined4 local_a8;
  bool local_a4;
  undefined1 local_a3;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int *local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((*(byte *)(param_1 + 0x444) & 2) != 0) {
    OT::hb_apply_context_t::hb_apply_context_t(local_108,1,param_2,param_3);
    local_70 = local_108;
    local_e4 = *(undefined4 *)(param_1 + 0x440);
    local_cc = 8;
    local_a4 = local_108[0] == 1;
    local_48 = 0;
    local_58 = 0;
    local_50 = 0;
    local_68 = 8;
    local_64 = 0x101;
    local_60 = 0xffffffff;
    local_b0 = local_108;
    local_88 = 0;
    local_98 = 0;
    local_90 = 0;
    local_a8 = 8;
    if ((local_108[0] == 1) || (local_e0 != '\0')) {
      local_a3 = 1;
    }
    else {
      local_a3 = 0;
    }
    uVar2 = *(uint *)(param_3 + 0xb8);
    lVar3 = *(longlong *)(param_3 + 200);
    lVar4 = *(longlong *)(param_3 + 0xd8);
    local_a0 = *(undefined4 *)(param_1 + 0x440);
    uVar11 = 0;
    if (uVar2 != 0) {
      do {
        uVar10 = (uint)uVar11;
        local_b8[0] = uVar10;
        local_80 = 1;
        local_7c = *(undefined4 *)(*(longlong *)(local_b0 + 6) + 0xb8);
        lVar5 = *(longlong *)(local_b0 + 6);
        uVar9 = 0;
        if (uVar10 == *(uint *)(lVar5 + 0xb4)) {
          uVar9 = (ulonglong)
                  *(byte *)(*(longlong *)(lVar5 + 200) + 0xf +
                           (ulonglong)*(uint *)(lVar5 + 0xb4) * 0x14);
        }
        local_9c = (undefined1)uVar9;
        cVar7 = OT::hb_apply_context_t::skipping_iterator_t::next(local_b8);
        if (cVar7 == '\0') {
          local_b8[0] = uVar10 + 1;
        }
        else {
          lVar6 = *(longlong *)(param_2 + 0x98);
          lVar5 = uVar11 * 0x14;
          if ((*(uint *)(param_3 + 0x90) & 0xfffffffe) == 4) {
            iVar8 = (**(code **)(lVar6 + 0x198))();
            if (iVar8 != 0) {
              *(int *)(lVar5 + lVar4) = *(int *)(lVar5 + lVar4) + (iVar8 >> 1);
              iVar8 = iVar8 - (iVar8 >> 1);
              piVar1 = (int *)(lVar4 + (ulonglong)local_b8[0] * 0x14);
              *piVar1 = *piVar1 + iVar8;
              piVar1 = (int *)(lVar4 + 8 + (ulonglong)local_b8[0] * 0x14);
              *piVar1 = *piVar1 + iVar8;
            }
          }
          else {
            iVar8 = (**(code **)(lVar6 + 0x1a0))
                              (param_2,*(undefined8 *)(param_2 + 0xa0),
                               *(undefined4 *)(lVar5 + lVar3),
                               *(undefined4 *)(lVar3 + (ulonglong)local_b8[0] * 0x14),
                               *(undefined8 *)(lVar6 + 0xc0));
            if (iVar8 != 0) {
              piVar1 = (int *)(lVar5 + 4 + lVar4);
              *piVar1 = *piVar1 + (iVar8 >> 1);
              iVar8 = iVar8 - (iVar8 >> 1);
              piVar1 = (int *)(lVar4 + 4 + (ulonglong)local_b8[0] * 0x14);
              *piVar1 = *piVar1 + iVar8;
              piVar1 = (int *)(lVar4 + 0xc + (ulonglong)local_b8[0] * 0x14);
              *piVar1 = *piVar1 + iVar8;
            }
          }
        }
        uVar11 = (ulonglong)local_b8[0];
      } while (local_b8[0] < uVar2);
    }
  }
  return;
}



// FUNCTION 143c928a0 _hb_ot_shape_fallback_position body=434 status=ok
// SIG undefined _hb_ot_shape_fallback_position(void)

void _hb_ot_shape_fallback_position(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_3 + 0xb8);
  uVar8 = 0;
  uVar5 = 1;
  if (1 < uVar1) {
    puVar7 = (undefined2 *)(*(longlong *)(param_3 + 200) + 0x24);
    do {
      if ((1 << ((byte)*puVar7 & 0x1f) & 0x1c00U) == 0) {
        uVar3 = (uint)uVar8;
        if (1 < uVar5 - uVar3) {
          lVar2 = *(longlong *)(param_3 + 200);
          while (uVar3 < uVar5) {
            if ((1 << ((byte)*(undefined2 *)(lVar2 + 0x10 + uVar8 * 0x14) & 0x1f) & 0x1c00U) == 0) {
              uVar3 = (int)uVar8 + 1;
              uVar4 = (ulonglong)uVar3;
              if (uVar3 < uVar5) {
                puVar6 = (undefined2 *)(lVar2 + 0x10 + uVar4 * 0x14);
                do {
                  uVar3 = (uint)uVar4;
                  if ((1 << ((byte)*puVar6 & 0x1f) & 0x1c00U) == 0) break;
                  uVar3 = uVar3 + 1;
                  uVar4 = (ulonglong)uVar3;
                  puVar6 = puVar6 + 10;
                } while (uVar3 < uVar5);
              }
              position_around_base(param_1,param_2,param_3,uVar8,uVar3);
              uVar8 = (ulonglong)(uVar3 - 1);
            }
            uVar3 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar3;
          }
        }
        uVar8 = (ulonglong)uVar5;
      }
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 10;
    } while (uVar5 < uVar1);
  }
  uVar5 = (uint)uVar8;
  if (1 < uVar1 - uVar5) {
    lVar2 = *(longlong *)(param_3 + 200);
    while (uVar5 < uVar1) {
      if ((1 << ((byte)*(undefined2 *)(lVar2 + 0x10 + uVar8 * 0x14) & 0x1f) & 0x1c00U) == 0) {
        uVar5 = (int)uVar8 + 1;
        uVar4 = (ulonglong)uVar5;
        if (uVar5 < uVar1) {
          puVar7 = (undefined2 *)(lVar2 + uVar4 * 0x14 + 0x10);
          do {
            uVar5 = (uint)uVar4;
            if ((1 << ((byte)*puVar7 & 0x1f) & 0x1c00U) == 0) break;
            uVar5 = uVar5 + 1;
            uVar4 = (ulonglong)uVar5;
            puVar7 = puVar7 + 10;
          } while (uVar5 < uVar1);
        }
        position_around_base(param_1,param_2,param_3,uVar8,uVar5);
        uVar8 = (ulonglong)(uVar5 - 1);
      }
      uVar5 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar5;
    }
  }
  return;
}



// FUNCTION 143c92a60 _hb_ot_shape_fallback_position_recategorize_marks body=151 status=ok
// SIG undefined _hb_ot_shape_fallback_position_recategorize_marks(void)

void _hb_ot_shape_fallback_position_recategorize_marks
               (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  short sVar1;
  ulonglong uVar2;
  ushort *puVar3;
  ushort uVar4;
  
  if (*(uint *)(param_3 + 0xb8) != 0) {
    puVar3 = (ushort *)(*(longlong *)(param_3 + 200) + 0x10);
    uVar2 = (ulonglong)*(uint *)(param_3 + 0xb8);
    do {
      uVar4 = *puVar3;
      if ((((byte)uVar4 & 0x1f) == 0xc) && ((1 << ((byte)uVar4 & 0x1f) & 0x1c00U) != 0)) {
        sVar1 = FUN_143c93370(*(undefined4 *)(puVar3 + -8),uVar4 >> 8);
        *puVar3 = sVar1 << 8 | uVar4 & 0xff;
      }
      puVar3 = puVar3 + 10;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 143c92b00 FUN_143c92b00 body=561 status=ok
// SIG undefined FUN_143c92b00(void)

void FUN_143c92b00(undefined8 param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 local_res18 [4];
  
  if ((*(uint *)(param_3 + 0x90) & 0xfffffffe) == 4) {
    piVar6 = *(int **)(param_3 + 0xd8);
    if (*(uint *)(param_3 + 0xb8) != 0) {
      lVar3 = *(longlong *)(param_3 + 200) - (longlong)piVar6;
      uVar5 = (ulonglong)*(uint *)(param_3 + 0xb8);
      do {
        uVar1 = *(ushort *)(lVar3 + 0x10 + (longlong)piVar6);
        if ((((byte)uVar1 & 0x1f) != 0x1d) ||
           ((*(byte *)(lVar3 + 0xc + (longlong)piVar6) >> 5 & 1) != 0))
        goto switchD_143c92bbe_caseD_7;
        uVar7 = (uint)(uVar1 >> 8);
        switch(uVar7) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 0x10:
          iVar2 = (int)(*(int *)(param_2 + 0x88) + uVar7 / 2) / (int)uVar7;
          goto LAB_143c92cfd;
        case 0x11:
          *piVar6 = (*(int *)(param_2 + 0x88) << 2) / 0x12;
          break;
        case 0x13:
          cVar4 = '0';
          do {
            local_res18[0] = 0;
            iVar2 = (**(code **)(*(longlong *)(param_2 + 0x98) + 0x168))
                              (param_2,*(undefined8 *)(param_2 + 0xa0),(int)cVar4,local_res18,
                               *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x88));
            if (iVar2 != 0) goto LAB_143c92cd1;
            cVar4 = cVar4 + '\x01';
          } while (cVar4 < ':');
          break;
        case 0x14:
          local_res18[0] = 0;
          iVar2 = (**(code **)(*(longlong *)(param_2 + 0x98) + 0x168))
                            (param_2,*(undefined8 *)(param_2 + 0xa0),0x2e,local_res18,
                             *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x88));
          if (iVar2 == 0) {
            local_res18[0] = 0;
            iVar2 = (**(code **)(*(longlong *)(param_2 + 0x98) + 0x168))
                              (param_2,*(undefined8 *)(param_2 + 0xa0),0x2c,local_res18,
                               *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x88));
            if (iVar2 == 0) break;
LAB_143c92cd1:
            iVar2 = (**(code **)(*(longlong *)(param_2 + 0x98) + 0x178))
                              (param_2,*(undefined8 *)(param_2 + 0xa0),local_res18[0],
                               *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x98));
          }
          else {
            iVar2 = (**(code **)(*(longlong *)(param_2 + 0x98) + 0x178))
                              (param_2,*(undefined8 *)(param_2 + 0xa0),local_res18[0],
                               *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x98));
          }
          goto LAB_143c92cfd;
        case 0x15:
          iVar2 = *piVar6 / 2;
LAB_143c92cfd:
          *piVar6 = iVar2;
        }
switchD_143c92bbe_caseD_7:
        piVar6 = piVar6 + 5;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}



// FUNCTION 143c92d70 position_around_base body=928 status=ok
// SIG undefined position_around_base(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void position_around_base(uint *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  uint local_d0;
  uint local_c8;
  uint local_c4;
  int local_b8;
  int iStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  longlong local_a0;
  uint *local_98;
  longlong local_90;
  int local_88;
  int iStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar4 = 0;
  lVar7 = (ulonglong)param_4 * 0x14;
  local_78 = 0;
  uStack_70 = 0;
  local_d8 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 200);
  local_98 = param_1;
  local_90 = param_2;
  iVar3 = (**(code **)(*(longlong *)(param_2 + 0x98) + 0x1a8))
                    (param_2,*(undefined8 *)(param_2 + 0xa0),
                     *(undefined4 *)(lVar7 + *(longlong *)(param_3 + 200)),&local_78);
  if (iVar3 == 0) {
    zero_mark_advances(param_3,param_4 + 1,param_5);
  }
  else {
    local_a0 = *(longlong *)(param_3 + 200);
    piVar6 = (int *)(*(longlong *)(param_3 + 0xd8) + lVar7);
    iVar3 = (int)local_78 + piVar6[2];
    iVar16 = local_78._4_4_ + piVar6[3];
    local_78 = CONCAT44(iVar16,iVar3);
    uVar10 = (uint)(*(byte *)(local_a0 + 0xe + lVar7) >> 5);
    if (((*(byte *)(local_a0 + 0xc + lVar7) & 4) == 0) ||
       (bVar1 = *(byte *)(local_a0 + 0xe + lVar7), (bVar1 & 0x10) == 0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = bVar1 & 0xf;
    }
    iVar14 = 0;
    iVar15 = 0;
    if ((*(uint *)(param_3 + 0x90) & 0xfffffffd) == 4) {
      iVar14 = -*piVar6;
      iVar15 = -piVar6[1];
    }
    uVar13 = (ulonglong)(param_4 + 1);
    uVar11 = 0xffffffff;
    local_c4 = 0xffffffff;
    uVar9 = 0xff;
    local_c8 = 0xff;
    uStack_80 = (uint)uStack_70;
    uStack_7c = uStack_70._4_4_;
    if (param_4 + 1 < param_5) {
      local_a0 = local_a0 + 0x10;
      lVar7 = uVar13 * 0x14;
      uVar17 = (uint)uStack_70;
      uVar18 = uStack_70._4_4_;
      iVar19 = iVar3;
      iVar20 = iVar16;
      uVar5 = (uint)uStack_70;
      uVar21 = uStack_70._4_4_;
      local_a8 = uVar10;
      local_88 = iVar3;
      iStack_84 = iVar16;
      do {
        if (((1 << ((byte)*(ushort *)(local_a0 + lVar7) & 0x1f) & 0x1c00U) == 0) ||
           (*(ushort *)(local_a0 + lVar7) >> 8 == 0)) {
          lVar2 = *(longlong *)(param_3 + 0xd8);
          if ((*(uint *)(param_3 + 0x90) & 0xfffffffd) == 4) {
            iVar14 = iVar14 - *(int *)(lVar7 + lVar2);
            iVar15 = iVar15 - *(int *)(lVar7 + 4 + lVar2);
          }
          else {
            iVar14 = iVar14 + *(int *)(lVar7 + lVar2);
            iVar15 = iVar15 + *(int *)(lVar7 + 4 + lVar2);
          }
        }
        else {
          if (1 < uVar8) {
            bVar1 = *(byte *)(local_a0 + -2 + lVar7);
            if ((bVar1 & 0x10) == 0) {
              uVar12 = bVar1 & 0xf;
            }
            else {
              uVar12 = 0;
            }
            uVar12 = uVar12 - 1;
            if (((uVar10 == 0) || (uVar10 != bVar1 >> 5)) || (uVar8 <= uVar12)) {
              uVar12 = uVar8 - 1;
            }
            if (uVar11 != uVar12) {
              local_c8 = 0xff;
              local_c4 = uVar12;
              local_b8 = iVar3;
              iStack_b4 = iVar16;
              uStack_b0 = uVar17;
              uStack_ac = uVar18;
              if ((uVar4 == 0) && (uVar4 = *local_98, (uVar4 & 0xfffffffe) != 4)) {
                uVar4 = hb_script_get_horizontal_direction(local_98[1]);
              }
              if (uVar4 != 4) {
                uVar12 = (uVar8 - uVar12) - 1;
              }
              iVar19 = local_b8 + (uStack_b0 * uVar12) / uVar8;
              uVar5 = uStack_b0 / uVar8;
              uVar9 = local_c8;
              iVar20 = iStack_b4;
              uVar21 = uStack_ac;
              local_b8 = iVar19;
              uStack_b0 = uVar5;
            }
          }
          if ((1 << ((byte)*(ushort *)(local_a0 + lVar7) & 0x1f) & 0x1c00U) == 0) {
            local_d0 = 0;
          }
          else {
            local_d0 = (uint)(*(ushort *)(local_a0 + lVar7) >> 8);
          }
          if (uVar9 != local_d0) {
            local_c8 = local_d0;
            local_88 = iVar19;
            iStack_84 = iVar20;
            uStack_80 = uVar5;
            uStack_7c = uVar21;
          }
          local_d8 = CONCAT44(local_d8._4_4_,(int)uVar13);
          FUN_143c93110(local_98,local_90,param_3,&local_88);
          *(undefined4 *)(lVar7 + *(longlong *)(param_3 + 0xd8)) = 0;
          *(undefined4 *)(lVar7 + 4 + *(longlong *)(param_3 + 0xd8)) = 0;
          piVar6 = (int *)(lVar7 + 8 + *(longlong *)(param_3 + 0xd8));
          *piVar6 = *piVar6 + iVar14;
          piVar6 = (int *)(lVar7 + 0xc + *(longlong *)(param_3 + 0xd8));
          *piVar6 = *piVar6 + iVar15;
          iVar3 = (int)local_78;
          iVar16 = local_78._4_4_;
          uVar17 = (uint)uStack_70;
          uVar18 = uStack_70._4_4_;
          uVar10 = local_a8;
          uVar11 = local_c4;
          uVar9 = local_c8;
        }
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        lVar7 = lVar7 + 0x14;
      } while (uVar12 < param_5);
    }
  }
  return;
}



// FUNCTION 143c93110 FUN_143c93110 body=500 status=ok
// SIG undefined FUN_143c93110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c93110(undefined8 param_1,longlong param_2,longlong param_3,int *param_4,uint param_5,
                  int param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  local_48 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 200);
  iVar1 = (**(code **)(*(longlong *)(param_2 + 0x98) + 0x1a8))
                    (param_2,*(undefined8 *)(param_2 + 0xa0),
                     *(undefined4 *)((ulonglong)param_5 * 0x14 + *(longlong *)(param_3 + 200)));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x8c);
  lVar3 = *(longlong *)(param_3 + 0xd8) + (ulonglong)param_5 * 0x14;
  *(undefined8 *)(lVar3 + 8) = 0;
  iVar1 = (int)((iVar1 >> 0x1f & 0xfU) + iVar1) >> 4;
  switch(param_6 + -200) {
  case 0:
  case 0x12:
  case 0x1c:
    iVar2 = *param_4 - (int)local_38;
    goto LAB_143c9324c;
  default:
switchD_143c931e2_caseD_1:
    iVar2 = (param_4[2] - (int)local_30) / 2 - (int)local_38;
    break;
  case 0x10:
  case 0x16:
  case 0x20:
    iVar2 = (param_4[2] - (int)local_38) - (int)local_30;
    break;
  case 0x21:
  case 0x22:
    if (*(int *)(param_3 + 0x90) == 4) {
      *(int *)(lVar3 + 8) = (*param_4 - (int)local_30 / 2) - (int)local_38;
    }
    else {
      if (*(int *)(param_3 + 0x90) != 5) goto switchD_143c931e2_caseD_1;
      *(int *)(lVar3 + 8) = ((param_4[2] - (int)local_30 / 2) - (int)local_38) + *param_4;
    }
    goto LAB_143c93250;
  }
  iVar2 = iVar2 + *param_4;
LAB_143c9324c:
  *(int *)(lVar3 + 8) = iVar2;
LAB_143c93250:
  switch(param_6 + -200) {
  default:
    goto switchD_143c9326d_caseD_1;
  case 0x12:
  case 0x14:
  case 0x16:
  case 0x21:
    param_4[3] = param_4[3] - iVar1;
  case 0:
  case 2:
    iVar2 = (param_4[1] - local_38._4_4_) + param_4[3];
    *(int *)(lVar3 + 0xc) = iVar2;
    if (0 < iVar1 == 0 < iVar2) {
      param_4[3] = param_4[3] - iVar2;
      *(undefined4 *)(lVar3 + 0xc) = 0;
    }
    break;
  case 0x1c:
  case 0x1e:
  case 0x20:
  case 0x22:
    param_4[1] = param_4[1] + iVar1;
    param_4[3] = param_4[3] - iVar1;
  case 0xe:
  case 0x10:
    local_38._4_4_ = (param_4[1] - local_30._4_4_) - local_38._4_4_;
    *(int *)(lVar3 + 0xc) = local_38._4_4_;
    if (0 < iVar1 != 0 < local_38._4_4_) {
      iVar1 = -(local_38._4_4_ / 2);
      param_4[1] = param_4[1] + iVar1;
      param_4[3] = param_4[3] + local_38._4_4_ / 2;
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + iVar1;
    }
    param_4[1] = param_4[1] - local_30._4_4_;
  }
  param_4[3] = param_4[3] + local_30._4_4_;
switchD_143c9326d_caseD_1:
  return;
}



// FUNCTION 143c93370 FUN_143c93370 body=179 status=ok
// SIG undefined FUN_143c93370(void)

uint FUN_143c93370(uint param_1,uint param_2)

{
  if (param_2 < 200) {
    if ((param_1 & 0xffffff00) == 0xe00) {
      if (param_2 == 0) {
        switch(param_1) {
        case 0xe31:
        case 0xe34:
        case 0xe35:
        case 0xe36:
        case 0xe37:
        case 0xe47:
        case 0xe4c:
        case 0xe4d:
        case 0xe4e:
          param_2 = 0xe8;
          break;
        case 0xeb1:
        case 0xeb4:
        case 0xeb5:
        case 0xeb6:
        case 0xeb7:
        case 0xebb:
        case 0xecc:
        case 0xecd:
          param_2 = 0xe6;
          break;
        case 0xebc:
          param_2 = 0xdc;
        }
      }
      else if (param_1 == 0xe3a) {
        param_2 = 0xde;
      }
    }
    switch(param_2) {
    case 3:
      return 0xde;
    case 10:
    case 0x6b:
      return 0xe8;
    case 0xb:
    case 0xe:
      return 0xe4;
    case 0xd:
      return 0xd6;
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1e:
    case 0x21:
    case 0x76:
    case 0x81:
    case 0x84:
      return 0xdc;
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1f:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x7a:
    case 0x82:
      return 0xe6;
    }
  }
  return param_2;
}



// FUNCTION 143c93580 zero_mark_advances body=82 status=ok
// SIG undefined zero_mark_advances(void)

void zero_mark_advances(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 200);
  if (param_2 < param_3) {
    uVar3 = (ulonglong)(param_3 - param_2);
    lVar2 = (ulonglong)param_2 * 0x14;
    do {
      if ((*(byte *)(lVar1 + 0x10 + lVar2) & 0x1f) == 0xc) {
        *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0xd8)) = 0;
        *(undefined4 *)(lVar2 + 4 + *(longlong *)(param_1 + 0xd8)) = 0;
      }
      lVar2 = lVar2 + 0x14;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 143c935f0 data_create_arabic body=353 status=ok
// SIG undefined data_create_arabic(void)

longlong data_create_arabic(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  undefined4 local_res10 [2];
  
  lVar3 = HarfBuzzCalloc(1);
  if (lVar3 == 0) {
    return 0;
  }
  *(uint *)(lVar3 + 0x28) =
       *(uint *)(lVar3 + 0x28) ^
       ((uint)(*(int *)(param_1 + 4) == 0x41726162) ^ *(uint *)(lVar3 + 0x28)) & 1;
  local_res10[0] = 0x73746368;
  pvVar4 = bsearch(local_res10,*(void **)(param_1 + 0x40),(ulonglong)*(uint *)(param_1 + 0x38),0x24,
                   (_PtFuncCompare *)&LAB_143c7bc50);
  if (pvVar4 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((longlong)pvVar4 + 0x1c);
  }
  *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x28) & 0xfffffffd;
  pcVar7 = "losianif2nif3nifidem2demtini";
  lVar6 = 7;
  *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x28) | (uint)(iVar5 != 0) * 2;
  do {
    local_res10[0] = *(undefined4 *)pcVar7;
    pvVar4 = bsearch(local_res10,*(void **)(param_1 + 0x40),(ulonglong)*(uint *)(param_1 + 0x38),
                     0x24,(_PtFuncCompare *)&LAB_143c7bc50);
    uVar1 = 0;
    if (pvVar4 != (void *)0x0) {
      uVar1 = *(undefined4 *)((longlong)pvVar4 + 0x1c);
    }
    *(undefined4 *)(pcVar7 + lVar3 + -0x145d3b298) = uVar1;
    if ((*(byte *)(lVar3 + 0x28) & 1) == 0) {
LAB_143c93719:
      uVar2 = 0;
    }
    else {
      if (1 < (byte)(*pcVar7 - 0x32U)) {
        local_res10[0] = *(undefined4 *)pcVar7;
        pvVar4 = bsearch(local_res10,*(void **)(param_1 + 0x40),(ulonglong)*(uint *)(param_1 + 0x38)
                         ,0x24,(_PtFuncCompare *)&LAB_143c7bc50);
        if ((pvVar4 == (void *)0x0) || ((*(uint *)((longlong)pvVar4 + 0x20) & 1) == 0))
        goto LAB_143c93719;
      }
      uVar2 = 1;
    }
    *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x28) & 0xfffffffe;
    *(uint *)(lVar3 + 0x28) = *(uint *)(lVar3 + 0x28) | uVar2;
    pcVar7 = pcVar7 + 4;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      return lVar3;
    }
  } while( true );
}



// FUNCTION 143c93760 data_destroy_arabic body=31 status=ok
// SIG undefined data_destroy_arabic(void)

void data_destroy_arabic(longlong param_1)

{
  arabic_fallback_plan_destroy(*(undefined8 *)(param_1 + 0x20));
  FMemory::operator_delete(param_1);
  return;
}



// FUNCTION 143c93780 collect_features_arabic body=349 status=ok
// SIG undefined collect_features_arabic(void)

void collect_features_arabic(longlong param_1)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  
  hb_ot_map_builder_t::add_pause(param_1 + 0x30,0,&LAB_143c955e0);
  hb_ot_map_builder_t::add_feature(param_1 + 0x30,0x73746368,1);
  hb_ot_map_builder_t::add_pause(param_1 + 0x30,0,&LAB_143c95620);
  hb_ot_map_builder_t::add_feature(param_1 + 0x30,0x63636d70,1);
  hb_ot_map_builder_t::add_feature(param_1 + 0x30,0x6c6f636c,1);
  hb_ot_map_builder_t::add_pause(param_1 + 0x30,0,0);
  pcVar2 = "losianif2nif3nifidem2demtini";
  lVar3 = 7;
  do {
    if ((*(int *)(param_1 + 0xc) == 0x41726162) && (1 < (byte)(*pcVar2 - 0x32U))) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    hb_ot_map_builder_t::add_feature(param_1 + 0x30,*(undefined4 *)pcVar2,1,-cVar1 & 2);
    hb_ot_map_builder_t::add_pause(param_1 + 0x30,0,0);
    pcVar2 = pcVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  hb_ot_map_builder_t::add_feature(param_1 + 0x30,0x726c6967,1,3);
  if (*(int *)(param_1 + 0xc) == 0x41726162) {
    hb_ot_map_builder_t::add_pause(param_1 + 0x30,0,arabic_fallback_shape);
  }
  hb_ot_map_builder_t::add_feature(param_1 + 0x30,0x63616c74,1);
  hb_ot_map_builder_t::add_feature(param_1 + 0x30,0x6d736574,1);
  return;
}



// FUNCTION 143c938f0 extend<OT::ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>_> body=154 status=ok
// SIG undefined extend<OT::ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>_>(void)

byte * OT::hb_serialize_context_t::
       extend<OT::ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>_>
                 (longlong param_1,byte *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = (((uint)(ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) * 2 + 2) -
          *(int *)(param_1 + 0x18)) + (int)param_2;
  if (*(char *)(param_1 + 0x20) == '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return (byte *)0x0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return (byte *)0x0;
}



// FUNCTION 143c93990 extend<OT::HeadlessArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>_> body=161 status=ok
// SIG undefined extend<OT::HeadlessArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>_>(void)

byte * OT::hb_serialize_context_t::
       extend<OT::HeadlessArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>_>
                 (longlong param_1,byte *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar4 = (ushort)*param_2 * 0x100 + (ushort)param_2[1];
  if (uVar4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = uVar4 - 1;
  }
  uVar3 = ((iVar2 * 2 + 2) - *(int *)(param_1 + 0x18)) + (int)param_2;
  if (*(char *)(param_1 + 0x20) == '\0') {
    if ((longlong)(ulonglong)uVar3 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x18),0,(ulonglong)uVar3);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar3 + lVar1;
      if (lVar1 == 0) {
        return (byte *)0x0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return (byte *)0x0;
}



// FUNCTION 143c93a40 extend<OT::SortedArrayOf<OT::RangeRecord,OT::IntType<unsigned_short,2>_>_> body=159 status=ok
// SIG undefined extend<OT::SortedArrayOf<OT::RangeRecord,OT::IntType<unsigned_short,2>_>_>(void)

byte * OT::hb_serialize_context_t::
       extend<OT::SortedArrayOf<OT::RangeRecord,OT::IntType<unsigned_short,2>_>_>
                 (longlong param_1,byte *param_2)

{
  longlong lVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar3 = (ushort)*param_2 * 0x100 + (ushort)param_2[1];
  uVar2 = (int)param_2 + 2 + (((uint)uVar3 + (uint)uVar3 * 2) * 2 - *(int *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x20) == '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return (byte *)0x0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return (byte *)0x0;
}



// FUNCTION 143c93ae0 extend_min<OT::ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>_> body=121 status=ok
// SIG undefined extend_min<OT::ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>_>(void)

undefined8
OT::hb_serialize_context_t::
extend_min<OT::ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>_>
          (longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + 2;
  if (*(char *)(param_1 + 0x20) == '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return 0;
}



// FUNCTION 143c93b60 extend_min<OT::CoverageFormat1> body=121 status=ok
// SIG undefined extend_min<OT::CoverageFormat1>(void)

undefined8
OT::hb_serialize_context_t::extend_min<OT::CoverageFormat1>(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + 4;
  if (*(char *)(param_1 + 0x20) == '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return 0;
}



// FUNCTION 143c93be0 extend_min<OT::SingleSubstFormat1> body=121 status=ok
// SIG undefined extend_min<OT::SingleSubstFormat1>(void)

undefined8
OT::hb_serialize_context_t::extend_min<OT::SingleSubstFormat1>(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = ((int)param_2 - *(int *)(param_1 + 0x18)) + 6;
  if (*(char *)(param_1 + 0x20) == '\0') {
    if ((longlong)(ulonglong)uVar2 <=
        *(longlong *)(param_1 + 0x10) - (longlong)*(void **)(param_1 + 0x18)) {
      ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x18),0,(ulonglong)uVar2);
      lVar1 = *(longlong *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)uVar2 + lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      return param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return 0;
}



// FUNCTION 143c93c60 hb_stable_sort<OT::GlyphID,unsigned_int> body=279 status=ok
// SIG undefined hb_stable_sort<OT::GlyphID,unsigned_int>(void)

void hb_stable_sort<OT::GlyphID,unsigned_int>
               (undefined2 *param_1,uint param_2,code *param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 1;
  puVar3 = param_1;
  puVar4 = param_4;
  if (1 < param_2) {
    do {
      if (uVar7 != 0) {
        uVar8 = uVar7;
        do {
          uVar6 = uVar8 - 1;
          iVar5 = (*param_3)(param_1 + uVar6,param_1 + uVar7);
          if (iVar5 < 1) break;
          uVar8 = uVar6;
        } while (uVar6 != 0);
        if (uVar7 != uVar8) {
          uVar1 = puVar3[1];
          memmove(param_1 + (uVar8 + 1),param_1 + uVar8,(ulonglong)(uVar7 - uVar8) * 2);
          param_1[uVar8] = uVar1;
          if (param_4 != (undefined4 *)0x0) {
            uVar2 = puVar4[1];
            memmove(param_4 + (uVar8 + 1),param_4 + uVar8,(ulonglong)(uVar7 - uVar8) * 4);
            param_4[uVar8] = uVar2;
          }
        }
      }
      uVar7 = uVar7 + 1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar7 < param_2);
  }
  return;
}



// FUNCTION 143c93d80 hb_stable_sort<OT::GlyphID,OT::GlyphID> body=289 status=ok
// SIG undefined hb_stable_sort<OT::GlyphID,OT::GlyphID>(void)

void hb_stable_sort<OT::GlyphID,OT::GlyphID>
               (longlong param_1,uint param_2,code *param_3,undefined2 *param_4)

{
  undefined2 *_Src;
  undefined2 uVar1;
  size_t _Size;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  
  uVar4 = 1;
  if (1 < param_2) {
    puVar6 = param_4;
    do {
      puVar6 = puVar6 + 1;
      uVar5 = (ulonglong)uVar4;
      if (uVar4 != 0) {
        do {
          uVar3 = (int)uVar5 - 1;
          iVar2 = (*param_3)(param_1 + (ulonglong)uVar3 * 2,param_1 + (ulonglong)uVar4 * 2);
          if (iVar2 < 1) break;
          uVar5 = (ulonglong)uVar3;
        } while (uVar3 != 0);
        uVar3 = (uint)uVar5;
        if (uVar4 != uVar3) {
          uVar1 = *(undefined2 *)((longlong)puVar6 + (param_1 - (longlong)param_4));
          _Size = (ulonglong)(uVar4 - uVar3) * 2;
          _Src = (undefined2 *)(uVar5 * 2 + param_1);
          memmove((void *)((ulonglong)(uVar3 + 1) * 2 + param_1),_Src,_Size);
          *_Src = uVar1;
          if (param_4 != (undefined2 *)0x0) {
            uVar1 = *puVar6;
            memmove(param_4 + (uVar3 + 1),param_4 + uVar5,_Size);
            param_4[uVar5] = uVar1;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
  }
  return;
}



// FUNCTION 143c93eb0 operator[] body=60 status=ok
// SIG undefined operator[](void)

byte * OT::ArrayOf<ManifestLookup,OT::IntType<unsigned_short,2>_>::operator[]
                 (byte *param_1,uint param_2)

{
  if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) <= param_2) {
    return &DAT_146bc89d0;
  }
  return param_1 + ((ulonglong)param_2 * 3 + 1) * 2;
}



// FUNCTION 143c93ef0 apply_stch body=1155 status=ok
// SIG undefined apply_stch(void)

void apply_stch(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  int local_res20;
  undefined8 uVar25;
  undefined8 uVar26;
  char *pcVar27;
  uint uVar28;
  uint local_68;
  int local_64;
  
  if ((*(uint *)(param_2 + 0x84) & 0x1000000) != 0) {
    iVar9 = 1;
    if (*(int *)(param_3 + 0x88) < 0) {
      iVar9 = -1;
    }
    iVar10 = 0;
    local_64 = 0;
    local_res20 = 0;
    do {
      uVar4 = *(uint *)(param_2 + 0xb8);
      lVar5 = *(longlong *)(param_2 + 0xd8);
      lVar6 = *(longlong *)(param_2 + 200);
      uVar1 = uVar4 + iVar10;
      uVar22 = (ulonglong)uVar1;
      uVar24 = uVar4;
      while (uVar24 != 0) {
        lVar3 = (ulonglong)(uVar24 - 1) * 0x14;
        if (*(byte *)(lVar3 + 0x12 + lVar6) - 8 < 2) {
          iVar23 = 0;
          iVar11 = 0;
          iVar15 = 0;
          uVar21 = uVar24;
          while (uVar21 != 0) {
            uVar19 = uVar21 - 1;
            uVar14 = (ulonglong)uVar19;
            iVar10 = local_res20;
            if (1 < *(byte *)(lVar6 + 0x12 + uVar14 * 0x14) - 8) break;
            iVar10 = (**(code **)(*(longlong *)(param_3 + 0x98) + 0x178))
                               (param_3,*(undefined8 *)(param_3 + 0xa0),
                                *(undefined4 *)(lVar6 + uVar14 * 0x14),
                                *(undefined8 *)(*(longlong *)(param_3 + 0x98) + 0x98));
            uVar21 = uVar19;
            if (*(char *)(lVar6 + uVar14 * 0x14 + 0x12) == '\b') {
              iVar23 = iVar23 + iVar10;
              iVar10 = local_res20;
            }
            else {
              iVar11 = iVar11 + iVar10;
              iVar15 = iVar15 + 1;
              iVar10 = local_res20;
            }
          }
          iVar16 = 0;
          uVar14 = (ulonglong)uVar21;
          uVar19 = uVar21;
          while (iVar17 = 0, uVar19 != 0) {
            iVar17 = (int)uVar14;
            uVar19 = iVar17 - 1;
            uVar14 = (ulonglong)uVar19;
            if ((*(byte *)(lVar6 + 0x12 + uVar14 * 0x14) - 8 < 2) ||
               ((((*(byte *)(lVar6 + 0x10 + uVar14 * 0x14) & 0x80) == 0 ||
                 ((*(byte *)(lVar6 + 0xc + uVar14 * 0x14) >> 5 & 1) != 0)) &&
                ((1 << ((byte)*(undefined2 *)(lVar6 + 0x10 + uVar14 * 0x14) & 0x1f) & 0x780fcccU) ==
                 0)))) break;
            iVar16 = iVar16 + *(int *)(lVar5 + uVar14 * 0x14);
          }
          uVar14 = (ulonglong)uVar24;
          pcVar12 = "cutting";
          uVar19 = uVar21 + 1;
          if (local_64 == 0) {
            pcVar12 = "measuring";
          }
          pcVar27 = "%s stretch at (%d,%d,%d)";
          uVar18 = 0;
          uVar26 = 0;
          uVar25 = 0;
          uVar28 = uVar21;
          AK::MemoryMgr::StartProfileThreadUsage(0x45d3b34c);
          iVar16 = iVar16 - iVar23;
          iVar23 = iVar11 * iVar9;
          if ((iVar23 < iVar16 * iVar9) && (0 < iVar23)) {
            uVar18 = (iVar16 * iVar9) / iVar23 - 1;
          }
          uVar20 = uVar18 + 1;
          iVar23 = 0;
          local_68 = uVar20;
          if (0 < (int)((iVar16 - uVar20 * iVar11) * iVar9)) {
            local_68 = uVar18 + 2;
            iVar11 = (local_68 * iVar11 - iVar16) * iVar9;
            uVar18 = uVar20;
            if (0 < iVar11) {
              iVar23 = iVar11 / (int)(uVar20 * iVar15);
            }
          }
          if (local_64 == 0) {
            iVar10 = iVar10 + uVar18 * iVar15;
            local_res20 = iVar10;
          }
          else {
            iVar15 = 0;
            uVar18 = (uint)uVar14;
            while (iVar10 = local_res20, uVar21 < uVar18) {
              uVar18 = (int)uVar14 - 1;
              lVar3 = (ulonglong)uVar18 * 0x14;
              iVar10 = (**(code **)(*(longlong *)(param_3 + 0x98) + 0x178))
                                 (param_3,*(undefined8 *)(param_3 + 0xa0),
                                  *(undefined4 *)(lVar3 + lVar6),
                                  *(undefined8 *)(*(longlong *)(param_3 + 0x98) + 0x98),uVar25,
                                  uVar26,pcVar27,pcVar12,iVar17,uVar28,uVar24);
              uVar20 = 1;
              if (*(char *)(lVar3 + 0x12 + lVar6) == '\t') {
                uVar20 = local_68;
              }
              uVar13 = 0;
              if (uVar20 != 0) {
                do {
                  iVar15 = iVar15 - iVar10;
                  if (uVar13 != 0) {
                    iVar15 = iVar15 + iVar23;
                  }
                  *(int *)(lVar3 + 8 + lVar5) = iVar15;
                  uVar22 = (ulonglong)((int)uVar22 - 1);
                  uVar7 = ((undefined8 *)(lVar3 + lVar6))[1];
                  uVar13 = uVar13 + 1;
                  puVar2 = (undefined8 *)(lVar6 + uVar22 * 0x14);
                  *puVar2 = *(undefined8 *)(lVar3 + lVar6);
                  puVar2[1] = uVar7;
                  *(undefined4 *)(lVar6 + 0x10 + uVar22 * 0x14) =
                       *(undefined4 *)(lVar3 + 0x10 + lVar6);
                  uVar7 = ((undefined8 *)(lVar3 + lVar5))[1];
                  puVar2 = (undefined8 *)(lVar5 + uVar22 * 0x14);
                  *puVar2 = *(undefined8 *)(lVar3 + lVar5);
                  puVar2[1] = uVar7;
                  *(undefined4 *)(lVar5 + 0x10 + uVar22 * 0x14) =
                       *(undefined4 *)(lVar3 + 0x10 + lVar5);
                } while (uVar13 < uVar20);
              }
              uVar14 = (ulonglong)uVar18;
            }
          }
        }
        else {
          uVar19 = uVar24;
          if (local_64 == 1) {
            uVar25 = ((undefined8 *)(lVar3 + lVar6))[1];
            uVar22 = (ulonglong)((int)uVar22 - 1);
            puVar2 = (undefined8 *)(lVar6 + uVar22 * 0x14);
            *puVar2 = *(undefined8 *)(lVar3 + lVar6);
            puVar2[1] = uVar25;
            *(undefined4 *)(lVar6 + 0x10 + uVar22 * 0x14) = *(undefined4 *)(lVar3 + 0x10 + lVar6);
            uVar25 = ((undefined8 *)(lVar3 + lVar5))[1];
            puVar2 = (undefined8 *)(lVar5 + uVar22 * 0x14);
            *puVar2 = *(undefined8 *)(lVar3 + lVar5);
            puVar2[1] = uVar25;
            *(undefined4 *)(lVar5 + 0x10 + uVar22 * 0x14) = *(undefined4 *)(lVar3 + 0x10 + lVar5);
          }
        }
        uVar24 = uVar19 - 1;
      }
      if (local_64 == 0) {
        if (((uVar4 + iVar10 != 0) && (*(uint *)(param_2 + 0xc0) <= uVar4 + iVar10)) &&
           (cVar8 = hb_buffer_t::enlarge(param_2), cVar8 == '\0')) {
          return;
        }
      }
      else {
        *(uint *)(param_2 + 0xb8) = uVar1;
      }
      local_64 = local_64 + 1;
    } while (local_64 < 2);
  }
  return;
}



// FUNCTION 143c94380 arabic_fallback_plan_create body=140 status=ok
// SIG undefined arabic_fallback_plan_create(void)

undefined4 * arabic_fallback_plan_create(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)HarfBuzzCalloc(1,0x88);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)&DAT_145d3a6c0;
  }
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 0;
  cVar1 = arabic_fallback_plan_init_unicode(puVar2,param_1,param_2);
  if ((cVar1 == '\0') &&
     (cVar1 = arabic_fallback_plan_init_win1256(puVar2,param_1,param_2), cVar1 == '\0')) {
    FMemory::operator_delete(puVar2);
    return (undefined4 *)&DAT_145d3a6c0;
  }
  return puVar2;
}



// FUNCTION 143c94410 arabic_fallback_plan_destroy body=82 status=ok
// SIG undefined arabic_fallback_plan_destroy(void)

void arabic_fallback_plan_destroy(uint *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((param_1 != (uint *)0x0) && (param_1 != (uint *)&DAT_145d3a6c0)) {
    uVar2 = 0;
    if (*param_1 != 0) {
      do {
        if ((*(longlong *)(param_1 + uVar2 * 2 + 8) != 0) && ((char)param_1[1] != '\0')) {
          FMemory::operator_delete();
        }
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < *param_1);
    }
    FMemory::operator_delete(param_1);
  }
  return;
}



// FUNCTION 143c94470 arabic_fallback_plan_init_unicode body=255 status=ok
// SIG undefined arabic_fallback_plan_init_unicode(void)

bool arabic_fallback_plan_init_unicode(int *param_1,longlong param_2,undefined8 param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined4 local_res8 [2];
  int *local_38;
  undefined4 local_30;
  ulonglong uVar5;
  
  uVar7 = 0;
  pcVar8 = "tiniidemaniflosigilr";
  uVar5 = uVar7;
  uVar6 = uVar7;
  do {
    local_res8[0] = *(undefined4 *)pcVar8;
    pvVar1 = bsearch(local_res8,*(void **)(param_2 + 0x40),(ulonglong)*(uint *)(param_2 + 0x38),0x24
                     ,(_PtFuncCompare *)&LAB_143c7bc50);
    uVar2 = uVar7;
    if (pvVar1 != (void *)0x0) {
      uVar2 = (ulonglong)*(uint *)((longlong)pvVar1 + 0x1c);
    }
    param_1[uVar6 + 2] = (int)uVar2;
    if ((int)uVar2 != 0) {
      lVar3 = arabic_fallback_synthesize_lookup(param_2,param_3,uVar5);
      *(longlong *)(param_1 + uVar6 * 2 + 8) = lVar3;
      if (lVar3 != 0) {
        local_30 = 0;
        local_38 = param_1 + (uVar6 + 6) * 3;
        local_38[0] = 0;
        local_38[1] = 0;
        local_38[2] = 0;
        OT::Lookup::
        dispatch<OT::SubstLookupSubTable,OT::hb_add_coverage_context_t<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>_>
                  (lVar3,&local_38);
        uVar6 = (ulonglong)((int)uVar6 + 1);
      }
    }
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    pcVar8 = pcVar8 + 4;
  } while (uVar4 < 5);
  *param_1 = (int)uVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  return (int)uVar6 != 0;
}



// FUNCTION 143c94570 arabic_fallback_plan_init_win1256 body=522 status=ok
// SIG undefined arabic_fallback_plan_init_win1256(void)

/* WARNING: Removing unreachable block (ram,0x000143c9468f) */

bool arabic_fallback_plan_init_win1256(int *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  uint uVar4;
  ulonglong uVar6;
  int local_res20 [2];
  int *local_38;
  undefined4 local_30;
  ulonglong uVar5;
  
  iVar1 = hb_font_get_glyph(param_3,0x627,0,local_res20);
  if ((((((iVar1 != 0) && (local_res20[0] == 199)) &&
        (iVar1 = hb_font_get_glyph(param_3,0x644,0,local_res20), iVar1 != 0)) &&
       ((local_res20[0] == 0xe1 &&
        (iVar1 = hb_font_get_glyph(param_3,0x649,0,local_res20), iVar1 != 0)))) &&
      ((local_res20[0] == 0xec &&
       ((iVar1 = hb_font_get_glyph(param_3,0x64a,0,local_res20), iVar1 != 0 &&
        (local_res20[0] == 0xed)))))) &&
     ((iVar1 = hb_font_get_glyph(param_3,0x652,0,local_res20), iVar1 != 0 &&
      (local_res20[0] == 0xfa)))) {
    uVar5 = 0;
    uVar6 = uVar5;
    do {
      lVar2 = uVar5 * 6;
      iVar1 = hb_ot_map_t::get_1_mask
                        (param_2 + 0x28,
                         (uint)(byte)(&DAT_145d3a763)[lVar2] * 0x10000 +
                         (uint)(byte)(&UNK_145d3a764)[lVar2] * 0x100 +
                         (uint)(byte)(&DAT_145d3a762)[lVar2] * 0x1000000 +
                         (uint)(byte)(&UNK_145d3a765)[lVar2]);
      param_1[uVar6 + 2] = iVar1;
      if (iVar1 != 0) {
        lVar2 = OT::ArrayOf<ManifestLookup,OT::IntType<unsigned_short,2>_>::operator[]
                          (&DAT_145d3a760,uVar5);
        puVar3 = &DAT_146bc89d0;
        uVar4 = (uint)(ushort)((ushort)*(byte *)(lVar2 + 4) * 0x100 + (ushort)*(byte *)(lVar2 + 5));
        if (uVar4 != 0) {
          puVar3 = &DAT_145d3a760 + uVar4;
        }
        *(undefined **)(param_1 + uVar6 * 2 + 8) = puVar3;
        if (puVar3 != (undefined *)0x0) {
          local_30 = 0;
          local_38 = param_1 + (uVar6 + 6) * 3;
          local_38[0] = 0;
          local_38[1] = 0;
          local_38[2] = 0;
          OT::Lookup::
          dispatch<OT::SubstLookupSubTable,OT::hb_add_coverage_context_t<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,4>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned_long,0>,hb_set_digest_lowest_bits_t<unsigned_long,9>_>_>_>_>
                    (puVar3,&local_38);
          uVar6 = (ulonglong)((int)uVar6 + 1);
        }
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < 5);
    *param_1 = (int)uVar6;
    *(undefined1 *)(param_1 + 1) = 0;
    return (int)uVar6 != 0;
  }
  return false;
}



// FUNCTION 143c94780 arabic_fallback_plan_shape body=113 status=ok
// SIG undefined arabic_fallback_plan_shape(void)

void arabic_fallback_plan_shape(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 local_e8 [36];
  uint local_c4;
  
  OT::hb_apply_context_t::hb_apply_context_t(local_e8,0,param_2,param_3);
  uVar2 = 0;
  if (*param_1 != 0) {
    do {
      if (*(longlong *)(param_1 + uVar2 * 2 + 8) != 0) {
        local_c4 = param_1[uVar2 + 2];
        hb_ot_layout_substitute_lookup
                  (local_e8,*(longlong *)(param_1 + uVar2 * 2 + 8),param_1 + (uVar2 + 6) * 3);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *param_1);
  }
  return;
}



// FUNCTION 143c94800 arabic_fallback_shape body=139 status=ok
// SIG undefined arabic_fallback_shape(void)

void arabic_fallback_shape(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x428);
  if ((*(byte *)(lVar1 + 0x28) & 1) != 0) {
    LOCK();
    UNLOCK();
    lVar2 = *(longlong *)(lVar1 + 0x20);
    while (lVar2 == 0) {
      lVar2 = arabic_fallback_plan_create(param_1,param_2);
      LOCK();
      bVar3 = *(longlong *)(lVar1 + 0x20) == 0;
      if (bVar3) {
        *(longlong *)(lVar1 + 0x20) = lVar2;
      }
      UNLOCK();
      if (bVar3) break;
      arabic_fallback_plan_destroy();
      LOCK();
      UNLOCK();
      lVar2 = *(longlong *)(lVar1 + 0x20);
    }
    arabic_fallback_plan_shape(lVar2,param_2,param_3);
  }
  return;
}



// FUNCTION 143c94890 arabic_fallback_synthesize_lookup body=15 status=ok
// SIG undefined arabic_fallback_synthesize_lookup(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * arabic_fallback_synthesize_lookup(undefined8 param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  short sVar5;
  uint uVar6;
  uint *_Dst;
  uint *_Dst_00;
  char cVar7;
  short *psVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  uint *_Src;
  undefined1 auStack_728 [32];
  undefined8 uStack_708;
  undefined4 uStack_700;
  char *pcStack_6f8;
  uint *puStack_6f0;
  undefined1 *puStack_6e8;
  uint uStack_6e0;
  char *pcStack_6d8;
  uint uStack_6c8;
  uint auStack_6c4 [3];
  uint *puStack_6b8;
  undefined1 *puStack_6b0;
  uint *puStack_6a8;
  char cStack_6a0;
  int aiStack_698 [2];
  undefined1 *puStack_690;
  int aiStack_688 [2];
  undefined1 *puStack_680;
  uint uStack_678;
  ushort uStack_674;
  undefined1 uStack_672;
  undefined1 uStack_671;
  undefined1 auStack_32c [4];
  undefined1 auStack_328 [368];
  undefined1 auStack_1b8 [368];
  ulonglong uStack_48;
  
  if (3 < param_3) {
    pvVar4 = (void *)arabic_fallback_synthesize_lookup_ligature();
    return pvVar4;
  }
  uStack_48 = DAT_1468387a8 ^ (ulonglong)auStack_728;
  uVar9 = 0;
  uVar6 = 0x621;
  psVar8 = (short *)(&DAT_145d3ad00 + (ulonglong)param_3 * 2);
  do {
    sVar5 = *psVar8;
    if ((((sVar5 != 0) && (iVar3 = hb_font_get_glyph(param_2,uVar6,0,&uStack_6c8), iVar3 != 0)) &&
        (iVar3 = hb_font_get_glyph(param_2,sVar5,0,auStack_6c4), iVar3 != 0)) &&
       (((uStack_6c8 != auStack_6c4[0] && (uStack_6c8 < 0x10000)) && (auStack_6c4[0] < 0x10000)))) {
      lVar1 = uVar9 * 2;
      auStack_328[lVar1] = (char)(uStack_6c8 >> 8);
      auStack_1b8[lVar1] = (char)(auStack_6c4[0] >> 8);
      uVar9 = (ulonglong)((int)uVar9 + 1);
      auStack_328[lVar1 + 1] = (char)uStack_6c8;
      auStack_1b8[lVar1 + 1] = (char)auStack_6c4[0];
    }
    uVar6 = uVar6 + 1;
    psVar8 = psVar8 + 4;
  } while (uVar6 < 0x6d4);
  iVar3 = (int)uVar9;
  if (iVar3 == 0) {
    return (void *)0x0;
  }
  hb_stable_sort<OT::GlyphID,OT::GlyphID>(auStack_328,uVar9,&LAB_143c953d0,auStack_1b8);
  puStack_680 = auStack_328;
  puVar10 = auStack_32c;
  puStack_690 = auStack_1b8;
  _Src = &uStack_678;
  puStack_6a8 = &uStack_678;
  uStack_6e0 = (int)puVar10 - (int)_Src;
  auStack_6c4[1] = 0;
  puStack_6e8 = auStack_32c;
  cVar7 = '\x01';
  puStack_6f0 = &uStack_678;
  cStack_6a0 = '\0';
  pcStack_6f8 = "start [%p..%p] (%lu bytes)";
  uStack_700 = 1;
  uStack_708 = 0;
  puStack_6b8 = _Src;
  puStack_6b0 = puVar10;
  aiStack_698[0] = iVar3;
  aiStack_688[0] = iVar3;
  AK::MemoryMgr::StartProfileThreadUsage(0x45d3b308);
  uVar6 = ((int)&uStack_678 - (int)puStack_6a8) + 6;
  if ((ulonglong)uVar6 < 0x34d) {
    _guard_xfg_dispatch_icall_nop(&uStack_678,0,(ulonglong)uVar6);
    uStack_678 = 0x8000100;
    _Dst = (uint *)((longlong)&uStack_678 + (ulonglong)uVar6);
    uVar9 = (ulonglong)(((int)&uStack_674 - (int)_Dst) + 2);
    puStack_6a8 = _Dst;
    if ((longlong)(auStack_32c + -(longlong)_Dst) < (longlong)uVar9) {
LAB_143c95149:
      cVar7 = '\x01';
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst,0,uVar9);
      _Dst_00 = (uint *)((longlong)_Dst + uVar9);
      cVar7 = '\0';
      puStack_6a8 = _Dst_00;
      if (_Dst != (uint *)0x0) {
        uStack_674 = 0x100;
        uVar6 = ((int)&uStack_674 - (int)_Dst_00) + 4;
        if ((longlong)(auStack_32c + -(longlong)_Dst_00) < (longlong)(ulonglong)uVar6)
        goto LAB_143c95149;
        _guard_xfg_dispatch_icall_nop(_Dst_00,0,(ulonglong)uVar6);
        puStack_6a8 = (uint *)((longlong)_Dst_00 + (ulonglong)uVar6);
        if (_Dst_00 != (uint *)0x0) {
          if ((uStack_678 & 0x10000000) != 0) {
            *(undefined2 *)
             ((longlong)&uStack_674 +
             (ulonglong)((uint)(ushort)(uStack_674 * 0x100 + (uStack_674 >> 8)) * 2 + 2)) = 0;
          }
          sVar5 = (short)puStack_6a8 - (short)&uStack_678;
          uStack_708 = CONCAT44(uStack_708._4_4_,iVar3);
          uStack_671 = (undefined1)sVar5;
          uStack_672 = (undefined1)((ushort)sVar5 >> 8);
          cVar2 = OT::SingleSubst::serialize(puStack_6a8,auStack_6c4 + 1,aiStack_688,aiStack_698);
          puVar10 = puStack_6b0;
          _Src = puStack_6b8;
          cVar7 = cStack_6a0;
          goto LAB_143c95155;
        }
      }
    }
  }
  cVar2 = '\0';
LAB_143c95155:
  uStack_6e0 = (int)puStack_6a8 - (int)puStack_6b8;
  uVar9 = (ulonglong)uStack_6e0;
  pcStack_6d8 = "did not ran out of room";
  if (cVar7 != '\0') {
    pcStack_6d8 = "RAN OUT OF ROOM";
  }
  pcStack_6f8 = "end [%p..%p] serialized %d bytes; %s";
  uStack_700 = 0xffffffff;
  uStack_708 = 0;
  puStack_6f0 = _Src;
  puStack_6e8 = puVar10;
  AK::MemoryMgr::StartProfileThreadUsage(0x45d3b308);
  if (cVar2 == '\0') {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = (void *)operator_new(uVar9 & 0xffffffff);
    if (pvVar4 != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(pvVar4,_Src,uVar9 & 0xffffffff);
    }
  }
  return pvVar4;
}



// FUNCTION 143c948a0 arabic_fallback_synthesize_lookup_ligature body=1488 status=ok
// SIG undefined arabic_fallback_synthesize_lookup_ligature(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * arabic_fallback_synthesize_lookup_ligature(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined2 uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  void *_Dst;
  short sVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *_Dst_00;
  undefined2 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  undefined4 *_Src;
  ulonglong uVar17;
  ulonglong uVar18;
  int *piVar19;
  undefined1 auStack_268 [32];
  longlong local_248;
  ulonglong *local_240;
  char *local_238;
  undefined4 *local_230;
  ulonglong *local_228;
  uint local_220;
  char *local_218;
  uint local_208;
  undefined1 local_204 [4];
  undefined4 local_200 [2];
  undefined4 *local_1f8;
  ulonglong *local_1f0;
  undefined4 *local_1e8;
  char local_1e0;
  undefined1 local_1d8 [4];
  undefined1 local_1d4 [4];
  int local_1d0 [4];
  ulonglong local_1c0;
  undefined1 *local_1b8;
  int local_1b0 [2];
  undefined4 *local_1a8;
  int local_1a0 [2];
  undefined1 *local_198;
  uint local_190 [2];
  undefined1 *local_188;
  undefined4 local_180 [8];
  undefined1 local_160 [16];
  undefined1 local_150 [24];
  undefined1 local_138 [3];
  byte bStack_135;
  undefined2 local_134;
  undefined1 local_132;
  undefined1 local_131;
  ulonglong local_38 [2];
  ulonglong uVar11;
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_268;
  uVar16 = 0;
  puVar12 = &DAT_145d3a5d0;
  local_208 = 0;
  uVar11 = uVar16;
  uVar17 = uVar16;
  do {
    iVar6 = hb_font_get_glyph(param_2,*puVar12,0,&local_208);
    uVar18 = uVar17;
    if (iVar6 != 0) {
      uVar18 = (ulonglong)((int)uVar17 + 1);
      local_204[uVar17 * 2] = (char)(local_208 >> 8);
      local_204[uVar17 * 2 + 1] = (char)local_208;
      local_1d0[uVar17] = 0;
      local_1d0[uVar17 + 2] = (int)uVar11;
    }
    uVar9 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar9;
    puVar12 = puVar12 + 9;
    uVar17 = uVar18;
  } while (uVar9 < 2);
  local_208 = (uint)uVar18;
  hb_stable_sort<OT::GlyphID,unsigned_int>(local_204,uVar18,&LAB_143c953d0,local_1d0 + 2);
  if ((uint)uVar18 == 0) {
    return (void *)0x0;
  }
  local_1c0 = uVar18;
  uVar11 = uVar16;
  do {
    lVar13 = 4;
    puVar12 = (undefined2 *)
              (&DAT_145d3a5d4 + (ulonglong)*(uint *)((longlong)local_1d0 + uVar16 + 8) * 0x12);
    uVar17 = uVar11;
    do {
      uVar2 = *puVar12;
      uVar11 = uVar17;
      if (((puVar12[-1] != 0) &&
          (iVar6 = hb_font_get_glyph(param_2,puVar12[-1],0,local_1d4), iVar6 != 0)) &&
         (iVar6 = hb_font_get_glyph(param_2,uVar2,0,local_1d8), iVar6 != 0)) {
        *(int *)((longlong)local_1d0 + uVar16) = *(int *)((longlong)local_1d0 + uVar16) + 1;
        local_160[uVar17 * 2] = local_1d8[1];
        local_160[uVar17 * 2 + 1] = local_1d8[0];
        local_150[uVar17 * 2] = local_1d4[1];
        uVar11 = (ulonglong)((int)uVar17 + 1);
        local_180[uVar17] = 2;
        local_150[uVar17 * 2 + 1] = local_1d4[0];
      }
      uVar9 = local_208;
      puVar12 = puVar12 + 2;
      lVar13 = lVar13 + -1;
      uVar17 = uVar11;
    } while (lVar13 != 0);
    uVar16 = uVar16 + 4;
    local_1c0 = local_1c0 - 1;
  } while (local_1c0 != 0);
  local_1b0[0] = (int)uVar11;
  if (local_1b0[0] == 0) {
    return (void *)0x0;
  }
  local_188 = local_204;
  local_190[0] = local_208;
  local_198 = local_160;
  cVar5 = '\x01';
  local_1a8 = local_180;
  local_1b8 = local_150;
  local_1f0 = local_38;
  cVar4 = '\0';
  local_1e8 = (undefined4 *)local_138;
  local_1e0 = '\0';
  local_220 = (int)local_1f0 - (int)local_138;
  local_200[0] = 0;
  local_228 = local_38;
  local_230 = (undefined4 *)local_138;
  local_238 = "start [%p..%p] (%lu bytes)";
  local_240 = (ulonglong *)CONCAT44(local_240._4_4_,1);
  local_248 = lVar13;
  local_1f8 = (undefined4 *)local_138;
  local_1c0 = uVar11;
  local_1a0[0] = local_1b0[0];
  AK::MemoryMgr::StartProfileThreadUsage(0x45d3b308);
  sVar7 = CONCAT11(local_132,local_131);
  uVar10 = ((int)local_138 - (int)local_1e8) + 6;
  _Src = (undefined4 *)local_138;
  if ((ulonglong)uVar10 < 0x101) {
    _guard_xfg_dispatch_icall_nop(local_138,0,(ulonglong)uVar10);
    sVar7 = CONCAT11(local_132,local_131);
    _local_138 = 0x8000400;
    puVar15 = (undefined4 *)((longlong)local_138 + (ulonglong)uVar10);
    uVar11 = (ulonglong)(((int)&local_134 - (int)puVar15) + 2);
    local_1e8 = puVar15;
    if ((longlong)local_38 - (longlong)puVar15 < (longlong)uVar11) {
LAB_143c94d91:
      cVar5 = '\x01';
    }
    else {
      _guard_xfg_dispatch_icall_nop(puVar15,0,uVar11);
      sVar7 = CONCAT11(local_132,local_131);
      puVar14 = (undefined4 *)((longlong)puVar15 + uVar11);
      local_1e8 = puVar14;
      cVar5 = cVar4;
      if (puVar15 != (undefined4 *)0x0) {
        local_134 = 0x100;
        uVar10 = ((int)&local_134 - (int)puVar14) + 4;
        if ((longlong)local_38 - (longlong)puVar14 < (longlong)(ulonglong)uVar10)
        goto LAB_143c94d91;
        _guard_xfg_dispatch_icall_nop(puVar14,0,(ulonglong)uVar10);
        puVar15 = (undefined4 *)((longlong)puVar14 + (ulonglong)uVar10);
        local_1e8 = puVar15;
        sVar7 = CONCAT11(local_132,local_131);
        if (puVar14 != (undefined4 *)0x0) {
          if ((_local_138 & 0x10000000) != 0) {
            *(undefined2 *)
             ((longlong)&local_134 +
             (ulonglong)((uint)(ushort)(local_134 * 0x100 + (local_134 >> 8)) * 2 + 2)) = 0;
          }
          local_1e8._0_2_ = (short)puVar15;
          sVar8 = (short)local_1e8;
          sVar7 = (short)local_1e8 - (short)local_138;
          local_131 = (undefined1)sVar7;
          local_132 = (undefined1)((ushort)sVar7 >> 8);
          if ((longlong)local_38 - (longlong)puVar15 < 2) goto LAB_143c94d91;
          *(undefined2 *)puVar15 = 0;
          puVar14 = (undefined4 *)((longlong)puVar15 + 2);
          local_1e8 = puVar14;
          sVar7 = CONCAT11(local_132,local_131);
          if (puVar15 != (undefined4 *)0x0) {
            *(undefined2 *)puVar15 = 0x100;
            sVar7 = CONCAT11(local_132,local_131);
            uVar11 = (ulonglong)(((int)puVar15 - (int)puVar14) + 6);
            if ((longlong)local_38 - (longlong)puVar14 < (longlong)uVar11) goto LAB_143c94d91;
            _guard_xfg_dispatch_icall_nop(puVar14,0,uVar11);
            sVar7 = CONCAT11(local_132,local_131);
            _Dst_00 = (undefined4 *)((longlong)puVar14 + uVar11);
            local_1e8 = _Dst_00;
            if (puVar14 != (undefined4 *)0x0) {
              pbVar1 = (byte *)(puVar15 + 1);
              uVar11 = (ulonglong)(((int)pbVar1 - (int)_Dst_00) + 2);
              if ((longlong)local_38 - (longlong)_Dst_00 < (longlong)uVar11) goto LAB_143c94d91;
              _guard_xfg_dispatch_icall_nop(_Dst_00,0,uVar11);
              puVar14 = (undefined4 *)((longlong)_Dst_00 + uVar11);
              local_1e8 = puVar14;
              sVar7 = CONCAT11(local_132,local_131);
              if ((_Dst_00 != (undefined4 *)0x0) &&
                 (sVar7 = CONCAT11(local_132,local_131), pbVar1 != (byte *)0x0)) {
                *(char *)((longlong)puVar15 + 5) = (char)uVar9;
                bVar3 = (byte)(uVar9 >> 8);
                *pbVar1 = bVar3;
                sVar7 = CONCAT11(local_132,local_131);
                uVar11 = (ulonglong)
                         ((int)pbVar1 +
                         (((uint)(ushort)((ushort)bVar3 * 0x100 + ((ushort)uVar9 & 0xff)) * 2 + 2) -
                         (int)puVar14));
                if ((longlong)local_38 - (longlong)puVar14 < (longlong)uVar11) goto LAB_143c94d91;
                _guard_xfg_dispatch_icall_nop(puVar14,0,uVar11);
                sVar7 = CONCAT11(local_132,local_131);
                local_1e8 = (undefined4 *)((longlong)puVar14 + uVar11);
                if (puVar14 != (undefined4 *)0x0) {
                  uVar10 = 0;
                  piVar19 = local_1d0;
                  puVar12 = (undefined2 *)((longlong)puVar15 + 6);
                  do {
                    if (uVar10 < uVar9) {
                      iVar6 = *piVar19;
                    }
                    else {
                      iVar6 = 0;
                    }
                    sVar7 = (short)local_1e8 - sVar8;
                    *(char *)((longlong)puVar12 + 1) = (char)sVar7;
                    *(char *)puVar12 = (char)((ushort)sVar7 >> 8);
                    local_240 = &local_1c0;
                    local_248 = CONCAT44(local_248._4_4_,iVar6);
                    cVar4 = OT::LigatureSet::serialize(local_1e8,local_200,local_1a0,local_1b0);
                    sVar7 = CONCAT11(local_132,local_131);
                    _Src = local_1f8;
                    cVar5 = local_1e0;
                    if (cVar4 == '\0') goto LAB_143c94d9a;
                    uVar10 = uVar10 + 1;
                    puVar12 = puVar12 + 1;
                    piVar19 = piVar19 + 1;
                  } while (uVar10 < uVar9);
                  sVar8 = (short)local_1e8 - sVar8;
                  *(char *)((longlong)puVar15 + 3) = (char)sVar8;
                  *(char *)((longlong)puVar15 + 2) = (char)((ushort)sVar8 >> 8);
                  cVar5 = OT::Coverage::serialize(local_1e8,local_200,local_190,uVar9);
                  sVar7 = CONCAT11(local_132,local_131);
                  cVar4 = cVar5 != '\0';
                  _Src = local_1f8;
                  cVar5 = local_1e0;
                  goto LAB_143c94d9d;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_143c94d9a:
  cVar4 = false;
LAB_143c94d9d:
  local_132 = (undefined1)((ushort)sVar7 >> 8);
  local_131 = (undefined1)sVar7;
  local_220 = (int)local_1e8 - (int)local_1f8;
  uVar11 = (ulonglong)local_220;
  local_218 = "did not ran out of room";
  if (cVar5 != '\0') {
    local_218 = "RAN OUT OF ROOM";
  }
  local_228 = local_1f0;
  local_238 = "end [%p..%p] serialized %d bytes; %s";
  local_240 = (ulonglong *)CONCAT44(local_240._4_4_,0xffffffff);
  local_248 = 0;
  local_230 = _Src;
  AK::MemoryMgr::StartProfileThreadUsage(0x45d3b308);
  if (cVar4 == '\0') {
    return (void *)0x0;
  }
  _Dst = (void *)operator_new(uVar11 & 0xffffffff);
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,uVar11 & 0xffffffff);
    return _Dst;
  }
  return (void *)0x0;
}



// FUNCTION 143c94e70 arabic_fallback_synthesize_lookup_single body=930 status=ok
// SIG undefined arabic_fallback_synthesize_lookup_single(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * arabic_fallback_synthesize_lookup_single
                 (undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  void *_Dst;
  short sVar4;
  uint uVar5;
  uint *_Dst_00;
  uint *_Dst_01;
  char cVar6;
  short *psVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint *_Src;
  undefined1 auStack_728 [32];
  undefined8 local_708;
  undefined4 local_700;
  char *local_6f8;
  uint *local_6f0;
  undefined1 *local_6e8;
  uint local_6e0;
  char *local_6d8;
  uint local_6c8;
  uint local_6c4 [3];
  uint *local_6b8;
  undefined1 *local_6b0;
  uint *local_6a8;
  char local_6a0;
  int local_698 [2];
  undefined1 *local_690;
  int local_688 [2];
  undefined1 *local_680;
  uint local_678;
  ushort local_674;
  undefined1 local_672;
  undefined1 local_671;
  undefined1 local_32c [4];
  undefined1 local_328 [368];
  undefined1 local_1b8 [368];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_728;
  uVar8 = 0;
  uVar5 = 0x621;
  psVar7 = (short *)(&DAT_145d3ad00 + (param_3 & 0xffffffff) * 2);
  do {
    sVar4 = *psVar7;
    if ((((sVar4 != 0) && (iVar3 = hb_font_get_glyph(param_2,uVar5,0,&local_6c8), iVar3 != 0)) &&
        (iVar3 = hb_font_get_glyph(param_2,sVar4,0,local_6c4), iVar3 != 0)) &&
       (((local_6c8 != local_6c4[0] && (local_6c8 < 0x10000)) && (local_6c4[0] < 0x10000)))) {
      lVar1 = uVar8 * 2;
      local_328[lVar1] = (char)(local_6c8 >> 8);
      local_1b8[lVar1] = (char)(local_6c4[0] >> 8);
      uVar8 = (ulonglong)((int)uVar8 + 1);
      local_328[lVar1 + 1] = (char)local_6c8;
      local_1b8[lVar1 + 1] = (char)local_6c4[0];
    }
    uVar5 = uVar5 + 1;
    psVar7 = psVar7 + 4;
  } while (uVar5 < 0x6d4);
  iVar3 = (int)uVar8;
  if (iVar3 == 0) {
    return (void *)0x0;
  }
  hb_stable_sort<OT::GlyphID,OT::GlyphID>(local_328,uVar8,&LAB_143c953d0,local_1b8);
  local_680 = local_328;
  puVar9 = local_32c;
  local_690 = local_1b8;
  _Src = &local_678;
  local_6a8 = &local_678;
  local_6e0 = (int)puVar9 - (int)_Src;
  local_6c4[1] = 0;
  local_6e8 = local_32c;
  cVar6 = '\x01';
  local_6f0 = &local_678;
  local_6a0 = '\0';
  local_6f8 = "start [%p..%p] (%lu bytes)";
  local_700 = 1;
  local_708 = 0;
  local_6b8 = _Src;
  local_6b0 = puVar9;
  local_698[0] = iVar3;
  local_688[0] = iVar3;
  AK::MemoryMgr::StartProfileThreadUsage(0x45d3b308);
  uVar5 = ((int)&local_678 - (int)local_6a8) + 6;
  if ((ulonglong)uVar5 < 0x34d) {
    _guard_xfg_dispatch_icall_nop(&local_678,0,(ulonglong)uVar5);
    local_678 = 0x8000100;
    _Dst_00 = (uint *)((longlong)&local_678 + (ulonglong)uVar5);
    uVar8 = (ulonglong)(((int)&local_674 - (int)_Dst_00) + 2);
    local_6a8 = _Dst_00;
    if ((longlong)(local_32c + -(longlong)_Dst_00) < (longlong)uVar8) {
LAB_143c95149:
      cVar6 = '\x01';
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst_00,0,uVar8);
      _Dst_01 = (uint *)((longlong)_Dst_00 + uVar8);
      cVar6 = '\0';
      local_6a8 = _Dst_01;
      if (_Dst_00 != (uint *)0x0) {
        local_674 = 0x100;
        uVar5 = ((int)&local_674 - (int)_Dst_01) + 4;
        if ((longlong)(local_32c + -(longlong)_Dst_01) < (longlong)(ulonglong)uVar5)
        goto LAB_143c95149;
        _guard_xfg_dispatch_icall_nop(_Dst_01,0,(ulonglong)uVar5);
        local_6a8 = (uint *)((longlong)_Dst_01 + (ulonglong)uVar5);
        if (_Dst_01 != (uint *)0x0) {
          if ((local_678 & 0x10000000) != 0) {
            *(undefined2 *)
             ((longlong)&local_674 +
             (ulonglong)((uint)(ushort)(local_674 * 0x100 + (local_674 >> 8)) * 2 + 2)) = 0;
          }
          sVar4 = (short)local_6a8 - (short)&local_678;
          local_708 = CONCAT44(local_708._4_4_,iVar3);
          local_671 = (undefined1)sVar4;
          local_672 = (undefined1)((ushort)sVar4 >> 8);
          cVar2 = OT::SingleSubst::serialize(local_6a8,local_6c4 + 1,local_688,local_698);
          puVar9 = local_6b0;
          _Src = local_6b8;
          cVar6 = local_6a0;
          goto LAB_143c95155;
        }
      }
    }
  }
  cVar2 = '\0';
LAB_143c95155:
  local_6e0 = (int)local_6a8 - (int)local_6b8;
  uVar8 = (ulonglong)local_6e0;
  local_6d8 = "did not ran out of room";
  if (cVar6 != '\0') {
    local_6d8 = "RAN OUT OF ROOM";
  }
  local_6f8 = "end [%p..%p] serialized %d bytes; %s";
  local_700 = 0xffffffff;
  local_708 = 0;
  local_6f0 = _Src;
  local_6e8 = puVar9;
  AK::MemoryMgr::StartProfileThreadUsage(0x45d3b308);
  if (cVar2 == '\0') {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)operator_new(uVar8 & 0xffffffff);
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,uVar8 & 0xffffffff);
    }
  }
  return _Dst;
}



// FUNCTION 143c95220 arabic_joining body=427 status=ok
// SIG undefined arabic_joining(void)

void arabic_joining(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar6 = *(uint *)(param_1 + 0xb8);
  lVar2 = *(longlong *)(param_1 + 200);
  uVar8 = 0;
  uVar11 = 0xffffffff;
  uVar7 = uVar8;
  uVar12 = uVar8;
  if (*(int *)(param_1 + 0x10c) != 0) {
    do {
      lVar1 = param_1 + uVar7 * 4;
      lVar3 = *(longlong *)(param_1 + 0x70);
      uVar4 = (**(code **)(lVar3 + 0x90))
                        (lVar3,*(undefined4 *)(lVar1 + 0xe4),*(undefined8 *)(lVar3 + 0xd0));
      uVar5 = get_joining_type(*(undefined4 *)(lVar1 + 0xe4),uVar4);
      if (uVar5 != 7) {
        uVar12 = (ulonglong)*(ushort *)(&DAT_145d3a602 + (ulonglong)uVar5 * 4);
        break;
      }
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
      uVar12 = 0;
    } while (uVar5 < *(uint *)(param_1 + 0x10c));
  }
  if (uVar6 != 0) {
    puVar9 = (undefined1 *)(lVar2 + 0x12);
    uVar7 = uVar8;
    do {
      uVar10 = (uint)uVar7;
      uVar5 = get_joining_type(*(undefined4 *)(puVar9 + -0x12),*(ushort *)(puVar9 + -2) & 0x1f);
      if (uVar5 == 7) {
        *puVar9 = 7;
      }
      else {
        lVar1 = (ulonglong)uVar5 + uVar12 * 6;
        if (((&DAT_145d3a600)[lVar1 * 4] != '\a') && (uVar11 != 0xffffffff)) {
          *(undefined *)(lVar2 + 0x12 + (ulonglong)uVar11 * 0x14) = (&DAT_145d3a600)[lVar1 * 4];
        }
        *puVar9 = (&DAT_145d3a601)[lVar1 * 4];
        uVar12 = (ulonglong)*(ushort *)(&DAT_145d3a602 + lVar1 * 4);
        uVar11 = uVar10;
      }
      uVar7 = (ulonglong)(uVar10 + 1);
      puVar9 = puVar9 + 0x14;
    } while (uVar10 + 1 < uVar6);
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x70);
      lVar1 = param_1 + uVar8 * 4;
      uVar4 = (**(code **)(lVar3 + 0x90))
                        (lVar3,*(undefined4 *)(lVar1 + 0xf8),*(undefined8 *)(lVar3 + 0xd0));
      uVar6 = get_joining_type(*(undefined4 *)(lVar1 + 0xf8),uVar4);
      if (uVar6 != 7) {
        if ((&DAT_145d3a600)[(ulonglong)uVar6 * 4 + uVar12 * 0x18] == '\a') {
          return;
        }
        if (uVar11 == 0xffffffff) {
          return;
        }
        *(undefined *)(lVar2 + 0x12 + (ulonglong)uVar11 * 0x14) =
             (&DAT_145d3a600)[(ulonglong)uVar6 * 4 + uVar12 * 0x18];
        return;
      }
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x110));
  }
  return;
}



// FUNCTION 143c95410 get_1_mask body=63 status=ok
// SIG undefined get_1_mask(void)

undefined4 hb_ot_map_t::get_1_mask(longlong param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  pvVar1 = bsearch(local_res10,*(void **)(param_1 + 0x18),(ulonglong)*(uint *)(param_1 + 0x10),0x24,
                   (_PtFuncCompare *)&LAB_143c7bc50);
  if (pvVar1 != (void *)0x0) {
    return *(undefined4 *)((longlong)pvVar1 + 0x1c);
  }
  return 0;
}



// FUNCTION 143c95450 get_joining_type body=44 status=ok
// SIG undefined get_joining_type(void)

ulonglong get_joining_type(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_2;
  uVar1 = joining_type(param_1,param_2,uVar2);
  if ((int)uVar1 == 8) {
    uVar1 = (ulonglong)(-(uint)((1 << ((byte)uVar2 & 0x1f) & 0x1802U) != 0) & 7);
  }
  return uVar1;
}



// FUNCTION 143c95480 joining_type body=257 status=ok
// SIG undefined joining_type(void)

undefined1 joining_type(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 0xc;
  if (param_1 >> 0xc == 0) {
    if (param_1 - 0x600 < 0x2b5) {
      return (&DAT_145d3a900)[param_1 - 0x600];
    }
  }
  else if (uVar1 == 1) {
    if (param_1 - 0x1806 < 0xa5) {
      return (&DAT_145d3a900)[param_1 - 0x1551];
    }
  }
  else if (uVar1 == 2) {
    if (param_1 - 0x200c < 2) {
      return (&DAT_145d3a900)[param_1 - 0x1cb2];
    }
    if (param_1 - 0x2066 < 4) {
      return (&DAT_145d3a900)[param_1 - 0x1d0a];
    }
  }
  else if (uVar1 == 10) {
    if (param_1 - 0xa840 < 0x34) {
      return (&DAT_145d3a900)[param_1 - 0xa4e0];
    }
  }
  else if (uVar1 == 0x10) {
    if (param_1 - 0x10ac0 < 0x30) {
      return (&DAT_145d3a900)[param_1 - 0x1072c];
    }
    if (param_1 - 0x10b80 < 0x30) {
      return (&DAT_145d3a900)[param_1 - 0x107bc];
    }
  }
  return 8;
}



// FUNCTION 143c95590 mongolian_variation_selectors body=75 status=ok
// SIG undefined mongolian_variation_selectors(void)

void mongolian_variation_selectors(longlong param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  uVar4 = 1;
  piVar2 = *(int **)(param_1 + 200);
  piVar3 = piVar2;
  if (1 < uVar1) {
    do {
      if (piVar3[5] - 0x180bU < 3) {
        *(undefined1 *)((longlong)piVar3 + 0x26) =
             *(undefined1 *)((longlong)piVar2 + (ulonglong)(uVar4 - 1) * 0x14 + 0x12);
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 5;
    } while (uVar4 < uVar1);
  }
  return;
}



// FUNCTION 143c95680 serialize body=177 status=ok
// SIG undefined serialize(void)

undefined8
OT::HeadlessArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::serialize
          (undefined1 *param_1,undefined8 param_2,uint *param_3,int param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar2 = hb_serialize_context_t::
          extend_min<OT::ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>_>
                    (param_2,param_1);
  if (lVar2 == 0) {
LAB_143c956b0:
    uVar3 = 0;
  }
  else {
    param_1[1] = (char)param_4;
    lVar2 = 0;
    *param_1 = (char)((uint)param_4 >> 8);
    if (param_4 != 0) {
      lVar2 = hb_serialize_context_t::
              extend<OT::HeadlessArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>_>
                        (param_2,param_1);
      if (lVar2 == 0) goto LAB_143c956b0;
      uVar5 = param_4 - 1;
      uVar4 = 0;
      if (uVar5 != 0) {
        lVar2 = 0;
        do {
          if (uVar4 < *param_3) {
            uVar1 = *(undefined2 *)(lVar2 + *(longlong *)(param_3 + 2));
          }
          else {
            uVar1 = 0;
          }
          *(undefined2 *)(param_1 + lVar2 + 2) = uVar1;
          uVar4 = uVar4 + 1;
          lVar2 = lVar2 + 2;
        } while (uVar4 < uVar5);
      }
      uVar4 = *param_3;
      if (uVar4 < uVar5) {
        uVar5 = uVar4;
      }
      *param_3 = uVar4 - uVar5;
      lVar2 = (ulonglong)uVar5 * 2;
      *(longlong *)(param_3 + 2) = *(longlong *)(param_3 + 2) + lVar2;
    }
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 143c95740 serialize body=351 status=ok
// SIG undefined serialize(void)

undefined8
OT::Coverage::serialize(undefined1 *param_1,undefined8 param_2,uint *param_3,uint param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  
  lVar2 = hb_serialize_context_t::
          extend_min<OT::ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>_>
                    (param_2,param_1);
  if (lVar2 != 0) {
    iVar7 = 1;
    uVar6 = 1;
    if (1 < param_4) {
      lVar2 = 2;
      do {
        if (uVar6 - 1 < *param_3) {
          uVar5 = *(ushort *)(*(longlong *)(param_3 + 2) + (ulonglong)(uVar6 - 1) * 2);
        }
        else {
          uVar5 = 0;
        }
        if (uVar6 < *param_3) {
          uVar1 = *(ushort *)(lVar2 + *(longlong *)(param_3 + 2));
        }
        else {
          uVar1 = 0;
        }
        if ((ushort)(uVar5 * 0x100 + (uVar5 >> 8)) + 1 !=
            (uint)(ushort)(uVar1 * 0x100 + (uVar1 >> 8))) {
          iVar7 = iVar7 + 1;
        }
        uVar6 = uVar6 + 1;
        lVar2 = lVar2 + 2;
      } while (uVar6 < param_4);
    }
    uVar5 = 2 - (param_4 * 2 < (uint)(iVar7 * 3));
    param_1[1] = (char)uVar5;
    *param_1 = (char)(uVar5 >> 8);
    sVar4 = (uVar5 & 0xff00) + (uVar5 & 0xff);
    if (sVar4 == 1) {
      uVar3 = CoverageFormat1::serialize(param_1,param_2,param_3,param_4);
      return uVar3;
    }
    if (sVar4 == 2) {
      uVar3 = CoverageFormat2::serialize(param_1,param_2,param_3,param_4);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 143c958a0 serialize body=170 status=ok
// SIG undefined serialize(void)

undefined8
OT::CoverageFormat1::serialize(longlong param_1,undefined8 param_2,uint *param_3,uint param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = hb_serialize_context_t::extend_min<OT::CoverageFormat1>(param_2,param_1);
  if (lVar2 != 0) {
    *(char *)(param_1 + 3) = (char)param_4;
    *(char *)(param_1 + 2) = (char)(param_4 >> 8);
    lVar2 = hb_serialize_context_t::
            extend<OT::ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>_>
                      ();
    if (lVar2 != 0) {
      uVar3 = 0;
      if (param_4 != 0) {
        lVar2 = 0;
        do {
          if (uVar3 < *param_3) {
            uVar1 = *(undefined2 *)(lVar2 + *(longlong *)(param_3 + 2));
          }
          else {
            uVar1 = 0;
          }
          *(undefined2 *)(param_1 + 4 + lVar2) = uVar1;
          uVar3 = uVar3 + 1;
          lVar2 = lVar2 + 2;
        } while (uVar3 < param_4);
      }
      uVar3 = *param_3;
      if (uVar3 < param_4) {
        param_4 = uVar3;
      }
      *param_3 = uVar3 - param_4;
      *(ulonglong *)(param_3 + 2) = *(longlong *)(param_3 + 2) + (ulonglong)param_4 * 2;
      return CONCAT71((int7)((ulonglong)param_4 * 2 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 143c95950 serialize body=578 status=ok
// SIG undefined serialize(void)

undefined8
OT::CoverageFormat2::serialize(longlong param_1,undefined8 param_2,uint *param_3,uint param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bStackX_11;
  
  lVar5 = hb_serialize_context_t::extend_min<OT::CoverageFormat1>(param_2,param_1);
  if (lVar5 == 0) {
    return 0;
  }
  if (param_4 != 0) {
    uVar8 = 1;
    sVar7 = 1;
    uVar9 = 1;
    if (1 < param_4) {
      lVar5 = 2;
      sVar7 = 1;
      do {
        if (uVar9 - 1 < *param_3) {
          uVar4 = (uint)*(ushort *)(*(longlong *)(param_3 + 2) + (ulonglong)(uVar9 - 1) * 2);
        }
        else {
          uVar4 = 0;
        }
        bStackX_11 = (byte)(uVar4 >> 8);
        if (uVar9 < *param_3) {
          uVar1 = *(ushort *)(lVar5 + *(longlong *)(param_3 + 2));
        }
        else {
          uVar1 = 0;
        }
        if ((ushort)((short)((uVar4 & 0xff) * 0x100) + (ushort)bStackX_11) + 1 !=
            (uint)(ushort)(uVar1 * 0x100 + (uVar1 >> 8))) {
          sVar7 = sVar7 + 1;
        }
        uVar9 = uVar9 + 1;
        lVar5 = lVar5 + 2;
      } while (uVar9 < param_4);
    }
    *(char *)(param_1 + 3) = (char)sVar7;
    *(char *)(param_1 + 2) = (char)((ushort)sVar7 >> 8);
    lVar5 = hb_serialize_context_t::
            extend<OT::SortedArrayOf<OT::RangeRecord,OT::IntType<unsigned_short,2>_>_>(param_2);
    uVar6 = 0;
    if (lVar5 != 0) {
      uVar10 = 0;
      if (*param_3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = **(undefined2 **)(param_3 + 2);
      }
      *(undefined2 *)(param_1 + 4) = uVar2;
      *(undefined2 *)(param_1 + 8) = 0;
      if (1 < param_4) {
        do {
          uVar9 = *param_3;
          if (uVar8 - 1 < uVar9) {
            uVar1 = *(ushort *)(*(longlong *)(param_3 + 2) + (ulonglong)(uVar8 - 1) * 2);
          }
          else {
            uVar1 = 0;
          }
          if (uVar8 < uVar9) {
            uVar3 = *(ushort *)(*(longlong *)(param_3 + 2) + (ulonglong)uVar8 * 2);
          }
          else {
            uVar3 = 0;
          }
          if ((ushort)(uVar1 * 0x100 + (uVar1 >> 8)) + 1 ==
              (uint)(ushort)(uVar3 * 0x100 + (uVar3 >> 8))) {
            if (uVar8 < uVar9) {
              uVar2 = *(undefined2 *)(*(longlong *)(param_3 + 2) + (ulonglong)uVar8 * 2);
            }
            else {
              uVar2 = 0;
            }
            *(undefined2 *)(param_1 + (uVar10 + 1) * 6) = uVar2;
          }
          else {
            uVar10 = (ulonglong)((int)uVar10 + 1);
            if (uVar8 < uVar9) {
              uVar2 = *(undefined2 *)(*(longlong *)(param_3 + 2) + (ulonglong)uVar8 * 2);
            }
            else {
              uVar2 = 0;
            }
            lVar5 = param_1 + uVar10 * 6;
            *(undefined2 *)(lVar5 + 4) = uVar2;
            *(char *)(lVar5 + 8) = (char)(uVar8 >> 8);
            *(char *)(lVar5 + 9) = (char)uVar8;
            if (uVar8 < *param_3) {
              *(undefined2 *)(lVar5 + 6) =
                   *(undefined2 *)(*(longlong *)(param_3 + 2) + (ulonglong)uVar8 * 2);
            }
            else {
              *(undefined2 *)(lVar5 + 6) = 0;
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < param_4);
      }
      uVar8 = *param_3;
      if (uVar8 < param_4) {
        param_4 = uVar8;
      }
      *param_3 = uVar8 - param_4;
      *(ulonglong *)(param_3 + 2) = *(longlong *)(param_3 + 2) + (ulonglong)param_4 * 2;
      uVar6 = 1;
    }
    return uVar6;
  }
  return 1;
}



// FUNCTION 143c95ba0 serialize body=443 status=ok
// SIG undefined serialize(void)

ulonglong OT::LigatureSet::serialize
                    (undefined1 *param_1,longlong param_2,uint *param_3,uint *param_4,uint param_5,
                    undefined8 param_6)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  short local_res8;
  
  lVar3 = hb_serialize_context_t::
          extend_min<OT::ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>_>
                    (param_2,param_1);
  if (lVar3 == 0) {
    return 0;
  }
  lVar3 = hb_serialize_context_t::
          extend_min<OT::ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>_>
                    (param_2,param_1);
  if (lVar3 != 0) {
    param_1[1] = (char)param_5;
    *param_1 = (char)(param_5 >> 8);
    lVar3 = hb_serialize_context_t::
            extend<OT::ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>_>
                      (param_2,param_1);
    if (lVar3 != 0) {
      uVar7 = 0;
      if (param_5 != 0) {
        lVar3 = 0;
        puVar2 = param_1;
        do {
          puVar8 = puVar2 + 2;
          if (uVar7 < *param_4) {
            uVar9 = *(undefined4 *)(lVar3 + *(longlong *)(param_4 + 2));
          }
          else {
            uVar9 = 0;
          }
          if (uVar7 < *param_3) {
            uVar10 = *(undefined2 *)(puVar8 + (-2 - (longlong)param_1) + *(longlong *)(param_3 + 2))
            ;
          }
          else {
            uVar10 = 0;
          }
          puVar1 = *(undefined2 **)(param_2 + 0x18);
          local_res8 = (short)param_1;
          local_res8 = (short)puVar1 - local_res8;
          puVar2[3] = (char)local_res8;
          *puVar8 = (char)((ushort)local_res8 >> 8);
          lVar4 = hb_serialize_context_t::extend_min<OT::CoverageFormat1>(param_2,puVar1);
          uVar5 = 0;
          if (lVar4 == 0) {
LAB_143c95cec:
            return uVar5 & 0xffffffffffffff00;
          }
          *puVar1 = uVar10;
          uVar5 = HeadlessArrayOf<OT::GlyphID,OT::IntType<unsigned_short,2>_>::serialize
                            (puVar1 + 1,param_2,param_6,uVar9);
          if ((char)uVar5 == '\0') goto LAB_143c95cec;
          uVar7 = uVar7 + 1;
          lVar3 = lVar3 + 4;
          puVar2 = puVar8;
        } while (uVar7 < param_5);
      }
      uVar7 = *param_3;
      uVar6 = param_5;
      if (uVar7 < param_5) {
        uVar6 = uVar7;
      }
      *param_3 = uVar7 - uVar6;
      *(ulonglong *)(param_3 + 2) = *(longlong *)(param_3 + 2) + (ulonglong)uVar6 * 2;
      uVar7 = *param_4;
      if (uVar7 < param_5) {
        param_5 = uVar7;
      }
      *param_4 = uVar7 - param_5;
      *(ulonglong *)(param_4 + 2) = *(longlong *)(param_4 + 2) + (ulonglong)param_5 * 4;
      return CONCAT71((int7)((ulonglong)param_5 * 4 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 143c95d60 serialize body=481 status=ok
// SIG undefined serialize(void)

undefined8
OT::SingleSubst::serialize
          (undefined1 *param_1,undefined8 param_2,uint *param_3,uint *param_4,uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  undefined8 uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  
  lVar5 = hb_serialize_context_t::
          extend_min<OT::ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>_>
                    (param_2,param_1);
  if (lVar5 == 0) {
    return 0;
  }
  sVar7 = 2;
  if (param_5 != 0) {
    uVar8 = 1;
    if (*param_4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(ushort **)(param_4 + 2);
    }
    if (*param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = **(ushort **)(param_3 + 2);
    }
    uVar9 = uVar8;
    if (1 < param_5) {
      do {
        if (uVar9 < *param_4) {
          uVar3 = *(ushort *)(*(longlong *)(param_4 + 2) + (ulonglong)uVar9 * 2);
        }
        else {
          uVar3 = 0;
        }
        if (uVar9 < *param_3) {
          uVar4 = *(ushort *)(*(longlong *)(param_3 + 2) + (ulonglong)uVar9 * 2);
        }
        else {
          uVar4 = 0;
        }
        if ((uint)(ushort)(uVar1 * 0x100 + (uVar1 >> 8)) -
            (uint)(ushort)(uVar2 * 0x100 + (uVar2 >> 8)) !=
            (uint)(ushort)(uVar3 * 0x100 + (uVar3 >> 8)) -
            (uint)(ushort)(uVar4 * 0x100 + (uVar4 >> 8))) {
          uVar8 = 2;
          break;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_5);
    }
    sVar7 = (short)uVar8;
  }
  *param_1 = 0;
  param_1[1] = (char)sVar7;
  if (sVar7 == 1) {
    uVar6 = SingleSubstFormat1::serialize(param_1,param_2,param_3,param_5);
    return uVar6;
  }
  if (sVar7 == 2) {
    uVar6 = SingleSubstFormat2::serialize(param_1,param_2,param_3,param_4);
    return uVar6;
  }
  return 0;
}



// FUNCTION 143c95f50 serialize body=133 status=ok
// SIG undefined serialize(void)

ulonglong OT::SingleSubstFormat1::serialize
                    (longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  short sVar5;
  
  lVar3 = hb_serialize_context_t::extend_min<OT::SingleSubstFormat1>(param_2,param_1);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    sVar5 = (short)uVar1 - (short)param_1;
    *(char *)(param_1 + 3) = (char)sVar5;
    *(char *)(param_1 + 2) = (char)((ushort)sVar5 >> 8);
    uVar4 = Coverage::serialize(uVar1,param_2,param_3,param_4);
    if ((char)uVar4 != '\0') {
      cVar2 = (char)((uint)param_5 >> 8);
      *(char *)(param_1 + 4) = cVar2;
      *(char *)(param_1 + 5) = (char)param_5;
      return CONCAT71((uint7)(byte)(cVar2 >> 7),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 143c95fe0 serialize body=260 status=ok
// SIG undefined serialize(void)

bool OT::SingleSubstFormat2::serialize
               (longlong param_1,longlong param_2,undefined8 param_3,uint *param_4,uint param_5)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 uVar5;
  uint uVar6;
  short sVar7;
  
  lVar4 = hb_serialize_context_t::extend_min<OT::SingleSubstFormat1>(param_2,param_1);
  if (lVar4 == 0) {
    return false;
  }
  lVar4 = hb_serialize_context_t::
          extend_min<OT::ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>_>
                    (param_2,param_1 + 4);
  if (lVar4 != 0) {
    *(char *)(param_1 + 5) = (char)param_5;
    *(char *)(param_1 + 4) = (char)(param_5 >> 8);
    lVar4 = hb_serialize_context_t::
            extend<OT::ArrayOf<OT::OffsetTo<OT::Ligature,OT::IntType<unsigned_short,2>_>,OT::IntType<unsigned_short,2>_>_>
                      (param_2,param_1 + 4);
    if (lVar4 != 0) {
      uVar3 = 0;
      if (param_5 != 0) {
        lVar4 = 0;
        do {
          if (uVar3 < *param_4) {
            uVar5 = *(undefined2 *)(lVar4 + *(longlong *)(param_4 + 2));
          }
          else {
            uVar5 = 0;
          }
          *(undefined2 *)(param_1 + 6 + lVar4) = uVar5;
          uVar3 = uVar3 + 1;
          lVar4 = lVar4 + 2;
        } while (uVar3 < param_5);
      }
      uVar3 = *param_4;
      uVar6 = param_5;
      if (uVar3 < param_5) {
        uVar6 = uVar3;
      }
      *param_4 = uVar3 - uVar6;
      *(ulonglong *)(param_4 + 2) = *(longlong *)(param_4 + 2) + (ulonglong)uVar6 * 2;
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      sVar7 = (short)uVar1 - (short)param_1;
      *(char *)(param_1 + 3) = (char)sVar7;
      *(char *)(param_1 + 2) = (char)((ushort)sVar7 >> 8);
      cVar2 = Coverage::serialize(uVar1,param_2,param_3,param_5);
      return cVar2 != '\0';
    }
  }
  return false;
}



// FUNCTION 143c960f0 setup_masks_arabic_plan body=116 status=ok
// SIG undefined setup_masks_arabic_plan(void)

void setup_masks_arabic_plan(longlong param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  
  arabic_joining(param_2);
  if (param_3 == 0x4d6f6e67) {
    mongolian_variation_selectors(param_2);
  }
  if (*(uint *)(param_2 + 0xb8) != 0) {
    uVar2 = (ulonglong)*(uint *)(param_2 + 0xb8);
    puVar1 = (uint *)(*(longlong *)(param_2 + 200) + 4);
    do {
      *puVar1 = *puVar1 | *(uint *)(param_1 + (ulonglong)*(byte *)((longlong)puVar1 + 0xe) * 4);
      uVar2 = uVar2 - 1;
      puVar1 = puVar1 + 5;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 143c96170 collect_features_hangul body=75 status=ok
// SIG undefined collect_features_hangul(void)

void collect_features_hangul(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  
  lVar2 = 3;
  pcVar1 = "omjlomjvomjthebrew";
  do {
    hb_ot_map_builder_t::add_feature(param_1 + 0x30,*(undefined4 *)pcVar1,1);
    pcVar1 = pcVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 143c961e0 data_create_hangul body=171 status=ok
// SIG undefined data_create_hangul(void)

undefined4 * data_create_hangul(longlong param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 local_res10 [2];
  
  puVar2 = (undefined4 *)HarfBuzzCalloc(1);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  lVar5 = 4;
  puVar4 = puVar2;
  do {
    local_res10[0] =
         *(undefined4 *)(((longlong)&DAT_145d3b3c0 - (longlong)puVar2) + (longlong)puVar4);
    pvVar3 = bsearch(local_res10,*(void **)(param_1 + 0x40),(ulonglong)*(uint *)(param_1 + 0x38),
                     0x24,(_PtFuncCompare *)&LAB_143c7bc50);
    uVar1 = 0;
    if (pvVar3 != (void *)0x0) {
      uVar1 = *(undefined4 *)((longlong)pvVar3 + 0x1c);
    }
    *puVar4 = uVar1;
    puVar4 = puVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return puVar2;
}



// FUNCTION 143c96290 preprocess_text_hangul body=1584 status=ok
// SIG undefined preprocess_text_hangul(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void preprocess_text_hangul(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  uint local_88;
  char local_84;
  int local_80;
  uint local_7c;
  int local_78;
  int local_74;
  uint local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  int local_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  hb_buffer_t::clear_output(param_2);
  uVar8 = *(uint *)(param_2 + 0xb8);
  uVar13 = 0;
  *(undefined4 *)(param_2 + 0xb4) = 0;
  uVar11 = 0;
  local_88 = uVar8;
  if (uVar8 != 0) {
    do {
      if (*(char *)(param_2 + 0xb0) != '\0') break;
      uVar6 = *(uint *)(param_2 + 0xb4);
      lVar3 = *(longlong *)(param_2 + 200);
      iVar7 = *(int *)(lVar3 + (ulonglong)uVar6 * 0x14);
      if (iVar7 - 0x302eU < 2) {
        uVar6 = (uint)uVar11;
        uVar12 = (uint)uVar13;
        if ((uVar12 < uVar6) && (uVar6 == *(uint *)(param_2 + 0xbc))) {
          hb_buffer_t::next_glyph(param_2);
          cVar4 = is_zero_width_char(param_3,iVar7);
          if (cVar4 == '\0') {
            hb_buffer_t::merge_out_clusters(param_2,uVar13,uVar6 + 1);
            lVar3 = *(longlong *)(param_2 + 0xd0);
            puVar1 = (undefined4 *)(lVar3 + uVar11 * 0x14);
            local_68 = *puVar1;
            uStack_64 = puVar1[1];
            uStack_60 = puVar1[2];
            uStack_5c = puVar1[3];
            uVar2 = *(undefined4 *)(lVar3 + 0x10 + uVar11 * 0x14);
            puVar1 = (undefined4 *)(lVar3 + uVar13 * 0x14);
            memmove((void *)(lVar3 + (ulonglong)(uVar12 + 1) * 0x14),puVar1,
                    (ulonglong)(uVar6 - uVar12) * 0x14);
            *puVar1 = local_68;
            puVar1[1] = uStack_64;
            puVar1[2] = uStack_60;
            puVar1[3] = uStack_5c;
            puVar1[4] = uVar2;
            uVar11 = (ulonglong)*(uint *)(param_2 + 0xbc);
            uVar13 = (ulonglong)*(uint *)(param_2 + 0xbc);
            uVar8 = local_88;
          }
          else {
LAB_143c96447:
            uVar11 = (ulonglong)*(uint *)(param_2 + 0xbc);
            uVar13 = (ulonglong)*(uint *)(param_2 + 0xbc);
          }
        }
        else {
          local_80 = 0;
          local_98 = *(undefined8 *)(*(longlong *)(param_3 + 0x98) + 0x88);
          iVar5 = (**(code **)(*(longlong *)(param_3 + 0x98) + 0x168))
                            (param_3,*(undefined8 *)(param_3 + 0xa0),0x25cc,&local_80);
          if (iVar5 == 0) {
            hb_buffer_t::next_glyph(param_2);
            goto LAB_143c96447;
          }
          cVar4 = is_zero_width_char(param_3,iVar7);
          if (cVar4 == '\0') {
            local_74 = 0x25cc;
            local_78 = iVar7;
          }
          else {
            local_78 = 0x25cc;
            local_74 = iVar7;
          }
          hb_buffer_t::replace_glyphs(param_2,1,2,&local_78);
          uVar11 = (ulonglong)*(uint *)(param_2 + 0xbc);
          uVar13 = (ulonglong)*(uint *)(param_2 + 0xbc);
        }
      }
      else {
        uVar10 = *(uint *)(param_2 + 0xbc);
        uVar13 = (ulonglong)uVar10;
        uVar12 = iVar7 - 0x1100;
        if (((uVar12 < 0x60) || (iVar7 - 0xa960U < 0x1d)) && (uVar6 + 1 < uVar8)) {
          iVar7 = *(int *)(lVar3 + (ulonglong)(uVar6 + 1) * 0x14);
          if ((iVar7 - 0x1160U < 0x48) || (iVar7 - 0xd7b0U < 0x17)) {
            iVar5 = 0;
            iVar9 = 0;
            if (uVar6 + 2 < uVar8) {
              iVar5 = *(int *)(lVar3 + (ulonglong)(uVar6 + 2) * 0x14);
              if ((iVar5 - 0x11a8U < 0x58) || (iVar5 - 0xd7cbU < 0x31)) {
                iVar9 = iVar5 + -0x11a7;
              }
              else {
                iVar5 = 0;
                iVar9 = 0;
              }
            }
            if (((uVar12 < 0x13) && (iVar7 - 0x1161U < 0x15)) &&
               ((iVar5 == 0 || (iVar5 - 0x11a8U < 0x1b)))) {
              local_80 = (uVar12 * 0x15 + -0x1161 + iVar7) * 0x1c + 0xac00 + iVar9;
              cVar4 = hb_font_t::has_glyph(param_3);
              if (cVar4 != '\0') {
                hb_buffer_t::replace_glyphs(param_2,(iVar5 != 0) + '\x02',1,&local_80);
                if (*(char *)(param_2 + 0xb0) != '\0') {
                  return;
                }
                uVar11 = (ulonglong)(uVar10 + 1);
                goto LAB_143c966d9;
              }
            }
            *(undefined1 *)
             (*(longlong *)(param_2 + 200) + 0x12 + (ulonglong)*(uint *)(param_2 + 0xb4) * 0x14) = 1
            ;
            hb_buffer_t::next_glyph(param_2);
            *(undefined1 *)
             (*(longlong *)(param_2 + 200) + 0x12 + (ulonglong)*(uint *)(param_2 + 0xb4) * 0x14) = 2
            ;
            hb_buffer_t::next_glyph(param_2);
            if (iVar5 == 0) {
              uVar10 = uVar10 + 2;
            }
            else {
              *(undefined1 *)
               (*(longlong *)(param_2 + 200) + 0x12 + (ulonglong)*(uint *)(param_2 + 0xb4) * 0x14) =
                   3;
              hb_buffer_t::next_glyph(param_2);
              uVar10 = uVar10 + 3;
            }
            uVar11 = (ulonglong)uVar10;
            if (*(int *)(param_2 + 0x7c) == 0) {
              hb_buffer_t::merge_out_clusters(param_2,uVar13,uVar11);
            }
            goto LAB_143c966d9;
          }
        }
        else {
          uVar6 = iVar7 - 0xac00;
          uVar8 = local_88;
          if (uVar6 < 0x2ba4) {
            local_80 = 0;
            local_98 = *(undefined8 *)(*(longlong *)(param_3 + 0x98) + 0x88);
            iVar5 = (**(code **)(*(longlong *)(param_3 + 0x98) + 0x168))
                              (param_3,*(undefined8 *)(param_3 + 0xa0),iVar7,&local_80);
            bVar14 = iVar5 != 0;
            local_7c = uVar6 / 0x24c;
            local_70 = (uVar6 % 0x24c) / 0x1c;
            uVar8 = (uVar6 % 0x24c) % 0x1c;
            local_84 = bVar14;
            if (((uVar8 == 0) && (uVar6 = *(int *)(param_2 + 0xb4) + 1, uVar6 < local_88)) &&
               (iVar5 = *(int *)(*(longlong *)(param_2 + 200) + (ulonglong)uVar6 * 0x14),
               iVar5 - 0x11a8U < 0x1b)) {
              local_80 = iVar5 + -0x11a7 + iVar7;
              cVar4 = hb_font_t::has_glyph(param_3);
              if (cVar4 != '\0') {
                hb_buffer_t::replace_glyphs(param_2,2,1,&local_80);
                if (*(char *)(param_2 + 0xb0) != '\0') {
                  return;
                }
                uVar11 = (ulonglong)(uVar10 + 1);
                uVar8 = local_88;
                goto LAB_143c966d9;
              }
            }
            if ((!bVar14) ||
               (((uVar8 == 0 && (uVar6 = *(int *)(param_2 + 0xb4) + 1, uVar6 < local_88)) &&
                ((iVar7 = *(int *)(*(longlong *)(param_2 + 200) + (ulonglong)uVar6 * 0x14),
                 iVar7 - 0x11a8U < 0x58 || (iVar7 - 0xd7cbU < 0x31)))))) {
              local_54 = local_70 + 0x1161;
              local_58 = local_7c + 0x1100;
              local_50 = uVar8 + 0x11a7;
              local_7c = 0;
              local_98 = *(undefined8 *)(*(longlong *)(param_3 + 0x98) + 0x88);
              iVar7 = (**(code **)(*(longlong *)(param_3 + 0x98) + 0x168))
                                (param_3,*(undefined8 *)(param_3 + 0xa0),local_58,&local_7c);
              if (iVar7 != 0) {
                local_7c = 0;
                local_98 = *(undefined8 *)(*(longlong *)(param_3 + 0x98) + 0x88);
                iVar7 = (**(code **)(*(longlong *)(param_3 + 0x98) + 0x168))
                                  (param_3,*(undefined8 *)(param_3 + 0xa0),local_54,&local_7c);
                if ((iVar7 != 0) &&
                   ((uVar8 == 0 || (cVar4 = hb_font_t::has_glyph(param_3,local_50), cVar4 != '\0')))
                   ) {
                  iVar7 = (uVar8 != 0) + 2;
                  hb_buffer_t::replace_glyphs(param_2,1,iVar7,&local_58);
                  if (*(char *)(param_2 + 0xb0) != '\0') {
                    return;
                  }
                  lVar3 = *(longlong *)(param_2 + 0xd0);
                  if ((local_84 != '\0') && (uVar8 == 0)) {
                    hb_buffer_t::next_glyph(param_2);
                    iVar7 = 3;
                  }
                  *(undefined1 *)(lVar3 + 0x12 + uVar13 * 0x14) = 1;
                  uVar6 = iVar7 + uVar10;
                  uVar11 = (ulonglong)uVar6;
                  *(undefined1 *)(lVar3 + 0x12 + (ulonglong)(uVar10 + 1) * 0x14) = 2;
                  if (uVar10 + 2 < uVar6) {
                    *(undefined1 *)(lVar3 + 0x12 + (ulonglong)(uVar10 + 2) * 0x14) = 3;
                  }
                  uVar8 = local_88;
                  if (*(int *)(param_2 + 0x7c) == 0) {
                    hb_buffer_t::merge_out_clusters(param_2,uVar13,uVar6);
                    uVar8 = local_88;
                  }
                  goto LAB_143c966d9;
                }
              }
            }
            uVar8 = local_88;
            if (bVar14) {
              uVar11 = (ulonglong)(uVar10 + 1);
              hb_buffer_t::next_glyph(param_2);
              uVar8 = local_88;
              goto LAB_143c966d9;
            }
          }
        }
        hb_buffer_t::next_glyph(param_2);
      }
LAB_143c966d9:
    } while (*(uint *)(param_2 + 0xb4) < uVar8);
  }
  hb_buffer_t::swap_buffers(param_2);
  return;
}



// FUNCTION 143c96910 has_glyph body=63 status=ok
// SIG undefined has_glyph(void)

bool hb_font_t::has_glyph(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_res8 [8];
  
  local_res8[0] = 0;
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x168))
                    (param_1,*(undefined8 *)(param_1 + 0xa0),param_2,local_res8,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x88));
  return iVar1 != 0;
}



// FUNCTION 143c96950 is_zero_width_char body=58 status=ok
// SIG undefined is_zero_width_char(void)

uint is_zero_width_char(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_res18 [4];
  
  iVar1 = hb_font_get_glyph(param_1,param_2,0,local_res18);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = hb_font_get_glyph_h_advance(param_1,local_res18[0]);
    if (uVar2 == 0) {
      return 1;
    }
  }
  return uVar2 & 0xffffff00;
}



// FUNCTION 143c96990 FUN_143c96990 body=428 status=ok
// SIG undefined FUN_143c96990(void)

bool FUN_143c96990(longlong *param_1,int param_2,int param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  
  lVar1 = param_1[3];
  iVar2 = 0;
  *param_4 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar2 = (**(code **)(lVar1 + 0xa8))(lVar1);
  }
  if (iVar2 != 0) {
    return true;
  }
  if ((*(byte *)(*param_1 + 0x444) & 4) != 0) {
    return false;
  }
  bVar3 = false;
  switch(param_3) {
  case 0x5b4:
    if (param_2 != 0x5d9) {
      return false;
    }
    *param_4 = 0xfb1d;
    break;
  default:
    goto switchD_143c96a15_caseD_5b5;
  case 0x5b7:
    if (param_2 == 0x5f2) {
      *param_4 = 0xfb1f;
    }
    else {
      if (param_2 != 0x5d0) {
        return false;
      }
      *param_4 = 0xfb2e;
    }
    break;
  case 0x5b8:
    if (param_2 != 0x5d0) {
      return false;
    }
    *param_4 = 0xfb2f;
    break;
  case 0x5b9:
    if (param_2 != 0x5d5) {
      return false;
    }
    *param_4 = 0xfb4b;
    break;
  case 0x5bc:
    if (param_2 - 0x5d0U < 0x1b) {
      iVar2 = *(int *)(&DAT_145d3b430 + (ulonglong)(param_2 - 0x5d0) * 4);
      *param_4 = iVar2;
      return iVar2 != 0;
    }
    if (param_2 == 0xfb2a) {
LAB_143c96afb:
      *param_4 = 0xfb2c;
    }
    else {
      bVar3 = param_2 == 0xfb2b;
LAB_143c96b19:
      if (!bVar3) {
        return false;
      }
      *param_4 = 0xfb2d;
    }
    break;
  case 0x5bf:
    if (param_2 == 0x5d1) {
      *param_4 = 0xfb4c;
    }
    else if (param_2 == 0x5db) {
      *param_4 = 0xfb4d;
    }
    else {
      if (param_2 != 0x5e4) {
        return false;
      }
      *param_4 = 0xfb4e;
    }
    break;
  case 0x5c1:
    if (param_2 != 0x5e9) {
      if (param_2 != 0xfb49) {
        return false;
      }
      goto LAB_143c96afb;
    }
    *param_4 = 0xfb2a;
    break;
  case 0x5c2:
    if (param_2 != 0x5e9) {
      bVar3 = param_2 == 0xfb49;
      goto LAB_143c96b19;
    }
    *param_4 = 0xfb2b;
  }
  bVar3 = true;
switchD_143c96a15_caseD_5b5:
  return bVar3;
}



// FUNCTION 143c96b80 collect_features_myanmar body=238 status=ok
// SIG undefined collect_features_myanmar(void)

void collect_features_myanmar(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  
  param_1 = param_1 + 0x30;
  hb_ot_map_builder_t::add_pause(param_1,0,&LAB_143c97b50);
  hb_ot_map_builder_t::add_feature(param_1,0x6c6f636c,1);
  hb_ot_map_builder_t::add_feature(param_1,0x63636d70,1);
  hb_ot_map_builder_t::add_pause(param_1,0,initial_reordering);
  pcVar1 = "fhprferpfwlbftspserpsvbaswlbstsptsidmvbamwlb";
  lVar2 = 4;
  do {
    hb_ot_map_builder_t::add_feature(param_1,*(undefined4 *)pcVar1,1);
    hb_ot_map_builder_t::add_pause(param_1,0,0);
    pcVar1 = pcVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  hb_ot_map_builder_t::add_pause(param_1,0,&LAB_143c96f60);
  pcVar1 = "serpsvbaswlbstsptsidmvbamwlb";
  lVar2 = 7;
  do {
    hb_ot_map_builder_t::add_feature(param_1,*(undefined4 *)pcVar1,1);
    pcVar1 = pcVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 143c96c90 FUN_143c96c90 body=497 status=ok
// SIG undefined FUN_143c96c90(void)

void FUN_143c96c90(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined1 uVar3;
  ushort uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  
  if (*(uint *)(param_2 + 0xb8) != 0) {
    uVar5 = (ulonglong)*(uint *)(param_2 + 0xb8);
    puVar6 = (undefined1 *)(*(longlong *)(param_2 + 200) + 0x13);
    do {
      uVar1 = *(uint *)(puVar6 + -0x13);
      uVar4 = FUN_143c9cfa0(uVar1);
      uVar2 = uVar4 >> 8;
      uVar7 = (undefined1)(uVar4 >> 8);
      uVar4 = uVar4 & 0x7f;
      if (uVar1 - 0xfe00 < 0x10) {
        uVar4 = 0x1e;
      }
      uVar3 = (undefined1)uVar4;
      if (uVar1 < 0x1005) {
        if (uVar1 != 0x1004) {
          if (((uVar1 != 0x2d) && (uVar1 != 0xa0)) && (uVar1 != 0xd7))
          goto switchD_143c96d95_caseD_101c;
          goto LAB_143c96e4a;
        }
switchD_143c96d95_caseD_101b:
        uVar3 = 0x10;
      }
      else {
        if (uVar1 < 0x2016) {
          if (uVar1 < 0x2012) {
            switch(uVar1) {
            case 0x101b:
            case 0x105a:
              goto switchD_143c96d95_caseD_101b;
            default:
              goto switchD_143c96d95_caseD_101c;
            case 0x1032:
            case 0x1036:
              uVar3 = 10;
              break;
            case 0x1038:
            case 0x1087:
            case 0x1088:
            case 0x1089:
            case 0x108a:
            case 0x108b:
            case 0x108c:
            case 0x108d:
            case 0x108f:
            case 0x109a:
            case 0x109b:
            case 0x109c:
              uVar3 = 8;
              break;
            case 0x1039:
              uVar3 = 4;
              break;
            case 0x103a:
              uVar3 = 0x12;
              break;
            case 0x103b:
            case 0x105e:
            case 0x105f:
              uVar3 = 0x18;
              break;
            case 0x103c:
              uVar3 = 0x16;
              break;
            case 0x103d:
            case 0x1082:
              uVar3 = 0x17;
              break;
            case 0x103e:
            case 0x1060:
              uVar3 = 0x15;
              break;
            case 0x1040:
            case 0x1041:
            case 0x1042:
            case 0x1043:
            case 0x1044:
            case 0x1045:
            case 0x1046:
            case 0x1047:
            case 0x1048:
            case 0x1049:
            case 0x1090:
            case 0x1091:
            case 0x1092:
            case 0x1093:
            case 0x1094:
            case 0x1095:
            case 0x1096:
            case 0x1097:
            case 0x1098:
            case 0x1099:
              uVar3 = 0x13;
              break;
            case 0x104a:
            case 0x104b:
              uVar3 = 0x1f;
              break;
            case 0x104e:
              uVar3 = 1;
              break;
            case 0x1063:
            case 0x1064:
            case 0x1069:
            case 0x106a:
            case 0x106b:
            case 0x106c:
            case 0x106d:
switchD_143c96d95_caseD_1063:
              uVar3 = 0x19;
            }
            goto LAB_143c96e4f;
          }
        }
        else if ((uVar1 != 0x2022) && (uVar1 != 0x25cc)) {
          if (0x25fa < uVar1) {
            if (uVar1 < 0x25ff) goto LAB_143c96e4a;
            if (uVar1 == 0xaa7b) goto switchD_143c96d95_caseD_1063;
          }
switchD_143c96d95_caseD_101c:
          if (uVar4 == 7) {
            if (uVar2 == 3) {
              uVar3 = 0x1c;
              uVar7 = 2;
            }
            else if (uVar2 == 6) {
              uVar3 = 0x1a;
            }
            else if (uVar2 == 8) {
              uVar3 = 0x1b;
            }
            else if (uVar2 == 0xb) {
              uVar3 = 0x1d;
            }
          }
          goto LAB_143c96e4f;
        }
LAB_143c96e4a:
        uVar3 = 0xb;
      }
LAB_143c96e4f:
      puVar6[-1] = uVar3;
      *puVar6 = uVar7;
      puVar6 = puVar6 + 0x14;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 143c96f40 compare_myanmar_order body=27 status=ok
// SIG undefined compare_myanmar_order(void)

ulonglong compare_myanmar_order(longlong param_1,longlong param_2)

{
  if (*(byte *)(param_1 + 0x13) < *(byte *)(param_2 + 0x13)) {
    return 0xffffffff;
  }
  return (ulonglong)(*(byte *)(param_1 + 0x13) != *(byte *)(param_2 + 0x13));
}



// FUNCTION 143c96f90 FUN_143c96f90 body=840 status=ok
// SIG undefined FUN_143c96f90(void)

void FUN_143c96f90(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  
  uVar2 = *(uint *)(param_1 + 0xb8);
  lVar3 = *(longlong *)(param_1 + 200);
  iVar14 = 0;
  uVar11 = 0;
  uVar8 = 0;
  iVar13 = 1;
  if (uVar2 != 0) goto LAB_143c97264;
LAB_143c96ff0:
  if ((short)(&DAT_145d3bb70)[iVar14] < 1) {
    return;
  }
  iVar4 = (short)(&DAT_145d3bb70)[iVar14] + -1;
  uVar9 = uVar8;
  do {
    iVar14 = (int)(char)(&DAT_145d3bb00)[iVar4];
    uVar8 = uVar9;
    uVar10 = uVar11;
    if ((&DAT_145d3bb38)[iVar4] == '\0') goto switchD_143c97042_default;
    uVar7 = (uint)uVar9;
    cVar12 = (char)iVar13;
    switch((&DAT_145d3bb38)[iVar4]) {
    case 3:
      uVar11 = uVar11 + 1;
      uVar8 = (ulonglong)uVar11;
      if (uVar7 < uVar11) {
        pbVar6 = (byte *)(lVar3 + 0xf + uVar9 * 0x14);
        uVar9 = (ulonglong)(uVar11 - uVar7);
        do {
          *pbVar6 = cVar12 << 4 | 3;
          pbVar6 = pbVar6 + 0x14;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      break;
    case 4:
      uVar11 = uVar11 + 1;
      uVar8 = (ulonglong)uVar11;
      if (uVar7 < uVar11) {
        pbVar6 = (byte *)(lVar3 + 0xf + uVar9 * 0x14);
        uVar9 = (ulonglong)(uVar11 - uVar7);
        do {
          *pbVar6 = cVar12 << 4 | 2;
          pbVar6 = pbVar6 + 0x14;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      break;
    case 5:
      uVar11 = uVar11 + 1;
      uVar8 = (ulonglong)uVar11;
      if (uVar7 < uVar11) {
        pbVar6 = (byte *)(lVar3 + 0xf + uVar9 * 0x14);
        uVar9 = (ulonglong)(uVar11 - uVar7);
        do {
          *pbVar6 = cVar12 << 4 | 3;
          pbVar6 = pbVar6 + 0x14;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      break;
    case 6:
      uVar8 = (ulonglong)uVar11;
      uVar10 = uVar11 - 1;
      if (uVar7 < uVar11) {
        pcVar5 = (char *)(uVar9 * 0x14 + 0xf + lVar3);
        uVar9 = (ulonglong)(uVar11 - uVar7);
        do {
          *pcVar5 = cVar12 << 4;
          pcVar5 = pcVar5 + 0x14;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      break;
    case 7:
      uVar11 = uVar11 + 1;
      uVar8 = (ulonglong)uVar11;
      if (uVar7 < uVar11) {
        pcVar5 = (char *)(lVar3 + 0xf + uVar9 * 0x14);
        uVar9 = (ulonglong)(uVar11 - uVar7);
        do {
          *pcVar5 = cVar12 << 4;
          pcVar5 = pcVar5 + 0x14;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      break;
    case 8:
      uVar8 = (ulonglong)uVar11;
      uVar10 = uVar11 - 1;
      if (uVar7 < uVar11) {
        pbVar6 = (byte *)(lVar3 + 0xf + uVar9 * 0x14);
        uVar9 = (ulonglong)(uVar11 - uVar7);
        do {
          *pbVar6 = cVar12 << 4 | 2;
          pbVar6 = pbVar6 + 0x14;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      break;
    case 9:
      uVar10 = uVar11 - 1;
      uVar8 = (ulonglong)uVar11;
      if (uVar7 < uVar11) {
        pbVar6 = (byte *)(lVar3 + 0xf + uVar9 * 0x14);
        uVar9 = (ulonglong)(uVar11 - uVar7);
        do {
          *pbVar6 = cVar12 << 4 | 3;
          pbVar6 = pbVar6 + 0x14;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      iVar13 = iVar13 + 1;
      if (iVar13 == 0x10) {
        iVar13 = 1;
      }
      goto switchD_143c97042_default;
    case 10:
      uVar11 = uVar11 + 1;
      uVar8 = (ulonglong)uVar11;
      if (uVar7 < uVar11) {
        pbVar6 = (byte *)(lVar3 + 0xf + uVar9 * 0x14);
        uVar9 = (ulonglong)(uVar11 - uVar7);
        do {
          *pbVar6 = cVar12 << 4 | 1;
          pbVar6 = pbVar6 + 0x14;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      break;
    default:
      goto switchD_143c97042_default;
    }
    iVar13 = iVar13 + 1;
    if (iVar13 == 0x10) {
      iVar13 = 1;
    }
switchD_143c97042_default:
    uVar11 = uVar10 + 1;
    if (uVar11 == uVar2) goto LAB_143c96ff0;
LAB_143c97264:
    iVar4 = (int)(char)(&DAT_145d3ba70)[iVar14];
    if ('\0' < (char)(&DAT_145d3ba70)[iVar14]) {
      bVar1 = *(byte *)(lVar3 + 0x12 + (ulonglong)uVar11 * 0x14);
      if (((byte)(&DAT_145d3b590)[iVar14 * 2] <= bVar1) &&
         (bVar1 <= (byte)(&DAT_145d3b591)[iVar14 * 2])) {
        iVar4 = (uint)bVar1 - (uint)(byte)(&DAT_145d3b590)[iVar14 * 2];
      }
    }
    iVar4 = (int)(char)(&DAT_145d3b5f0)[(longlong)iVar4 + (longlong)(short)(&DAT_145d3baa0)[iVar14]]
    ;
    uVar9 = uVar8;
  } while( true );
}



// FUNCTION 143c97300 initial_reordering body=200 status=ok
// SIG undefined initial_reordering(void)

void initial_reordering(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar3;
  
  insert_dotted_circles();
  uVar1 = *(uint *)(param_3 + 0xb8);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      if (uVar1 <= uVar2) break;
    } while (*(char *)(*(longlong *)(param_3 + 200) + 0xf) ==
             *(char *)(*(longlong *)(param_3 + 200) + 0xf + uVar3 * 0x14));
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        uVar4 = uVar3;
        initial_reordering_syllable
                  (param_1,*(undefined8 *)(param_2 + 0x80),param_3,uVar5,(uint)uVar4);
        uVar3 = uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          if (*(uint *)(param_3 + 0xb8) <= uVar2) break;
        } while (*(char *)(*(longlong *)(param_3 + 200) + 0xf + uVar4 * 0x14) ==
                 *(char *)(*(longlong *)(param_3 + 200) + 0xf + uVar3 * 0x14));
        uVar5 = uVar4;
      } while ((uint)uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 143c973d0 initial_reordering_consonant_syllable body=460 status=ok
// SIG undefined initial_reordering_consonant_syllable(void)

void initial_reordering_consonant_syllable(longlong param_1,uint param_2,uint param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  
  lVar2 = *(longlong *)(param_1 + 200);
  bVar8 = 0;
  uVar4 = (ulonglong)param_2;
  if ((((param_2 + 3 <= param_3) && (*(char *)(lVar2 + 0x12 + (ulonglong)param_2 * 0x14) == '\x10'))
      && (*(char *)(lVar2 + 0x12 + (ulonglong)(param_2 + 1) * 0x14) == '\x12')) &&
     (*(char *)(lVar2 + 0x12 + (ulonglong)(param_2 + 2) * 0x14) == '\x04')) {
    uVar4 = (ulonglong)(param_2 + 3);
    bVar8 = 1;
  }
  uVar9 = param_2;
  if ((uint)uVar4 < param_3) {
    pbVar7 = (byte *)(lVar2 + 0x12 + uVar4 * 0x14);
    do {
      if (((pbVar7[-6] >> 5 & 1) == 0) &&
         (uVar9 = (uint)uVar4, (1 << (*pbVar7 & 0x1f) & 0x80031806U) != 0)) break;
      uVar10 = (uint)uVar4 + 1;
      uVar4 = (ulonglong)uVar10;
      pbVar7 = pbVar7 + 0x14;
      uVar9 = param_2;
    } while (uVar10 < param_3);
  }
  uVar6 = (-(uint)bVar8 & 3) + param_2;
  uVar10 = param_2;
  if (param_2 < uVar6) {
    puVar3 = (undefined1 *)((ulonglong)param_2 * 0x14 + 0x13 + lVar2);
    uVar6 = uVar6 - param_2;
    uVar4 = (ulonglong)uVar6;
    uVar10 = uVar6 + param_2;
    do {
      *puVar3 = 5;
      puVar3 = puVar3 + 0x14;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar4 = (ulonglong)uVar10;
  if (uVar10 < uVar9) {
    uVar4 = (ulonglong)(uVar10 + (uVar9 - uVar10));
    puVar3 = (undefined1 *)(lVar2 + 0x13 + (ulonglong)uVar10 * 0x14);
    uVar5 = (ulonglong)(uVar9 - uVar10);
    do {
      *puVar3 = 3;
      puVar3 = puVar3 + 0x14;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar9 = (uint)uVar4;
  if (uVar9 < param_3) {
    uVar9 = uVar9 + 1;
    *(undefined1 *)(lVar2 + 0x13 + uVar4 * 0x14) = 4;
  }
  bVar8 = 5;
  if (uVar9 < param_3) {
    pbVar7 = (byte *)(lVar2 + 0x13 + (ulonglong)uVar9 * 0x14);
    uVar4 = (ulonglong)(param_3 - uVar9);
    do {
      bVar1 = pbVar7[-1];
      if (bVar1 == 0x16) {
        *pbVar7 = 3;
      }
      else if (3 < *pbVar7) {
        if (bVar8 == 5) {
          if (bVar1 == 0x1b) {
            bVar8 = 8;
          }
        }
        else if (bVar8 == 8) {
          if (bVar1 == 10) {
            *pbVar7 = 7;
          }
          else {
            if (bVar1 != 0x1b) {
              bVar8 = 9;
              goto LAB_143c97565;
            }
            *pbVar7 = 8;
          }
          goto LAB_143c97568;
        }
LAB_143c97565:
        *pbVar7 = bVar8;
      }
LAB_143c97568:
      pbVar7 = pbVar7 + 0x14;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  hb_buffer_t::sort(param_1,param_2,param_3,compare_myanmar_order);
  return;
}



// FUNCTION 143c975a0 initial_reordering_syllable body=50 status=ok
// SIG undefined initial_reordering_syllable(void)

void initial_reordering_syllable
               (undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,
               undefined4 param_5)

{
  if ((*(byte *)(*(longlong *)(param_3 + 200) + 0xf + (ulonglong)param_4 * 0x14) & 0xd) == 0) {
    initial_reordering_consonant_syllable(param_3,param_4,param_5);
    return;
  }
  return;
}



// FUNCTION 143c975e0 insert_dotted_circles body=502 status=ok
// SIG undefined insert_dotted_circles(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void insert_dotted_circles(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  byte bVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined3 uStack_1c;
  byte bStack_19;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  bVar15 = 0;
  uVar14 = 0;
  if (*(uint *)(param_3 + 0xb8) == 0) {
    return;
  }
  pbVar13 = (byte *)(*(longlong *)(param_3 + 200) + 0xf);
  while ((*pbVar13 & 0xf) != 2) {
    uVar14 = uVar14 + 1;
    pbVar13 = pbVar13 + 0x14;
    if (*(uint *)(param_3 + 0xb8) <= uVar14) {
      return;
    }
  }
  local_48[0] = 0;
  local_58 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x88);
  iVar12 = (**(code **)(*(longlong *)(param_2 + 0x98) + 0x168))
                     (param_2,*(undefined8 *)(param_2 + 0xa0),0x25cc,local_48);
  if (iVar12 == 0) {
    return;
  }
  local_40 = 0x25cc;
  uStack_3c = 0;
  uStack_34 = 0;
  FUN_143c977e0(&local_40);
  local_40 = local_48[0];
  hb_buffer_t::clear_output(param_3);
  *(undefined4 *)(param_3 + 0xb4) = 0;
  if (*(int *)(param_3 + 0xb8) != 0) {
    uVar10 = uStack_34._4_4_;
    do {
      if (*(char *)(param_3 + 0xb0) != '\0') break;
      uVar14 = *(uint *)(param_3 + 0xb4);
      lVar6 = *(longlong *)(param_3 + 200);
      bVar4 = *(byte *)(lVar6 + 0xf + (ulonglong)uVar14 * 0x14);
      lVar1 = lVar6 + (ulonglong)uVar14 * 0x14;
      if ((bVar15 == bVar4) || ((bVar4 & 0xf) != 2)) {
        if (*(char *)(param_3 + 0xb1) != '\0') {
          if ((*(longlong *)(param_3 + 0xd0) != lVar6) || (*(uint *)(param_3 + 0xbc) != uVar14)) {
            cVar11 = hb_buffer_t::make_room_for(param_3,1,1);
            if (cVar11 == '\0') goto LAB_143c97799;
            uVar14 = *(uint *)(param_3 + 0xb4);
            lVar1 = *(longlong *)(param_3 + 200);
            uVar5 = *(uint *)(param_3 + 0xbc);
            puVar2 = (undefined4 *)(lVar1 + (ulonglong)uVar14 * 0x14);
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            lVar6 = *(longlong *)(param_3 + 0xd0);
            puVar3 = (undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14);
            *puVar3 = *puVar2;
            puVar3[1] = uVar7;
            puVar3[2] = uVar8;
            puVar3[3] = uVar9;
            *(undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar1 + 0x10 + (ulonglong)uVar14 * 0x14);
          }
          *(int *)(param_3 + 0xbc) = *(int *)(param_3 + 0xbc) + 1;
        }
        *(int *)(param_3 + 0xb4) = *(int *)(param_3 + 0xb4) + 1;
      }
      else {
        local_18 = uVar10;
        local_28 = local_40;
        uStack_20 = *(undefined4 *)(lVar1 + 8);
        uStack_24 = *(undefined4 *)(lVar1 + 4);
        _uStack_1c = CONCAT13(bVar4,(int3)uStack_34);
        hb_buffer_t::output_info(param_3,&local_28);
        bVar15 = bVar4;
      }
LAB_143c97799:
    } while (*(uint *)(param_3 + 0xb4) < *(uint *)(param_3 + 0xb8));
  }
  hb_buffer_t::swap_buffers(param_3);
  return;
}



// FUNCTION 143c977e0 FUN_143c977e0 body=686 status=ok
// SIG undefined FUN_143c977e0(void)

void FUN_143c977e0(uint *param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_1;
  uVar4 = FUN_143c9cfa0(uVar1);
  uVar2 = uVar4 >> 8;
  uVar3 = uVar4 & 0x7f;
  if (uVar1 - 0xfe00 < 0x10) {
    uVar3 = 0x1e;
  }
  uVar5 = (undefined1)uVar3;
  uVar6 = (undefined1)(uVar4 >> 8);
  if (uVar1 < 0x1005) {
    if (uVar1 == 0x1004) {
switchD_143c978c7_caseD_101b:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x10;
      return;
    }
    if (((uVar1 == 0x2d) || (uVar1 == 0xa0)) || (uVar1 == 0xd7)) goto LAB_143c97a77;
  }
  else if (uVar1 < 0x2016) {
    if (0x2011 < uVar1) {
LAB_143c97a77:
      uVar5 = 0xb;
      goto LAB_143c97a7c;
    }
    switch(uVar1) {
    case 0x101b:
    case 0x105a:
      goto switchD_143c978c7_caseD_101b;
    case 0x1032:
    case 0x1036:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x12) = 10;
      return;
    case 0x1038:
    case 0x1087:
    case 0x1088:
    case 0x1089:
    case 0x108a:
    case 0x108b:
    case 0x108c:
    case 0x108d:
    case 0x108f:
    case 0x109a:
    case 0x109b:
    case 0x109c:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x12) = 8;
      return;
    case 0x1039:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x12) = 4;
      return;
    case 0x103a:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x12;
      return;
    case 0x103b:
    case 0x105e:
    case 0x105f:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x18;
      return;
    case 0x103c:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x16;
      return;
    case 0x103d:
    case 0x1082:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x17;
      return;
    case 0x103e:
    case 0x1060:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x15;
      return;
    case 0x1040:
    case 0x1041:
    case 0x1042:
    case 0x1043:
    case 0x1044:
    case 0x1045:
    case 0x1046:
    case 0x1047:
    case 0x1048:
    case 0x1049:
    case 0x1090:
    case 0x1091:
    case 0x1092:
    case 0x1093:
    case 0x1094:
    case 0x1095:
    case 0x1096:
    case 0x1097:
    case 0x1098:
    case 0x1099:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x13;
      return;
    case 0x104a:
    case 0x104b:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x1f;
      return;
    case 0x104e:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x12) = 1;
      return;
    case 0x1063:
    case 0x1064:
    case 0x1069:
    case 0x106a:
    case 0x106b:
    case 0x106c:
    case 0x106d:
switchD_143c978c7_caseD_1063:
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x19;
      return;
    }
  }
  else {
    if ((uVar1 == 0x2022) || (uVar1 == 0x25cc)) goto LAB_143c97a77;
    if (0x25fa < uVar1) {
      if (uVar1 < 0x25ff) goto LAB_143c97a77;
      if (uVar1 == 0xaa7b) goto switchD_143c978c7_caseD_1063;
    }
  }
  if (uVar3 == 7) {
    if (uVar2 == 3) {
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x1c;
      *(undefined1 *)((longlong)param_1 + 0x13) = 2;
      return;
    }
    if (uVar2 == 6) {
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x1a;
      return;
    }
    if (uVar2 == 8) {
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x1b;
      return;
    }
    if (uVar2 == 0xb) {
      *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0x1d;
      return;
    }
  }
LAB_143c97a7c:
  *(undefined1 *)((longlong)param_1 + 0x12) = uVar5;
  *(undefined1 *)((longlong)param_1 + 0x13) = uVar6;
  return;
}



// FUNCTION 143c97b60 setup_masks_indic body=496 status=ok
// SIG undefined setup_masks_indic(void)

void setup_masks_indic(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint uVar4;
  int *piVar5;
  byte bVar6;
  ulonglong uVar7;
  int *piVar8;
  
  piVar8 = *(int **)(param_2 + 200);
  if (*(uint *)(param_2 + 0xb8) != 0) {
    uVar7 = (ulonglong)*(uint *)(param_2 + 0xb8);
    do {
      iVar1 = *piVar8;
      uVar3 = FUN_143c9cfa0(iVar1);
      uVar2 = (undefined1)(uVar3 >> 8);
      uVar3 = uVar3 & 0x7f;
      if (iVar1 - 0x953U < 2) {
        uVar3 = 8;
      }
      else if ((iVar1 - 0xa72U < 2) || (iVar1 - 0x1cf5U < 2)) {
        uVar3 = 1;
      }
      else if (iVar1 - 0x1ce2U < 7) {
        uVar3 = 10;
      }
      else if (iVar1 == 0x1ced) {
        uVar3 = 10;
      }
      else if (((iVar1 - 0xa8f2U < 6) || (iVar1 - 0x1ce9U < 4)) || (iVar1 - 0x1ceeU < 4)) {
        uVar3 = 0x12;
      }
      else if (iVar1 == 0x17dd) {
        uVar3 = 7;
        uVar2 = 6;
      }
      else if (iVar1 == 0x17c6) {
        uVar3 = 3;
      }
      else if (iVar1 - 0x2010U < 2) {
        uVar3 = 0xb;
      }
      else if (iVar1 == 0x25cc) {
        uVar3 = 0xc;
      }
      else if (iVar1 == 0xa982) {
        uVar3 = 8;
      }
      else if (iVar1 == 0xa9be) {
        uVar3 = 0x1f;
      }
      else if (iVar1 == 0xa9bd) {
        uVar3 = 7;
        uVar2 = 0xb;
      }
      bVar6 = (byte)uVar3;
      uVar4 = 1 << (bVar6 & 0x1f);
      if ((uVar4 & 0x80031806) == 0) {
        if (uVar3 == 7) {
          uVar2 = matra_position(iVar1);
        }
        else if ((uVar4 & 0x40700) != 0) {
          uVar2 = 0xe;
        }
      }
      else {
        uVar2 = 4;
        uVar4 = 0;
        piVar5 = &DAT_145d3bc30;
        do {
          if (iVar1 == *piVar5) {
            bVar6 = 0x10;
            break;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar4 < 0xc);
      }
      *(byte *)((longlong)piVar8 + 0x12) = bVar6;
      if (iVar1 == 0xb01) {
        uVar2 = 7;
      }
      *(undefined1 *)((longlong)piVar8 + 0x13) = uVar2;
      piVar8 = piVar8 + 5;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 143c97d50 collect_features_indic body=302 status=ok
// SIG undefined collect_features_indic(void)

void collect_features_indic(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  param_1 = param_1 + 0x30;
  hb_ot_map_builder_t::add_pause(param_1,0,&LAB_143c9af20);
  hb_ot_map_builder_t::add_feature(param_1,0x6c6f636c,1);
  hb_ot_map_builder_t::add_feature(param_1,0x63636d70,1);
  hb_ot_map_builder_t::add_pause(param_1,0,initial_reordering);
  puVar1 = &DAT_145d3be00;
  lVar2 = 0xc;
  do {
    hb_ot_map_builder_t::add_feature(param_1,*puVar1,1,puVar1[1] | 4);
    hb_ot_map_builder_t::add_pause(param_1,0,0);
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  hb_ot_map_builder_t::add_pause(param_1,0,final_reordering);
  puVar1 = &DAT_145d3be60;
  lVar2 = 9;
  do {
    hb_ot_map_builder_t::add_feature(param_1,*puVar1,1,puVar1[1] | 4);
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  hb_ot_map_builder_t::add_feature(param_1,0x63616c74,1);
  hb_ot_map_builder_t::add_feature(param_1,0x636c6967,1);
  hb_ot_map_builder_t::add_pause(param_1,0,&LAB_143c96f60);
  return;
}



// FUNCTION 143c97e80 decompose_indic body=777 status=ok
// SIG undefined decompose_indic(void)

bool decompose_indic(longlong *param_1,uint param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 local_res10 [2];
  
  if (param_2 < 0x17c5) {
    if (param_2 == 0x17c4) {
      *param_3 = 0x17c1;
      *param_4 = 0x17c4;
      return true;
    }
    if (param_2 < 0xf7a) {
      if (param_2 == 0xf79) {
        *param_3 = 0xfb3;
        *param_4 = 0xf81;
        return true;
      }
      if ((param_2 == 0x931) || (param_2 == 0xb94)) {
        return false;
      }
      if (param_2 == 0xf77) {
        *param_3 = 0xfb2;
        *param_4 = 0xf81;
        return true;
      }
    }
    else {
      if (param_2 == 0x17be) {
        *param_3 = 0x17c1;
        *param_4 = 0x17be;
        return true;
      }
      if (param_2 == 0x17bf) {
        *param_3 = 0x17c1;
        *param_4 = 0x17bf;
        return true;
      }
      if (param_2 == 0x17c0) {
        *param_3 = 0x17c1;
        *param_4 = 0x17c0;
        return true;
      }
    }
  }
  else if (param_2 < 0x1b3d) {
    if (param_2 == 0x1b3c) {
      *param_3 = 0x1b42;
      *param_4 = 0x1b3c;
      return true;
    }
    if (param_2 == 0x17c5) {
      *param_3 = 0x17c1;
      *param_4 = 0x17c5;
      return true;
    }
    if (param_2 == 0x1925) {
      *param_3 = 0x1920;
      *param_4 = 0x1923;
      return true;
    }
    if (param_2 == 0x1926) {
      *param_3 = 0x1920;
      *param_4 = 0x1924;
      return true;
    }
  }
  else {
    if (param_2 == 0x1112e) {
      *param_3 = 0x11127;
      *param_4 = 0x11131;
      return true;
    }
    if (param_2 == 0x1112f) {
      *param_3 = 0x11127;
      *param_4 = 0x11132;
      return true;
    }
  }
  if ((param_2 == 0xdda) || (param_2 - 0xddc < 3)) {
    lVar1 = *(longlong *)(*param_1 + 0x428);
    if (DAT_146bc8688 == 0) {
      _hb_options_init();
    }
    if ((DAT_146bc8688 & 2) != 0) {
LAB_143c98149:
      *param_3 = 0xdd9;
      *param_4 = param_2;
      return true;
    }
    lVar2 = param_1[2];
    local_res10[0] = 0;
    iVar4 = (**(code **)(*(longlong *)(lVar2 + 0x98) + 0x168))
                      (lVar2,*(undefined8 *)(lVar2 + 0xa0),param_2,local_res10,
                       *(undefined8 *)(*(longlong *)(lVar2 + 0x98) + 0x88));
    if (iVar4 != 0) {
      uVar6 = 0;
      uVar3 = *(undefined8 *)(param_1[2] + 0x80);
      if (*(int *)(lVar1 + 0x48) != 0) {
        do {
          iVar4 = hb_ot_layout_lookup_would_substitute_fast
                            (uVar3,*(undefined2 *)(*(longlong *)(lVar1 + 0x40) + uVar6 * 8),
                             local_res10,1,*(undefined1 *)(lVar1 + 0x4c));
          if (iVar4 != 0) goto LAB_143c98149;
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(lVar1 + 0x48));
      }
    }
  }
  lVar1 = param_1[3];
  *param_3 = param_2;
  *param_4 = 0;
  iVar4 = (**(code **)(lVar1 + 0xb0))(lVar1,param_2,param_3,param_4,*(undefined8 *)(lVar1 + 0xf0));
  return iVar4 != 0;
}



// FUNCTION 143c98190 override_features_indic body=94 status=ok
// SIG undefined override_features_indic(void)

void override_features_indic(longlong param_1)

{
  if (DAT_146bc8688 == 0) {
    _hb_options_init();
  }
  if (((DAT_146bc8688 & 2) != 0) && (*(int *)(param_1 + 0xc) == 0x4b686d72)) {
    hb_ot_map_builder_t::add_feature(param_1 + 0x30,0x6b65726e,0,1);
  }
  hb_ot_map_builder_t::add_feature(param_1 + 0x30,0x6c696761,0,1);
  return;
}



// FUNCTION 143c981f0 compose_indic body=169 status=ok
// SIG undefined compose_indic(void)

bool compose_indic(longlong param_1,ulonglong param_2,int param_3,int *param_4)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  bVar2 = (**(code **)(lVar1 + 0x90))(lVar1,param_2,*(undefined8 *)(lVar1 + 0xd0));
  if ((1 << (bVar2 & 0x1f) & 0x1c00U) == 0) {
    if (((int)param_2 == 0x9af) && (param_3 == 0x9bc)) {
      *param_4 = 0x9df;
      bVar4 = true;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x18);
      iVar3 = 0 << (bVar2 & 0x1f);
      *param_4 = iVar3;
      if (((int)param_2 != 0) && (param_3 != 0)) {
        iVar3 = (**(code **)(lVar1 + 0xa8))
                          (lVar1,param_2 & 0xffffffff,param_3,param_4,*(undefined8 *)(lVar1 + 0xe8))
        ;
      }
      bVar4 = iVar3 != 0;
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



// FUNCTION 143c982a0 data_create_indic body=614 status=ok
// SIG undefined data_create_indic(void)

longlong * data_create_indic(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  void *pvVar4;
  int *piVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined4 local_res10 [2];
  
  cVar6 = '\x01';
  plVar2 = (longlong *)HarfBuzzCalloc(1,0xa8);
  if (plVar2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  piVar5 = &DAT_145d3bc80;
  *plVar2 = (longlong)&DAT_145d3bc60;
  uVar3 = 1;
  do {
    if (*(int *)(param_1 + 4) == *piVar5) {
      *plVar2 = (longlong)(&DAT_145d3bc60 + uVar3 * 0x20);
      break;
    }
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
    piVar5 = piVar5 + 8;
  } while (uVar1 < 0xd);
  if ((*(char *)(*plVar2 + 4) == '\0') || (*(char *)(param_1 + 0x28) == '2')) {
    cVar6 = '\0';
  }
  uVar10 = 0xffffffff;
  *(char *)(plVar2 + 1) = cVar6;
  *(undefined4 *)((longlong)plVar2 + 0xc) = 0xffffffff;
  if ((cVar6 == '\0') && (*(int *)(param_1 + 4) != 0x4d6c796d)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  *(undefined1 *)((longlong)plVar2 + 0x1c) = uVar8;
  local_res10[0] = 0x72706866;
  pvVar4 = bsearch(local_res10,*(void **)(param_1 + 0x40),(ulonglong)*(uint *)(param_1 + 0x38),0x24,
                   (_PtFuncCompare *)&LAB_143c7bc50);
  if (pvVar4 == (void *)0x0) {
    uVar12 = 0xffffffff;
  }
  else {
    uVar12 = *(undefined4 *)((longlong)pvVar4 + 0xc);
  }
  hb_ot_map_t::get_stage_lookups(param_1 + 0x28,0,uVar12,plVar2 + 2,plVar2 + 3);
  *(undefined1 *)((longlong)plVar2 + 0x2c) = uVar8;
  local_res10[0] = 0x70726566;
  pvVar4 = bsearch(local_res10,*(void **)(param_1 + 0x40),(ulonglong)*(uint *)(param_1 + 0x38),0x24,
                   (_PtFuncCompare *)&LAB_143c7bc50);
  if (pvVar4 == (void *)0x0) {
    uVar12 = 0xffffffff;
  }
  else {
    uVar12 = *(undefined4 *)((longlong)pvVar4 + 0xc);
  }
  hb_ot_map_t::get_stage_lookups(param_1 + 0x28,0,uVar12,plVar2 + 4,plVar2 + 5);
  *(undefined1 *)((longlong)plVar2 + 0x3c) = uVar8;
  local_res10[0] = 0x626c7766;
  pvVar4 = bsearch(local_res10,*(void **)(param_1 + 0x40),(ulonglong)*(uint *)(param_1 + 0x38),0x24,
                   (_PtFuncCompare *)&LAB_143c7bc50);
  if (pvVar4 == (void *)0x0) {
    uVar12 = 0xffffffff;
  }
  else {
    uVar12 = *(undefined4 *)((longlong)pvVar4 + 0xc);
  }
  hb_ot_map_t::get_stage_lookups(param_1 + 0x28,0,uVar12,plVar2 + 6,plVar2 + 7);
  *(undefined1 *)((longlong)plVar2 + 0x4c) = uVar8;
  local_res10[0] = 0x70737466;
  pvVar4 = bsearch(local_res10,*(void **)(param_1 + 0x40),(ulonglong)*(uint *)(param_1 + 0x38),0x24,
                   (_PtFuncCompare *)&LAB_143c7bc50);
  if (pvVar4 != (void *)0x0) {
    uVar10 = *(undefined4 *)((longlong)pvVar4 + 0xc);
  }
  hb_ot_map_t::get_stage_lookups(param_1 + 0x28,0,uVar10,plVar2 + 8,plVar2 + 9);
  puVar7 = &DAT_145d3be00;
  plVar11 = plVar2 + 10;
  lVar9 = 0x15;
  do {
    if ((*(byte *)(puVar7 + 1) & 1) == 0) {
      local_res10[0] = *puVar7;
      pvVar4 = bsearch(local_res10,*(void **)(param_1 + 0x40),(ulonglong)*(uint *)(param_1 + 0x38),
                       0x24,(_PtFuncCompare *)&LAB_143c7bc50);
      if (pvVar4 == (void *)0x0) goto LAB_143c984d9;
      uVar10 = *(undefined4 *)((longlong)pvVar4 + 0x1c);
    }
    else {
LAB_143c984d9:
      uVar10 = 0;
    }
    *(undefined4 *)plVar11 = uVar10;
    puVar7 = puVar7 + 2;
    plVar11 = (longlong *)((longlong)plVar11 + 4);
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) {
      return plVar2;
    }
  } while( true );
}



// FUNCTION 143c98510 consonant_position_from_face body=401 status=ok
// SIG undefined consonant_position_from_face(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
consonant_position_from_face
          (longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  uVar5 = uVar3;
  local_48 = param_3;
  local_44 = param_2;
  local_40 = param_3;
  if ((int)param_1[7] != 0) {
    do {
      local_58 = (uint)*(byte *)((longlong)param_1 + 0x3c);
      iVar2 = hb_ot_layout_lookup_would_substitute_fast
                        (param_4,*(undefined2 *)(param_1[6] + uVar5 * 8),&local_48,2);
      if (iVar2 != 0) {
        return 8;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 7));
  }
  cVar1 = would_substitute_feature_t::would_substitute(param_1 + 6,&local_44,2,param_4);
  if (cVar1 != '\0') {
    return 8;
  }
  uVar5 = uVar3;
  if ((int)param_1[9] != 0) {
    do {
      local_58 = (uint)*(byte *)((longlong)param_1 + 0x4c);
      iVar2 = hb_ot_layout_lookup_would_substitute_fast
                        (param_4,*(undefined2 *)(param_1[8] + uVar5 * 8),&local_48,2);
      if (iVar2 != 0) goto LAB_143c9867d;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 9));
  }
  cVar1 = would_substitute_feature_t::would_substitute(param_1 + 8,&local_44,2,param_4);
  if (cVar1 == '\0') {
    if (*(int *)(*param_1 + 0x1c) == 2) {
      if ((int)param_1[5] != 0) {
        do {
          local_58 = (uint)*(byte *)((longlong)param_1 + 0x2c);
          iVar2 = hb_ot_layout_lookup_would_substitute_fast
                            (param_4,*(undefined2 *)(param_1[4] + uVar3 * 8),&local_48,2);
          if (iVar2 != 0) goto LAB_143c9867d;
          uVar4 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(param_1 + 5));
      }
      uVar6 = 2;
LAB_143c98661:
      cVar1 = would_substitute_feature_t::would_substitute(param_1 + 4,&local_44,uVar6,param_4);
      if (cVar1 != '\0') goto LAB_143c9867d;
    }
    else if (*(int *)(*param_1 + 0x1c) == 1) {
      uVar6 = 1;
      goto LAB_143c98661;
    }
    uVar6 = 4;
  }
  else {
LAB_143c9867d:
    uVar6 = 0xb;
  }
  return uVar6;
}



// FUNCTION 143c986b0 final_reordering body=175 status=ok
// SIG undefined final_reordering(void)

void final_reordering(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_3 + 0xb8);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      if (uVar1 <= uVar2) break;
    } while (*(char *)(*(longlong *)(param_3 + 200) + 0xf) ==
             *(char *)(*(longlong *)(param_3 + 200) + 0xf + uVar3 * 0x14));
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        uVar4 = uVar3;
        final_reordering_syllable(param_1,param_3,uVar5,uVar4);
        uVar3 = uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          if (*(uint *)(param_3 + 0xb8) <= uVar2) break;
        } while (*(char *)(*(longlong *)(param_3 + 200) + 0xf + uVar4 * 0x14) ==
                 *(char *)(*(longlong *)(param_3 + 200) + 0xf + uVar3 * 0x14));
        uVar5 = uVar4;
      } while ((uint)uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 143c98760 final_reordering_syllable body=2895 status=ok
// SIG undefined final_reordering_syllable(void)

void final_reordering_syllable(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  byte *pbVar13;
  ulonglong uVar14;
  char *pcVar15;
  byte bVar16;
  ushort *puVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  void *_Src;
  bool bVar25;
  
  plVar5 = *(longlong **)(param_1 + 0x428);
  iVar12 = *(int *)((longlong)plVar5 + 0xc);
  lVar6 = *(longlong *)(param_2 + 200);
  uVar23 = (ulonglong)param_3;
  if ((iVar12 != 0) && (param_3 < param_4)) {
    uVar22 = (ulonglong)(param_4 - param_3);
    puVar17 = (ushort *)(lVar6 + uVar23 * 0x14 + 0xc);
    do {
      if ((*(int *)(puVar17 + -6) == iVar12) && (((byte)*puVar17 & 0x60) == 0x60)) {
        *(undefined1 *)(puVar17 + 3) = 4;
        *puVar17 = *puVar17 & 0xff9f;
      }
      puVar17 = puVar17 + 10;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  bVar25 = (int)plVar5[0xc] != 0;
  uVar22 = uVar23;
  if (param_3 < param_4) {
    pbVar13 = (byte *)(lVar6 + 0x13 + uVar23 * 0x14);
    do {
      if (3 < *pbVar13) {
        if (((!bVar25) || (uVar19 = (int)uVar22 + 1, param_4 <= uVar19)) ||
           (*(int *)(*plVar5 + 0x1c) != 2)) goto LAB_143c988ee;
        goto LAB_143c98860;
      }
      uVar19 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar19;
      pbVar13 = pbVar13 + 0x14;
    } while (uVar19 < param_4);
  }
  goto LAB_143c98a2a;
  while (uVar19 = uVar19 + 1, uVar19 < param_4) {
LAB_143c98860:
    uVar14 = (ulonglong)uVar19;
    if ((*(uint *)(lVar6 + 4 + uVar14 * 0x14) & *(uint *)(plVar5 + 0xc)) != 0) {
      lVar2 = lVar6 + uVar14 * 0x14;
      if ((((*(byte *)(lVar6 + 0xc + uVar14 * 0x14) >> 4 & 1) == 0) ||
          (bVar16 = (byte)*(undefined2 *)(lVar2 + 0xc), (bVar16 >> 5 & 1) == 0)) ||
         ((bVar16 >> 6 & 1) != 0)) {
        if (param_4 <= uVar19) goto LAB_143c988da;
        pbVar13 = (byte *)(lVar2 + 0x12);
        goto LAB_143c988b0;
      }
      break;
    }
  }
  goto LAB_143c988ee;
  while( true ) {
    uVar7 = (uint)uVar18;
    uVar19 = uVar7 - 1;
    uVar22 = (ulonglong)uVar19;
    if (((*(byte *)(lVar6 + 0xc + uVar22 * 0x14) >> 5 & 1) == 0) &&
       ((1 << (*(byte *)(lVar6 + 0x12 + uVar22 * 0x14) & 0x1f) & 0x4090U) != 0)) break;
joined_r0x000143c990b9:
    uVar18 = uVar22;
    uVar22 = uVar18;
    if (uVar19 <= param_3) goto LAB_143c99197;
  }
  uVar22 = uVar18;
  if (param_3 < uVar7) {
    if ((*(char *)(lVar6 + 0x12 + (ulonglong)(uVar7 - 1) * 0x14) == '\a') && (uVar20 < uVar24)) {
      pcVar15 = (char *)(lVar6 + 0x12 + uVar14 * 0x14);
      do {
        uVar22 = (ulonglong)(uVar7 - 1);
        if (*pcVar15 == '\a') break;
        uVar19 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar19;
        pcVar15 = pcVar15 + 0x14;
        uVar22 = uVar18;
      } while (uVar19 < uVar24);
    }
LAB_143c99138:
    uVar19 = (uint)uVar22;
    if ((((param_3 < uVar19) &&
         ((*(byte *)(lVar6 + 0xc + (ulonglong)(uVar19 - 1) * 0x14) >> 5 & 1) == 0)) &&
        ((1 << (*(byte *)(lVar6 + (ulonglong)(uVar19 - 1) * 0x14 + 0x12) & 0x1f) & 0x4010U) != 0))
       && (((uVar19 < param_4 && ((*(byte *)(lVar6 + 0xc + uVar22 * 0x14) >> 5 & 1) == 0)) &&
           ((1 << (*(byte *)(lVar6 + 0x12 + uVar22 * 0x14) & 0x1f) & 0x60U) != 0)))) {
      uVar22 = (ulonglong)(uVar19 + 1);
    }
  }
LAB_143c99197:
  iVar12 = (int)uVar22;
  if (1 < (uVar24 + 1) - iVar12) {
    hb_buffer_t::merge_clusters_impl(param_2,uVar22);
  }
  uVar8 = *puVar3;
  uVar9 = puVar3[1];
  uVar10 = puVar3[2];
  uVar11 = puVar3[3];
  uVar4 = puVar3[4];
  puVar3 = (undefined4 *)(lVar6 + uVar22 * 0x14);
  memmove((void *)(lVar6 + (ulonglong)(iVar12 + 1) * 0x14),puVar3,
          (ulonglong)(uVar24 - iVar12) * 0x14);
  *puVar3 = uVar8;
  puVar3[1] = uVar9;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  puVar3[4] = uVar4;
  goto LAB_143c991fa;
  while( true ) {
    uVar19 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar19;
    pbVar13 = pbVar13 + 0x14;
    if (param_4 <= uVar19) break;
LAB_143c988b0:
    if (((pbVar13[-6] >> 5 & 1) != 0) || ((1 << (*pbVar13 & 0x1f) & 0x4010U) == 0)) break;
  }
LAB_143c988da:
  bVar25 = false;
  *(undefined1 *)(lVar6 + 0x13 + uVar14 * 0x14) = 4;
  uVar22 = uVar14;
LAB_143c988ee:
  if (*(int *)(param_2 + 0x94) == 0x4d6c796d) {
    iVar12 = (int)uVar22;
    while (iVar12 + 1U < param_4) {
      uVar14 = (ulonglong)(iVar12 + 1U);
      pbVar13 = (byte *)(lVar6 + 0x12 + uVar14 * 0x14);
      do {
        if (((pbVar13[-6] >> 5 & 1) != 0) || ((1 << (*pbVar13 & 0x1f) & 0x60U) == 0)) break;
        uVar19 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar19;
        pbVar13 = pbVar13 + 0x14;
      } while (uVar19 < param_4);
      if ((((uint)uVar14 == param_4) || ((*(byte *)(lVar6 + 0xc + uVar14 * 0x14) >> 5 & 1) != 0)) ||
         ((1 << (*(byte *)(lVar6 + uVar14 * 0x14 + 0x12) & 0x1f) & 0x4010U) == 0)) break;
      uVar19 = (uint)uVar14 + 1;
      uVar14 = (ulonglong)uVar19;
      if (uVar19 < param_4) {
        pbVar13 = (byte *)(lVar6 + 0x12 + uVar14 * 0x14);
        do {
          if (((pbVar13[-6] >> 5 & 1) != 0) || ((1 << (*pbVar13 & 0x1f) & 0x60U) == 0)) {
            if ((((uint)uVar14 < param_4) &&
                ((lVar2 = lVar6 + uVar14 * 0x14,
                 (*(byte *)(lVar6 + 0xc + uVar14 * 0x14) >> 5 & 1) == 0 &&
                 ((1 << (*(byte *)(lVar2 + 0x12) & 0x1f) & 0x80031806U) != 0)))) &&
               (*(char *)(lVar2 + 0x13) == '\b')) {
              *(undefined1 *)(lVar2 + 0x13) = 4;
              uVar22 = uVar14;
            }
            break;
          }
          uVar19 = (uint)uVar14 + 1;
          uVar14 = (ulonglong)uVar19;
          pbVar13 = pbVar13 + 0x14;
        } while (uVar19 < param_4);
      }
      iVar12 = (int)uVar14;
    }
  }
  if ((param_3 < (uint)uVar22) && (4 < *(byte *)(lVar6 + 0x13 + uVar22 * 0x14))) {
    uVar22 = (ulonglong)((uint)uVar22 - 1);
  }
LAB_143c98a2a:
  uVar19 = (uint)uVar22;
  if (uVar19 == param_4) {
    if (param_3 < uVar19) {
      uVar19 = uVar19 - 1;
      if (((*(byte *)(lVar6 + 0xc + (ulonglong)uVar19 * 0x14) >> 5 & 1) == 0) &&
         (((uint)(1 << (*(byte *)(lVar6 + 0x12 + (ulonglong)uVar19 * 0x14) & 0x1f)) >> 6 & 1) != 0))
      {
        uVar22 = (ulonglong)uVar19;
      }
    }
    uVar19 = (uint)uVar22;
  }
  if ((uVar19 < param_4) && (param_3 < (uint)uVar22)) {
    while ((*(byte *)(lVar6 + 0xc + uVar22 * 0x14) >> 5 & 1) == 0) {
      if (((1 << (*(byte *)(lVar6 + 0x12 + uVar22 * 0x14) & 0x1f) & 0x4018U) == 0) ||
         (uVar19 = (int)uVar22 - 1, uVar22 = (ulonglong)uVar19, uVar19 <= param_3)) break;
    }
  }
  uVar14 = (ulonglong)(param_3 + 1);
  if ((param_3 + 1 < param_4) && (uVar19 = (uint)uVar22, param_3 < uVar19)) {
    uVar20 = uVar19 - 2;
    if (uVar19 != param_4) {
      uVar20 = uVar19 - 1;
    }
    uVar18 = (ulonglong)uVar20;
    if ((*(int *)(param_2 + 0x94) == 0x4d6c796d) || (*(int *)(param_2 + 0x94) == 0x54616d6c)) {
LAB_143c98b96:
      if ((param_3 < (uint)uVar18) &&
         (_Src = (void *)(lVar6 + uVar18 * 0x14), *(char *)(lVar6 + 0x13 + uVar18 * 0x14) != '\x02')
         ) {
        uVar21 = uVar18;
        if (param_3 < (uint)uVar18) {
          do {
            iVar12 = (int)uVar18;
            uVar19 = iVar12 - 1;
            uVar18 = (ulonglong)uVar19;
            if (*(char *)(lVar6 + 0x13 + uVar18 * 0x14) == '\x02') {
              uVar20 = (uint)uVar22;
              uVar24 = (uint)uVar21;
              if ((uVar19 < uVar20) && (uVar20 <= uVar24)) {
                uVar22 = (ulonglong)(uVar20 - 1);
              }
              puVar3 = (undefined4 *)(lVar6 + uVar18 * 0x14);
              uVar8 = *puVar3;
              uVar9 = puVar3[1];
              uVar10 = puVar3[2];
              uVar11 = puVar3[3];
              uVar4 = *(undefined4 *)(lVar6 + 0x10 + uVar18 * 0x14);
              memmove((void *)(lVar6 + uVar18 * 0x14),_Src,(ulonglong)((uVar24 - iVar12) + 1) * 0x14
                     );
              uVar20 = (int)uVar22 + 1;
              puVar3 = (undefined4 *)(lVar6 + uVar21 * 0x14);
              *puVar3 = uVar8;
              puVar3[1] = uVar9;
              puVar3[2] = uVar10;
              puVar3[3] = uVar11;
              if (param_4 < uVar20) {
                uVar20 = param_4;
              }
              *(undefined4 *)(lVar6 + 0x10 + uVar21 * 0x14) = uVar4;
              if (1 < uVar20 - uVar24) {
                hb_buffer_t::merge_clusters_impl(param_2,uVar21);
              }
              uVar21 = (ulonglong)(uVar24 - 1);
            }
            _Src = (void *)((longlong)_Src + -0x14);
          } while (param_3 < uVar19);
          uVar14 = (ulonglong)(param_3 + 1);
        }
        goto LAB_143c98cb4;
      }
    }
    else {
      if (param_3 < uVar20) {
        pbVar13 = (byte *)(lVar6 + 0x12 + uVar18 * 0x14);
        do {
          if (((pbVar13[-6] >> 5 & 1) == 0) && ((1 << (*pbVar13 & 0x1f) & 0x4090U) != 0)) break;
          uVar20 = (int)uVar18 - 1;
          uVar18 = (ulonglong)uVar20;
          pbVar13 = pbVar13 + -0x14;
        } while (param_3 < uVar20);
      }
      lVar2 = lVar6 + uVar18 * 0x14;
      if ((((*(byte *)(lVar6 + 0xc + uVar18 * 0x14) >> 5 & 1) == 0) &&
          ((1 << (*(byte *)(lVar2 + 0x12) & 0x1f) & 0x4010U) != 0)) &&
         (*(char *)(lVar2 + 0x13) != '\x02')) {
        uVar20 = (int)uVar18 + 1;
        if (((uVar20 < param_4) &&
            ((*(byte *)(lVar6 + 0xc + (ulonglong)uVar20 * 0x14) >> 5 & 1) == 0)) &&
           ((1 << (*(byte *)(lVar6 + 0x12 + (ulonglong)uVar20 * 0x14) & 0x1f) & 0x60U) != 0)) {
          uVar18 = (ulonglong)uVar20;
        }
        goto LAB_143c98b96;
      }
    }
    pcVar15 = (char *)(lVar6 + 0x13 + uVar23 * 0x14);
    uVar20 = param_3;
    do {
      if (*pcVar15 == '\x02') {
        uVar24 = uVar19 + 1;
        if (param_4 < uVar19 + 1) {
          uVar24 = param_4;
        }
        if (1 < uVar24 - uVar20) {
          hb_buffer_t::merge_clusters_impl(param_2);
        }
        break;
      }
      uVar20 = uVar20 + 1;
      pcVar15 = pcVar15 + 0x14;
    } while (uVar20 < uVar19);
  }
LAB_143c98cb4:
  uVar19 = (uint)uVar14;
  if ((uVar19 < param_4) &&
     (puVar3 = (undefined4 *)(lVar6 + uVar23 * 0x14),
     *(char *)(lVar6 + 0x13 + uVar23 * 0x14) == '\x01')) {
    if ((((byte)*(undefined2 *)(puVar3 + 3) >> 5 & 1) == 0) ||
       (bVar16 = 1, ((byte)*(undefined2 *)(puVar3 + 3) >> 6 & 1) != 0)) {
      bVar16 = 0;
    }
    if ((bool)(*(char *)((longlong)puVar3 + 0x12) == '\x0f' ^ bVar16)) {
      iVar12 = *(int *)(*plVar5 + 0x10);
      uVar20 = (uint)uVar22;
      if (iVar12 == 0xc) {
LAB_143c98d8c:
        if (uVar19 < uVar20) {
          pbVar13 = (byte *)(lVar6 + 0x12 + uVar14 * 0x14);
          uVar18 = uVar14;
          do {
            uVar19 = (uint)uVar18;
            if (((pbVar13[-6] >> 5 & 1) == 0) && ((1 << (*pbVar13 & 0x1f) & 0x4010U) != 0)) {
              if ((uVar19 < uVar20) &&
                 (((*(byte *)(lVar6 + 0xc + uVar18 * 0x14) >> 5 & 1) == 0 &&
                  ((1 << (*(byte *)(lVar6 + 0x12 + uVar18 * 0x14) & 0x1f) & 0x4010U) != 0)))) {
                uVar19 = uVar19 + 1;
                if ((uVar19 < uVar20) &&
                   (((*(byte *)(lVar6 + 0xc + (ulonglong)uVar19 * 0x14) >> 5 & 1) == 0 &&
                    ((1 << (*(byte *)(lVar6 + 0x12 + (ulonglong)uVar19 * 0x14) & 0x1f) & 0x60U) != 0
                    )))) {
                  uVar18 = (ulonglong)uVar19;
                }
                goto LAB_143c98e54;
              }
              break;
            }
            uVar18 = (ulonglong)(uVar19 + 1);
            pbVar13 = pbVar13 + 0x14;
          } while (uVar19 + 1 < uVar20);
        }
        uVar18 = (ulonglong)(param_4 - 1);
        if (param_3 < param_4 - 1) {
          pcVar15 = (char *)(lVar6 + 0x13 + uVar18 * 0x14);
          do {
            if (*pcVar15 != '\x0e') break;
            uVar19 = (int)uVar18 - 1;
            uVar18 = (ulonglong)uVar19;
            pcVar15 = pcVar15 + -0x14;
          } while (param_3 < uVar19);
        }
        if (DAT_146bc8688 == 0) {
          _hb_options_init();
        }
        if (((((DAT_146bc8688 & 2) == 0) && ((*(byte *)(lVar6 + 0xc + uVar18 * 0x14) >> 5 & 1) == 0)
             ) && ((1 << (*(byte *)(lVar6 + 0x12 + uVar18 * 0x14) & 0x1f) & 0x4010U) != 0)) &&
           (uVar19 = uVar20 + 1, uVar19 < (uint)uVar18)) {
          do {
            if (*(char *)(lVar6 + 0x12 + (ulonglong)uVar19 * 0x14) == '\a') {
              uVar18 = (ulonglong)((int)uVar18 - 1);
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 < (uint)uVar18);
        }
      }
      else {
        if (uVar19 < uVar20) {
          pbVar13 = (byte *)(lVar6 + 0x12 + uVar14 * 0x14);
          uVar18 = uVar14;
          do {
            uVar24 = (uint)uVar18;
            if (((pbVar13[-6] >> 5 & 1) == 0) && ((1 << (*pbVar13 & 0x1f) & 0x4010U) != 0)) {
              if ((uVar24 < uVar20) &&
                 (((*(byte *)(lVar6 + 0xc + uVar18 * 0x14) >> 5 & 1) == 0 &&
                  ((1 << (*(byte *)(lVar6 + 0x12 + uVar18 * 0x14) & 0x1f) & 0x4010U) != 0)))) {
                uVar24 = uVar24 + 1;
                if ((uVar24 < uVar20) &&
                   (((*(byte *)(lVar6 + 0xc + (ulonglong)uVar24 * 0x14) >> 5 & 1) == 0 &&
                    ((1 << (*(byte *)(lVar6 + 0x12 + (ulonglong)uVar24 * 0x14) & 0x1f) & 0x60U) != 0
                    )))) {
                  uVar18 = (ulonglong)uVar24;
                }
                goto LAB_143c98e54;
              }
              break;
            }
            uVar18 = (ulonglong)(uVar24 + 1);
            pbVar13 = pbVar13 + 0x14;
          } while (uVar24 + 1 < uVar20);
        }
        uVar18 = uVar22;
        uVar24 = uVar20;
        if (iVar12 != 5) {
          if (iVar12 == 9) {
            while (uVar24 < param_4) {
              uVar24 = (int)uVar18 + 1;
              if ((1 << (*(byte *)(lVar6 + 0x13 + (ulonglong)uVar24 * 0x14) & 0x1f) & 0x5800U) != 0)
              goto LAB_143c98d84;
              uVar18 = (ulonglong)uVar24;
            }
          }
          goto LAB_143c98d8c;
        }
        while ((uVar24 = uVar24 + 1, uVar24 < param_4 &&
               (*(byte *)(lVar6 + 0x13 + (ulonglong)uVar24 * 0x14) < 6))) {
          uVar18 = (ulonglong)((int)uVar18 + 1);
        }
LAB_143c98d84:
        if (param_4 <= (uint)uVar18) goto LAB_143c98d8c;
      }
LAB_143c98e54:
      uVar19 = (uint)uVar18;
      if (1 < (uVar19 + 1) - param_3) {
        hb_buffer_t::merge_clusters_impl(param_2,param_3);
      }
      uVar8 = *puVar3;
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      uVar4 = puVar3[4];
      memmove(puVar3,(void *)(lVar6 + (ulonglong)(param_3 + 1) * 0x14),
              (ulonglong)(uVar19 - param_3) * 0x14);
      puVar3 = (undefined4 *)(lVar6 + uVar18 * 0x14);
      *puVar3 = uVar8;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      *(undefined4 *)(lVar6 + 0x10 + uVar18 * 0x14) = uVar4;
      if ((param_3 < uVar20) && (uVar20 <= uVar19)) {
        uVar22 = (ulonglong)(uVar20 - 1);
      }
    }
  }
  if (bVar25) {
    uVar19 = (uint)uVar22;
    uVar20 = uVar19 + 1;
    uVar14 = (ulonglong)uVar20;
    if (uVar20 < param_4) {
      uVar24 = uVar20;
      do {
        if ((*(uint *)(lVar6 + 4 + (ulonglong)uVar24 * 0x14) & *(uint *)(plVar5 + 0xc)) != 0) {
          puVar3 = (undefined4 *)(lVar6 + (ulonglong)uVar24 * 0x14);
          if ((*(byte *)(lVar6 + 0xc + (ulonglong)uVar24 * 0x14) >> 4 & 1) != 0) {
            if ((((byte)*(undefined2 *)(puVar3 + 3) >> 5 & 1) == 0) ||
               (bVar25 = true, ((byte)*(undefined2 *)(puVar3 + 3) >> 6 & 1) != 0)) {
              bVar25 = false;
            }
            if ((*(int *)(*plVar5 + 0x1c) == 1) != bVar25) {
              if ((*(int *)(param_2 + 0x94) == 0x4d6c796d) ||
                 (*(int *)(param_2 + 0x94) == 0x54616d6c)) goto LAB_143c99138;
              goto joined_r0x000143c990b9;
            }
          }
          break;
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < param_4);
    }
  }
LAB_143c991fa:
  if ((*(char *)(lVar6 + 0x13 + uVar23 * 0x14) == '\x02') &&
     ((param_3 == 0 ||
      ((1 << ((byte)*(undefined2 *)(lVar6 + 0x10 + (ulonglong)(param_3 - 1) * 0x14) & 0x1f) &
       0x1ffeU) == 0)))) {
    puVar1 = (uint *)(lVar6 + uVar23 * 0x14 + 4);
    *puVar1 = *puVar1 | *(uint *)(plVar5 + 0x10);
  }
  if (DAT_146bc8688 == 0) {
    _hb_options_init();
  }
  if (((((DAT_146bc8688 & 2) != 0) && (*(int *)(param_1 + 4) != 0x53696e68)) &&
      (*(int *)(param_1 + 4) != 0x54616d6c)) && (1 < param_4 - param_3)) {
    hb_buffer_t::merge_clusters_impl(param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 143c992b0 FUN_143c992b0 body=1816 status=ok
// SIG undefined FUN_143c992b0(void)

void FUN_143c992b0(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  uVar2 = *(uint *)(param_1 + 0xb8);
  lVar3 = *(longlong *)(param_1 + 200);
  uVar12 = 0;
  iVar15 = 0xb2;
  iVar16 = 0;
  uVar11 = 0;
  uVar7 = 0;
  iVar14 = 1;
  if (uVar2 != 0) goto LAB_143c9994b;
LAB_143c9930d:
  if (*(short *)(&DAT_145d40a70 + (longlong)iVar15 * 2) < 1) {
    return;
  }
  iVar8 = *(short *)(&DAT_145d40a70 + (longlong)iVar15 * 2) + -1;
  do {
    iVar15 = (int)*(short *)(&DAT_145d403e0 + (longlong)iVar8 * 2);
    if ((&DAT_145d40840)[iVar8] == '\0') goto switchD_143c99360_caseD_a;
    uVar5 = (uint)uVar7;
    cVar13 = (char)iVar14;
    switch((&DAT_145d40840)[iVar8]) {
    case 1:
      uVar6 = (ulonglong)uVar12;
      uVar4 = uVar12 - 1;
      if (uVar5 < uVar12) {
        pcVar9 = (char *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)(uVar12 - uVar5);
        do {
          *pcVar9 = cVar13 << 4;
          pcVar9 = pcVar9 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      break;
    case 2:
      goto switchD_143c99360_caseD_2;
    case 3:
      uVar6 = (ulonglong)uVar12;
      uVar4 = uVar12 - 1;
      if (uVar5 < uVar12) {
        pbVar10 = (byte *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)(uVar12 - uVar5);
        do {
          *pbVar10 = cVar13 << 4 | 1;
          pbVar10 = pbVar10 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      break;
    case 4:
      uVar6 = (ulonglong)uVar12;
      uVar4 = uVar12 - 1;
      if (uVar5 < uVar12) {
        pbVar10 = (byte *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)(uVar12 - uVar5);
        do {
          *pbVar10 = cVar13 << 4 | 4;
          pbVar10 = pbVar10 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      break;
    case 5:
      if (iVar16 == 1) {
        uVar6 = (ulonglong)uVar12;
        uVar4 = uVar12 - 1;
        if (uVar5 < uVar12) {
          pcVar9 = (char *)(lVar3 + 0xf + uVar7 * 0x14);
          uVar7 = (ulonglong)(uVar12 - uVar5);
          do {
            *pcVar9 = cVar13 << 4;
            pcVar9 = pcVar9 + 0x14;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
      else if (iVar16 == 5) {
        uVar6 = (ulonglong)uVar12;
        uVar4 = uVar12 - 1;
        if (uVar5 < uVar12) {
          pbVar10 = (byte *)(lVar3 + 0xf + uVar7 * 0x14);
          uVar7 = (ulonglong)(uVar12 - uVar5);
          do {
            *pbVar10 = cVar13 << 4 | 4;
            pbVar10 = pbVar10 + 0x14;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
      else {
        if (iVar16 != 6) goto switchD_143c99360_caseD_a;
        uVar6 = (ulonglong)uVar12;
        uVar4 = uVar12 - 1;
        if (uVar5 < uVar12) {
          pbVar10 = (byte *)(lVar3 + 0xf + uVar7 * 0x14);
          uVar7 = (ulonglong)(uVar12 - uVar5);
          do {
            *pbVar10 = cVar13 << 4 | 5;
            pbVar10 = pbVar10 + 0x14;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
      break;
    case 6:
      iVar16 = 5;
      goto switchD_143c99360_caseD_2;
    case 7:
      uVar6 = (ulonglong)uVar12;
      uVar4 = uVar12 - 1;
      if (uVar5 < uVar12) {
        pbVar10 = (byte *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)(uVar12 - uVar5);
        do {
          *pbVar10 = cVar13 << 4 | 2;
          pbVar10 = pbVar10 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      break;
    case 8:
      iVar16 = 1;
      goto switchD_143c99360_caseD_2;
    case 9:
      uVar6 = (ulonglong)uVar12;
      uVar4 = uVar12 - 1;
      if (uVar5 < uVar12) {
        pbVar10 = (byte *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)(uVar12 - uVar5);
        do {
          *pbVar10 = cVar13 << 4 | 3;
          pbVar10 = pbVar10 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      break;
    default:
      goto switchD_143c99360_caseD_a;
    case 0xc:
      if (uVar5 < uVar11 + 1) {
        pbVar10 = (byte *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)((uVar11 + 1) - uVar5);
        do {
          *pbVar10 = cVar13 << 4 | 5;
          pbVar10 = pbVar10 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      goto LAB_143c9939d;
    case 0xd:
      iVar16 = 6;
switchD_143c99360_caseD_2:
      uVar12 = uVar11 + 1;
      goto switchD_143c99360_caseD_a;
    case 0xe:
      uVar6 = (ulonglong)uVar11;
      uVar12 = uVar11;
      uVar4 = uVar11 - 1;
      if (uVar5 < uVar11) {
        pcVar9 = (char *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)(uVar11 - uVar5);
        do {
          *pcVar9 = cVar13 << 4;
          pcVar9 = pcVar9 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      break;
    case 0xf:
      if (uVar5 < uVar11 + 1) {
        pcVar9 = (char *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)((uVar11 + 1) - uVar5);
        do {
          *pcVar9 = cVar13 << 4;
          pcVar9 = pcVar9 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      goto LAB_143c9939d;
    case 0x10:
      uVar6 = (ulonglong)uVar11;
      uVar12 = uVar11;
      uVar4 = uVar11 - 1;
      if (uVar5 < uVar11) {
        pbVar10 = (byte *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)(uVar11 - uVar5);
        do {
          *pbVar10 = cVar13 << 4 | 1;
          pbVar10 = pbVar10 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      break;
    case 0x11:
      if (uVar5 < uVar11 + 1) {
        pbVar10 = (byte *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)((uVar11 + 1) - uVar5);
        do {
          *pbVar10 = cVar13 << 4 | 1;
          pbVar10 = pbVar10 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      goto LAB_143c9939d;
    case 0x12:
      uVar6 = (ulonglong)uVar11;
      uVar12 = uVar11;
      uVar4 = uVar11 - 1;
      if (uVar5 < uVar11) {
        pbVar10 = (byte *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)(uVar11 - uVar5);
        do {
          *pbVar10 = cVar13 << 4 | 4;
          pbVar10 = pbVar10 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      break;
    case 0x13:
      if (uVar5 < uVar11 + 1) {
        pbVar10 = (byte *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)((uVar11 + 1) - uVar5);
        do {
          *pbVar10 = cVar13 << 4 | 4;
          pbVar10 = pbVar10 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      goto LAB_143c9939d;
    case 0x14:
      uVar6 = (ulonglong)uVar11;
      uVar12 = uVar11;
      uVar4 = uVar11 - 1;
      if (uVar5 < uVar11) {
        pbVar10 = (byte *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)(uVar11 - uVar5);
        do {
          *pbVar10 = cVar13 << 4 | 5;
          pbVar10 = pbVar10 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      break;
    case 0x15:
      uVar6 = (ulonglong)uVar11;
      uVar12 = uVar11;
      uVar4 = uVar11 - 1;
      if (uVar5 < uVar11) {
        pbVar10 = (byte *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)(uVar11 - uVar5);
        do {
          *pbVar10 = cVar13 << 4 | 2;
          pbVar10 = pbVar10 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      break;
    case 0x16:
      if (uVar5 < uVar11 + 1) {
        pbVar10 = (byte *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)((uVar11 + 1) - uVar5);
        do {
          *pbVar10 = cVar13 << 4 | 2;
          pbVar10 = pbVar10 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      goto LAB_143c9939d;
    case 0x17:
      uVar6 = (ulonglong)uVar11;
      uVar12 = uVar11;
      uVar4 = uVar11 - 1;
      if (uVar5 < uVar11) {
        pbVar10 = (byte *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)(uVar11 - uVar5);
        do {
          *pbVar10 = cVar13 << 4 | 3;
          pbVar10 = pbVar10 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      break;
    case 0x18:
      if (uVar5 < uVar11 + 1) {
        pbVar10 = (byte *)(lVar3 + 0xf + uVar7 * 0x14);
        uVar7 = (ulonglong)((uVar11 + 1) - uVar5);
        do {
          *pbVar10 = cVar13 << 4 | 3;
          pbVar10 = pbVar10 + 0x14;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
LAB_143c9939d:
      uVar6 = (ulonglong)(uVar11 + 1);
      uVar12 = uVar11 + 1;
      uVar4 = uVar11;
    }
    uVar11 = uVar4;
    iVar14 = iVar14 + 1;
    uVar7 = uVar6;
    if (iVar14 == 0x10) {
      iVar14 = 1;
    }
switchD_143c99360_caseD_a:
    uVar11 = uVar11 + 1;
    if (uVar11 == uVar2) goto LAB_143c9930d;
LAB_143c9994b:
    iVar8 = (int)(char)(&DAT_145d3fd80)[iVar15];
    if ('\0' < (char)(&DAT_145d3fd80)[iVar15]) {
      bVar1 = *(byte *)(lVar3 + 0x12 + (ulonglong)uVar11 * 0x14);
      if (((byte)(&DAT_145d3beb0)[iVar15 * 2] <= bVar1) &&
         (bVar1 <= (byte)(&DAT_145d3beb1)[iVar15 * 2])) {
        iVar8 = (uint)bVar1 - (uint)(byte)(&DAT_145d3beb0)[iVar15 * 2];
      }
    }
    iVar8 = (int)*(short *)(&DAT_145d3c2f0 +
                           (longlong)iVar8 * 2 +
                           (longlong)*(short *)(&DAT_145d3ffa0 + (longlong)iVar15 * 2) * 2);
  } while( true );
}



// FUNCTION 143c99a30 get_stage_lookups body=168 status=ok
// SIG undefined get_stage_lookups(void)

void hb_ot_map_t::get_stage_lookups
               (longlong param_1,uint param_2,uint param_3,longlong *param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  if (param_3 == 0xffffffff) {
    *param_4 = 0;
    *param_5 = 0;
    return;
  }
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x368 + uVar3 * 0x50) +
                     (ulonglong)(param_3 - 1) * 0x10);
  }
  if (param_3 < *(uint *)(param_1 + 0x360 + uVar3 * 0x50)) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x368 + uVar3 * 0x50) + (ulonglong)param_3 * 0x10);
  }
  else {
    iVar2 = *(int *)(uVar3 * 0x110 + 0x140 + param_1);
  }
  *param_4 = *(longlong *)(uVar3 * 0x110 + 0x148 + param_1) + (ulonglong)uVar1 * 8;
  *param_5 = iVar2 - uVar1;
  return;
}



// FUNCTION 143c99ae0 initial_reordering body=216 status=ok
// SIG undefined initial_reordering(void)

void initial_reordering(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar3;
  
  update_consonant_positions();
  insert_dotted_circles(param_1,param_2,param_3);
  uVar1 = *(uint *)(param_3 + 0xb8);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      if (uVar1 <= uVar2) break;
    } while (*(char *)(*(longlong *)(param_3 + 200) + 0xf) ==
             *(char *)(*(longlong *)(param_3 + 200) + 0xf + uVar3 * 0x14));
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        uVar4 = uVar3;
        initial_reordering_syllable
                  (param_1,*(undefined8 *)(param_2 + 0x80),param_3,uVar5,(uint)uVar4);
        uVar3 = uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          if (*(uint *)(param_3 + 0xb8) <= uVar2) break;
        } while (*(char *)(*(longlong *)(param_3 + 200) + 0xf + uVar4 * 0x14) ==
                 *(char *)(*(longlong *)(param_3 + 200) + 0xf + uVar3 * 0x14));
        uVar5 = uVar4;
      } while ((uint)uVar4 < uVar1);
    }
  }
  return;
}



// FUNCTION 143c99bc0 initial_reordering_consonant_syllable body=3134 status=ok
// SIG undefined initial_reordering_consonant_syllable(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void initial_reordering_consonant_syllable
               (longlong param_1,undefined8 param_2,longlong param_3,uint param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 *_Src;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined4 *puVar21;
  byte *pbVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  byte *pbVar26;
  longlong **pplVar27;
  longlong *plVar28;
  undefined1 auStack_c8 [32];
  uint local_a8;
  uint local_98;
  longlong local_90;
  longlong *local_88;
  uint local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar28 = *(longlong **)(param_1 + 0x428);
  uVar16 = (ulonglong)param_4;
  lVar4 = *(longlong *)(param_3 + 200);
  uVar19 = (ulonglong)param_4;
  lVar5 = *plVar28;
  local_98 = local_98 & 0xffffff00;
  uVar15 = param_5;
  local_90 = param_3;
  local_88 = plVar28;
  local_78 = param_2;
  if (((*(int *)(lVar5 + 0x10) != 1) && ((int)plVar28[0xb] != 0)) && (param_4 + 3 <= param_5)) {
    iVar8 = *(int *)(lVar5 + 0x14);
    if (iVar8 == 0) {
      uVar11 = (ulonglong)(param_4 + 2);
      puVar21 = (undefined4 *)(lVar4 + uVar11 * 0x14);
      if (((*(byte *)(lVar4 + 0xc + uVar11 * 0x14) >> 5 & 1) == 0) &&
         ((1 << (*(byte *)((longlong)puVar21 + 0x12) & 0x1f) & 0x60U) != 0)) goto LAB_143c99c7a;
LAB_143c99c9a:
      local_60 = (undefined4 *)
                 CONCAT44(*(undefined4 *)(lVar4 + (ulonglong)(param_4 + 1) * 0x14),
                          *(undefined4 *)(lVar4 + uVar19 * 0x14));
      uVar14 = 0;
      if (iVar8 == 1) {
        uStack_58 = *puVar21;
      }
      else {
        uStack_58 = 0;
      }
      if ((int)plVar28[3] != 0) {
        do {
          local_a8 = (uint)*(byte *)((longlong)plVar28 + 0x1c);
          iVar8 = hb_ot_layout_lookup_would_substitute_fast
                            (local_78,*(undefined2 *)(plVar28[2] + (ulonglong)uVar14 * 8),&local_60)
          ;
          if (iVar8 != 0) goto LAB_143c99e0e;
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(uint *)(plVar28 + 3));
      }
      uVar14 = 0;
      uVar20 = local_98;
      if ((*(int *)(*plVar28 + 0x14) == 1) && ((int)plVar28[3] != 0)) {
        do {
          local_a8 = (uint)*(byte *)((longlong)plVar28 + 0x1c);
          iVar8 = hb_ot_layout_lookup_would_substitute_fast
                            (local_78,*(undefined2 *)(plVar28[2] + (ulonglong)uVar14 * 8),&local_60)
          ;
          if (iVar8 != 0) goto LAB_143c99e0e;
          uVar14 = uVar14 + 1;
          uVar20 = local_98;
        } while (uVar14 < *(uint *)(plVar28 + 3));
      }
      goto LAB_143c99d87;
    }
LAB_143c99c7a:
    if (iVar8 == 1) {
      uVar11 = (ulonglong)(param_4 + 2);
      puVar21 = (undefined4 *)(lVar4 + uVar11 * 0x14);
      if (*(char *)(lVar4 + 0x12 + uVar11 * 0x14) == '\x06') goto LAB_143c99c9a;
    }
  }
  uVar20 = local_98;
  if ((*(int *)(lVar5 + 0x14) == 3) && (*(char *)(lVar4 + 0x12 + uVar19 * 0x14) == '\x0f')) {
    uVar16 = (ulonglong)(param_4 + 1);
    if (param_4 + 1 < param_5) {
      pbVar26 = (byte *)(lVar4 + 0x12 + uVar16 * 0x14);
      do {
        if (((pbVar26[-6] >> 5 & 1) != 0) || ((1 << (*pbVar26 & 0x1f) & 0x60U) == 0)) break;
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
        pbVar26 = pbVar26 + 0x14;
      } while (uVar15 < param_5);
    }
    uVar15 = param_4;
    uVar20 = 1;
  }
  goto LAB_143c99d87;
  while( true ) {
    uVar20 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar20;
    pbVar26 = pbVar26 + 0x14;
    if (param_5 <= uVar20) break;
LAB_143c9a120:
    if (((pbVar26[-6] >> 5 & 1) == 0) && ((1 << (*pbVar26 & 0x1f) & 0x80031806U) != 0)) {
      *(undefined1 *)(lVar4 + 0x13 + uVar11 * 0x14) = 0xd;
      break;
    }
  }
  goto LAB_143c9a09a;
  while( true ) {
    uVar25 = (int)uVar12 - 1;
    uVar12 = (ulonglong)uVar25;
    pbVar26 = pbVar26 + -0x14;
    if (uVar25 <= uVar20) break;
LAB_143c9a174:
    if ((((pbVar26[-6] >> 5 & 1) == 0) && ((1 << (*pbVar26 & 0x1f) & 0x80031806U) != 0)) ||
       ((*(int *)(local_90 + 0x94) != 0x4d6c796d && (*pbVar26 == 4)))) break;
  }
LAB_143c9a1ac:
  puVar21 = (undefined4 *)(lVar4 + uVar12 * 0x14);
  if ((*(char *)(lVar4 + 0x12 + uVar12 * 0x14) != '\x04') && (uVar20 < (uint)uVar12)) {
    puVar1 = (undefined4 *)(lVar4 + uVar11 * 0x14);
    local_60._0_4_ = *puVar1;
    local_60._4_4_ = puVar1[1];
    uStack_58 = puVar1[2];
    uStack_54 = puVar1[3];
    uVar3 = *(undefined4 *)(lVar4 + 0x10 + uVar11 * 0x14);
    memmove((void *)(lVar4 + uVar11 * 0x14),(void *)(lVar4 + (ulonglong)(uVar20 + 1) * 0x14),
            (ulonglong)((uint)uVar12 - uVar20) * 0x14);
    *puVar21 = (undefined4)local_60;
    puVar21[1] = local_60._4_4_;
    puVar21[2] = uStack_58;
    puVar21[3] = uStack_54;
    puVar21[4] = uVar3;
  }
  goto LAB_143c9a200;
LAB_143c99e0e:
  if ((uint)uVar11 < param_5) {
    pbVar26 = (byte *)(lVar4 + 0x12 + uVar11 * 0x14);
    do {
      if (((pbVar26[-6] >> 5 & 1) != 0) || ((1 << (*pbVar26 & 0x1f) & 0x60U) == 0)) break;
      uVar15 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar15;
      pbVar26 = pbVar26 + 0x14;
    } while (uVar15 < param_5);
  }
  uVar16 = uVar11;
  uVar15 = param_4;
  uVar20 = 1;
LAB_143c99d87:
  iVar8 = *(int *)(*plVar28 + 0xc);
  uVar14 = (uint)uVar16;
  cVar13 = (char)uVar20;
  if (iVar8 == 0) {
    uVar20 = param_4 + 1;
    uVar15 = param_4;
    if (uVar20 < param_5) {
      uVar16 = (ulonglong)(param_5 - uVar20);
      pbVar26 = (byte *)(lVar4 + 0x12 + (ulonglong)uVar20 * 0x14);
      do {
        if (((pbVar26[-6] >> 5 & 1) == 0) && ((1 << (*pbVar26 & 0x1f) & 0x80031806U) != 0)) {
          pbVar26[1] = 8;
        }
        pbVar26 = pbVar26 + 0x14;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  else if (iVar8 == 1) {
    if (cVar13 == '\0') {
      uVar15 = uVar14;
    }
    if (uVar14 < param_5) {
      pbVar26 = (byte *)(lVar4 + 0x12 + uVar16 * 0x14);
      do {
        uVar25 = (uint)uVar16;
        uVar20 = uVar15;
        if (((((pbVar26[-6] >> 5 & 1) == 0) && ((1 << (*pbVar26 & 0x1f) & 0x80031806U) != 0)) &&
            (uVar20 = uVar25, uVar14 < uVar25)) &&
           (*(char *)(lVar4 + 0x12 + (ulonglong)(uVar25 - 1) * 0x14) == '\x06')) break;
        uVar15 = uVar20;
        uVar16 = (ulonglong)(uVar25 + 1);
        pbVar26 = pbVar26 + 0x14;
      } while (uVar25 + 1 < param_5);
    }
    uVar20 = uVar15 + 1;
    if (uVar20 < param_5) {
      uVar16 = (ulonglong)(param_5 - uVar20);
      pbVar26 = (byte *)(lVar4 + 0x12 + (ulonglong)uVar20 * 0x14);
      do {
        if (((pbVar26[-6] >> 5 & 1) == 0) && ((1 << (*pbVar26 & 0x1f) & 0x80031806U) != 0)) {
          pbVar26[1] = 8;
        }
        pbVar26 = pbVar26 + 0x14;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  else if (iVar8 == 2) {
    uVar16 = (ulonglong)param_5;
    bVar6 = false;
    do {
      iVar8 = (int)uVar16;
      uVar20 = iVar8 - 1;
      uVar16 = (ulonglong)uVar20;
      lVar5 = lVar4 + uVar16 * 0x14;
      if (((*(byte *)(lVar4 + 0xc + uVar16 * 0x14) >> 5 & 1) == 0) &&
         ((1 << (*(byte *)(lVar5 + 0x12) & 0x1f) & 0x80031806U) != 0)) {
        cVar2 = *(char *)(lVar5 + 0x13);
        uVar15 = uVar20;
        if ((cVar2 != '\b') && ((cVar2 != '\v' || (bVar6)))) break;
        if (cVar2 == '\b') {
          bVar6 = true;
        }
      }
      else if ((param_4 < uVar20) &&
              ((*(char *)(lVar5 + 0x12) == '\x06' &&
               (*(char *)(lVar4 + 0x12 + (ulonglong)(iVar8 - 2) * 0x14) == '\x04')))) break;
    } while (uVar14 < uVar20);
  }
  if (((cVar13 != '\0') && (param_4 == uVar15)) && (uVar14 - uVar15 < 3)) {
    cVar13 = '\0';
  }
  if (param_4 < uVar15) {
    uVar16 = (ulonglong)(uVar15 - param_4);
    pbVar26 = (byte *)(lVar4 + 0x13 + uVar19 * 0x14);
    do {
      bVar7 = *pbVar26;
      if (3 < bVar7) {
        bVar7 = 3;
      }
      *pbVar26 = bVar7;
      uVar16 = uVar16 - 1;
      pbVar26 = pbVar26 + 0x14;
    } while (uVar16 != 0);
  }
  if (uVar15 < param_5) {
    *(undefined1 *)(lVar4 + 0x13 + (ulonglong)uVar15 * 0x14) = 4;
  }
  uVar14 = uVar15 + 1;
  uVar16 = (ulonglong)uVar14;
  if (uVar14 < param_5) {
    pcVar10 = (char *)(lVar4 + 0x12 + uVar16 * 0x14);
    uVar11 = uVar16;
    do {
      if (*pcVar10 == '\a') {
        uVar20 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar20;
        if (uVar20 < param_5) {
          pbVar26 = (byte *)(lVar4 + 0x12 + uVar11 * 0x14);
          goto LAB_143c9a120;
        }
        break;
      }
      uVar20 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar20;
      pcVar10 = pcVar10 + 0x14;
    } while (uVar20 < param_5);
  }
LAB_143c9a09a:
  if (cVar13 != '\0') {
    *(undefined1 *)(lVar4 + 0x13 + uVar19 * 0x14) = 1;
  }
  if (((char)plVar28[1] != '\0') && (uVar14 < param_5)) {
    pcVar10 = (char *)(lVar4 + 0x12 + uVar16 * 0x14);
    uVar11 = uVar16;
    do {
      uVar20 = (uint)uVar11;
      if (*pcVar10 == '\x04') {
        uVar12 = (ulonglong)(param_5 - 1);
        if (param_5 - 1 <= uVar20) goto LAB_143c9a1ac;
        pbVar26 = (byte *)(lVar4 + 0x12 + uVar12 * 0x14);
        goto LAB_143c9a174;
      }
      uVar11 = (ulonglong)(uVar20 + 1);
      pcVar10 = pcVar10 + 0x14;
    } while (uVar20 + 1 < param_5);
  }
LAB_143c9a200:
  cVar13 = '\0';
  uVar11 = 1;
  if (param_4 < param_5) {
    pcVar10 = (char *)(lVar4 + 0x13 + uVar19 * 0x14);
    uVar12 = uVar19;
    do {
      uVar20 = (uint)uVar12;
      if ((1 << (pcVar10[-1] & 0x1fU) & 0x80026078U) == 0) {
        if (*pcVar10 != '\x0e') {
          cVar13 = *pcVar10;
        }
      }
      else {
        *pcVar10 = cVar13;
        if ((pcVar10[-1] == 4) && (uVar25 = uVar20, cVar13 == '\x02')) {
          do {
            if (uVar25 <= param_4) goto LAB_143c9a298;
            iVar8 = (int)uVar12;
            uVar25 = iVar8 - 1;
            uVar12 = (ulonglong)uVar25;
          } while (*(char *)(lVar4 + 0x13 + uVar12 * 0x14) == '\x02');
          *pcVar10 = *(char *)(lVar4 + 0x13 + (ulonglong)(iVar8 - 1) * 0x14);
        }
      }
LAB_143c9a298:
      uVar20 = uVar20 + 1;
      uVar12 = (ulonglong)uVar20;
      pcVar10 = pcVar10 + 0x14;
    } while (uVar20 < param_5);
  }
  if (uVar14 < param_5) {
    pbVar26 = (byte *)(lVar4 + 0x12 + uVar16 * 0x14);
    do {
      uVar14 = (uint)uVar16;
      if (((pbVar26[-6] >> 5 & 1) == 0) && ((1 << (*pbVar26 & 0x1f) & 0x80031806U) != 0)) {
        uVar20 = uVar15 + 1;
        uVar15 = uVar14;
        if (uVar20 < uVar14) {
          pbVar22 = (byte *)(lVar4 + 0x13 + (ulonglong)uVar20 * 0x14);
          uVar16 = (ulonglong)(uVar14 - uVar20);
          do {
            if (*pbVar22 < 0xe) {
              *pbVar22 = pbVar26[1];
            }
            pbVar22 = pbVar22 + 0x14;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
      else if (*pbVar26 == 7) {
        uVar15 = uVar14;
      }
      uVar16 = (ulonglong)(uVar14 + 1);
      pbVar26 = pbVar26 + 0x14;
    } while (uVar14 + 1 < param_5);
  }
  puVar21 = (undefined4 *)(lVar4 + uVar19 * 0x14);
  local_80 = (uint)*(byte *)((longlong)puVar21 + 0xf);
  pcVar10 = (char *)((longlong)puVar21 + 0xf);
  uVar16 = uVar19;
  uVar15 = param_4;
  while (uVar15 < param_5) {
    cVar13 = (char)uVar16;
    uVar15 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar15;
    *pcVar10 = cVar13 - (char)param_4;
    pcVar10 = pcVar10 + 0x14;
  }
  uVar15 = param_5 - param_4;
  puVar1 = puVar21;
  local_98 = uVar15;
  local_60 = puVar21;
  if (1 < uVar15) {
    do {
      iVar8 = (int)uVar11;
      if (iVar8 != 0) {
        lVar5 = uVar11 * 5;
        do {
          uVar15 = (int)uVar11 - 1;
          iVar9 = compare_myanmar_order(puVar21 + (ulonglong)uVar15 * 5,puVar21 + lVar5);
          if (iVar9 < 1) break;
          uVar11 = (ulonglong)uVar15;
        } while (uVar15 != 0);
        iVar9 = (int)uVar11;
        uVar15 = local_98;
        if (iVar8 != iVar9) {
          local_70 = puVar1[5];
          uStack_6c = puVar1[6];
          uStack_68 = puVar1[7];
          uStack_64 = puVar1[8];
          uVar3 = puVar1[9];
          _Src = puVar21 + uVar11 * 5;
          memmove(puVar21 + (ulonglong)(iVar9 + 1) * 5,_Src,(ulonglong)(uint)(iVar8 - iVar9) * 0x14)
          ;
          *_Src = local_70;
          _Src[1] = uStack_6c;
          _Src[2] = uStack_68;
          _Src[3] = uStack_64;
          _Src[4] = uVar3;
          uVar15 = local_98;
        }
      }
      uVar11 = (ulonglong)(iVar8 + 1U);
      plVar28 = local_88;
      puVar1 = puVar1 + 5;
    } while (iVar8 + 1U < uVar15);
  }
  puVar21 = local_60;
  lVar5 = local_90;
  uVar16 = (ulonglong)param_5;
  if (param_4 < param_5) {
    pcVar10 = (char *)((longlong)local_60 + 0x13);
    uVar11 = uVar19;
    do {
      uVar16 = uVar11;
      if (*pcVar10 == '\x04') break;
      uVar15 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar15;
      pcVar10 = pcVar10 + 0x14;
      uVar16 = (ulonglong)param_5;
    } while (uVar15 < param_5);
  }
  uVar15 = (uint)uVar16;
  lVar23 = lVar5;
  if (((char)plVar28[1] == '\0') && (param_5 - uVar15 < 0x80)) {
    if (uVar15 < param_5) {
      pbVar26 = (byte *)(lVar4 + 0xf + uVar16 * 0x14);
      do {
        uVar14 = (uint)uVar16;
        if ((*pbVar26 != 0xff) && (uVar20 = *pbVar26 + param_4, uVar11 = uVar16, uVar20 != uVar14))
        {
          do {
            uVar12 = (ulonglong)uVar20;
            if ((uint)uVar11 <= uVar20) {
              uVar11 = uVar12;
            }
            uVar20 = *(byte *)(lVar4 + 0xf + uVar12 * 0x14) + param_4;
            *(undefined1 *)(lVar4 + 0xf + uVar12 * 0x14) = 0xff;
          } while (uVar20 != uVar14);
          if ((uVar14 != (uint)uVar11) && (1 < ((uint)uVar11 + 1) - uVar14)) {
            hb_buffer_t::merge_clusters_impl(lVar5,uVar16);
          }
        }
        uVar16 = (ulonglong)(uVar14 + 1);
        pbVar26 = pbVar26 + 0x14;
        lVar23 = local_90;
        plVar28 = local_88;
      } while (uVar14 + 1 < param_5);
    }
  }
  else if (1 < param_5 - uVar15) {
    hb_buffer_t::merge_clusters_impl(local_90,uVar16,param_5);
  }
  if (param_4 < param_5) {
    uVar16 = (ulonglong)local_98;
    puVar17 = (undefined1 *)((longlong)puVar21 + 0xf);
    do {
      *puVar17 = (char)local_80;
      puVar17 = puVar17 + 0x14;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  if (param_4 < param_5) {
    puVar18 = puVar21 + 1;
    do {
      if (*(char *)((longlong)puVar18 + 0xf) != '\x01') break;
      uVar14 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar14;
      *puVar18 = *puVar18 | *(uint *)(plVar28 + 0xb);
      puVar18 = puVar18 + 5;
    } while (uVar14 < param_5);
  }
  uVar14 = *(uint *)((longlong)plVar28 + 0x6c);
  if (((char)plVar28[1] == '\0') && (*(int *)(*plVar28 + 0x18) == 0)) {
    uVar14 = uVar14 | *(uint *)((longlong)plVar28 + 100);
  }
  if (param_4 < uVar15) {
    puVar18 = puVar21 + 1;
    uVar16 = (ulonglong)(uVar15 - param_4);
    do {
      *puVar18 = *puVar18 | uVar14;
      puVar18 = puVar18 + 5;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar14 = *(uint *)(plVar28 + 0xe);
  uVar24 = uVar15 + 1;
  uVar16 = (ulonglong)uVar24;
  uVar20 = *(uint *)(plVar28 + 0xd);
  uVar25 = *(uint *)((longlong)plVar28 + 100);
  if (uVar24 < param_5) {
    uVar19 = (ulonglong)(param_5 - uVar24);
    puVar18 = (uint *)(lVar4 + (uVar16 * 4 + 1 + (ulonglong)uVar24) * 4);
    do {
      *puVar18 = *puVar18 | uVar14 | uVar20 | uVar25;
      puVar18 = puVar18 + 5;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  if (((char)plVar28[1] != '\0') && (uVar14 = param_4, *(int *)(lVar23 + 0x94) == 0x44657661)) {
    while (uVar20 = uVar14, uVar14 = uVar20 + 1, uVar14 < uVar15) {
      if (((*(char *)(lVar4 + 0x12 + (ulonglong)uVar20 * 0x14) == '\x10') &&
          (*(char *)(lVar4 + 0x12 + (ulonglong)uVar14 * 0x14) == '\x04')) &&
         ((uVar20 + 2 == uVar15 ||
          (*(char *)(lVar4 + 0x12 + (ulonglong)(uVar20 + 2) * 0x14) != '\x06')))) {
        puVar18 = (uint *)(lVar4 + (ulonglong)uVar20 * 0x14 + 4);
        *puVar18 = *puVar18 | *(uint *)((longlong)plVar28 + 100);
        puVar18 = (uint *)(lVar4 + (ulonglong)uVar14 * 0x14 + 4);
        *puVar18 = *puVar18 | *(uint *)((longlong)plVar28 + 100);
      }
    }
  }
  uVar14 = *(uint *)(*plVar28 + 0x1c);
  uVar19 = (ulonglong)uVar14;
  if (((int)plVar28[0xc] != 0) && (uVar14 + uVar15 < param_5)) {
    for (uVar24 = (uVar14 - 1) + uVar24; uVar24 < param_5; uVar24 = uVar24 + 1) {
      uVar15 = 0;
      if (uVar14 != 0) {
        pplVar27 = &local_88;
        do {
          uVar20 = uVar15 + (int)uVar16;
          uVar15 = uVar15 + 1;
          *(undefined4 *)pplVar27 = *(undefined4 *)(lVar4 + (ulonglong)uVar20 * 0x14);
          pplVar27 = (longlong **)((longlong)pplVar27 + 4);
        } while (uVar15 < uVar14);
      }
      uVar11 = 0;
      if ((int)plVar28[5] != 0) {
        do {
          local_a8 = (uint)*(byte *)((longlong)plVar28 + 0x2c);
          iVar8 = hb_ot_layout_lookup_would_substitute_fast
                            (local_78,*(undefined2 *)(plVar28[4] + uVar11 * 8),&local_88);
          if (iVar8 != 0) {
            if (uVar14 != 0) {
              do {
                puVar18 = (uint *)(lVar4 + 4 + uVar16 * 0x14);
                *puVar18 = *puVar18 | *(uint *)(plVar28 + 0xc);
                uVar16 = (ulonglong)((int)uVar16 + 1);
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
            if ((*(int *)((longlong)plVar28 + 0x7c) != 0) && ((uint)uVar16 < param_5)) {
              uVar19 = (ulonglong)(param_5 - (uint)uVar16);
              puVar18 = (uint *)(lVar4 + uVar16 * 0x14 + 4);
              do {
                *puVar18 = *puVar18 | *(uint *)((longlong)plVar28 + 0x7c);
                puVar18 = puVar18 + 5;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
            goto LAB_143c9a740;
          }
          uVar15 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar15;
        } while (uVar15 < *(uint *)(plVar28 + 5));
      }
      uVar16 = (ulonglong)((int)uVar16 + 1);
    }
  }
LAB_143c9a740:
  uVar16 = (ulonglong)(param_4 + 1);
  if (param_4 + 1 < param_5) {
    pbVar26 = (byte *)(lVar4 + 0x12 + uVar16 * 0x14);
    do {
      iVar8 = (int)uVar16;
      if (((pbVar26[-6] >> 5 & 1) == 0) && (bVar7 = *pbVar26, (1 << (bVar7 & 0x1f) & 0x60U) != 0)) {
        do {
          uVar15 = (int)uVar16 - 1;
          uVar16 = (ulonglong)uVar15;
          if (bVar7 == 5) {
            puVar18 = (uint *)(lVar4 + 4 + uVar16 * 0x14);
            *puVar18 = *puVar18 & ~*(uint *)((longlong)plVar28 + 0x6c);
          }
        } while ((param_4 < uVar15) &&
                (((*(byte *)(lVar4 + 0xc + uVar16 * 0x14) >> 5 & 1) != 0 ||
                 ((1 << (*(byte *)(lVar4 + 0x12 + uVar16 * 0x14) & 0x1f) & 0x80031806U) == 0))));
      }
      uVar15 = iVar8 + 1;
      uVar16 = (ulonglong)uVar15;
      pbVar26 = pbVar26 + 0x14;
    } while (uVar15 < param_5);
  }
  return;
}



// FUNCTION 143c9a800 initial_reordering_standalone_cluster body=127 status=ok
// SIG undefined initial_reordering_standalone_cluster(void)

void initial_reordering_standalone_cluster
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               int param_5)

{
  if (DAT_146bc8688 == 0) {
    _hb_options_init();
  }
  if (((DAT_146bc8688 & 2) == 0) ||
     (*(char *)(*(longlong *)(param_3 + 200) + 0x12 + (ulonglong)(param_5 - 1) * 0x14) != '\f')) {
    initial_reordering_consonant_syllable(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 143c9a880 initial_reordering_syllable body=51 status=ok
// SIG undefined initial_reordering_syllable(void)

void initial_reordering_syllable
               (undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(*(longlong *)(param_3 + 200) + 0xf + (ulonglong)param_4 * 0x14);
  uVar2 = bVar1 & 0xf;
  if (uVar2 == 1 || (bVar1 & 0xf) == 0) {
    initial_reordering_consonant_syllable();
    return;
  }
  if ((uVar2 - 2 & 0xfffffffd) != 0) {
    return;
  }
  initial_reordering_standalone_cluster();
  return;
}



// FUNCTION 143c9a8c0 insert_dotted_circles body=730 status=ok
// SIG undefined insert_dotted_circles(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void insert_dotted_circles(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  byte bVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined3 uStack_2c;
  byte bStack_29;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  bVar15 = 0;
  uVar14 = 0;
  if (*(uint *)(param_3 + 0xb8) == 0) {
    return;
  }
  pbVar13 = (byte *)(*(longlong *)(param_3 + 200) + 0xf);
  while ((*pbVar13 & 0xf) != 4) {
    uVar14 = uVar14 + 1;
    pbVar13 = pbVar13 + 0x14;
    if (*(uint *)(param_3 + 0xb8) <= uVar14) {
      return;
    }
  }
  local_58[0] = 0;
  local_68 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x88);
  iVar12 = (**(code **)(*(longlong *)(param_2 + 0x98) + 0x168))
                     (param_2,*(undefined8 *)(param_2 + 0xa0),0x25cc,local_58);
  if (iVar12 == 0) {
    return;
  }
  local_50 = 0x25cc;
  uStack_4c = 0;
  uStack_44 = 0;
  set_indic_properties(&local_50);
  local_50 = local_58[0];
  hb_buffer_t::clear_output(param_3);
  *(undefined4 *)(param_3 + 0xb4) = 0;
  if (*(int *)(param_3 + 0xb8) != 0) {
    uVar10 = uStack_44._4_4_;
    do {
      if (*(char *)(param_3 + 0xb0) != '\0') break;
      uVar14 = *(uint *)(param_3 + 0xb4);
      lVar6 = *(longlong *)(param_3 + 200);
      bVar4 = *(byte *)(lVar6 + 0xf + (ulonglong)uVar14 * 0x14);
      lVar1 = lVar6 + (ulonglong)uVar14 * 0x14;
      if ((bVar15 == bVar4) || ((bVar4 & 0xf) != 4)) {
        if (*(char *)(param_3 + 0xb1) != '\0') {
          if ((*(longlong *)(param_3 + 0xd0) != lVar6) || (*(uint *)(param_3 + 0xbc) != uVar14)) {
            cVar11 = hb_buffer_t::make_room_for(param_3,1,1);
            if (cVar11 == '\0') goto LAB_143c9ab5f;
            uVar14 = *(uint *)(param_3 + 0xb4);
            lVar1 = *(longlong *)(param_3 + 200);
            uVar5 = *(uint *)(param_3 + 0xbc);
            puVar2 = (undefined4 *)(lVar1 + (ulonglong)uVar14 * 0x14);
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            lVar6 = *(longlong *)(param_3 + 0xd0);
            puVar3 = (undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14);
            *puVar3 = *puVar2;
            puVar3[1] = uVar7;
            puVar3[2] = uVar8;
            puVar3[3] = uVar9;
            *(undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar1 + 0x10 + (ulonglong)uVar14 * 0x14);
          }
          *(int *)(param_3 + 0xbc) = *(int *)(param_3 + 0xbc) + 1;
        }
        *(int *)(param_3 + 0xb4) = *(int *)(param_3 + 0xb4) + 1;
      }
      else {
        local_28 = uVar10;
        local_38 = local_50;
        uStack_30 = *(undefined4 *)(lVar1 + 8);
        uStack_34 = *(undefined4 *)(lVar1 + 4);
        _uStack_2c = CONCAT13(bVar4,(int3)uStack_44);
        if (uVar14 < *(uint *)(param_3 + 0xb8)) {
          while (*(char *)(param_3 + 0xb0) == '\0') {
            uVar14 = *(uint *)(param_3 + 0xb4);
            lVar1 = *(longlong *)(param_3 + 200);
            if ((bVar4 != *(byte *)(lVar1 + 0xf + (ulonglong)uVar14 * 0x14)) ||
               (*(char *)(lVar1 + (ulonglong)uVar14 * 0x14 + 0x12) != '\x0f')) break;
            if (*(char *)(param_3 + 0xb1) == '\0') {
LAB_143c9aac6:
              *(int *)(param_3 + 0xb4) = *(int *)(param_3 + 0xb4) + 1;
            }
            else {
              if ((*(longlong *)(param_3 + 0xd0) == lVar1) && (*(uint *)(param_3 + 0xbc) == uVar14))
              {
LAB_143c9aac0:
                *(int *)(param_3 + 0xbc) = *(int *)(param_3 + 0xbc) + 1;
                goto LAB_143c9aac6;
              }
              cVar11 = hb_buffer_t::make_room_for(param_3,1,1);
              if (cVar11 != '\0') {
                uVar14 = *(uint *)(param_3 + 0xb4);
                lVar1 = *(longlong *)(param_3 + 200);
                uVar5 = *(uint *)(param_3 + 0xbc);
                puVar2 = (undefined4 *)(lVar1 + (ulonglong)uVar14 * 0x14);
                uVar7 = puVar2[1];
                uVar8 = puVar2[2];
                uVar9 = puVar2[3];
                lVar6 = *(longlong *)(param_3 + 0xd0);
                puVar3 = (undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar3[2] = uVar8;
                puVar3[3] = uVar9;
                *(undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14 + 0x10) =
                     *(undefined4 *)(lVar1 + 0x10 + (ulonglong)uVar14 * 0x14);
                goto LAB_143c9aac0;
              }
            }
            if (*(uint *)(param_3 + 0xb8) <= *(uint *)(param_3 + 0xb4)) break;
          }
        }
        hb_buffer_t::output_info(param_3,&local_38);
        bVar15 = bVar4;
      }
LAB_143c9ab5f:
    } while (*(uint *)(param_3 + 0xb4) < *(uint *)(param_3 + 0xb8));
  }
  hb_buffer_t::swap_buffers(param_3);
  return;
}



// FUNCTION 143c9aba0 matra_position body=449 status=ok
// SIG undefined matra_position(void)

int matra_position(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 3) {
    return 2;
  }
  if (param_2 == 6) {
    uVar1 = param_1 & 0xffffff80;
    if (uVar1 == 0x900) {
      return 9;
    }
    if (uVar1 == 0xa00) {
      return 0xc;
    }
    if (uVar1 == 0xa80) {
      return 9;
    }
    if (uVar1 == 0xb00) {
      return 5;
    }
    if (uVar1 == 0xb80) {
      return 9;
    }
    if ((uVar1 == 0xc00) || (uVar1 == 0xc80)) {
      return 7;
    }
  }
  else {
    if (param_2 != 8) {
      if (param_2 != 0xb) {
        return param_2;
      }
      uVar1 = param_1 & 0xffffff80;
      if (uVar1 == 0x900) {
        return 9;
      }
      if ((((uVar1 != 0x980) && (uVar1 != 0xa00)) && (uVar1 != 0xa80)) &&
         ((uVar1 != 0xb00 && (uVar1 != 0xb80)))) {
        if (uVar1 == 0xc00) {
          iVar2 = 9;
          if (param_1 < 0xc43) {
            iVar2 = 7;
          }
          return iVar2;
        }
        if (uVar1 == 0xc80) {
          iVar2 = 7;
          if (param_1 - 0xcc3 < 0x14) {
            iVar2 = 9;
          }
          return iVar2;
        }
        if (uVar1 != 0xd00) {
          if (uVar1 == 0xd80) {
            return 9;
          }
          iVar2 = 9;
          if (uVar1 == 0x1780) {
            iVar2 = 0xc;
          }
          return iVar2;
        }
      }
      return 0xc;
    }
    uVar1 = param_1 & 0xffffff80;
    if (uVar1 == 0x900) {
      return 9;
    }
    if (uVar1 == 0x980) {
      return 9;
    }
    if ((uVar1 == 0xa00) || (uVar1 == 0xa80)) {
      return 0xc;
    }
    if (uVar1 == 0xb00) {
      return 9;
    }
    if (uVar1 == 0xb80) {
      return 0xc;
    }
    if (uVar1 == 0xc00) {
      return 7;
    }
    if (uVar1 == 0xc80) {
      return 7;
    }
    if (uVar1 == 0xd00) {
      return 0xc;
    }
  }
  if ((param_1 & 0xffffff80) == 0xd80) {
    return 9;
  }
  iVar2 = 9;
  if ((param_1 & 0xffffff80) == 0x1780) {
    iVar2 = 0xc;
  }
  return iVar2;
}



// FUNCTION 143c9ad70 set_indic_properties body=421 status=ok
// SIG undefined set_indic_properties(void)

void set_indic_properties(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  ushort uVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  ushort uVar7;
  undefined1 uVar8;
  
  iVar1 = *param_1;
  uVar3 = FUN_143c9cfa0(iVar1);
  uVar7 = uVar3 & 0x7f;
  uVar2 = (undefined1)(uVar3 >> 8);
  uVar8 = 7;
  if (iVar1 - 0x953U < 2) {
    uVar7 = 8;
  }
  else if ((iVar1 - 0xa72U < 2) || (iVar1 - 0x1cf5U < 2)) {
    uVar7 = 1;
  }
  else if (iVar1 - 0x1ce2U < 7) {
    uVar7 = 10;
  }
  else if (iVar1 == 0x1ced) {
    uVar7 = 10;
  }
  else if (((iVar1 - 0xa8f2U < 6) || (iVar1 - 0x1ce9U < 4)) || (iVar1 - 0x1ceeU < 4)) {
    uVar7 = 0x12;
  }
  else if (iVar1 == 0x17dd) {
    uVar7 = 7;
    uVar2 = 6;
  }
  else if (iVar1 == 0x17c6) {
    uVar7 = 3;
  }
  else if (iVar1 - 0x2010U < 2) {
    uVar7 = 0xb;
  }
  else if (iVar1 == 0x25cc) {
    uVar7 = 0xc;
  }
  else if (iVar1 == 0xa982) {
    uVar7 = 8;
  }
  else if (iVar1 == 0xa9be) {
    uVar7 = 0x1f;
  }
  else if (iVar1 == 0xa9bd) {
    uVar7 = 7;
    uVar2 = 0xb;
  }
  bVar5 = (byte)uVar7;
  uVar6 = 1 << (bVar5 & 0x1f);
  if ((uVar6 & 0x80031806) == 0) {
    if (uVar7 == 7) {
      uVar8 = 7;
      uVar2 = matra_position(iVar1);
    }
    else if ((uVar6 & 0x40700) != 0) {
      uVar2 = 0xe;
    }
  }
  else {
    uVar2 = 4;
    piVar4 = &DAT_145d3bc30;
    uVar6 = 0;
    do {
      if (iVar1 == *piVar4) {
        bVar5 = 0x10;
        break;
      }
      uVar6 = uVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar6 < 0xc);
  }
  *(byte *)((longlong)param_1 + 0x12) = bVar5;
  if (iVar1 == 0xb01) {
    uVar2 = uVar8;
  }
  *(undefined1 *)((longlong)param_1 + 0x13) = uVar2;
  return;
}



// FUNCTION 143c9af30 update_consonant_positions body=213 status=ok
// SIG undefined update_consonant_positions(void)

void update_consonant_positions(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  ulonglong uVar6;
  int iVar7;
  int local_res8 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x428);
  if (*(int *)(*plVar1 + 0xc) == 2) {
    iVar7 = *(int *)((longlong)plVar1 + 0xc);
    local_res8[0] = iVar7;
    if (iVar7 == -1) {
      iVar4 = *(int *)(*plVar1 + 8);
      iVar7 = 0;
      if (iVar4 != 0) {
        local_res8[0] = 0;
        iVar4 = (**(code **)(*(longlong *)(param_2 + 0x98) + 0x168))
                          (param_2,*(undefined8 *)(param_2 + 0xa0),iVar4,local_res8,
                           *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x88));
        if (iVar4 != 0) {
          iVar7 = local_res8[0];
        }
      }
      *(int *)((longlong)plVar1 + 0xc) = iVar7;
    }
    if (iVar7 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x80);
      if (*(uint *)(param_3 + 0xb8) != 0) {
        pcVar5 = (char *)(*(longlong *)(param_3 + 200) + 0x13);
        uVar6 = (ulonglong)*(uint *)(param_3 + 0xb8);
        do {
          if (*pcVar5 == '\x04') {
            cVar3 = consonant_position_from_face(plVar1,*(undefined4 *)(pcVar5 + -0x13),iVar7,uVar2)
            ;
            *pcVar5 = cVar3;
          }
          pcVar5 = pcVar5 + 0x14;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
  }
  return;
}



// FUNCTION 143c9b010 would_substitute body=123 status=ok
// SIG undefined would_substitute(void)

undefined8
would_substitute_feature_t::would_substitute
          (longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if ((int)param_1[1] != 0) {
    do {
      iVar1 = hb_ot_layout_lookup_would_substitute_fast
                        (param_4,*(undefined2 *)(*param_1 + uVar3 * 8),param_2,param_3,
                         *(undefined1 *)((longlong)param_1 + 0xc));
      if (iVar1 != 0) {
        return 1;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 1));
  }
  return 0;
}



// FUNCTION 143c9b090 preprocess_text_thai body=507 status=ok
// SIG undefined preprocess_text_thai(void)

void preprocess_text_thai(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  int local_res10;
  int local_res14;
  
  hb_buffer_t::clear_output(param_2);
  uVar4 = *(uint *)(param_2 + 0xb8);
  *(undefined4 *)(param_2 + 0xb4) = 0;
  if (uVar4 != 0) {
    do {
      if (*(char *)(param_2 + 0xb0) != '\0') break;
      uVar5 = *(uint *)(*(longlong *)(param_2 + 200) + (ulonglong)*(uint *)(param_2 + 0xb4) * 0x14);
      if ((uVar5 & 0xffffff7f) == 0xe33) {
        local_res10 = uVar5 + 0x1a;
        local_res14 = uVar5 - 1;
        hb_buffer_t::replace_glyphs(param_2,1,2,&local_res10);
        if (*(char *)(param_2 + 0xb0) != '\0') {
          return;
        }
        uVar5 = *(uint *)(param_2 + 0xbc);
        lVar7 = *(longlong *)(param_2 + 0xd0);
        uVar15 = (ulonglong)(uVar5 - 2);
        lVar2 = uVar15 * 0x14;
        puVar3 = (ushort *)(lVar2 + 0x10 + lVar7);
        *puVar3 = *puVar3 & 0xe0;
        puVar3 = (ushort *)(lVar2 + 0x10 + lVar7);
        *puVar3 = *puVar3 | 0xc;
        if (uVar5 - 2 != 0) {
          do {
            uVar14 = (int)uVar15 - 1;
            uVar13 = *(uint *)(*(longlong *)(param_2 + 0xd0) + (ulonglong)uVar14 * 0x14) &
                     0xffffff7f;
            if (((3 < uVar13 - 0xe34) && (7 < uVar13 - 0xe47)) && (uVar13 != 0xe31)) break;
            uVar15 = (ulonglong)uVar14;
          } while (uVar14 != 0);
        }
        iVar8 = (int)uVar15;
        if (iVar8 + 2U < uVar5) {
          hb_buffer_t::merge_out_clusters(param_2,uVar15,uVar5);
          lVar7 = *(longlong *)(param_2 + 0xd0);
          puVar1 = (undefined4 *)(lVar7 + lVar2);
          uVar9 = *puVar1;
          uVar10 = puVar1[1];
          uVar11 = puVar1[2];
          uVar12 = puVar1[3];
          uVar6 = *(undefined4 *)(lVar7 + 0x10 + lVar2);
          lVar2 = uVar15 * 0x14;
          memmove((void *)(lVar7 + lVar2 + 0x14),(void *)(lVar7 + lVar2),
                  (ulonglong)((uVar5 - iVar8) - 2) * 0x14);
          lVar7 = *(longlong *)(param_2 + 0xd0);
          puVar1 = (undefined4 *)(lVar7 + lVar2);
          *puVar1 = uVar9;
          puVar1[1] = uVar10;
          puVar1[2] = uVar11;
          puVar1[3] = uVar12;
          *(undefined4 *)(lVar7 + 0x10 + lVar2) = uVar6;
        }
        else if ((iVar8 != 0) && (*(int *)(param_2 + 0x7c) == 0)) {
          hb_buffer_t::merge_out_clusters(param_2,iVar8 + -1,uVar5);
        }
      }
      else {
        hb_buffer_t::next_glyph();
      }
    } while (*(uint *)(param_2 + 0xb4) < uVar4);
  }
  hb_buffer_t::swap_buffers(param_2);
  if ((*(int *)(param_1 + 4) == 0x54686169) && (*(char *)(param_1 + 0x30) == '\0')) {
    FUN_143c9b290(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 143c9b290 FUN_143c9b290 body=300 status=ok
// SIG undefined FUN_143c9b290(void)

void FUN_143c9b290(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  IMAGE_DOS_HEADER *pIVar13;
  int iVar14;
  
  puVar4 = *(uint **)(param_2 + 200);
  uVar9 = 0;
  uVar3 = *(uint *)(param_2 + 0xb8);
  uVar10 = 0;
  if (uVar3 != 0) {
    pIVar13 = &IMAGE_DOS_HEADER_140000000;
    puVar8 = puVar4;
    puVar12 = puVar4;
    iVar14 = DAT_146832ca0;
    iVar6 = DAT_146832cb8;
    do {
      uVar11 = (ulonglong)*puVar8;
      iVar5 = get_mark_type(uVar11);
      if (iVar5 == 3) {
        iVar6 = get_consonant_type(uVar11 & 0xffffffff);
        iVar14 = *(int *)(pIVar13[0x32853].e_program + (longlong)iVar6 * 4 + 0x120);
        iVar6 = *(int *)(pIVar13[0x32853].e_program + (longlong)iVar6 * 4 + 0x138);
        uVar9 = uVar10;
      }
      else {
        lVar2 = ((longlong)iVar5 + (longlong)iVar14 * 3) * 8;
        iVar14 = *(int *)(pIVar13[0x2d36c].e_program + lVar2 + 0x14);
        lVar1 = (longlong)iVar5 + (longlong)iVar6 * 3;
        iVar5 = *(int *)(pIVar13[0x2d36c].e_program + lVar2 + 0x10);
        iVar6 = *(int *)(pIVar13[0x2d36c].e_program + lVar1 * 8 + 0x74);
        if (iVar5 == 0) {
          iVar5 = *(int *)(pIVar13[0x2d36c].e_program + lVar1 * 8 + 0x70);
        }
        if (iVar5 == 4) {
          uVar7 = thai_pua_shape(puVar12[(ulonglong)uVar9 * 5],4,param_3);
          puVar12[(ulonglong)uVar9 * 5] = uVar7;
        }
        else {
          uVar7 = thai_pua_shape(uVar11 & 0xffffffff,iVar5,param_3);
          *puVar8 = uVar7;
        }
        pIVar13 = &IMAGE_DOS_HEADER_140000000;
        puVar12 = puVar4;
      }
      uVar10 = uVar10 + 1;
      puVar8 = puVar8 + 5;
    } while (uVar10 < uVar3);
  }
  return;
}



// FUNCTION 143c9b3c0 get_consonant_type body=86 status=ok
// SIG undefined get_consonant_type(void)

undefined8 get_consonant_type(int param_1)

{
  undefined8 uVar1;
  
  if (((param_1 - 0xe1bU & 0xfffffff9) == 0) && (param_1 != 0xe21)) {
    return 1;
  }
  if ((param_1 != 0xe0d) && (param_1 != 0xe10)) {
    if (1 < param_1 - 0xe0eU) {
      uVar1 = 4;
      if (param_1 - 0xe01U < 0x2e) {
        uVar1 = 0;
      }
      return uVar1;
    }
    return 3;
  }
  return 2;
}



// FUNCTION 143c9b420 get_mark_type body=76 status=ok
// SIG undefined get_mark_type(void)

char get_mark_type(int param_1)

{
  if ((((param_1 != 0xe31) && (3 < param_1 - 0xe34U)) && (param_1 != 0xe47)) &&
     (1 < param_1 - 0xe4dU)) {
    if (param_1 - 0xe38U < 3) {
      return '\x01';
    }
    return (4 < param_1 - 0xe48U) + '\x02';
  }
  return '\0';
}



// FUNCTION 143c9b470 thai_pua_shape body=251 status=ok
// SIG undefined thai_pua_shape(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thai_pua_shape(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 local_res10 [8];
  
  piVar2 = (int *)0x0;
  if (param_2 == 0) {
    return param_1;
  }
  if (param_2 == 1) {
    piVar2 = &DAT_145d40fc0;
  }
  else if (param_2 == 2) {
    piVar2 = &DAT_145d41080;
  }
  else if (param_2 == 3) {
    piVar2 = &DAT_145d41030;
  }
  else if (param_2 == 4) {
    piVar2 = &DAT_145d41120;
  }
  else if (_DAT_00000000 == 0) {
    return param_1;
  }
  iVar1 = *piVar2;
  while (iVar1 != param_1) {
    iVar1 = piVar2[3];
    piVar2 = piVar2 + 3;
    if (iVar1 == 0) {
      return param_1;
    }
  }
  iVar1 = hb_font_get_glyph(param_3,piVar2[1],0,local_res10);
  if (iVar1 == 0) {
    iVar1 = hb_font_get_glyph(param_3,piVar2[2],0,local_res10);
    if (iVar1 == 0) {
      return param_1;
    }
    return piVar2[2];
  }
  return piVar2[1];
}



// FUNCTION 143c9b570 collect_features_tibetan body=61 status=ok
// SIG undefined collect_features_tibetan(void)

void collect_features_tibetan(longlong param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_145d411b0;
  do {
    if (*piVar1 == 0) {
      return;
    }
    hb_ot_map_builder_t::add_feature(param_1 + 0x30,*piVar1,1);
    piVar1 = piVar1 + 1;
  } while (piVar1 != (int *)0x0);
  return;
}



// FUNCTION 143c9b5b0 compose_use body=143 status=ok
// SIG undefined compose_use(void)

bool compose_use(longlong param_1,ulonglong param_2,int param_3,int *param_4)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  bVar2 = (**(code **)(lVar1 + 0x90))(lVar1,param_2,*(undefined8 *)(lVar1 + 0xd0));
  if ((1 << (bVar2 & 0x1f) & 0x1c00U) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    iVar3 = 0 << (bVar2 & 0x1f);
    *param_4 = iVar3;
    if (((int)param_2 != 0) && (param_3 != 0)) {
      iVar3 = (**(code **)(lVar1 + 0xa8))
                        (lVar1,param_2 & 0xffffffff,param_3,param_4,*(undefined8 *)(lVar1 + 0xe8));
    }
    bVar4 = iVar3 != 0;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



// FUNCTION 143c9b640 collect_features_use body=435 status=ok
// SIG undefined collect_features_use(void)

void collect_features_use(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  
  param_1 = param_1 + 0x30;
  hb_ot_map_builder_t::add_pause(param_1,0,setup_syllables);
  hb_ot_map_builder_t::add_feature(param_1,0x6c6f636c,1);
  hb_ot_map_builder_t::add_feature(param_1,0x63636d70,1);
  hb_ot_map_builder_t::add_feature(param_1,0x6e756b74,1);
  hb_ot_map_builder_t::add_feature(param_1,0x616b686e,1);
  hb_ot_map_builder_t::add_pause(param_1,0,&LAB_143c9b930);
  hb_ot_map_builder_t::add_feature(param_1,0x72706866,1);
  hb_ot_map_builder_t::add_pause(param_1,0,record_rphf);
  hb_ot_map_builder_t::add_pause(param_1,0,&LAB_143c9b930);
  hb_ot_map_builder_t::add_feature(param_1,0x70726566,1);
  hb_ot_map_builder_t::add_pause(param_1,0,record_pref);
  lVar2 = 7;
  pcVar3 = "frkrfvbafwlbflahftsputavtcjc";
  lVar1 = 7;
  do {
    hb_ot_map_builder_t::add_feature(param_1,*(undefined4 *)pcVar3,1);
    pcVar3 = pcVar3 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  hb_ot_map_builder_t::add_pause(param_1,0,reorder);
  pcVar3 = "lositiniidemanif2dem2nif3nif";
  do {
    hb_ot_map_builder_t::add_feature(param_1,*(undefined4 *)pcVar3,1);
    pcVar3 = pcVar3 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  hb_ot_map_builder_t::add_pause(param_1,0,0);
  pcVar3 = "svbaswlbnlahserpstsptsidmvbamwlb";
  lVar1 = 8;
  do {
    hb_ot_map_builder_t::add_feature(param_1,*(undefined4 *)pcVar3,1);
    pcVar3 = pcVar3 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 143c9b800 data_create_use body=153 status=ok
// SIG undefined data_create_use(void)

undefined4 * data_create_use(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  longlong lVar5;
  undefined4 local_res10 [6];
  
  puVar3 = (undefined4 *)HarfBuzzCalloc(1);
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  local_res10[0] = 0x72706866;
  pvVar4 = bsearch(local_res10,*(void **)(param_1 + 0x40),(ulonglong)*(uint *)(param_1 + 0x38),0x24,
                   (_PtFuncCompare *)&LAB_143c7bc50);
  uVar2 = 0;
  if (pvVar4 != (void *)0x0) {
    uVar2 = *(undefined4 *)((longlong)pvVar4 + 0x1c);
  }
  *puVar3 = uVar2;
  cVar1 = has_arabic_joining(*(undefined4 *)(param_1 + 4));
  if (cVar1 != '\0') {
    lVar5 = data_create_arabic(param_1);
    *(longlong *)(puVar3 + 2) = lVar5;
    if (lVar5 == 0) {
      FMemory::operator_delete(puVar3);
      return (undefined4 *)0x0;
    }
  }
  return puVar3;
}



// FUNCTION 143c9b8a0 data_destroy_use body=36 status=ok
// SIG undefined data_destroy_use(void)

void data_destroy_use(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    data_destroy_arabic();
  }
  FMemory::operator_delete(param_1);
  return;
}



// FUNCTION 143c9b8d0 setup_masks_use body=95 status=ok
// SIG undefined setup_masks_use(void)

void setup_masks_use(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x428) + 8);
  if (lVar1 != 0) {
    setup_masks_arabic_plan(lVar1,param_2,*(undefined4 *)(param_1 + 4));
  }
  puVar3 = *(undefined4 **)(param_2 + 200);
  if (*(uint *)(param_2 + 0xb8) != 0) {
    uVar4 = (ulonglong)*(uint *)(param_2 + 0xb8);
    do {
      uVar2 = FUN_143c9d220(*puVar3);
      *(undefined1 *)((longlong)puVar3 + 0x12) = uVar2;
      puVar3 = puVar3 + 5;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 143c9b960 FUN_143c9b960 body=1437 status=ok
// SIG undefined FUN_143c9b960(void)

void FUN_143c9b960(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char cVar14;
  int iVar15;
  
  uVar2 = *(uint *)(param_1 + 0xb8);
  lVar3 = *(longlong *)(param_1 + 200);
  iVar15 = 3;
  uVar12 = 0;
  bVar4 = false;
  uVar10 = 0;
  uVar9 = 0;
  iVar13 = 1;
  if (uVar2 != 0) goto LAB_143c9be79;
LAB_143c9b9c3:
  if (*(short *)(&DAT_145d41bc0 + (longlong)iVar15 * 2) < 1) {
    return;
  }
  iVar6 = *(short *)(&DAT_145d41bc0 + (longlong)iVar15 * 2) + -1;
  do {
    uVar11 = (uint)uVar10;
    iVar15 = (int)(char)(&DAT_145d41ad0)[iVar6];
    if ((&DAT_145d41b20)[iVar6] == '\0') goto switchD_143c9ba14_caseD_5;
    cVar14 = (char)iVar13;
    switch((&DAT_145d41b20)[iVar6]) {
    case 1:
      uVar5 = uVar12 - 1;
      if (uVar9 < uVar12) {
        pbVar8 = (byte *)(lVar3 + 0xf + (ulonglong)uVar9 * 0x14);
        uVar10 = (ulonglong)(uVar12 - uVar9);
        do {
          *pbVar8 = cVar14 << 4 | 5;
          pbVar8 = pbVar8 + 0x14;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      break;
    case 2:
      goto switchD_143c9ba14_caseD_2;
    case 3:
      if (bVar4) {
        if (bVar4) {
          uVar5 = uVar12 - 1;
          if (uVar9 < uVar12) {
            pbVar8 = (byte *)(lVar3 + 0xf + (ulonglong)uVar9 * 0x14);
            uVar10 = (ulonglong)(uVar12 - uVar9);
            do {
              *pbVar8 = cVar14 << 4 | 7;
              pbVar8 = pbVar8 + 0x14;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          break;
        }
      }
      else {
        iVar15 = 0;
      }
      goto switchD_143c9ba14_caseD_5;
    case 4:
      bVar4 = true;
      goto switchD_143c9ba14_caseD_2;
    default:
      goto switchD_143c9ba14_caseD_5;
    case 7:
      if (uVar9 < uVar11 + 1) {
        pbVar8 = (byte *)(lVar3 + 0xf + (ulonglong)uVar9 * 0x14);
        uVar10 = (ulonglong)((uVar11 + 1) - uVar9);
        do {
          *pbVar8 = cVar14 << 4 | 7;
          pbVar8 = pbVar8 + 0x14;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      goto LAB_143c9ba54;
    case 8:
      uVar12 = uVar11;
      uVar5 = uVar11 - 1;
      if (uVar9 < uVar11) {
        pcVar7 = (char *)((ulonglong)uVar9 * 0x14 + 0xf + lVar3);
        uVar10 = (ulonglong)(uVar11 - uVar9);
        do {
          *pcVar7 = cVar14 << 4;
          pcVar7 = pcVar7 + 0x14;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      break;
    case 9:
      if (uVar9 < uVar11 + 1) {
        pcVar7 = (char *)(lVar3 + 0xf + (ulonglong)uVar9 * 0x14);
        uVar10 = (ulonglong)((uVar11 + 1) - uVar9);
        do {
          *pcVar7 = cVar14 << 4;
          pcVar7 = pcVar7 + 0x14;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      goto LAB_143c9ba54;
    case 10:
      uVar12 = uVar11;
      uVar5 = uVar11 - 1;
      if (uVar9 < uVar11) {
        pbVar8 = (byte *)(lVar3 + 0xf + (ulonglong)uVar9 * 0x14);
        uVar10 = (ulonglong)(uVar11 - uVar9);
        do {
          *pbVar8 = cVar14 << 4 | 2;
          pbVar8 = pbVar8 + 0x14;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      break;
    case 0xb:
      if (uVar9 < uVar11 + 1) {
        pbVar8 = (byte *)(lVar3 + 0xf + (ulonglong)uVar9 * 0x14);
        uVar10 = (ulonglong)((uVar11 + 1) - uVar9);
        do {
          *pbVar8 = cVar14 << 4 | 2;
          pbVar8 = pbVar8 + 0x14;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      goto LAB_143c9ba54;
    case 0xc:
      uVar12 = uVar11;
      uVar5 = uVar11 - 1;
      if (uVar9 < uVar11) {
        pbVar8 = (byte *)(lVar3 + 0xf + (ulonglong)uVar9 * 0x14);
        uVar10 = (ulonglong)(uVar11 - uVar9);
        do {
          *pbVar8 = cVar14 << 4 | 1;
          pbVar8 = pbVar8 + 0x14;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      break;
    case 0xd:
      uVar12 = uVar11;
      uVar5 = uVar11 - 1;
      if (uVar9 < uVar11) {
        pbVar8 = (byte *)(lVar3 + 0xf + (ulonglong)uVar9 * 0x14);
        uVar10 = (ulonglong)(uVar11 - uVar9);
        do {
          *pbVar8 = cVar14 << 4 | 3;
          pbVar8 = pbVar8 + 0x14;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      break;
    case 0xe:
      if (uVar9 < uVar11 + 1) {
        pbVar8 = (byte *)(lVar3 + 0xf + (ulonglong)uVar9 * 0x14);
        uVar10 = (ulonglong)((uVar11 + 1) - uVar9);
        do {
          *pbVar8 = cVar14 << 4 | 3;
          pbVar8 = pbVar8 + 0x14;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      goto LAB_143c9ba54;
    case 0xf:
      uVar12 = uVar11;
      uVar5 = uVar11 - 1;
      if (uVar9 < uVar11) {
        pbVar8 = (byte *)(lVar3 + 0xf + (ulonglong)uVar9 * 0x14);
        uVar10 = (ulonglong)(uVar11 - uVar9);
        do {
          *pbVar8 = cVar14 << 4 | 5;
          pbVar8 = pbVar8 + 0x14;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      break;
    case 0x10:
      if (uVar9 < uVar11 + 1) {
        pbVar8 = (byte *)(lVar3 + 0xf + (ulonglong)uVar9 * 0x14);
        uVar10 = (ulonglong)((uVar11 + 1) - uVar9);
        do {
          *pbVar8 = cVar14 << 4 | 4;
          pbVar8 = pbVar8 + 0x14;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
LAB_143c9ba54:
      uVar12 = uVar11 + 1;
      uVar5 = uVar11;
      break;
    case 0x11:
      uVar12 = uVar11;
      uVar5 = uVar11 - 1;
      if (uVar9 < uVar11) {
        pbVar8 = (byte *)(lVar3 + 0xf + (ulonglong)uVar9 * 0x14);
        uVar10 = (ulonglong)(uVar11 - uVar9);
        do {
          *pbVar8 = cVar14 << 4 | 7;
          pbVar8 = pbVar8 + 0x14;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      break;
    case 0x12:
      uVar12 = uVar11;
      uVar5 = uVar11 - 1;
      if (uVar9 < uVar11) {
        pbVar8 = (byte *)(lVar3 + 0xf + (ulonglong)uVar9 * 0x14);
        uVar10 = (ulonglong)(uVar11 - uVar9);
        do {
          *pbVar8 = cVar14 << 4 | 6;
          pbVar8 = pbVar8 + 0x14;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    uVar11 = uVar5;
    iVar13 = iVar13 + 1;
    uVar9 = uVar12;
    if (iVar13 == 0x10) {
      iVar13 = 1;
    }
switchD_143c9ba14_caseD_5:
    if ((&DAT_145d41b70)[iVar15] == '\x05') {
      bVar4 = false;
    }
    if (iVar15 == 0) {
      return;
    }
    uVar10 = (ulonglong)(uVar11 + 1);
    if (uVar11 + 1 == uVar2) goto LAB_143c9b9c3;
LAB_143c9be79:
    iVar6 = (int)(char)(&DAT_145d419f0)[iVar15];
    if ('\0' < (char)(&DAT_145d419f0)[iVar15]) {
      bVar1 = *(byte *)(lVar3 + 0x12 + uVar10 * 0x14);
      if (((byte)"svbaswlbnlahserpstsptsidmvbamwlb"[(longlong)(iVar15 * 2) + 0x20] <= bVar1) &&
         (bVar1 <= (byte)(&DAT_145d41291)[iVar15 * 2])) {
        iVar6 = (uint)bVar1 -
                (uint)(byte)"svbaswlbnlahserpstsptsidmvbamwlb"[(longlong)(iVar15 * 2) + 0x20];
      }
    }
    iVar6 = (int)(char)(&DAT_145d41320)
                       [(longlong)iVar6 +
                        (longlong)*(short *)(&DAT_145d41a40 + (longlong)iVar15 * 2)];
  } while( true );
switchD_143c9ba14_caseD_2:
  uVar12 = uVar11 + 1;
  goto switchD_143c9ba14_caseD_5;
}



// FUNCTION 143c9bf50 has_arabic_joining body=69 status=ok
// SIG undefined has_arabic_joining(void)

undefined1 has_arabic_joining(int param_1)

{
  bool bVar1;
  
  if (param_1 < 0x4e6b6f70) {
    if (param_1 == 0x4e6b6f6f) {
      return 1;
    }
    if (param_1 == 0x41726162) {
      return 1;
    }
    if (param_1 == 0x4d616e64) {
      return 1;
    }
    if (param_1 == 0x4d616e69) {
      return 1;
    }
    bVar1 = param_1 == 0x4d6f6e67;
  }
  else {
    if (param_1 == 0x50686167) {
      return 1;
    }
    if (param_1 == 0x50686c70) {
      return 1;
    }
    bVar1 = param_1 == 0x53797263;
  }
  if (bVar1) {
    return 1;
  }
  return 0;
}



// FUNCTION 143c9bfa0 insert_dotted_circles body=700 status=ok
// SIG undefined insert_dotted_circles(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void insert_dotted_circles(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  char cVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  byte bVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined3 uStack_24;
  byte bStack_21;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  bVar15 = 0;
  uVar14 = 0;
  if (*(uint *)(param_3 + 0xb8) == 0) {
    return;
  }
  pbVar13 = (byte *)(*(longlong *)(param_3 + 200) + 0xf);
  while ((*pbVar13 & 0xf) != 7) {
    uVar14 = uVar14 + 1;
    pbVar13 = pbVar13 + 0x14;
    if (*(uint *)(param_3 + 0xb8) <= uVar14) {
      return;
    }
  }
  uStack_44 = 0;
  uStack_3c = 0;
  local_48 = 0;
  local_58 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x88);
  iVar12 = (**(code **)(*(longlong *)(param_2 + 0x98) + 0x168))
                     (param_2,*(undefined8 *)(param_2 + 0xa0),0x25cc,&local_48);
  if (iVar12 == 0) {
    return;
  }
  uVar10 = FUN_143c9d220(0x25cc);
  uStack_3c._0_7_ = CONCAT16(uVar10,(undefined6)uStack_3c);
  hb_buffer_t::clear_output(param_3);
  *(undefined4 *)(param_3 + 0xb4) = 0;
  if (*(int *)(param_3 + 0xb8) != 0) {
    do {
      if (*(char *)(param_3 + 0xb0) != '\0') break;
      uVar14 = *(uint *)(param_3 + 0xb4);
      lVar6 = *(longlong *)(param_3 + 200);
      bVar4 = *(byte *)(lVar6 + 0xf + (ulonglong)uVar14 * 0x14);
      lVar1 = lVar6 + (ulonglong)uVar14 * 0x14;
      if ((bVar15 == bVar4) || ((bVar4 & 0xf) != 7)) {
        if (*(char *)(param_3 + 0xb1) != '\0') {
          if ((*(longlong *)(param_3 + 0xd0) != lVar6) || (*(uint *)(param_3 + 0xbc) != uVar14)) {
            cVar11 = hb_buffer_t::make_room_for(param_3,1,1);
            if (cVar11 == '\0') goto LAB_143c9c21f;
            uVar14 = *(uint *)(param_3 + 0xb4);
            lVar1 = *(longlong *)(param_3 + 200);
            uVar5 = *(uint *)(param_3 + 0xbc);
            puVar2 = (undefined4 *)(lVar1 + (ulonglong)uVar14 * 0x14);
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            lVar6 = *(longlong *)(param_3 + 0xd0);
            puVar3 = (undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14);
            *puVar3 = *puVar2;
            puVar3[1] = uVar7;
            puVar3[2] = uVar8;
            puVar3[3] = uVar9;
            *(undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar1 + 0x10 + (ulonglong)uVar14 * 0x14);
          }
          *(int *)(param_3 + 0xbc) = *(int *)(param_3 + 0xbc) + 1;
        }
        *(int *)(param_3 + 0xb4) = *(int *)(param_3 + 0xb4) + 1;
      }
      else {
        local_20 = uStack_3c._4_4_;
        local_30 = local_48;
        uStack_28 = *(undefined4 *)(lVar1 + 8);
        uStack_2c = *(undefined4 *)(lVar1 + 4);
        _uStack_24 = CONCAT13(bVar4,(int3)uStack_3c);
        if (uVar14 < *(uint *)(param_3 + 0xb8)) {
          while (*(char *)(param_3 + 0xb0) == '\0') {
            uVar14 = *(uint *)(param_3 + 0xb4);
            lVar1 = *(longlong *)(param_3 + 200);
            if ((bVar4 != *(byte *)(lVar1 + 0xf + (ulonglong)uVar14 * 0x14)) ||
               (*(char *)(lVar1 + (ulonglong)uVar14 * 0x14 + 0x12) != '\x12')) break;
            if (*(char *)(param_3 + 0xb1) == '\0') {
LAB_143c9c186:
              *(int *)(param_3 + 0xb4) = *(int *)(param_3 + 0xb4) + 1;
            }
            else {
              if ((*(longlong *)(param_3 + 0xd0) == lVar1) && (*(uint *)(param_3 + 0xbc) == uVar14))
              {
LAB_143c9c180:
                *(int *)(param_3 + 0xbc) = *(int *)(param_3 + 0xbc) + 1;
                goto LAB_143c9c186;
              }
              cVar11 = hb_buffer_t::make_room_for(param_3,1,1);
              if (cVar11 != '\0') {
                uVar14 = *(uint *)(param_3 + 0xb4);
                lVar1 = *(longlong *)(param_3 + 200);
                uVar5 = *(uint *)(param_3 + 0xbc);
                puVar2 = (undefined4 *)(lVar1 + (ulonglong)uVar14 * 0x14);
                uVar7 = puVar2[1];
                uVar8 = puVar2[2];
                uVar9 = puVar2[3];
                lVar6 = *(longlong *)(param_3 + 0xd0);
                puVar3 = (undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar3[2] = uVar8;
                puVar3[3] = uVar9;
                *(undefined4 *)(lVar6 + (ulonglong)uVar5 * 0x14 + 0x10) =
                     *(undefined4 *)(lVar1 + 0x10 + (ulonglong)uVar14 * 0x14);
                goto LAB_143c9c180;
              }
            }
            if (*(uint *)(param_3 + 0xb8) <= *(uint *)(param_3 + 0xb4)) break;
          }
        }
        hb_buffer_t::output_info(param_3,&local_30);
        bVar15 = bVar4;
      }
LAB_143c9c21f:
    } while (*(uint *)(param_3 + 0xb4) < *(uint *)(param_3 + 0xb8));
  }
  hb_buffer_t::swap_buffers(param_3);
  return;
}



// FUNCTION 143c9c260 record_pref body=220 status=ok
// SIG undefined record_pref(void)

void record_pref(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong uVar4;
  ulonglong uVar8;
  
  uVar1 = *(uint *)(param_3 + 0xb8);
  lVar2 = *(longlong *)(param_3 + 200);
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      if (uVar1 <= uVar3) break;
    } while (*(char *)(lVar2 + 0xf) == *(char *)(lVar2 + 0xf + uVar4 * 0x14));
    uVar8 = 0;
    if (uVar1 != 0) {
      do {
        uVar5 = uVar4;
        uVar3 = (uint)uVar5;
        if ((uint)uVar8 < uVar3) {
          pbVar6 = (byte *)(lVar2 + uVar8 * 0x14 + 0xc);
          do {
            if ((*pbVar6 >> 4 & 1) != 0) {
              *(undefined1 *)(lVar2 + 0x12 + uVar8 * 0x14) = 0x16;
              break;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
            pbVar6 = pbVar6 + 0x14;
          } while (uVar7 < uVar3);
        }
        uVar4 = uVar5;
        do {
          uVar7 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar7;
          if (*(uint *)(param_3 + 0xb8) <= uVar7) break;
        } while (*(char *)(*(longlong *)(param_3 + 200) + 0xf + uVar5 * 0x14) ==
                 *(char *)(*(longlong *)(param_3 + 200) + 0xf + uVar4 * 0x14));
        uVar8 = uVar5;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



// FUNCTION 143c9c340 record_rphf body=236 status=ok
// SIG undefined record_rphf(void)

void record_rphf(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar5;
  ulonglong uVar9;
  
  uVar1 = **(uint **)(param_1 + 0x428);
  if (uVar1 != 0) {
    uVar2 = *(uint *)(param_3 + 0xb8);
    lVar3 = *(longlong *)(param_3 + 200);
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        if (uVar2 <= uVar4) break;
      } while (*(char *)(lVar3 + 0xf) == *(char *)(lVar3 + 0xf + uVar5 * 0x14));
      uVar9 = 0;
      if (uVar2 != 0) {
        do {
          uVar6 = uVar5;
          uVar4 = (uint)uVar6;
          if ((uint)uVar9 < uVar4) {
            pbVar7 = (byte *)(lVar3 + uVar9 * 0x14 + 0xc);
            do {
              if ((*(uint *)(pbVar7 + -8) & uVar1) == 0) break;
              if ((*pbVar7 >> 4 & 1) != 0) {
                *(undefined1 *)(lVar3 + 0x12 + uVar9 * 0x14) = 0x12;
                break;
              }
              uVar8 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar8;
              pbVar7 = pbVar7 + 0x14;
            } while (uVar8 < uVar4);
          }
          uVar5 = uVar6;
          do {
            uVar8 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar8;
            if (*(uint *)(param_3 + 0xb8) <= uVar8) break;
          } while (*(char *)(*(longlong *)(param_3 + 200) + 0xf + uVar6 * 0x14) ==
                   *(char *)(*(longlong *)(param_3 + 200) + 0xf + uVar5 * 0x14));
          uVar9 = uVar6;
        } while (uVar4 < uVar2);
      }
    }
  }
  return;
}



// FUNCTION 143c9c430 reorder body=211 status=ok
// SIG undefined reorder(void)

void reorder(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  
  insert_dotted_circles();
  uVar1 = *(uint *)(param_3 + 0xb8);
  uVar4 = 0;
  lVar2 = *(longlong *)(param_3 + 200);
  if (uVar1 != 0) {
    uVar6 = uVar4;
    do {
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      if (uVar1 <= uVar5) break;
    } while (*(char *)(lVar2 + 0xf) == *(char *)(lVar2 + 0xf + uVar6 * 0x14));
    if (uVar1 != 0) {
      do {
        uVar7 = uVar6;
        reorder_syllable(param_3,uVar4,uVar7);
        uVar6 = uVar7;
        do {
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          if (*(uint *)(param_3 + 0xb8) <= uVar5) break;
        } while (*(char *)(*(longlong *)(param_3 + 200) + 0xf + uVar7 * 0x14) ==
                 *(char *)(*(longlong *)(param_3 + 200) + 0xf + uVar6 * 0x14));
        uVar4 = uVar7;
      } while ((uint)uVar7 < uVar1);
    }
  }
  uVar4 = (ulonglong)*(uint *)(param_3 + 0xb8);
  if (*(uint *)(param_3 + 0xb8) != 0) {
    puVar3 = (undefined1 *)(lVar2 + 0xf);
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 0x14;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 143c9c510 reorder_syllable body=620 status=ok
// SIG undefined reorder_syllable(void)

void * reorder_syllable(longlong param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  void *pvVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  void *pvVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  void *pvVar16;
  
  lVar3 = *(longlong *)(param_1 + 200);
  uVar12 = (ulonglong)param_3;
  uVar11 = (ulonglong)param_2;
  uVar8 = *(byte *)(uVar11 * 0x14 + 0xf + lVar3) & 0xf;
  if ((1 << (sbyte)uVar8 & 0x8eU) == 0) {
    return (void *)(ulonglong)uVar8;
  }
  puVar14 = (undefined4 *)(uVar11 * 0x14 + lVar3);
  pbVar15 = (byte *)((longlong)puVar14 + 0x12);
  pvVar9 = (void *)(ulonglong)uVar8;
  if (((*(char *)((longlong)puVar14 + 0x12) == '\x12') &&
      (uVar8 = param_3 - param_2, pvVar9 = (void *)(ulonglong)uVar8, 1 < uVar8)) &&
     (pvVar16 = (void *)(ulonglong)(param_2 + 1), param_2 + 1 < param_3)) {
    pbVar10 = (byte *)(lVar3 + 0x12 + (longlong)pvVar16 * 0x14);
    pvVar13 = pvVar16;
    do {
      bVar1 = *pbVar10;
      if (bVar1 < 0x20) {
        pvVar9 = (void *)(ulonglong)(uint)(1 << (bVar1 & 0x1f));
      }
      else {
        pvVar9 = (void *)0x0;
      }
      if ((((ulonglong)pvVar9 & 0x26) != 0) ||
         ((bVar1 == 0xc &&
          (pvVar9 = (void *)(ulonglong)(pbVar10[-6] >> 5), (pbVar10[-6] >> 5 & 1) == 0)))) {
        if ((*(char *)(lVar3 + 0x12 + (longlong)pvVar13 * 0x14) == '\f') &&
           ((*(byte *)(lVar3 + 0xc + (longlong)pvVar13 * 0x14) >> 5 & 1) == 0)) {
          pvVar13 = (void *)(ulonglong)((int)pvVar13 - 1);
        }
        if (1 < ((int)pvVar13 + 1) - param_2) {
          hb_buffer_t::merge_clusters_impl(param_1,uVar11);
        }
        uVar4 = *puVar14;
        uVar5 = puVar14[1];
        uVar6 = puVar14[2];
        uVar7 = puVar14[3];
        uVar2 = puVar14[4];
        memmove(puVar14,(void *)((longlong)pvVar16 * 0x14 + lVar3),
                (ulonglong)((int)pvVar13 - param_2) * 0x14);
        puVar14 = (undefined4 *)(lVar3 + (longlong)pvVar13 * 0x14);
        *puVar14 = uVar4;
        puVar14[1] = uVar5;
        puVar14[2] = uVar6;
        puVar14[3] = uVar7;
        *(undefined4 *)(lVar3 + 0x10 + (longlong)pvVar13 * 0x14) = uVar2;
        pvVar9 = pvVar13;
        break;
      }
      uVar8 = (int)pvVar13 + 1;
      pvVar13 = (void *)(ulonglong)uVar8;
      pbVar10 = pbVar10 + 0x14;
    } while (uVar8 < param_3);
  }
  do {
    if (param_3 <= param_2) {
      return pvVar9;
    }
    bVar1 = *pbVar15;
    if (bVar1 < 0x20) {
      uVar8 = 1 << (bVar1 & 0x1f);
    }
    else {
      uVar8 = 0;
    }
    param_2 = (uint)uVar11;
    if (((uVar8 & 0x26) == 0) &&
       ((bVar1 != 0xc ||
        (pvVar9 = (void *)(ulonglong)(pbVar15[-6] >> 5), (pbVar15[-6] >> 5 & 1) != 0)))) {
      if ((uVar8 & 0xc00000) != 0) {
        bVar1 = pbVar15[-4];
        pvVar9 = (void *)(ulonglong)bVar1;
        if ((((bVar1 & 0x10) != 0) ||
            (pvVar9 = (void *)(ulonglong)(bVar1 & 0xf), (bVar1 & 0xf) == 0)) &&
           (uVar8 = (uint)uVar12, uVar8 < param_2)) {
          if (1 < (param_2 - uVar8) + 1) {
            hb_buffer_t::merge_clusters_impl(param_1,uVar12,param_2 + 1);
          }
          uVar4 = *(undefined4 *)(pbVar15 + -0x12);
          uVar5 = *(undefined4 *)(pbVar15 + -0xe);
          uVar6 = *(undefined4 *)(pbVar15 + -10);
          uVar7 = *(undefined4 *)(pbVar15 + -6);
          uVar2 = *(undefined4 *)(pbVar15 + -2);
          puVar14 = (undefined4 *)(uVar12 * 0x14 + lVar3);
          pvVar9 = memmove((void *)((ulonglong)(uVar8 + 1) * 0x14 + lVar3),puVar14,
                           (ulonglong)(param_2 - uVar8) * 0x14);
          *puVar14 = uVar4;
          puVar14[1] = uVar5;
          puVar14[2] = uVar6;
          puVar14[3] = uVar7;
          puVar14[4] = uVar2;
        }
      }
    }
    else {
      if (bVar1 == 0xc) {
        pvVar9 = (void *)(ulonglong)(pbVar15[-6] >> 5);
        uVar12 = (ulonglong)(param_2 + 1);
        if ((pbVar15[-6] >> 5 & 1) == 0) goto LAB_143c9c742;
      }
      uVar12 = uVar11;
    }
LAB_143c9c742:
    param_2 = param_2 + 1;
    uVar11 = (ulonglong)param_2;
    pbVar15 = pbVar15 + 0x14;
  } while( true );
}



// FUNCTION 143c9c780 setup_rphf_mask body=268 status=ok
// SIG undefined setup_rphf_mask(void)

void setup_rphf_mask(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar5;
  
  uVar1 = **(uint **)(param_1 + 0x428);
  if (uVar1 != 0) {
    uVar9 = 0;
    lVar3 = *(longlong *)(param_2 + 200);
    uVar2 = *(uint *)(param_2 + 0xb8);
    if (uVar2 != 0) {
      uVar5 = uVar9;
      do {
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        if (uVar2 <= uVar4) break;
      } while (*(char *)(lVar3 + 0xf) == *(char *)(lVar3 + 0xf + uVar5 * 0x14));
      if (uVar2 != 0) {
        do {
          uVar6 = uVar5;
          uVar4 = (uint)uVar9;
          if (*(char *)(lVar3 + 0x12 + uVar9 * 0x14) == '\x12') {
            uVar7 = 1;
          }
          else {
            uVar7 = (uint)uVar6 - uVar4;
            if (3 < uVar7) {
              uVar7 = 3;
            }
          }
          if (uVar4 < uVar7 + uVar4) {
            puVar8 = (uint *)(lVar3 + uVar9 * 0x14 + 4);
            uVar9 = (ulonglong)((uVar7 + uVar4) - uVar4);
            do {
              *puVar8 = *puVar8 | uVar1;
              puVar8 = puVar8 + 5;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          uVar5 = uVar6;
          do {
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
            if (*(uint *)(param_2 + 0xb8) <= uVar4) break;
          } while (*(char *)(*(longlong *)(param_2 + 200) + 0xf + uVar6 * 0x14) ==
                   *(char *)(*(longlong *)(param_2 + 200) + 0xf + uVar5 * 0x14));
          uVar9 = uVar6;
        } while ((uint)uVar6 < uVar2);
      }
    }
  }
  return;
}



// FUNCTION 143c9c890 setup_syllables body=56 status=ok
// SIG undefined setup_syllables(void)

void setup_syllables(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143c9b960(param_3);
  setup_rphf_mask(param_1,param_3);
  setup_topographical_masks(param_1,param_3);
  return;
}



// FUNCTION 143c9c8d0 setup_topographical_masks body=605 status=ok
// SIG undefined setup_topographical_masks(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void setup_topographical_masks(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  ulonglong uVar6;
  byte bVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStackY_88 [32];
  undefined4 local_58 [2];
  uint auStack_50 [4];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStackY_88;
  if (*(longlong *)(*(longlong *)(param_1 + 0x428) + 8) == 0) {
    uVar11 = 0;
    lVar10 = 4;
    uVar13 = uVar11;
    uVar12 = uVar11;
    do {
      local_58[0] = *(undefined4 *)("lositiniidemanif2dem2nif3nif" + uVar12);
      pvVar5 = bsearch(local_58,*(void **)(param_1 + 0x40),(ulonglong)*(uint *)(param_1 + 0x38),0x24
                       ,(_PtFuncCompare *)&LAB_143c7bc50);
      uVar9 = 0;
      if (pvVar5 != (void *)0x0) {
        uVar9 = *(uint *)((longlong)pvVar5 + 0x1c);
      }
      if (uVar9 == *(uint *)(param_1 + 0x34)) {
        uVar9 = 0;
      }
      *(uint *)((longlong)auStack_50 + uVar12) = uVar9;
      uVar9 = (uint)uVar13 | uVar9;
      uVar13 = (ulonglong)uVar9;
      uVar12 = uVar12 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    if (uVar9 != 0) {
      uVar2 = *(uint *)(param_2 + 0xb8);
      lVar10 = *(longlong *)(param_2 + 200);
      uVar14 = 4;
      if (uVar2 != 0) {
        uVar13 = uVar11;
        do {
          uVar3 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar3;
          if (uVar2 <= uVar3) break;
        } while (*(char *)(lVar10 + 0xf) == *(char *)(lVar10 + 0xf + uVar13 * 0x14));
        uVar12 = uVar11;
        if (uVar2 != 0) {
          do {
            uVar6 = uVar13;
            uVar4 = (uint)uVar12;
            bVar1 = *(byte *)(lVar10 + 0xf + uVar12 * 0x14);
            bVar7 = bVar1 & 0xf;
            uVar3 = (uint)uVar6;
            if ((bVar1 & 0xf) == 0) {
LAB_143c9cab6:
              uVar14 = 4;
            }
            else if ((bVar1 & 0xf) != 0) {
              if (5 < bVar7) {
                if (bVar7 == 6) goto LAB_143c9cab6;
                if (bVar7 != 7) goto LAB_143c9cabc;
              }
              if ((uVar14 == 3) || (uVar14 == 0)) {
                bVar1 = 1;
                if ((uint)uVar11 < uVar4) {
                  uVar14 = auStack_50[(ulonglong)(uVar14 == 3) + 1];
                  uVar13 = (ulonglong)(uVar4 - (uint)uVar11);
                  puVar8 = (uint *)(lVar10 + uVar11 * 0x14 + 4);
                  do {
                    *puVar8 = *puVar8 & ~uVar9 | uVar14;
                    uVar13 = uVar13 - 1;
                    puVar8 = puVar8 + 5;
                  } while (uVar13 != 0);
                }
              }
              else {
                bVar1 = 0;
              }
              uVar14 = -(uint)bVar1 & 3;
              if (uVar4 < uVar3) {
                uVar13 = (ulonglong)(uVar3 - uVar4);
                uVar4 = auStack_50[(int)uVar14];
                puVar8 = (uint *)(lVar10 + uVar12 * 0x14 + 4);
                do {
                  *puVar8 = ~uVar9 & *puVar8 | uVar4;
                  uVar13 = uVar13 - 1;
                  puVar8 = puVar8 + 5;
                } while (uVar13 != 0);
              }
            }
LAB_143c9cabc:
            uVar13 = uVar6;
            do {
              uVar4 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar4;
              if (*(uint *)(param_2 + 0xb8) <= uVar4) break;
            } while (*(char *)(*(longlong *)(param_2 + 200) + 0xf + uVar6 * 0x14) ==
                     *(char *)(*(longlong *)(param_2 + 200) + 0xf + uVar13 * 0x14));
            uVar11 = uVar12;
            uVar12 = uVar6;
          } while (uVar3 < uVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 143c9cb30 hb_ot_new_tag_from_script body=148 status=ok
// SIG undefined hb_ot_new_tag_from_script(void)

undefined8 hb_ot_new_tag_from_script(uint param_1)

{
  if (param_1 < 0x4d6c796e) {
    if (param_1 == 0x4d6c796d) {
      return 0x6d6c6d32;
    }
    if (param_1 == 0x42656e67) {
      return 0x626e6732;
    }
    if (param_1 == 0x44657661) {
      return 0x64657632;
    }
    if (param_1 == 0x47756a72) {
      return 0x676a7232;
    }
    if (param_1 == 0x47757275) {
      return 0x67757232;
    }
    if (param_1 == 0x4b6e6461) {
      return 0x6b6e6432;
    }
  }
  else {
    if (param_1 == 0x4d796d72) {
      return 0x6d796d32;
    }
    if (param_1 == 0x4f727961) {
      return 0x6f727932;
    }
    if (param_1 == 0x54616d6c) {
      return 0x746d6c32;
    }
    if (param_1 == 0x54656c75) {
      return 0x74656c32;
    }
  }
  return 0x44464c54;
}



// FUNCTION 143c9cbd0 hb_ot_old_tag_from_script body=89 status=ok
// SIG undefined hb_ot_old_tag_from_script(void)

uint hb_ot_old_tag_from_script(uint param_1)

{
  if (param_1 < 0x4e6b6f70) {
    if (param_1 == 0x4e6b6f6f) {
      return 0x6e6b6f20;
    }
    if (param_1 == 0) {
      return 0x44464c54;
    }
    if (param_1 == 0x48697261) {
      return 0x6b616e61;
    }
    if (param_1 == 0x4c616f6f) {
      return 0x6c616f20;
    }
  }
  else {
    if (param_1 == 0x56616969) {
      return 0x76616920;
    }
    if (param_1 == 0x59696969) {
      return 0x79692020;
    }
  }
  return param_1 | 0x20000000;
}



// FUNCTION 143c9cc30 lang_compare_first_component body=150 status=ok
// SIG undefined lang_compare_first_component(void)

void lang_compare_first_component(char *param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  pcVar2 = strchr(param_1,0x2d);
  lVar4 = -1;
  if (pcVar2 == (char *)0x0) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_1[lVar3] != '\0');
    uVar5 = (uint)lVar3;
  }
  else {
    uVar5 = (int)pcVar2 - (int)param_1;
  }
  pcVar2 = strchr(param_2,0x2d);
  if (pcVar2 == (char *)0x0) {
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != '\0');
    uVar1 = (uint)lVar4;
  }
  else {
    uVar1 = (int)pcVar2 - (int)param_2;
  }
  if (uVar1 < uVar5) {
    uVar1 = uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x000143c9ccbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  strncmp(param_1,param_2,(ulonglong)uVar1);
  return;
}



// FUNCTION 143c9ccd0 lang_matches body=82 status=ok
// SIG undefined lang_matches(void)

undefined8 lang_matches(char *param_1,char *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (param_2[uVar2] != '\0');
  iVar1 = strncmp(param_1,param_2,uVar2 & 0xffffffff);
  if ((iVar1 == 0) &&
     ((param_1[uVar2 & 0xffffffff] == '\0' || (param_1[uVar2 & 0xffffffff] == '-')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143c9cd30 hb_ot_tag_from_language body=556 status=ok
// SIG undefined hb_ot_tag_from_language(void)

uint hb_ot_tag_from_language(longlong param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  char local_res8 [8];
  ulonglong uVar10;
  
  if (param_1 == 0) {
    return 0x64666c74;
  }
  pcVar3 = (char *)FArchive::operator<<();
  pcVar4 = strstr(pcVar3,"x-hbot");
  uVar8 = 0;
  if (pcVar4 != (char *)0x0) {
    pcVar4 = pcVar4 + 6;
    pcVar6 = pcVar4;
    uVar10 = uVar8;
    do {
      uVar9 = (uint)uVar10;
      cVar1 = *pcVar6;
      if ((0x19 < (byte)(cVar1 + 0x9fU)) && (0x19 < (byte)(cVar1 + 0xbfU))) break;
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        cVar1 = cVar1 + -0x20;
      }
      pcVar6[(longlong)(local_res8 + -(longlong)pcVar4)] = cVar1;
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar9;
      pcVar6 = pcVar6 + 1;
    } while ((longlong)pcVar6 - (longlong)pcVar4 < 4);
    if (uVar9 != 0) {
      if ((int)uVar9 < 4) {
        pcVar3 = local_res8 + (int)uVar9;
        for (lVar7 = (longlong)(int)(4 - uVar9); lVar7 != 0; lVar7 = lVar7 + -1) {
          *pcVar3 = ' ';
          pcVar3 = pcVar3 + 1;
        }
      }
      return CONCAT31(CONCAT21(CONCAT11(local_res8[0],local_res8[1]),local_res8[2]),local_res8[3]);
    }
  }
  pcVar4 = strstr(pcVar3,"-fonipa");
  if (pcVar4 != (char *)0x0) {
    return 0x49505048;
  }
  pvVar5 = bsearch(pcVar3,&DAT_145d41cb0,0x213,8,lang_compare_first_component);
  if (pvVar5 != (void *)0x0) {
    return *(uint *)((longlong)pvVar5 + 4);
  }
  iVar2 = lang_compare_first_component(pcVar3,&DAT_145ccb93c);
  if (iVar2 == 0) {
    do {
      iVar2 = lang_matches(pcVar3,"zh-cn" + uVar8 * 0xc);
      if (iVar2 != 0) {
        return (&DAT_145d41c58)[uVar8 * 3];
      }
      uVar9 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar9;
    } while (uVar9 < 7);
    return 0x5a485320;
  }
  pcVar4 = strchr(pcVar3,0x2d);
  if (pcVar4 == (char *)0x0) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pcVar3[lVar7] != '\0');
    pcVar4 = pcVar3 + lVar7;
  }
  if ((longlong)pcVar4 - (longlong)pcVar3 == 3) {
    uVar9 = hb_tag_from_string(pcVar3,(int)pcVar4 - (int)pcVar3);
    return uVar9 & 0xdfdfdfff;
  }
  return 0x64666c74;
}



// FUNCTION 143c9cf60 hb_ot_tags_from_script body=49 status=ok
// SIG undefined hb_ot_tags_from_script(void)

void hb_ot_tags_from_script(ulonglong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 & 0xffffffff;
  *param_3 = 0x44464c54;
  iVar1 = hb_ot_old_tag_from_script();
  *param_2 = iVar1;
  iVar2 = hb_ot_new_tag_from_script(param_1 & 0xffffffff);
  if (iVar2 != 0x44464c54) {
    *param_3 = iVar1;
    *param_2 = iVar2;
  }
  return;
}



// FUNCTION 143c9cfa0 FUN_143c9cfa0 body=557 status=ok
// SIG undefined FUN_143c9cfa0(void)

undefined2 FUN_143c9cfa0(uint param_1)

{
  uint uVar1;
  
  switch(param_1 >> 0xc) {
  case 0:
    uVar1 = param_1 - 0x28;
    if (0x17 < uVar1) {
      if (0x27 < param_1 - 0xb0) {
        if (param_1 - 0x900 < 0x4f8) {
          return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)(param_1 - 0x8c0) * 2);
        }
        if (param_1 != 0xa0) {
          return 0xf00;
        }
        return 0xf0b;
      }
      uVar1 = param_1 - 0x98;
    }
    return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)uVar1 * 2);
  case 1:
    if (param_1 - 0x1000 < 0xa0) {
      return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)(param_1 - 0xac8) * 2);
    }
    if (param_1 - 0x1700 < 0xf0) {
      return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)(param_1 - 0x1128) * 2);
    }
    if (param_1 - 0x1900 < 0x1a0) {
      return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)(param_1 - 0x1238) * 2);
    }
    if (param_1 - 0x1b00 < 0x150) {
      return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)(param_1 - 0x1298) * 2);
    }
    if (param_1 - 0x1cd0 < 0x30) {
      return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)(param_1 - 0x1318) * 2);
    }
    break;
  case 2:
    if (param_1 - 0x2008 < 0x10) {
      return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)(param_1 - 0x1620) * 2);
    }
    if (param_1 - 0x2070 < 0x18) {
      return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)(param_1 - 0x1678) * 2);
    }
    if (param_1 == 0x25cc) {
      return 0xf0b;
    }
    break;
  case 10:
    if (param_1 - 0xa800 < 0x2f8) {
      return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)(param_1 - 0x9df0) * 2);
    }
    if (param_1 - 0xabc0 < 0x40) {
      return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)(param_1 - 0x9eb8) * 2);
    }
    break;
  case 0x10:
    if (param_1 - 0x10a00 < 0x48) {
      return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)(param_1 - 0xfcb8) * 2);
    }
    break;
  case 0x11:
    if (param_1 - 0x11000 < 0xc0) {
      return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)(param_1 - 0x10270) * 2);
    }
    if (param_1 - 0x11100 < 0x138) {
      return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)(param_1 - 0x102b0) * 2);
    }
    if (param_1 - 0x11280 < 0xf8) {
      return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)(param_1 - 0x102f8) * 2);
    }
    if (param_1 - 0x11480 < 0x60) {
      return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)(param_1 - 0x10400) * 2);
    }
    if (param_1 - 0x11580 < 0x1c0) {
      return *(undefined2 *)(&DAT_145d42d60 + (ulonglong)(param_1 - 0x104a0) * 2);
    }
  }
  return 0xf00;
}



// FUNCTION 143c9d220 FUN_143c9d220 body=589 status=ok
// SIG undefined FUN_143c9d220(void)

ulonglong FUN_143c9d220(uint param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)(ulonglong)(param_1 >> 0xc);
  pcVar3 = pcVar2;
  if (param_1 >> 0xc < 0x12) {
    pcVar3 = IMAGE_DOS_HEADER_140000000.e_magic +
             (&switchD_143c9d23f::switchdataD_143c9d470)[(longlong)pcVar2];
    switch(pcVar2) {
    case (char *)0x0:
      uVar1 = param_1 - 0x28;
      if (0x17 < uVar1) {
        if (0x37 < param_1 - 0xa0) {
          pcVar3 = (char *)(ulonglong)(param_1 - 0x900);
          if (param_1 - 0x900 < 0x4f8) {
            return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0x8b0];
          }
          if (param_1 == 0x34f) {
            return 0xfffffa06;
          }
          break;
        }
        uVar1 = param_1 - 0x88;
      }
      return (ulonglong)(byte)(&DAT_145d452a0)[uVar1];
    case (char *)0x1:
      if (param_1 - 0x1000 < 0xa0) {
        return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0xab8];
      }
      if (param_1 - 0x1700 < 0xf0) {
        return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0x1118];
      }
      if (param_1 - 0x1900 < 0x1a0) {
        return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0x1228];
      }
      if (param_1 - 0x1b00 < 0x150) {
        return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0x1288];
      }
      pcVar3 = (char *)(ulonglong)(param_1 - 0x1cd0);
      if (param_1 - 0x1cd0 < 0x30) {
        return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0x1308];
      }
      break;
    case (char *)0x2:
      if (param_1 - 0x2008 < 0x10) {
        return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0x1610];
      }
      pcVar3 = (char *)(ulonglong)(param_1 - 0x2060);
      if (param_1 - 0x2060 < 0x28) {
        return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0x1658];
      }
      if (param_1 == 0x25cc) {
        return 0x505;
      }
      break;
    case (char *)0xa:
      if (param_1 - 0xa800 < 0x2f8) {
        return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0x9dd0];
      }
      pcVar3 = (char *)(ulonglong)(param_1 - 0xabc0);
      if (param_1 - 0xabc0 < 0x40) {
        return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0x9e98];
      }
      break;
    case (char *)0xf:
      pcVar3 = (char *)(ulonglong)(param_1 - 0xfe00);
      if (param_1 - 0xfe00 < 0x10) {
        return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0xf098];
      }
      break;
    case (char *)0x10:
      pcVar3 = (char *)(ulonglong)(param_1 - 0x10a00);
      if (param_1 - 0x10a00 < 0x48) {
        return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0xfc88];
      }
      break;
    case (char *)0x11:
      if (param_1 - 0x11000 < 0xc0) {
        return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0x10240];
      }
      if (param_1 - 0x11100 < 0x138) {
        return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0x10280];
      }
      if (param_1 - 0x11280 < 0xf8) {
        return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0x102c8];
      }
      if (param_1 - 0x11480 < 0x60) {
        return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0x103d0];
      }
      pcVar3 = (char *)(ulonglong)(param_1 - 0x11580);
      if (param_1 - 0x11580 < 0x1c0) {
        return (ulonglong)(byte)(&DAT_145d452a0)[param_1 - 0x10470];
      }
      if (param_1 == 0x1107f) {
        return 0xfffffa0d;
      }
    }
  }
  return (ulonglong)pcVar3 & 0xffffffffffffff00;
}



// FUNCTION 143c9d4b8 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143c9d4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateDXGIFactory1();
  return;
}



// FUNCTION 143c9d4be _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143c9d4be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateDXGIFactory();
  return;
}



// FUNCTION 143c9d4c4 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143c9d4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DPERF_BeginEvent();
  return;
}



// FUNCTION 143c9d4ca _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143c9d4ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3DPERF_EndEvent();
  return;
}



// FUNCTION 143c9d4d0 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143c9d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  D3D11CreateDevice();
  return;
}



// FUNCTION 143c9d4e0 FUN_143c9d4e0 body=455 status=ok
// SIG undefined FUN_143c9d4e0(void)

undefined8 * FUN_143c9d4e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1 + 0x38;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
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
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *puVar1 = 0;
  param_1[0x39] = 0;
  uVar2 = FUN_143c9d840(puVar1);
  *puVar1 = uVar2;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x3a,0,0x200);
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  return param_1;
}



// FUNCTION 143c9d6d0 FUN_143c9d6d0 body=22 status=ok
// SIG undefined FUN_143c9d6d0(void)

void FUN_143c9d6d0(size_t param_1)

{
  if (DAT_146bc9708 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c9d6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146bc9708)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143c9d6df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  malloc(param_1);
  return;
}



// FUNCTION 143c9d6f0 FUN_143c9d6f0 body=67 status=ok
// SIG undefined FUN_143c9d6f0(void)

void FUN_143c9d6f0(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && ((void *)*param_1 != (void *)0x0)) {
    if (DAT_146bc9710 != (code *)0x0) {
      (*DAT_146bc9710)();
      *param_1 = 0;
      return;
    }
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143c9d740 FUN_143c9d740 body=241 status=ok
// SIG undefined FUN_143c9d740(void)

void FUN_143c9d740(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)(param_1 + 0x3d8)) {
    do {
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x3d0) + 0x48 + uVar2);
      if ((puVar1 != (undefined8 *)0x0) && ((void *)*puVar1 != (void *)0x0)) {
        if (DAT_146bc9710 == (code *)0x0) {
          free((void *)*puVar1);
        }
        else {
          (*DAT_146bc9710)();
        }
        *puVar1 = 0;
      }
      uVar3 = (int)uVar4 + 1;
      uVar2 = uVar2 + 0x70;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)(param_1 + 0x3d8));
  }
  puVar1 = (undefined8 *)(param_1 + 0x3e0);
  if ((puVar1 != (undefined8 *)0x0) && ((void *)*puVar1 != (void *)0x0)) {
    if (DAT_146bc9710 == (code *)0x0) {
      free((void *)*puVar1);
    }
    else {
      (*DAT_146bc9710)();
    }
    *puVar1 = 0;
  }
  puVar1 = (undefined8 *)(param_1 + 0x3d0);
  if ((puVar1 != (undefined8 *)0x0) && ((void *)*puVar1 != (void *)0x0)) {
    if (DAT_146bc9710 != (code *)0x0) {
      (*DAT_146bc9710)();
      *puVar1 = 0;
      return;
    }
    free((void *)*puVar1);
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 143c9d840 FUN_143c9d840 body=82 status=ok
// SIG undefined FUN_143c9d840(void)

void FUN_143c9d840(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x30);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  *(longlong *)lVar1 = lVar1;
  if ((longlong *)(lVar1 + 8) != (longlong *)0x0) {
    *(longlong *)(lVar1 + 8) = lVar1;
  }
  if ((longlong *)(lVar1 + 0x10) != (longlong *)0x0) {
    *(longlong *)(lVar1 + 0x10) = lVar1;
  }
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



// FUNCTION 143c9d8a0 _Erase body=80 status=ok
// SIG undefined _Erase(void)

void std::
     _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
     ::_Erase(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    _Erase(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    FMemory::operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 143c9d8f0 FUN_143c9d8f0 body=114 status=ok
// SIG undefined FUN_143c9d8f0(void)

longlong FUN_143c9d8f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x3d8)) {
    lVar2 = *(longlong *)(param_1 + 0x3d0);
    lVar3 = 0;
    do {
      lVar1 = (longlong)*(int *)(lVar2 + 0x68) * 0x624;
      if ((*(int *)(lVar1 + 0x10c + *(longlong *)(param_1 + 0x3e0)) == *(int *)(param_2 + 0x10c)) &&
         (*(int *)(lVar1 + 0x108 + *(longlong *)(param_1 + 0x3e0)) == *(int *)(param_2 + 0x108))) {
        return lVar2;
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x70;
    } while (lVar3 < *(int *)(param_1 + 0x3d8));
  }
  return 0;
}



// FUNCTION 143c9d970 FUN_143c9d970 body=682 status=ok
// SIG undefined FUN_143c9d970(void)

undefined8 FUN_143c9d970(undefined8 *param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Main_Control_Create");
  param_1[2] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Main_Control_Destroy");
  param_1[3] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Adapter_NumberOfAdapters_Get");
  param_1[4] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Adapter_AdapterInfoX2_Get");
  param_1[5] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Adapter_MemoryInfo_Get");
  param_1[6] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Adapter_Graphic_Core_Info_Get");
  param_1[7] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Overdrive_Caps");
  param_1[8] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Overdrive6_Capabilities_Get");
  param_1[9] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Overdrive6_StateInfo_Get");
  param_1[10] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_OverdriveN_Capabilities_Get");
  param_1[0xb] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_OverdriveN_SystemClocks_Get");
  param_1[0xc] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_OverdriveN_MemoryClocks_Get");
  param_1[0xd] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_OverdriveN_PowerLimit_Get");
  param_1[0xe] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_OverdriveN_CapabilitiesX2_Get");
  param_1[0xf] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_OverdriveN_SystemClocksX2_Get");
  param_1[0x10] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_OverdriveN_MemoryClocksX2_Get");
  param_1[0x11] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Graphics_Versions_Get");
  param_1[0x12] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Graphics_VersionsX2_Get");
  param_1[0x13] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_DisplayMapConfig_Get");
  param_1[0x14] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_SLSMapIndex_Get");
  param_1[0x15] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_SLSMapConfig_Get");
  param_1[0x16] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_Modes_Get");
  param_1[0x17] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_SourceContentAttribute_Get");
  param_1[0x18] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_SourceContentAttribute_Set");
  param_1[0x19] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_DDCInfo2_Get");
  param_1[0x1a] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_DisplayInfo_Get");
  param_1[0x1b] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_FreeSync_Cap");
  param_1[0x1c] = pFVar1;
  if ((((((param_1[2] != 0) && (param_1[3] != 0)) && (param_1[0x12] != 0)) &&
       ((param_1[4] != 0 && (param_1[5] != 0)))) &&
      ((param_1[6] != 0 && ((param_1[0x14] != 0 && (param_1[0x15] != 0)))))) && (param_1[0x17] != 0)
     ) {
    return 0;
  }
  return 5;
}



// FUNCTION 143c9dc20 agsDeInit body=116 status=ok
// SIG undefined agsDeInit(void)

undefined4 agsDeInit(undefined8 *param_1)

{
                    /* 0x3c9dc20  538  agsDeInit */
  if (param_1 == (undefined8 *)0x0) {
    return 2;
  }
  FUN_143c9d740();
  if (((code *)param_1[3] != (code *)0x0) && (param_1[1] != 0)) {
    (*(code *)param_1[3])();
    param_1[1] = 0;
  }
  if ((HMODULE)*param_1 != (HMODULE)0x0) {
    FreeLibrary((HMODULE)*param_1);
    *param_1 = 0;
  }
  if (DAT_146bc9710 != (code *)0x0) {
    (*DAT_146bc9710)();
    return 0;
  }
  free(param_1);
  return 0;
}



// FUNCTION 143c9dca0 agsInit body=729 status=ok
// SIG undefined agsInit(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int agsInit(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  void *pvVar5;
  longlong *_Memory;
  longlong lVar6;
  char *pcVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_208 [32];
  _DISPLAY_DEVICEA local_1e8;
  ulonglong local_38;
  longlong *plVar10;
  
                    /* 0x3c9dca0  569  agsInit */
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if (param_1 == (undefined8 *)0x0) {
    iVar4 = 2;
  }
  else {
    if (((param_2 != (longlong *)0x0) && ((code *)*param_2 != (code *)0x0)) &&
       ((code *)param_2[1] != (code *)0x0)) {
      DAT_146bc9708 = (code *)*param_2;
      DAT_146bc9710 = (code *)param_2[1];
    }
    if (DAT_146bc9708 == (code *)0x0) {
      pvVar5 = malloc(0x3f0);
    }
    else {
      pvVar5 = (void *)(*DAT_146bc9708)();
    }
    plVar8 = (longlong *)0x0;
    _Memory = plVar8;
    if (pvVar5 != (void *)0x0) {
      _Memory = (longlong *)FUN_143c9d4e0(pvVar5);
    }
    *param_1 = _Memory;
    if (_Memory == (longlong *)0x0) {
      iVar4 = 3;
    }
    else {
      lVar6 = FUN_143ca2f70("atiadlxx.dll","atiadlxy.dll");
      *_Memory = lVar6;
      pcVar3 = DAT_146bc9710;
      if (lVar6 == 0) {
        *param_1 = 0;
        if (pcVar3 == (code *)0x0) {
          free(_Memory);
          iVar4 = 4;
        }
        else {
          (*pcVar3)();
          iVar4 = 4;
        }
      }
      else {
        iVar4 = FUN_143c9d970(_Memory);
        pcVar3 = DAT_146bc9710;
        if (iVar4 == 0) {
          iVar4 = (*(code *)_Memory[2])(&LAB_143c9d6b0,1,_Memory + 1);
          pcVar3 = DAT_146bc9710;
          if (iVar4 == 0) {
            SetEnvironmentVariableW(L"ADL_4KWORKAROUND_CANCEL",L"TRUE");
            FUN_143ca2900(_Memory);
            _guard_xfg_dispatch_icall_nop(&local_1e8,0,0x1a8);
            local_1e8.cb = 0x1a8;
            iVar4 = EnumDisplayDevicesA((LPCSTR)0x0,0,&local_1e8,0);
            plVar10 = plVar8;
            while (iVar4 != 0) {
              if (((byte)local_1e8.StateFlags & 4) != 0) {
                if (0 < (int)_Memory[0x7d]) {
                  do {
                    pcVar7 = (char *)((longlong)(int)plVar8 * 0x624 + _Memory[0x7c] + 0x218);
                    lVar6 = 4 - (longlong)pcVar7;
                    do {
                      cVar1 = *pcVar7;
                      cVar2 = pcVar7[(longlong)&local_1e8 + lVar6];
                      if (cVar1 != cVar2) break;
                      pcVar7 = pcVar7 + 1;
                    } while (cVar2 != '\0');
                    if ((cVar1 == cVar2) && (lVar6 = FUN_143c9d8f0(_Memory), lVar6 != 0)) {
                      *(undefined4 *)(lVar6 + 0x30) = 1;
                    }
                    uVar9 = (int)plVar8 + 1;
                    plVar8 = (longlong *)(ulonglong)uVar9;
                  } while ((int)uVar9 < (int)_Memory[0x7d]);
                }
                break;
              }
              uVar9 = (int)plVar10 + 1;
              plVar10 = (longlong *)(ulonglong)uVar9;
              iVar4 = EnumDisplayDevicesA((LPCSTR)0x0,uVar9,&local_1e8,0);
            }
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 5;
              *(longlong **)(param_3 + 4) = _Memory + 0x3a;
              *(undefined8 *)(param_3 + 1) = 3;
              *(longlong **)(param_3 + 6) = _Memory + 0x5a;
              param_3[3] = 0;
              *(longlong *)(param_3 + 10) = _Memory[0x7a];
              param_3[8] = (int)_Memory[0x7b];
              FUN_143ca2e90(_Memory);
              FUN_143ca2cb0(_Memory);
              FUN_143c9df80(_Memory);
            }
            iVar4 = 0;
          }
          else {
            *param_1 = 0;
            if (pcVar3 == (code *)0x0) {
              free(_Memory);
              iVar4 = 7;
            }
            else {
              (*pcVar3)();
              iVar4 = 7;
            }
          }
        }
        else {
          *param_1 = 0;
          if (pcVar3 == (code *)0x0) {
            free(_Memory);
          }
          else {
            (*pcVar3)();
          }
        }
      }
    }
  }
  return iVar4;
}



// FUNCTION 143c9df80 FUN_143c9df80 body=245 status=ok
// SIG undefined FUN_143c9df80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c9df80(longlong param_1)

{
  int iVar1;
  DWORD iDevNum;
  undefined1 auStack_1e8 [32];
  _DISPLAY_DEVICEA local_1c8;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  iDevNum = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x3d8)) {
    do {
      FUN_143c9e080(param_1,*(longlong *)(param_1 + 0x3d0) + (longlong)iVar1 * 0x70);
      FUN_143ca30d0(param_1,*(longlong *)(param_1 + 0x3d0) + (longlong)iVar1 * 0x70);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x3d8));
  }
  local_1c8.cb = 0x1a8;
  iVar1 = EnumDisplayDevicesA((LPCSTR)0x0,0,&local_1c8,0);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (((byte)local_1c8.StateFlags & 4) != 0) break;
    iDevNum = iDevNum + 1;
    iVar1 = EnumDisplayDevicesA((LPCSTR)0x0,iDevNum,&local_1c8,0);
  }
  FUN_143c9e5c0(param_1,local_1c8.DeviceName);
  return;
}



// FUNCTION 143c9e080 FUN_143c9e080 body=1329 status=ok
// SIG undefined FUN_143c9e080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c9e080(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  byte *pbVar3;
  void *_Dst;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_268 [32];
  longlong *local_248;
  uint local_238 [2];
  longlong local_230;
  longlong local_228;
  int local_220 [2];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 local_1f8 [272];
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  uint local_84;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  lVar11 = (longlong)*(int *)(param_2 + 0x68) * 0x624 + *(longlong *)(param_1 + 0x3e0);
  *(undefined4 *)(param_2 + 0x40) = 0;
  local_230 = 0;
  local_238[0] = 0;
  local_248 = (longlong *)((ulonglong)local_248 & 0xffffffff00000000);
  iVar2 = (**(code **)(param_1 + 0xd8))
                    (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar11 + 4),local_238,&local_230);
  if ((iVar2 == 0) && (uVar6 = (ulonglong)local_238[0], 0 < (int)local_238[0])) {
    pbVar3 = (byte *)(local_230 + 0x224);
    do {
      if ((*pbVar3 & 1) != 0) {
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
      }
      pbVar3 = pbVar3 + 0x228;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    _Dst = (void *)FUN_143c9d6d0((longlong)*(int *)(param_2 + 0x40) * 0x1d0);
    *(void **)(param_2 + 0x48) = _Dst;
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)*(int *)(param_2 + 0x40) * 0x1d0);
    uVar10 = 0;
    uVar6 = uVar10;
    uVar13 = uVar10;
    uVar5 = local_238[0];
    if (0 < (int)local_238[0]) {
      do {
        if ((*(byte *)(uVar10 + 0x224 + local_230) & 1) != 0) {
          puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x48) + uVar6);
          *(undefined8 *)((longlong)puVar9 + 0x154) = 0xffffffffffffffff;
          lVar4 = 2;
          *(undefined4 *)(puVar9 + 0x39) = *(undefined4 *)(uVar10 + local_230);
          puVar7 = puVar9;
          puVar8 = (undefined8 *)(local_230 + 0x14 + uVar10);
          do {
            uVar1 = puVar8[1];
            *puVar7 = *puVar8;
            puVar7[1] = uVar1;
            uVar1 = puVar8[3];
            puVar7[2] = puVar8[2];
            puVar7[3] = uVar1;
            uVar1 = puVar8[5];
            puVar7[4] = puVar8[4];
            puVar7[5] = uVar1;
            uVar1 = puVar8[7];
            puVar7[6] = puVar8[6];
            puVar7[7] = uVar1;
            uVar1 = puVar8[9];
            puVar7[8] = puVar8[8];
            puVar7[9] = uVar1;
            uVar1 = puVar8[0xb];
            puVar7[10] = puVar8[10];
            puVar7[0xb] = uVar1;
            uVar1 = puVar8[0xd];
            puVar7[0xc] = puVar8[0xc];
            puVar7[0xd] = uVar1;
            uVar1 = puVar8[0xf];
            puVar7[0xe] = puVar8[0xe];
            puVar7[0xf] = uVar1;
            lVar4 = lVar4 + -1;
            puVar7 = puVar7 + 0x10;
            puVar8 = puVar8 + 0x10;
          } while (lVar4 != 0);
          *(undefined1 *)((longlong)puVar9 + 0xff) = 0;
          iVar2 = *(int *)(uVar10 + 8 + local_230);
          if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 1000))) {
            lVar4 = *(longlong *)(param_1 + 0x3e0);
            puVar7 = (undefined8 *)((longlong)iVar2 * 0x624 + 0x218 + lVar4);
            uVar1 = puVar7[1];
            puVar9[0x20] = *puVar7;
            puVar9[0x21] = uVar1;
            puVar7 = (undefined8 *)((longlong)iVar2 * 0x624 + 0x228 + lVar4);
            uVar1 = puVar7[1];
            puVar9[0x22] = *puVar7;
            puVar9[0x23] = uVar1;
            *(undefined1 *)((longlong)puVar9 + 0x11f) = 0;
          }
          *(int *)((longlong)puVar9 + 0x1cc) = iVar2;
          local_248 = &local_228;
          local_220[0] = 0;
          local_228 = 0;
          iVar2 = (**(code **)(param_1 + 0xb8))
                            (*(undefined8 *)(param_1 + 8),*(undefined4 *)((longlong)puVar9 + 0x1cc),
                             *(undefined4 *)(puVar9 + 0x39),local_220);
          if ((iVar2 == 0) && (0 < local_220[0])) {
            *(undefined4 *)(puVar9 + 0x27) = *(undefined4 *)(local_228 + 0x1c);
            *(undefined4 *)((longlong)puVar9 + 0x13c) = *(undefined4 *)(local_228 + 0x20);
            *(undefined4 *)(puVar9 + 0x2a) = *(undefined4 *)(local_228 + 0x28);
            *(undefined4 *)(puVar9 + 0x26) = *(undefined4 *)(local_228 + 0x14);
            *(undefined4 *)((longlong)puVar9 + 0x134) = *(undefined4 *)(local_228 + 0x18);
            puVar9[0x28] = puVar9[0x26];
            puVar9[0x29] = puVar9[0x27];
          }
          FUN_143c9d6f0(&local_228);
          _guard_xfg_dispatch_icall_nop(local_1f8,0,0x1a0);
          if ((*(code **)(param_1 + 0xd0) != (code *)0x0) &&
             (iVar2 = (**(code **)(param_1 + 0xd0))
                                (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar11 + 4),
                                 *(undefined4 *)(puVar9 + 0x39),local_1f8), iVar2 == 0)) {
            *(uint *)(puVar9 + 0x24) = *(uint *)(puVar9 + 0x24) | (local_84 & 1) * 2;
            uVar5 = (local_84 & 2) * 2 | *(uint *)(puVar9 + 0x24);
            *(uint *)(puVar9 + 0x24) = uVar5;
            *(uint *)(puVar9 + 0x24) = (local_84 & 4) << 2 | uVar5;
            *(undefined4 *)((longlong)puVar9 + 0x124) = local_e8;
            *(undefined4 *)(puVar9 + 0x25) = local_e4;
            *(float *)((longlong)puVar9 + 300) = (float)local_e0;
            puVar9[0x2c] = (double)local_ac / 10000.0;
            puVar9[0x2d] = (double)local_a8 / 10000.0;
            puVar9[0x2e] = (double)local_a4 / 10000.0;
            puVar9[0x2f] = (double)local_a0 / 10000.0;
            puVar9[0x30] = (double)local_9c / 10000.0;
            puVar9[0x31] = (double)local_98 / 10000.0;
            puVar9[0x32] = (double)local_94 / 10000.0;
            puVar9[0x33] = (double)local_90 / 10000.0;
            puVar9[0x36] = (double)local_c0 / 10000.0;
            puVar9[0x37] = (double)local_b8;
            puVar9[0x38] = (double)local_bc;
          }
          local_218 = 0;
          local_210 = 0;
          local_208 = 0;
          local_200 = 0;
          if ((((*(code **)(param_1 + 0xe0) != (code *)0x0) &&
               (iVar2 = (**(code **)(param_1 + 0xe0))
                                  (*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar11 + 4),
                                   *(undefined4 *)(puVar9 + 0x39),&local_218), iVar2 == 0)) &&
              (0 < local_218._4_4_)) && (0 < (int)local_210)) {
            *(uint *)(puVar9 + 0x24) = *(uint *)(puVar9 + 0x24) | 8;
          }
          uVar6 = uVar6 + 0x1d0;
          uVar5 = local_238[0];
        }
        uVar12 = (int)uVar13 + 1;
        uVar10 = uVar10 + 0x228;
        uVar13 = (ulonglong)uVar12;
      } while ((int)uVar12 < (int)uVar5);
    }
  }
  if (local_230 != 0) {
    FUN_143c9d6f0(&local_230);
  }
  return;
}



// FUNCTION 143c9e5c0 FUN_143c9e5c0 body=222 status=ok
// SIG undefined FUN_143c9e5c0(void)

void FUN_143c9e5c0(longlong param_1,char *param_2)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  
  if (0 < *(int *)(param_1 + 0x3d8)) {
    lVar7 = 0;
    lVar9 = 0;
    lVar4 = *(longlong *)(param_1 + 0x3d0);
    piVar8 = (int *)(lVar4 + 0x40);
    do {
      if (*(int *)(lVar9 + 0x30 + lVar4) != 0) {
        iVar10 = 0;
        if (0 < *piVar8) {
          lVar5 = *(longlong *)(lVar9 + 0x48 + lVar4);
          do {
            pcVar6 = param_2;
            do {
              cVar2 = *pcVar6;
              cVar3 = pcVar6[(lVar5 + 0x100 + (longlong)iVar10 * 0x1d0) - (longlong)param_2];
              if (cVar2 != cVar3) break;
              pcVar6 = pcVar6 + 1;
            } while (cVar3 != '\0');
            if (cVar2 == cVar3) {
              puVar1 = (uint *)((longlong)iVar10 * 0x1d0 + 0x120 + lVar5);
              *puVar1 = *puVar1 | 1;
              return;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < *piVar8);
        }
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x70;
      piVar8 = piVar8 + 0x1c;
    } while (lVar7 < *(int *)(param_1 + 0x3d8));
  }
  return;
}



// FUNCTION 143c9e6a0 agsSetDisplayMode body=471 status=ok
// SIG undefined agsSetDisplayMode(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte agsSetDisplayMode(longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  ulonglong local_48;
  
                    /* 0x3c9e6a0  570  agsSetDisplayMode */
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if ((((param_1 == 0) || (*(longlong *)(param_1 + 8) == 0)) || (param_4 == (undefined4 *)0x0)) ||
     ((param_2 < 0 || (*(int *)(param_1 + 0x3d8) <= param_2)))) {
    bVar2 = 2;
  }
  else {
    lVar4 = (longlong)param_2 * 0x70 + *(longlong *)(param_1 + 0x3d0);
    if ((param_3 < 0) || (*(int *)(lVar4 + 0x40) <= param_3)) {
      bVar2 = 2;
    }
    else {
      pcVar1 = *(code **)(param_1 + 200);
      if (pcVar1 == (code *)0x0) {
        bVar2 = 5;
      }
      else {
        _guard_xfg_dispatch_icall_nop(&local_c8,0,0x78);
        local_c8 = 2;
        switch(*param_4) {
        case 0:
          local_c4 = 1;
          local_c0 = 1;
          break;
        case 1:
          local_c4 = 4;
          local_c0 = 8;
          break;
        case 2:
        case 3:
          local_c4 = 0x20;
          local_c0 = 0x40;
          break;
        case 4:
          local_c4 = 0x80;
          local_c0 = 0x80;
          break;
        case 5:
          local_c4 = 0x40;
          local_c0 = 0x200;
          break;
        default:
          return 2;
        }
        local_98 = *(undefined8 *)(param_4 + 2);
        uStack_90 = *(undefined8 *)(param_4 + 4);
        local_b8 = *(undefined8 *)(param_4 + 6);
        uStack_b0 = *(undefined8 *)(param_4 + 8);
        local_58 = (uint)((*(byte *)(param_4 + 0x1a) & 1) != 0);
        local_a8 = *(undefined8 *)(param_4 + 10);
        uStack_a0 = *(undefined8 *)(param_4 + 0xc);
        local_88 = *(undefined8 *)(param_4 + 0xe);
        uStack_80 = *(undefined8 *)(param_4 + 0x10);
        local_78 = *(undefined8 *)(param_4 + 0x12);
        uStack_70 = *(undefined8 *)(param_4 + 0x14);
        local_68 = param_4[0x16];
        uStack_64 = param_4[0x17];
        uStack_60 = param_4[0x18];
        uStack_5c = param_4[0x19];
        iVar3 = (*pcVar1)(*(undefined8 *)(param_1 + 8),
                          *(undefined4 *)
                           ((longlong)*(int *)(lVar4 + 0x68) * 0x624 + 4 +
                           *(longlong *)(param_1 + 0x3e0)),
                          *(undefined4 *)
                           ((longlong)param_3 * 0x1d0 + 0x1c8 + *(longlong *)(lVar4 + 0x48)),
                          &local_c8);
        bVar2 = -(iVar3 != 0) & 7;
      }
    }
  }
  return bVar2;
}



// FUNCTION 143c9e890 FUN_143c9e890 body=314 status=ok
// SIG undefined FUN_143c9e890(void)

void FUN_143c9e890(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong **)(param_1 + 0x128) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x128) + 8))();
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x130) + 8))();
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x138) + 8))();
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  if (*(longlong **)(param_1 + 0x140) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x140) + 8))();
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x150) + 8))();
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  if (*(longlong **)(param_1 + 0x158) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x158) + 8))();
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if (*(longlong **)(param_1 + 0x160) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x160) + 8))();
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_143c9d6f0();
  }
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x178) != 0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,param_1 + 0x178);
      *(undefined8 *)(param_1 + 0x178) = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x168) + 8))();
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  if (*(longlong **)(param_1 + 0x120) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x120) + 8))();
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  return;
}



// FUNCTION 143c9e9d0 FUN_143c9e9d0 body=1316 status=ok
// SIG undefined FUN_143c9e9d0(void)

void FUN_143c9e9d0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  FARPROC pFVar5;
  INT_PTR IVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int local_res8 [2];
  undefined8 local_res18;
  int local_res20;
  uint local_res24;
  ulonglong local_48;
  longlong local_40;
  undefined8 local_38;
  
  *(undefined8 *)(param_1 + 0x108) = *param_3;
  *(undefined8 *)(param_1 + 0x110) = param_3[1];
  pFVar5 = GetProcAddress(*(HMODULE *)(param_1 + 0x100),"AmdDxExtCreate11");
  if (pFVar5 != (FARPROC)0x0) {
    plVar1 = (longlong *)(param_1 + 0x120);
    IVar6 = (*pFVar5)(*(undefined8 *)(param_1 + 0x108),plVar1);
    if (((int)IVar6 == 0) && (plVar8 = (longlong *)*plVar1, plVar8 != (longlong *)0x0)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_res20);
      *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 1;
      local_res8[0] = 0;
      iVar2 = (**(code **)(*(longlong *)*plVar1 + 0x48))((longlong *)*plVar1,1,local_res8);
      if ((iVar2 == 0) && (local_res8[0] != 0)) {
        *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 2;
      }
      lVar7 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0xf);
      *(longlong *)(param_1 + 0x128) = lVar7;
      if (lVar7 != 0) {
        *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 4;
        local_res18 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x128) + 0x28))
                  (*(longlong **)(param_1 + 0x128),&local_res18);
        if (0x403 < (((uint)local_res18 << 10 | local_res18._4_4_) & 0xfffff)) {
          *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x400000;
        }
      }
      lVar7 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0xb);
      *(longlong *)(param_1 + 0x130) = lVar7;
      if ((lVar7 != 0) &&
         (*(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 8,
         0x2400fff < (local_res20 << 10 | local_res24) << 0xc)) {
        local_res18 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x130) + 0x20))
                  (*(longlong **)(param_1 + 0x130),&local_res18);
        if (0x400 < (((uint)local_res18 << 10 | local_res18._4_4_) & 0xfffff)) {
          *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x800000;
        }
      }
      lVar7 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x11);
      *(longlong *)(param_1 + 0x138) = lVar7;
      if (lVar7 != 0) {
        *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x10;
        local_res18 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))
                  (*(longlong **)(param_1 + 0x138),&local_res18);
        uVar3 = ((uint)local_res18 << 10 | local_res18._4_4_) << 0xc;
        if (0x401fff < uVar3) {
          *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x20;
        }
        if (0x403fff < uVar3) {
          *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x200000;
        }
      }
      plVar8 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x18);
      *(longlong **)(param_1 + 0x158) = plVar8;
      if (plVar8 != (longlong *)0x0) {
        local_res18 = 0;
        (**(code **)(*plVar8 + 0x18))(plVar8,&local_res18);
        if (0x3ff < (((uint)local_res18 << 10 | local_res18._4_4_) & 0xfffff)) {
          *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x20000;
        }
      }
      uVar9 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x17);
      *(undefined8 *)(param_1 + 0x160) = uVar9;
      plVar8 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x15);
      *(longlong **)(param_1 + 0x150) = plVar8;
      if (plVar8 != (longlong *)0x0) {
        local_res18 = 0;
        iVar2 = (**(code **)(*plVar8 + 0x18))(plVar8,&local_res18);
        if ((iVar2 == 0) && (1 < (uint)local_res18)) {
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                            (*(longlong **)(param_1 + 0x150),1);
          if (iVar2 == 0) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x80;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                            (*(longlong **)(param_1 + 0x150),2);
          if (iVar2 == 0) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x100;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                            (*(longlong **)(param_1 + 0x150),3);
          if (iVar2 == 0) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x200;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                            (*(longlong **)(param_1 + 0x150),4);
          if (iVar2 == 0) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x400;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                            (*(longlong **)(param_1 + 0x150),5);
          if (iVar2 == 0) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x800;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                            (*(longlong **)(param_1 + 0x150),6);
          if (iVar2 == 0) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x1000;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                            (*(longlong **)(param_1 + 0x150),8);
          if (iVar2 == 0) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x2000;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                            (*(longlong **)(param_1 + 0x150),9);
          if (iVar2 == 0) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x4000;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                            (*(longlong **)(param_1 + 0x150),0xb);
          if (iVar2 == 0) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x8000;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                            (*(longlong **)(param_1 + 0x150),0xc);
          if (iVar2 == 0) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x10000;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                            (*(longlong **)(param_1 + 0x150),10);
          if ((iVar2 == 0) && (*(longlong *)(param_1 + 0x160) != 0)) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x40000;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x30))();
          if ((iVar2 != 0) ||
             (((param_2 != 0 && (*(int *)(param_2 + 0x1c) != 0)) &&
              (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x38))(), iVar2 != 0)))) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) & 0xfffa007f;
          }
        }
      }
      lVar7 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x14);
      *(longlong *)(param_1 + 0x140) = lVar7;
      if (lVar7 != 0) {
        *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x40;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x48))();
        *(undefined4 *)(param_3 + 4) = uVar4;
        (**(code **)(**(longlong **)(param_1 + 0x140) + 0x18))
                  (*(longlong **)(param_1 + 0x140),&local_res18);
        *(uint *)(param_1 + 0x148) = ((uint)local_res18 << 10 | local_res18._4_4_) << 0xc;
        if (*(int *)(param_1 + 0xe8) == 1) {
          (**(code **)(**(longlong **)(param_1 + 0x140) + 0x20))();
        }
      }
      lVar7 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x1d);
      *(longlong *)(param_1 + 0x168) = lVar7;
      if (((lVar7 != 0) &&
          (*(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x100000,
          param_2 != 0)) && (iVar2 = *(int *)(param_2 + 0x18), iVar2 != 0)) {
        lVar7 = FUN_143c9d6d0();
        *(longlong *)(param_1 + 0x170) = lVar7;
        local_48 = lVar7 + 0xfffU & 0xfffffffffffff000;
        param_3[5] = local_48;
        local_38 = 0;
        local_40 = (ulonglong)(uint)(iVar2 * 8) + 0x1000;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x20))
                          (*(longlong **)(param_1 + 0x168),&local_48);
        if (iVar2 == 0) {
          *(undefined8 *)(param_1 + 0x178) = local_38;
          *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x18);
        }
        else {
          param_3[5] = 0;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0xe8) == 2) {
    *(undefined4 *)(param_3 + 4) = 1;
  }
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)((longlong)param_3 + 0x1c);
  return;
}



// FUNCTION 143c9ef00 FUN_143c9ef00 body=118 status=ok
// SIG undefined FUN_143c9ef00(void)

undefined8 FUN_143c9ef00(longlong param_1)

{
  longlong lVar1;
  HMODULE pHVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  lVar1 = FUN_143ca2f70("atidxx64.dll","atidxx32.dll");
  *(longlong *)(param_1 + 0x100) = lVar1;
  if (lVar1 == 0) {
    return 4;
  }
  pHVar2 = LoadLibraryA("d3d11.dll");
  *(HMODULE *)(param_1 + 0xf8) = pHVar2;
  if (pHVar2 == (HMODULE)0x0) {
    uVar3 = 4;
  }
  return uVar3;
}



// FUNCTION 143c9ef80 FUN_143c9ef80 body=108 status=ok
// SIG undefined FUN_143c9ef80(void)

void FUN_143c9ef80(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (*(HMODULE *)(param_1 + 0xf8) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  if (*(HMODULE *)(param_1 + 0x100) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x100));
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  if (*(HMODULE *)(param_1 + 0xf0) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 143c9eff0 FUN_143c9eff0 body=143 status=ok
// SIG undefined FUN_143c9eff0(void)

void FUN_143c9eff0(longlong param_1,int param_2)

{
  HMODULE hModule;
  FARPROC UNRECOVERED_JUMPTABLE_00;
  
  if (((0 < *(int *)(param_1 + 0x3d8)) && (*(int *)(*(longlong *)(param_1 + 0x3d0) + 0xc) == 0x1002)
      ) && (*(int *)(param_1 + 0xe8) = param_2, param_2 - 1U < 2)) {
    hModule = (HMODULE)FUN_143ca2f70("aticfx64.dll","aticfx32.dll");
    *(HMODULE *)(param_1 + 0xf0) = hModule;
    if (hModule != (HMODULE)0x0) {
      UNRECOVERED_JUMPTABLE_00 = GetProcAddress(hModule,"AmdExtRequestMgpuAppControl");
      if (UNRECOVERED_JUMPTABLE_00 != (FARPROC)0x0) {
        if (*(int *)(param_1 + 0xe8) == 2) {
                    /* WARNING: Could not recover jumptable at 0x000143c9f064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        if (*(int *)(param_1 + 0xe8) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000143c9f076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)(3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143c9f080 agsDriverExtensionsDX11_BeginUAVOverlap body=119 status=ok
// SIG undefined agsDriverExtensionsDX11_BeginUAVOverlap(void)

byte agsDriverExtensionsDX11_BeginUAVOverlap(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
                    /* 0x3c9f080  539  agsDriverExtensionsDX11_BeginUAVOverlap */
  if (param_1 == 0) {
    return 2;
  }
  plVar1 = *(longlong **)(param_1 + 0x128);
  if (plVar1 != (longlong *)0x0) {
    if ((*(uint *)(param_1 + 0x118) & 0x400000) != 0) {
      if (param_2 == 0) {
        param_2 = *(longlong *)(param_1 + 0x110);
      }
      iVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
      return -(iVar2 != 0) & 8;
    }
    if ((param_2 == 0) || (param_2 == *(longlong *)(param_1 + 0x110))) {
      iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
      return -(iVar2 != 0) & 8;
    }
  }
  return 6;
}



// FUNCTION 143c9f100 agsDriverExtensionsDX11_CreateDevice body=836 status=ok
// SIG undefined agsDriverExtensionsDX11_CreateDevice(void)

undefined8
agsDriverExtensionsDX11_CreateDevice
          (longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined8 uVar5;
  HMODULE hModule;
  FARPROC pFVar6;
  FARPROC pFVar7;
  FARPROC pFVar8;
  FARPROC pFVar9;
  undefined8 *puVar11;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 *local_50;
  ulonglong local_48;
  undefined2 *local_40;
  ulonglong local_38;
  INT_PTR IVar10;
  
                    /* 0x3c9f100  540  agsDriverExtensionsDX11_CreateDevice */
  if (((param_1 == 0) || (param_2 == (undefined8 *)0x0)) || (param_4 == (undefined8 *)0x0)) {
    return 2;
  }
  puVar11 = (undefined8 *)0x0;
  puVar1 = param_4 + 1;
  puVar2 = param_4 + 3;
  *(undefined4 *)puVar2 = 0x9100;
  *param_4 = 0;
  *puVar1 = 0;
  param_4[2] = 0;
  *(undefined4 *)((longlong)param_4 + 0x1c) = 0;
  *(undefined4 *)(param_4 + 4) = 1;
  param_4[5] = 0;
  FUN_143c9eff0(param_1,*(undefined4 *)(param_3 + 4));
  uVar5 = FUN_143c9ef00(param_1);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  hModule = LoadLibraryA("d3d11.dll");
  *(HMODULE *)(param_1 + 0xf8) = hModule;
  if (hModule == (HMODULE)0x0) {
    return 4;
  }
  pFVar6 = GetProcAddress(hModule,"D3D11CreateDeviceAndSwapChain");
  pFVar7 = GetProcAddress(*(HMODULE *)(param_1 + 0xf8),"D3D11CreateDevice");
  if ((pFVar7 == (FARPROC)0x0) || (pFVar6 == (FARPROC)0x0)) {
    return 5;
  }
  pFVar8 = GetProcAddress(*(HMODULE *)(param_1 + 0x100),"AmdD3D11CreateDeviceExt");
  pFVar9 = GetProcAddress(*(HMODULE *)(param_1 + 0x100),"AmdD3D11CreateDeviceAndSwapChainExt");
  if ((pFVar8 == (FARPROC)0x0) || (pFVar9 == (FARPROC)0x0)) {
    if (param_2[6] == 0) {
      IVar10 = (*pFVar7)(*param_2,(ulonglong)*(uint *)(param_2 + 1),param_2[2],
                         (ulonglong)*(uint *)(param_2 + 3),param_2[4],*(undefined4 *)(param_2 + 5),
                         *(undefined4 *)((longlong)param_2 + 0x2c),param_4,puVar2,puVar1);
      iVar4 = (int)IVar10;
    }
    else {
      IVar10 = (*pFVar6)(*param_2);
      iVar4 = (int)IVar10;
    }
  }
  else {
    puVar3 = (undefined2 *)*param_3;
    local_60 = 0;
    local_58 = 0;
    local_50 = (undefined2 *)0x0;
    local_48 = 0;
    local_40 = (undefined2 *)0x0;
    local_38 = 0;
    if ((puVar3 != (undefined2 *)0x0) || (param_3[1] != 0)) {
      local_60 = 2;
      puVar11 = &local_60;
      local_50 = &DAT_145af7bc0;
      if (puVar3 != (undefined2 *)0x0) {
        local_50 = puVar3;
      }
      local_48 = (ulonglong)*(uint *)(param_3 + 2);
      local_40 = &DAT_145af7bc0;
      if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
        local_40 = (undefined2 *)param_3[1];
      }
      local_38 = (ulonglong)*(uint *)((longlong)param_3 + 0x14);
    }
    if (param_2[6] == 0) {
      IVar10 = (*pFVar8)(*param_2,(ulonglong)*(uint *)(param_2 + 1),param_2[2],
                         (ulonglong)*(uint *)(param_2 + 3),param_2[4],*(undefined4 *)(param_2 + 5),
                         *(undefined4 *)((longlong)param_2 + 0x2c),param_4,puVar2,puVar1,puVar11);
      iVar4 = (int)IVar10;
    }
    else {
      IVar10 = (*pFVar9)(*param_2);
      iVar4 = (int)IVar10;
    }
    if (iVar4 == 0) {
      *(uint *)((longlong)param_4 + 0x1c) = *(uint *)((longlong)param_4 + 0x1c) | 0x80000;
      goto LAB_143c9f35c;
    }
  }
  if (iVar4 < 0) {
    return 1;
  }
LAB_143c9f35c:
  FUN_143c9e9d0(param_1,param_3,param_4);
  return 0;
}



// FUNCTION 143c9f450 agsDriverExtensionsDX11_CreateFromDevice body=134 status=ok
// SIG undefined agsDriverExtensionsDX11_CreateFromDevice(void)

undefined8
agsDriverExtensionsDX11_CreateFromDevice
          (longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 uVar1;
  
                    /* 0x3c9f450  541  agsDriverExtensionsDX11_CreateFromDevice */
  if (((param_1 == 0) || (param_4 == (longlong *)0x0)) || (param_2 == 0)) {
    uVar1 = 2;
  }
  else {
    param_4[3] = 0x9100;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    *(undefined4 *)(param_4 + 4) = 1;
    *param_4 = param_2;
    uVar1 = FUN_143c9ef00();
    if ((int)uVar1 == 0) {
      FUN_143c9e9d0(param_1,param_3,param_4);
      return 0;
    }
  }
  return uVar1;
}



// FUNCTION 143c9f4e0 agsDriverExtensionsDX11_Destroy body=29 status=ok
// SIG undefined agsDriverExtensionsDX11_Destroy(void)

undefined4 agsDriverExtensionsDX11_Destroy(longlong param_1)

{
                    /* 0x3c9f4e0  542  agsDriverExtensionsDX11_Destroy */
  if (param_1 == 0) {
    return 2;
  }
  FUN_143c9e890();
  return 0;
}



// FUNCTION 143c9f500 agsDriverExtensionsDX11_DestroyDevice body=146 status=ok
// SIG undefined agsDriverExtensionsDX11_DestroyDevice(void)

undefined8
agsDriverExtensionsDX11_DestroyDevice
          (longlong param_1,longlong *param_2,undefined4 *param_3,longlong *param_4,
          undefined4 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
                    /* 0x3c9f500  543  agsDriverExtensionsDX11_DestroyDevice */
  if ((param_1 == 0) || (param_2 == (longlong *)0x0)) {
    uVar2 = 2;
  }
  else if (*(longlong **)(param_1 + 0x108) == param_2) {
    FUN_143c9e890();
    if (param_4 != (longlong *)0x0) {
      uVar1 = (**(code **)(*param_4 + 0x10))(param_4);
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = uVar1;
      }
    }
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = uVar1;
    }
    FUN_143c9ef80(param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143c9f5a0 agsDriverExtensionsDX11_EndUAVOverlap body=119 status=ok
// SIG undefined agsDriverExtensionsDX11_EndUAVOverlap(void)

byte agsDriverExtensionsDX11_EndUAVOverlap(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
                    /* 0x3c9f5a0  544  agsDriverExtensionsDX11_EndUAVOverlap */
  if (param_1 == 0) {
    return 2;
  }
  plVar1 = *(longlong **)(param_1 + 0x128);
  if (plVar1 != (longlong *)0x0) {
    if ((*(uint *)(param_1 + 0x118) & 0x400000) != 0) {
      if (param_2 == 0) {
        param_2 = *(longlong *)(param_1 + 0x110);
      }
      iVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
      return -(iVar2 != 0) & 8;
    }
    if ((param_2 == 0) || (param_2 == *(longlong *)(param_1 + 0x110))) {
      iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
      return -(iVar2 != 0) & 8;
    }
  }
  return 6;
}



// FUNCTION 143c9f620 agsDriverExtensionsDX11_GetMaxClipRects body=76 status=ok
// SIG undefined agsDriverExtensionsDX11_GetMaxClipRects(void)

undefined8 agsDriverExtensionsDX11_GetMaxClipRects(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
                    /* 0x3c9f620  545  agsDriverExtensionsDX11_GetMaxClipRects */
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    if ((*(uint *)(param_1 + 0x118) & 0x40000) == 0) {
      return 6;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x160) + 0x28))();
    *param_2 = uVar1;
    return 0;
  }
  return 2;
}



// FUNCTION 143c9f670 agsDriverExtensionsDX11_IASetPrimitiveTopology body=86 status=ok
// SIG undefined agsDriverExtensionsDX11_IASetPrimitiveTopology(void)

byte agsDriverExtensionsDX11_IASetPrimitiveTopology(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
                    /* 0x3c9f670  546  agsDriverExtensionsDX11_IASetPrimitiveTopology */
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x108) == 0)) {
    return 2;
  }
  plVar1 = *(longlong **)(param_1 + 0x120);
  if ((plVar1 != (longlong *)0x0) && ((param_2 != 9 || ((*(byte *)(param_1 + 0x118) & 2) != 0)))) {
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    return -(iVar2 != 0) & 8;
  }
  return 6;
}


