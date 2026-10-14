
void __thiscall FUN_00522850(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  float10 fVar6;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  undefined4 auStack_34 [4];
  undefined4 uStack_24;
  int iStack_20;
  int iStack_c;
  float fStack_8;
  
  if (((((*(char *)(param_1 + 0xf8) != '\0') || (*(char *)(param_1 + 0x180) != '\0')) &&
       (iVar2 = FUN_005792b0(), iVar2 != 0)) &&
      ((iVar2 = FUN_005792b0(), iVar2 != 0 && (iVar2 = FUN_005792b0(), iVar2 < 3)))) &&
     (*(char *)(param_1 + 0x234) != '\0')) {
    piStack_54 = param_2;
    piStack_58 = (int *)0x5228c0;
    puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x10))();
    puVar5 = auStack_34;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    piStack_58 = param_2;
    piStack_5c = (int *)0x5228d3;
    (**(code **)(*param_2 + 0xc))();
    piStack_5c = (int *)0x5228f3;
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))();
    piStack_5c = param_2;
    piStack_60 = (int *)0x5228f9;
    fVar6 = (float10)(**(code **)(*param_2 + 0x20))();
    fStack_8 = (float)fVar6;
    piStack_60 = param_2;
    piStack_64 = (int *)0x522903;
    fVar6 = (float10)(**(code **)(*param_2 + 0x24))();
    iVar2 = iStack_c;
    piStack_64 = DAT_00610534;
    FUN_0040fb60(iStack_c);
    if (DAT_00613850 != 0) {
      piStack_64 = (int *)0xb50;
      FUN_00421ed0();
      FUN_00421ed0(0xb44);
      FUN_00422190(0);
      FUN_00421ed0(0xb71);
      FUN_00421dd0(0xbe2);
      FUN_00422950(param_2);
      FUN_004220c0(5,6);
      piStack_64 = &iStack_c;
      iStack_c = 0;
      (**(code **)(**(int **)Pipeline_exref + 0xf4))(*(int **)Pipeline_exref,0x18);
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x18,5);
      if (iStack_20 < *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x154)) {
LAB_005229f1:
        FUN_0054d4e0(&piStack_64,iStack_20);
      }
      else {
        for (piVar4 = *(int **)(param_1 + 0x188); piVar4 != *(int **)(param_1 + 0x18c);
            piVar4 = piVar4 + 1) {
          iVar1 = *(int *)(*piVar4 + 0x5c);
          if ((iVar1 <= iStack_20) && (iStack_20 < iVar1 + *(int *)(*piVar4 + 0x58)))
          goto LAB_005229f1;
        }
      }
      FUN_00421ed0(0xbe2);
      FUN_00421dd0(0xb71);
      FUN_00422190(1);
      FUN_00421dd0(0xb44);
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x18,uStack_24);
    }
    piStack_64 = (int *)(float)fVar6;
    FUN_0040fb60(iVar2);
    piStack_64 = param_2;
    FUN_00422950();
  }
  return;
}

