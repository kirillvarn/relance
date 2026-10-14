
undefined4 * __thiscall FUN_005afd60(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 8);
  if (*(char *)((int)param_2 + 0x11) == '\0') {
    uVar1 = *(undefined1 *)(param_2 + 4);
    puVar2 = operator_new(0x14);
    puVar2[1] = param_3;
    *(undefined1 *)(puVar2 + 4) = uVar1;
    *(undefined1 *)((int)puVar2 + 0x11) = 0;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[3] = param_2[3];
    }
    *puVar2 = *(undefined4 *)(param_1 + 8);
    puVar2[2] = *(undefined4 *)(param_1 + 8);
    if (puVar4 == *(undefined4 **)(param_1 + 8)) {
      puVar4 = puVar2;
    }
    uVar3 = FUN_005afd60(*param_2,puVar2);
    *puVar2 = uVar3;
    uVar3 = FUN_005afd60(param_2[2],puVar2);
    puVar2[2] = uVar3;
  }
  return puVar4;
}

