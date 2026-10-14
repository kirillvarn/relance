
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00577680(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  SHORT SVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  
  uVar6 = 0;
  switch(param_1[1]) {
  case 0xfffffff7:
    uVar6 = 4;
    break;
  case 0xfffffff8:
    uVar6 = 0xd;
    break;
  case 0xfffffff9:
    uVar6 = 0xc;
    break;
  case 0xfffffffa:
    uVar6 = 0xb;
    break;
  case 0xfffffffb:
    uVar6 = 10;
    break;
  case 0xfffffffc:
    uVar6 = 9;
    break;
  case 0xfffffffd:
    uVar6 = 8;
    break;
  case 0xfffffffe:
    uVar6 = 7;
    break;
  case 0xffffffff:
    uVar6 = 6;
  }
  puVar10 = &DAT_0067c278;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *param_1;
    param_1 = param_1 + 1;
    puVar10 = puVar10 + 1;
  }
  _DAT_0067c284 = 0;
  _DAT_0067c288 = 0;
  _DAT_0067c28c = 0;
  SVar3 = GetKeyState(0x10);
  uVar8 = (uint)(SVar3 < 0);
  SVar3 = GetKeyState(0x11);
  if (SVar3 < 0) {
    uVar8 = uVar8 | 4;
  }
  SVar3 = GetKeyState(0x12);
  if (SVar3 < 0) {
    uVar8 = uVar8 | 0x10;
  }
  DAT_0067c280 = uVar8;
  cVar2 = FUN_00576410(uVar6,2);
  if (cVar2 == '\0') {
    if ((DAT_0067c27c != 0) &&
       (piVar5 = (int *)*DAT_0067c21c, uVar6 = _DAT_0067c290, piVar9 = DAT_0067c21c,
       piVar5 != DAT_0067c21c)) {
      do {
        iVar4 = piVar5[2];
        piVar1 = *(int **)(iVar4 + 0x14);
        piVar7 = (int *)*piVar1;
        if (piVar7 != piVar1) {
          do {
            puVar10 = (undefined4 *)piVar7[2];
            piVar9 = (int *)puVar10[5];
            if (piVar9 != (int *)puVar10[6]) {
              do {
                if ((((*piVar9 == DAT_0067c27c) &&
                     (uVar8 = puVar10[3], (uVar8 & ((char)uVar6 == '\0') + 1) != 0)) &&
                    ((~uVar8 & -(uint)((char)((uint)uVar6 >> 8) != '\0') & 4) == 0)) &&
                   ((((uVar8 & 8) != 0 || (piVar9[1] == DAT_0067c280)) &&
                    (cVar2 = FUN_00576410(*puVar10,2), uVar6 = _DAT_0067c290, cVar2 != '\0')))) {
                  return 1;
                }
                piVar9 = piVar9 + 2;
              } while (piVar9 != (int *)puVar10[6]);
            }
            piVar7 = (int *)*piVar7;
            piVar9 = DAT_0067c21c;
          } while (piVar7 != (int *)*(int *)(iVar4 + 0x14));
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != piVar9);
    }
    return 0;
  }
  return 1;
}

