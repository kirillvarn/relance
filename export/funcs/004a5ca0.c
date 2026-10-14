
void __thiscall FUN_004a5ca0(int param_1,int param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *(int *)(param_1 + 0x34c);
  if (iVar5 != 0) {
    iVar2 = 0;
    param_3 = -param_3;
    fVar1 = (float)DAT_00610850 * (float)s___33__NewsTicker_005d3fb2._2_4_;
    if (0 < iVar5) {
      puVar4 = (undefined2 *)(param_1 + 0x358);
      do {
        iVar3 = (iVar2 + param_2) % iVar5;
        if ((0xff < iVar2) || (fVar1 <= param_3)) break;
        *puVar4 = *(undefined2 *)(*(int *)(param_1 + 0x344) + iVar3 * 2);
        iVar5 = *(int *)(param_1 + 0x34c);
        iVar2 = iVar2 + 1;
        puVar4 = puVar4 + 1;
        param_3 = (float)*(int *)(*(int *)(param_1 + 0x348) + iVar3 * 4) + param_3;
      } while (iVar2 < iVar5);
    }
    *(undefined2 *)(param_1 + 0x358 + iVar2 * 2) = 0;
    iVar5 = param_1 + 0x358;
    uVar6 = 0x1d;
    (**(code **)(**(int **)(param_1 + 0x5b8) + 0xa8))(0x1d,iVar5,0);
    (**(code **)(**(int **)(param_1 + 0x5b8) + 0xa8))(0x22,0,1);
    (**(code **)(**(int **)(param_1 + 0x5b8) + 0xa8))(0x23,iVar5,uVar6);
  }
  return;
}

