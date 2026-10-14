
void __thiscall FUN_005474a0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  int *piVar4;
  
  bVar3 = SinglePlayer();
  if (!bVar3) {
    puVar1 = *(undefined4 **)(param_2 + 4);
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      if (*(short *)(puVar2 + 2) == *(short *)SUBOBJ_ID_ROOT_exref) {
        piVar4 = *(int **)(param_1 + 0x10);
        if ((piVar4 == (int *)0x0) || (((byte)piVar4[0x13] & 3) != 3)) {
          piVar4 = (int *)0x0;
        }
        (**(code **)(*piVar4 + 0x98))(puVar2[3]);
      }
    }
  }
  return;
}

