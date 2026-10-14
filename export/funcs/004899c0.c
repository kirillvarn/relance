
void FUN_004899c0(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  if ((param_2 < param_1) && (puVar2 = param_2 + param_3, param_1 < puVar2)) {
    param_1 = param_1 + param_3;
    if (param_3 != 0) {
      do {
        puVar1 = puVar2 + -1;
        puVar2 = puVar2 + -1;
        param_1 = param_1 + -1;
        param_3 = param_3 + -1;
        *param_1 = *puVar1;
      } while (param_3 != 0);
      return;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}

