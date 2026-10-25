// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1402722d0 `dynamic_initializer_for_'ModuleRegistrantSlateCore'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantSlateCore''(void)

void _dynamic_initializer_for__ModuleRegistrantSlateCore__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_1469eb138;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"SlateCore",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140272540 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFAnalogInputEvent'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFAnalogInputEvent''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFAnalogInputEvent__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d57250;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnalogInputEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402725a0 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFButtonStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFButtonStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFButtonStyle__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x278;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d59c08;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ButtonStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272600 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFCaptureLostEvent'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFCaptureLostEvent''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFCaptureLostEvent__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_14402d378;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CaptureLostEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272660 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFCharacterEvent'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFCharacterEvent''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFCharacterEvent__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d57138;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CharacterEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402726c0 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFCheckBoxStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFCheckBoxStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFCheckBoxStyle__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x580;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d59e38;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CheckBoxStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272720 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFComboBoxStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFComboBoxStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFComboBoxStyle__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x3d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d599d8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ComboBoxStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272780 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFComboButtonStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFComboButtonStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFComboButtonStyle__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x3a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d59af0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ComboButtonStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402727e0 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFCompositeFallbackFont'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFCompositeFallbackFont''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFCompositeFallbackFont__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d56930;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CompositeFallbackFont",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272840 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFCompositeFont'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFCompositeFont''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFCompositeFont__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d56700;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CompositeFont",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402728a0 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFCompositeSubFont'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFCompositeSubFont''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFCompositeSubFont__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d56818;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CompositeSubFont",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272900 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFDockTabStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFDockTabStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFDockTabStyle__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x700;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d58740;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DockTabStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272960 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFEditableTextBoxStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFEditableTextBoxStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFEditableTextBoxStyle__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x7f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d59578;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"EditableTextBoxStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402729c0 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFEditableTextStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFEditableTextStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFEditableTextStyle__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x218;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d597a8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"EditableTextStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272a20 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFExpandableAreaStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFExpandableAreaStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFExpandableAreaStyle__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d59230;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ExpandableAreaStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272a80 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFFocusEvent'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFFocusEvent''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFFocusEvent__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144d57598;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"FocusEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272ae0 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFFontData'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFFontData''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFFontData__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d56c78;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"FontData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272b40 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFFontOutlineSettings'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFFontOutlineSettings''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFFontOutlineSettings__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d58128;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"FontOutlineSettings",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272ba0 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFGeometry'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFGeometry''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFGeometry__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144d57708;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"Geometry",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272c00 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFHeaderRowStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFHeaderRowStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFHeaderRowStyle__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xb70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d58858;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"HeaderRowStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272c60 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFTransformCurve'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFTransformCurve''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFTransformCurve__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x470;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d598c0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"HyperlinkStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272cc0 FUN_140272cc0 body=92 status=ok
// SIG undefined FUN_140272cc0(void)

void FUN_140272cc0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x9d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d59460;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"InlineEditableTextBlockStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272d20 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFInlineTextImageStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFInlineTextImageStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFInlineTextImageStyle__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d58dd0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"InlineTextImageStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272d80 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFInputEvent'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFInputEvent''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFInputEvent__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d57480;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"InputEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272de0 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFKeyEvent'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFKeyEvent''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFKeyEvent__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d57368;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"KeyEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272e40 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFMargin'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFMargin''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFMargin__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_143ff1be8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"Margin",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272ea0 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFMotionEvent'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFMotionEvent''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFMotionEvent__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d56f08;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"MotionEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272f00 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFNavigationEvent'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFNavigationEvent''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFNavigationEvent__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d56df0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"NavigationEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272f60 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFPointerEvent'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFPointerEvent''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFPointerEvent__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d57020;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PointerEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140272fc0 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFProgressBarStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFProgressBarStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFProgressBarStyle__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x1a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d59348;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ProgressBarStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140273020 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFScrollBarStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFScrollBarStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFScrollBarStyle__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x4d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d59690;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ScrollBarStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140273080 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFScrollBorderStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFScrollBorderStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFScrollBorderStyle__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x118;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d58510;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ScrollBorderStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402730e0 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFScrollBoxStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFScrollBoxStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFScrollBoxStyle__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x228;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d58628;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ScrollBoxStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140273140 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFSearchBoxStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFSearchBoxStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFSearchBoxStyle__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xa80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d59118;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SearchBoxStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402731a0 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFSlateBrush'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFSlateBrush''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFSlateBrush__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d579c0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SlateBrush",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140273200 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFSlateColor'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFSlateColor''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFSlateColor__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d57b20;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SlateColor",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140273260 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFSlateFontInfo'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFSlateFontInfo''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFSlateFontInfo__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d58010;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SlateFontInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402732c0 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFSlateSound'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFSlateSound''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFSlateSound__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d58240;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SlateSound",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140273320 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFSlateWidgetStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFSlateWidgetStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFSlateWidgetStyle__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d59f50;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SlateWidgetStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140273380 `dynamic_initializer_for_'ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFLoadingWidgetSettings'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFLoadingWidgetSettings''(void)

void _dynamic_initializer_for__ScriptStruct_AsyncLoadingScreen_StaticRegisterNativesFLoadingWidgetSettings__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x230;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d59000;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SliderStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402733e0 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFSpinBoxStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFSpinBoxStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFSpinBoxStyle__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x2e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d58cb8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SpinBoxStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140273440 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFSplitterStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFSplitterStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFSplitterStyle__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x118;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d58ba0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SplitterStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402734a0 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFTableColumnHeaderStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFTableColumnHeaderStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFTableColumnHeaderStyle__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x4d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d58970;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"TableColumnHeaderStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140273500 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFTableRowStyle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFTableRowStyle''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFTableRowStyle__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x6b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d58a88;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"TableRowStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140273560 `dynamic_initializer_for_'ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RotationOffsetBlendSpace'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RotationOffsetBlendSpace''(void)

void _dynamic_initializer_for__ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RotationOffsetBlendSpace__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x1e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d59d20;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"TextBlockStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402735c0 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFTypeface'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFTypeface''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFTypeface__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d56a48;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"Typeface",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140273620 `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFTypefaceEntry'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_SlateCore_StaticRegisterNativesFTypefaceEntry''(void)

void _dynamic_initializer_for__ScriptStruct_SlateCore_StaticRegisterNativesFTypefaceEntry__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d56b60;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"TypefaceEntry",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140273680 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFTransformCurve'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFTransformCurve''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFTransformCurve__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x4e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d58ee8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"VolumeControlStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402736e0 FUN_1402736e0 body=92 status=ok
// SIG undefined FUN_1402736e0(void)

void FUN_1402736e0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xfd0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d583f8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WindowStyle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140273740 FUN_140273740 body=66 status=ok
// SIG undefined FUN_140273740(void)

