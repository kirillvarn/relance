
undefined4 FUN_004f70d0(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  puVar2 = DAT_00674f18;
  if (DAT_00674f18 != DAT_00674f1c) {
    do {
      uVar3 = FUN_00425b30(*puVar2,0);
      puVar2 = puVar2 + 1;
    } while (puVar2 != DAT_00674f1c);
  }
  if ((*(int *)FxRuntime_exref != 0) && (DAT_00674cdc == 0)) {
    cVar1 = FUN_004f67e0(&DAT_00674cdc);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)FxRuntime_exref + 0x24))(*(int **)FxRuntime_exref,DAT_00674cdc);
    }
  }
  return uVar3;
}

