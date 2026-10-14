
void __thiscall FUN_0052be90(int param_1,short param_2)

{
  short *psVar1;
  int *piVar2;
  char cVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  
  psVar1 = *(short **)(param_1 + 0x1c);
  for (psVar4 = *(short **)(param_1 + 0x18);
      (psVar5 = psVar1, psVar4 != psVar1 && (psVar5 = psVar4, *psVar4 != param_2));
      psVar4 = psVar4 + 1) {
  }
  if (psVar5 != psVar1) {
    psVar4 = psVar5 + 1;
    if (psVar4 != psVar1) {
      iVar6 = (int)psVar5 - (int)psVar4;
      do {
        *(short *)(iVar6 + (int)psVar4) = *psVar4;
        psVar4 = psVar4 + 1;
      } while (psVar4 != psVar1);
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -2;
  }
  if ((*(int *)(param_1 + 0x18) == 0) ||
     (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 1 == 0)) {
    cVar3 = FUN_004fcef0((undefined4 *)(param_1 + 0x44));
    if (cVar3 == '\0') {
      if (*(int *)(param_1 + 0x4c) != 0) {
        FUN_004f7a90();
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      piVar2 = *(int **)(param_1 + 0x48);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      if (*(int *)(param_1 + 0x50) != 0) {
        FUN_00537ad0();
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}

