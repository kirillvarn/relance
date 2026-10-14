
void FUN_00512b00(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = puVar4 + 1, puVar4 != param_2) {
      uVar1 = *puVar4;
      puVar3 = puVar4;
      if (uVar1 < *param_1) {
        for (; param_1 != puVar3; puVar3 = puVar3 + -1) {
          *puVar3 = puVar3[-1];
        }
        *param_1 = uVar1;
      }
      else {
        uVar2 = puVar4[-1];
        while (uVar1 < uVar2) {
          *puVar3 = uVar2;
          uVar2 = puVar3[-2];
          puVar3 = puVar3 + -1;
        }
        *puVar3 = uVar1;
      }
    }
  }
  return;
}

