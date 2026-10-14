
void FUN_00430500(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  CacheString *this;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b8ead;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    CacheString::clear((CacheString *)(param_1 + 3));
    param_1[3] = param_2[3];
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    if (param_2[5] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(param_2[6] - param_2[5]) >> 2;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    this = operator_new(iVar2 * 4);
    param_1[5] = this;
    puVar1 = (undefined4 *)param_2[6];
    for (puVar4 = (undefined4 *)param_2[5]; local_4._1_3_ = (undefined3)((uint)local_4 >> 8),
        puVar4 != puVar1; puVar4 = puVar4 + 1) {
      local_4 = CONCAT31(local_4._1_3_,1);
      if (this != (CacheString *)0x0) {
        CacheString::clear(this);
        *(undefined4 *)this = *puVar4;
      }
      this = this + 4;
    }
    param_1[6] = this;
    param_1[7] = this;
    *(byte *)(param_1 + 8) =
         (*(byte *)(param_2 + 8) ^ *(byte *)(param_1 + 8)) & 1 ^ *(byte *)(param_1 + 8);
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (param_2[0xc] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(param_2[0xd] - param_2[0xc]) >> 2;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    puVar3 = operator_new(iVar2 << 2);
    param_1[0xc] = puVar3;
    puVar1 = (undefined4 *)param_2[0xd];
    for (puVar4 = (undefined4 *)param_2[0xc]; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar4;
      }
      puVar3 = puVar3 + 1;
    }
    param_1[0xd] = puVar3;
    param_1[0xe] = puVar3;
  }
  ExceptionList = local_c;
  return;
}

