
void FUN_005b7e40(_onexit_t param_1)

{
  if (DAT_0067ee48 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_0067ee48,&DAT_0067ee44);
  return;
}

