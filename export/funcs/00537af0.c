
int * FUN_00537af0(undefined4 param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  int *piVar4;
  
  pvVar3 = Heap::Malloc((Heap *)&DAT_006789a4);
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_005374e0();
  }
  FUN_004110c0(1,1);
  FUN_00410ef0();
  FUN_004115b0();
  FUN_00411300();
  cVar2 = (**(code **)(*piVar4 + 4))();
  if (cVar2 == '\0') {
    iVar1 = piVar4[0x34];
    piVar4[0x34] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      (**(code **)*piVar4)();
    }
    piVar4 = (int *)0x0;
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: Could not load light of range %d",
               "E:\\FL\\Scratch\\Source\\Client\\space\\gamelit.cpp",0x203,(double)param_3);
  }
  return piVar4;
}

