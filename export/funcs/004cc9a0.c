
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cc9a0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (DAT_00673570 == 0) {
    FUN_004255c0("static");
  }
  FUN_004225e0();
  uVar4 = FUN_00425640(0);
  FUN_004220a0(uVar4);
  FUN_00421ed0(0xb71);
  FUN_00421ed0(0xb44);
  FUN_00421dd0(0xbe2);
  FUN_00421a70(DAT_00612378,DAT_00612378,DAT_00612378);
  switch(DAT_00612374) {
  case 1:
    FUN_004220c0(5,6);
    break;
  case 2:
    FUN_004220c0(5,2);
    break;
  case 3:
    FUN_004220c0(3,6);
    break;
  case 4:
    FUN_004220c0(3,2);
    break;
  case 5:
    FUN_004220c0(2,6);
    break;
  case 6:
    FUN_00421a70(0x80,0x80,0x80);
    FUN_004220c0(2,2);
    break;
  case 7:
    FUN_00421ed0(0xbe2);
    FUN_004220c0(3,4);
    break;
  default:
    return;
  }
  uVar5 = rand();
  fVar1 = (float)(uVar5 & 0xff) * _DAT_005d748c;
  fVar2 = (float)((int)uVar5 >> 4 & 0xfc) * _DAT_005d748c;
  FUN_00421670(8);
  FUN_00421ca0(fVar1,fVar2);
  FUN_00421cc0((float)*param_1,(float)param_1[1],0);
  fVar3 = fVar1 + _DAT_005c75dc;
  FUN_00421ca0(fVar3,fVar2);
  FUN_00421cc0((float)param_1[2],(float)param_1[1],0);
  fVar2 = fVar2 + _DAT_005c75dc;
  FUN_00421ca0(fVar3,fVar2);
  FUN_00421cc0((float)param_1[2],(float)param_1[3],0);
  FUN_00421ca0(fVar1,fVar2);
  FUN_00421cc0((float)*param_1,(float)param_1[3],0);
  FUN_00421690();
  return;
}

