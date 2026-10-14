
void FUN_00422ab0(void)

{
  if (DAT_00610844 == '\0') {
    (**(code **)(**(int **)Pipeline_exref + 0x84))(*(int **)Pipeline_exref,&DAT_00664948);
    return;
  }
  if (DAT_00664928 == 1) {
    FUN_00422820(DAT_0066492c,DAT_00664930,DAT_00664934,DAT_00664938);
    DAT_00664928 = 0;
    return;
  }
  if (DAT_00664928 == 2) {
    FUN_004221f0(DAT_0066492c,DAT_00664930,DAT_00664934,DAT_00664938,DAT_0066493c,DAT_00664940);
  }
  DAT_00664928 = 0;
  return;
}

