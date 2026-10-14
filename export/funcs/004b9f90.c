
void FUN_004b9f90(FmtStr *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  if (*(int *)(param_1 + 4) == 0x549c) {
    FmtStr::operator=((FmtStr *)&DAT_0067230c,param_1);
    DAT_00672404 = 1;
    return;
  }
  cVar4 = FUN_0041a3e0();
  piVar3 = DAT_00672328;
  if (cVar4 != '\0') {
    piVar1 = (int *)*DAT_00672328;
    while (piVar1 != piVar3) {
      puVar5 = (undefined4 *)FUN_0053ab20(local_8,0);
      FUN_004bd4b0(local_4,*puVar5);
    }
  }
  piVar3 = DAT_00672328;
  iVar7 = 0;
  if (DAT_0067232c != 0) {
    iVar7 = DAT_00672328[1] + 8;
  }
  puVar5 = (undefined4 *)DAT_00672328[1];
  puVar6 = operator_new(0x20);
  *puVar6 = piVar3;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = puVar6;
  }
  puVar6[1] = puVar5;
  piVar3[1] = (int)puVar6;
  *(undefined4 **)puVar6[1] = puVar6;
  FUN_004bd5d0(puVar6 + 2,param_1);
  DAT_0067232c = DAT_0067232c + 1;
  FUN_00459950(param_1);
  iVar2 = DAT_00672328[1];
  FUN_004ba5a0(iVar2 + 8);
  if (iVar7 != 0) {
    FUN_004ba860(iVar2 + 8,&DAT_0066fc60,DAT_006119f8,1);
    FUN_004ba860(iVar7,&DAT_0066dc60,DAT_006119f8,1);
    iVar7 = wcscmp(&DAT_0066fc60,&DAT_0066dc60);
    if (iVar7 == 0) {
      piVar3 = (int *)DAT_00672328[1];
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      FmtStr::~FmtStr((FmtStr *)(piVar3 + 2));
      FUN_005b7e1d(piVar3);
      DAT_0067232c = DAT_0067232c + -1;
    }
  }
  return;
}

