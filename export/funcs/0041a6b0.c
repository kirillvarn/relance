
void FUN_0041a6b0(void)

{
  if (*(int *)MaterialBatcher_exref != 0) {
    DAT_006166d4 = 0;
    (**(code **)(**(int **)MaterialBatcher_exref + 0x28))(*(int **)MaterialBatcher_exref,1);
    (**(code **)(**(int **)MaterialBatcher_exref + 0x38))(*(int **)MaterialBatcher_exref,0);
    (**(code **)(**(int **)MaterialBatcher_exref + 0x20))
              (*(int **)MaterialBatcher_exref,1,0xffffffff);
  }
  return;
}