void FUN_140273740(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EButtonClickMethod",1);
  UObjectCompiledInDeferEnum(EButtonClickMethod_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273790 FUN_140273790 body=66 status=ok
// SIG undefined FUN_140273790(void)

void FUN_140273790(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EButtonPressMethod",1);
  UObjectCompiledInDeferEnum(EButtonPressMethod_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 1402737e0 FUN_1402737e0 body=66 status=ok
// SIG undefined FUN_1402737e0(void)

void FUN_1402737e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EButtonTouchMethod",1);
  UObjectCompiledInDeferEnum(EButtonTouchMethod_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273830 FUN_140273830 body=66 status=ok
// SIG undefined FUN_140273830(void)

void FUN_140273830(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ECheckBoxState",1);
  UObjectCompiledInDeferEnum(ECheckBoxState_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273880 FUN_140273880 body=66 status=ok
// SIG undefined FUN_140273880(void)

void FUN_140273880(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EColorVisionDeficiency",1);
  UObjectCompiledInDeferEnum(EColorVisionDeficiency_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 1402738d0 FUN_1402738d0 body=66 status=ok
// SIG undefined FUN_1402738d0(void)

void FUN_1402738d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EConsumeMouseWheel",1);
  UObjectCompiledInDeferEnum(EConsumeMouseWheel_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273920 FUN_140273920 body=66 status=ok
// SIG undefined FUN_140273920(void)

void FUN_140273920(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EFocusCause",1);
  UObjectCompiledInDeferEnum(EFocusCause_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273970 FUN_140273970 body=66 status=ok
// SIG undefined FUN_140273970(void)

void FUN_140273970(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EFontFallback",1);
  UObjectCompiledInDeferEnum(EFontFallback_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 1402739c0 FUN_1402739c0 body=66 status=ok
// SIG undefined FUN_1402739c0(void)

void FUN_1402739c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EFontHinting",1);
  UObjectCompiledInDeferEnum(EFontHinting_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273a10 FUN_140273a10 body=66 status=ok
// SIG undefined FUN_140273a10(void)

void FUN_140273a10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EFontLayoutMethod",1);
  UObjectCompiledInDeferEnum(EFontLayoutMethod_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273a60 FUN_140273a60 body=66 status=ok
// SIG undefined FUN_140273a60(void)

void FUN_140273a60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EFontLoadingPolicy",1);
  UObjectCompiledInDeferEnum(EFontLoadingPolicy_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273ab0 FUN_140273ab0 body=66 status=ok
// SIG undefined FUN_140273ab0(void)

void FUN_140273ab0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EHorizontalAlignment",1);
  UObjectCompiledInDeferEnum(EHorizontalAlignment_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273b00 FUN_140273b00 body=66 status=ok
// SIG undefined FUN_140273b00(void)

void FUN_140273b00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EMenuPlacement",1);
  UObjectCompiledInDeferEnum(EMenuPlacement_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273b50 FUN_140273b50 body=66 status=ok
// SIG undefined FUN_140273b50(void)

void FUN_140273b50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ENavigationGenesis",1);
  UObjectCompiledInDeferEnum(ENavigationGenesis_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273ba0 FUN_140273ba0 body=66 status=ok
// SIG undefined FUN_140273ba0(void)

void FUN_140273ba0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ENavigationSource",1);
  UObjectCompiledInDeferEnum(ENavigationSource_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273bf0 FUN_140273bf0 body=66 status=ok
// SIG undefined FUN_140273bf0(void)

void FUN_140273bf0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EOrientation",1);
  UObjectCompiledInDeferEnum(EOrientation_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273c40 FUN_140273c40 body=66 status=ok
// SIG undefined FUN_140273c40(void)

void FUN_140273c40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EScrollDirection",1);
  UObjectCompiledInDeferEnum(EScrollDirection_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273c90 FUN_140273c90 body=66 status=ok
// SIG undefined FUN_140273c90(void)

void FUN_140273c90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESelectInfo",1);
  UObjectCompiledInDeferEnum(ESelectInfo_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273ce0 FUN_140273ce0 body=66 status=ok
// SIG undefined FUN_140273ce0(void)

void FUN_140273ce0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESlateBrushDrawType",1);
  UObjectCompiledInDeferEnum(ESlateBrushDrawType_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273d30 FUN_140273d30 body=66 status=ok
// SIG undefined FUN_140273d30(void)

void FUN_140273d30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESlateBrushImageType",1);
  UObjectCompiledInDeferEnum(ESlateBrushImageType_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273d80 FUN_140273d80 body=66 status=ok
// SIG undefined FUN_140273d80(void)

void FUN_140273d80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESlateBrushMirrorType",1);
  UObjectCompiledInDeferEnum(ESlateBrushMirrorType_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273dd0 FUN_140273dd0 body=66 status=ok
// SIG undefined FUN_140273dd0(void)

void FUN_140273dd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESlateBrushTileType",1);
  UObjectCompiledInDeferEnum(ESlateBrushTileType_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273e20 FUN_140273e20 body=66 status=ok
// SIG undefined FUN_140273e20(void)

void FUN_140273e20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESlateCheckBoxType",1);
  UObjectCompiledInDeferEnum(ESlateCheckBoxType_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273e70 FUN_140273e70 body=66 status=ok
// SIG undefined FUN_140273e70(void)

void FUN_140273e70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESlateColorStylingMode",1);
  UObjectCompiledInDeferEnum(ESlateColorStylingMode_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273ec0 FUN_140273ec0 body=66 status=ok
// SIG undefined FUN_140273ec0(void)

void FUN_140273ec0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESlateParentWindowSearchMethod",1);
  UObjectCompiledInDeferEnum
            (ESlateParentWindowSearchMethod_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273f10 FUN_140273f10 body=66 status=ok
// SIG undefined FUN_140273f10(void)

void FUN_140273f10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ETextCommit",1);
  UObjectCompiledInDeferEnum(ETextCommit_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273f60 FUN_140273f60 body=66 status=ok
// SIG undefined FUN_140273f60(void)

void FUN_140273f60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ETextShapingMethod",1);
  UObjectCompiledInDeferEnum(ETextShapingMethod_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140273fb0 FUN_140273fb0 body=66 status=ok
// SIG undefined FUN_140273fb0(void)

void FUN_140273fb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EUINavigation",1);
  UObjectCompiledInDeferEnum(EUINavigation_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274000 FUN_140274000 body=66 status=ok
// SIG undefined FUN_140274000(void)

void FUN_140274000(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EUINavigationRule",1);
  UObjectCompiledInDeferEnum(EUINavigationRule_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274050 FUN_140274050 body=66 status=ok
// SIG undefined FUN_140274050(void)

void FUN_140274050(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EVerticalAlignment",1);
  UObjectCompiledInDeferEnum(EVerticalAlignment_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 1402740a0 FUN_1402740a0 body=66 status=ok
// SIG undefined FUN_1402740a0(void)

void FUN_1402740a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWidgetClipping",1);
  UObjectCompiledInDeferEnum(EWidgetClipping_StaticEnum,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 1402740f0 FUN_1402740f0 body=66 status=ok
// SIG undefined FUN_1402740f0(void)

void FUN_1402740f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnalogInputEvent",1);
  UObjectCompiledInDeferStruct(FAnalogInputEvent::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274140 FUN_140274140 body=66 status=ok
// SIG undefined FUN_140274140(void)

void FUN_140274140(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ButtonStyle",1);
  UObjectCompiledInDeferStruct(FButtonStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274190 FUN_140274190 body=66 status=ok
// SIG undefined FUN_140274190(void)

void FUN_140274190(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CaptureLostEvent",1);
  UObjectCompiledInDeferStruct(FCaptureLostEvent::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 1402741e0 FUN_1402741e0 body=66 status=ok
// SIG undefined FUN_1402741e0(void)

void FUN_1402741e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CharacterEvent",1);
  UObjectCompiledInDeferStruct(FCharacterEvent::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274230 FUN_140274230 body=66 status=ok
// SIG undefined FUN_140274230(void)

void FUN_140274230(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CheckBoxStyle",1);
  UObjectCompiledInDeferStruct(FCheckBoxStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274280 FUN_140274280 body=66 status=ok
// SIG undefined FUN_140274280(void)

void FUN_140274280(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ComboBoxStyle",1);
  UObjectCompiledInDeferStruct(FComboBoxStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 1402742d0 FUN_1402742d0 body=66 status=ok
// SIG undefined FUN_1402742d0(void)

void FUN_1402742d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ComboButtonStyle",1);
  UObjectCompiledInDeferStruct(FComboButtonStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274320 FUN_140274320 body=66 status=ok
// SIG undefined FUN_140274320(void)

void FUN_140274320(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CompositeFallbackFont",1);
  UObjectCompiledInDeferStruct
            (FCompositeFallbackFont::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274370 FUN_140274370 body=66 status=ok
// SIG undefined FUN_140274370(void)

void FUN_140274370(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CompositeFont",1);
  UObjectCompiledInDeferStruct(FCompositeFont::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 1402743c0 FUN_1402743c0 body=66 status=ok
// SIG undefined FUN_1402743c0(void)

void FUN_1402743c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CompositeSubFont",1);
  UObjectCompiledInDeferStruct(FCompositeSubFont::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274410 FUN_140274410 body=66 status=ok
// SIG undefined FUN_140274410(void)

void FUN_140274410(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DockTabStyle",1);
  UObjectCompiledInDeferStruct(FDockTabStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274460 FUN_140274460 body=66 status=ok
// SIG undefined FUN_140274460(void)

void FUN_140274460(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EditableTextBoxStyle",1);
  UObjectCompiledInDeferStruct(FEditableTextBoxStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0)
  ;
  return;
}



// FUNCTION 1402744b0 FUN_1402744b0 body=66 status=ok
// SIG undefined FUN_1402744b0(void)

void FUN_1402744b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EditableTextStyle",1);
  UObjectCompiledInDeferStruct(FEditableTextStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274500 FUN_140274500 body=66 status=ok
// SIG undefined FUN_140274500(void)

void FUN_140274500(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ExpandableAreaStyle",1);
  UObjectCompiledInDeferStruct(FExpandableAreaStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274550 FUN_140274550 body=66 status=ok
// SIG undefined FUN_140274550(void)

void FUN_140274550(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"FocusEvent",1);
  UObjectCompiledInDeferStruct(FFocusEvent::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 1402745a0 FUN_1402745a0 body=66 status=ok
// SIG undefined FUN_1402745a0(void)

void FUN_1402745a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"FontData",1);
  UObjectCompiledInDeferStruct(FFontData::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 1402745f0 FUN_1402745f0 body=66 status=ok
// SIG undefined FUN_1402745f0(void)

void FUN_1402745f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"FontOutlineSettings",1);
  UObjectCompiledInDeferStruct(FFontOutlineSettings::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274640 FUN_140274640 body=66 status=ok
// SIG undefined FUN_140274640(void)

void FUN_140274640(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Geometry",1);
  UObjectCompiledInDeferStruct(FGeometry::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274690 FUN_140274690 body=66 status=ok
// SIG undefined FUN_140274690(void)

void FUN_140274690(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"HeaderRowStyle",1);
  UObjectCompiledInDeferStruct(FHeaderRowStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 1402746e0 FUN_1402746e0 body=66 status=ok
// SIG undefined FUN_1402746e0(void)

void FUN_1402746e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"HyperlinkStyle",1);
  UObjectCompiledInDeferStruct(FUN_141865b60,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274730 FUN_140274730 body=66 status=ok
// SIG undefined FUN_140274730(void)

void FUN_140274730(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"InlineEditableTextBlockStyle",1);
  UObjectCompiledInDeferStruct(FUN_141865be0,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274780 FUN_140274780 body=66 status=ok
// SIG undefined FUN_140274780(void)

void FUN_140274780(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"InlineTextImageStyle",1);
  UObjectCompiledInDeferStruct(FInlineTextImageStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0)
  ;
  return;
}



// FUNCTION 1402747d0 FUN_1402747d0 body=66 status=ok
// SIG undefined FUN_1402747d0(void)

void FUN_1402747d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"InputEvent",1);
  UObjectCompiledInDeferStruct(FInputEvent::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274820 FUN_140274820 body=66 status=ok
// SIG undefined FUN_140274820(void)

void FUN_140274820(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"KeyEvent",1);
  UObjectCompiledInDeferStruct(FKeyEvent::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274870 FUN_140274870 body=66 status=ok
// SIG undefined FUN_140274870(void)

void FUN_140274870(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Margin",1);
  UObjectCompiledInDeferStruct(FMargin::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 1402748c0 FUN_1402748c0 body=66 status=ok
// SIG undefined FUN_1402748c0(void)

void FUN_1402748c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"MotionEvent",1);
  UObjectCompiledInDeferStruct(FMotionEvent::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274910 FUN_140274910 body=66 status=ok
// SIG undefined FUN_140274910(void)

void FUN_140274910(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"NavigationEvent",1);
  UObjectCompiledInDeferStruct(FNavigationEvent::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274960 FUN_140274960 body=66 status=ok
// SIG undefined FUN_140274960(void)

void FUN_140274960(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PointerEvent",1);
  UObjectCompiledInDeferStruct(FPointerEvent::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 1402749b0 FUN_1402749b0 body=66 status=ok
// SIG undefined FUN_1402749b0(void)

void FUN_1402749b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ProgressBarStyle",1);
  UObjectCompiledInDeferStruct(FProgressBarStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274a00 FUN_140274a00 body=66 status=ok
// SIG undefined FUN_140274a00(void)

void FUN_140274a00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ScrollBarStyle",1);
  UObjectCompiledInDeferStruct(FScrollBarStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274a50 FUN_140274a50 body=66 status=ok
// SIG undefined FUN_140274a50(void)

void FUN_140274a50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ScrollBorderStyle",1);
  UObjectCompiledInDeferStruct(FScrollBorderStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274aa0 FUN_140274aa0 body=66 status=ok
// SIG undefined FUN_140274aa0(void)

void FUN_140274aa0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ScrollBoxStyle",1);
  UObjectCompiledInDeferStruct(FScrollBoxStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274af0 FUN_140274af0 body=66 status=ok
// SIG undefined FUN_140274af0(void)

void FUN_140274af0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SearchBoxStyle",1);
  UObjectCompiledInDeferStruct(FSearchBoxStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274b40 FUN_140274b40 body=66 status=ok
// SIG undefined FUN_140274b40(void)

void FUN_140274b40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SlateBrush",1);
  UObjectCompiledInDeferStruct(FSlateBrush::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274b90 FUN_140274b90 body=66 status=ok
// SIG undefined FUN_140274b90(void)

void FUN_140274b90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SlateColor",1);
  UObjectCompiledInDeferStruct(FSlateColor::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274be0 FUN_140274be0 body=66 status=ok
// SIG undefined FUN_140274be0(void)

void FUN_140274be0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SlateFontInfo",1);
  UObjectCompiledInDeferStruct(FSlateFontInfo::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274c30 FUN_140274c30 body=66 status=ok
// SIG undefined FUN_140274c30(void)

void FUN_140274c30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SlateSound",1);
  UObjectCompiledInDeferStruct(FSlateSound::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274c80 FUN_140274c80 body=66 status=ok
// SIG undefined FUN_140274c80(void)

void FUN_140274c80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SlateWidgetStyle",1);
  UObjectCompiledInDeferStruct(FSlateWidgetStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274cd0 FUN_140274cd0 body=66 status=ok
// SIG undefined FUN_140274cd0(void)

void FUN_140274cd0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SliderStyle",1);
  UObjectCompiledInDeferStruct(FUN_1418664e0,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274d20 FUN_140274d20 body=66 status=ok
// SIG undefined FUN_140274d20(void)

void FUN_140274d20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SpinBoxStyle",1);
  UObjectCompiledInDeferStruct(FSpinBoxStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274d70 FUN_140274d70 body=66 status=ok
// SIG undefined FUN_140274d70(void)

void FUN_140274d70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SplitterStyle",1);
  UObjectCompiledInDeferStruct(FSplitterStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274dc0 FUN_140274dc0 body=66 status=ok
// SIG undefined FUN_140274dc0(void)

void FUN_140274dc0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TableColumnHeaderStyle",1);
  UObjectCompiledInDeferStruct
            (FTableColumnHeaderStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274e10 FUN_140274e10 body=66 status=ok
// SIG undefined FUN_140274e10(void)

void FUN_140274e10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TableRowStyle",1);
  UObjectCompiledInDeferStruct(FTableRowStyle::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274e60 FUN_140274e60 body=66 status=ok
// SIG undefined FUN_140274e60(void)

void FUN_140274e60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TextBlockStyle",1);
  UObjectCompiledInDeferStruct(FUnlockables::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274eb0 FUN_140274eb0 body=66 status=ok
// SIG undefined FUN_140274eb0(void)

void FUN_140274eb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Typeface",1);
  UObjectCompiledInDeferStruct(FTypeface::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274f00 FUN_140274f00 body=66 status=ok
// SIG undefined FUN_140274f00(void)

void FUN_140274f00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TypefaceEntry",1);
  UObjectCompiledInDeferStruct(FTypefaceEntry::StaticStruct,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274f50 FUN_140274f50 body=66 status=ok
// SIG undefined FUN_140274f50(void)

void FUN_140274f50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VolumeControlStyle",1);
  UObjectCompiledInDeferStruct(FUN_1418668e0,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274fa0 FUN_140274fa0 body=66 status=ok
// SIG undefined FUN_140274fa0(void)

void FUN_140274fa0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WindowStyle",1);
  UObjectCompiledInDeferStruct(FUN_141866960,L"/Script/SlateCore",*puVar1,0,0);
  return;
}



// FUNCTION 140274ff0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UFontBulkData'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UFontBulkData''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UFontBulkData__(void)

{
  UObjectCompiledInDefer
            (FUN_1418669e0,UFontBulkData::StaticClass,L"UFontBulkData",L"/Script/SlateCore",0,0,0);
  return;
}



// FUNCTION 140275030 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UFontFaceInterface'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UFontFaceInterface''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UFontFaceInterface__(void)

{
  UObjectCompiledInDefer
            (FUN_141866a10,UFontFaceInterface::GetPrivateStaticClass,L"UFontFaceInterface",
             L"/Script/SlateCore",0,0,0);
  return;
}



// FUNCTION 140275070 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UFontProviderInterface'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UFontProviderInterface''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UFontProviderInterface__(void)

{
  UObjectCompiledInDefer
            (FUN_141866a40,UFontProviderInterface::GetPrivateStaticClass,L"UFontProviderInterface",
             L"/Script/SlateCore",0,0,0);
  return;
}



// FUNCTION 1402750b0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_USlateTypes'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_USlateTypes''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_USlateTypes__(void)

{
  UObjectCompiledInDefer
            (FUN_141866a70,USlateTypes::StaticClass,L"USlateTypes",L"/Script/SlateCore",0,0,0);
  return;
}



// FUNCTION 1402750f0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_USlateWidgetStyleAsset'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_USlateWidgetStyleAsset''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_USlateWidgetStyleAsset__(void)

{
  UObjectCompiledInDefer
            (FUN_141866aa0,USlateWidgetStyleContainerBase::StaticClass,L"USlateWidgetStyleAsset",
             L"/Script/SlateCore",0,0,0);
  return;
}



// FUNCTION 140275130 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_USlateWidgetStyleContainerBase'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_USlateWidgetStyleContainerBase''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_USlateWidgetStyleContainerBase__(void)

{
  UObjectCompiledInDefer
            (FUN_141866ad0,USlateWidgetStyleContainerBase::StaticClass,
             L"USlateWidgetStyleContainerBase",L"/Script/SlateCore",0,0,0);
  return;
}



// FUNCTION 140275170 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_USlateWidgetStyleContainerInterface'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_USlateWidgetStyleContainerInterface''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_USlateWidgetStyleContainerInterface__(void)

{
  UObjectCompiledInDefer
            (FUN_141866b00,USlateWidgetStyleContainerInterface::StaticClass,
             L"USlateWidgetStyleContainerInterface",L"/Script/SlateCore",0,0,0);
  return;
}



// FUNCTION 140275370 FUN_140275370 body=51 status=ok
// SIG undefined FUN_140275370(void)

void FUN_140275370(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1469f44b0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1469f44b0,4000);
  atexit((_func_5014 *)&LAB_143e830c0);
  return;
}



// FUNCTION 1402753b0 FUN_1402753b0 body=51 status=ok
// SIG undefined FUN_1402753b0(void)

void FUN_1402753b0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1469f44d8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1469f44d8,4000);
  atexit((_func_5014 *)&LAB_143e830d0);
  return;
}



// FUNCTION 1402754b0 FUN_1402754b0 body=306 status=ok
// SIG undefined FUN_1402754b0(void)

void FUN_1402754b0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 in_R9;
  longlong *local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  longlong *local_40;
  int local_38;
  undefined8 *local_30;
  longlong **local_28;
  
  local_40 = (longlong *)0x0;
  local_38 = 0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30,0,in_R9,0xfffffffffffffffe);
  local_38 = 3;
  local_res10 = plVar1;
  local_40 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_1469f4500;
    plVar1[2] = (longlong)FUN_14186abe0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res20,"ImageWrapper",1);
  local_res18 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_30 = &local_res18;
  local_28 = &local_40;
  FUN_140437c00(lVar2 + 0x58,&local_res10,&local_30,0);
  if ((local_38 != 0) && (local_40 != (longlong *)0x0)) {
    (**(code **)(*local_40 + 0x28))(local_40,0);
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)FMemory::Realloc(local_40,0,0);
    }
    local_38 = 0;
  }
  if ((local_38 != 0) && (local_40 != (longlong *)0x0)) {
    (**(code **)(*local_40 + 0x28))(local_40,0);
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)FMemory::Realloc(local_40,0,0);
    }
    local_38 = 0;
  }
  if (local_40 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140275780 `dynamic_initializer_for_'AllowSlateToSleep'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'AllowSlateToSleep''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__AllowSlateToSleep__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4548 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"Slate.AllowSlateToSleep",1,
                  L"Whether Slate should go to sleep when there are no active timers and the user is idle"
                  ,0);
  _DAT_1469f4540 = &PTR_FUN_143f3ecf8;
  DAT_1469f4550 = (**(code **)(*DAT_1469f4548 + 0x38))(DAT_1469f4548);
  atexit(FUN_143e831a0);
  return;
}



// FUNCTION 140275800 `dynamic_initializer_for_'CVarAllowCursorQueries'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarAllowCursorQueries''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarAllowCursorQueries__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4588 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Slate.EnableCursorQueries",&DAT_1464bfcbc,&DAT_144d5c23c,0);
  _DAT_1469f4580 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e831f0);
  return;
}



// FUNCTION 140275870 `dynamic_initializer_for_'CVarEnableSyntheticMouseMoves'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEnableSyntheticMouseMoves''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEnableSyntheticMouseMoves__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4578 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Slate.EnableSyntheticMouseMoves",&DAT_1464bfcb8,&DAT_144d5c21c,0);
  _DAT_1469f4570 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e83240);
  return;
}



// FUNCTION 1402758e0 `dynamic_initializer_for_'SleepBufferPostInput'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'SleepBufferPostInput''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__SleepBufferPostInput__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4560 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"Slate.SleepBufferPostInput",0,
                  L"The amount of time that must pass without any user action before Slate is put to sleep (provided that there are no active timers)."
                  ,0);
  _DAT_1469f4558 = &PTR_FUN_143f3ecf8;
  DAT_1469f4568 = (**(code **)(*DAT_1469f4560 + 0x40))(DAT_1469f4560);
  atexit(FUN_143e83290);
  return;
}



// FUNCTION 140275950 `dynamic_initializer_for_'TargetFrameRateForResponsiveness'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'TargetFrameRateForResponsiveness''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__TargetFrameRateForResponsiveness__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4530 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"Slate.TargetFrameRateForResponsiveness",0x23,
                  L"Minimum sustained average frame rate required before we consider the editor to be \"responsive\" for a smooth UI experience"
                  ,0);
  _DAT_1469f4528 = &PTR_FUN_143f3ecf8;
  DAT_1469f4538 = (**(code **)(*DAT_1469f4530 + 0x38))(DAT_1469f4530);
  atexit(FUN_143e832e0);
  return;
}



// FUNCTION 1402759d0 `dynamic_initializer_for_'ThrottleWhenMouseIsMoving'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'ThrottleWhenMouseIsMoving''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__ThrottleWhenMouseIsMoving__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4518 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"Slate.ThrottleWhenMouseIsMoving",0,
                  L"Whether to attempt to increase UI responsiveness based on mouse cursor movement."
                  ,0);
  _DAT_1469f4510 = &PTR_FUN_143f3ecf8;
  DAT_1469f4520 = (**(code **)(*DAT_1469f4518 + 0x38))(DAT_1469f4518);
  atexit(FUN_143e83330);
  return;
}



// FUNCTION 140275a70 ToolTipConstructor'' body=92 status=ok
// SIG undefined ToolTipConstructor''(void)

void `dynamic_initializer_for_'FMultiBoxSettings::ToolTipConstructor__(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FMemory::Realloc(0,0x20);
  DAT_1469f4668 = 2;
  DAT_1469f4660 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144d6a480;
    puVar1[1] = FUN_1418f2730;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[3] = uVar2;
  }
  atexit(FUN_143e83420);
  return;
}



// FUNCTION 140275ae0 `dynamic_initializer_for_'UnescapeHelper'' body=32 status=ok
// SIG undefined `dynamic_initializer_for_'UnescapeHelper''(void)

void _dynamic_initializer_for__UnescapeHelper__(void)

{
  FUnescapeHelper::FUnescapeHelper(&DAT_1469f4678);
  atexit(_dynamic_atexit_destructor_for__UnescapeHelper__);
  return;
}



// FUNCTION 140275b00 DefaultUndeterminedString'' body=103 status=ok
// SIG undefined DefaultUndeterminedString''(void)

void `dynamic_initializer_for_'SNumericEntryBox<float>::DefaultUndeterminedString__(void)

{
  longlong local_18 [3];
  
  local_18[1] = 4;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_144d6b8d8,8);
  FText::FromString(&DAT_1469f47f0,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit(FUN_143e835f0);
  return;
}



// FUNCTION 140275b80 `dynamic_initializer_for_'CVarDefaultTextFlowDirection'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDefaultTextFlowDirection''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDefaultTextFlowDirection__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4768 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"Slate.DefaultTextFlowDirection",0,
                  L"0: Auto (default), 1: LeftToRight, 2: RightToLeft.",0);
  _DAT_1469f4760 = &PTR_FUN_143f3ecf8;
  _DAT_1469f4770 = (**(code **)(*DAT_1469f4768 + 0x38))(DAT_1469f4768);
  atexit(FUN_143e836c0);
  return;
}



// FUNCTION 140275bf0 `dynamic_initializer_for_'ModuleRegistrantSlate'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantSlate''(void)

void _dynamic_initializer_for__ModuleRegistrantSlate__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_1469f4778;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"Slate",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140275d10 FUN_140275d10 body=32 status=ok
// SIG undefined FUN_140275d10(void)

void FUN_140275d10(void)

{
  FUN_1417e8800(&DAT_1469f5330);
  atexit(`dynamic_atexit_destructor_for_'FSlateFontAtlasNull::NullFontTexture__);
  return;
}



// FUNCTION 140275d30 FUN_140275d30 body=32 status=ok
// SIG undefined FUN_140275d30(void)

void FUN_140275d30(void)

{
  FUN_1417e8800(&DAT_1469f4e30);
  atexit(`dynamic_atexit_destructor_for_'FSlateFontAtlasNull::NullFontTexture__);
  return;
}



// FUNCTION 140275d50 FUN_140275d50 body=32 status=ok
// SIG undefined FUN_140275d50(void)

void FUN_140275d50(void)

{
  FUN_1417e8800(&DAT_1469f4bb0);
  atexit(`dynamic_atexit_destructor_for_'FSlateFontAtlasNull::NullFontTexture__);
  return;
}



// FUNCTION 140275d80 FUN_140275d80 body=32 status=ok
// SIG undefined FUN_140275d80(void)

void FUN_140275d80(void)

{
  FUN_1417e8800(&DAT_1469f50b0);
  atexit(`dynamic_atexit_destructor_for_'FSlateFontAtlasNull::NullFontTexture__);
  return;
}



// FUNCTION 140275da0 `dynamic_initializer_for_'CVarCacheRenderData'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarCacheRenderData''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarCacheRenderData__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f55b0 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Slate.CacheRenderData",&DAT_1464bfec8,
                  L"Invalidation panels will cache render data, otherwise cache only widget draw elements."
                  ,0);
  _DAT_1469f55a8 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e839f0);
  return;
}



// FUNCTION 140275e10 `dynamic_initializer_for_'CVarCrushThem'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarCrushThem''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarCrushThem__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4ae0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"Slate.AllowNumericLabelCrush",0x3f800000,
                  L"Should we crush the vector input box?.",0);
  _DAT_1469f4ad8 = &PTR_FUN_143f3ecf8;
  _DAT_1469f4ae8 = (**(code **)(*DAT_1469f4ae0 + 0x40))(DAT_1469f4ae0);
  atexit(FUN_143e83a40);
  return;
}



// FUNCTION 140275e90 `dynamic_initializer_for_'CVarDownsampleForBlur'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDownsampleForBlur''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDownsampleForBlur__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4b48 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Slate.BackgroundBlurDownsample",&DAT_1464bfec4,&DAT_144d6ee04,1);
  _DAT_1469f4b40 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e83a90);
  return;
}



// FUNCTION 140275f00 `dynamic_initializer_for_'CVarDumpVMIR'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarDumpVMIR''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarDumpVMIR__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4b70 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"SafeZone.Scale",&DAT_1464bfeb8,L"The safezone scale.",0);
  _DAT_1469f4b68 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e83ae0);
  return;
}



// FUNCTION 140275f70 `dynamic_initializer_for_'CVarForceLowQualityBackgroundBlurOverride'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarForceLowQualityBackgroundBlurOverride''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarForceLowQualityBackgroundBlurOverride__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4b58 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Slate.ForceBackgroundBlurLowQualityOverride",&DAT_1469f4ad0,
                  L"Whether or not to force a slate brush to be used instead of actually blurring the background"
                  ,0x40);
  _DAT_1469f4b50 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e83b30);
  return;
}



// FUNCTION 140275fe0 `dynamic_initializer_for_'CVarSlateAllowBackgroundBlurWidgets'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSlateAllowBackgroundBlurWidgets''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSlateAllowBackgroundBlurWidgets__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4b28 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Slate.AllowBackgroundBlurWidgets",&DAT_1464bfebc,
                  L"If 0, no background blur widgets will be rendered",0);
  _DAT_1469f4b20 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e83b80);
  return;
}



// FUNCTION 140276050 `dynamic_initializer_for_'CVarSlateMaxKernelSize'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'CVarSlateMaxKernelSize''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarSlateMaxKernelSize__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4b38 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Slate.BackgroundBlurMaxKernelSize",&DAT_1464bfec0,
                  L"The maximum allowed kernel size.  Note: Very large numbers can cause a huge decrease in performance"
                  ,0);
  _DAT_1469f4b30 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e83bd0);
  return;
}



// FUNCTION 1402760c0 `dynamic_initializer_for_'CVarStartCrushWhenBelow'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStartCrushWhenBelow''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStartCrushWhenBelow__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4b10 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"Slate.NumericLabelWidthCrushStart",0x433e0000,
                  L"Start crushing when the width is below.",0);
  _DAT_1469f4b08 = &PTR_FUN_143f3ecf8;
  _DAT_1469f4b18 = (**(code **)(*DAT_1469f4b10 + 0x40))(DAT_1469f4b10);
  atexit(FUN_143e83c20);
  return;
}



// FUNCTION 140276140 `dynamic_initializer_for_'CVarStopCrushWhenAbove'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'CVarStopCrushWhenAbove''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarStopCrushWhenAbove__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4af8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"Slate.NumericLabelWidthCrushStop",0x43480000,
                  L"Stop crushing when the width is above.",0);
  _DAT_1469f4af0 = &PTR_FUN_143f3ecf8;
  _DAT_1469f4b00 = (**(code **)(*DAT_1469f4af8 + 0x40))(DAT_1469f4af8);
  atexit(FUN_143e83c70);
  return;
}



// FUNCTION 1402761c0 `dynamic_initializer_for_'OverrideScissorRect'' body=99 status=ok
// SIG undefined `dynamic_initializer_for_'OverrideScissorRect''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Slate::_dynamic_initializer_for__OverrideScissorRect__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4b80 =
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"Slate.OverrideScissorRect",1,
                  L"Whether to allow Slate to apply a scissor clip to UI elements to prevent certain artifacts.  You might need to disable this if you are drawing UI over a mirror backbuffer while in VR."
                  ,0);
  _DAT_1469f4b78 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e83cd0);
  return;
}



// FUNCTION 140276250 `dynamic_initializer_for_'StaticToolTipWrapWidth'' body=117 status=ok
// SIG undefined `dynamic_initializer_for_'StaticToolTipWrapWidth''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__StaticToolTipWrapWidth__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f4ba0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"Slate.ToolTipWrapWidth",0x447a0000,
                  L"Width of Slate tool-tips before we wrap the tool-tip text",0);
  _DAT_1469f4b98 = &PTR_FUN_143f3ecf8;
  DAT_1469f4ba8 = (**(code **)(*DAT_1469f4ba0 + 0x40))(DAT_1469f4ba0);
  atexit(FUN_143e83d20);
  return;
}



// FUNCTION 140276470 `dynamic_initializer_for_'ScriptStruct_Slate_StaticRegisterNativesFAnchors'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Slate_StaticRegisterNativesFAnchors''(void)

void _dynamic_initializer_for__ScriptStruct_Slate_StaticRegisterNativesFAnchors__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_143f61bc8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"Anchors",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1402764d0 `dynamic_initializer_for_'ScriptStruct_Slate_StaticRegisterNativesFInputChord'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Slate_StaticRegisterNativesFInputChord''(void)

void _dynamic_initializer_for__ScriptStruct_Slate_StaticRegisterNativesFInputChord__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144d7abd0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"InputChord",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140276530 `dynamic_initializer_for_'ScriptStruct_Slate_StaticRegisterNativesFVirtualKeyboardOptions'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Slate_StaticRegisterNativesFVirtualKeyboardOptions''(void)

void _dynamic_initializer_for__ScriptStruct_Slate_StaticRegisterNativesFVirtualKeyboardOptions__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_143fd5380;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"VirtualKeyboardOptions",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140276590 FUN_140276590 body=66 status=ok
// SIG undefined FUN_140276590(void)

void FUN_140276590(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EDescendantScrollDestination",1);
  UObjectCompiledInDeferEnum(EDescendantScrollDestination_StaticEnum,L"/Script/Slate",*puVar1,0,0);
  return;
}



// FUNCTION 1402765e0 FUN_1402765e0 body=66 status=ok
// SIG undefined FUN_1402765e0(void)

void FUN_1402765e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EListItemAlignment",1);
  UObjectCompiledInDeferEnum(EListItemAlignment_StaticEnum,L"/Script/Slate",*puVar1,0,0);
  return;
}



// FUNCTION 140276630 FUN_140276630 body=66 status=ok
// SIG undefined FUN_140276630(void)

void FUN_140276630(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EMultipleKeyBindingIndex",1);
  UObjectCompiledInDeferEnum(EMultipleKeyBindingIndex_StaticEnum,L"/Script/Slate",*puVar1,0,0);
  return;
}



// FUNCTION 140276680 FUN_140276680 body=66 status=ok
// SIG undefined FUN_140276680(void)

void FUN_140276680(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EProgressBarFillType",1);
  UObjectCompiledInDeferEnum(EProgressBarFillType_StaticEnum,L"/Script/Slate",*puVar1,0,0);
  return;
}



// FUNCTION 1402766d0 FUN_1402766d0 body=66 status=ok
// SIG undefined FUN_1402766d0(void)

void FUN_1402766d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESelectionMode",1);
  UObjectCompiledInDeferEnum(ESelectionMode_StaticEnum,L"/Script/Slate",*puVar1,0,0);
  return;
}



// FUNCTION 140276720 FUN_140276720 body=66 status=ok
// SIG undefined FUN_140276720(void)

void FUN_140276720(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EStretch",1);
  UObjectCompiledInDeferEnum(EStretch_StaticEnum,L"/Script/Slate",*puVar1,0,0);
  return;
}



// FUNCTION 140276770 FUN_140276770 body=66 status=ok
// SIG undefined FUN_140276770(void)

void FUN_140276770(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EStretchDirection",1);
  UObjectCompiledInDeferEnum(EStretchDirection_StaticEnum,L"/Script/Slate",*puVar1,0,0);
  return;
}



// FUNCTION 1402767c0 FUN_1402767c0 body=66 status=ok
// SIG undefined FUN_1402767c0(void)

void FUN_1402767c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ETableViewMode",1);
  UObjectCompiledInDeferEnum(ETableViewMode_StaticEnum,L"/Script/Slate",*puVar1,0,0);
  return;
}



// FUNCTION 140276810 FUN_140276810 body=66 status=ok
// SIG undefined FUN_140276810(void)

void FUN_140276810(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ETextFlowDirection",1);
  UObjectCompiledInDeferEnum(ETextFlowDirection_StaticEnum,L"/Script/Slate",*puVar1,0,0);
  return;
}



// FUNCTION 140276860 FUN_140276860 body=66 status=ok
// SIG undefined FUN_140276860(void)

void FUN_140276860(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ETextJustify",1);
  UObjectCompiledInDeferEnum(ETextJustify_StaticEnum,L"/Script/Slate",*puVar1,0,0);
  return;
}



// FUNCTION 1402768b0 FUN_1402768b0 body=66 status=ok
// SIG undefined FUN_1402768b0(void)

void FUN_1402768b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ETextWrappingPolicy",1);
  UObjectCompiledInDeferEnum(ETextWrappingPolicy_StaticEnum,L"/Script/Slate",*puVar1,0,0);
  return;
}



// FUNCTION 140276900 FUN_140276900 body=66 status=ok
// SIG undefined FUN_140276900(void)

void FUN_140276900(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EVirtualKeyboardDismissAction",1);
  UObjectCompiledInDeferEnum(EVirtualKeyboardDismissAction_StaticEnum,L"/Script/Slate",*puVar1,0,0);
  return;
}



// FUNCTION 140276950 FUN_140276950 body=66 status=ok
// SIG undefined FUN_140276950(void)

void FUN_140276950(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Anchors",1);
  UObjectCompiledInDeferStruct(FAnchors::StaticStruct,L"/Script/Slate",*puVar1,0,0);
  return;
}



// FUNCTION 1402769a0 FUN_1402769a0 body=66 status=ok
// SIG undefined FUN_1402769a0(void)

void FUN_1402769a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"InputChord",1);
  UObjectCompiledInDeferStruct(FInputChord::StaticStruct,L"/Script/Slate",*puVar1,0,0);
  return;
}



// FUNCTION 1402769f0 FUN_1402769f0 body=66 status=ok
// SIG undefined FUN_1402769f0(void)

void FUN_1402769f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VirtualKeyboardOptions",1);
  UObjectCompiledInDeferStruct(FVirtualKeyboardOptions::StaticStruct,L"/Script/Slate",*puVar1,0,0);
  return;
}



// FUNCTION 140276a40 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UButtonWidgetStyle'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UButtonWidgetStyle''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UButtonWidgetStyle__(void)

{
  UObjectCompiledInDefer
            (FUN_1419bfc10,UButtonWidgetStyle::StaticClass,L"UButtonWidgetStyle",L"/Script/Slate",0,
             0,0);
  return;
}



// FUNCTION 140276a80 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UCheckBoxWidgetStyle'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UCheckBoxWidgetStyle''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UCheckBoxWidgetStyle__(void)

{
  UObjectCompiledInDefer
            (FUN_1419bfc40,UCheckBoxWidgetStyle::StaticClass,L"UCheckBoxWidgetStyle",
             L"/Script/Slate",0,0,0);
  return;
}



// FUNCTION 140276ac0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UComboBoxWidgetStyle'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UComboBoxWidgetStyle''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UComboBoxWidgetStyle__(void)

{
  UObjectCompiledInDefer
            (FUN_1419bfc70,UComboBoxWidgetStyle::StaticClass,L"UComboBoxWidgetStyle",
             L"/Script/Slate",0,0,0);
  return;
}



// FUNCTION 140276b00 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UComboButtonWidgetStyle'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UComboButtonWidgetStyle''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UComboButtonWidgetStyle__(void)

{
  UObjectCompiledInDefer
            (FUN_1419bfca0,UComboButtonWidgetStyle::StaticClass,L"UComboButtonWidgetStyle",
             L"/Script/Slate",0,0,0);
  return;
}



// FUNCTION 140276b40 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableTextBoxWidgetStyle'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableTextBoxWidgetStyle''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UEditableTextBoxWidgetStyle__(void)

{
  UObjectCompiledInDefer
            (FUN_1419bfcd0,UEditableTextBoxWidgetStyle::StaticClass,L"UEditableTextBoxWidgetStyle",
             L"/Script/Slate",0,0,0);
  return;
}



// FUNCTION 140276b80 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableTextWidgetStyle'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UEditableTextWidgetStyle''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UEditableTextWidgetStyle__(void)

{
  UObjectCompiledInDefer
            (FUN_1419bfd00,UEditableTextWidgetStyle::StaticClass,L"UEditableTextWidgetStyle",
             L"/Script/Slate",0,0,0);
  return;
}



// FUNCTION 140276bc0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UProgressWidgetStyle'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UProgressWidgetStyle''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UProgressWidgetStyle__(void)

{
  UObjectCompiledInDefer
            (FUN_1419bfd30,UProgressWidgetStyle::StaticClass,L"UProgressWidgetStyle",
             L"/Script/Slate",0,0,0);
  return;
}



// FUNCTION 140276c00 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UScrollBarWidgetStyle'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UScrollBarWidgetStyle''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UScrollBarWidgetStyle__(void)

{
  UObjectCompiledInDefer
            (FUN_1419bfd60,UScrollBarWidgetStyle::StaticClass,L"UScrollBarWidgetStyle",
             L"/Script/Slate",0,0,0);
  return;
}



// FUNCTION 140276c40 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UScrollBoxWidgetStyle'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UScrollBoxWidgetStyle''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UScrollBoxWidgetStyle__(void)

{
  UObjectCompiledInDefer
            (FUN_1419bfd90,UScrollBoxWidgetStyle::StaticClass,L"UScrollBoxWidgetStyle",
             L"/Script/Slate",0,0,0);
  return;
}



// FUNCTION 140276c80 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_USlateSettings'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_USlateSettings''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_USlateSettings__(void)

{
  UObjectCompiledInDefer
            (FUN_1419bfdc0,USlateSettings::GetPrivateStaticClass,L"USlateSettings",L"/Script/Slate",
             0,0,0);
  return;
}



// FUNCTION 140276cc0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_USpinBoxWidgetStyle'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_USpinBoxWidgetStyle''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_USpinBoxWidgetStyle__(void)

{
  UObjectCompiledInDefer
            (FUN_1419bfdf0,USpinBoxWidgetStyle::StaticClass,L"USpinBoxWidgetStyle",L"/Script/Slate",
             0,0,0);
  return;
}



// FUNCTION 140276d00 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UTextBlockWidgetStyle'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UTextBlockWidgetStyle''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UTextBlockWidgetStyle__(void)

{
  UObjectCompiledInDefer
            (FUN_1419bfe20,FUN_1419be7e0,L"UTextBlockWidgetStyle",L"/Script/Slate",0,0,0);
  return;
}



// FUNCTION 140276dd0 `dynamic_initializer_for_'ModuleRegistrantAppFramework'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantAppFramework''(void)

void _dynamic_initializer_for__ModuleRegistrantAppFramework__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_1469f58d8;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"AppFramework",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140276ed0 `dynamic_initializer_for_'ModuleRegistrantSandboxFile'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantSandboxFile''(void)

void _dynamic_initializer_for__ModuleRegistrantSandboxFile__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_1469f595c;
    plVar1[2] = (longlong)FUN_1419c3840;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"SandboxFile",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140276fd0 `dynamic_initializer_for_'ModuleRegistrantSockets'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantSockets''(void)

void _dynamic_initializer_for__ModuleRegistrantSockets__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_1469f5968;
    plVar1[2] = (longlong)
                FStaticallyLinkedModuleRegistrant<FSocketSubsystemModule>::InitializeModule;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"Sockets",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1402770f0 `dynamic_initializer_for_'ModuleRegistrantNetworking'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantNetworking''(void)

void _dynamic_initializer_for__ModuleRegistrantNetworking__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_1469f59a4;
    plVar1[2] = (longlong)FUN_1419c9130;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"Networking",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1402771f0 `dynamic_initializer_for_'ModuleRegistrantNullDrv'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantNullDrv''(void)

void _dynamic_initializer_for__ModuleRegistrantNullDrv__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_1469f59b4;
    plVar1[2] = (longlong)FUN_1419c9b00;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"NullDrv",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1402772f0 CVarAccelPredrawBatchTime'' body=100 status=ok
// SIG undefined CVarAccelPredrawBatchTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FShaderCache::CVarAccelPredrawBatchTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5be8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AccelPredrawBatchTime",&DAT_1469f59f8,
                  L"Override value for r.PredrawBatchTime when showing a loading-screen or similar to do more work while the player won\'t notice, or 0 to use r.PredrawBatchTime. Defaults to 0."
                  ,0x20);
  _DAT_1469f5be0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e84010);
  return;
}



// FUNCTION 140277360 CVarAccelTargetPrecompileFrameTime'' body=100 status=ok
// SIG undefined CVarAccelTargetPrecompileFrameTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FShaderCache::CVarAccelTargetPrecompileFrameTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5bf8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.AccelTargetPrecompileFrameTime",&DAT_1469f59fc,
                  L"Override value for r.TargetPrecompileFrameTime when showing a loading-screen or similar to do more work while the player won\'t notice, or 0 to use r.TargetPrecompileFrameTime. Defaults to 0."
                  ,0x20);
  _DAT_1469f5bf0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e84060);
  return;
}



// FUNCTION 1402773d0 CVarInitialShaderLoadTime'' body=100 status=ok
// SIG undefined CVarInitialShaderLoadTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FShaderCache::CVarInitialShaderLoadTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5c08 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"r.InitialShaderLoadTime",&DAT_1464c0ad8,
                  L"Time to spend loading the shader cache synchronously on startup before falling back to asynchronous precompilation/predraw. Defaults to -1 which will perform all work synchronously."
                  ,0x20);
  _DAT_1469f5c00 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e840b0);
  return;
}



// FUNCTION 140277440 CVarPredrawBatchTime'' body=100 status=ok
// SIG undefined CVarPredrawBatchTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FShaderCache::CVarPredrawBatchTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5ba8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.PredrawBatchTime",&DAT_1464c0ad0,
                  L"Time in ms to spend predrawing shaders each frame, or -1 to perform all predraws immediately."
                  ,0x20);
  _DAT_1469f5ba0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e84100);
  return;
}



// FUNCTION 1402774b0 CVarTargetPrecompileFrameTime'' body=100 status=ok
// SIG undefined CVarTargetPrecompileFrameTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FShaderCache::CVarTargetPrecompileFrameTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5bd8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.TargetPrecompileFrameTime",&DAT_1464c0ad4,
                  L"Upper limit in ms for total frame time while precompiling, allowing the shader cache to adjust how many shaders to precompile each frame. Defaults to -1 which will precompile all shaders immediately."
                  ,0x20);
  _DAT_1469f5bd0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e84150);
  return;
}



// FUNCTION 140277520 CVarUseAsyncShaderPrecompilation'' body=100 status=ok
// SIG undefined CVarUseAsyncShaderPrecompilation''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FShaderCache::CVarUseAsyncShaderPrecompilation__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5bc8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.UseAsyncShaderPrecompilation",&DAT_1469f59f4,
                  L"If true tries to perform inital shader precompilation asynchronously on a background thread. Defaults to false."
                  ,0x24);
  _DAT_1469f5bc0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e841a0);
  return;
}



// FUNCTION 140277590 CVarUseShaderBinaryCache'' body=100 status=ok
// SIG undefined CVarUseShaderBinaryCache''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FShaderCache::CVarUseShaderBinaryCache__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5bb8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.UseShaderBinaryCache",&DAT_1469f59f0,
                  L"If true generates & uses a separate cache of used shader binaries for even earlier submission - may be platform or even device specific. Defaults to false."
                  ,0x24);
  _DAT_1469f5bb0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e841f0);
  return;
}



// FUNCTION 140277600 CVarUseShaderCaching'' body=100 status=ok
// SIG undefined CVarUseShaderCaching''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FShaderCache::CVarUseShaderCaching__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5b68 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.UseShaderCaching",&DAT_1469f59e0,
                  L"If true, log all shaders & bound-shader-states, so that they may be instantiated in the RHI on deserialisation rather than waiting for first use."
                  ,0x24);
  _DAT_1469f5b60 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e84240);
  return;
}



// FUNCTION 140277670 CVarUseShaderDrawLog'' body=100 status=ok
// SIG undefined CVarUseShaderDrawLog''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FShaderCache::CVarUseShaderDrawLog__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5b98 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.UseShaderDrawLog",&DAT_1469f59ec,
                  L"If true, log all the draw states used for each shader pipeline, so that they may be pre-drawn in batches (see: r.UseShaderPredraw). This can be expensive & should be used only when generating the shader cache."
                  ,0x24);
  _DAT_1469f5b90 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e84290);
  return;
}



// FUNCTION 1402776e0 CVarUseShaderPredraw'' body=100 status=ok
// SIG undefined CVarUseShaderPredraw''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FShaderCache::CVarUseShaderPredraw__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5b88 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.UseShaderPredraw",&DAT_1469f59e8,
                  L"Use an existing draw-log to predraw shaders in batches before being used to reduce hitches due to in-driver recompilation."
                  ,0x24);
  _DAT_1469f5b80 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e842e0);
  return;
}



// FUNCTION 140277750 CVarUseUserShaderCache'' body=100 status=ok
// SIG undefined CVarUseUserShaderCache''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FShaderCache::CVarUseUserShaderCache__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5b78 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.UseUserShaderCache",&DAT_1469f59e4,
                  L"If true, shader caching will use (and store) draw-log from a user directory, otherwise only draw-log stored in game content directory"
                  ,0x20);
  _DAT_1469f5b70 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e84330);
  return;
}



// FUNCTION 140277800 StaticType'' body=491 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FNULLPS::StaticType__(void)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  undefined **local_res10 [3];
  undefined *local_18;
  undefined ***local_10;
  
  FName::FName(&DAT_1464c0b58,L"FNULLPS",1);
  _DAT_1464c0b70 = 3;
  _DAT_1464c0b60 = L"/Engine/Private/NullPixelShader.usf";
  _DAT_1464c0b74 = 1;
  _DAT_1464c0b68 = L"Main";
  _DAT_1464c0bb8 = 0xffffffff;
  _DAT_1464c0b78 = FUN_1419e6890;
  _DAT_1464c0b80 = AK::MemoryMgr::StartProfileThreadUsage;
  _DAT_1464c0b88 = 0;
  _DAT_1464c0b90 = 0;
  _DAT_1464c0ba8 = 0;
  _DAT_1464c0bb0 = 0;
  _DAT_1464c0bbc = 0;
  _DAT_1464c0bc8 = 0;
  _DAT_1464c0bd0 = 0;
  _DAT_1464c0bf0 = 0;
  _DAT_1464c0bf8 = 0;
  _DAT_1464c0c00 = 0;
  _DAT_1464c0c08 = 0;
  _DAT_1464c0c10 = 0;
  _DAT_1464c0c20 = 0;
  _DAT_1464c0c28 = 0;
  _DAT_1464c0c40 = 0;
  _DAT_1464c0c48 = 0;
  _DAT_1464c0c54 = 0;
  _DAT_1464c0c60 = 0;
  _DAT_1464c0c68 = 0;
  DAT_1464c0c18 = 0;
  _DAT_1464c0be8 = &PTR_PTR_1464c0b40;
  _DAT_1464c0c50 = 0xffffffff;
  _DAT_1464c0bd8 = (longlong)DAT_1469f5dd8;
  if (DAT_1469f5dd8 != (undefined *)0x0) {
    *(undefined **)((longlong)DAT_1469f5dd8 + 8) = &DAT_1464c0bd8;
    _DAT_1464c0bd8 = (longlong)DAT_1469f5dd8;
  }
  _DAT_1464c0be0 = &DAT_1469f5dd8;
  DAT_1469f5dd8 = &DAT_1464c0bd8;
  local_res10[0] = &PTR_PTR_1464c0b40;
  uVar1 = FShaderType::GetNameToTypeMap();
  local_10 = local_res10;
  local_18 = &DAT_1464c0b58;
  FUN_1416e1690(uVar1,local_res8,&local_18,0);
  _DAT_1464c0b4c = DAT_1469f5dfc;
  DAT_1469f5dfc = DAT_1469f5dfc + 1;
  PTR_PTR_1464c0b40 = (undefined *)&PTR__scalar_deleting_destructor__143f47578;
  _DAT_1464c0c70 = FUN_1419e6830;
  _DAT_1464c0c78 = BuildSettings::IsPromotedBuild;
  _DAT_1464c0c80 = BuildSettings::IsPromotedBuild;
  _DAT_1464c0c88 = AK::MemoryMgr::StartProfileThreadUsage;
  atexit((_func_5014 *)&LAB_143e843e0);
  return;
}



// FUNCTION 1402779f0 FUN_1402779f0 body=115 status=ok
// SIG undefined FUN_1402779f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402779f0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5d28 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.AsyncCompile",1,&DAT_144d8889c,0x20);
  _DAT_1469f5d20 = &PTR_FUN_143f3ecf8;
  DAT_1469f5d30 = (**(code **)(*DAT_1469f5d28 + 0x38))(DAT_1469f5d28);
  atexit(FUN_143e843f0);
  return;
}



// FUNCTION 140277a70 `dynamic_initializer_for_'CVarPSOFileCacheAutoSaveTime'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPSOFileCacheAutoSaveTime''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPSOFileCacheAutoSaveTime__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5d58 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.AutoSaveTime",0x1e,
                  L"Set the time where any logged PSO\'s will be saved if the number is < r.ShaderPipelineCache.SaveAfterPSOsLogged. Disabled when r.ShaderPipelineCache.SaveAfterPSOsLogged is 0"
                  ,0x20);
  _DAT_1469f5d50 = &PTR_FUN_143f3ecf8;
  DAT_1469f5d60 = (**(code **)(*DAT_1469f5d58 + 0x38))(DAT_1469f5d58);
  atexit(FUN_143e84440);
  return;
}



