
void FUN_0051eda0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *local_4;
  
  local_4 = &DAT_006752f4;
  do {
    piVar1 = (int *)local_4[1];
    piVar8 = (int *)*local_4;
    iVar4 = (int)piVar1 - (int)piVar8 >> 2;
    if (iVar4 < 0x11) {
      piVar7 = piVar8;
      if (piVar8 != piVar1) {
        while (piVar7 = piVar7 + 1, piVar7 != piVar1) {
          iVar4 = *piVar7;
          piVar6 = piVar7;
          if (*(float *)(*piVar8 + 4) < *(float *)(iVar4 + 4)) {
            for (; piVar8 != piVar6; piVar6 = piVar6 + -1) {
              *piVar6 = piVar6[-1];
            }
            *piVar8 = iVar4;
          }
          else {
            while( true ) {
              if (*(float *)(iVar4 + 4) <= *(float *)(piVar6[-1] + 4)) break;
              *piVar6 = piVar6[-1];
              piVar6 = piVar6 + -1;
            }
            *piVar6 = iVar4;
          }
        }
      }
    }
    else {
      piVar7 = piVar1;
      piVar6 = piVar8;
      if (0x10 < iVar4) {
        do {
          iVar4 = *piVar6;
          iVar2 = piVar7[-1];
          iVar3 = piVar6[((int)piVar7 - (int)piVar6 >> 2) - ((int)piVar7 - (int)piVar6 >> 0x1f) >> 1
                        ];
          if (*(float *)(iVar4 + 4) <= *(float *)(iVar3 + 4)) {
            if ((*(float *)(iVar4 + 4) <= *(float *)(iVar2 + 4)) &&
               (iVar4 = iVar2, *(float *)(iVar3 + 4) <= *(float *)(iVar2 + 4))) goto LAB_0051ee9f;
          }
          else if (*(float *)(iVar2 + 4) < *(float *)(iVar3 + 4)) {
LAB_0051ee9f:
            iVar4 = iVar3;
          }
          else if (*(float *)(iVar2 + 4) < *(float *)(iVar4 + 4)) {
            iVar4 = iVar2;
          }
          piVar5 = (int *)FUN_0051fd90(piVar6,piVar7,iVar4,piVar1);
          if ((int)((int)piVar5 - (int)piVar6 & 0xfffffffcU) <
              (int)((int)piVar7 - (int)piVar5 & 0xfffffffcU)) {
            FUN_0051fc90(piVar6,piVar5,piVar1,0);
          }
          else {
            FUN_0051fc90(piVar5,piVar7,piVar1,0);
            piVar7 = piVar5;
            piVar5 = piVar6;
          }
          piVar6 = piVar5;
        } while (0x40 < (int)((int)piVar7 - (int)piVar5 & 0xfffffffcU));
      }
      if ((piVar8 != piVar8 + 0x10) && (piVar7 = piVar8 + 1, piVar7 != piVar8 + 0x10)) {
        do {
          iVar4 = *piVar7;
          piVar6 = piVar7;
          if (*(float *)(*piVar8 + 4) < *(float *)(iVar4 + 4)) {
            for (; piVar8 != piVar6; piVar6 = piVar6 + -1) {
              *piVar6 = piVar6[-1];
            }
            *piVar8 = iVar4;
          }
          else {
            while( true ) {
              if (*(float *)(iVar4 + 4) <= *(float *)(piVar6[-1] + 4)) break;
              *piVar6 = piVar6[-1];
              piVar6 = piVar6 + -1;
            }
            *piVar6 = iVar4;
          }
          piVar7 = piVar7 + 1;
        } while (piVar7 != piVar8 + 0x10);
      }
      for (piVar8 = piVar8 + 0x10; piVar8 != piVar1; piVar8 = piVar8 + 1) {
        iVar4 = *piVar8;
        piVar7 = piVar8;
        while( true ) {
          if (*(float *)(iVar4 + 4) <= *(float *)(piVar7[-1] + 4)) break;
          *piVar7 = piVar7[-1];
          piVar7 = piVar7 + -1;
        }
        *piVar7 = iVar4;
      }
    }
    local_4 = local_4 + 4;
    if (0x675343 < (int)local_4) {
      return;
    }
  } while( true );
}

