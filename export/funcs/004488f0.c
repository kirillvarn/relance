
/* WARNING: Removing unreachable block (ram,0x00448924) */

void __fastcall FUN_004488f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b9a88;
  pvStack_c = ExceptionList;
  piVar2 = *(int **)(param_1 + 4);
  local_4 = 0;
  piVar4 = *(int **)(param_1 + 8);
  ExceptionList = &pvStack_c;
  if (piVar2 != piVar4) {
    piVar3 = piVar2 + 3;
    ExceptionList = &pvStack_c;
    do {
      if ((undefined4 *)piVar3[-1] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar3[-1])(1);
        piVar3[-1] = 0;
      }
      if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar3)(1);
        *piVar3 = 0;
      }
      piVar1 = piVar3 + 1;
      piVar3 = piVar3 + 4;
    } while (piVar1 != piVar4);
  }
  piVar4 = *(int **)(param_1 + 4);
  *(int **)(param_1 + 8) = piVar2;
  local_4 = 0xffffffff;
  for (; piVar4 != piVar2; piVar4 = piVar4 + 4) {
    if ((undefined4 *)piVar4[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar4[2])(1);
      piVar4[2] = 0;
    }
    if ((undefined4 *)piVar4[3] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar4[3])(1);
      piVar4[3] = 0;
    }
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = pvStack_c;
  return;
}

