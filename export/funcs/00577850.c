
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00577850(undefined4 param_1,int *param_2,uint param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  SHORT SVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 local_14;
  int *local_10;
  uint local_c;
  int local_8;
  uint local_4;
  
  local_14 = 1;
  DAT_0067c291 = false;
  switch(param_1) {
  case 0x100:
  case 0x104:
    DAT_0067c27c = param_2;
    DAT_0067c291 = (param_3 & 0xf0000000) == 0x40000000;
    uVar10 = 1;
    break;
  case 0x101:
  case 0x105:
    DAT_0067c27c = param_2;
    DAT_0067c291 = (param_3 & 0xf0000000) == 0x40000000;
    DAT_0067c290 = '\0';
    uVar10 = 1;
    goto LAB_005778f1;
  case 0x102:
    DAT_0067c27c = (int *)0x0;
    uVar10 = 2;
    break;
  default:
    goto switchD_0057787d_caseD_103;
  }
  DAT_0067c290 = '\x01';
LAB_005778f1:
  _DAT_0067c284 = param_1;
  _DAT_0067c288 = param_2;
  _DAT_0067c28c = param_3;
  SVar5 = GetKeyState(0x10);
  uVar11 = (uint)(SVar5 < 0);
  SVar5 = GetKeyState(0x11);
  if (SVar5 < 0) {
    uVar11 = uVar11 | 4;
  }
  SVar5 = GetKeyState(0x12);
  if (SVar5 < 0) {
    uVar11 = uVar11 | 0x10;
  }
  DAT_0067c280 = uVar11;
  if (uVar10 != 0) {
    if (uVar10 < 3) {
      uVar12 = 1;
    }
    else {
      local_14 = 2;
      uVar12 = 2;
    }
    cVar4 = FUN_00576410(uVar10,uVar12);
    if (cVar4 != '\0') {
      return 1;
    }
    if (DAT_0067c27c != (int *)0x0) {
      bVar2 = false;
      local_4 = DAT_0067c280;
      if ((((uVar10 == 1) && (DAT_0067c27c != (int *)0x10)) && (DAT_0067c27c != (int *)0x11)) &&
         ((DAT_0067c27c != (int *)0x12 && (DAT_0067c291 == '\0')))) {
        if (DAT_0067c290 == '\0') {
          piVar6 = (int *)*DAT_0067c264;
          piVar9 = DAT_0067c264;
          bVar3 = false;
          if ((int *)*DAT_0067c264 != DAT_0067c264) {
            do {
              bVar2 = bVar3;
              piVar7 = piVar6;
              if ((int *)piVar6[2] != (int *)0x0) {
                if ((int *)piVar6[2] == DAT_0067c27c) {
                  DAT_0067c280 = piVar6[3];
                  piVar7 = (int *)*piVar6;
                  *(int **)piVar6[1] = piVar7;
                  *(int *)(*piVar6 + 4) = piVar6[1];
                  FUN_005b7e1d(piVar6);
                  DAT_0067c268 = DAT_0067c268 + -1;
                  bVar2 = true;
                  piVar9 = DAT_0067c264;
                }
                else {
                  piVar7 = (int *)*piVar6;
                }
              }
              piVar6 = piVar7;
              bVar3 = bVar2;
            } while (piVar7 != piVar9);
          }
        }
        else {
          local_c = DAT_0067c280;
          local_10 = DAT_0067c27c;
          FUN_00578580(&local_8,DAT_0067c264,&local_10);
        }
      }
      if ((DAT_0067c27c != (int *)0x0) &&
         (piVar6 = (int *)*DAT_0067c21c, piVar9 = DAT_0067c21c, piVar6 != DAT_0067c21c)) {
        do {
          iVar8 = piVar6[2];
          piVar7 = (int *)**(int **)(iVar8 + 0x14);
          local_10 = piVar6;
          local_8 = iVar8;
          if (piVar7 != *(int **)(iVar8 + 0x14)) {
            do {
              puVar1 = (undefined4 *)piVar7[2];
              piVar9 = (int *)puVar1[5];
              if (piVar9 != (int *)puVar1[6]) {
                do {
                  if ((((int *)*piVar9 == DAT_0067c27c) &&
                      (cVar4 = FUN_00576550(piVar9,&DAT_0067c278), cVar4 != '\0')) &&
                     (cVar4 = FUN_00576410(*puVar1,local_14), cVar4 != '\0')) {
                    return 1;
                  }
                  piVar9 = piVar9 + 2;
                  iVar8 = local_8;
                  piVar6 = local_10;
                } while (piVar9 != (int *)puVar1[6]);
              }
              piVar7 = (int *)*piVar7;
              piVar9 = DAT_0067c21c;
            } while (piVar7 != (int *)*(int *)(iVar8 + 0x14));
          }
          piVar6 = (int *)*piVar6;
        } while (piVar6 != piVar9);
      }
      if (bVar2) {
        DAT_0067c280 = local_4;
      }
    }
    if ((uVar10 == 1) && (param_2 == (int *)0x12)) {
      return 1;
    }
  }
switchD_0057787d_caseD_103:
  return 0;
}

