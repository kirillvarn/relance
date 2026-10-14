
void __fastcall FUN_00580290(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar4 = *(int *)(param_1 + 0x65c);
  iVar1 = *(int *)(param_1 + 0x658);
  if (((iVar1 < iVar4) && (iVar2 = *(int *)(param_1 + 0x664), iVar1 <= iVar2)) && (iVar2 <= iVar4))
  {
    *(undefined1 *)(param_1 + 0x66d) = 1;
    fVar3 = (float)(iVar2 - iVar1) / (float)(iVar4 - iVar1);
    puVar5 = (undefined4 *)(param_1 + 0x540);
    puVar6 = (undefined4 *)(param_1 + 0x5b8);
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *(float *)(param_1 + 0x5dc) =
         (*(float *)(param_1 + 0x594) - *(float *)(param_1 + 0x564)) * fVar3 +
         *(float *)(param_1 + 0x564);
    *(float *)(param_1 + 0x5e0) =
         (*(float *)(param_1 + 0x598) - *(float *)(param_1 + 0x568)) * fVar3 +
         *(float *)(param_1 + 0x568);
    *(float *)(param_1 + 0x5e4) =
         (*(float *)(param_1 + 0x59c) - *(float *)(param_1 + 0x56c)) * fVar3 +
         *(float *)(param_1 + 0x56c);
    if (*(int *)(param_1 + 0x51c) != -1) {
      (**(code **)(**(int **)Engine_exref + 0x9c))
                (*(int **)Engine_exref,*(int *)(param_1 + 0x51c),param_1 + 0x5b8);
      (**(code **)(**(int **)Engine_exref + 0x6c))
                (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x51c),0,0);
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x66d) = 0;
  }
  return;
}