// FUNCTION 140277af0 `dynamic_initializer_for_'CVarPSOFileCacheAutoSaveTimeBoundPSO'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPSOFileCacheAutoSaveTimeBoundPSO''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPSOFileCacheAutoSaveTimeBoundPSO__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5d70 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.AutoSaveTimeBoundPSO",10,
                  L"Set the time where any logged PSO\'s will be saved when -logpso is on th ecommand line."
                  ,0x20);
  _DAT_1469f5d68 = &PTR_FUN_143f3ecf8;
  DAT_1469f5d78 = (**(code **)(*DAT_1469f5d70 + 0x38))(DAT_1469f5d70);
  atexit(FUN_143e84490);
  return;
}



// FUNCTION 140277b70 FUN_140277b70 body=115 status=ok
// SIG undefined FUN_140277b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140277b70(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5c80 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.BackgroundBatchSize",2,
                  L"Set the number of PipelineStateObjects to compile in a single batch operation when compiling in the background. Defaults to a maximum of 1 per frame, due to async. file IO it is less in practice."
                  ,0x20);
  _DAT_1469f5c78 = &PTR_FUN_143f3ecf8;
  DAT_1469f5c88 = (**(code **)(*DAT_1469f5c80 + 0x38))(DAT_1469f5c80);
  atexit(FUN_143e844e0);
  return;
}



