
void __thiscall FUN_005643f0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int unaff_retaddr;
  undefined4 uVar1;
  undefined4 local_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_10 [4];
  int iStack_c;
  undefined1 local_8 [8];
  
  FUN_00417790(&local_1c,DAT_0067a484);
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x18))(local_8);
  FUN_00417780(&stack0x00000000);
  (**(code **)(**(int **)(param_1 + 0x98) + 0x14))(param_4);
  fStack_18 = (float)(uint)(*(int *)(param_1 + 0x74) + (unaff_retaddr - iStack_c));
  local_1c = 0;
  uVar1 = 0;
  fStack_14 = (float)(uint)(*(int *)(param_1 + 0x78) +
                           CONCAT22((short)(CONCAT13((char)(param_3 >> 0x18),
                                                     (int3)((param_3 & 0xff) << 0x10)) >> 0x10),
                                    CONCAT11((char)(param_3 >> 8),(char)(param_3 >> 0x10))));
  (**(code **)(**(int **)(param_1 + 0x98) + 0x24))(&fStack_18,0,0);
  FUN_00417790(auStack_10,uVar1);
  FUN_00403ea0(*(undefined4 *)Pipeline_exref,DAT_0067a480);
  FUN_00403ea0(*(undefined4 *)Pipeline_exref,DAT_0067a484);
  return;
}

