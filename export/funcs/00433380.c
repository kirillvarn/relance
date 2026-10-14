
undefined4 * __thiscall FUN_00433380(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 8);
  if (*(char *)((int)param_2 + 0x25) == '\0') {
    uVar1 = *(undefined1 *)(param_2 + 9);
    puVar2 = operator_new(0x28);
    puVar2[1] = param_3;
    *(undefined1 *)(puVar2 + 9) = uVar1;
    *(undefined1 *)((int)puVar2 + 0x25) = 0;
    FUN_00433d50(puVar2 + 3,param_2 + 3);
    *puVar2 = *(undefined4 *)(param_1 + 8);
    puVar2[2] = *(undefined4 *)(param_1 + 8);
    if (puVar4 == *(undefined4 **)(param_1 + 8)) {
      puVar4 = puVar2;
    }
    uVar3 = FUN_00433380(*param_2,puVar2);
    *puVar2 = uVar3;
    uVar3 = FUN_00433380(param_2[2],puVar2);
    puVar2[2] = uVar3;
  }
  return puVar4;
}

