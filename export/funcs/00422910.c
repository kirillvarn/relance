
void FUN_00422910(int *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*param_1 + 0x24))(param_1);
  fVar1 = (float10)(**(code **)(*param_1 + 0x20))(param_1,(float)fVar1);
  fVar1 = (float10)(**(code **)(*param_1 + 0x28))(param_1,(float)fVar1);
  fVar1 = (float10)(**(code **)(*param_1 + 0x1c))(param_1,(float)fVar1);
  FUN_00422820((float)fVar1);
  return;
}

