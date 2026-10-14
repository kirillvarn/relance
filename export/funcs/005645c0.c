
void FUN_005645c0(uint param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = &DAT_0067a4a8 + param_1;
  if ((&DAT_0067a4a8)[param_1] == 0) {
    param_1 = CreateID((&PTR_s_ui_select_item_006149e8)[param_1]);
    piVar2 = (int *)FUN_0042ae40(&param_1);
    *puVar1 = piVar2;
    (**(code **)(*piVar2 + 0xc))();
  }
  FUN_00428640(*puVar1,0,0);
  return;
}

