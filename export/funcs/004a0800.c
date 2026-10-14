
undefined4 __thiscall FUN_004a0800(int param_1,undefined4 param_2,uint *param_3,uint *param_4)

{
  short sVar1;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  ISystem *pIVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_118;
  undefined1 local_114;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined4 local_bc;
  undefined1 local_b8;
  int iStack_98;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_48;
  undefined1 local_44;
  
  iVar6 = FUN_004c5530(param_2);
  if (iVar6 == *(int *)(param_1 + 0xb9c)) {
    *param_3 = *(uint *)(param_1 + 0xba0);
    param_3[1] = *(uint *)(param_1 + 0xba4);
    param_3[2] = *(uint *)(param_1 + 0xba8);
    *param_4 = *(uint *)(param_1 + 0xbac);
    return 1;
  }
  piVar7 = (int *)FUN_004c4ff0(param_2);
  piVar7 = (int *)*piVar7;
  bVar4 = false;
  if (piVar7 != (int *)0x0) {
    do {
      sVar1 = (short)piVar7[2];
      if (sVar1 == 0x42) {
        iVar2 = piVar7[1];
        pIVar8 = Universe::GetFirstSystem();
        if (bVar4) {
          pIVar8 = Universe::get_system(*param_4);
        }
        while (pIVar8 != (ISystem *)0x0) {
          local_118 = 0;
          local_114 = 0;
          local_bc = 0;
          local_b8 = 0;
          local_8c = 0;
          local_88 = 0;
          local_48 = 0;
          local_44 = 0;
          uVar9 = (**(code **)(*(int *)pIVar8 + 0x3c))();
          uVar10 = 0;
          if (uVar9 != 0) {
            do {
              cVar5 = (**(code **)(*(int *)pIVar8 + 0x40))(uVar10,&local_118);
              if ((cVar5 != '\0') && (iStack_98 == iVar2)) {
                *param_3 = uStack_d4;
                param_3[1] = uStack_d0;
                param_3[2] = uStack_cc;
                uVar9 = (*(code *)**(undefined4 **)pIVar8)();
                *param_4 = uVar9;
                *(uint *)(param_1 + 0xba0) = *param_3;
                *(uint *)(param_1 + 0xba4) = param_3[1];
                *(uint *)(param_1 + 0xba8) = param_3[2];
                *(uint *)(param_1 + 0xbac) = *param_4;
                *(int *)(param_1 + 0xb9c) = iVar6;
                return 1;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar9);
          }
          pIVar8 = Universe::GetNextSystem();
        }
      }
      else {
        if (sVar1 == 0x4e) {
          puVar3 = (uint *)piVar7[1];
          *param_4 = *puVar3;
          *param_3 = puVar3[2];
          param_3[1] = puVar3[3];
          param_3[2] = puVar3[4];
          *(uint *)(param_1 + 0xba0) = puVar3[2];
          *(uint *)(param_1 + 0xba4) = puVar3[3];
          *(uint *)(param_1 + 0xba8) = puVar3[4];
          *(uint *)(param_1 + 0xbac) = *param_4;
          *(int *)(param_1 + 0xb9c) = iVar6;
          return 1;
        }
        if (sVar1 == 0x53) {
          bVar4 = true;
          *param_4 = piVar7[1];
        }
      }
      piVar7 = (int *)*piVar7;
      if (piVar7 == (int *)0x0) {
        return 0;
      }
    } while( true );
  }
  return 0;
}

