
undefined4 FUN_00452a30(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar2 = (int *)(param_1 + 0x274);
  do {
    if (((char)piVar2[0xd] != '\0') && (iVar4 = iVar5, *piVar2 == *(int *)(param_2 + 0x2c))) break;
    iVar5 = iVar5 + 1;
    piVar2 = piVar2 + 0xf;
    iVar4 = -1;
  } while (iVar5 < 0x20);
  puVar1 = (undefined4 *)(iVar4 * 0x3c + 0x270 + param_1);
  FUN_00445710(*(undefined4 *)(iVar4 * 0x3c + 0x270 + param_1));
  uVar3 = 0xffffffff;
  if (*(char *)(puVar1 + 0xe) != '\0') {
    if (*(char *)((int)puVar1 + 0x39) != '\0') {
      uVar3 = (**(code **)(**(int **)Deform_exref + 0x30))
                        (*(int **)Deform_exref,*(undefined4 *)(*(int *)(param_1 + 100) + 0x30),
                         *puVar1);
    }
    *(undefined1 *)(puVar1 + 0xe) = 0;
  }
  return uVar3;
}

