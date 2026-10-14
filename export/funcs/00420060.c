
void __fastcall FUN_00420060(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  UINT UVar5;
  int iVar6;
  void *pvVar7;
  byte bVar8;
  char unaff_DI;
  int *piStack_40;
  undefined4 uStack_3c;
  
  UVar5 = GetDoubleClickTime();
  *(UINT *)(param_1 + 0x40) = UVar5;
  uStack_3c = 0x42008a;
  GetModuleHandleA((LPCSTR)0x0);
  uStack_3c = 0x420090;
  DirectInput8Create();
  uStack_3c = 0;
  piVar1 = (int *)(param_1 + 0x10);
  piStack_40 = piVar1;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(*(int **)(param_1 + 0xc),&DAT_005e74ec);
  (**(code **)(*(int *)*piVar1 + 0x2c))((int *)*piVar1,&DAT_005e772c);
  bVar8 = *(byte *)(param_1 + 0x14) | 0x20;
  bVar8 = (unaff_DI << 6 ^ bVar8) & 0x40 ^ bVar8;
  *(byte *)(param_1 + 0x14) = bVar8;
  if (((bVar8 & 0x40) != 0) && (*(int *)(param_1 + 0x24) != 0x80)) {
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x20))(piVar2);
    }
    piVar2 = *(int **)(param_1 + 4);
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xf3;
    piVar4 = (int *)*piVar2;
    while (piVar4 != piVar2) {
      piVar3 = (int *)*piVar4;
      *(int *)piVar4[1] = *piVar4;
      *(int *)(*piVar4 + 4) = piVar4[1];
      FUN_005b7e1d(piVar4);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      piVar4 = piVar3;
    }
    piStack_40 = (int *)0x14;
    uStack_3c = 0x10;
    iVar6 = (**(code **)(*(int *)*piVar1 + 0x18))((int *)*piVar1,1,&piStack_40);
    if (-1 < iVar6) {
      *(undefined4 *)(param_1 + 0x24) = 0x80;
      FUN_005b7e1d(*(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (*(int *)(param_1 + 0x24) != 0) {
        pvVar7 = operator_new(*(int *)(param_1 + 0x24) * 0x14);
        *(void **)(param_1 + 0x28) = pvVar7;
      }
    }
  }
  return;
}

