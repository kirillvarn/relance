
bool FUN_00556200(void)

{
  int *piVar1;
  
  piVar1 = (int *)*DAT_0067999c;
  if (piVar1 != DAT_0067999c) {
    do {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: hotspot = %p id = %d not freed\n",
                 "E:\\FL\\Scratch\\Source\\Client\\supt\\Hotspot.cpp",0x161,piVar1[2],
                 *(undefined4 *)(piVar1[2] + 8));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != DAT_0067999c);
  }
  return DAT_006799a0 == 0;
}

