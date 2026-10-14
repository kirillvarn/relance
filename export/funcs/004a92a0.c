
/* WARNING: Removing unreachable block (ram,0x004a92d3) */
/* WARNING: Removing unreachable block (ram,0x004a92fb) */
/* WARNING: Removing unreachable block (ram,0x004a930b) */
/* WARNING: Removing unreachable block (ram,0x004a9330) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a92a0(void)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  
  piVar1 = *(int **)Pipeline_exref;
  (**(code **)(*piVar1 + 0x20))();
  iVar2 = Timing::GetMachineSpeed();
  if (iVar2 < 0x3e9) {
    fVar3 = (float10)_DAT_005c8930;
    if ((iVar2 < 800) && (fVar3 = (float10)_DAT_005d2c9c, iVar2 < 700)) {
      fVar3 = (float10)_DAT_005c94f8;
    }
  }
  else {
    fVar3 = (float10)1.0;
  }
  if ((float10)(float)piVar1 < fVar3) {
    fVar3 = (float10)(float)piVar1;
  }
  return fVar3;
}

