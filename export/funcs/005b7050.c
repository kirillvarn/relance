
undefined4 __thiscall
FUN_005b7050(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_005b7030(0);
  iVar3 = 0;
  while ((((puVar1[1] != param_2 || ((param_6 != 0) != (bool)*(char *)(puVar1 + 0x12))) ||
          (param_3 != puVar1[2])) ||
         (((param_4 != puVar1[6] || (param_5 != puVar1[2])) || (param_6 != puVar1[0xe]))))) {
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 0x13;
    if (8 < iVar3) {
      uVar2 = FUN_005b7010(0);
      *param_1 = uVar2;
      return 0;
    }
  }
  *param_1 = *puVar1;
  return 1;
}

