
void __thiscall FUN_004206c0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if ((undefined4 *)puVar3[1] != *(undefined4 **)(param_1 + 8)) {
    puVar2 = puVar3;
    puVar4 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar4;
      iVar1 = _stricmp((char *)(puVar3 + 4),(char *)(param_3 + 4));
      if (iVar1 < 0) {
        puVar4 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (puVar4 != *(undefined4 **)(param_1 + 8));
  }
  if ((puVar3 != *(undefined4 **)(param_1 + 4)) &&
     (iVar1 = _stricmp((char *)(param_3 + 4),(char *)(puVar3 + 4)), -1 < iVar1)) {
    *param_2 = puVar3;
    return;
  }
  *param_2 = *(undefined4 *)(param_1 + 4);
  return;
}

