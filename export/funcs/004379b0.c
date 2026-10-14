
void FUN_004379b0(undefined4 param_1,uchar *param_2,int param_3)

{
  MarshalBuffer local_48 [24];
  MissionVendorAcceptance local_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9259;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MarshalBuffer::MarshalBuffer(local_48);
  MarshalBuffer::use_read_buffer(local_48,param_2,param_3);
  MissionVendorAcceptance::MissionVendorAcceptance(local_30);
  local_4 = 0;
  MissionVendorAcceptance::unmarshal(local_30,local_48);
  FUN_0048d4a0(local_30);
  local_4 = 0xffffffff;
  MissionVendorAcceptance::~MissionVendorAcceptance(local_30);
  ExceptionList = local_c;
  return;
}

