
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00491410(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238 [14];
  char local_200 [512];
  
  FUN_00491be0(&local_23c,&local_240);
  iVar1 = FUN_00491f90(2,0,local_23c,local_238[0],local_238[1],*(undefined4 *)(param_1 + 0x7e4),
                       "NNM_SM_INFO_POSITION",0x219a,0,local_240,0,0);
  *(int *)(param_1 + 0x4b4) = iVar1;
  *(undefined4 *)(iVar1 + 0x6c) = 0xbf800000;
  if (*(int *)(param_1 + 2000) != 0) {
    iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x7e0))();
    iVar2 = FUN_004c4830();
    if (iVar1 != iVar2) {
      *(undefined1 *)(*(int *)(param_1 + 0x4b4) + 0x48) = 0;
    }
  }
  iVar1 = 0;
  pfVar4 = (float *)(param_1 + 0x948);
  do {
    sprintf(local_200,"Interface\\NeuroNet\\NavMap\\NewNavMap\\waypoint%d.3db",iVar1);
    FUN_0059ec80(local_200,0,1);
    pfVar4[-1] = (float)(byte)DAT_00679ba4 * _DAT_005c7f68;
    *pfVar4 = (float)DAT_00679ba4._1_1_ * _DAT_005c7f68;
    pfVar4[1] = (float)DAT_00679ba4._2_1_ * _DAT_005c7f68;
    pfVar4[3] = (float)DAT_00679ba4._3_1_ * _DAT_005c7f68;
    puVar3 = (undefined4 *)
             (**(code **)(**(int **)Engine_exref + 0xa0))(*(int **)Engine_exref,pfVar4[-5]);
    puVar5 = local_238;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    if (DAT_0067209c == (int *)0x0) {
      DAT_0067209c = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_0067209c + 0x10))(DAT_0067209c,local_238,local_238,0x3f19999a);
    (**(code **)(**(int **)Engine_exref + 0x9c))(*(int **)Engine_exref,pfVar4[-5],&stack0xfffffdb8);
    iVar1 = iVar1 + 1;
    pfVar4 = pfVar4 + 10;
  } while (iVar1 < 10);
  return;
}

