
byte FUN_0059df40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = DAT_0067dbe8;
  do {
    if (iVar1 == 0) {
      return bVar3;
    }
    if (*(int **)(iVar1 + 8) != (int *)0x0) {
      bVar2 = (**(code **)(**(int **)(iVar1 + 8) + 0x5c))(param_1,param_2,param_3);
      bVar3 = bVar3 | bVar2;
      if (bVar3 != 0) {
        return bVar3;
      }
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}

