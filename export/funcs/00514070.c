
undefined4
FUN_00514070(ID_String *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = ID_String::IsEmpty(param_1);
  if (!bVar1) {
    uVar2 = FUN_0040f080(param_1,param_2,param_3,param_4,param_5);
    uVar2 = FUN_00503070(uVar2,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 0;
}

