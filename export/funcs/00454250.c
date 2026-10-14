
void __fastcall FUN_00454250(char *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  char *local_4;
  
  local_4 = param_1;
  if (*param_1 != '\0') {
    iVar1 = FUN_005792b0(0x25);
    if (iVar1 != 0) {
      iVar1 = FUN_005792b0(0x27);
      if (iVar1 != 0) {
        bVar2 = true;
        if (*(int *)(param_1 + 0x14) != 0) {
          local_4 = (char *)0x0;
          (**(code **)(**(int **)Pipeline_exref + 0x20))(*(int **)Pipeline_exref,0xd,&local_4);
          bVar2 = local_4 != (char *)0x0;
        }
        goto LAB_004542af;
      }
    }
  }
  bVar2 = false;
LAB_004542af:
  if (bVar2 != false) {
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x1c,bVar2);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))
              (*(int **)Pipeline_exref,0x22,*(undefined4 *)(param_1 + 4));
    piVar3 = *(int **)Pipeline_exref;
    (**(code **)(*piVar3 + 0xf0))(piVar3,0x24,*(undefined4 *)(param_1 + 8));
    (**(code **)(**(int **)Pipeline_exref + 0xf0))
              (*(int **)Pipeline_exref,0x25,*(undefined4 *)(param_1 + 0xc),piVar3,
               *(undefined4 *)(param_1 + 0xc));
    (**(code **)(**(int **)Pipeline_exref + 0xf0))
              (*(int **)Pipeline_exref,0x26,*(undefined4 *)(param_1 + 0x10));
    (**(code **)(**(int **)Pipeline_exref + 0xf0))
              (*(int **)Pipeline_exref,0x23,*(undefined4 *)(param_1 + 0x14));
    (**(code **)(**(int **)Pipeline_exref + 0xf0))
              (*(int **)Pipeline_exref,0x8c,*(undefined4 *)(param_1 + 0x18));
    return;
  }
  FUN_00421ed0(0xb60);
  return;
}

