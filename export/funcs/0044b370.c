
void __thiscall FUN_0044b370(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  int *local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9c28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_005792b0(0x2b);
  if (iVar2 != 0) {
    bVar1 = RtcSlider::is_enabled("shadow_glare");
    if ((bVar1) && (*(char *)(*(int *)(param_1 + 0x40) + 0xe4) != '\0')) {
      local_18 = (int *)0x0;
      local_4 = 0;
      iVar2 = (**(code **)**(undefined4 **)Engine_exref)
                        (*(undefined4 **)Engine_exref,"1.11_IFLAppearance",&local_18);
      if (-1 < iVar2) {
        uStack_14 = param_2;
        uStack_10 = param_3;
        if (param_4 == '\0') {
          (**(code **)(*local_18 + 0x2c))
                    (local_18,*(undefined4 *)(param_1 + 0x500),&uStack_14,1,0xffffffff);
        }
        else {
          (**(code **)(*local_18 + 0x30))();
        }
      }
      local_4 = 0xffffffff;
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))(local_18);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

