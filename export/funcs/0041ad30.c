
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0041ad30(int param_1,undefined4 param_2,int param_3)

{
  float10 fVar1;
  bool bVar2;
  undefined2 extraout_var;
  int iVar3;
  undefined4 unaff_EDI;
  float10 fVar4;
  undefined4 local_4;
  
  local_4 = 0;
  fVar4 = (float10)FUN_005b3510(1);
  fVar1 = (float10)_DAT_005c75dc;
  if (fVar4 < fVar1) {
    bVar2 = true;
    if (param_3 == 0) {
      return CONCAT22(extraout_var,
                      (ushort)(fVar4 < fVar1) << 8 | (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                      (ushort)(fVar4 == fVar1) << 0xe);
    }
    if (param_3 < 0) {
      param_3 = 0x80;
    }
    (**(code **)(**(int **)TextureLib_exref + 0x10))(*(int **)TextureLib_exref,4,&local_4);
    (**(code **)(**(int **)TextureLib_exref + 0xc))(*(int **)TextureLib_exref,4,param_3);
  }
  else {
    bVar2 = false;
  }
  iVar3 = (**(code **)(**(int **)TextureLib_exref + 0x14))
                    (*(int **)TextureLib_exref,param_2,param_1 + 4);
  if (bVar2) {
    (**(code **)(**(int **)TextureLib_exref + 0xc))(*(int **)TextureLib_exref,4,unaff_EDI);
  }
  return (uint)(-1 < iVar3);
}

