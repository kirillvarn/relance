
void __fastcall FUN_0051daa0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if ((*(int *)(param_1 + 0xc0) != 0) && (*(int *)(param_1 + 0xc0) != 8)) {
    iVar1 = FUN_005792b0(6);
    if (iVar1 != 0) {
      iVar1 = FUN_005792b0(10);
      if (iVar1 != 0) {
        FUN_00422950(param_1);
        fVar2 = (float10)FUN_0042d680();
        FUN_004c8090(param_1,(float)fVar2);
      }
    }
  }
  return;
}

