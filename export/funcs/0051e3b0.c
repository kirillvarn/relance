
void __thiscall FUN_0051e3b0(int param_1,char *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int *piVar2;
  Watchable *pWVar3;
  BaseWatcher *this;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  
  piVar2 = *(int **)(param_1 + 0xf8);
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x104) != -1) {
      (**(code **)(*piVar2 + 0x34))(piVar2,*(int *)(param_1 + 0x104));
      *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x108) != -1) {
      (**(code **)(**(int **)(param_1 + 0xf8) + 0x34))
                (*(int **)(param_1 + 0xf8),*(int *)(param_1 + 0x108));
      *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
    }
    (**(code **)(**(int **)(param_1 + 0xf8) + 8))(*(int **)(param_1 + 0xf8));
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined1 *)(param_1 + 0x110) = 0;
    if (*(int *)(*(int *)(param_1 + 0x100) + 8) != 0) {
      BaseWatcher::set_pointer((BaseWatcher *)(*(int *)(param_1 + 0x100) + 8),(Watchable *)0x0);
    }
  }
  this = (BaseWatcher *)(*(int *)(param_1 + 0x100) + 8);
  if (param_3 == 0) {
    pWVar3 = (Watchable *)0x0;
  }
  else {
    pWVar3 = (Watchable *)(param_3 + 8);
  }
  if (pWVar3 != *(Watchable **)this) {
    BaseWatcher::set_pointer(this,pWVar3);
  }
  if (param_2 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined1 *)(param_1 + 0x110) = 0;
  }
  else {
    uVar4 = 0xffffffff;
    pcVar7 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    if (0x103 < uVar4) {
      uVar4 = 0x103;
    }
    pcVar7 = (char *)(param_1 + 0x110);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *param_2;
      param_2 = param_2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    ((char *)(param_1 + 0x110))[uVar4] = '\0';
    *(uint *)(param_1 + 0x10c) = uVar4;
  }
  if (param_4 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)(param_1 + 0x214);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *param_4;
      param_4 = param_4 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  return;
}

