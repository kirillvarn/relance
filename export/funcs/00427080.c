
void __thiscall FUN_00427080(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  int local_4;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  puVar3 = (undefined4 *)puVar2[1];
  bVar4 = true;
  local_4 = param_1;
  if (puVar3 != *(undefined4 **)(param_1 + 8)) {
    do {
      puVar2 = puVar3;
      iVar1 = _stricmp((char *)(param_3 + 4),(char *)(puVar2 + 4));
      bVar4 = iVar1 < 0;
      if (bVar4) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
    } while (puVar3 != *(undefined4 **)(param_1 + 8));
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    puVar2 = (undefined4 *)FUN_004274b0(&local_4,puVar3,puVar2,param_3);
    *param_2 = *puVar2;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  if (bVar4) {
    if (puVar2 == (undefined4 *)**(int **)(param_1 + 4)) goto LAB_0042711c;
    FUN_00427760();
  }
  iVar1 = _stricmp((char *)(puVar2 + 4),(char *)(param_3 + 4));
  if (-1 < iVar1) {
    *param_2 = puVar2;
    *(undefined1 *)(param_2 + 1) = 0;
    return;
  }
LAB_0042711c:
  puVar2 = (undefined4 *)FUN_004274b0(&local_4,puVar3,puVar2,param_3);
  *param_2 = *puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

