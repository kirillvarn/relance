
void FUN_00422440(void)

{
  uint uVar1;
  int unaff_ESI;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 local_4;
  
  ftol();
  ftol();
  uVar1 = ftol();
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xff < (int)uVar1) {
    uVar1 = 0xff;
  }
  local_4 = 0;
  (**(code **)(**(int **)Pipeline_exref + 0x20))(*(int **)Pipeline_exref,0xd,&local_4);
  if (unaff_ESI == 0) {
    piVar4 = *(int **)Pipeline_exref;
    uVar5 = 0;
    (**(code **)(*piVar4 + 0xf0))(piVar4,0x23,0);
    uVar3 = 3;
    uVar2 = 0x8c;
  }
  else {
    piVar4 = *(int **)Pipeline_exref;
    uVar5 = 3;
    (**(code **)(*piVar4 + 0xf0))(piVar4,0x23,3);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x8c,0);
    uVar3 = 0;
    uVar2 = 0x30;
  }
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,uVar2,uVar3);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))
            (*(int **)Pipeline_exref,0x22,
             ((uVar5 & 0xff | 0xffffff00) << 8 | uVar3 & 0xff) << 8 | uVar1 & 0xff);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x24,piVar4);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x25,uVar2);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x1c,1);
  return;
}

