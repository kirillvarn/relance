
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00561da0(undefined4 *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float10 fVar7;
  undefined4 local_8;
  
  fVar7 = (float10)FUN_0059d570();
  cVar1 = FUN_0059d560();
  if ((DAT_00679b7c & 1) == 0) {
    DAT_00679b7c = DAT_00679b7c | 1;
    DAT_00679b78 = 0xffb9b9b9;
    FUN_005b7e6c(&DAT_00561f10);
  }
  if (cVar1 == '\0') {
    uVar5 = DAT_00679bb0;
    uVar6 = DAT_00679b78;
    if ((float)fVar7 >= (float)_DAT_005c75e8) goto LAB_00561e6d;
  }
  else {
    uVar5 = DAT_00679b78;
    uVar6 = DAT_00679ba4;
    if ((float)fVar7 < (float)_DAT_005c75e8) goto LAB_00561e6d;
  }
  uVar6 = uVar5;
LAB_00561e6d:
  cVar1 = ftol();
  cVar2 = ftol();
  cVar3 = ftol();
  cVar4 = ftol();
  local_8 = CONCAT13(cVar4 + (char)((uint)uVar6 >> 0x18),
                     CONCAT12(cVar3 + (char)((uint)uVar6 >> 0x10),
                              CONCAT11(cVar2 + (char)((uint)uVar6 >> 8),cVar1 + (char)uVar6)));
  *param_1 = local_8;
  return;
}

