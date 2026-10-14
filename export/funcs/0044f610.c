
int __thiscall FUN_0044f610(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int local_30;
  int *local_2c [4];
  byte local_1c;
  char local_1b;
  undefined4 local_18;
  byte local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_30 = 0;
  puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0xac);
  do {
    if (puVar1 == *(undefined4 **)(param_1 + 0xac)) {
LAB_0044f644:
      local_2c[0] = (int *)0x0;
      local_1c = 0;
      local_1b = '\0';
      cVar4 = FUN_0044f270(param_2,local_2c);
      piVar3 = local_2c[0];
      if (cVar4 != '\0') {
        local_14 = local_14 & 0xf8;
        local_18 = 0;
        local_10 = 0;
        local_c = 0;
        local_8 = 0;
        local_4 = 0;
        cVar4 = (**(code **)(*local_2c[0] + 0x24))();
        local_14 = local_14 ^ (cVar4 << 2 ^ local_14) & 4;
        local_14 = local_14 ^ (local_1b << 1 ^ local_14) & 2;
        local_14 = local_14 ^ (local_1c ^ local_14) & 1;
        local_18 = param_3;
        FUN_00428680(piVar3,&local_18,&local_30,0);
      }
      return local_30;
    }
    if (puVar1[7] == param_2) {
      if ((puVar1 + 2 != (undefined4 *)0x0) && (iVar2 = puVar1[8], iVar2 != 0)) {
        FUN_0042a2a0(puVar1[2],param_3);
        *(undefined1 *)(puVar1 + 9) = 0;
        return iVar2;
      }
      goto LAB_0044f644;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

