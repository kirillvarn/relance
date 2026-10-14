
void __fastcall FUN_00443b10(CharacterProperties *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b9759;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CharacterProperties::destroy(param_1);
  local_4 = 0xffffffff;
  CharacterProperties::~CharacterProperties(param_1);
  ExceptionList = local_c;
  return;
}

