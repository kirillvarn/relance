
uint __thiscall FUN_00529e10(Fuse *param_1,INI_Reader *param_2)

{
  Fuse *pFVar1;
  bool bVar2;
  char cVar3;
  char extraout_AL;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  FuseAction *this;
  FuseAction *pFVar4;
  FuseAction *extraout_EAX;
  FuseAction *extraout_EAX_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  uint uVar5;
  code *pcVar7;
  undefined1 local_25;
  Fuse *local_24;
  FuseAction *local_20;
  int local_1c;
  FuseAction *local_18;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined3 uVar6;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c034a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_24 = param_1;
  bVar2 = Fuse::ReadFuseValues(param_1,param_2);
  pFVar4 = (FuseAction *)CONCAT31(extraout_var,bVar2);
  if (bVar2) {
    bVar2 = INI_Reader::read_header(param_2);
    pcVar7 = is_header_exref;
    uVar6 = extraout_var_00;
    if (bVar2) {
      do {
        cVar3 = (*pcVar7)("start_explosion");
        if (cVar3 == '\0') {
          cVar3 = (*pcVar7)("start_cam_particles");
          if (cVar3 != '\0') {
            this = operator_new(0x30);
            local_4 = 2;
            local_20 = this;
            if (this == (FuseAction *)0x0) goto LAB_0052a05a;
            FuseAction::FuseAction(this);
            *(undefined4 *)(this + 0x24) = 0;
            *(undefined ***)this = &PTR_FUN_005dd2e4;
            local_4 = CONCAT31(local_4._1_3_,3);
            ID_String::clear((ID_String *)(this + 0x28));
            *(undefined4 *)(this + 0x2c) = 0;
            *(undefined ***)this = &PTR_FUN_005dd260;
            pFVar4 = extraout_EAX;
            goto LAB_0052a05c;
          }
          cVar3 = (*pcVar7)("start_effect");
          if (cVar3 != '\0') {
            this = operator_new(0x54);
            local_4 = 4;
            local_20 = this;
            if (this == (FuseAction *)0x0) goto LAB_0052a05a;
            FuseAction::FuseAction(this);
            *(undefined4 *)(this + 0x24) = 0;
            *(undefined ***)this = &PTR_FUN_005dd2e4;
            local_4._0_1_ = 5;
            ID_String::clear((ID_String *)(this + 0x28));
            this[0x2c] = (FuseAction)0x0;
            FUN_005a6900(&local_25);
            local_4 = CONCAT31(local_4._1_3_,6);
            *(undefined4 *)(this + 0x40) = 0;
            pFVar4 = (FuseAction *)FUN_005154a0(0,0,0,0);
            *(undefined ***)this = &PTR_FUN_005dd218;
            goto LAB_0052a05c;
          }
          cVar3 = (*pcVar7)("impulse");
          if (cVar3 != '\0') {
            this = operator_new(0x40);
            local_4 = 7;
            local_20 = this;
            if (this == (FuseAction *)0x0) goto LAB_0052a05a;
            FuseAction::FuseAction(this);
            *(undefined4 *)(this + 0x24) = 0;
            *(undefined ***)this = &PTR_FUN_005dd2e4;
            local_4 = CONCAT31(local_4._1_3_,8);
            CacheString::clear((CacheString *)(this + 0x28));
            *(undefined4 *)(this + 0x2c) = 0;
            *(undefined4 *)(this + 0x30) = 0;
            pFVar4 = (FuseAction *)FUN_00422b80(0,0,0);
            *(undefined ***)this = &PTR_FUN_005dd1d8;
            goto LAB_0052a05c;
          }
          cVar3 = (*pcVar7)("ignite_fuse");
          if (cVar3 != '\0') {
            this = operator_new(0x30);
            local_4 = 9;
            local_20 = this;
            if (this == (FuseAction *)0x0) goto LAB_0052a05a;
            FuseAction::FuseAction(this);
            *(undefined4 *)(this + 0x24) = 0;
            *(undefined ***)this = &PTR_FUN_005dd2e4;
            local_4 = CONCAT31(local_4._1_3_,10);
            ID_String::clear((ID_String *)(this + 0x28));
            this[0x2c] = (FuseAction)0x0;
            *(undefined ***)this = &PTR_FUN_005dd194;
            pFVar4 = extraout_EAX_00;
            goto LAB_0052a05c;
          }
          (*pcVar7)(&DAT_005dd188);
          uVar6 = extraout_var_01;
          if (extraout_AL != '\0') break;
        }
        else {
          this = operator_new(0x40);
          local_4 = 0;
          local_20 = this;
          if (this == (FuseAction *)0x0) {
LAB_0052a05a:
            this = (FuseAction *)0x0;
            pFVar4 = local_20;
          }
          else {
            FuseAction::FuseAction(this);
            *(undefined4 *)(this + 0x24) = 0;
            *(undefined ***)this = &PTR_FUN_005dd2e4;
            local_4 = CONCAT31(local_4._1_3_,1);
            ID_String::clear((ID_String *)(this + 0x28));
            CacheString::clear((CacheString *)(this + 0x2c));
            pFVar4 = (FuseAction *)FUN_00422b80(0,0,0);
            *(undefined4 *)(this + 0x3c) = 0;
            *(undefined ***)this = &PTR_FUN_005dd2ac;
          }
LAB_0052a05c:
          local_4 = 0xffffffff;
          if ((this == (FuseAction *)0x0) ||
             (pFVar4 = (FuseAction *)(**(code **)(*(int *)this + 8))(param_2), pFVar1 = local_24,
             (char)pFVar4 == '\0')) goto LAB_0052a0d5;
          local_1c = *(int *)(this + 4);
          local_18 = this;
          FUN_0052aae0(local_14,&local_1c);
          cVar3 = (**(code **)(*(int *)this + 0x24))();
          pcVar7 = is_header_exref;
          if (cVar3 != '\0') {
            pFVar1[0x24] = (Fuse)0x1;
          }
        }
        bVar2 = INI_Reader::read_header(param_2);
        uVar6 = extraout_var_02;
      } while (bVar2);
    }
    uVar5 = CONCAT31(uVar6,1);
  }
  else {
LAB_0052a0d5:
    uVar5 = (uint)pFVar4 & 0xffffff00;
  }
  ExceptionList = local_c;
  return uVar5;
}

