
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00559900(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 **ppuVar3;
  undefined4 unaff_retaddr;
  undefined1 *puStack_38;
  undefined4 auStack_24 [4];
  undefined1 local_14 [12];
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    puStack_38 = local_14;
    (**(code **)(**(int **)TextureLib_exref + 0x58))
              (*(int **)TextureLib_exref,**(undefined4 **)(param_1 + 0x1c),0);
    puVar2 = auStack_24;
    ppuVar3 = &puStack_38;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppuVar3 = (undefined1 *)*puVar2;
      puVar2 = puVar2 + 1;
      ppuVar3 = ppuVar3 + 1;
    }
    switch(param_1) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
    }
    FUN_00402d30(DAT_00679a28);
    FUN_00402e30(&puStack_38,2,1);
    FUN_004034a0(&DAT_0067dbf8,uStack_8,
                 CONCAT31(CONCAT21(CONCAT11(puStack_4[3],*puStack_4),puStack_4[1]),puStack_4[2]),
                 unaff_retaddr,param_2,0);
    return 1;
  }
  return 0;
}

