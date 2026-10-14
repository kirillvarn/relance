
void __thiscall FUN_00445c10(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  uint unaff_retaddr;
  
  cVar2 = FUN_0059e6a0();
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x2c))(param_2,param_3);
    iVar1 = param_1[0x59];
    if (iVar1 != -1) {
      FUN_004c4da0(iVar1,&stack0x00000000,0,0);
      FUN_004c4e00(iVar1,unaff_retaddr & 0xffffff00 | 0x41,1);
    }
    cVar2 = FUN_00442810(param_1,param_1[0xc0]);
    if ((cVar2 == '\0') && (param_1[0xdb] == 0)) {
      if (param_1[0x6c] != -1) {
        FUN_00435dd0(param_1,param_1[2],param_1[0x6e],param_1[0x6c],&LAB_00445d30,param_1);
        (**(code **)(*DAT_0067ecd0 + 0xa4))(param_1[0x55],DAT_00673344);
        return;
      }
      iVar1 = param_1[0xc0];
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          FUN_00442200(5);
          return;
        }
        if (iVar1 == 3) {
          FUN_00442200(7);
          return;
        }
        if (iVar1 == 4) {
          FUN_00442200(8);
        }
      }
    }
  }
  return;
}

