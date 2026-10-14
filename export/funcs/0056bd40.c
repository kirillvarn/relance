
void FUN_0056bd40(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  Ship *pSVar5;
  int iVar6;
  ISystem *pIVar7;
  int extraout_ECX;
  wchar_t in_stack_00000150;
  void *in_stack_00002238;
  int in_stack_00002248;
  undefined2 *puStack_c;
  wchar_t *_Str;
  
  puStack_c = ExceptionList;
  ExceptionList = &puStack_c;
  FUN_005b7e90();
  if (in_stack_00002248 == 0) {
    param_1 = (int *)FUN_0042a7e0();
    param_2 = 0;
    wcslen(L"-");
    FUN_0057e2c0();
    FUN_0057b370();
    StyleNode::StyleNode((StyleNode *)&stack0xfffffff8,0x5724);
    FUN_0057b470();
    StyleNode::~StyleNode((StyleNode *)&stack0xfffffff8);
    FUN_0057b3e0();
    FUN_0057b370();
    StyleNode::StyleNode((StyleNode *)&stack0xfffffff8,0x5724);
    FUN_0057b470();
    StyleNode::~StyleNode((StyleNode *)&stack0xfffffff8);
    FUN_0057b3e0();
    FUN_0057b370();
    StyleNode::StyleNode((StyleNode *)&stack0xfffffff8,0x5724);
    FUN_0057b470();
    StyleNode::~StyleNode((StyleNode *)&stack0xfffffff8);
    FUN_0057b3e0();
    FUN_0057b370();
    StyleNode::StyleNode((StyleNode *)&stack0x00000030,0x5724);
    FUN_0057b470();
    StyleNode::~StyleNode((StyleNode *)&stack0x00000030);
    FUN_0057b3e0();
    piVar4 = param_1;
    *(byte *)(*(int *)(extraout_ECX + 200) + 0x6c) =
         *(byte *)(*(int *)(extraout_ECX + 200) + 0x6c) & 0xfe;
    pbVar1 = (byte *)(*(int *)(extraout_ECX + 0xcc) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined1 *)(*(int *)(extraout_ECX + 200) + 0x498) = 0;
    *(undefined1 *)(*(int *)(extraout_ECX + 0xcc) + 0x498) = 0;
    piVar3 = (int *)*param_1;
    while (piVar3 != piVar4) {
      piVar2 = (int *)*piVar3;
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      FUN_0045eeb0();
      FUN_005b7e1d();
      param_2 = param_2 + -1;
      piVar3 = piVar2;
    }
  }
  else {
    swprintf((wchar_t *)&stack0x00000038,0x5d0ec4,*(wchar_t **)(in_stack_00002248 + 0x234));
    FUN_0057b370();
    StyleNode::StyleNode((StyleNode *)&param_1,0x5724);
    FUN_0057b470();
    StyleNode::~StyleNode((StyleNode *)&param_1);
    FUN_0046ba60();
    wcslen((wchar_t *)&stack0x00000044);
    FUN_0057db50();
    FUN_0057b3e0();
    swprintf((wchar_t *)&stack0x00000044,0x5d0ec4,*(wchar_t **)(in_stack_00002248 + 0x270));
    FUN_0057b370();
    puStack_c = (undefined2 *)0x56be52;
    StyleNode::StyleNode((StyleNode *)&param_4,0x5724);
    puStack_c = (undefined2 *)0x56be66;
    FUN_0057b470();
    StyleNode::~StyleNode((StyleNode *)&param_4);
    puStack_c = (undefined2 *)0x56be82;
    FUN_0046ba60();
    puStack_c = (undefined2 *)&stack0x0000003c;
    wcslen((wchar_t *)&stack0x00000050);
    FUN_0057db50();
    puStack_c = (undefined2 *)0x56bebd;
    FUN_0057b3e0();
    FUN_0057b370();
    if (*(uint *)(in_stack_00002248 + 0x230) != 0) {
      puStack_c = (undefined2 *)0x56bedd;
      pSVar5 = Archetype::GetShip(*(uint *)(in_stack_00002248 + 0x230));
      if (pSVar5 != (Ship *)0x0) {
        puStack_c = &stack0x00000150;
        iVar6 = FUN_004347e0();
        if (iVar6 == 0) {
          in_stack_00000150 = L'\0';
        }
        puStack_c = (undefined2 *)0x56bf1f;
        StyleNode::StyleNode((StyleNode *)&param_4,0x5724);
        puStack_c = (undefined2 *)0x56bf33;
        FUN_0057b470();
        StyleNode::~StyleNode((StyleNode *)&param_4);
        puStack_c = (undefined2 *)0x56bf4f;
        FUN_0046ba60();
        puStack_c = (undefined2 *)&stack0x00000018;
        wcslen(&stack0x00000150);
        FUN_0057db50();
        puStack_c = (undefined2 *)0x56bf90;
        FUN_0057b3e0();
        FUN_0046ba90();
      }
    }
    puStack_c = (undefined2 *)0x56bfae;
    pIVar7 = Universe::get_system(*(uint *)(in_stack_00002248 + 0x260));
    FUN_0057b370();
    if (pIVar7 != (ISystem *)0x0) {
      param_4 = 0;
      param_5 = 0;
      _Str = L"ᖋ\xeca8gh\x10贀⒌ɘ";
      (**(code **)(*(int *)pIVar7 + 0xc))();
      FUN_004347e0();
      FUN_00413df0();
      StyleNode::StyleNode((StyleNode *)&stack0x0000001c,0x5724);
      FUN_0057b470();
      StyleNode::~StyleNode((StyleNode *)&stack0x0000001c);
      param_1 = (int *)FUN_0042a7e0();
      param_2 = 0;
      wcslen(_Str);
      FUN_0057db50();
      FUN_0057b3e0();
      FUN_0046ba90();
      if (_Str != (wchar_t *)0x0) {
        free(_Str);
      }
    }
    pbVar1 = (byte *)(*(int *)(extraout_ECX + 200) + 0x6c);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)(*(int *)(extraout_ECX + 0xcc) + 0x6c);
    *pbVar1 = *pbVar1 | 1;
    *(undefined1 *)(*(int *)(extraout_ECX + 200) + 0x498) = 1;
    *(undefined1 *)(*(int *)(extraout_ECX + 0xcc) + 0x498) = 1;
    FUN_0046ba90();
    FUN_0053e430();
    FUN_0046c860();
  }
  FUN_005b7e1d();
  ExceptionList = in_stack_00002238;
  return;
}

