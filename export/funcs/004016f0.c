
void __thiscall FUN_004016f0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  puVar3 = puVar4;
  puVar5 = (undefined4 *)puVar4[1];
  if ((undefined4 *)puVar4[1] != *(undefined4 **)(param_1 + 8)) {
    do {
      puVar4 = puVar5;
      cVar1 = FUN_00401130(puVar4 + 3,param_3);
      if (cVar1 == '\0') {
        puVar5 = (undefined4 *)*puVar4;
      }
      else {
        puVar5 = (undefined4 *)puVar4[2];
        puVar4 = puVar3;
      }
      puVar3 = puVar4;
    } while (puVar5 != *(undefined4 **)(param_1 + 8));
  }
  if (puVar4 != *(undefined4 **)(param_1 + 4)) {
    iVar2 = stricmp((char *)*param_3,(char *)puVar4[3]);
    if (-1 < iVar2) {
      *param_2 = puVar4;
      return;
    }
  }
  *param_2 = *(undefined4 *)(param_1 + 4);
  return;
}

