
void __thiscall
FUN_005a4810(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,
            undefined4 *param_10)

{
  char cVar1;
  code cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  char *pcVar10;
  StyleNode local_30 [8];
  float local_28;
  undefined4 *local_24;
  undefined4 local_20;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1c [4];
  code *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c5104;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005a3360(param_3,param_4,param_5,param_6,param_7,param_10);
  *(undefined4 *)(param_1 + 0x38c) = param_9;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uVar9 = 0xffffffff;
    pcVar10 = param_2;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x368),
               param_2,~uVar9 - 1);
    pcVar5 = *(code **)(param_1 + 0x36c);
    if (*(code **)(param_1 + 0x36c) == (code *)0x0) {
      pcVar5 = _C_exref;
    }
    uVar4 = FUN_00564610(pcVar5);
    *(undefined4 *)(param_1 + 0x380) = uVar4;
  }
  local_1c[0] = param_10._0_1_;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_1c,false);
  uVar9 = 0xffffffff;
  pcVar10 = (char *)(param_1 + 0x18);
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_1c,(char *)(param_1 + 0x18),~uVar9 - 1);
  uVar9 = 0xffffffff;
  pcVar10 = "Text";
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (local_1c,"Text",~uVar9 - 1);
  pcVar5 = local_18;
  if (local_18 == (code *)0x0) {
    pcVar5 = _C_exref;
  }
  iVar6 = FUN_0059db20(pcVar5,"RichTextWin",param_1,0);
  *(int *)(param_1 + 0x390) = iVar6;
  if (iVar6 != 0) {
    local_20 = *(undefined4 *)(param_1 + 0xb0);
    local_24 = (undefined4 *)(*(float *)(param_1 + 0xac) + *(float *)(param_1 + 0xb8));
    local_28 = *(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0xb4);
    FUN_00579c40(&local_28);
    FUN_00579cc0(*(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0xb4),
                 *(float *)(param_1 + 0xb8) + *(float *)(param_1 + 0xb8));
    FUN_005799f0(0);
    FUN_00579880(1);
    FUN_00579a60(2);
    iVar6 = param_8;
    if (param_8 != 0) {
      local_28 = (float)CONCAT31(local_28._1_3_,param_10._0_1_);
      local_24 = (undefined4 *)FUN_0042a7e0(0,0);
      local_20 = 0;
      local_4._0_1_ = 1;
      piVar7 = (int *)StyleNode::StyleNode(local_30,0x828b);
      local_4._0_1_ = 2;
      param_10 = (undefined4 *)(**(code **)(*piVar7 + 0x1c))();
      local_4._0_1_ = 3;
      FUN_0046c800(&param_7,local_24,&param_10);
      local_4._0_1_ = 2;
      if (param_10 != (undefined4 *)0x0) {
        (**(code **)*param_10)(1);
        param_10 = (undefined4 *)0x0;
      }
      local_4._0_1_ = 1;
      StyleNode::~StyleNode(local_30);
      piVar7 = (int *)JustifyNode::JustifyNode((JustifyNode *)local_30,1);
      local_4._0_1_ = 4;
      param_10 = (undefined4 *)(**(code **)(*piVar7 + 0x1c))();
      local_4._0_1_ = 5;
      FUN_0046c800(&param_7,local_24,&param_10);
      local_4._0_1_ = 4;
      if (param_10 != (undefined4 *)0x0) {
        (**(code **)*param_10)(1);
        param_10 = (undefined4 *)0x0;
      }
      local_4._0_1_ = 1;
      JustifyNode::~JustifyNode((JustifyNode *)local_30);
      FUN_0057da40(iVar6,&local_28);
      FUN_0057b3e0(&local_28);
      puVar3 = local_24;
      param_10 = (undefined4 *)*local_24;
      local_4 = (uint)local_4._1_3_ << 8;
      while (param_10 != puVar3) {
        puVar8 = (undefined4 *)FUN_0053ab20(&param_7,0);
        FUN_0046d680(&param_6,*puVar8);
      }
      FUN_005b7e1d(local_24);
    }
  }
  if (local_18 != (code *)0x0) {
    cVar2 = local_18[-1];
    if ((cVar2 != (code)0x0) && (cVar2 != (code)0xff)) {
      local_18[-1] = (code)((char)cVar2 + -1);
      ExceptionList = local_c;
      return;
    }
    FUN_005b7e1d(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}

