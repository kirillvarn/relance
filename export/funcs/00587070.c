
int __thiscall FUN_00587070(int param_1,uint param_2)

{
  int iVar1;
  
  if (((-1 < (int)param_2) && (iVar1 = *(int *)(param_1 + 0x564), iVar1 != 0)) &&
     (param_2 < (uint)(*(int *)(param_1 + 0x568) - iVar1 >> 5))) {
    return param_2 * 0x20 + iVar1;
  }
  return 0;
}

