
undefined1 FUN_00558c10(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  float10 fVar5;
  double dVar6;
  
  fVar5 = (float10)FUN_0042d680();
  dVar6 = (double)fVar5;
  uVar2 = FUN_0042d6e0(dVar6);
  if (uVar2 <= DAT_006799e8) {
    dVar6 = 0.0;
  }
  cVar1 = FUN_0042d740(dVar6);
  if (cVar1 == '\0') {
    FUN_00558ac0(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
    FUN_0041b2e0((float)dVar6);
  }
  else {
    FUN_00558e90();
  }
  cVar1 = FUN_00424f30();
  if (cVar1 != '\0') {
    FUN_00422610(0,"E:\\FL\\Scratch\\Source\\Client\\supt\\Support.cpp",0x222);
    FUN_004214d0(0,0,0,0x3f800000);
    FUN_004215e0(0x4100);
    FUN_0043bbc0();
    FUN_004215e0(0x100);
    FUN_00422120(4);
    FUN_0059e300();
    cVar1 = FUN_0042d730();
    if (cVar1 == '\0') {
      uVar3 = FUN_00438c90();
      FUN_00412430(uVar3);
    }
    FUN_00425080();
    FUN_00425140();
  }
  FUN_00579190();
  FUN_00428030(3);
  uVar3 = FUN_00438c90((float)dVar6);
  FUN_00428040(uVar3);
  if (DAT_006799dc == '\0') {
    uVar4 = DAT_006799de != '\0';
  }
  else {
    uVar4 = 8;
  }
  if (DAT_006799dd != '\0') {
    DAT_006799dd = '\0';
    uVar4 = 5;
  }
  return uVar4;
}

