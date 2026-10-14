
void FUN_00437640(undefined4 param_1,uchar *param_2,int param_3)

{
  MarshalBuffer local_88 [24];
  CharacterProperties local_70 [100];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b91d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MarshalBuffer::MarshalBuffer(local_88);
  MarshalBuffer::use_read_buffer(local_88,param_2,param_3);
  CharacterProperties::CharacterProperties(local_70);
  local_4 = 0;
  CharacterProperties::unmarshal(local_70,local_88);
  FUN_0043abf0(local_70);
  local_4 = 0xffffffff;
  CharacterProperties::~CharacterProperties(local_70);
  ExceptionList = local_c;
  return;
}

