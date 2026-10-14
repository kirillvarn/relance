
undefined4 __thiscall FUN_004978c0(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_118;
  char local_114 [88];
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_48;
  undefined1 local_44;
  
  local_118 = 0;
  local_114[0] = '\0';
  local_bc = 0;
  local_b8 = 0;
  local_8c = 0;
  local_88 = 0;
  local_48 = 0;
  local_44 = 0;
  uVar2 = (**(code **)(**(int **)(param_1 + 0x7e0) + 0x3c))();
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x7e0) + 0x40))(uVar4,&local_118);
      if ((cVar1 != '\0') && (uVar3 = CreateID(local_114), uVar3 == param_2)) {
        return uStack_90;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

