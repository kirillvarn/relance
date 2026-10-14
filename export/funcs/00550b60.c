
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00550b60(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_20;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if ((char)param_1[0x3b] != '\0') {
    if (*param_1 != 0) {
      iVar5 = 0;
      if (0 < param_1[3]) {
        do {
          iVar1 = *(int *)(*param_1 + iVar5 * 4);
          if (iVar1 != 0) {
            FUN_005b7e1d(iVar1);
          }
          *(undefined4 *)(*param_1 + iVar5 * 4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_1[3]);
      }
      FUN_005b7e1d(*param_1);
      *param_1 = 0;
    }
    iVar5 = ftol();
    param_1[3] = iVar5;
    piVar2 = operator_new(iVar5 << 2);
    *param_1 = (int)piVar2;
    local_20 = 0;
    if (0 < param_1[3]) {
      do {
        pvVar3 = operator_new(0x58);
        if (pvVar3 == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else {
          *(undefined1 *)((int)pvVar3 + 0x50) = 0;
          *(undefined1 *)((int)pvVar3 + 0x51) = 0;
        }
        *piVar2 = (int)pvVar3;
        random_inside_sphere((float)local_18);
        FUN_00550040(local_18,(float)param_1[0x2a] * (float)param_1[0x2b],param_1 + 0x1e,
                     param_1 + 0x21,param_1 + 0x12,param_1[0x1a]);
        puVar4 = (undefined4 *)random_inside_sphere((float)local_c);
        iVar5 = *piVar2;
        *(undefined4 *)(iVar5 + 0x44) = *puVar4;
        *(undefined4 *)(iVar5 + 0x48) = puVar4[1];
        *(undefined4 *)(iVar5 + 0x4c) = puVar4[2];
        if ((float)param_1[0x28] <= _DAT_005c7474) {
          *(undefined4 *)(*piVar2 + 0x38) = 0xbf800000;
        }
        else {
          iVar5 = rand();
          *(float *)(*piVar2 + 0x38) =
               ((float)_DAT_005e0df8 - (float)iVar5 * _DAT_005caeec * (float)_DAT_005db0b8) *
               (float)param_1[0x27];
        }
        *(undefined1 *)(*piVar2 + 0x50) = 1;
        local_20 = local_20 + 1;
        piVar2 = piVar2 + 1;
      } while (local_20 < param_1[3]);
    }
  }
  return;
}

