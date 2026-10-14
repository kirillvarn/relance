
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005426e0(int *param_1)

{
  ID_String *this;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined1 local_30 [48];
  
  FUN_00539740();
  iVar2 = param_1[4];
  if ((iVar2 == 0) || (((byte)*(undefined4 *)(iVar2 + 0x4c) & 7) != 7)) {
    iVar2 = 0;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x88) + 4);
  this = (ID_String *)(iVar2 + 0x58);
  bVar1 = ID_String::IsEmpty(this);
  if (!bVar1) {
    if (*(float *)(iVar2 + 0x54) == _DAT_005c7474) {
      (**(code **)(*param_1 + 0x1c0))(local_30);
      uVar3 = (**(code **)(*param_1 + 0x1c))();
      bVar1 = ID_String::IsEmpty(this);
      if (!bVar1) {
        piVar6 = param_1 + 0x2c;
        puVar5 = &stack0xffffffcc;
        uVar4 = FUN_0040f080(this,param_1,uVar3,puVar5,piVar6);
        FUN_00503070(uVar4,param_1,uVar3,puVar5,piVar6);
        return;
      }
    }
    else {
      param_1[0x2b] = *(int *)(iVar2 + 0x54);
    }
  }
  return;
}

