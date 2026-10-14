
void FUN_004bc830(void)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  CHARACTER_ID *pCVar4;
  int iVar5;
  CHARACTER_ID local_200 [512];
  
  local_200[0] = (CHARACTER_ID)0x0;
  bVar2 = SinglePlayer();
  if (!bVar2) {
    FUN_00564b10(4);
    FUN_005763b0(0xc5,0);
    return;
  }
  iVar3 = FUN_005aa680();
  if (iVar3 == 1) {
    iVar3 = 0;
    for (puVar1 = DAT_0067e970; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      iVar3 = iVar3 + 1;
    }
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        pCVar4 = (CHARACTER_ID *)FUN_005aaca0(iVar5);
        if (pCVar4[0x201] != (CHARACTER_ID)0x0) {
          CHARACTER_ID::operator=(local_200,pCVar4);
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
  }
  else {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: %s",
               "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_StoryStar.cpp",0x6d1,
               "Failed to retrieve available save games\n");
  }
  if (local_200[0] != (CHARACTER_ID)0x0) {
    FUN_005b2c70(local_200,1);
    return;
  }
  (**(code **)FDUMP_exref)
            (0x100001,"%s(%d) : *** ERROR: %s",
             "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_StoryStar.cpp",0x6db,
             "Failed to find character to reload\n");
  FUN_00488970(3);
  return;
}

