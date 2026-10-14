
void __fastcall FUN_0045cf60(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uStack_10;
  
  cVar2 = FUN_0055e280();
  if (((cVar2 == '\0') && (cVar2 = FUN_0055e280(), cVar2 == '\0')) &&
     (*(int *)(param_1 + 0x3a8) != 0)) {
    switch(*(undefined4 *)(param_1 + 0x3ac)) {
    case 99:
      pcVar8 = "NeuroNetNavMap";
      break;
    default:
      goto switchD_0045cfb0_caseD_64;
    case 0x65:
      pcVar8 = "NN_PlayerInfo";
      break;
    case 0x66:
      pcVar8 = "NN_Inventory";
      break;
    case 0x67:
      pcVar8 = "NeuroNetStoryStar";
      break;
    case 0x68:
      pcVar8 = "ChatControl";
      break;
    case 0x69:
      pcVar8 = "NN_GroupControl";
      break;
    case 0x6a:
      pcVar8 = "NN_Help";
    }
    FUN_005645c0(0x1b);
    *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_1 + 0x3a8);
    *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x3ac);
    *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_1 + 0x3b0);
    switch(*(undefined4 *)(param_1 + 0x3ac)) {
    default:
      iVar3 = 0;
      break;
    case 0x65:
      iVar3 = 3;
      break;
    case 0x66:
      iVar3 = 1;
      break;
    case 0x67:
      iVar3 = 2;
      break;
    case 0x68:
      iVar3 = 5;
      break;
    case 0x69:
      iVar3 = 6;
      break;
    case 0x6a:
      iVar3 = 4;
    }
    if (*(char *)(param_1 + 0x52c) == '\0') {
      puVar1 = (undefined4 *)(param_1 + (iVar3 * 3 + 0xfc) * 4);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
    }
    else {
      uVar5 = 0;
      uVar6 = 0xbd99999a;
      uVar7 = 0xbfa00000;
    }
    *(undefined4 *)(param_1 + 0x518) = uVar5;
    *(undefined4 *)(param_1 + 0x51c) = uVar6;
    *(undefined4 *)(param_1 + 0x520) = uVar7;
    piVar4 = (int *)FUN_0059da10(pcVar8);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x5c))(0xef02,0,0);
    }
    FUN_0045d770(0x3f800000);
    switch(*(undefined4 *)(param_1 + 0x510)) {
    default:
      iVar3 = 0;
      break;
    case 0x65:
      iVar3 = 3;
      break;
    case 0x66:
      iVar3 = 1;
      break;
    case 0x67:
      iVar3 = 2;
      break;
    case 0x68:
      iVar3 = 5;
      break;
    case 0x69:
      iVar3 = 6;
      break;
    case 0x6a:
      iVar3 = 4;
    }
    FUN_0055e590(DAT_005cea10);
    if (*(char *)(param_1 + 0x52c) == '\0') {
      uStack_10 = *(undefined4 *)(param_1 + 0x498 + iVar3 * 4);
    }
    else {
      uStack_10 = 0x3d4ccccd;
    }
    FUN_0055e360(*(undefined4 *)(param_1 + 0x508),0x3f800000,uStack_10);
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    piVar4 = (int *)(param_1 + 0x3d4);
    iVar3 = 7;
    do {
      if ((int *)*piVar4 != (int *)0x0) {
        if ((piVar4[-7] == *(int *)(param_1 + 0x3a8)) || (piVar4[-7] == *(int *)(param_1 + 0x50c)))
        {
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
        (**(code **)(*(int *)*piVar4 + 0xa8))(0xc,uVar5,0);
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
switchD_0045cfb0_caseD_64:
  return;
}

