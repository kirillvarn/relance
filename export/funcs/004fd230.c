
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004fd230(int param_1,long param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_64 [4];
  undefined1 local_60 [36];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [36];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar6 = (int *)**(int **)(param_1 + 4);
  if (piVar6 != *(int **)(param_1 + 4)) {
    do {
      piVar1 = (int *)*piVar6;
      if (piVar6[4] == 0) {
        if ((int *)piVar6[3] != (int *)0x0) {
          iVar5 = (**(code **)(*(int *)piVar6[3] + 0x9c))();
          goto LAB_004fd284;
        }
        iVar5 = _DAT_00000040;
        if (piVar6[5] != 0) goto LAB_004fd284;
      }
      else {
        iVar5 = *(int *)(piVar6[4] + 0x40);
LAB_004fd284:
        if ((iVar5 != -1) && (bVar3 = IsDescendant(param_2,iVar5), bVar3)) {
          if (param_3 == 0) {
            if ((int *)piVar6[4] != (int *)0x0) {
              (**(code **)(*(int *)piVar6[4] + 4))();
            }
            if (piVar6[3] != 0) {
              FUN_004215b0();
              uStack_34 = 0;
              uStack_38 = 0;
              uStack_3c = 0;
              (**(code **)(*(int *)piVar6[3] + 0x94))(0xffffffff,local_60);
              (**(code **)(*(int *)piVar6[3] + 0x60))();
            }
            if (piVar6[5] != 0) {
              FUN_005379b0();
              (**(code **)(*(int *)piVar6[5] + 8))();
            }
LAB_004fd3d3:
            FUN_00502d90();
          }
          else {
            if ((((piVar6[4] == 0) || ((*(byte *)(piVar6[4] + 8) & 2) != 0)) &&
                ((piVar2 = (int *)piVar6[3], piVar2 == (int *)0x0 ||
                 (cVar4 = (**(code **)(*piVar2 + 0x14))(piVar2), cVar4 == '\0')))) &&
               ((piVar6[5] == 0 || (*(int *)(piVar6[5] + 0xd4) != 0)))) {
              if ((int *)piVar6[4] != (int *)0x0) {
                (**(code **)(*(int *)piVar6[4] + 4))();
              }
              if (piVar6[3] != 0) {
                FUN_004215b0();
                uStack_4 = 0;
                uStack_8 = 0;
                uStack_c = 0;
                (**(code **)(*(int *)piVar6[3] + 0x94))(0xffffffff,auStack_30);
                (**(code **)(*(int *)piVar6[3] + 0x60))();
              }
              if (piVar6[5] != 0) {
                FUN_005379b0();
                (**(code **)(*(int *)piVar6[5] + 8))();
              }
              goto LAB_004fd3d3;
            }
            FUN_004fd420(local_64,*(undefined4 *)(param_3 + 0x2c),piVar6 + 2);
            if (piVar6[4] != 0) {
              FUN_004f7d80(param_3);
            }
          }
          *(int *)piVar6[1] = *piVar6;
          *(int *)(*piVar6 + 4) = piVar6[1];
          FUN_00502d90();
          FUN_005b7e1d(piVar6);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        }
      }
      piVar6 = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 4));
  }
  return;
}

