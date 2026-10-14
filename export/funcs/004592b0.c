
undefined4 __thiscall
FUN_004592b0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  ISystem *pIVar2;
  IBase *pIVar3;
  uint uVar4;
  uint local_10;
  uint uStack_c;
  uint uStack_8;
  uint local_4;
  
  puVar1 = param_2;
  param_2 = (undefined4 *)param_2[1];
  FUN_00432240(&local_10,&param_2);
  uVar4 = local_10;
  if (local_10 != *(uint *)(param_1 + 4)) {
LAB_004592de:
    *param_3 = *(undefined4 *)(uVar4 + 0x10);
    *param_4 = *(undefined1 *)(uVar4 + 0x14);
    return 1;
  }
  puVar1 = (undefined4 *)*puVar1;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    switch(*(undefined2 *)(puVar1 + 2)) {
    case 0x42:
      pIVar3 = Universe::get_base(puVar1[1]);
      param_2 = (undefined4 *)(**(code **)(*(int *)pIVar3 + 8))();
      FUN_00432240(&uStack_8,&param_2);
      uVar4 = uStack_8;
      if (uStack_8 != *(uint *)(param_1 + 4)) {
LAB_0045935f:
        *param_3 = *(undefined4 *)(uVar4 + 0x10);
        *param_4 = *(undefined1 *)(uVar4 + 0x14);
        return 1;
      }
      break;
    case 0x46:
      param_2 = (undefined4 *)Reputation::get_name(puVar1[1]);
      FUN_00432240(&local_4,&param_2);
      uVar4 = local_4;
      goto LAB_00459402;
    case 0x53:
      pIVar2 = Universe::get_system(puVar1[1]);
      param_2 = (undefined4 *)(**(code **)(*(int *)pIVar2 + 0xc))();
      FUN_00432240(&uStack_c,&param_2);
      uVar4 = uStack_c;
LAB_00459402:
      if (uVar4 != *(uint *)(param_1 + 4)) goto LAB_004592de;
      break;
    case 0x73:
      uVar4 = puVar1[1];
      FUN_00459210(uVar4);
      param_2 = (undefined4 *)uVar4;
      FUN_00432240(&local_10,&param_2);
      uVar4 = local_10;
      if (local_10 != *(uint *)(param_1 + 4)) goto LAB_0045935f;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

