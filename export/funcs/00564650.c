
void FUN_00564650(uint param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 local_18;
  byte local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = &DAT_0067a4a8 + param_1;
  if ((&DAT_0067a4a8)[param_1] == 0) {
    param_1 = CreateID((&PTR_s_ui_select_item_006149e8)[param_1]);
    piVar2 = (int *)FUN_0042ae40(&param_1);
    *puVar1 = piVar2;
    (**(code **)(*piVar2 + 0xc))();
  }
  local_14 = local_14 & 0xf8 | 1;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_004285f0(*puVar1,&local_18,0);
  return;
}

