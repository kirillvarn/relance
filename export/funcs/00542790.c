
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00542790(int *param_1,float param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ID_String *this;
  undefined1 *puVar6;
  int *piVar7;
  undefined1 auStack_30 [48];
  
  cVar1 = (**(code **)(*param_1 + 0x158))();
  if (cVar1 == '\0') {
    FUN_00539c60(param_2);
    if (_DAT_005c7474 <= (float)param_1[0x2b]) {
      param_2 = (float)param_1[0x2b] - param_2;
      param_1[0x2b] = (int)param_2;
      if (param_2 < _DAT_005c7474 != (param_2 == _DAT_005c7474)) {
        param_1[0x2b] = -0x40800000;
        (**(code **)(*param_1 + 0x1c0))(auStack_30);
        iVar3 = param_1[4];
        if ((iVar3 == 0) || (((byte)*(undefined4 *)(iVar3 + 0x4c) & 7) != 7)) {
          iVar3 = 0;
        }
        iVar3 = *(int *)(*(int *)(iVar3 + 0x88) + 4);
        uVar4 = (**(code **)(*param_1 + 0x1c))();
        this = (ID_String *)(iVar3 + 0x58);
        bVar2 = ID_String::IsEmpty(this);
        if (!bVar2) {
          piVar7 = param_1 + 0x2c;
          puVar6 = &stack0xffffffcc;
          uVar5 = FUN_0040f080(this,param_1,uVar4,puVar6,piVar7);
          FUN_00503070(uVar5,param_1,uVar4,puVar6,piVar7);
        }
      }
    }
  }
  return;
}

