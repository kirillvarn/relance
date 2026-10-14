
void FUN_004284f0(void)

{
  FUN_00428430(0);
  if (DAT_00667cbc != 0) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: sound reference count leaks detected: %d sounds",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\Sound.cpp",0x4da,DAT_00667cbc);
  }
  Heap::Shrink((Heap *)&DAT_00667a44);
  Heap::Shrink((Heap *)&DAT_00667a34);
  Heap::Shrink((Heap *)&DAT_00667a24);
  return;
}

