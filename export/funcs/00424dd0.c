
void FUN_00424dd0(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  undefined1 local_3;
  
  local_c = 1;
  local_4 = 1;
  local_10 = 0;
  local_8 = 2;
  local_28[1] = 0x3c;
  local_28[0] = 0xffffffff;
  if ((param_2[2] == 0) || (param_2[3] == 0)) {
    local_3 = (undefined1)param_3;
    param_3 = 0;
    (**(code **)(**(int **)Pipeline_exref + 0x20))(*(int **)Pipeline_exref,3,&param_3);
    param_3 = param_3 >> 0x14;
    local_28[3] = 600;
    local_18 = 0x10;
    if (0x10 < param_3) {
      param_2 = (undefined4 *)0x0;
      (**(code **)(**(int **)Pipeline_exref + 0x20))(*(int **)Pipeline_exref,4,&param_2);
      local_18 = 0x20;
      if (param_2 != (undefined4 *)0x0) {
        local_28[3] = 0x300;
      }
    }
  }
  else {
    puVar3 = param_2;
    puVar4 = local_28;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  local_48 = local_28[3];
  local_44 = local_18;
  local_38 = local_18;
  local_40 = 800;
  local_3c = 600;
  local_34 = 800;
  local_30 = 600;
  local_2c = 0x10;
  local_14 = 0xffffffff;
  uVar5 = 0;
  puVar3 = &local_48;
  do {
    local_28[2] = puVar3[-1];
    local_28[3] = *puVar3;
    local_18 = puVar3[1];
    cVar1 = FUN_004249c0(param_1,local_28,&DAT_00679bc0);
    if (cVar1 != '\0') {
      return;
    }
    uVar5 = uVar5 + 1;
    puVar3 = puVar3 + 3;
  } while (uVar5 < 3);
  return;
}

