
void __thiscall FUN_0044d240(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (((param_4 != -1) && (param_3 == 3)) && (iVar3 = 0, 0 < *(int *)(param_1 + 0x1334))) {
    piVar2 = (int *)(param_1 + 0x1134);
    do {
      piVar1 = (int *)*piVar2;
      if ((piVar1[1] == param_4) || (piVar1[2] == param_4)) {
        (**(code **)(*piVar1 + 4))();
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x1334));
  }
  return;
}

