
int * __thiscall FUN_00502ba0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  HardpointInfo *pHVar10;
  uint local_60;
  long lStack_5c;
  int *local_58;
  HardpointInfo aHStack_54 [4];
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bf831;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_4 = 0;
  local_58 = param_1;
  FUN_005b7fba(param_1 + 0xb,0x24,5,&LAB_00502de0,FUN_00502e00);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[1] = param_2;
  if (param_2 == 0) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: %s",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\JumpEffect.cpp",0xe3,
               "null solar passed to JumpGateEffect constructor");
  }
  *param_1 = 0;
  local_60 = *(uint *)(param_1[1] + 0x200);
  bVar2 = ID_String::IsEmpty((ID_String *)&local_60);
  if (bVar2) {
    local_60 = CreateID("jump_effect_default");
  }
  puVar1 = (undefined4 *)*DAT_00674fd8;
  do {
    if (puVar1 == DAT_00674fd8) {
LAB_00502c76:
      if (*param_1 == 0) {
        pcVar3 = ID_String::get_string((ID_String *)&local_60);
        (**(code **)FDUMP_exref)
                  (0x100001,"%s(%d) : *** ERROR: Missing jump effect: %s\n",
                   "E:\\FL\\Scratch\\Source\\Client\\Space\\JumpEffect.cpp",0xf8,pcVar3);
      }
      piVar6 = (int *)param_1[1];
      param_1[2] = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      if ((((piVar6 == (int *)0x0) || (piVar6 == (int *)0xfffffff4)) ||
          (iVar4 = piVar6[4], iVar4 == 0)) || ((*(uint *)(iVar4 + 0x4c) & 0x303) != 0x303)) {
        iVar4 = 0;
      }
      pcVar3 = *(char **)(*(int *)(iVar4 + 0x88) + 0xa4);
      pHVar10 = aHStack_54;
      plVar9 = &lStack_5c;
      lVar5 = (**(code **)(*piVar6 + 0x1c))();
      FindHardpoint_PS(lVar5,pcVar3,plVar9,pHVar10);
      param_1[3] = iStack_50;
      param_1[4] = iStack_4c;
      iVar4 = *param_1;
      param_1[5] = iStack_48;
      iVar7 = 0;
      if (0 < *(int *)(iVar4 + 0x40)) {
        iVar8 = 0;
        piVar6 = param_1 + 0xc;
        do {
          pcVar3 = *(char **)(iVar8 + 8 + iVar4);
          pHVar10 = aHStack_54;
          plVar9 = &lStack_5c;
          lVar5 = (**(code **)(*(int *)param_1[1] + 0x1c))();
          FindHardpoint_PS(lVar5,pcVar3,plVar9,pHVar10);
          piVar6[1] = iStack_50;
          piVar6[2] = iStack_4c;
          piVar6[3] = iStack_48;
          *piVar6 = *(int *)(iVar8 + 0xc + *param_1);
          iVar4 = *param_1;
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 0xc;
          piVar6 = piVar6 + 9;
        } while (iVar7 < *(int *)(iVar4 + 0x40));
      }
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (local_60 == puVar1[2]) {
      *param_1 = (int)(puVar1 + 2);
      goto LAB_00502c76;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

