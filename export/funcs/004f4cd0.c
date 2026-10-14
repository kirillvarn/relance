
void FUN_004f4cd0(void)

{
  int iVar1;
  
  if (DAT_00674bc8 != 0) {
    iVar1 = FUN_0054baf0();
    if (iVar1 != 0) {
      if (((*(int *)(DAT_00674bc8 + 0x364) != 0) && (*(int *)(DAT_00674bc8 + 0x364) != 8)) &&
         (*(char *)(DAT_00674bc8 + 0x38c) != '\0')) {
        (**(code **)(*(int *)(iVar1 + 4) + 0x48))
                  (0,*(undefined2 *)SUBOBJ_ID_NONE_exref,DAT_00673344);
      }
    }
  }
  return;
}

