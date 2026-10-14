
void FUN_0051f810(undefined4 param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_00422910(param_1);
  puVar1 = (undefined4 *)(&DAT_006752f8)[param_2 * 4];
  for (puVar2 = (undefined4 *)(&DAT_006752f4)[param_2 * 4]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    if (param_3 != '\0') {
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,7,0);
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,0);
    }
    (*(code *)**(undefined4 **)*puVar2)(param_1);
    (**(code **)(**(int **)MaterialBatcher_exref + 0x28))(*(int **)MaterialBatcher_exref,1);
  }
  if (param_3 != '\0') {
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,7,1);
                    /* WARNING: Could not recover jumptable at 0x0051f8c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe);
    return;
  }
  return;
}

