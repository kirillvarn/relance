
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0057c360(int *param_1)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  double local_c;
  
  fVar3 = (float10)FUN_0042d680();
  local_c = (double)CONCAT44(local_c._4_4_,(float)fVar3);
  RenderDisplayList::update((RenderDisplayList *)(param_1 + 0x122),(float)fVar3);
  if ((char)param_1[0x11c] != '\0') {
    iVar2 = (**(code **)(*param_1 + 0xb8))();
    if (iVar2 != 0) {
      FUN_0059da70(&local_c);
      cVar1 = (**(code **)(*param_1 + 0x10))(&local_c);
      if (cVar1 != '\0') {
        FUN_004be370(iVar2);
      }
    }
  }
  FUN_005a17b0();
  local_c = (double)(float)param_1[300];
  fVar4 = (float10)FUN_0042d680();
  fVar4 = (float10)local_c - fVar4;
  fVar3 = (float10)_DAT_005c7474;
  param_1[300] = (int)(float)fVar4;
  if ((fVar4 < fVar3 != (fVar4 == fVar3)) &&
     (fVar3 = (float10)_DAT_005c7474, *(bool *)(param_1 + 299) = (char)param_1[299] == '\0',
     fVar4 < fVar3)) {
    do {
      fVar4 = fVar4 + (float10)(float)param_1[0x12d];
    } while (fVar4 < (float10)_DAT_005c7474);
    param_1[300] = (int)(float)fVar4;
    return;
  }
  return;
}

