
void __thiscall FUN_0057c860(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ushort *puVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    puVar4 = (ushort *)(param_2 + param_3 * 2);
    do {
      piVar1 = *(int **)(param_1 + 0x518);
      puVar4 = puVar4 + -1;
      bVar5 = true;
      piVar2 = piVar1;
      piVar3 = (int *)piVar1[1];
      while (piVar3 != *(int **)(param_1 + 0x51c)) {
        bVar5 = *puVar4 < *(ushort *)(piVar3 + 3);
        piVar2 = piVar3;
        if (bVar5) {
          piVar3 = (int *)*piVar3;
        }
        else {
          piVar3 = (int *)piVar3[2];
        }
      }
      if (*(char *)(param_1 + 0x520) == '\0') {
        if (bVar5) {
          if (piVar2 == (int *)*piVar1) {
            puVar6 = local_8;
            goto LAB_0057c902;
          }
          FUN_0057faa0();
        }
        if (*(ushort *)(piVar2 + 3) < *puVar4) {
          puVar6 = local_4;
          goto LAB_0057c902;
        }
      }
      else {
        puVar6 = local_c;
LAB_0057c902:
        FUN_0057f820(puVar6,piVar3,piVar2,puVar4);
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

