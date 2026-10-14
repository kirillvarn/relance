
void FUN_004378f0(undefined4 param_1,uchar *param_2,int param_3)

{
  MarshalBuffer local_84 [24];
  MissionVendorProperties local_6c [96];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9239;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MarshalBuffer::MarshalBuffer(local_84);
  MarshalBuffer::use_read_buffer(local_84,param_2,param_3);
  MissionVendorProperties::MissionVendorProperties(local_6c);
  local_4 = 0;
  MissionVendorProperties::unmarshal(local_6c,local_84);
  FUN_0043a960(local_6c);
  local_4 = 0xffffffff;
  MissionVendorProperties::~MissionVendorProperties(local_6c);
  ExceptionList = local_c;
  return;
}

