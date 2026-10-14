
void __fastcall FUN_005b4050(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 local_1;
  
  if ((DAT_0067ed0c & 1) == 0) {
    DAT_0067ed0c = DAT_0067ed0c | 1;
    local_1 = (undefined1)((uint)param_1 >> 0x18);
    DAT_0067ed00 = local_1;
    DAT_0067ed04 = operator_new(0xc);
    *DAT_0067ed04 = (int)DAT_0067ed04;
    DAT_0067ed04[1] = (int)DAT_0067ed04;
    DAT_0067ed08 = 0;
    FUN_005b7e6c(&LAB_005b3640);
  }
  piVar3 = DAT_0067ed04;
  piVar2 = (int *)*DAT_0067ed04;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_005b7e1d(piVar2[2]);
    piVar2[2] = 0;
    FUN_005b7e1d(piVar2);
    DAT_0067ed08 = DAT_0067ed08 + -1;
    piVar2 = piVar1;
  }
  return;
}

