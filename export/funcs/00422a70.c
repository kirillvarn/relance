
void FUN_00422a70(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (DAT_00610844 != '\0') {
    DAT_00664928 = DAT_0066490c;
    puVar2 = &DAT_00664910;
    puVar3 = &DAT_0066492c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return;
  }
  (**(code **)(**(int **)Pipeline_exref + 0x88))(*(int **)Pipeline_exref,&DAT_00664948);
  return;
}

