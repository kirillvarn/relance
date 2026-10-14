
float10 __thiscall FUN_00415e40(int *param_1,undefined4 param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  uint unaff_EDI;
  undefined4 *puVar3;
  undefined1 local_74 [8];
  undefined4 local_6c [26];
  int iStack_4;
  
  pwVar2 = L"In the beginning the Earth was without form and void.";
  puVar3 = local_6c;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pwVar2;
    pwVar2 = pwVar2 + 2;
    puVar3 = puVar3 + 1;
  }
  FUN_00415ea0(param_2);
  (**(code **)(*param_1 + 0x20))(local_74,local_6c,0xffffffff);
  return (float10)unaff_EDI / (float10)iStack_4;
}

