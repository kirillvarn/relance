
void __fastcall FUN_0043bbe0(int param_1)

{
  int *piVar1;
  IBase *pIVar2;
  undefined4 local_8;
  int local_4;
  
  local_8 = *(undefined4 *)(param_1 + 0x34);
  FUN_00432240(&local_4,&local_8);
  if (local_4 == *(int *)(param_1 + 0x24)) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Could not find base id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x100,local_8);
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(local_4 + 0x10);
  }
  if ((uint *)*piVar1 == (uint *)0x0) {
    return;
  }
  pIVar2 = Universe::get_base(*(uint *)*piVar1);
  if (pIVar2 == (IBase *)0x0) {
    return;
  }
  (**(code **)(*(int *)pIVar2 + 8))();
  return;
}

