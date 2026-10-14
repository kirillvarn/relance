
void __fastcall FUN_0055e170(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  int local_1c;
  float local_c;
  float local_8;
  float local_4;
  
  if ((char)param_1[6] != '\0') {
    fVar5 = (float10)FUN_0042d680();
    fVar1 = (float)param_1[5];
    param_1[5] = (int)(float)(fVar5 + (float10)fVar1);
    if ((float10)(float)param_1[7] <= fVar5 + (float10)fVar1) {
      param_1[5] = param_1[7];
      *(undefined1 *)(param_1 + 6) = 0;
    }
    fVar1 = (float)param_1[5] / (float)param_1[7];
    if (param_1[2] == 0) {
      local_1c = 0;
    }
    else {
      local_1c = (param_1[3] - param_1[2]) / 0x1c;
    }
    if (0 < local_1c) {
      iVar3 = 0;
      do {
        pfVar4 = (float *)(param_1[2] + iVar3);
        local_4 = (pfVar4[5] - pfVar4[2]) * fVar1 + pfVar4[2];
        local_8 = (pfVar4[4] - pfVar4[1]) * fVar1 + pfVar4[1];
        local_c = (*(float *)(param_1[2] + 0xc + iVar3) - *pfVar4) * fVar1 + *pfVar4;
        cVar2 = (**(code **)(*param_1 + 4))(pfVar4[6],&local_c);
        if (cVar2 == '\0') {
          (**(code **)(*(int *)pfVar4[6] + 0xa8))(6,&local_c,0);
        }
        iVar3 = iVar3 + 0x1c;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
    if ((char)param_1[6] == '\0') {
      (**(code **)*param_1)();
    }
  }
  return;
}