// FUNCTION 140277bf0 FUN_140277bf0 body=115 status=ok
// SIG undefined FUN_140277bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140277bf0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5c98 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.BatchSize",0x14,
                  L"Set the number of PipelineStateObjects to compile in a single batch operation when compiling takes priority. Defaults to a maximum of 50 per frame, due to async. file IO it is less in practice."
                  ,0x20);
  _DAT_1469f5c90 = &PTR_FUN_143f3ecf8;
  DAT_1469f5ca0 = (**(code **)(*DAT_1469f5c98 + 0x38))(DAT_1469f5c98);
  atexit(FUN_143e84530);
  return;
}



// FUNCTION 140277c70 FUN_140277c70 body=112 status=ok
// SIG undefined FUN_140277c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140277c70(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5d10 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.OpenDefaultOnInit",0,&DAT_144d88874,0x20);
  _DAT_1469f5d08 = &PTR_FUN_143f3ecf8;
  DAT_1469f5d18 = (**(code **)(*DAT_1469f5d10 + 0x38))(DAT_1469f5d10);
  atexit(FUN_143e84580);
  return;
}



// FUNCTION 140277ce0 `dynamic_initializer_for_'CVarPSOFileCacheSaveAfterPSOsLogged'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPSOFileCacheSaveAfterPSOsLogged''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPSOFileCacheSaveAfterPSOsLogged__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5d40 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.SaveAfterPSOsLogged",0,
                  L"Set the number of PipelineStateObjects to log before automatically saving. 0 will disable automatic saving. Shipping defaults to 0, otherwise default is 100."
                  ,0x20);
  _DAT_1469f5d38 = &PTR_FUN_143f3ecf8;
  DAT_1469f5d48 = (**(code **)(*DAT_1469f5d40 + 0x38))(DAT_1469f5d40);
  atexit(FUN_143e845d0);
  return;
}



