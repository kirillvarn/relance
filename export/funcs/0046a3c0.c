
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046a3c0(char param_1)

{
  int *piVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = (int *)FUN_0059da10(&DAT_005cf04c);
  if (param_1 == '\0') {
    if (piVar1 != (int *)0x0) {
      FUN_0057bff0();
      FUN_0057c7d0(1);
    }
    return;
  }
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_0059db20(&DAT_005cf04c,"ChatTextInputDisplay",0,0);
    if (piVar1 == (int *)0x0) {
      return;
    }
    local_c = DAT_0066da30;
    local_8 = _DAT_005ceee4;
    local_4 = 0xbf800000;
    (**(code **)(*piVar1 + 0x14))(&local_c);
  }
  *(undefined1 *)((int)piVar1 + 0x539) = 1;
  FUN_0045eaf0(&DAT_0066d3fc);
  FUN_0057c750();
  FUN_0057bdb0(0x50);
  FUN_0057b520(1);
  FUN_00579a50(1);
  return;
}

