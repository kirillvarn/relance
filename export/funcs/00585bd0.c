
void __thiscall FUN_00585bd0(int param_1,float param_2,char param_3)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puStack_34;
  float *pfStack_30;
  float local_24 [6];
  undefined4 uStack_c;
  
  if (param_2 != -NAN) {
    *(float *)(param_1 + 0x508) = param_2;
    *(byte *)(param_1 + 0x518) =
         (param_3 << 4 ^ *(byte *)(param_1 + 0x518)) & 0x10 ^ *(byte *)(param_1 + 0x518);
    piVar3 = *(int **)Engine_exref;
    pfStack_30 = local_24;
    puStack_34 = &param_3;
    (**(code **)(*piVar3 + 0x88))(piVar3,param_2,0);
    *(undefined4 *)(param_1 + 0x50c) = uStack_c;
    *(undefined4 *)(param_1 + 0x510) = uStack_c;
    iVar2 = (**(code **)(**(int **)Engine_exref + 100))(*(int **)Engine_exref);
    if (iVar2 != -1) {
      puStack_34 = (undefined1 *)0x0;
      pfStack_30 = (float *)0x0;
      local_24[0] = 0.0;
      local_24[1] = 0.0;
      (**(code **)(**(int **)Renderer_exref + 0x10))
                (*(int **)Renderer_exref,iVar2,0x3f800000,&puStack_34);
      fVar1 = param_2 - (float)piVar3;
      if (local_24[0] < param_2 - (float)piVar3) {
        fVar1 = local_24[0];
      }
      *(float *)(param_1 + 0x50c) = fVar1;
      (**(code **)(**(int **)Engine_exref + 0x3c))(*(int **)Engine_exref,iVar2);
    }
  }
  return;
}

