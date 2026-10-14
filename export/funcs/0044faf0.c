
void FUN_0044faf0(int *param_1,int *param_2,undefined1 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 != (int *)0x0) {
    *(undefined1 *)param_2 = 0;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = (int *)(**(code **)(*param_1 + 0x24))(param_1,iVar5);
        if ((*piVar2 == 6) &&
           (((iVar3 = stricmp((char *)piVar2[0xf],PTR_s_BackgroundAmbient_00610ff8),
             piVar4 = param_1, iVar3 == 0 ||
             (iVar3 = stricmp((char *)piVar2[0xf],PTR_s_BackgroundMusic_00610ffc), piVar4 = param_2,
             iVar3 == 0)) && (piVar4 != (int *)0x0)))) {
          *(undefined1 *)piVar4 = 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
  }
  return;
}

