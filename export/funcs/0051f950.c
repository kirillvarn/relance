
void __thiscall FUN_0051f950(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  int *piVar4;
  undefined4 uVar5;
  float fVar6;
  
  piVar4 = param_2;
  fVar3 = (float10)(**(code **)(*param_2 + 0x20))(param_2,*(undefined4 *)(param_1 + 8));
  FUN_0040fb60((float)fVar3,piVar4);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,7,1);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,1);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x17,4);
  if (DAT_0067524c != 0) {
    FUN_0051f810(param_2,0,0);
    FUN_0051f810(param_2,3,0);
    if (DAT_0067524c == 1) {
      piVar4 = param_2;
      uVar5 = DAT_00610534;
      fVar3 = (float10)(**(code **)(*param_2 + 0x20))(param_2,DAT_00610534);
      FUN_0040fb60((float)fVar3,piVar4);
      (**(code **)(*DAT_00675244 + 0x10))(param_2);
      fVar3 = (float10)(**(code **)(*param_2 + 0x20))(param_2,*(undefined4 *)(param_1 + 8));
      FUN_0040fb60((float)fVar3,uVar5);
    }
    (**(code **)(*DAT_00675244 + 0xc))(param_2);
    iVar1 = FUN_0050c620();
    piVar4 = *(int **)(iVar1 + 4);
    piVar2 = (int *)*piVar4;
    if (piVar2 != piVar4) {
      do {
        iVar1 = *(int *)piVar2[2];
        fVar3 = (float10)(**(code **)(*DAT_00675244 + 0x2c))();
        fVar3 = (float10)(**(code **)(*DAT_00675244 + 0x28))((float)fVar3);
        fVar6 = (float)fVar3;
        fVar3 = (float10)(**(code **)(*DAT_00675244 + 0x24))();
        (**(code **)(iVar1 + 0x18))(param_2,(float)(fVar3 * (float10)fVar6));
        piVar2 = (int *)*piVar2;
      } while (piVar2 != piVar4);
    }
    if (DAT_0067524c == 1) {
      piVar4 = param_2;
      uVar5 = DAT_00610534;
      fVar3 = (float10)(**(code **)(*param_2 + 0x20))(param_2,DAT_00610534);
      FUN_0040fb60((float)fVar3,piVar4);
      (**(code **)(*DAT_00675244 + 0x14))(param_2);
      fVar3 = (float10)(**(code **)(*param_2 + 0x20))(param_2,*(undefined4 *)(param_1 + 8));
      FUN_0040fb60((float)fVar3,uVar5);
    }
    FUN_0051f810(param_2,1,0);
    (**(code **)(*DAT_00675244 + 0x18))(param_2);
    FUN_00520170(param_2);
    FUN_0051f810(param_2,4,0);
    (**(code **)(*DAT_00675244 + 0x1c))(param_2);
    return;
  }
  if (DAT_00675244 != (int *)0x0) {
    piVar4 = param_2;
    uVar5 = DAT_00610534;
    fVar3 = (float10)(**(code **)(*param_2 + 0x20))(param_2,DAT_00610534);
    FUN_0040fb60((float)fVar3,piVar4);
    (**(code **)(*DAT_00675244 + 0x10))(param_2);
    piVar4 = param_2;
    fVar3 = (float10)(**(code **)(*param_2 + 0x20))(param_2,*(undefined4 *)(param_1 + 8));
    FUN_0040fb60((float)fVar3,piVar4);
    FUN_0051f810(param_2,1,0);
    piVar4 = param_2;
    fVar3 = (float10)(**(code **)(*param_2 + 0x20))(param_2,DAT_00610534);
    FUN_0040fb60((float)fVar3,piVar4);
    (**(code **)(*DAT_00675244 + 0x14))(param_2);
    fVar3 = (float10)(**(code **)(*param_2 + 0x20))(param_2,*(undefined4 *)(param_1 + 8));
    FUN_0040fb60((float)fVar3,uVar5);
  }
  FUN_0051f810(param_2,0,0);
  FUN_00509f30(param_2);
  FUN_00520170(param_2);
  FUN_0051f810(param_2,3,0);
  return;
}

