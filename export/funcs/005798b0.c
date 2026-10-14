
void __thiscall FUN_005798b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((param_2 != *(int *)(param_1 + 0x360)) && (-1 < param_2)) {
    *(int *)(param_1 + 0x360) = param_2;
    bVar2 = true;
  }
  if ((param_3 == *(int *)(param_1 + 0x364)) || (param_3 < 0)) {
    if (!bVar2) {
      return;
    }
  }
  else {
    *(int *)(param_1 + 0x364) = param_3;
  }
  iVar1 = *(int *)(param_1 + 0x360);
  TextRenderContext::set_origin_v((TextRenderContext *)(param_1 + 900),-*(int *)(param_1 + 0x364));
  TextRenderContext::set_origin_h((TextRenderContext *)(param_1 + 900),-iVar1);
  *(bool *)(param_1 + 0x400) = *(char *)(param_1 + 0x400) != '\0';
  *(undefined1 *)(param_1 + 0x401) = 1;
  if (*(int *)(param_1 + 0x3f0) != 0) {
    FUN_00595db0((float)*(int *)(param_1 + 0x364));
  }
  if (*(int *)(param_1 + 0x3f4) != 0) {
    FUN_00595db0((float)*(int *)(param_1 + 0x360));
  }
  return;
}

