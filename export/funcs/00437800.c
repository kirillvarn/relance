
void FUN_00437800(undefined4 param_1,uchar *param_2,int param_3)

{
  AmbientScriptProperties local_38 [20];
  MarshalBuffer local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9219;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MarshalBuffer::MarshalBuffer(local_24);
  MarshalBuffer::use_read_buffer(local_24,param_2,param_3);
  AmbientScriptProperties::AmbientScriptProperties(local_38);
  local_4 = 0;
  AmbientScriptProperties::unmarshal(local_38,local_24);
  FUN_0043b080(local_38);
  local_4 = 0xffffffff;
  AmbientScriptProperties::~AmbientScriptProperties(local_38);
  ExceptionList = local_c;
  return;
}

