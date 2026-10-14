
void __fastcall FUN_00407320(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  
  if ((*(byte *)(param_1 + 0x50) & 2) == 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x34);
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
    if (puVar2 != *(undefined4 **)(param_1 + 0x38)) {
      do {
        FUN_0041afd0(*puVar2);
        puVar2 = puVar2 + 1;
      } while (puVar2 != *(undefined4 **)(param_1 + 0x38));
    }
  }
  if ((*(byte *)(param_1 + 0x50) & 4) == 0) {
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 4;
    bVar1 = Archetype::Root::is_loaded(*(Root **)(param_1 + 0x14));
    if (bVar1) {
      FUN_00425330(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x40));
    }
  }
  return;
}

