
void FUN_00477ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = FUN_0059da10("NN_Dealer");
  if (iVar2 == 0) {
    piVar3 = (int *)FUN_0059da10("NN_Inventory");
    bVar1 = false;
    if ((piVar3 == (int *)0x0) || ((*(byte *)(piVar3 + 0x1b) & 4) != 0)) {
      uVar4 = FUN_0045a7a0(0x66,0);
      piVar3 = (int *)FUN_0059db20("NN_Inventory","NN_Inventory",uVar4);
      if (piVar3 == (int *)0x0) {
        return;
      }
      *(byte *)(piVar3 + 0x1b) = *(byte *)(piVar3 + 0x1b) & 0xfc;
      bVar1 = true;
    }
    local_c = 0xbf23d70a;
    local_8 = 0x3ea8f5c3;
    local_4 = 0xbfa4dd2f;
    FUN_0045a780(0x66,&local_c);
    FUN_0045dcb0();
    piVar3 = (int *)(**(code **)(*piVar3 + 8))();
    piVar5 = (int *)FUN_0059db20("NN_Dealer","NN_Dealer",piVar3[1],0);
    if (piVar5 != (int *)0x0) {
      *(byte *)(piVar5 + 0x1b) = *(byte *)(piVar5 + 0x1b) & 0xfc;
      iVar2 = (**(code **)(*piVar5 + 8))();
      piVar3[0xd8] = iVar2;
      (**(code **)(*piVar3 + 0xa8))(0x47,param_1,0);
      FUN_0047b410();
      if (bVar1) {
        FUN_0047b410();
      }
      if (piVar3[0xd8] != 0) {
        *(int **)(piVar3[0xd8] + 0x974) = piVar3;
        *(byte *)(piVar3[0xd8] + 0x6c) = *(byte *)(piVar3[0xd8] + 0x6c) & 0xfc;
      }
    }
    (**(code **)(*piVar3 + 0xa8))(0x48,param_3,param_2);
    (**(code **)(*piVar3 + 0xa8))(0x13,param_1,0);
  }
  return;
}

