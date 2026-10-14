
void __thiscall FUN_0043b220(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_4;
  
  local_4 = param_1;
  FUN_00432240(&local_4,&param_2);
  if (local_4 == *(int *)(param_1 + 0x10)) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Could not find location id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x110,param_2);
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(local_4 + 0x10);
  }
  if (*(int *)(iVar1 + 4) != 0) {
    *(undefined1 *)(*(int *)(iVar1 + 4) + 0x44) = 1;
  }
  return;
}

