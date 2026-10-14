
void FUN_0053e090(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = param_2;
  piVar2 = (int *)FUN_005416c0(param_2[1],0);
  if (piVar2 != (int *)0x0) {
    if (*(char *)(puVar1 + 6) != '\0') {
      param_2 = (undefined4 *)puVar1[2];
      (**(code **)(*piVar2 + 0x1c0))
                (*puVar1,&param_2,*(undefined2 *)(puVar1 + 3),puVar1[4],puVar1[5]);
      return;
    }
    param_2 = (undefined4 *)puVar1[2];
    (**(code **)(*piVar2 + 0x1c4))(&param_2,*(undefined2 *)(puVar1 + 3),puVar1[4]);
  }
  return;
}

