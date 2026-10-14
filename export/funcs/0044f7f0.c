
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_0044f7f0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 == (int *)0x0) {
    *(undefined1 *)(param_1 + 0x5f) = 1;
  }
  else {
    if (*(char *)(param_1 + 0x5f) == '\0') {
      if (*(char *)(param_1 + 0x44) == '\0') {
        iVar2 = FUN_0044f500();
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x68))(*(int **)(param_1 + 0x3c),iVar2 + param_2);
        uVar3 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x4c))(*(int **)(param_1 + 0x3c));
        if ((*(char *)(param_1 + 0x54) == '\0') && (*(uint *)(param_1 + 0x40) <= uVar3)) {
          *(undefined1 *)(param_1 + 0x5f) = 1;
        }
        if ((*(char *)(param_1 + 0x5d) != '\0') && (*(char *)(param_1 + 0x5e) == '\0')) {
          fVar4 = (float10)(*(int *)(param_1 + 0x40) - uVar3) * (float10)_DAT_005c75f8;
          if (fVar4 < (float10)_DAT_0061650c != (fVar4 == (float10)_DAT_0061650c)) {
            if ((float)fVar4 <= (float)_DAT_005c8ba8) {
              FUN_00412070(0x3f800000);
              *(undefined1 *)(param_1 + 0x5e) = 1;
            }
            else {
              FUN_00412050(0x3f800000,(float)_DAT_005c89b8 / (float)fVar4);
              *(undefined1 *)(param_1 + 0x5e) = 1;
            }
          }
        }
      }
      else {
        iVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1);
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x68))
                  (*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x40) - iVar2);
        if (*(char *)(param_1 + 0x5d) != '\0') {
          FUN_00412070(0x3f800000);
          *(undefined1 *)(param_1 + 0x5e) = 1;
        }
        *(undefined1 *)(param_1 + 0x5f) = 1;
        *(undefined1 *)(param_1 + 0x44) = 0;
      }
    }
    if (*(char *)(param_1 + 0x5f) != '\0') {
      (**(code **)(**(int **)(param_1 + 0x3c) + 0x68))(*(int **)(param_1 + 0x3c),100);
      if (*(char *)(param_1 + 0x5d) != '\0') {
        FUN_00412070(0x3f800000);
        *(undefined1 *)(param_1 + 0x5e) = 1;
        return *(undefined1 *)(param_1 + 0x5f);
      }
    }
  }
  return *(undefined1 *)(param_1 + 0x5f);
}

