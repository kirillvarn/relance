
undefined4 * FUN_00594590(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4aa3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = operator_new(0x1c);
  local_10 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_LAB_005e534c;
    local_4 = 1;
    *(undefined1 *)(puVar3 + 1) = param_1._0_1_;
    *(undefined1 *)((int)puVar3 + 5) = param_1._0_1_;
    *(undefined1 *)(puVar3 + 4) = 0;
    pvVar4 = operator_new(0x24);
    *(undefined4 *)((int)pvVar4 + 4) = 0;
    *(undefined1 *)((int)pvVar4 + 0x20) = 1;
    *(undefined1 *)((int)pvVar4 + 0x21) = 0;
    puVar3[3] = pvVar4;
    *(undefined1 *)((int)pvVar4 + 0x21) = 1;
    *(undefined4 *)puVar3[3] = 0;
    *(undefined4 *)(puVar3[3] + 8) = 0;
    uVar1 = puVar3[3];
    pvVar4 = operator_new(0x24);
    *(undefined4 *)((int)pvVar4 + 4) = uVar1;
    *(undefined1 *)((int)pvVar4 + 0x20) = 0;
    *(undefined1 *)((int)pvVar4 + 0x21) = 0;
    puVar3[2] = pvVar4;
    *(void **)pvVar4 = pvVar4;
    *(undefined4 *)(puVar3[2] + 8) = puVar3[2];
    puVar3[5] = 0;
    *puVar3 = &PTR_FUN_005e5334;
    puVar3[6] = 0x3f800000;
  }
  piVar6 = *(int **)puVar3[2];
  local_4 = 0xffffffff;
  if (piVar6 != (int *)puVar3[2]) {
    do {
      if (*(undefined4 **)((int)piVar6 + 0x1c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)piVar6 + 0x1c))(1);
      }
      if (*(char *)(*(int *)((int)piVar6 + 8) + 0x21) == '\0') {
        iVar5 = FUN_00594e70(*(int *)((int)piVar6 + 8));
LAB_0059467f:
        piVar6 = (int *)iVar5;
      }
      else {
        iVar5 = *(int *)((int)piVar6 + 4);
        if (piVar6 == (int *)*(int *)(iVar5 + 8)) {
          do {
            piVar6 = (int *)iVar5;
            iVar5 = *(int *)((int)piVar6 + 4);
          } while (piVar6 == (int *)*(int *)(iVar5 + 8));
        }
        if (*(int *)((int)piVar6 + 8) != iVar5) goto LAB_0059467f;
      }
    } while (piVar6 != (int *)puVar3[2]);
  }
  FUN_005947f0(&local_10,*(undefined4 *)puVar3[2],(undefined4 *)puVar3[2]);
  puVar3[6] = *param_1;
  cVar2 = FUN_005916b0(param_1[1],param_3,param_2);
  if (cVar2 == '\0') {
    (**(code **)*puVar3)(1);
    ExceptionList = local_10;
    return (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return puVar3;
}

