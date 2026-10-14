
void FUN_00425080(void)

{
  (**(code **)(**(int **)MaterialBatcher_exref + 0x28))(*(int **)MaterialBatcher_exref,1);
  (**(code **)(**(int **)Pipeline_exref + 0xe8))(*(int **)Pipeline_exref);
  FUN_00421ed0(0xb60);
  FUN_00422190(1);
  FUN_00421ed0(0xbe2);
  FUN_00421dd0(0xb71);
  FUN_00422120(4);
  FUN_00421dd0(0xb44);
  if (DAT_0067ecbc != '\0') {
    FUN_005b27c0(1);
  }
  if (DAT_0061084c != DAT_00610848) {
    if (DAT_00610848 == 0x18) {
      _control87(0x20000,0x30000);
      return;
    }
    if (DAT_00610848 == 0x35) {
      _control87(0x10000,0x30000);
      return;
    }
    _control87(0,0);
  }
  return;
}

