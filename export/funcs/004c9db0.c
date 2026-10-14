
CacheString * __thiscall FUN_004c9db0(CacheString *param_1,char *param_2)

{
  char *pcVar1;
  
  CacheString::clear(param_1);
  pcVar1 = StringAlloc(param_2,true);
  *(char **)param_1 = pcVar1;
  return param_1;
}

