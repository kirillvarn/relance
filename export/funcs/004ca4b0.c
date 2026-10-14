
void __fastcall FUN_004ca4b0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    (**(code **)(**(int **)Deform_exref + 0x24))(*(int **)Deform_exref,*param_1);
    piVar2 = param_1 + 0x95;
    piVar1 = param_1 + 0x11;
    iVar3 = 4;
    do {
      if (*piVar2 != -1) {
        *piVar1 = 0;
        *(undefined1 *)(piVar1 + 1) = 0;
        *piVar2 = -1;
      }
      piVar2 = piVar2 + 1;
      piVar1 = piVar1 + 0x21;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 4;
  do {
    FUN_00420f70();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*param_1 != 0) {
    (**(code **)(**(int **)Deform_exref + 0x18))(*(int **)Deform_exref,*param_1);
    *param_1 = 0;
  }
  return;
}

