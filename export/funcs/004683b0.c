
int __fastcall FUN_004683b0(int param_1)

{
  int iVar1;
  clock_t cVar2;
  int *piVar3;
  int *piVar4;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  if ((*(int *)(param_1 + 0x14) == 0) && (*(int *)(param_1 + 8) != 0)) {
    iVar1 = *(int *)(**(int **)(param_1 + 4) + 8);
    local_8 = iVar1;
    FUN_0046bb50();
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_005947a0(local_4,*(undefined4 *)(param_1 + 0x10),&local_8);
    FUN_0046c5f0();
    FUN_004686e0();
    FUN_004684e0();
  }
  iVar1 = *(int *)(**(int **)(param_1 + 0x10) + 8);
  local_c = iVar1;
  FUN_0046c860(local_4,**(undefined4 **)(iVar1 + 4),*(undefined4 **)(iVar1 + 4));
  *(undefined4 *)(iVar1 + 0xc) = 0;
  cVar2 = clock();
  *(int *)(local_c + 0xc) = (cVar2 / 1000) * 1000;
  local_8 = **(int **)(param_1 + 0x10);
  piVar3 = (int *)FUN_0053ab20(local_4,0);
  piVar3 = (int *)*piVar3;
  *(int *)piVar3[1] = *piVar3;
  *(int *)(*piVar3 + 4) = piVar3[1];
  FUN_005b7e1d(piVar3);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  iVar1 = *(int *)(param_1 + 4);
  piVar3 = *(int **)(iVar1 + 4);
  piVar4 = operator_new(0xc);
  *piVar4 = iVar1;
  if (piVar3 == (int *)0x0) {
    piVar3 = piVar4;
  }
  piVar4[1] = (int)piVar3;
  *(int **)(iVar1 + 4) = piVar4;
  *(int **)piVar4[1] = piVar4;
  FUN_005999b0(piVar4 + 2,&local_c);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return local_c;
}

