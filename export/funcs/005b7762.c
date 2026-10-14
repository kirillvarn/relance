
/* Library Function - Single Match
    _StringCatWorkerA@12
   
   Library: Visual Studio 2005 Release */

void _StringCatWorkerA_12(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  iVar2 = FUN_005b7617(param_1,param_2,&param_2);
  if (-1 < iVar2) {
    _StringCopyWorkerA_12(param_2 + param_1,iVar1 - param_2,param_3);
  }
  return;
}