// FUNCTION 140277d50 `dynamic_initializer_for_'CVarPSOFileCacheSaveBoundPSOLog'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarPSOFileCacheSaveBoundPSOLog''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarPSOFileCacheSaveBoundPSOLog__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5d88 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.SaveBoundPSOLog",0,
                  L"If > 0 then a log of all bound PSOs for this run of the program will be saved to a writable user cache file. Defaults to 0 but is forced on with -logpso."
                  ,0x20);
  _DAT_1469f5d80 = &PTR_FUN_143f3ecf8;
  DAT_1469f5d90 = (**(code **)(*DAT_1469f5d88 + 0x38))(DAT_1469f5d88);
  atexit(FUN_143e84620);
  return;
}



// FUNCTION 140277dc0 FUN_140277dc0 body=117 status=ok
// SIG undefined FUN_140277dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140277dc0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5cc8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.SuperFastBatchModeDynAdjustScale",0x3dcccccd
                  ,&DAT_144d88194,0x20);
  _DAT_1469f5cc0 = &PTR_FUN_143f3ecf8;
  _DAT_1469f5cd0 = (**(code **)(*DAT_1469f5cc8 + 0x40))(DAT_1469f5cc8);
  atexit(FUN_143e84670);
  return;
}



// FUNCTION 140277e40 FUN_140277e40 body=115 status=ok
// SIG undefined FUN_140277e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140277e40(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5cf8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.SuperFastBatchModeMaxFPS",0x19,
                  &DAT_144d886d4,0x20);
  _DAT_1469f5cf0 = &PTR_FUN_143f3ecf8;
  _DAT_1469f5d00 = (**(code **)(*DAT_1469f5cf8 + 0x38))(DAT_1469f5cf8);
  atexit(FUN_143e846c0);
  return;
}



