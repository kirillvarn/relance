
void __thiscall FUN_00539d80(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  Root *pRVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 local_c [12];
  
  iVar1 = *(int *)(param_4 + 0x10);
  if ((iVar1 == 0) || (((byte)*(undefined4 *)(iVar1 + 0x4c) & 7) != 7)) {
    iVar1 = 0;
  }
  iVar1 = *(int *)(iVar1 + 0x88);
  if ((*(CObject **)(param_1 + 0x10) != (CObject *)0x0) &&
     (pRVar2 = CObject::get_archetype(*(CObject **)(param_1 + 0x10)), pRVar2 != (Root *)0x0)) {
    CObject::get_archetype(*(CObject **)(param_1 + 0x10));
  }
  uVar3 = FUN_00407450(*(undefined4 *)(iVar1 + 0x80));
  if (((param_4 == -0xc) || (iVar1 = *(int *)(param_4 + 0x10), iVar1 == 0)) ||
     (((byte)*(undefined4 *)(iVar1 + 0x4c) & 0x27) != 0x27)) {
    iVar1 = 0;
  }
  FUN_00539f90(*(undefined4 *)(iVar1 + 0xe4),uVar3,param_2,param_2 + 0xc,0);
  uVar3 = FUN_00408a70();
  if (((param_4 == -0xc) || (piVar5 = *(int **)(param_4 + 0x10), piVar5 == (int *)0x0)) ||
     (((byte)piVar5[0x13] & 1) != 1)) {
    piVar5 = (int *)0x0;
  }
  puVar6 = local_c;
  uVar4 = (**(code **)(*piVar5 + 0x54))(puVar6,0);
  FUN_0053a230(uVar3,param_2,param_2 + 0xc,uVar4,puVar6);
  return;
}

