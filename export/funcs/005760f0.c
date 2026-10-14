
void __thiscall FUN_005760f0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_4;
  
  if (DAT_0067c3a4 != 0) {
    local_4 = param_1;
    piVar3 = (int *)FUN_00578950(&param_2);
    piVar4 = (int *)FUN_00578920(&param_2);
    while (piVar4 != piVar3) {
      if ((int *)piVar4[4] == param_1) {
        FUN_0046c8c0(&local_4,piVar4);
        piVar4 = local_4;
      }
      else {
        piVar5 = (int *)piVar4[2];
        if (*(char *)((int)piVar5 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar5 + 0x15);
          piVar2 = (int *)*piVar5;
          while (piVar4 = piVar5, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          piVar5 = (int *)piVar4[1];
          if (piVar4 == (int *)piVar5[2]) {
            do {
              piVar4 = piVar5;
              piVar5 = (int *)piVar4[1];
            } while (piVar4 == (int *)piVar5[2]);
          }
          if ((int *)piVar4[2] != piVar5) {
            piVar4 = piVar5;
          }
        }
      }
    }
  }
  return;
}

