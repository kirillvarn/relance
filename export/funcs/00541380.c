
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00541380(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  undefined4 in_stack_00002020;
  
  FUN_005b7e90();
  FUN_005424b0(in_stack_00002020);
  FUN_005424b0(in_stack_00002020);
  FUN_005424b0(in_stack_00002020);
  FUN_005424b0(in_stack_00002020);
  FUN_005424b0(in_stack_00002020);
  piVar5 = DAT_00678ae0;
  uVar6 = 0;
  if (DAT_00678ae0 != (int *)0x0) {
    piVar2 = (int *)FUN_0040f130();
    in_stack_00000018 = 0;
    in_stack_00000014 = 0x800;
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(piVar2);
    uVar1 = *puVar3;
    (**(code **)(*piVar5 + 0x1c))(&stack0x00000000,&stack0x00000010);
    if (in_stack_00000018 != 0) {
      puVar3 = (undefined4 *)&stack0x0000001c;
      do {
        piVar5 = (int *)*puVar3;
        iVar4 = (**(code **)(*piVar5 + 0x150))();
        if (((*(float *)(iVar4 + 0x38) <= _DAT_00613ec4) ||
            ((**(code **)(*piVar5 + 0x88))(&stack0x00000000), (char)uVar1 < '\0')) &&
           (piVar5 = (int *)__RTDynamicCast(piVar5,0,&IObjRW::RTTI_Type_Descriptor,
                                            &GameObject::RTTI_Type_Descriptor,0),
           piVar5 != (int *)0x0)) {
          (**(code **)(*piVar5 + 0x174))(in_stack_00002020);
        }
        uVar6 = uVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar6 < in_stack_00000018);
    }
    puVar3 = DAT_00678ac4;
    if (DAT_00678ac4 < DAT_00678ac8) {
      do {
        (**(code **)(*(int *)*puVar3 + 0x174))(in_stack_00002020);
        puVar3 = puVar3 + 1;
      } while (puVar3 < DAT_00678ac8);
    }
  }
  FUN_005424b0(in_stack_00002020);
  FUN_005424b0(in_stack_00002020);
  FUN_005424b0(in_stack_00002020);
  FUN_005424b0(in_stack_00002020);
  FUN_005424b0(in_stack_00002020);
  return;
}

