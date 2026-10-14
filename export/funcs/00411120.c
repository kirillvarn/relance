
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00411120(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0xb4);
  *(byte *)(param_1 + 0xb4) = bVar1 | 0x20;
  if ((bVar1 & 4) == 0) {
    uVar2 = *param_2;
    *(byte *)(param_1 + 0xb4) = bVar1 & 0xfe | 0x20;
    switch(uVar2) {
    case 1:
    case 2:
    case 3:
      *(undefined4 *)(param_1 + 0xc) = uVar2;
    case 0xfffffffe:
      *(undefined4 *)(param_1 + 0xb0) = uVar2;
      break;
    default:
      *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = param_2[1];
  *(undefined4 *)(param_1 + 0x14) = param_2[2];
  *(undefined4 *)(param_1 + 0x18) = param_2[3];
  *(undefined4 *)(param_1 + 0x1c) = param_2[4];
  *(undefined4 *)(param_1 + 0x20) = param_2[5];
  *(undefined4 *)(param_1 + 0x24) = param_2[6];
  *(undefined4 *)(param_1 + 0x28) = param_2[7];
  *(undefined4 *)(param_1 + 0x2c) = param_2[8];
  *(undefined4 *)(param_1 + 0x30) = param_2[9];
  *(undefined4 *)(param_1 + 0x34) = param_2[10];
  *(undefined4 *)(param_1 + 0x38) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x3c) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x58) = param_2[0x13];
  *(undefined4 *)(param_1 + 0x5c) = param_2[0x14];
  *(undefined4 *)(param_1 + 0x60) = param_2[0x15];
  *(undefined4 *)(param_1 + 100) = param_2[0x16];
  *(undefined4 *)(param_1 + 0x68) = param_2[0x17];
  *(undefined4 *)(param_1 + 0x6c) = param_2[0x18];
  *(undefined4 *)(param_1 + 0x70) = param_2[0x19];
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0xc) != 3) {
    if (_DAT_005c8a5c < *(float *)(param_1 + 0x70)) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : WARNING:General:%s",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\EngineLight.cpp",0x23b,
                 "invalid light detected: phi > pi");
      *(undefined4 *)(param_1 + 0x70) = 0x40490fdb;
    }
    if (((*(float *)(param_1 + 0x60) < _DAT_005c7474 !=
          (*(float *)(param_1 + 0x60) == _DAT_005c7474)) &&
        (*(float *)(param_1 + 100) < _DAT_005c7474 != (*(float *)(param_1 + 100) == _DAT_005c7474)))
       && (*(float *)(param_1 + 0x68) < _DAT_005c7474 !=
           (*(float *)(param_1 + 0x68) == _DAT_005c7474))) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : WARNING:General:%s",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\EngineLight.cpp",0x241,
                 "invalid light detected: atten all zero");
      *(undefined4 *)(param_1 + 0x60) = 0x3dcccccd;
    }
  }
  if ((DAT_00610588 == 0) && ((*(byte *)(param_1 + 0xb4) & 4) != 0)) {
    (**(code **)(**(int **)Pipeline_exref + 300))(*(int **)Pipeline_exref,(int *)(param_1 + 0xc));
  }
  return;
}

