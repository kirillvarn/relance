
void __fastcall FUN_00491100(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  ISystem *pIVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  
  if ((char)param_1[0x102] != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x102) = 1;
  FUN_00490cd0();
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  if (param_1[500] == 0) {
    FUN_004915b0();
  }
  else {
    if (DAT_006720c4 == 0) {
      uVar4 = FUN_004c4830();
      pIVar3 = Universe::get_system(uVar4);
      param_1[0x1f8] = (int)pIVar3;
    }
    else {
      pIVar3 = Universe::get_system(DAT_006720c4);
      param_1[0x1f8] = (int)pIVar3;
      DAT_006720c4 = 0;
    }
    *(undefined1 *)((int)param_1 + 0x87d) = 0;
    *(undefined1 *)(param_1 + 0x21f) = 1;
    if ((undefined4 *)param_1[0x1f8] == (undefined4 *)0x0) {
LAB_0049121c:
      (**(code **)(*(int *)param_1[0x232] + 0xa8))(0x1e,0x62a,0);
    }
    else {
      iVar5 = (*(code *)**(undefined4 **)param_1[0x1f8])();
      piVar8 = param_1 + 0x3ca;
      iVar7 = 0;
      do {
        if (*piVar8 == iVar5) goto LAB_0049121c;
        iVar7 = iVar7 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar7 < 4);
      if ((int *)param_1[0x1f8] != (int *)0x0) {
        uVar6 = (**(code **)(*(int *)param_1[0x1f8] + 0xc))(&DAT_0066fc60,DAT_006119f8);
        FUN_004347e0(DAT_0067eca8,uVar6);
        (*(code *)PTR_FUN_00616420)(&DAT_0066fc60);
        (**(code **)(*(int *)param_1[0x232] + 0xa8))(0x1d,&DAT_0066fc60,0);
      }
    }
  }
  pfVar1 = (float *)(param_1 + 0x103);
  param_1[0x10f] = (int)*pfVar1;
  param_1[0x110] = param_1[0x104];
  param_1[0x111] = param_1[0x105];
  pfVar2 = (float *)(param_1 + 0x112);
  *pfVar2 = *pfVar1;
  param_1[0x113] = param_1[0x104];
  param_1[0x114] = param_1[0x105];
  *pfVar2 = *pfVar2 + (float)param_1[0x106];
  pfVar2 = (float *)(param_1 + 0x115);
  *pfVar2 = *pfVar1;
  param_1[0x116] = param_1[0x104];
  param_1[0x117] = param_1[0x105];
  *pfVar2 = (float)param_1[0x106] + *pfVar2;
  param_1[0x116] = (int)((float)param_1[0x116] + (float)param_1[0x107]);
  param_1[0x117] = (int)((float)param_1[0x117] + (float)param_1[0x108]);
  param_1[0x118] = (int)*pfVar1;
  param_1[0x119] = param_1[0x104];
  param_1[0x11a] = param_1[0x105];
  param_1[0x119] = (int)((float)param_1[0x107] + (float)param_1[0x119]);
  (**(code **)(*(int *)param_1[0x1fb] + 0xa8))(1,1,0);
  (**(code **)(*(int *)param_1[0x1fc] + 0xa8))(1,1,0);
  (**(code **)(*(int *)param_1[0x236] + 0xa8))(1,1,0);
  (**(code **)(*(int *)param_1[0x237] + 0xa8))(1,1,0);
  (**(code **)(*(int *)param_1[0x2d3] + 0xa8))(1,1,0);
  (**(code **)(*(int *)param_1[0x2d4] + 0xa8))(1,1,0);
  (**(code **)(*(int *)param_1[0x316] + 0xa8))(1,1,0);
  (**(code **)(*(int *)param_1[0x2d5] + 0xa8))(1,1,0);
  (**(code **)(*(int *)param_1[0x305] + 0xa8))(1,1,0);
  (**(code **)(*(int *)param_1[0x306] + 0xa8))(1,1,0);
  (**(code **)(*(int *)param_1[0x317] + 0xa8))(1,1,0);
  (**(code **)(*(int *)param_1[0x318] + 0xa8))(1,1,0);
  (**(code **)(*(int *)param_1[0x319] + 0xa8))(1,1,0);
                    /* WARNING: Could not recover jumptable at 0x00491408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))();
  return;
}

