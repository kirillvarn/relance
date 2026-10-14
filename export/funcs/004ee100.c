
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004ee100(void)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float10 fVar7;
  float fStack_38;
  float local_34;
  float afStack_30 [3];
  float fStack_24;
  float fStack_20;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [16];
  
  piVar6 = (int *)0x0;
  local_34 = 1e+20;
  afStack_30[1] = 2.8026e-45;
  piVar3 = (int *)FUN_00540fc0(afStack_30 + 1);
  if (piVar3 != (int *)0x0) {
    do {
      iVar4 = (**(code **)(*piVar3 + 0x150))();
      if (((iVar4 != 0) && (((byte)*(undefined4 *)(iVar4 + 0x4c) & 3) == 3)) &&
         (*(char *)(iVar4 + 0xe0) < '\0')) {
        (**(code **)(*piVar3 + 0x14))(auStack_18);
        piVar5 = (int *)(**(code **)(*piVar3 + 0x150))();
        fVar7 = (float10)(**(code **)(*piVar5 + 100))(auStack_10);
        afStack_30[2] = (float)fVar7;
        cVar2 = FUN_004ecfd0(auStack_18,afStack_30[2],&fStack_24,&fStack_38,afStack_30);
        if (cVar2 != '\0') {
          fStack_38 = fStack_38 + fStack_38;
          fVar1 = (float)DAT_00616840;
          if (((fStack_24 - fStack_38 <= fVar1) &&
              (fVar1 < fStack_24 + fStack_38 != (fVar1 == fStack_24 + fStack_38))) &&
             ((fVar1 = (float)DAT_00616844, fStack_20 - fStack_38 <= fVar1 &&
              ((fVar1 < fStack_20 + fStack_38 != (fVar1 == fStack_20 + fStack_38) &&
               (afStack_30[0] < local_34)))))) {
            local_34 = afStack_30[0];
            piVar6 = piVar3;
          }
        }
      }
      piVar3 = (int *)piVar3[5];
    } while (piVar3 != (int *)0x0);
    if (local_34 < _DAT_005d9610) {
      return piVar6;
    }
  }
  return (int *)0x0;
}

