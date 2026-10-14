
void __thiscall FUN_0044d200(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1334)) {
    puVar2 = (undefined4 *)(param_1 + 0x1134);
    do {
      (**(code **)(*(int *)*puVar2 + 8))(param_2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x1334));
  }
  return;
}

