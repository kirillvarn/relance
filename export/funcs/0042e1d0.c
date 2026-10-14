
bool __fastcall FUN_0042e1d0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  int local_4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  bVar5 = false;
  if (puVar3 != *(undefined4 **)(param_1 + 0x14)) {
    puVar4 = puVar3 + 1;
    do {
      local_4 = FUN_0041aa50(*puVar3,1,0xffffffff);
      bVar5 = local_4 != 0;
      if (bVar5) {
        FUN_00537260(*(undefined4 *)(param_1 + 0x30),1,&local_4);
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      else {
        (**(code **)FDUMP_exref)
                  (0x100001,
                   "%s(%d) : *** ERROR: [VisEffect] %s: Failed to load texture library: %s.  Removing from txm list."
                   ,"E:\\FL\\Scratch\\Source\\Client\\cmn\\VisEffectArch.cpp",0x166,&DAT_005caa24,
                   *puVar3);
        puVar1 = *(undefined4 **)(param_1 + 0x14);
        if (puVar4 != puVar1) {
          puVar2 = puVar4;
          do {
            *(undefined4 *)(((int)puVar3 - (int)puVar4) + (int)puVar2) = *puVar2;
            puVar2 = puVar2 + 1;
          } while (puVar2 != puVar1);
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -4;
      }
    } while (puVar3 != *(undefined4 **)(param_1 + 0x14));
  }
  return bVar5;
}

