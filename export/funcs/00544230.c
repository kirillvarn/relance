
undefined4 FUN_00544230(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    cVar2 = (**(code **)**(undefined4 **)(param_1 + 8))(param_2);
    if (cVar2 == '\0') {
      FUN_004f7a90();
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x88))(*(byte *)(param_2 + 0x50) & 1);
    if (*(int *)(param_2 + 0x18) != 0) {
      cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x58))(*(int *)(param_2 + 0x18),0);
      if (cVar2 != '\0') goto LAB_00544299;
    }
    (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
LAB_00544299:
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_004110c0(1,1);
    FUN_004115b0(param_2 + 0x4c);
    FUN_00411300(*(undefined4 *)(param_2 + 0x48));
    cVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 4))();
    if (cVar2 == '\0') {
      pcVar3 = ID_String::get_string((ID_String *)(param_2 + 4));
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: couldnt open light",
                 "E:\\FL\\Scratch\\Source\\Client\\space\\createeffect.h",0xce,pcVar3);
      FUN_00537ad0();
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    else if (*(int *)(param_2 + 0x1c) != 0) {
      uVar4 = FUN_00538e80(param_2 + 0x20);
      FUN_00537960(uVar4,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),0);
    }
  }
  if ((*(int *)(param_1 + 8) != 0) && ((*(byte *)(*(int *)(param_1 + 8) + 8) & 2) == 0)) {
    return 1;
  }
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(*(int *)(param_1 + 0xc) + 0xd4) == 0)) {
    return 1;
  }
  return 0;
}

