
void __thiscall FUN_0058f810(int param_1,float param_2)

{
  undefined4 unaff_EBX;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  *(float *)(param_1 + 0x3fc) = param_2;
  if (*(int *)(param_1 + 0x588) != 0) {
    local_18 = param_2 + *(float *)(param_1 + 0x330);
    local_14 = 0;
    local_10 = 0;
    if (DAT_0067d95c == (int *)0x0) {
      DAT_0067d95c = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_0067d95c + 0x2c))(DAT_0067d95c,local_c,param_1 + 0x3c,&local_18);
    (**(code **)(**(int **)(param_1 + 0x588) + 0x7c))(unaff_EBX,local_18,local_14);
    (**(code **)(**(int **)(param_1 + 0x588) + 0x20))(param_1 + 0x3c);
  }
  return;
}

