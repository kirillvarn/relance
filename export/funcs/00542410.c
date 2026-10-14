
void __thiscall FUN_00542410(int *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1[1];
  do {
    while( true ) {
      iVar3 = iVar1;
      if (iVar3 == 0) {
        return;
      }
      iVar1 = *(int *)(iVar3 + 0x14);
      if (param_2 != 0) break;
LAB_00542446:
      iVar2 = *(int *)(iVar3 + 0x18);
      if (iVar2 == 0) {
        iVar2 = *(int *)(iVar3 + 0x14);
        param_1[1] = iVar2;
        if (iVar2 == 0) {
          param_1[2] = 0;
        }
        else {
          *(undefined4 *)(iVar2 + 0x18) = 0;
        }
      }
      else if (*(int *)(iVar3 + 0x14) == 0) {
        param_1[2] = iVar2;
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x14) = 0;
        }
      }
      else {
        *(int *)(iVar2 + 0x14) = *(int *)(iVar3 + 0x14);
        *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x18) = *(undefined4 *)(iVar3 + 0x18);
      }
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *param_1 = *param_1 + -1;
      if (param_3 != '\0') {
        (*(code *)**(undefined4 **)(iVar3 + 0xc))(1);
      }
    }
    puVar4 = (undefined4 *)0x0;
    do {
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = *(undefined4 **)(param_2 + 4);
      }
      else {
        puVar4 = (undefined4 *)*puVar4;
      }
      if (puVar4 == (undefined4 *)0x0) goto LAB_00542446;
    } while (puVar4[2] != iVar3);
  } while( true );
}

