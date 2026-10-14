
void __thiscall FUN_00487cb0(int param_1,int param_2)

{
  int *piVar1;
  ISystem *pIVar2;
  undefined4 uVar3;
  Ship *pSVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined2 *puVar8;
  undefined1 auStack_800 [2048];
  
  if (param_2 == -1) {
    (**(code **)(**(int **)(param_1 + 0x1778) + 0xa8))(0x1e,0x595);
    (**(code **)(**(int **)(param_1 + 0x177c) + 0xa8))(0x1e,0x595,0);
    (**(code **)(**(int **)(param_1 + 0x1780) + 0xa8))(0x1e,0x595,0);
    (**(code **)(**(int **)(param_1 + 0x1784) + 0xa8))(0x1e,0x595,0);
    if (*(int *)(param_1 + 0x1764) != 0) {
      FUN_0057bff0();
    }
    (**(code **)(**(int **)(param_1 + 0x5c0) + 0xa8))(2,0,0);
    *(undefined1 *)(param_1 + 0x5d4) = 1;
    (**(code **)(**(int **)(param_1 + 0x5c4) + 0xa8))(2,1,0);
    *(undefined1 *)(param_1 + 0x5d5) = 0;
    (**(code **)(**(int **)(param_1 + 0x5c8) + 0xa8))(2,1,0);
    *(undefined1 *)(param_1 + 0x5d6) = 0;
    (**(code **)(**(int **)(param_1 + 0x5cc) + 0xa8))(2,0,0);
    *(undefined1 *)(param_1 + 0x5d7) = 1;
    (**(code **)(**(int **)(param_1 + 0x5d0) + 0xa8))(2,0,0);
    *(undefined1 *)(param_1 + 0x5d8) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x344) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (*(int *)(param_1 + 0x348) - *(int *)(param_1 + 0x344)) / 0x24;
  }
  if ((-1 < param_2) && (param_2 < iVar6)) {
    piVar1 = (int *)(*(int *)(param_1 + 0x344) + param_2 * 0x24);
    iVar6 = *piVar1;
    pIVar2 = Universe::get_system(*(uint *)(iVar6 + 0x260));
    if (pIVar2 == (ISystem *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x1778) + 0xa8))(0x1d,&DAT_005c8ce0,0);
    }
    else {
      iVar5 = **(int **)(param_1 + 0x1778);
      uVar3 = (**(code **)(*(int *)pIVar2 + 0xc))();
      (**(code **)(iVar5 + 0xa8))(0x1e,uVar3);
    }
    swprintf((wchar_t *)&stack0xfffff7f4,0x5d0ec4,*(wchar_t **)(iVar6 + 0x234));
    (**(code **)(**(int **)(param_1 + 0x177c) + 0xa8))(0x1d,auStack_800,0);
    swprintf((wchar_t *)&stack0xfffff7f4,0x5d0ec4,*(wchar_t **)(iVar6 + 0x270));
    (**(code **)(**(int **)(param_1 + 0x1780) + 0xa8))(0x1d,auStack_800,0);
    if (*(uint *)(iVar6 + 0x230) == 0) {
      puVar8 = &DAT_005c8ce0;
      uVar3 = 0x1d;
    }
    else {
      pSVar4 = Archetype::GetShip(*(uint *)(iVar6 + 0x230));
      puVar8 = *(undefined2 **)(pSVar4 + 0x14);
      uVar3 = 0x1e;
    }
    (**(code **)(**(int **)(param_1 + 0x1784) + 0xa8))(uVar3,puVar8,0);
    if (*(int *)(param_1 + 0x1764) != 0) {
      if (*(int *)(iVar6 + 0x224) == 0) {
        pcVar7 = _C_exref;
        if (*(code **)(iVar6 + 0x218) != (code *)0x0) {
          pcVar7 = *(code **)(iVar6 + 0x218);
        }
      }
      else {
        iVar5 = FUN_004347e0(DAT_0067eca8,*(int *)(iVar6 + 0x224),&DAT_00671ce8,0x100);
        if (iVar5 == 0) {
          (**(code **)FDUMP_exref)
                    (0x100001,"%s(%d) : *** ERROR: Failed to find string resource %d\n",
                     "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_LoadSave.cpp",0x64d,
                     *(undefined4 *)(iVar6 + 0x224));
        }
        pcVar7 = (code *)&DAT_00671ce8;
      }
      FUN_0057bff0();
      FUN_0057c0e0(pcVar7,0);
    }
    iVar6 = *piVar1;
    if ((*(char *)(iVar6 + 0x200) == '\0') && (*(char *)(iVar6 + 0x201) == '\0')) {
      (**(code **)(**(int **)(param_1 + 0x5c0) + 0xa8))(2,0,0);
      *(undefined1 *)(param_1 + 0x5d4) = 1;
      (**(code **)(**(int **)(param_1 + 0x5c4) + 0xa8))(2,0,0);
      *(undefined1 *)(param_1 + 0x5d5) = 1;
      (**(code **)(**(int **)(param_1 + 0x5c8) + 0xa8))(2,0,0);
      *(undefined1 *)(param_1 + 0x5d6) = 1;
      (**(code **)(**(int **)(param_1 + 0x5cc) + 0xa8))(2,0,0);
      *(undefined1 *)(param_1 + 0x5d7) = 1;
      (**(code **)(**(int **)(param_1 + 0x5d0) + 0xa8))(2,0,0);
      *(undefined1 *)(param_1 + 0x5d8) = 1;
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x5c0) + 0xa8))(2,1,0);
    *(undefined1 *)(param_1 + 0x5d4) = 0;
    (**(code **)(**(int **)(param_1 + 0x5c4) + 0xa8))(2,0,0);
    *(undefined1 *)(param_1 + 0x5d5) = 1;
    (**(code **)(**(int **)(param_1 + 0x5c8) + 0xa8))(2,1,0);
    *(undefined1 *)(param_1 + 0x5d6) = 0;
    (**(code **)(**(int **)(param_1 + 0x5cc) + 0xa8))(2,0,0);
    *(undefined1 *)(param_1 + 0x5d7) = 1;
    (**(code **)(**(int **)(param_1 + 0x5d0) + 0xa8))(2,0,0);
    *(undefined1 *)(param_1 + 0x5d8) = 1;
    return;
  }
  (**(code **)FDUMP_exref)
            (0x100001,"%s(%d) : *** ERROR: Invalid index %d for savegame\n",
             "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_LoadSave.cpp",0x4ea);
  return;
}

