
undefined1 __thiscall FUN_0057c9b0(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined1 local_5;
  
  if ((*(byte *)(param_1 + 0x6c) & 1) == 0) {
    return 0;
  }
  local_5 = 0;
  if (*(char *)(param_2 + 0x18) == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x4a0) != *(int *)(param_1 + 0x4a4)) goto LAB_0057cdda;
  uVar2 = *(undefined4 *)(param_2 + 4);
  local_5 = 1;
  switch(uVar2) {
  case 8:
    if (0 < *(int *)(param_1 + 0x49c)) {
      FUN_0057d6a0(*(int *)(param_1 + 0x49c) + -1);
      puVar5 = *(undefined4 **)(param_1 + 0x4c8);
      for (iVar7 = *(int *)(param_1 + 0x49c);
          (puVar5 != *(undefined4 **)(param_1 + 0x4cc) && (0 < iVar7)); iVar7 = iVar7 + -1) {
        puVar5 = puVar5 + 3;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x4cc);
      while (puVar4 = puVar5 + 3, puVar4 != puVar3) {
        *puVar5 = *puVar4;
        puVar6 = (undefined2 *)((int)puVar5 + 2);
        *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
        do {
          *(undefined1 *)puVar6 = *(undefined1 *)(((int)puVar4 - (int)puVar5) + (int)puVar6);
          puVar6 = (undefined2 *)((int)puVar6 + 1);
        } while ((undefined1 *)((int)puVar6 + (10 - (int)puVar4)) < (undefined1 *)0x2);
        puVar5[1] = puVar5[4];
        puVar5 = puVar4;
      }
      *(int *)(param_1 + 0x4cc) = *(int *)(param_1 + 0x4cc) + -0xc;
      FUN_0057d330();
    }
    goto LAB_0057cdda;
  case 9:
  case 0x2d:
    if (*(int *)(param_1 + 0x52c) != 0) {
      return 0;
    }
    break;
  case 0xd:
    if (*(int **)(param_1 + 0x52c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x52c) + 0x10))(uVar2);
    }
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x5c))(0xf004,param_1,0);
    }
    return 1;
  case 0x1b:
    if (*(int **)(param_1 + 0x52c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x52c) + 0x10))(uVar2);
    }
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x5c))(0xf003,param_1,0);
    }
    return 1;
  case 0x23:
    if (*(int *)(param_1 + 0x52c) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x4c8) == 0) {
      FUN_0057d6a0(0);
    }
    else {
      FUN_0057d6a0((*(int *)(param_1 + 0x4cc) - *(int *)(param_1 + 0x4c8)) / 0xc);
    }
    goto LAB_0057cdda;
  case 0x24:
    if (*(int *)(param_1 + 0x52c) != 0) {
      return 0;
    }
    FUN_0057d6a0(0);
    goto LAB_0057cdda;
  case 0x25:
    if (*(int *)(param_1 + 0x52c) != 0) {
      return 0;
    }
    FUN_0057d6a0(*(int *)(param_1 + 0x49c) + -1);
    goto LAB_0057cdda;
  case 0x27:
    if (*(int *)(param_1 + 0x52c) != 0) {
      return 0;
    }
    FUN_0057d6a0(*(int *)(param_1 + 0x49c) + 1);
    goto LAB_0057cdda;
  case 0x2e:
    puVar5 = *(undefined4 **)(param_1 + 0x4c8);
    puVar3 = *(undefined4 **)(param_1 + 0x4cc);
    iVar7 = *(int *)(param_1 + 0x49c);
    if (puVar5 != puVar3) {
      do {
        if (iVar7 < 1) break;
        puVar5 = puVar5 + 3;
        iVar7 = iVar7 + -1;
      } while (puVar5 != puVar3);
      if (puVar5 != puVar3) {
        puVar3 = *(undefined4 **)(param_1 + 0x4cc);
        while (puVar4 = puVar5 + 3, puVar4 != puVar3) {
          *puVar5 = *puVar4;
          puVar6 = (undefined2 *)((int)puVar5 + 2);
          *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
          do {
            *(undefined1 *)puVar6 = *(undefined1 *)(((int)puVar4 - (int)puVar5) + (int)puVar6);
            puVar6 = (undefined2 *)((int)puVar6 + 1);
          } while ((undefined1 *)((int)puVar6 + (10 - (int)puVar4)) < (undefined1 *)0x2);
          puVar5[1] = puVar5[4];
          puVar5 = puVar4;
        }
        *(int *)(param_1 + 0x4cc) = *(int *)(param_1 + 0x4cc) + -0xc;
        FUN_0057d6a0(*(undefined4 *)(param_1 + 0x49c));
        FUN_0057d330();
      }
    }
    goto LAB_0057cdda;
  case 0x42:
    if (((*(char *)(param_1 + 0x4f8) == '\0') && ((*(byte *)(param_1 + 0x4f4) & 1) != 0)) &&
       ((*(byte *)(param_2 + 8) & 0xc) != 0)) {
      *(byte *)(param_1 + 0x4d4) = *(byte *)(param_1 + 0x4d4) ^ 1;
      goto LAB_0057cdda;
    }
    break;
  case 0x49:
    if (((*(char *)(param_1 + 0x4f8) == '\0') && ((*(byte *)(param_1 + 0x4f4) & 2) != 0)) &&
       ((*(byte *)(param_2 + 8) & 0xc) != 0)) {
      bVar1 = *(byte *)(param_1 + 0x4d4);
      *(byte *)(param_1 + 0x4d4) = (~(bVar1 >> 1) << 1 ^ bVar1) & 2 ^ bVar1;
      goto LAB_0057cdda;
    }
    break;
  case 0x55:
    if (((*(char *)(param_1 + 0x4f8) == '\0') && ((*(byte *)(param_1 + 0x4f4) & 4) != 0)) &&
       ((*(byte *)(param_2 + 8) & 0xc) != 0)) {
      bVar1 = *(byte *)(param_1 + 0x4d4);
      *(byte *)(param_1 + 0x4d4) = (~(bVar1 >> 2) << 2 ^ bVar1) & 4 ^ bVar1;
      goto LAB_0057cdda;
    }
    break;
  case 0x6b:
    if (((*(char *)(param_1 + 0x4f8) == '\0') && ((*(byte *)(param_1 + 0x4f4) & 0xf8) != 0)) &&
       ((*(byte *)(param_2 + 8) & 0xc) != 0)) {
      bVar1 = *(byte *)(param_1 + 0x4d4);
      if ((bVar1 & 0xf8) < 0xf8) {
        *(byte *)(param_1 + 0x4d4) = (bVar1 & 0xf8) + 8 ^ bVar1 & 7;
      }
      goto LAB_0057cdda;
    }
    break;
  case 0x6d:
    if (((*(char *)(param_1 + 0x4f8) == '\0') && ((*(byte *)(param_1 + 0x4f4) & 0xf8) != 0)) &&
       ((*(byte *)(param_2 + 8) & 0xc) != 0)) {
      bVar1 = *(byte *)(param_1 + 0x4d4);
      if ((bVar1 & 0xf8) != 0) {
        *(byte *)(param_1 + 0x4d4) = (bVar1 & 0xf8) - 1 ^ ~bVar1 & 7;
      }
      goto LAB_0057cdda;
    }
  }
  local_5 = 0;
LAB_0057cdda:
  if (*(int **)(param_1 + 0x52c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x52c) + 0x10))(*(undefined4 *)(param_2 + 4));
  }
  return local_5;
}

