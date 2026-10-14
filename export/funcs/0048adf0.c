
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0048adf0(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  FUN_005a17b0();
  if (((char)param_1[0xda] == '\0') &&
     ((cVar2 = FUN_0045a470(), cVar2 != '\0' || (cVar2 = FUN_00442720(), cVar2 != '\0')))) {
    if (param_1[0xd8] == 6) {
      (**(code **)(*DAT_0067ecd0 + 0x128))(DAT_00673344,4);
    }
    iVar3 = param_1[3];
    while (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 8);
      FUN_0043d2a0(iVar3);
      iVar3 = iVar4;
    }
    (**(code **)(*param_1 + 0x28))();
    (**(code **)*param_1)(1);
    return;
  }
  if (param_1[0xd8] == 4) {
    iVar3 = FUN_0054baf0();
    iVar4 = FUN_005416c0(DAT_00671f78,0);
    if ((((iVar4 == 0) || (iVar3 == 0)) || (iVar4 == -0xc)) ||
       (((*(int *)(iVar4 + 0x10) == 0 ||
         (((byte)*(undefined4 *)(*(int *)(iVar4 + 0x10) + 0x4c) & 3) != 3)) ||
        (iVar3 = FUN_0045a490(iVar3,iVar4), iVar3 == -1)))) {
      param_1[0xd9] = 0x41a00000;
    }
    fVar5 = (float10)FUN_0042d680();
    fVar1 = (float)param_1[0xd9];
    param_1[0xd9] = (int)(float)(fVar5 + (float10)fVar1);
    if ((float10)_DAT_005d2688 < fVar5 + (float10)fVar1) {
      iVar3 = param_1[3];
      while (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 8);
        FUN_0043d2a0(iVar3);
        iVar3 = iVar4;
      }
      (**(code **)(*param_1 + 0x28))();
      (**(code **)*param_1)(1);
    }
  }
  return;
}

