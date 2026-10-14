
void FUN_004b6b60(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 unaff_retaddr;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_0045a460();
  iVar2 = FUN_0054baf0();
  if (iVar2 != 0) {
    iVar2 = FUN_0059da10("NeuroNetMissionMessage");
    if (iVar2 == 0) {
      iVar2 = FUN_0059da10("NN_Trade");
      if (iVar2 == 0) {
        cVar1 = FUN_0045a470();
        if ((cVar1 == '\0') && (DAT_0067dcc8 == '\0')) {
          cVar1 = FUN_0042d730();
          if (cVar1 == '\0') {
            cVar1 = FUN_0041a3e0();
            if (cVar1 == '\0') {
              piVar3 = (int *)FUN_0059db20("NN_Scanner","NN_Scanner",0,0);
              if (piVar3 != (int *)0x0) {
                piVar3 = (int *)(**(code **)(*piVar3 + 8))();
                if (piVar3 != (int *)0x0) {
                  uStack_c = 0;
                  uStack_8 = 0x3d9ba5e3;
                  uStack_4 = 0xbfa4dd2f;
                  (**(code **)(*piVar3 + 0x14))(&uStack_c);
                  (**(code **)(*piVar3 + 0xa8))(0x49,unaff_retaddr,param_1);
                  (**(code **)(*piVar3 + 0xa8))(0x4a,0,0);
                  FUN_005645c0(0xd);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

