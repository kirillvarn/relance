
undefined4 * FUN_005b00d0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,code *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  
  while( true ) {
    cVar3 = (*param_4)(*param_1,param_3);
    while (cVar3 != '\0') {
      puVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar3 = (*param_4)(*puVar1,param_3);
    }
    do {
      puVar1 = param_2 + -1;
      param_2 = param_2 + -1;
      cVar3 = (*param_4)(param_3,*puVar1);
    } while (cVar3 != '\0');
    if (param_2 <= param_1) break;
    uVar2 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar2;
    param_1 = param_1 + 1;
  }
  return param_1;
}

