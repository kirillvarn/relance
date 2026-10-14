
void FUN_0051f8d0(void)

{
  float10 fVar1;
  int *piVar2;
  int *piVar3;
  
  if ((DAT_00675314 != 0) && (DAT_00675318 - DAT_00675314 >> 2 != 0)) {
    piVar3 = *(int **)Pipeline_exref;
    (**(code **)(*piVar3 + 0xf0))(piVar3,7,0);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,0);
    piVar2 = piVar3;
    fVar1 = (float10)(**(code **)(*piVar3 + 0x20))(piVar3,DAT_00610534);
    FUN_0040fb60((float)fVar1,piVar2);
    FUN_0051f810(piVar3,2,1);
  }
  return;
}

