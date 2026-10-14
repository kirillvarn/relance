
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00558ac0(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  float10 fVar6;
  double dVar7;
  
  fVar1 = _DAT_006799e0 + (float)(double)CONCAT44(param_2,param_1);
  dVar7 = floor((double)(fVar1 * (float)_DAT_005d3f50));
  _DAT_006799e0 = (float)((float10)fVar1 - (float10)dVar7 * (float10)_DAT_005c75f8);
  ftol();
  FUN_00456650();
  FUN_00439540();
  iVar3 = FUN_005593c0();
  piVar5 = (int *)**(int **)(iVar3 + 4);
  if (piVar5 != *(int **)(iVar3 + 4)) {
    do {
      if ((char)((int *)piVar5[2])[1] == '\0') {
        (**(code **)(*(int *)piVar5[2] + 0x14))(param_1,param_2);
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(iVar3 + 4));
  }
  uVar4 = FUN_00438c90();
  FUN_0041a140(uVar4);
  FUN_00412360((float)(double)CONCAT44(param_2,param_1));
  FUN_00558f80((float)(double)CONCAT44(param_2,param_1));
  fVar6 = (float10)FUN_0041a410();
  if ((((fVar6 == (float10)_DAT_005c8ba8) &&
       (fVar6 = (float10)FUN_0041a400(), fVar6 == (float10)_DAT_005c8ba8)) &&
      (fVar6 = (float10)FUN_00412040(), fVar6 == (float10)_DAT_005c8ba8)) &&
     (((fVar6 = (float10)FUN_00412030(), fVar6 == (float10)_DAT_005c8ba8 &&
       (iVar3 = FUN_00438c00(), iVar3 != 0)) &&
      ((cVar2 = FUN_0044c4a0(), cVar2 == '\0' && (cVar2 = FUN_0041dd90(), cVar2 == '\0')))))) {
    FUN_0041dda0();
  }
  return;
}

