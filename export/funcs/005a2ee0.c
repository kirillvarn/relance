
void __fastcall FUN_005a2ee0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int *unaff_EBP;
  undefined *puVar5;
  int *piVar6;
  undefined1 *puStack_c0;
  undefined4 *puStack_bc;
  int *piStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  int *piStack_ac;
  int *piStack_a8;
  undefined4 *puStack_a4;
  int *piStack_a0;
  undefined4 uStack_90;
  undefined1 auStack_80 [4];
  int local_7c [11];
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_34;
  undefined4 uStack_1c;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c503b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 9) = 1;
  if (param_1[7] != 0) {
    if (*(char *)((int)param_1 + 0x25) == '\0') {
      FUN_00422950();
      piStack_a0 = (int *)0x5a2f28;
      FUN_00421ed0();
      piStack_a0 = (int *)0xb71;
      puStack_a4 = (undefined4 *)0x5a2f32;
      FUN_00421ed0();
      puStack_a4 = (undefined4 *)0xb44;
      piStack_a8 = (int *)0x5a2f3c;
      FUN_00421ed0();
      piStack_a8 = (int *)0xde1;
      piStack_ac = (int *)0x5a2f46;
      FUN_00421ed0();
      piStack_ac = (int *)0xbe2;
      uStack_b0 = 0x5a2f50;
      FUN_00421dd0();
      uStack_b0 = 6;
      piStack_b4 = (int *)0x5;
      piStack_b8 = (int *)0x5a2f59;
      FUN_004220c0();
    }
    else {
      FUN_00421ed0();
      piStack_a0 = (int *)0x5a2f75;
      FUN_00421ed0();
      piStack_a0 = (int *)0xb44;
      puStack_a4 = (undefined4 *)0x5a2f7f;
      FUN_00421ed0();
      puStack_a4 = (undefined4 *)0xb71;
      piStack_a8 = (int *)0x5a2f89;
      FUN_00421ed0();
      piStack_a8 = (int *)0xb60;
      piStack_ac = (int *)0x5a2f93;
      FUN_00421ed0();
      piStack_a0 = *(int **)Pipeline_exref;
      puStack_a4 = (undefined4 *)0x5a2faa;
      (**(code **)(*piStack_a0 + 0xf0))();
      puStack_a4 = &DAT_0067dbf8;
      piStack_a8 = (int *)0x5a2fb4;
      FUN_004227d0();
      piStack_ac = *(int **)Pipeline_exref;
      puStack_a4 = (undefined4 *)0xffffffff;
      piStack_a8 = (int *)0x8b;
      uStack_b0 = 0x5a2fcf;
      (**(code **)(*piStack_ac + 0xf0))();
      FUN_00421dd0();
      piStack_a0 = (int *)0x5;
      puStack_a4 = (undefined4 *)0x5a2fe2;
      FUN_004220c0();
    }
    uVar1 = param_1[7];
    piVar6 = local_7c;
    for (iVar4 = 0x1c; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    local_7c[3] = 0x10;
    local_48 = 0x10;
    local_7c[1] = param_1[3];
    local_50 = local_7c[1] + 0xc;
    local_7c[0] = 2;
    local_7c[2] = 0xc;
    local_4c = 4;
    local_14 = 0x42;
    piVar6 = *(int **)Pipeline_exref;
    puVar5 = &DAT_005e6014;
    puStack_a4 = (undefined4 *)0x8d;
    local_10 = uVar1;
    do {
      piStack_a0 = *(int **)(puVar5 + 4);
      piStack_ac = (int *)0x5a305e;
      piStack_a8 = piVar6;
      (**(code **)(*piVar6 + 0xf0))();
      puStack_a4 = *(undefined4 **)(puVar5 + 8);
      puVar5 = puVar5 + 8;
    } while (puStack_a4 != (undefined4 *)0x0);
    piStack_a8 = *(int **)Pipeline_exref;
    piStack_a0 = (int *)auStack_80;
    puStack_a4 = (undefined4 *)0x89;
    piStack_ac = (int *)0x5a308e;
    (**(code **)(*piStack_a8 + 0xf4))();
    piStack_ac = (int *)0x0;
    uStack_b0 = uStack_90;
    piStack_b8 = (int *)0x5a30a2;
    piStack_b4 = unaff_EBP;
    (**(code **)(*unaff_EBP + 0xf0))();
    piVar6 = *(int **)Pipeline_exref;
    uStack_1c = 0;
    puVar5 = &DAT_005e603c;
    puStack_bc = (undefined4 *)0x1;
    do {
      piStack_b8 = *(int **)(puVar5 + 4);
      puStack_c0 = (undefined1 *)0x0;
      (**(code **)(*piVar6 + 0xf8))(piVar6);
      puStack_bc = *(undefined4 **)(puVar5 + 8);
      puVar5 = puVar5 + 8;
    } while (puStack_bc != (undefined4 *)0x0);
    piVar6 = *(int **)Pipeline_exref;
    puVar5 = &DAT_005e603c;
    puVar2 = (undefined4 *)0x1;
    do {
      piStack_b8 = *(int **)(puVar5 + 4);
      puStack_c0 = (undefined1 *)0x1;
      puStack_bc = puVar2;
      (**(code **)(*piVar6 + 0xf8))(piVar6);
      puVar2 = *(undefined4 **)(puVar5 + 8);
      puVar5 = puVar5 + 8;
    } while (puVar2 != (undefined4 *)0x0);
    piStack_b8 = (int *)param_1[7];
    puStack_bc = (undefined4 *)0x0;
    puStack_c0 = &stack0xffffff6c;
    puStack_a4 = puVar2;
    puVar3 = (undefined1 *)
             (**(code **)(*(int *)*param_1 + 0x18))((int *)*param_1,0xffffffff,&puStack_a4);
    if (puVar3 == (undefined1 *)0x0) {
      puStack_c0 = puVar3;
      iVar4 = (**(code **)(*(int *)param_1[1] + 0x18))
                        ((int *)param_1[1],0xffffffff,&puStack_c0,param_1[4],param_1[8]);
      if (iVar4 == 0) {
        iVar4 = (**(code **)(*(int *)*param_1 + 0x28))((int *)*param_1,0xffffffff);
        if (iVar4 == 0) {
          iVar4 = (**(code **)(*(int *)param_1[1] + 0x24))
                            ((int *)param_1[1],0xffffffff,puStack_bc,0,0);
          if (iVar4 == 0) {
            (**(code **)(*(int *)param_1[2] + 0xc))
                      ((int *)param_1[2],4,0,param_1[7],puStack_c0,param_1[8]);
          }
        }
      }
    }
    piVar6 = *(int **)Pipeline_exref;
    puVar5 = &DAT_005e602c;
    iVar4 = 0x8d;
    do {
      (**(code **)(*piVar6 + 0xf0))(piVar6,iVar4,*(undefined4 *)(puVar5 + 4));
      iVar4 = *(int *)(puVar5 + 8);
      puVar5 = puVar5 + 8;
    } while (iVar4 != 0);
    if (*(char *)((int)param_1 + 0x25) != '\0') {
      FUN_00422950(&DAT_0067dbf8);
    }
    uStack_34 = 0xffffffff;
    (**(code **)(*piStack_b8 + 0xf0))(piStack_b8,piStack_b4,uStack_b0);
  }
  ExceptionList = local_c;
  return;
}

