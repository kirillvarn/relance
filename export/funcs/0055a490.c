
void FUN_0055a490(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  *param_2 = 0;
  *param_3 = 0;
  iVar1 = stricmp(param_1,"tractor");
  if (iVar1 == 0) {
    *param_2 = 0x8b;
    *param_3 = 0xbc2;
    return;
  }
  iVar1 = stricmp(param_1,"next");
  if (iVar1 == 0) {
    *param_2 = 0x1d;
    *param_3 = 0xbb9;
    return;
  }
  iVar1 = stricmp(param_1,"prev");
  if (iVar1 == 0) {
    *param_2 = 0x1e;
    *param_3 = 0xbba;
    return;
  }
  iVar1 = stricmp(param_1,"next_subtarget");
  if (iVar1 == 0) {
    *param_2 = 0x21;
    *param_3 = 0x41f;
    return;
  }
  iVar1 = stricmp(param_1,"prev_subtarget");
  if (iVar1 == 0) {
    *param_2 = 0x22;
    *param_3 = 0x420;
  }
  return;
}

