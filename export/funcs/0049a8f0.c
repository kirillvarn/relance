
ISystem * FUN_0049a8f0(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  ISystem *pIVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_118;
  undefined1 local_114;
  undefined4 local_bc;
  undefined1 local_b8;
  int iStack_98;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_48;
  undefined1 local_44;
  
  piVar4 = (int *)FUN_004c4ff0(param_1);
  piVar4 = (int *)*piVar4;
  if (piVar4 == (int *)0x0) {
    return (ISystem *)0x0;
  }
  do {
    sVar1 = (short)piVar4[2];
    if (sVar1 == 0x42) {
      iVar2 = piVar4[1];
      pIVar5 = Universe::GetFirstSystem();
      while (pIVar5 != (ISystem *)0x0) {
        local_118 = 0;
        local_114 = 0;
        local_bc = 0;
        local_b8 = 0;
        local_8c = 0;
        local_88 = 0;
        local_48 = 0;
        local_44 = 0;
        uVar6 = (**(code **)(*(int *)pIVar5 + 0x3c))();
        uVar7 = 0;
        if (uVar6 != 0) {
          do {
            cVar3 = (**(code **)(*(int *)pIVar5 + 0x40))(uVar7,&local_118);
            if ((cVar3 != '\0') && (iStack_98 == iVar2)) {
              return pIVar5;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar6);
        }
        pIVar5 = Universe::GetNextSystem();
      }
    }
    else {
      if (sVar1 == 0x4e) {
        pIVar5 = Universe::get_system(*(uint *)piVar4[1]);
        return pIVar5;
      }
      if (sVar1 == 0x53) {
        pIVar5 = Universe::get_system(piVar4[1]);
        return pIVar5;
      }
    }
    piVar4 = (int *)*piVar4;
    if (piVar4 == (int *)0x0) {
      return (ISystem *)0x0;
    }
  } while( true );
}

