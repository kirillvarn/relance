
void __thiscall FUN_0043a080(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_4;
  
  uVar2 = param_2;
  local_4 = param_1;
  FUN_00432240(&local_4,&param_2);
  if (local_4 == *(int *)(param_1 + 0x10)) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Could not find location id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x110,param_2);
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_4 + 0x10);
  }
  if ((*(char *)(param_1 + 0x5a) == '\0') && (DAT_0067ecd0 != (int *)0x0)) {
    (**(code **)(*DAT_0067ecd0 + 0xa0))(uVar2,DAT_00673344,0);
  }
  if (*(undefined4 **)(iVar3 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(iVar3 + 8))(1);
  }
  iVar1 = *(int *)(iVar3 + 4);
  *(undefined4 *)(iVar3 + 8) = 0;
  if (iVar1 != 0) {
    FUN_0043a140();
    FUN_005b7e1d(iVar1);
  }
  *(undefined4 *)(iVar3 + 4) = 0;
  return;
}

