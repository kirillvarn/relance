
void __fastcall FUN_0044f310(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBX;
  int *piVar6;
  int local_40;
  int aiStack_38 [4];
  undefined1 uStack_28;
  undefined1 uStack_27;
  int aiStack_24 [5];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined1 uStack_8;
  
  piVar6 = *(int **)(param_1 + 0x3c);
  if (piVar6 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar6 + 0x38))(piVar6);
    local_40 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x3c))(*(int **)(param_1 + 0x3c),local_40)
        ;
        aiStack_38[0] = 0;
        aiStack_38[1] = 0;
        aiStack_38[2] = 0;
        aiStack_38[3] = 0;
        uStack_28 = 0;
        uStack_27 = 0;
        cVar2 = FUN_0044f270(*(undefined4 *)(iVar4 + 0x14),aiStack_38);
        if (cVar2 != '\0') {
          uVar1 = *(undefined4 *)(iVar4 + 0x14);
          piVar6 = aiStack_38;
          piVar5 = aiStack_24;
          for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar5 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar5 = piVar5 + 1;
          }
          iVar4 = *(int *)(unaff_EBX + 0xac);
          piVar6 = *(int **)(iVar4 + 4);
          uStack_c = 0;
          uStack_8 = 0;
          uStack_10 = uVar1;
          piVar5 = operator_new(0x28);
          *piVar5 = iVar4;
          if (piVar6 == (int *)0x0) {
            piVar6 = piVar5;
          }
          piVar5[1] = (int)piVar6;
          *(int **)(iVar4 + 4) = piVar5;
          *(int **)piVar5[1] = piVar5;
          if (piVar5 + 2 != (int *)0x0) {
            piVar6 = aiStack_24;
            piVar5 = piVar5 + 2;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar5 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar5 = piVar5 + 1;
            }
          }
          *(int *)(unaff_EBX + 0xb0) = *(int *)(unaff_EBX + 0xb0) + 1;
          param_1 = unaff_EBX;
        }
        local_40 = local_40 + 1;
      } while (local_40 < iVar3);
    }
  }
  return;
}

