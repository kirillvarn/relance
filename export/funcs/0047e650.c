
void __fastcall FUN_0047e650(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x3a4) != -1) && (*(char *)(param_1 + 0x4e3) == '\0')) {
    iVar1 = FUN_0047e790();
    if (*(char *)(iVar1 + 0xc) == '\0') {
      *(undefined4 *)(param_1 + 0x93c) = 1;
      iVar1 = *(int *)(iVar1 + 0x14);
      *(int *)(param_1 + 0x940) = iVar1;
      if (iVar1 == 1) {
        FUN_004795f0(0);
        if ((*(int *)(param_1 + 0x3a4) != -1) && (*(char *)(param_1 + 0x4e3) == '\0')) {
          iVar1 = FUN_0047e790();
          if (*(char *)(iVar1 + 0xc) == '\0') {
            iVar2 = FUN_0054baf0();
            if (iVar2 != 0) {
              (**(code **)(*(int *)(iVar2 + 4) + 0x38))
                        (*(undefined2 *)(iVar1 + 2),*(undefined4 *)(param_1 + 0x93c),DAT_00673344);
              *(undefined4 *)(param_1 + 0x914) = 0x3f800000;
              FUN_00489e80(DAT_00671c64,0);
              return;
            }
          }
        }
      }
      else {
        FUN_004795f0(1);
        (**(code **)(**(int **)(param_1 + 0x920) + 0xa8))(0x37,1,*(undefined4 *)(param_1 + 0x940));
        (**(code **)(**(int **)(param_1 + 0x920) + 0xa8))(0x38,*(undefined4 *)(param_1 + 0x93c),0);
        swprintf((wchar_t *)(param_1 + 0x508),0x5d0ec4,*(wchar_t **)(param_1 + 0x93c));
        (**(code **)(**(int **)(param_1 + 0x928) + 0xa8))(0x1d,(wchar_t *)(param_1 + 0x508),0);
      }
    }
  }
  return;
}