// FUNCTION 140277ec0 FUN_140277ec0 body=115 status=ok
// SIG undefined FUN_140277ec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140277ec0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5ce0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.SuperFastBatchModeMinFPS",0xc,&DAT_144d88324
                  ,0x20);
  _DAT_1469f5cd8 = &PTR_FUN_143f3ecf8;
  _DAT_1469f5ce8 = (**(code **)(*DAT_1469f5ce0 + 0x38))(DAT_1469f5ce0);
  atexit(FUN_143e84710);
  return;
}



// FUNCTION 140277f40 FUN_140277f40 body=117 status=ok
// SIG undefined FUN_140277f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140277f40(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5cb0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.SuperFastBatchModeScale",0x40800000,
                  &DAT_144d87eb4,0x20);
  _DAT_1469f5ca8 = &PTR_FUN_143f3ecf8;
  DAT_1469f5cb8 = (**(code **)(*DAT_1469f5cb0 + 0x40))(DAT_1469f5cb0);
  atexit(FUN_143e84760);
  return;
}



// FUNCTION 140277fc0 `dynamic_initializer_for_'CVarShaderDevelopmentMode'' body=112 status=ok
// SIG undefined `dynamic_initializer_for_'CVarShaderDevelopmentMode''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarShaderDevelopmentMode__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5c40 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderDevelopmentMode",0,
                  L"0: Default, 1: Enable various shader development utilities, such as the ability to retry on failed shader compile, and extra logging as shaders are compiled."
                  ,0);
  _DAT_1469f5c38 = &PTR_FUN_143f3ecf8;
  _DAT_1469f5c48 = (**(code **)(*DAT_1469f5c40 + 0x38))(DAT_1469f5c40);
  atexit(FUN_143e847b0);
  return;
}



// FUNCTION 140278030 `dynamic_initializer_for_'CVarUsePipelines'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarUsePipelines''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarUsePipelines__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5b18 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"r.ShaderPipelines",1,L"Enable using Shader pipelines.",0);
  DAT_1469f5b10 = &PTR_FUN_143f3ecf8;
  _DAT_1469f5b20 = (**(code **)(*DAT_1469f5b18 + 0x38))(DAT_1469f5b18);
  atexit(FUN_143e84800);
  return;
}



// FUNCTION 1402780b0 FUN_1402780b0 body=269 status=ok
// SIG undefined FUN_1402780b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402780b0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)FUN_1419e5460;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5dc0 =
       (**(code **)(*DAT_1468b1f88 + 0x88))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.Close",
                  L"Close the current pipeline file cache.",&local_18,0);
  _DAT_1469f5db8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402781ac;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402781ac:
  atexit(FUN_143e84850);
  return;
}



// FUNCTION 1402781c0 FUN_1402781c0 body=51 status=ok
// SIG undefined FUN_1402781c0(void)

void FUN_1402781c0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1469f5c50);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1469f5c50,4000);
  atexit((_func_5014 *)&LAB_143e848a0);
  return;
}



// FUNCTION 140278200 `dynamic_initializer_for_'GCVarShaderCacheBinaryCacheLogging'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'GCVarShaderCacheBinaryCacheLogging''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GCVarShaderCacheBinaryCacheLogging__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5c18 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"r.BinaryShaderCacheLogging",&DAT_1469f5a00,
                  L"Log duplicate shader code entries within a project and report on shader code details when generating the binary shader cache. Defaults to 0."
                  ,0x20);
  _DAT_1469f5c10 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143e848b0);
  return;
}



// FUNCTION 140278290 `dynamic_initializer_for_'GRegisterShaderCacheGameVersion'' body=97 status=ok
// SIG undefined `dynamic_initializer_for_'GRegisterShaderCacheGameVersion''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GRegisterShaderCacheGameVersion__(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = _DAT_1464c0ca0;
  uStack_14 = uRam00000001464c0ca4;
  uStack_10 = uRam00000001464c0ca8;
  uStack_c = uRam00000001464c0cac;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ShaderCacheGameVersion",1);
  uVar2 = FEngineVersion::Current();
  uVar3 = FEngineVersionBase::GetChangelist(uVar2);
  FCustomVersionRegistration::FCustomVersionRegistration(&DAT_1469f5b50,&local_18,uVar3,*puVar1);
  atexit((_func_5014 *)&LAB_143e84900);
  return;
}



// FUNCTION 140278300 `dynamic_initializer_for_'GRegisterShaderCacheVersion'' body=81 status=ok
// SIG undefined `dynamic_initializer_for_'GRegisterShaderCacheVersion''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__GRegisterShaderCacheVersion__(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = _DAT_1464c0c90;
  uStack_14 = uRam00000001464c0c94;
  uStack_10 = uRam00000001464c0c98;
  uStack_c = uRam00000001464c0c9c;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ShaderCacheVersion",1);
  FCustomVersionRegistration::FCustomVersionRegistration(&DAT_1469f5b40,&local_18,0x10,*puVar1);
  atexit((_func_5014 *)&LAB_143e84910);
  return;
}



// FUNCTION 140278380 FUN_140278380 body=269 status=ok
// SIG undefined FUN_140278380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140278380(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)ConsoleCommandLoadPipelineFileCache;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5da0 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.Open",
                  L"Takes the desired filename to open and then loads the pipeline file cache.",
                  &local_18,0);
  _DAT_1469f5d98 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14027847c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14027847c:
  atexit(FUN_143e849e0);
  return;
}



// FUNCTION 140278490 `dynamic_initializer_for_'ModuleRegistrantShaderCore'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantShaderCore''(void)

void _dynamic_initializer_for__ModuleRegistrantShaderCore__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_1469f5b3c;
    plVar1[2] = (longlong)FUN_1419f3820;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"ShaderCore",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140278590 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464c0d28,0);
  FGenericPlatformString::Memcpy(DAT_1464c0d28,L".ushaderpipelines",0x24);
  atexit((_func_5014 *)&LAB_143e84a30);
  return;
}



// FUNCTION 1402785d0 FUN_1402785d0 body=269 status=ok
// SIG undefined FUN_1402785d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402785d0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)ConsoleCommandSavePipelineFileCache;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5db0 =
       (**(code **)(*DAT_1468b1f88 + 0x88))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.Save",
                  L"Save the current pipeline file cache.",&local_18,0);
  _DAT_1469f5da8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1402786cc;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1402786cc:
  atexit(FUN_143e84a50);
  return;
}



// FUNCTION 1402786e0 `dynamic_initializer_for_'ShaderExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'ShaderExtension''(void)

void _dynamic_initializer_for__ShaderExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464c0d08,0);
  FGenericPlatformString::Memcpy(DAT_1464c0d08,L".ushaderbytecode",0x22);
  atexit((_func_5014 *)&LAB_143e84aa0);
  return;
}



// FUNCTION 140278740 `dynamic_initializer_for_'StableExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StableExtension''(void)

void _dynamic_initializer_for__StableExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464c0d18,0);
  FGenericPlatformString::Memcpy(DAT_1464c0d18,L".scl.csv",0x12);
  atexit((_func_5014 *)&LAB_143e84ac0);
  return;
}



// FUNCTION 140278780 FUN_140278780 body=269 status=ok
// SIG undefined FUN_140278780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140278780(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)FUN_1419e65d0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469f5dd0 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"r.ShaderPipelineCache.SetBatchMode",
                  L"Sets the compilation batch mode, which should be one of:\n\tPause: Suspend precompilation.\n\tBackground: Low priority precompilation.\n\tFast: High priority precompilation."
                  ,&local_18,0);
  _DAT_1469f5dc8 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14027887c;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14027887c:
  atexit(FUN_143e84ae0);
  return;
}



// FUNCTION 140278890 StaticStruct'' body=606 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FAYUVConvertUB::StaticStruct__(void)

{
  undefined8 *puVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  undefined8 *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_40 = 1;
  local_48 = (undefined8 *)0x0;
  local_38 = L"ColorTransform";
  pwStack_30 = L"";
  local_28 = 0;
  uStack_10 = 0;
  uStack_24 = 4;
  uStack_1c = 4;
  local_18 = 4;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,0);
  uVar6 = uStack_1c;
  uVar3 = local_28;
  pwVar2 = pwStack_30;
  pwStack_30 = L"";
  uVar4 = (undefined4)uStack_24;
  uVar5 = uStack_24._4_4_;
  local_28 = 0x40;
  *local_48 = local_38;
  local_48[1] = pwVar2;
  uStack_24 = 3;
  uVar7 = (undefined4)local_18;
  uVar8 = local_18._4_4_;
  uStack_1c = 1;
  *(undefined4 *)(local_48 + 2) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar4;
  *(undefined4 *)(local_48 + 3) = uVar5;
  *(undefined4 *)((longlong)local_48 + 0x1c) = uVar6;
  local_18 = 1;
  *(undefined4 *)(local_48 + 4) = uVar7;
  *(undefined4 *)((longlong)local_48 + 0x24) = uVar8;
  *(undefined4 *)(local_48 + 5) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)local_48 + 0x2c) = uStack_10._4_4_;
  lVar14 = (longlong)(int)local_40;
  local_38 = L"SrgbToLinear";
  uStack_10 = 0;
  iVar11 = (int)local_40 + 1;
  if (local_40._4_4_ < iVar11) {
    uVar13 = local_40 & 0xffffffff;
    local_40._0_4_ = iVar11;
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,uVar13);
    iVar11 = (int)local_40;
  }
  local_40._0_4_ = iVar11;
  uVar6 = uStack_1c;
  uVar3 = local_28;
  iVar11 = (int)local_40;
  uVar4 = (undefined4)uStack_24;
  uVar5 = uStack_24._4_4_;
  local_28 = 0x48;
  uStack_24 = 9;
  local_48[lVar14 * 6] = local_38;
  (local_48 + lVar14 * 6)[1] = pwStack_30;
  uStack_1c = 1;
  uVar7 = (undefined4)local_18;
  uVar8 = local_18._4_4_;
  uVar9 = (undefined4)uStack_10;
  uVar10 = uStack_10._4_4_;
  local_18 = 1;
  puVar1 = local_48 + lVar14 * 6 + 2;
  *(undefined4 *)puVar1 = uVar3;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar4;
  *(undefined4 *)(puVar1 + 1) = uVar5;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar6;
  uStack_10 = 0;
  puVar1 = local_48 + lVar14 * 6 + 4;
  *(undefined4 *)puVar1 = uVar7;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar8;
  *(undefined4 *)(puVar1 + 1) = uVar9;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar10;
  lVar14 = (longlong)(int)local_40;
  local_38 = L"Texture";
  pwStack_30 = L"Texture2D";
  local_40._0_4_ = (int)local_40 + 1;
  if (local_40._4_4_ < (int)local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar11);
  }
  uVar6 = uStack_1c;
  uVar3 = local_28;
  iVar11 = (int)local_40;
  uVar4 = (undefined4)uStack_24;
  uVar5 = uStack_24._4_4_;
  local_28 = 0x50;
  uStack_24 = 8;
  local_48[lVar14 * 6] = local_38;
  (local_48 + lVar14 * 6)[1] = pwStack_30;
  uStack_1c = 1;
  uVar7 = (undefined4)local_18;
  uVar8 = local_18._4_4_;
  uVar9 = (undefined4)uStack_10;
  uVar10 = uStack_10._4_4_;
  local_18 = 1;
  puVar1 = local_48 + lVar14 * 6 + 2;
  *(undefined4 *)puVar1 = uVar3;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar4;
  *(undefined4 *)(puVar1 + 1) = uVar5;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar6;
  uStack_10 = 0;
  puVar1 = local_48 + lVar14 * 6 + 4;
  *(undefined4 *)puVar1 = uVar7;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar8;
  *(undefined4 *)(puVar1 + 1) = uVar9;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar10;
  lVar14 = (longlong)(int)local_40;
  local_38 = L"Sampler";
  pwStack_30 = L"SamplerState";
  local_40._0_4_ = (int)local_40 + 1;
  if (local_40._4_4_ < (int)local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar11);
  }
  local_48[lVar14 * 6] = local_38;
  (local_48 + lVar14 * 6)[1] = pwStack_30;
  puVar1 = local_48 + lVar14 * 6 + 2;
  *(undefined4 *)puVar1 = local_28;
  *(undefined4 *)((longlong)puVar1 + 4) = (undefined4)uStack_24;
  *(undefined4 *)(puVar1 + 1) = uStack_24._4_4_;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_1c;
  puVar1 = local_48 + lVar14 * 6 + 4;
  *(undefined4 *)puVar1 = (undefined4)local_18;
  *(undefined4 *)((longlong)puVar1 + 4) = local_18._4_4_;
  *(undefined4 *)(puVar1 + 1) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_10._4_4_;
  uVar12 = FName::FName(local_res8,L"FAYUVConvertUB",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_1469f6a00,uVar12,L"FAYUVConvertUB",L"AYUVConvertUB",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x60,&local_48,1);
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e84b30);
  return;
}



