
void __thiscall FUN_0045ccf0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((((*(int *)(param_1 + 0x524) != 0) || (DAT_0067dcc8 == '\0')) &&
      (cVar2 = FUN_0055e280(), cVar2 == '\0')) && (cVar2 = FUN_0055e280(), cVar2 == '\0')) {
    if (DAT_006724b4 != (int *)0x0) {
      (**(code **)(*DAT_0067ecd0 + 0x140))(DAT_00673344,0);
      (**(code **)(*DAT_006724b4 + 0xa8))(0xef02,0,0);
    }
    if (param_2 != *(int *)(param_1 + 0x3a8)) {
      FUN_004424f0(1);
      if (*(int *)(param_1 + 0x3a8) != 0) {
        *(undefined4 *)(param_1 + 0x528) = param_3;
        *(int *)(param_1 + 0x524) = param_2;
        FUN_0045cf60();
        return;
      }
      FUN_005645c0(0x1b);
      *(byte *)(param_2 + 0x6c) = *(byte *)(param_2 + 0x6c) | 3;
      FUN_0055e120(DAT_005cea10);
      switch(param_3) {
      default:
        iVar3 = 0;
        break;
      case 0x65:
        iVar3 = 3;
        break;
      case 0x66:
        iVar3 = 1;
        break;
      case 0x67:
        iVar3 = 2;
        break;
      case 0x68:
        iVar3 = 5;
        break;
      case 0x69:
        iVar3 = 6;
        break;
      case 0x6a:
        iVar3 = 4;
      }
      if (*(char *)(param_1 + 0x52c) == '\0') {
        puVar1 = (undefined4 *)(param_1 + (iVar3 * 3 + 0xfc) * 4);
        uStack_c = *puVar1;
        uStack_8 = puVar1[1];
        uStack_4 = puVar1[2];
      }
      else {
        uStack_c = 0;
        uStack_8 = 0xbd99999a;
        uStack_4 = 0xbfa00000;
      }
      FUN_0055dee0(param_2,param_2 + 0x2d4,&uStack_c);
      *(int *)(param_1 + 0x3a8) = param_2;
      *(undefined4 *)(param_1 + 0x3ac) = param_3;
      FUN_00576360(0);
      piVar5 = (int *)(param_1 + 0x3d4);
      iVar3 = 7;
      do {
        if ((int *)*piVar5 != (int *)0x0) {
          if ((piVar5[-7] == *(int *)(param_1 + 0x3a8)) || (piVar5[-7] == *(int *)(param_1 + 0x50c))
             ) {
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
          }
          (**(code **)(*(int *)*piVar5 + 0xa8))(0xc,uVar4,0);
        }
        piVar5 = piVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

