
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0059efa0(int param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uStack_48;
  uint uStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_14;
  float fStack_c;
  uint uStack_8;
  
  if (param_3 == '\0') {
    piStack_40 = *(int **)Pipeline_exref;
    uStack_38 = 8;
    uStack_3c = 0x17;
    uStack_44 = 0x59efdb;
    (**(code **)(*piStack_40 + 0xf0))();
  }
  else {
    piStack_40 = *(int **)Pipeline_exref;
    uStack_38 = 4;
    uStack_3c = 0x17;
    uStack_44 = 0x59efc2;
    (**(code **)(*piStack_40 + 0xf0))();
  }
  uStack_44 = (uint)(param_3 == '\0');
  uStack_48 = 0xe;
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref);
  if (fStack_c == (float)_DAT_005c89b8) {
    piVar1 = *(int **)Renderer_exref;
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uStack_38 = 0x3f800000;
    uStack_48 = 0x3f800000;
    uStack_3c = 0;
    piStack_40 = (int *)0x0;
    uStack_44 = 0;
    if (DAT_0067dd10 == (int *)0x0) {
      DAT_0067dd10 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_0067dd10 + 0x10))(DAT_0067dd10,&uStack_48,&uStack_48,fStack_c);
    piVar1 = *(int **)Renderer_exref;
    puVar2 = &uStack_48;
    uStack_8 = uStack_8 | 0x30;
  }
  (**(code **)(*piVar1 + 0x1c))
            (piVar1,uStack_14,*(undefined4 *)(param_1 + 4),0x3f800000,uStack_8,puVar2,0);
  return;
}

