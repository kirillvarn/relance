
void FUN_00435c90(undefined4 *param_1,Csys *param_2,Csys *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_90 [24];
  Csys local_30 [48];
  
  Csys::get_inverse(param_2);
  puVar1 = (undefined4 *)operator*(local_30,param_3);
  puVar3 = local_90;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = local_90;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

