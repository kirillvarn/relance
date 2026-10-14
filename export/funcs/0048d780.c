
void FUN_0048d780(undefined4 *param_1,int param_2,uint param_3)

{
  char cVar1;
  ISystem *pIVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 auStack_11c [4];
  undefined4 local_118;
  undefined1 local_114;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_bc;
  undefined1 local_b8;
  int iStack_98;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_48;
  undefined1 local_44;
  
  pIVar2 = Universe::get_system(param_3);
  if (pIVar2 != (ISystem *)0x0) {
    local_118 = 0;
    local_114 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_8c = 0;
    local_88 = 0;
    local_48 = 0;
    local_44 = 0;
    uVar3 = (**(code **)(*(int *)pIVar2 + 0x3c))();
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        cVar1 = (**(code **)(*(int *)pIVar2 + 0x40))(uVar4,&local_118);
        if ((cVar1 != '\0') && (iStack_98 == param_2)) {
          *param_1 = uStack_d4;
          param_1[1] = uStack_d0;
          param_1[2] = uStack_cc;
          return;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
    cVar1 = FUN_00476fe0(param_2,&uStack_128,auStack_11c);
    if (cVar1 != '\0') {
      *param_1 = uStack_128;
      param_1[1] = uStack_124;
      param_1[2] = uStack_120;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

