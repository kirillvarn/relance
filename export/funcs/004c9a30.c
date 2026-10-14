
void __fastcall FUN_004c9a30(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    (**(code **)(**(int **)Deform_exref + 0x24))(*(int **)Deform_exref,*param_1);
    piVar1 = param_1 + 0x95;
    param_1 = param_1 + 0x11;
    iVar2 = 4;
    do {
      if (*piVar1 != -1) {
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        *piVar1 = -1;
      }
      piVar1 = piVar1 + 1;
      param_1 = param_1 + 0x21;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

