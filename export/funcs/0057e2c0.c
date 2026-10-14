
void FUN_0057e2c0(char *param_1,int param_2,RenderDisplayList *param_3,undefined4 param_4)

{
  bool bVar1;
  code *local_4;
  
  local_4 = _vftable__exref;
  bVar1 = XMLReader::read_buffer((XMLReader *)&local_4,param_3,param_1,param_2 * 2);
  if (!bVar1) {
    FUN_0057db50(param_1,param_2,param_3,param_4);
  }
  return;
}

