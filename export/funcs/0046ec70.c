
void FUN_0046ec70(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
joined_r0x0046ec7b:
  if (param_1 == param_2) {
    return;
  }
  *param_3 = *param_3 + 1;
  piVar3 = (int *)param_1[2];
  if (*(char *)((int)piVar3 + 0x1d) != '\0') goto LAB_0046eca4;
  cVar1 = *(char *)(*piVar3 + 0x1d);
  piVar2 = (int *)*piVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar2 + 0x1d);
    piVar3 = piVar2;
    piVar2 = (int *)*piVar2;
  }
  goto LAB_0046ecbf;
LAB_0046eca4:
  piVar3 = (int *)param_1[1];
  if (param_1 == (int *)piVar3[2]) {
    do {
      param_1 = piVar3;
      piVar3 = (int *)param_1[1];
    } while (param_1 == (int *)piVar3[2]);
  }
  if ((int *)param_1[2] != piVar3) {
LAB_0046ecbf:
    param_1 = piVar3;
  }
  goto joined_r0x0046ec7b;
}

