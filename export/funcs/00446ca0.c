
void __thiscall
FUN_00446ca0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  Equipment *pEVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  ID_String *this;
  undefined4 *puVar8;
  
  FUN_005574a0();
  puVar7 = (undefined4 *)&stack0x0000001c;
  puVar8 = (undefined4 *)(param_1 + 0x18);
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 8) = param_4;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  *(undefined4 *)(param_1 + 0x10) = param_6;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_7;
  pEVar4 = Archetype::GetEquipment(param_2);
  iVar6 = (**(code **)(*(int *)pEVar4 + 0x10))();
  if (iVar6 == 0xc) {
    this = (ID_String *)(*(int *)(pEVar4 + 4) + 0x9c);
    bVar2 = ID_String::IsEmpty(this);
    if (!bVar2) {
      iVar6 = FUN_0040f080(this);
      if (iVar6 == 0) {
        uVar1 = *(undefined4 *)this;
        pcVar5 = ID_String::get_string(this);
        (**(code **)FDUMP_exref)
                  (0x100001,"%s(%d) : *** ERROR: Cannot load engine flame effect ID=%u, name=%s\n",
                   "E:\\FL\\Scratch\\Source\\Client\\Gf\\ObjectShip.cpp",0x84,uVar1,pcVar5);
      }
      else {
        cVar3 = FUN_00557360(*(undefined4 *)(iVar6 + 8));
        if (cVar3 != '\0') {
          *(undefined1 *)(param_1 + 0x3c) = 0;
          *(undefined4 *)(param_1 + 0x40) = param_3;
          FUN_00446d90(0);
          return;
        }
      }
    }
  }
  FUN_00446d90(0);
  return;
}

