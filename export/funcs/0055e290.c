
void __fastcall FUN_0055e290(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((char)param_1[6] != '\0') {
    *(undefined1 *)(param_1 + 6) = 0;
    if (param_1[2] == 0) {
      local_10 = 0;
    }
    else {
      local_10 = (param_1[3] - param_1[2]) / 0x1c;
    }
    if (0 < local_10) {
      iVar2 = 0;
      do {
        iVar3 = param_1[2] + iVar2;
        local_c = *(undefined4 *)(iVar3 + 0xc);
        local_8 = *(undefined4 *)(iVar3 + 0x10);
        local_4 = *(undefined4 *)(iVar3 + 0x14);
        cVar1 = (**(code **)(*param_1 + 4))(*(undefined4 *)(iVar3 + 0x18),&local_c);
        if (cVar1 == '\0') {
          (**(code **)(**(int **)(iVar3 + 0x18) + 0xa8))(6,&local_c,0);
        }
        iVar2 = iVar2 + 0x1c;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    (**(code **)*param_1)();
  }
  return;
}

