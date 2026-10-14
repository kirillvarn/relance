
void __fastcall FUN_0044aca0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_8;
  undefined4 local_4;
  
  FUN_0044a540();
  if ((*(char *)(param_1 + 0x515) == '\0') && (*(char *)(param_1 + 0x514) == '\0')) {
    iVar5 = 0;
    local_8 = 0;
    local_4 = 0xffffffff;
    cVar2 = FUN_00449f40(&local_8,&local_4);
    iVar1 = local_8;
    if (cVar2 != '\0') {
      iVar3 = 0;
      piVar4 = (int *)(param_1 + 0x518);
      do {
        if ((*piVar4 != 0) && (*(int *)(*piVar4 + 0x154) == local_8)) {
          if (iVar3 != -1) {
            iVar5 = *(int *)(param_1 + 0x518 + iVar3 * 4);
          }
          break;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < 0x40);
      FUN_00435dd0(iVar5,param_1,*(undefined4 *)(iVar5 + 0x1b8),local_4,0,0);
      (**(code **)(*DAT_0067ecd0 + 0xa4))(iVar1,DAT_00673344);
      *(undefined1 *)(param_1 + 0x517) = 1;
    }
    *(undefined1 *)(param_1 + 0x514) = 1;
  }
  return;
}

