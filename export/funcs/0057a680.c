
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0057a680(int *param_1)

{
  TextRenderContext *this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  if ((param_1[0xf5] != 0) && ((char)param_1[0x100] != '\0')) {
    this = (TextRenderContext *)(param_1 + 0xe1);
    TextRenderContext::reset_to_default(this);
    TextRenderContext::set_pos_v(this,0);
    TextRenderContext::set_pos_h(this,0);
    puVar1 = (undefined4 *)param_1[0xde];
    puVar3 = (undefined4 *)*puVar1;
    while (puVar3 != puVar1) {
      puVar2 = (undefined4 *)*puVar3;
      FUN_0046d680(&local_4,puVar3);
      puVar3 = puVar2;
    }
    param_1[0xe0] = param_1[0xd7];
    (**(code **)(*param_1 + 0xb4))();
    if (*(char *)((int)param_1 + 0x407) != '\0') {
      puVar1 = (undefined4 *)param_1[0xfc];
      if (puVar1 == (undefined4 *)0x0) {
        if (param_1[0xd7] < param_1[0xe0]) {
          iVar4 = FUN_00579aa0();
          param_1[0xfc] = iVar4;
          if (iVar4 != 0) {
            FUN_00595db0((float)param_1[0xd9]);
          }
        }
      }
      else if (param_1[0xe0] <= param_1[0xd7]) {
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        param_1[0xfc] = 0;
      }
    }
    if (param_1[0xfc] != 0) {
      local_4 = param_1[0xd7];
      iVar4 = local_4;
      if (local_4 < param_1[0xe0]) {
        iVar4 = param_1[0xe0];
      }
      FUN_00595d60(0,(float)iVar4);
    }
    if ((char)param_1[0x11e] != '\0') {
      local_4 = param_1[0xe0] - param_1[0xd7];
      if ((float)local_4 - (float)param_1[0xd9] < _DAT_005d3e4c !=
          ((float)local_4 - (float)param_1[0xd9] == _DAT_005d3e4c)) {
        if (param_1[0xd7] < param_1[0xe0]) {
          iVar4 = param_1[0xd8];
          iVar5 = local_4;
        }
        else {
          iVar4 = param_1[0xd8];
          iVar5 = 0;
        }
        FUN_005798b0(iVar4,iVar5);
      }
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return;
}

