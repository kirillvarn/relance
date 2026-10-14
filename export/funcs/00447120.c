
void __thiscall FUN_00447120(int *param_1,int *param_2)

{
  list<EquipDesc,std::allocator<EquipDesc>_> *this;
  void *pvVar1;
  int iVar2;
  void *unaff_EBX;
  int *piVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005b99bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0xc] = *param_2;
  param_1[0xd] = param_2[1];
  param_1[0xe] = param_2[2];
  param_1[0xf] = param_2[3];
  piVar3 = param_2 + 4;
  piVar4 = param_1 + 0x10;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  malloc_strcpy((char **)(param_1 + 0x19),(char *)param_2[0xd]);
  *(char *)(param_1 + 0x1a) = (char)param_2[0xe];
  (**(code **)(*param_1 + 0xc))(param_2[0xf]);
  this = operator_new(0xc);
  puStack_8 = (undefined1 *)0x0;
  if (this == (list<EquipDesc,std::allocator<EquipDesc>_> *)0x0) {
    this = (list<EquipDesc,std::allocator<EquipDesc>_> *)0x0;
  }
  else {
    *this = SUB41(this,0);
    pvVar1 = operator_new(0x28);
    *(void **)pvVar1 = pvVar1;
    *(void **)((int)pvVar1 + 4) = pvVar1;
    *(void **)(this + 4) = pvVar1;
    *(undefined4 *)(this + 8) = 0;
  }
  param_1[0x1b] = (int)this;
  puStack_8 = (undefined1 *)0xffffffff;
  std::list<EquipDesc,std::allocator<EquipDesc>_>::operator=
            (this,(list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *)param_2[0x10]);
  param_1[0x2b] = 0;
  FUN_00447210();
  param_1[6] = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 3;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  ExceptionList = unaff_EBX;
  return;
}

