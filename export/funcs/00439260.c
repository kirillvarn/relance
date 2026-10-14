
void __fastcall FUN_00439260(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  local_c = (int *)**(int **)(param_1 + 4);
  if (local_c != *(int **)(param_1 + 4)) {
    do {
      piVar5 = *(int **)local_c[6];
      piVar4 = local_c;
      if (piVar5 != (int *)local_c[6]) {
        do {
          uVar1 = *(undefined4 *)(piVar5[2] + 4);
          iVar2 = FUN_00439610(uVar1);
          if (0 < *(int *)(iVar2 + 0xc)) {
            FUN_0043a080(uVar1);
            *(undefined4 *)(iVar2 + 0xc) = 0;
          }
          piVar5 = (int *)*piVar5;
          piVar4 = local_c;
        } while (piVar5 != (int *)local_c[6]);
      }
      piVar5 = *(int **)piVar4[2];
      local_c = piVar5;
      FUN_00432240(&local_8,&local_c);
      if (local_8 == *(int *)(param_1 + 0x24)) {
        puVar3 = (undefined4 *)FUN_00411c50(0x10000,1);
        (**(code **)FDUMP_exref)
                  (*puVar3,"%s(%d) : *** ERROR: Could not find base id %d\n",
                   "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x100,local_c);
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(local_8 + 0x10);
      }
      if (0 < *(int *)(iVar2 + 8)) {
        FUN_00439b50(piVar5);
        *(undefined4 *)(iVar2 + 8) = 0;
      }
      local_c = (int *)*piVar4;
    } while (local_c != (int *)*(int *)(param_1 + 4));
  }
  piVar5 = *(int **)(param_1 + 4);
  local_c = (int *)*piVar5;
  while (local_c != piVar5) {
    puVar3 = (undefined4 *)FUN_0053ab20(local_4,0);
    FUN_0043bf50(&local_8,*puVar3);
  }
  FUN_0043bdf0(local_4,**(undefined4 **)(param_1 + 0x10),*(undefined4 **)(param_1 + 0x10));
  FUN_0043bea0(local_4,**(undefined4 **)(param_1 + 0x24),*(undefined4 **)(param_1 + 0x24));
  FUN_00442130();
  return;
}

