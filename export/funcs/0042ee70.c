
undefined4 * __thiscall FUN_0042ee70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  CacheString *this;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b8e4c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  CacheString::clear((CacheString *)(param_1 + 2));
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  if (param_2[4] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)(param_2[5] - param_2[4]) >> 2;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  this = operator_new(iVar2 * 4);
  param_1[4] = this;
  puVar1 = (undefined4 *)param_2[5];
  for (puVar4 = (undefined4 *)param_2[4]; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    local_4 = 0;
    if (this != (CacheString *)0x0) {
      CacheString::clear(this);
      *(undefined4 *)this = *puVar4;
    }
    this = this + 4;
  }
  param_1[5] = this;
  param_1[6] = this;
  *(byte *)(param_1 + 7) =
       (*(byte *)(param_2 + 7) ^ *(byte *)(param_1 + 7)) & 1 ^ *(byte *)(param_1 + 7);
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  local_4 = 1;
  if (param_2[0xb] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)(param_2[0xc] - param_2[0xb]) >> 2;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  puVar3 = operator_new(iVar2 << 2);
  param_1[0xb] = puVar3;
  puVar1 = (undefined4 *)param_2[0xc];
  for (puVar4 = (undefined4 *)param_2[0xb]; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *puVar4;
    }
    puVar3 = puVar3 + 1;
  }
  param_1[0xc] = puVar3;
  param_1[0xd] = puVar3;
  ExceptionList = local_c;
  return param_1;
}

