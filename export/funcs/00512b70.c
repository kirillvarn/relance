
void FUN_00512b70(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  
  while( true ) {
    uVar2 = *param_1;
    while (uVar2 < param_3) {
      puVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      uVar2 = *puVar1;
    }
    do {
      puVar1 = param_2 + -1;
      param_2 = param_2 + -1;
    } while (param_3 < *puVar1);
    if (param_2 <= param_1) break;
    uVar2 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar2;
    param_1 = param_1 + 1;
  }
  return;
}

