
void FUN_0046b0f0(wchar_t *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  size_t sVar4;
  undefined *puVar5;
  undefined4 uVar6;
  
  piVar3 = DAT_0066d434;
  piVar2 = (int *)*DAT_0066d434;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    if ((undefined4 *)piVar2[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[2])(1);
      piVar2[2] = 0;
    }
    FUN_005b7e1d(piVar2);
    DAT_0066d438 = DAT_0066d438 + -1;
    piVar2 = piVar1;
  }
  uVar6 = 0;
  puVar5 = &DAT_0066d430;
  sVar4 = wcslen(param_1);
  FUN_0057db50(param_1,sVar4,puVar5,uVar6);
  DAT_0066d43c = DAT_0066d43c + 1;
  return;
}

