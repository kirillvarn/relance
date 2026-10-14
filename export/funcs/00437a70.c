
void FUN_00437a70(undefined4 param_1,uchar *param_2,int param_3)

{
  MarshalBuffer local_84 [24];
  NewsBroadcastProperties local_6c [96];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9279;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MarshalBuffer::MarshalBuffer(local_84);
  MarshalBuffer::use_read_buffer(local_84,param_2,param_3);
  NewsBroadcastProperties::NewsBroadcastProperties(local_6c);
  local_4 = 0;
  NewsBroadcastProperties::unmarshal(local_6c,local_84);
  FUN_0043a6c0(local_6c);
  local_4 = 0xffffffff;
  NewsBroadcastProperties::~NewsBroadcastProperties(local_6c);
  ExceptionList = local_c;
  return;
}

