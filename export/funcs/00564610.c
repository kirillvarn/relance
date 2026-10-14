
int FUN_00564610(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = stricmp((&PTR_s_ui_select_item_006149e8)[iVar2],param_1);
    if (iVar1 == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x2d);
  return -1;
}

