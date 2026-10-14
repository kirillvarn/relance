
void __thiscall FUN_00546d00(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  if (*(undefined4 **)(param_1 + 0xec) == (undefined4 *)0x0) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %s",
               "E:\\FL\\Scratch\\Source\\Client\\space\\ship.cpp",0x863,"stale request detected");
    return;
  }
  cVar1 = (**(code **)**(undefined4 **)(param_1 + 0xec))(param_2,param_3,param_4);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  iVar2 = FUN_0054baf0();
  if (param_1 != iVar2) {
    return;
  }
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      iVar2 = DAT_00678b2c;
      break;
    case 1:
      iVar2 = DAT_00678b28;
      break;
    case 2:
    case 5:
      goto LAB_00546d82;
    case 3:
      iVar2 = DAT_00678b20;
      break;
    case 4:
      goto LAB_00546d7b;
    default:
      goto LAB_00546db7;
    }
  }
  else {
    if (param_2 != 2) {
      return;
    }
    switch(param_3) {
    case 0:
    case 1:
    case 2:
    case 5:
LAB_00546d82:
      iVar2 = DAT_00678b24;
      break;
    default:
      goto LAB_00546db7;
    case 4:
LAB_00546d7b:
      iVar2 = DAT_00678b30;
    }
  }
  if (iVar2 != 0) {
    FUN_00489e80(iVar2,0);
  }
LAB_00546db7:
  return;
}

