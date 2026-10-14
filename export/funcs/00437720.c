
void FUN_00437720(undefined4 param_1,uchar *param_2,int param_3)

{
  MarshalBuffer local_284 [24];
  ScriptBehavior local_26c [608];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b91fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MarshalBuffer::MarshalBuffer(local_284);
  MarshalBuffer::use_read_buffer(local_284,param_2,param_3);
  ScriptBehavior::ScriptBehavior(local_26c);
  local_4 = 0;
  ScriptBehavior::unmarshal(local_26c,local_284);
  FUN_0043ade0(local_26c);
  local_4 = 0xffffffff;
  ScriptBehavior::~ScriptBehavior(local_26c);
  ExceptionList = local_c;
  return;
}

