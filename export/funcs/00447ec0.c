
void FUN_00447ec0(undefined4 *param_1,char *param_2)

{
  char *pcVar1;
  char local_100 [256];
  
  vsprintf(local_100,param_2,&stack0x0000000c);
  pcVar1 = StringAlloc(local_100,false);
  *param_1 = pcVar1;
  return;
}

