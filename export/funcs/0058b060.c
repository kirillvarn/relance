
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0058b060(int param_1)

{
  int *piVar1;
  wchar_t *_Str;
  short *psVar2;
  undefined4 uVar3;
  char cVar4;
  size_t sVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  
  FUN_005a17b0();
  if (*(char *)(param_1 + 0x362) != '\0') {
    iVar6 = *(int *)(*(int *)(param_1 + 0x334) + 0x10);
    if ((((iVar6 != 0) && (*(int *)(*(int *)(param_1 + 0x334) + 0x14) - iVar6 >> 3 != 0)) &&
        ((*(byte *)(param_1 + 0x6c) & 2) != 0)) && (cVar4 = FUN_0042d740(), cVar4 == '\0')) {
      piVar1 = (int *)(param_1 + 0x370);
      if ((*(short **)(param_1 + 0x370) == (short *)0x0) || (**(short **)(param_1 + 0x370) == 0)) {
        _Str = (wchar_t *)**(undefined4 **)(param_1 + 0x334);
        if (_Str == (wchar_t *)0x0) {
          psVar2 = (short *)*piVar1;
          if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
            *psVar2 = 0;
          }
        }
        else {
          sVar5 = wcslen(_Str);
          FUN_004142a0(sVar5 + 1);
          wcsncpy((wchar_t *)*piVar1,_Str,sVar5);
          *(undefined2 *)(*piVar1 + sVar5 * 2) = 0;
        }
      }
      if (((short *)*piVar1 != (short *)0x0) && (*(short *)*piVar1 != 0)) {
        if ((*(float *)(param_1 + 0x368) == _DAT_005c7474) &&
           (FUN_00564650(0xb), *(char *)(param_1 + 0x389) == '\0')) {
          *(undefined1 *)(param_1 + 0x389) = 1;
          DAT_0067d8c8 = DAT_0067d8c8 + 1;
        }
        fVar7 = (float10)FUN_0042d680();
        *(float *)(param_1 + 0x368) = (float)(fVar7 + (float10)*(float *)(param_1 + 0x368));
        if ((wchar_t *)*piVar1 == (wchar_t *)0x0) {
          sVar5 = 0;
        }
        else {
          sVar5 = wcslen((wchar_t *)*piVar1);
        }
        if (*(float *)(param_1 + 0x36c) < *(float *)(param_1 + 0x368)) {
          do {
            iVar6 = *(int *)(param_1 + 0x364) + 1;
            *(float *)(param_1 + 0x368) = *(float *)(param_1 + 0x368) - *(float *)(param_1 + 0x36c);
            *(int *)(param_1 + 0x364) = iVar6;
            if (((int)sVar5 <= iVar6) &&
               (*(undefined1 *)(param_1 + 0x362) = 0, *(char *)(param_1 + 0x389) != '\0')) {
              *(undefined1 *)(param_1 + 0x389) = 0;
              DAT_0067d8c8 = DAT_0067d8c8 + -1;
              if (DAT_0067d8c8 < 1) {
                FUN_005646e0(0xb);
              }
              iVar6 = *piVar1;
              FUN_004145d0(*(undefined4 *)(param_1 + 0x32c),
                           *(float *)(param_1 + 0xb0) + *(float *)(param_1 + 0x68));
              FUN_00415860(iVar6);
            }
          } while (*(float *)(param_1 + 0x36c) < *(float *)(param_1 + 0x368));
        }
      }
      goto LAB_0058b2cb;
    }
  }
  if (*(char *)(param_1 + 0x389) != '\0') {
    if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x334) + 0x10);
      if ((iVar6 != 0) && (*(int *)(*(int *)(param_1 + 0x334) + 0x14) - iVar6 >> 3 != 0))
      goto LAB_0058b2cb;
    }
    *(undefined1 *)(param_1 + 0x389) = 0;
    DAT_0067d8c8 = DAT_0067d8c8 + -1;
    if (DAT_0067d8c8 < 1) {
      FUN_005646e0(0xb);
    }
    uVar3 = *(undefined4 *)(param_1 + 0x370);
    FUN_004145d0(*(undefined4 *)(param_1 + 0x32c),
                 *(float *)(param_1 + 0xb0) + *(float *)(param_1 + 0x68));
    FUN_00415860(uVar3);
  }
LAB_0058b2cb:
  if (*(char *)(param_1 + 0x379) != '\0') {
    fVar8 = (float10)FUN_0042d680();
    fVar8 = fVar8 + (float10)*(float *)(param_1 + 0x37c);
    fVar7 = (float10)_DAT_005c75dc;
    *(float *)(param_1 + 0x37c) = (float)fVar8;
    if (fVar7 < fVar8) {
      cVar4 = *(char *)(param_1 + 0x37a);
      do {
        fVar8 = fVar8 - (float10)_DAT_005c75dc;
        cVar4 = cVar4 == '\0';
      } while ((float10)_DAT_005c75dc < fVar8);
      *(float *)(param_1 + 0x37c) = (float)fVar8;
      *(char *)(param_1 + 0x37a) = cVar4;
    }
    if (*(char *)(param_1 + 0x37a) != '\0') {
      *(undefined4 *)(param_1 + 0x35e) = *(undefined4 *)(param_1 + 0x381);
      return;
    }
    *(undefined4 *)(param_1 + 0x35e) = *(undefined4 *)(param_1 + 0x385);
  }
  return;
}

