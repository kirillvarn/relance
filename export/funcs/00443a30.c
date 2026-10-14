
void __fastcall FUN_00443a30(int *param_1)

{
  float10 fVar1;
  undefined4 uVar2;
  
  if ((char)param_1[0xd] != '\0') {
    uVar2 = 0;
    fVar1 = (float10)(**(code **)(*param_1 + 0x10))(0);
    FUN_0044b370(param_1[0xc],(float)fVar1,uVar2);
  }
  FUN_0044af60(param_1);
  return;
}

