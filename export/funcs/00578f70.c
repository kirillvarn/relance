
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00578f70(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  __int64 _Var5;
  
  if (*(char *)(param_1 + 0x23) == '\0') {
    _Var5 = Timing::read_ticks();
    *(__int64 *)(param_1 + 0x18) = _Var5;
    cVar4 = FUN_00424cb0();
    if (cVar4 != '\0') {
      if (*(char *)(param_1 + 0x20) != '\0') {
        cVar4 = FUN_00424f30();
      }
      if (cVar4 != '\0') {
        if (*(int **)(param_1 + 4) == (int *)0x0) {
          if (*(char *)(param_1 + 0x21) != '\0') {
            FUN_004214d0(0,0,0,0);
            FUN_004215e0(0x4100);
          }
        }
        else {
          (**(code **)(**(int **)(param_1 + 4) + 8))();
        }
        if (((*(int *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0x22) != '\0')) &&
           (DAT_0067c3e0 != '\0')) {
          FUN_0059e500();
          iVar1 = *(int *)(param_1 + 8);
          if (_DAT_005c7474 <= param_2) {
            fVar2 = *(float *)(iVar1 + 0x338);
            fVar3 = param_2 + *(float *)(iVar1 + 0x330);
            *(float *)(iVar1 + 0x330) = fVar3;
            if (fVar2 < fVar3) {
              do {
                fVar3 = fVar3 - fVar2;
              } while (fVar2 < fVar3);
              *(float *)(iVar1 + 0x330) = fVar3;
            }
            fVar2 = _DAT_005c75dc;
            if (param_2 < _DAT_005c75dc) {
              fVar2 = param_2;
            }
            *(float *)(iVar1 + 0x334) = fVar2;
          }
          else {
            *(undefined4 *)(iVar1 + 0x330) = 0;
            *(undefined4 *)(iVar1 + 0x334) = 0;
          }
          iVar1 = *(int *)(param_1 + 8);
          if (*(int *)(iVar1 + 0x380) != 0) {
            FUN_0041b2e0(*(undefined4 *)(iVar1 + 0x334));
            (**(code **)(**(int **)(iVar1 + 0x380) + 0x34))();
          }
          if (*(int **)(iVar1 + 0x33c) != (int *)0x0) {
            param_2 = DAT_00679bb0;
            (**(code **)(**(int **)(iVar1 + 0x33c) + 0xa8))(0x33,&param_2,1);
            (**(code **)(**(int **)(iVar1 + 0x33c) + 0x34))();
          }
          FUN_0059e5a0();
        }
        if (*(char *)(param_1 + 0x20) != '\0') {
          FUN_00417f10();
          FUN_00425080();
          FUN_00425140();
        }
      }
    }
  }
  return;
}