// FUNCTION 140278af0 StaticStruct'' body=606 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FBMPConvertUB::StaticStruct__(void)

{
  undefined8 *puVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  undefined8 *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_40 = 1;
  local_48 = (undefined8 *)0x0;
  local_38 = L"SrgbToLinear";
  pwStack_30 = L"";
  local_28 = 0;
  uStack_10 = 0;
  uStack_24 = 3;
  uStack_1c = 1;
  local_18 = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,0);
  uVar6 = uStack_1c;
  uVar3 = local_28;
  pwVar2 = pwStack_30;
  pwStack_30 = L"";
  uVar4 = (undefined4)uStack_24;
  uVar5 = uStack_24._4_4_;
  local_28 = 8;
  *local_48 = local_38;
  local_48[1] = pwVar2;
  uStack_24 = 4;
  uVar7 = (undefined4)local_18;
  uVar8 = local_18._4_4_;
  uStack_1c = 1;
  *(undefined4 *)(local_48 + 2) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar4;
  *(undefined4 *)(local_48 + 3) = uVar5;
  *(undefined4 *)((longlong)local_48 + 0x1c) = uVar6;
  local_18 = 2;
  *(undefined4 *)(local_48 + 4) = uVar7;
  *(undefined4 *)((longlong)local_48 + 0x24) = uVar8;
  *(undefined4 *)(local_48 + 5) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)local_48 + 0x2c) = uStack_10._4_4_;
  lVar14 = (longlong)(int)local_40;
  local_38 = L"UVScale";
  uStack_10 = 0;
  iVar11 = (int)local_40 + 1;
  if (local_40._4_4_ < iVar11) {
    uVar13 = local_40 & 0xffffffff;
    local_40._0_4_ = iVar11;
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,uVar13);
    iVar11 = (int)local_40;
  }
  local_40._0_4_ = iVar11;
  uVar6 = uStack_1c;
  uVar3 = local_28;
  iVar11 = (int)local_40;
  uVar4 = (undefined4)uStack_24;
  uVar5 = uStack_24._4_4_;
  local_28 = 0x10;
  uStack_24 = 9;
  local_48[lVar14 * 6] = local_38;
  (local_48 + lVar14 * 6)[1] = pwStack_30;
  uStack_1c = 1;
  uVar7 = (undefined4)local_18;
  uVar8 = local_18._4_4_;
  uVar9 = (undefined4)uStack_10;
  uVar10 = uStack_10._4_4_;
  local_18 = 1;
  puVar1 = local_48 + lVar14 * 6 + 2;
  *(undefined4 *)puVar1 = uVar3;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar4;
  *(undefined4 *)(puVar1 + 1) = uVar5;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar6;
  uStack_10 = 0;
  puVar1 = local_48 + lVar14 * 6 + 4;
  *(undefined4 *)puVar1 = uVar7;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar8;
  *(undefined4 *)(puVar1 + 1) = uVar9;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar10;
  lVar14 = (longlong)(int)local_40;
  local_38 = L"Texture";
  pwStack_30 = L"Texture2D";
  local_40._0_4_ = (int)local_40 + 1;
  if (local_40._4_4_ < (int)local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar11);
  }
  uVar6 = uStack_1c;
  uVar3 = local_28;
  iVar11 = (int)local_40;
  uVar4 = (undefined4)uStack_24;
  uVar5 = uStack_24._4_4_;
  local_28 = 0x18;
  uStack_24 = 8;
  local_48[lVar14 * 6] = local_38;
  (local_48 + lVar14 * 6)[1] = pwStack_30;
  uStack_1c = 1;
  uVar7 = (undefined4)local_18;
  uVar8 = local_18._4_4_;
  uVar9 = (undefined4)uStack_10;
  uVar10 = uStack_10._4_4_;
  local_18 = 1;
  puVar1 = local_48 + lVar14 * 6 + 2;
  *(undefined4 *)puVar1 = uVar3;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar4;
  *(undefined4 *)(puVar1 + 1) = uVar5;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar6;
  uStack_10 = 0;
  puVar1 = local_48 + lVar14 * 6 + 4;
  *(undefined4 *)puVar1 = uVar7;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar8;
  *(undefined4 *)(puVar1 + 1) = uVar9;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar10;
  lVar14 = (longlong)(int)local_40;
  local_38 = L"Sampler";
  pwStack_30 = L"SamplerState";
  local_40._0_4_ = (int)local_40 + 1;
  if (local_40._4_4_ < (int)local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar11);
  }
  local_48[lVar14 * 6] = local_38;
  (local_48 + lVar14 * 6)[1] = pwStack_30;
  puVar1 = local_48 + lVar14 * 6 + 2;
  *(undefined4 *)puVar1 = local_28;
  *(undefined4 *)((longlong)puVar1 + 4) = (undefined4)uStack_24;
  *(undefined4 *)(puVar1 + 1) = uStack_24._4_4_;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_1c;
  puVar1 = local_48 + lVar14 * 6 + 4;
  *(undefined4 *)puVar1 = (undefined4)local_18;
  *(undefined4 *)((longlong)puVar1 + 4) = local_18._4_4_;
  *(undefined4 *)(puVar1 + 1) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_10._4_4_;
  uVar12 = FName::FName(local_res8,L"FBMPConvertUB",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_1469f6be0,uVar12,L"FBMPConvertUB",L"BMPConvertUB",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x20,&local_48,1);
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e84b40);
  return;
}



// FUNCTION 140278d50 StaticStruct'' body=252 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FClearShaderUB::StaticStruct__(void)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  undefined8 *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined2 *puStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  local_40 = 1;
  local_48 = (undefined8 *)0x0;
  local_38 = L"DrawColorMRT";
  puStack_30 = &DAT_143f3eda8;
  local_28 = 0;
  uStack_24 = 4;
  uStack_1c = 1;
  local_18 = 4;
  uStack_14 = 8;
  uStack_10 = 0;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,0);
  *local_48 = local_38;
  local_48[1] = puStack_30;
  *(undefined4 *)(local_48 + 2) = local_28;
  *(undefined4 *)((longlong)local_48 + 0x14) = (undefined4)uStack_24;
  *(undefined4 *)(local_48 + 3) = uStack_24._4_4_;
  *(undefined4 *)((longlong)local_48 + 0x1c) = uStack_1c;
  *(undefined4 *)(local_48 + 4) = local_18;
  *(undefined4 *)((longlong)local_48 + 0x24) = uStack_14;
  *(undefined4 *)(local_48 + 5) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)local_48 + 0x2c) = uStack_10._4_4_;
  uVar1 = FName::FName(local_res8,L"FClearShaderUB",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_1469f84a0,uVar1,L"FClearShaderUB",L"ClearShaderUB",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x80,&local_48,1);
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e84b50);
  return;
}



// FUNCTION 140278e50 StaticStruct'' body=407 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FNV12ConvertUB::StaticStruct__(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  longlong local_48;
  int local_40;
  int local_3c;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FNV12ConvertUB::zzGetMembersBefore(&local_48,local_res8[0]);
  iVar3 = local_40;
  lVar14 = (longlong)local_40;
  local_38 = L"SamplerB";
  local_28 = 0x58;
  pwStack_30 = L"SamplerState";
  local_40 = local_40 + 1;
  uStack_24 = 8;
  uStack_1c = 1;
  local_18 = 1;
  uStack_10 = 0;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  uVar8 = uStack_1c;
  uVar5 = local_28;
  pwVar4 = pwStack_30;
  iVar3 = local_40;
  pwStack_30 = L"SamplerState";
  uVar6 = (undefined4)uStack_24;
  uVar7 = uStack_24._4_4_;
  local_28 = 0x60;
  uStack_24 = 8;
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = pwVar4;
  uStack_1c = 1;
  uVar9 = (undefined4)local_18;
  uVar10 = local_18._4_4_;
  uVar11 = (undefined4)uStack_10;
  uVar12 = uStack_10._4_4_;
  local_18 = 1;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar14 * 0x30);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  uStack_10 = 0;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar14 * 0x30);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  lVar14 = (longlong)local_40;
  local_38 = L"SamplerP";
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = pwStack_30;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar14 * 0x30);
  *puVar2 = local_28;
  puVar2[1] = (undefined4)uStack_24;
  puVar2[2] = uStack_24._4_4_;
  puVar2[3] = uStack_1c;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar14 * 0x30);
  *puVar2 = (undefined4)local_18;
  puVar2[1] = local_18._4_4_;
  puVar2[2] = (undefined4)uStack_10;
  puVar2[3] = uStack_10._4_4_;
  uVar13 = FName::FName(local_res8,L"FNV12ConvertUB",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_1469f6dc0,uVar13,L"FNV12ConvertUB",L"NV12ConvertUB",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x70,&local_48,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e84b60);
  return;
}



// FUNCTION 140278ff0 StaticStruct'' body=407 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FNV21ConvertUB::StaticStruct__(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  longlong local_48;
  int local_40;
  int local_3c;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FNV12ConvertUB::zzGetMembersBefore(&local_48,local_res8[0]);
  iVar3 = local_40;
  lVar14 = (longlong)local_40;
  local_38 = L"SamplerB";
  local_28 = 0x58;
  pwStack_30 = L"SamplerState";
  local_40 = local_40 + 1;
  uStack_24 = 8;
  uStack_1c = 1;
  local_18 = 1;
  uStack_10 = 0;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  uVar8 = uStack_1c;
  uVar5 = local_28;
  pwVar4 = pwStack_30;
  iVar3 = local_40;
  pwStack_30 = L"SamplerState";
  uVar6 = (undefined4)uStack_24;
  uVar7 = uStack_24._4_4_;
  local_28 = 0x60;
  uStack_24 = 8;
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = pwVar4;
  uStack_1c = 1;
  uVar9 = (undefined4)local_18;
  uVar10 = local_18._4_4_;
  uVar11 = (undefined4)uStack_10;
  uVar12 = uStack_10._4_4_;
  local_18 = 1;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar14 * 0x30);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  uStack_10 = 0;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar14 * 0x30);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  lVar14 = (longlong)local_40;
  local_38 = L"SamplerP";
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = pwStack_30;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar14 * 0x30);
  *puVar2 = local_28;
  puVar2[1] = (undefined4)uStack_24;
  puVar2[2] = uStack_24._4_4_;
  puVar2[3] = uStack_1c;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar14 * 0x30);
  *puVar2 = (undefined4)local_18;
  puVar2[1] = local_18._4_4_;
  puVar2[2] = (undefined4)uStack_10;
  puVar2[3] = uStack_10._4_4_;
  uVar13 = FName::FName(local_res8,L"FNV21ConvertUB",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_1469f6fa0,uVar13,L"FNV21ConvertUB",L"NV21ConvertUB",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x70,&local_48,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e84b70);
  return;
}



