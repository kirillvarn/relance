
void FUN_004215e0(uint param_1)

{
  byte bVar1;
  
  bVar1 = (param_1 & 0x4000) != 0;
  if ((param_1 & 0x100) != 0) {
    bVar1 = bVar1 | 2;
  }
  (**(code **)(**(int **)Pipeline_exref + 0x5c))(*(int **)Pipeline_exref,0,0x3f800000);
  (**(code **)(**(int **)Pipeline_exref + 0x3c))(*(int **)Pipeline_exref,bVar1,0);
  return;
}

