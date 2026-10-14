
undefined4 FUN_005b3770(int param_1)

{
  undefined4 *puVar1;
  
  if ((DAT_0067ed0c & 1) == 0) {
    DAT_0067ed0c = DAT_0067ed0c | 1;
    DAT_0067ed00 = (undefined1)param_1;
    DAT_0067ed04 = (undefined4 *)FUN_0042a7e0(0,0);
    DAT_0067ed08 = 0;
    FUN_005b7e6c(&LAB_005b3640);
  }
  puVar1 = (undefined4 *)*DAT_0067ed04;
  while( true ) {
    if (puVar1 == DAT_0067ed04) {
      return 0;
    }
    if (param_1 == *(int *)(puVar1[2] + 8)) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[2];
}