// FUNCTION 140279190 FUN_140279190 body=494 status=ok
// SIG undefined FUN_140279190(void)

void FUN_140279190(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  undefined8 *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_40 = 1;
  local_48 = (undefined8 *)0x0;
  local_38 = L"UVScale";
  local_28 = 0;
  pwStack_30 = L"";
  uStack_24 = 4;
  uStack_1c = 1;
  local_18 = 2;
  uStack_10 = 0;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,0);
  uVar5 = uStack_1c;
  uVar2 = local_28;
  uVar3 = (undefined4)uStack_24;
  uVar4 = uStack_24._4_4_;
  local_28 = 8;
  *local_48 = local_38;
  local_48[1] = pwStack_30;
  uStack_24 = 9;
  uVar6 = (undefined4)local_18;
  uVar7 = local_18._4_4_;
  uStack_1c = 1;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0x1c) = uVar5;
  local_18 = 1;
  *(undefined4 *)(local_48 + 4) = uVar6;
  *(undefined4 *)((longlong)local_48 + 0x24) = uVar7;
  *(undefined4 *)(local_48 + 5) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)local_48 + 0x2c) = uStack_10._4_4_;
  lVar13 = (longlong)(int)local_40;
  local_38 = L"Texture";
  pwStack_30 = L"Texture2D";
  uStack_10 = 0;
  iVar10 = (int)local_40 + 1;
  if (local_40._4_4_ < iVar10) {
    uVar12 = local_40 & 0xffffffff;
    local_40._0_4_ = iVar10;
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,uVar12);
    iVar10 = (int)local_40;
  }
  local_40._0_4_ = iVar10;
  uVar5 = uStack_1c;
  uVar2 = local_28;
  iVar10 = (int)local_40;
  uVar3 = (undefined4)uStack_24;
  uVar4 = uStack_24._4_4_;
  local_28 = 0x10;
  uStack_24 = 8;
  local_48[lVar13 * 6] = local_38;
  (local_48 + lVar13 * 6)[1] = pwStack_30;
  uStack_1c = 1;
  uVar6 = (undefined4)local_18;
  uVar7 = local_18._4_4_;
  uVar8 = (undefined4)uStack_10;
  uVar9 = uStack_10._4_4_;
  local_18 = 1;
  puVar1 = local_48 + lVar13 * 6 + 2;
  *(undefined4 *)puVar1 = uVar2;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar3;
  *(undefined4 *)(puVar1 + 1) = uVar4;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar5;
  uStack_10 = 0;
  puVar1 = local_48 + lVar13 * 6 + 4;
  *(undefined4 *)puVar1 = uVar6;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar7;
  *(undefined4 *)(puVar1 + 1) = uVar8;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar9;
  lVar13 = (longlong)(int)local_40;
  local_38 = L"Sampler";
  pwStack_30 = L"SamplerState";
  local_40._0_4_ = (int)local_40 + 1;
  if (local_40._4_4_ < (int)local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar10);
  }
  local_48[lVar13 * 6] = local_38;
  (local_48 + lVar13 * 6)[1] = pwStack_30;
  puVar1 = local_48 + lVar13 * 6 + 2;
  *(undefined4 *)puVar1 = local_28;
  *(undefined4 *)((longlong)puVar1 + 4) = (undefined4)uStack_24;
  *(undefined4 *)(puVar1 + 1) = uStack_24._4_4_;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_1c;
  puVar1 = local_48 + lVar13 * 6 + 4;
  *(undefined4 *)puVar1 = (undefined4)local_18;
  *(undefined4 *)((longlong)puVar1 + 4) = local_18._4_4_;
  *(undefined4 *)(puVar1 + 1) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_10._4_4_;
  uVar11 = FName::FName(local_res8,L"FRGBConvertUB",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_1469f7180,uVar11,L"FRGBConvertUB",L"RGBConvertUB",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x20,&local_48,1);
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e84b80);
  return;
}



// FUNCTION 140279380 StaticStruct'' body=288 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FUYVYConvertUB::StaticStruct__(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res8 [32];
  longlong local_48;
  int local_40;
  int local_3c;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUYVYConvertUB::zzGetMembersBefore(&local_48,local_res8[0]);
  iVar3 = local_40;
  lVar5 = (longlong)local_40;
  local_38 = L"SamplerP";
  pwStack_30 = L"SamplerState";
  uStack_10 = 0;
  local_40 = local_40 + 1;
  local_28 = 0x58;
  uStack_24 = 8;
  uStack_1c = 1;
  local_18 = 1;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  puVar1 = (undefined8 *)(local_48 + lVar5 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = pwStack_30;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar5 * 0x30);
  *puVar2 = local_28;
  puVar2[1] = (undefined4)uStack_24;
  puVar2[2] = uStack_24._4_4_;
  puVar2[3] = uStack_1c;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar5 * 0x30);
  *puVar2 = (undefined4)local_18;
  puVar2[1] = local_18._4_4_;
  puVar2[2] = (undefined4)uStack_10;
  puVar2[3] = uStack_10._4_4_;
  uVar4 = FName::FName(local_res8,L"FUYVYConvertUB",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_1469f7690,uVar4,L"FUYVYConvertUB",L"UYVYConvertUB",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x60,&local_48,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e84b90);
  return;
}



// FUNCTION 1402794a0 StaticStruct'' body=288 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FYCbCrConvertUB::StaticStruct__(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res8 [32];
  longlong local_48;
  int local_40;
  int local_3c;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FYCbCrConvertUB::zzGetMembersBefore(&local_48,local_res8[0]);
  iVar3 = local_40;
  lVar5 = (longlong)local_40;
  local_38 = L"CbCrSampler";
  pwStack_30 = L"SamplerState";
  uStack_10 = 0;
  local_40 = local_40 + 1;
  local_28 = 0x60;
  uStack_24 = 8;
  uStack_1c = 1;
  local_18 = 1;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  puVar1 = (undefined8 *)(local_48 + lVar5 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = pwStack_30;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar5 * 0x30);
  *puVar2 = local_28;
  puVar2[1] = (undefined4)uStack_24;
  puVar2[2] = uStack_24._4_4_;
  puVar2[3] = uStack_1c;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar5 * 0x30);
  *puVar2 = (undefined4)local_18;
  puVar2[1] = local_18._4_4_;
  puVar2[2] = (undefined4)uStack_10;
  puVar2[3] = uStack_10._4_4_;
  uVar4 = FName::FName(local_res8,L"FYCbCrConvertUB",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_1469f7360,uVar4,L"FYCbCrConvertUB",L"YCbCrConvertUB",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x70,&local_48,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e84ba0);
  return;
}



// FUNCTION 1402795c0 StaticStruct'' body=137 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FYUVConvertUB::StaticStruct__(void)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  longlong local_18 [3];
  
  FYUVConvertUB::zzGetMembersBefore(local_18,local_res8[0]);
  uVar1 = FName::FName(local_res8,L"FYUVConvertUB",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_1469f7870,uVar1,L"FYUVConvertUB",L"YUVConvertUB",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x80,local_18,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e84bb0);
  return;
}



// FUNCTION 140279650 StaticStruct'' body=407 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FYUY2ConvertUB::StaticStruct__(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  longlong local_48;
  int local_40;
  int local_3c;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FNV12ConvertUB::zzGetMembersBefore(&local_48,local_res8[0]);
  iVar3 = local_40;
  lVar14 = (longlong)local_40;
  local_38 = L"SamplerB";
  local_28 = 0x58;
  pwStack_30 = L"SamplerState";
  local_40 = local_40 + 1;
  uStack_24 = 8;
  uStack_1c = 1;
  local_18 = 1;
  uStack_10 = 0;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  uVar8 = uStack_1c;
  uVar5 = local_28;
  pwVar4 = pwStack_30;
  iVar3 = local_40;
  pwStack_30 = L"SamplerState";
  uVar6 = (undefined4)uStack_24;
  uVar7 = uStack_24._4_4_;
  local_28 = 0x60;
  uStack_24 = 8;
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = pwVar4;
  uStack_1c = 1;
  uVar9 = (undefined4)local_18;
  uVar10 = local_18._4_4_;
  uVar11 = (undefined4)uStack_10;
  uVar12 = uStack_10._4_4_;
  local_18 = 1;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar14 * 0x30);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  uStack_10 = 0;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar14 * 0x30);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  lVar14 = (longlong)local_40;
  local_38 = L"SamplerP";
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  puVar1 = (undefined8 *)(local_48 + lVar14 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = pwStack_30;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar14 * 0x30);
  *puVar2 = local_28;
  puVar2[1] = (undefined4)uStack_24;
  puVar2[2] = uStack_24._4_4_;
  puVar2[3] = uStack_1c;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar14 * 0x30);
  *puVar2 = (undefined4)local_18;
  puVar2[1] = local_18._4_4_;
  puVar2[2] = (undefined4)uStack_10;
  puVar2[3] = uStack_10._4_4_;
  uVar13 = FName::FName(local_res8,L"FYUY2ConvertUB",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_1469f7a50,uVar13,L"FYUY2ConvertUB",L"YUY2ConvertUB",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x70,&local_48,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e84bc0);
  return;
}



// FUNCTION 1402797f0 StaticStruct'' body=288 status=ok
// SIG undefined StaticStruct''(void)

void `dynamic_initializer_for_'FYVYUConvertUB::StaticStruct__(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res8 [32];
  longlong local_48;
  int local_40;
  int local_3c;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUYVYConvertUB::zzGetMembersBefore(&local_48,local_res8[0]);
  iVar3 = local_40;
  lVar5 = (longlong)local_40;
  local_38 = L"SamplerP";
  pwStack_30 = L"SamplerState";
  uStack_10 = 0;
  local_40 = local_40 + 1;
  local_28 = 0x58;
  uStack_24 = 8;
  uStack_1c = 1;
  local_18 = 1;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
  }
  puVar1 = (undefined8 *)(local_48 + lVar5 * 0x30);
  *puVar1 = local_38;
  puVar1[1] = pwStack_30;
  puVar2 = (undefined4 *)(local_48 + 0x10 + lVar5 * 0x30);
  *puVar2 = local_28;
  puVar2[1] = (undefined4)uStack_24;
  puVar2[2] = uStack_24._4_4_;
  puVar2[3] = uStack_1c;
  puVar2 = (undefined4 *)(local_48 + 0x20 + lVar5 * 0x30);
  *puVar2 = (undefined4)local_18;
  puVar2[1] = local_18._4_4_;
  puVar2[2] = (undefined4)uStack_10;
  puVar2[3] = uStack_10._4_4_;
  uVar4 = FName::FName(local_res8,L"FYVYUConvertUB",1);
  FUniformBufferStruct::FUniformBufferStruct
            (&DAT_1469f7c30,uVar4,L"FYVYUConvertUB",L"YVYUConvertUB",
             FManaUniformBufferNV12::ConstructUniformBufferParameter,0x60,&local_48,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  atexit((_func_5014 *)&LAB_143e84bd0);
  return;
}



// FUNCTION 140279910 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FClearTexture2DArrayReplacementCS<unsigned_int>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_1469fa360,0,L"FClearTexture2DArrayReplacementCS<uint32>",
             L"/Engine/Private/ClearReplacementShaders.usf",L"ClearTexture2DArrayCS",5,1,
             FUN_141a140f0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_1469fa360 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_1469fa490 = FClearTexture2DArrayReplacementCS<unsigned_int>::ConstructCompiledInstance;
  _DAT_1469fa498 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_1469fa4a0 = BuildSettings::IsPromotedBuild;
  _DAT_1469fa4a8 = &LAB_141a16120;
  atexit((_func_5014 *)&LAB_143e84be0);
  return;
}



// FUNCTION 1402799c0 StaticType'' body=170 status=ok
// SIG undefined StaticType''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FClearTexture2DArrayReplacementCS<float>::StaticType__(void)

{
  FShaderType::FShaderType
            (&DAT_1469fa210,0,L"FClearTexture2DArrayReplacementCS<float>",
             L"/Engine/Private/ClearReplacementShaders.usf",L"ClearTexture2DArrayCS",5,1,
             FUN_141a140f0,AK::MemoryMgr::StartProfileThreadUsage);
  _DAT_1469fa210 = &PTR__scalar_deleting_destructor__143f47578;
  _DAT_1469fa340 = FClearTexture2DArrayReplacementCS<unsigned_int>::ConstructCompiledInstance;
  _DAT_1469fa348 = FClearTexture2DArrayReplacementCS<unsigned_int>::ShouldCompilePermutation;
  _DAT_1469fa350 = BuildSettings::IsPromotedBuild;
  _DAT_1469fa358 = &LAB_141a16140;
  atexit((_func_5014 *)&LAB_143e84bf0);
  return;
}


